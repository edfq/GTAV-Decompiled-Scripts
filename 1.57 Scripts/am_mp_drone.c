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
	struct<3> Local_87[32];
	var uLocal_88 = 0;
	struct<348> Local_89 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<12> Local_93 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (unk_0x02BFF15CAA701972())
	{
		func_530(ScriptParam_93);
	}
	else
	{
		func_500(0);
	}
	while (true)
	{
		func_499();
		if (func_488())
		{
			func_500(0);
		}
		if (func_482())
		{
			func_500(0);
		}
		func_2();
		if (unk_0x443E2CA72E118E64())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_481(6))
	{
		func_480();
		func_479();
		func_478();
		func_474();
		func_473();
	}
	func_470();
	func_468();
	func_464();
	func_461();
	if (func_481(0))
	{
		func_412();
	}
	else if (func_481(1))
	{
		if (!func_411())
		{
			func_404();
			func_387();
		}
		else
		{
			func_386(1);
			func_385(7);
		}
	}
	else if (func_481(2))
	{
		func_378();
	}
	else if (func_481(3))
	{
		func_370();
	}
	else if (func_481(4))
	{
		func_369();
		func_368();
		func_366();
		func_365();
		func_364();
		func_363();
		func_362();
		func_354();
		func_350();
		func_333();
		func_331();
		func_289();
		func_288();
		func_272();
		func_378();
		func_269();
		if (func_262(0))
		{
			func_261();
			return;
		}
		func_257();
		func_251();
		func_239(0);
		func_223();
		func_214();
		func_206();
		func_184();
		func_177();
		func_175();
		func_99();
		func_84();
		func_82();
		func_81();
	}
	else if (func_481(5))
	{
		func_33();
	}
	else if (func_481(7))
	{
		func_26();
	}
	if (!func_481(4) && !func_481(6))
	{
		func_20();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()
{
	Local_89.f_45++;
	if (Local_89.f_45 >= 32)
	{
		Local_89.f_45 = 0;
	}
}

void func_4()
{
	if (Local_89.f_45 != -1)
	{
		if (unk_0x159BC3DDA80D71AC(Local_87[Local_89.f_45 /*3*/].f_2))
		{
			if (Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_60[Local_89.f_45] != unk_0xBD11ACD80727BD31(Local_87[Local_89.f_45 /*3*/].f_2))
			{
				Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_60[Local_89.f_45] = unk_0xBD11ACD80727BD31(Local_87[Local_89.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = unk_0xC502CD39B4994F3A(Local_89.f_45);
	if (unk_0x1146A9AE09CE2B14() != iVar0)
	{
		if (func_19(iVar0, 1, 1))
		{
			if (func_17(func_18()))
			{
				if (unk_0x234B68AC2E35ED5A(Local_89.f_7, Local_89.f_45))
				{
					if (!unk_0xFCC26BA7572E9F1F(iVar0) && !unk_0x08F338D098BF714B(iVar0, "AM_MP_DRONE", 0))
					{
						unk_0xC664C0067EEAB8D1(&(Local_89.f_7), Local_89.f_45);
					}
				}
				if (func_14(iVar0, 0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_89.f_7, Local_89.f_45) && func_9(iVar0))
					{
						func_7(iVar0, 1);
						unk_0x84CE5E7CD3A7E197(Local_89.f_158, iVar0, 1);
						unk_0x191DDA30577F440A(&(Local_89.f_7), Local_89.f_45);
					}
				}
				else if ((vdist2(func_6(iVar0), Local_89.f_149) > 504100f && !func_481(1)) && !func_481(3))
				{
					if (unk_0x234B68AC2E35ED5A(Local_89.f_7, Local_89.f_45))
					{
						func_7(iVar0, 0);
						unk_0x84CE5E7CD3A7E197(Local_89.f_158, iVar0, 0);
						unk_0xC664C0067EEAB8D1(&(Local_89.f_7), Local_89.f_45);
						unk_0xC664C0067EEAB8D1(&(Local_89.f_8), Local_89.f_45);
					}
				}
			}
			else if (func_14(iVar0, 1) && func_9(iVar0))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_89.f_8, Local_89.f_45))
				{
					func_7(iVar0, 1);
					unk_0x191DDA30577F440A(&(Local_89.f_8), Local_89.f_45);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_89.f_8, Local_89.f_45))
			{
				func_7(iVar0, 0);
				unk_0xC664C0067EEAB8D1(&(Local_89.f_8), Local_89.f_45);
				unk_0xC664C0067EEAB8D1(&(Local_89.f_7), Local_89.f_45);
			}
		}
	}
}

Vector3 func_6(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = -1514001560;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	iVar1 = func_8(iParam0);
	if (!iVar1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iVar1);
	}
}

var func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)
{
	if (func_13(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0)
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

int func_11(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_12()
{
	return -1;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_13(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	Var0 = { func_6(iParam0) };
	if (bParam1)
	{
		if (func_16())
		{
			if (func_17(func_15()))
			{
				if (vdist2(Var0, unk_0xD6E677FAD7521410(func_15(), 1)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (vdist2(Var0, Local_89.f_149) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1590754 != func_12())
	{
		if (unk_0x419E13582192CFEA(Global_1372077))
		{
			return Global_1372077;
		}
		if (unk_0x419E13582192CFEA(Global_1700882[Global_1590754]))
		{
			return Global_1700882[Global_1590754];
		}
	}
	return -1;
}

bool func_16()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 8);
}

int func_17(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		return Global_1695733.f_20;
	}
	return -1;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	int iVar0;
	
	if (Local_89.f_155)
	{
		if (func_25(&(Local_89.f_248)))
		{
			if (func_24())
			{
				iVar0 = Global_262145.f_24961;
			}
			else
			{
				iVar0 = Global_262145.f_24330;
			}
			if (func_22(&(Local_89.f_248), iVar0, 0))
			{
				func_21(&(Local_89.f_248));
				Local_89.f_18 = 100;
				unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 4);
				unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 3);
				unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 24);
				Local_89.f_155 = 0;
			}
		}
	}
}

void func_21(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_22(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_23(uParam0, bParam2, 0);
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

void func_23(var uParam0, bool bParam1, bool bParam2)
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

bool func_24()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 2);
}

bool func_25(var uParam0)
{
	return uParam0->f_1;
}

void func_26()
{
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			if (!func_27())
			{
				func_500(1);
			}
			else
			{
				func_500(0);
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
	else if (!func_27())
	{
		func_500(1);
	}
	else
	{
		func_500(0);
	}
}

int func_27()
{
	if (func_32())
	{
		return 1;
	}
	if (func_31())
	{
		return 1;
	}
	if (func_30() && func_28(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_29(Global_2426865[iParam0 /*449*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_29(int iParam0)
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

bool func_30()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 5);
}

bool func_31()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 24);
}

bool func_32()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 16);
}

void func_33()
{
	int iVar0;
	
	unk_0xEFD424FDD55A6EC7(9);
	unk_0xEFD424FDD55A6EC7(7);
	unk_0xEFD424FDD55A6EC7(8);
	unk_0xAF98B1BA240CE3DB();
	unk_0x366E7F593105797F(0, 199, 1);
	unk_0x366E7F593105797F(0, 200, 1);
	func_80();
	func_78();
	func_71(1);
	if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 1))
	{
		if (!func_41() && !func_40())
		{
			if ((func_39() || func_24()) || func_38())
			{
				unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
			}
		}
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
		{
			unk_0xBE0E1FA08021D61B(unk_0xBD11ACD80727BD31(Local_89.f_158), 1);
		}
		if (unk_0x964C4D363AF812CB(Local_89.f_34))
		{
			Local_89.f_34 = unk_0x5AD02BBC63E31E46();
			unk_0x9B0169E27978C1A2(Local_89.f_34, "HUD_Static_Loop", Local_89.f_156, 1);
		}
		if (!func_37())
		{
			unk_0x8543AEC08F877EE9(0, 300, 100);
			unk_0x81498BC667997F2F(func_36());
			unk_0x191DDA30577F440A(&(Local_89.f_6), 0);
		}
		unk_0x191DDA30577F440A(&(Local_89.f_5), 1);
	}
	else if (!func_25(&(Local_89.f_244)))
	{
		func_23(&(Local_89.f_244), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_35())
		{
			iVar0 = 500;
		}
		else if (func_16() && func_34())
		{
			iVar0 = 150;
		}
		if (func_22(&(Local_89.f_244), iVar0, 0) || func_37())
		{
			if (Local_89.f_38 == -1)
			{
				if (unk_0x964C4D363AF812CB(Local_89.f_38))
				{
					Local_89.f_38 = unk_0x5AD02BBC63E31E46();
					unk_0x9B0169E27978C1A2(Local_89.f_38, "HUD_Disconnect", Local_89.f_156, 1);
				}
			}
			func_386(1);
			func_385(7);
		}
	}
}

bool func_34()
{
	return Global_2544210.f_342;
}

bool func_35()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 4);
}

char* func_36()
{
	if (func_16())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_37()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 20);
}

bool func_38()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 3);
}

bool func_39()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 11);
}

bool func_40()
{
	return Global_2518646;
}

int func_41()
{
	if ((func_70(unk_0x1146A9AE09CE2B14(), 0) && Global_1319196 == 1) && func_42())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	char* sVar0;
	
	if ((Global_1319196 != -1 || Global_1319202 != -1) || Global_1319205 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_62(unk_0x7D2B9E6A64637269()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "enter_left", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "enter", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "exit", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "exit_left", 3)) || func_60(unk_0x7D2B9E6A64637269(), 2106541073))
		{
			return 0;
		}
		if (((((((((!unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "base", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "idle_a", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "idle_b", 3)) && !unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 1;
}

int func_43()
{
	int iVar0;
	
	if (func_59(unk_0x1146A9AE09CE2B14()))
	{
		iVar0 = func_58(unk_0x1146A9AE09CE2B14());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 4) && unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar0))) && !unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar0))) && unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iVar0), 0)) && unk_0x419E13582192CFEA(unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iVar0), 0))) && func_56(unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iVar0), 0)))
			{
				return 1;
			}
			if (!func_55(Global_4456448.f_85535))
			{
				if (func_59(iVar0))
				{
					if (func_54(iVar0))
					{
						return 1;
					}
					else if (func_11(unk_0x1146A9AE09CE2B14()) || func_53())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1695762)
	{
		return 1;
	}
	if (func_52(unk_0x1146A9AE09CE2B14()))
	{
		iVar0 = func_51(unk_0x1146A9AE09CE2B14());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 9) && unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar0))) && !unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar0))) && unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iVar0), 0)) && unk_0x419E13582192CFEA(unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iVar0), 0))) && unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_50(iVar0))
			{
				return 1;
			}
			else if (func_11(unk_0x1146A9AE09CE2B14()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_70(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = func_49(unk_0x1146A9AE09CE2B14());
		if (func_19(iVar0, 0, 1))
		{
			if ((((Global_1590753 != func_12() && func_11(Global_1590753)) && func_29(func_57(Global_1590753)) == 11) && func_48(Global_1590753, -1)) && unk_0xEACFC87E44438F24(unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(Global_1590753), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_47(iVar0))
			{
				return 1;
			}
			else if (func_11(unk_0x1146A9AE09CE2B14()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_46(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x1146A9AE09CE2B14() != func_12())
		{
			iVar0 = Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9;
			if (func_19(iVar0, 0, 1))
			{
				if (func_11(unk_0x1146A9AE09CE2B14()) || func_53())
				{
					return 1;
				}
			}
		}
	}
	if (func_52(unk_0x1146A9AE09CE2B14()) || func_45(unk_0x1146A9AE09CE2B14()))
	{
		switch (Global_1319202)
		{
			case 1:
				if (Global_262145.f_22772)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22773)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22774)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319200 == 1)
	{
		return 1;
	}
	if (func_44(3))
	{
		if (Global_1573356 == 185)
		{
			if (Global_1574457 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_262145.f_5011[iParam0] == Global_4456448.f_85535;
}

int func_45(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_29(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_12())
			{
				return func_29(Global_2426865[iParam0 /*449*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_12())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_3, 4);
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_19(iParam0, 1, 1))
	{
		if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iParam0), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iParam0), 0);
			if (unk_0xBFCE58B2B3249999(uVar0, 0))
			{
				if (unk_0x7D2B9E6A64637269() == unk_0x27FC1B0077581B37(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2426865[iParam0 /*449*/].f_319.f_9;
}

int func_50(int iParam0)
{
	if (iParam0 != func_12())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319.f_2, 6);
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2426865[iParam0 /*449*/].f_319.f_9;
}

int func_52(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_12())
			{
				return func_29(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

bool func_53()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970, 6);
}

int func_54(int iParam0)
{
	if (iParam0 != func_12())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 6);
	}
	return 0;
}

bool func_55(int iParam0)
{
	return Global_262145.f_5002[4] == iParam0;
}

int func_56(int iParam0)
{
	if (unk_0x6471F4759775FCA4(uParam0) == joaat("hauler2") || unk_0x6471F4759775FCA4(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2426865[iParam0 /*449*/].f_319.f_9;
}

int func_59(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_12())
			{
				return func_29(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (func_61(iParam0))
	{
		if (unk_0x4E8DA737B686529A(iParam0, iParam1) == 1 || unk_0x4E8DA737B686529A(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_17(uParam0))
	{
		if (!unk_0xECEC7528A52B4EE8(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_68(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_64(iVar0, iVar1, 6, 4);
			iVar3 = func_63(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x01758128AAB0BA8F(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x01758128AAB0BA8F(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x71794FDA9361403E(&Var0);
		iVar1 = (iParam1 - func_67(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x9404A07A08FA1D0F(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var3);
		iVar4 = (iParam1 - func_65(iParam0, func_66(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_77181.f_26[iParam2] && iParam1 == Global_77181[iParam2]) && Global_77181.f_13[iParam2] != 0)
		{
			return Global_77181.f_13[iParam2];
		}
		iVar5 = unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_66(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xDF9AB3C346705246(iVar4, &Var3);
		Global_77181.f_13[iParam2] = Var3.f_1;
		Global_77181[iParam2] = iParam1;
		Global_77181.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_68(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xECEC7528A52B4EE8(uParam0))
	{
		return -99;
	}
	uVar0 = func_66(iParam1);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, uVar0);
	iVar2 = unk_0x288277F22D527487(iParam0, uVar0);
	return func_69(iParam0, iVar1, iVar2, iParam1);
}

int func_69(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	uVar0 = func_66(iParam3);
	iVar1 = unk_0x1AAA5445D3C56366(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x1887979EFA1D3BF6(uParam0, uVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_70(int iParam0, bool bParam1)
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
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_12())
			{
				return func_29(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

void func_71(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_76(0))
		{
			func_72(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_72(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_75())
		{
			func_74(1, 1);
		}
		else
		{
			func_74(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_73())
	{
		Global_19798.f_1 = 3;
	}
}

int func_73()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_74(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

bool func_75()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_76(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_77()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_78()
{
	unk_0xDA81FB7770247CC0();
	func_79();
}

void func_79()
{
	Global_22531.f_134 = 1;
}

void func_80()
{
	Global_1312684 = 1;
}

void func_81()
{
	if (func_30())
	{
		if (func_31())
		{
			if (func_17(unk_0x7D2B9E6A64637269()))
			{
				unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 124, 1);
			}
		}
	}
}

void func_82()
{
	char* sVar0;
	
	if (!func_83())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	unk_0xF523AEC50C58B0E3(sVar0);
	if (unk_0xDFE58ECD10F98CE1(sVar0))
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
		{
			if (!unk_0x176066ACB1B41C48(Local_89.f_173[unk_0x1146A9AE09CE2B14()]))
			{
				unk_0x1AB30A19F1212DFB(sVar0);
				if (func_35())
				{
					Local_89.f_173[unk_0x1146A9AE09CE2B14()] = unk_0x48558536A19BA88A("scr_xs_guided_missile_trail", unk_0xBD11ACD80727BD31(Local_89.f_158), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_89.f_173[unk_0x1146A9AE09CE2B14()] = unk_0x48558536A19BA88A("scr_xs_guided_missile_trail", unk_0xBD11ACD80727BD31(Local_89.f_158), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				}
			}
		}
	}
}

int func_83()
{
	if (func_35())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (!unk_0x419E13582192CFEA(Local_89.f_160))
		{
			unk_0x16E516CA9C88FF48(func_98());
			if (unk_0xA9C0BBFB9CBB66F1(func_98()))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 6))
				{
					if (func_92(unk_0x5E85B9A5E6984D7D(false, 0) + 1, 0, 1))
					{
						unk_0x54BBD34B26EF27D9(unk_0x15E743373D87C416(0) + 1);
						unk_0x191DDA30577F440A(&(Local_89.f_5), 6);
					}
				}
				else if (unk_0x035BBFB481EB12F2(1))
				{
					Local_89.f_160 = unk_0x0FDCFECB2EF2BC1C(26, func_98(), Local_89.f_149, unk_0xA8D713A937F31250(unk_0xBD11ACD80727BD31(Local_89.f_158)), 0, 0);
					unk_0x8F160110753EB17B(Local_89.f_160, 1);
					unk_0x4603196EEEA2355C(Local_89.f_160, false, 0);
					unk_0xBE0E1FA08021D61B(Local_89.f_160, 0);
					unk_0xBE91B077ADADE97F(Local_89.f_160, 1);
					unk_0x824F744352C8BC82(func_98());
					unk_0x7B28A83A0D3DD0F9(Local_89.f_160, 118, 0);
					unk_0x7B28A83A0D3DD0F9(Local_89.f_160, 108, 1);
					unk_0x7B28A83A0D3DD0F9(Local_89.f_160, 208, 1);
					unk_0x3A653D4F5FA4B665(Local_89.f_160, 1, 1, 1, 1, 1, 0, 0, 0);
					unk_0x0F1058706D5A58B4(Local_89.f_160, unk_0xBD11ACD80727BD31(Local_89.f_158), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x158745943C39F680(Local_89.f_160, 0, 0);
					Global_1695733.f_23 = Local_89.f_160;
				}
			}
		}
		else if (func_17(Local_89.f_160))
		{
			if (unk_0x1F9D47D45E125FA6(Local_89.f_160))
			{
				unk_0x4603196EEEA2355C(Local_89.f_160, false, 0);
			}
			if (!func_90(unk_0x1146A9AE09CE2B14()) && !func_87(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0)
				{
					func_86(Global_1575032);
				}
			}
			else if ((Global_1695733.f_4 == -1 || Global_1695733.f_4 == 0) || Global_1695733.f_4 == Global_1575021)
			{
				func_86(Global_1575032);
			}
			if (unk_0x0AF04716D74DE278(Local_89.f_160) != func_85())
			{
				unk_0x2271ED1E65FB75EE(Local_89.f_160, func_85());
			}
			if (!unk_0x5976053523EA16C8(Local_89.f_160))
			{
				unk_0x0F1058706D5A58B4(Local_89.f_160, unk_0xBD11ACD80727BD31(Local_89.f_158), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0x158745943C39F680(Local_89.f_160, 0, 0);
			}
		}
	}
}

int func_85()
{
	if (Global_1695733.f_4 != -1 && Global_1695733.f_4 != 0)
	{
		return Global_1695733.f_4;
	}
	return Global_1575032;
}

void func_86(int iParam0)
{
	if (Global_1695733.f_4 != iParam0)
	{
		Global_1695733.f_4 = iParam0;
	}
}

int func_87(int iParam0)
{
	if (func_89(iParam0) == 236 || func_89(iParam0) == 150)
	{
		return func_88(iParam0);
	}
	return 0;
}

int func_88(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_89(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

bool func_90(int iParam0)
{
	return func_91(iParam0, 20);
}

bool func_91(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

bool func_92(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(2, iParam0, 1, bParam1, bParam2);
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x234B68AC2E35ED5A(Global_1391771, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_97(iParam0) - func_96(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_95(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_96(iParam0, 1));
		}
		if (!bParam4 && Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] != 3)
		{
			iVar1 = (iVar1 - func_94(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
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

int func_95(int iParam0)
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

int func_96(int iParam0, bool bParam1)
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

int func_97(int iParam0)
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

int func_98()
{
	return joaat("g_m_m_chigoon_01");
}

void func_99()
{
	if (func_174())
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		if (unk_0x0E8572B08CEB6A11(Local_89.f_168) && unk_0xBEFF25A5E38D38C3(Local_89.f_168))
		{
			if (!func_83())
			{
				func_165();
				func_131();
			}
			else
			{
				func_112();
				func_102();
			}
			unk_0xFFCFF4576AE8F21E();
			func_101(1);
			func_100(2);
		}
	}
}

void func_100(int iParam0)
{
	Global_1315740 = iParam0;
}

void func_101(int iParam0)
{
	Global_1380638.f_1121 = iParam0;
}

void func_102()
{
	int iVar0;
	
	if (!unk_0xDAE4BC89A198A6AF(Local_89.f_169))
	{
		if (func_16())
		{
			Local_89.f_169 = func_111();
		}
		else
		{
			Local_89.f_169 = func_110();
		}
		return;
	}
	iVar0 = func_18();
	if (iVar0 < 0 || !func_17(iVar0))
	{
		return;
	}
	if (func_16())
	{
		func_106();
	}
	func_105(Local_89.f_169, 0);
	func_104(Local_89.f_169, 3, 3, 3);
	func_103(Local_89.f_169, 0f, 0f, 0f, 0f, (unk_0xA8D713A937F31250(iVar0) + 180f));
	unk_0x0F33095580A670CE(1);
	unk_0x44EF5678D6916481(Local_89.f_169, 255, 255, 255, 0, 0);
}

void func_103(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0x704F8697BB515627(uParam0, "SET_ALT_FOV_HEADING");
	unk_0x82D42F43BE26EB72(fParam1);
	unk_0x82D42F43BE26EB72(fParam2);
	unk_0x82D42F43BE26EB72(fParam5);
	unk_0x392841D58D2EED1D();
}

void func_104(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x704F8697BB515627(uParam0, "SET_WEAPON_VALUES");
	unk_0x9E3D03981E2E9AD9(iParam1);
	unk_0x9E3D03981E2E9AD9(iParam2);
	unk_0x9E3D03981E2E9AD9(iParam3);
	unk_0x392841D58D2EED1D();
}

void func_105(var uParam0, int iParam1)
{
	unk_0x704F8697BB515627(uParam0, "SET_ZOOM_VISIBLE");
	unk_0x9D7453DF8B7E9E0B(iParam1);
	unk_0x392841D58D2EED1D();
}

void func_106()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_16())
	{
		iVar0 = 10;
	}
	fVar1 = Local_89.f_120;
	if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))))
	{
		if (unk_0x964C4D363AF812CB(Local_89.f_37))
		{
			Local_89.f_37 = unk_0x5AD02BBC63E31E46();
			unk_0x9B0169E27978C1A2(Local_89.f_37, "Out_Of_Bounds_Alarm_Loop", Local_89.f_156, 1);
		}
		if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))) && fVar1 < (func_109() - IntToFloat((45 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((45 * iVar0))) && fVar1 < (func_109() - IntToFloat((40 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((40 * iVar0))) && fVar1 < (func_109() - IntToFloat((35 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((35 * iVar0))) && fVar1 < (func_109() - IntToFloat((30 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((30 * iVar0))) && fVar1 < (func_109() - IntToFloat((25 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((25 * iVar0))) && fVar1 < (func_109() - IntToFloat((20 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((20 * iVar0))) && fVar1 < (func_109() - IntToFloat((15 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((15 * iVar0))) && fVar1 < (func_109() - IntToFloat((10 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((10 * iVar0))) && fVar1 < (func_109() - IntToFloat((5 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((5 * iVar0))) && fVar1 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x964C4D363AF812CB(Local_89.f_37))
		{
			unk_0x791B4C3811D53DFA(Local_89.f_37);
			unk_0xBAB6F7501A822416(Local_89.f_37);
			Local_89.f_37 = -1;
		}
	}
}

void func_107(float fParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_WARNING_FLASH_RATE");
	unk_0x82D42F43BE26EB72(fParam0);
	unk_0x392841D58D2EED1D();
}

void func_108(char* sParam0, int iParam1)
{
	unk_0x704F8697BB515627(Local_89.f_169, sParam0);
	unk_0x9D7453DF8B7E9E0B(iParam1);
	unk_0x392841D58D2EED1D();
}

float func_109()
{
	if (Global_1695733.f_8 == 0f)
	{
		return Global_262145.f_24338;
	}
	return Global_1695733.f_8;
}

var func_110()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4456448.f_127873)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x42AA2CCF0B61DCD8(sVar0);
}

var func_111()
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return unk_0x42AA2CCF0B61DCD8(sVar0);
}

void func_112()
{
	if (func_16())
	{
		if (!func_130())
		{
			return;
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(20, "DRONE_SPACE", -1);
			func_126(21, "DRONE_POSITION", -1);
			if (func_35())
			{
				if (!unk_0x0D901EFDFD7EF9D5(0))
				{
					func_125(208, "DRONE_SPEEDU", -1, 0);
					func_125(207, "DRONE_SLOWD", -1, 0);
				}
				else
				{
					func_125(209, "DRONE_SPEEDU", -1, 0);
					func_125(210, "DRONE_SLOWD", -1, 0);
				}
			}
			func_125(75, "MOVE_DRONE_RE", -1, 0);
			unk_0x191DDA30577F440A(&(Local_89.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x0D901EFDFD7EF9D5(0))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 17))
		{
			unk_0x191DDA30577F440A(&(Local_89.f_5), 17);
			unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 17))
	{
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 17);
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_124(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_121(bParam4, bParam8))
	{
		return;
	}
	if (func_119())
	{
		return;
	}
	if (unk_0xFEABE4F1525A0A08())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_116(unk_0x1146A9AE09CE2B14(), 0))
		{
			return;
		}
	}
	if (unk_0x3640D836D145B814())
	{
		if (unk_0x4793CFF25F0D14B5() == 0 || unk_0xFEABE4F1525A0A08())
		{
			return;
		}
	}
	if (Global_22670.f_5026 != 0)
	{
		if (unk_0x0C7C436873368EDB(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22670.f_5026)
			{
				if (Global_22670.f_5283[iVar1] != 361)
				{
					StringCopy(&(Global_22670.f_5028[iVar1 /*16*/]), unk_0x908D1ACF42DAF9B8(2, Global_22670.f_5283[iVar1], 1), 64);
				}
				else if (Global_22670.f_5296[iVar1] != 32)
				{
					StringCopy(&(Global_22670.f_5028[iVar1 /*16*/]), unk_0xD895F953C52A8886(2, Global_22670.f_5296[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22670.f_5027 = 0;
		}
		if (!Global_22670.f_5027)
		{
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x82D42F43BE26EB72((1f - (Global_22670.f_5338 / 100f)));
			unk_0x392841D58D2EED1D();
			if (unk_0x3640D836D145B814())
			{
				unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x9D7453DF8B7E9E0B(1);
				unk_0x392841D58D2EED1D();
			}
			iVar1 = 0;
			while (iVar1 < Global_22670.f_5026)
			{
				if (unk_0x15173FB88ABC94F9(&(Global_22670.f_5221[iVar1 /*4*/])) != unk_0x15173FB88ABC94F9("PREV"))
				{
					unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(iVar1);
					func_115(&(Global_22670.f_5028[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x15173FB88ABC94F9(&(Global_22670.f_5221[iVar2 /*4*/])) == unk_0x15173FB88ABC94F9("PREV"))
					{
						func_115(&(Global_22670.f_5028[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22670.f_5270[iVar1] == -1)
					{
						func_114(&(Global_22670.f_5221[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22670.f_5270[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x35CA0C119E6A2A27(&(Global_22670.f_5221[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x4E2EF4B6B665F3F4(iVar3, 70);
						}
						else
						{
							unk_0x38CD3C04C877C35F(iVar3);
						}
						unk_0xD4B2C39F7AD5A6A6();
					}
					if (unk_0x3640D836D145B814())
					{
						if (Global_22670.f_5283[iVar1] != 361 && unk_0x234B68AC2E35ED5A(Global_22670.f_5309, iVar1))
						{
							unk_0x9D7453DF8B7E9E0B(1);
							unk_0x9E3D03981E2E9AD9(Global_22670.f_5283[iVar1]);
						}
						else
						{
							unk_0x9D7453DF8B7E9E0B(0);
							unk_0x9E3D03981E2E9AD9(361);
						}
					}
					unk_0x392841D58D2EED1D();
				}
				iVar1++;
			}
			if (unk_0x15173FB88ABC94F9(&(Global_4271135.f_16)) != unk_0x15173FB88ABC94F9(""))
			{
				unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(Global_22670.f_5026);
				func_115(&Global_4271135);
				if (Global_4271135.f_20 == -1)
				{
					func_114(&(Global_4271135.f_16));
				}
				else
				{
					iVar4 = Global_22670.f_5270[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x35CA0C119E6A2A27(&(Global_4271135.f_16));
					if (bParam5)
					{
						unk_0x4E2EF4B6B665F3F4(iVar4, 70);
					}
					else
					{
						unk_0x38CD3C04C877C35F(iVar4);
					}
					unk_0xD4B2C39F7AD5A6A6();
				}
				unk_0x392841D58D2EED1D();
			}
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(80);
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22670.f_5339)
			{
				unk_0x9E3D03981E2E9AD9(1);
			}
			else
			{
				unk_0x9E3D03981E2E9AD9(0);
			}
			unk_0x392841D58D2EED1D();
			Global_22670.f_5027 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22670.f_5026)
		{
			if (Global_22670.f_5270[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x9E3D03981E2E9AD9(iVar1);
					unk_0x35CA0C119E6A2A27(&(Global_22670.f_5221[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x4E2EF4B6B665F3F4(iParam2, 70);
					}
					else
					{
						unk_0x38CD3C04C877C35F(iParam2);
					}
					unk_0xD4B2C39F7AD5A6A6();
					unk_0x392841D58D2EED1D();
				}
			}
			iVar1++;
		}
		if (Global_4271135.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x704F8697BB515627(Global_22670.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x9E3D03981E2E9AD9(iVar1);
				unk_0x35CA0C119E6A2A27(&(Global_4271135.f_16));
				if (bParam5)
				{
					unk_0x4E2EF4B6B665F3F4(iParam2, 70);
				}
				else
				{
					unk_0x38CD3C04C877C35F(iParam2);
				}
				unk_0xD4B2C39F7AD5A6A6();
				unk_0x392841D58D2EED1D();
			}
		}
		unk_0x53CE6C5893F65093(76, 66);
		unk_0x0C456F50E9145299(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22670.f_8674)
			{
				unk_0x1F2C4D3A741ED5AD(15, 0f, -0.0375f);
				Global_22670.f_8674 = 1;
			}
		}
		else if (Global_22670.f_8674)
		{
			unk_0x956EB3331C33B055(15);
			Global_22670.f_8674 = 0;
		}
		unk_0x17552FF90A99ABEA();
		if (Global_22670.f_5312)
		{
			unk_0x53CE6C5893F65093(82, 66);
			unk_0x0C456F50E9145299(0f, 0f, 0f, 0f);
			unk_0x43D93129BD1AD792(Global_22670.f_5917[iVar0 /*10*/], Global_22670.f_5310, Global_22670.f_5311, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x17552FF90A99ABEA();
		}
		else
		{
			unk_0x44EF5678D6916481(Global_22670.f_5917[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_114(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_115(var uParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_117(-1, 0) == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_118();
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

int func_118()
{
	return Global_1312763;
}

int func_119()
{
	struct<3> Var0;
	
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	if (func_120())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x3AEC124A3999B3D1(&Var0);
		if (Global_19743 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_120()
{
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1)
{
	if (Global_2441237.f_2012.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE0A6F16F546C8274() || (func_123(8, -1) && func_122() != 65)) || (unk_0xC62ED852B1172A41() != 0 && !bParam1)) || (unk_0xF471787D45ADC2C1() && !bParam0)) || unk_0x1C8EA7DABB529A31()) || Global_77508) || Global_22670.f_8673) || unk_0xD76BEAE1A33E3251()) || Global_99422.f_1441)
	{
		return 0;
	}
	return 1;
}

int func_122()
{
	return Global_1312836;
}

bool func_123(int iParam0, int iParam1)
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

int func_124(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x02BFF15CAA701972() && unk_0x8ED8428AB65B7367())
		{
			iParam2 = unk_0xC9D88F06B228AD40();
		}
	}
	StringCopy(&cVar0, unk_0x471C98FD94C0A5FD(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x15173FB88ABC94F9(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22670.f_5978[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22670.f_5978[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22670.f_5978[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_125(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x908D1ACF42DAF9B8(2, iParam0, 1);
	if (Global_22670.f_5026 >= 12)
	{
		StringCopy(&Global_4271135, sVar0, 64);
		StringCopy(&(Global_4271135.f_16), sParam1, 16);
		Global_4271135.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x191DDA30577F440A(&(Global_22670.f_5309), Global_22670.f_5026);
	}
	StringCopy(&(Global_22670.f_5028[Global_22670.f_5026 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22670.f_5221[Global_22670.f_5026 /*4*/]), sParam1, 16);
	Global_22670.f_5270[Global_22670.f_5026] = iParam2;
	Global_22670.f_5283[Global_22670.f_5026] = iParam0;
	Global_22670.f_5296[Global_22670.f_5026] = 32;
	Global_22670.f_5026++;
}

void func_126(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xD895F953C52A8886(2, iParam0, 1);
	if (Global_22670.f_5026 >= 12)
	{
		StringCopy(&Global_4271135, sVar0, 64);
		StringCopy(&(Global_4271135.f_16), sParam1, 16);
		Global_4271135.f_20 = iParam2;
		return;
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_22670.f_5309), Global_22670.f_5026);
	StringCopy(&(Global_22670.f_5028[Global_22670.f_5026 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22670.f_5221[Global_22670.f_5026 /*4*/]), sParam1, 16);
	Global_22670.f_5270[Global_22670.f_5026] = iParam2;
	Global_22670.f_5283[Global_22670.f_5026] = 361;
	Global_22670.f_5296[Global_22670.f_5026] = iParam0;
	Global_22670.f_5026++;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22670.f_5026 = 0;
	Global_22670.f_5027 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22670.f_5221[iVar0 /*4*/]), "", 16);
		Global_22670.f_5270[iVar0] = -1;
		Global_22670.f_5283[iVar0] = 361;
		Global_22670.f_5296[iVar0] = 32;
		iVar0++;
	}
	Global_22670.f_5309 = 0;
	StringCopy(&(Global_4271135.f_16), "", 16);
	Global_4271135.f_20 = -1;
	if (unk_0x3640D836D145B814())
	{
		if (!func_124(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x704F8697BB515627(Global_22670.f_5917[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x9D7453DF8B7E9E0B(0);
		unk_0x392841D58D2EED1D();
	}
}

bool func_128(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_124(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22670.f_5892[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xAB6A270F84A8781E(&(Global_22670.f_5892[iVar0 /*4*/])))
	{
		unk_0xBB3CDAB62C8773C8(&(Global_22670.f_5892[iVar0 /*4*/]), 9);
		Global_22670.f_5885[iVar0] = 1;
		if (!unk_0xA7E5F88C5CF2D04B(&(Global_22670.f_5892[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA08F3C300F9E3468("CommonMenu", 0);
	Global_22670.f_5871[iVar0] = 1;
	if (!unk_0xAD9D75DD073BF477("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA08F3C300F9E3468("MPShopSale", 0);
		Global_22670.f_5878[iVar0] = 1;
		if (!unk_0xAD9D75DD073BF477("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22670.f_5917[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_129(&(Global_22670.f_5917[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_129(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xDAE4BC89A198A6AF(*uParam0))
			{
				*uParam0 = unk_0x42AA2CCF0B61DCD8(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xDAE4BC89A198A6AF(*uParam0))
					{
						uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xDAE4BC89A198A6AF(*uParam0))
			{
				uParam0->f_8 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xDAE4BC89A198A6AF(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

bool func_130()
{
	return unk_0x234B68AC2E35ED5A(Local_89.f_6, 6);
}

void func_131()
{
	if (!unk_0xDAE4BC89A198A6AF(Local_89.f_169))
	{
		Local_89.f_169 = unk_0x42AA2CCF0B61DCD8("DRONE_CAM");
		return;
	}
	if ((func_38() || func_77()) || func_164(0))
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_38() || func_77()) || func_24())
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_24())
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_38() && !func_77())
	{
		func_108("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_108("SET_HEADING_METER_IS_VISIBLE", 1);
	func_108("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_38() && !func_77()) && !func_24()) && func_163())
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_162())
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_108("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_108("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_160(unk_0x1146A9AE09CE2B14()) == 240)
	{
		if (Local_89.f_120 >= (func_109() - 50f) || Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 50)))
		{
			func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_159();
			if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 13))
			{
				unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 13);
			}
		}
		else
		{
			func_155(func_156());
			if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 13))
			{
				func_108("SET_SOUND_WAVE_IS_VISIBLE", 1);
				unk_0x191DDA30577F440A(&(Local_89.f_5), 13);
			}
		}
	}
	else
	{
		func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_159();
	}
	func_108("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_38() && !func_77())
	{
		if (!func_24())
		{
			func_154(Local_89.f_18);
		}
		else
		{
			func_153(Local_89.f_18);
		}
		if (!func_164(0))
		{
			func_152(Local_89.f_19);
		}
	}
	if (func_162())
	{
		func_151(Local_89.f_24);
	}
	if (func_163())
	{
		func_150(Local_89.f_20);
	}
	func_149(0, "DRONE_ZOOM_1");
	func_149(1, "");
	func_149(2, "DRONE_ZOOM_2");
	func_149(3, "");
	func_149(4, "DRONE_ZOOM_3");
	func_147();
	func_145();
	func_143();
	func_142(round((unk_0xA8D713A937F31250(unk_0xBD11ACD80727BD31(Local_89.f_158)) + 180f)));
	if (func_160(unk_0x1146A9AE09CE2B14()) == 240)
	{
		func_141(func_156());
	}
	if (func_140())
	{
		func_133();
	}
	else if (func_24() || func_38())
	{
		func_132();
	}
	else if (func_31())
	{
		func_106();
	}
	unk_0x0F33095580A670CE(1);
	unk_0x44EF5678D6916481(Local_89.f_169, 255, 255, 255, 0, 0);
}

void func_132()
{
	if (Local_89.f_149.f_2 >= (func_109() - 20f))
	{
		if (unk_0x964C4D363AF812CB(Local_89.f_37))
		{
			Local_89.f_37 = unk_0x5AD02BBC63E31E46();
			unk_0x9B0169E27978C1A2(Local_89.f_37, "Out_Of_Bounds_Alarm_Loop", Local_89.f_156, 1);
		}
		if (Local_89.f_149.f_2 >= (func_109() - 20f) && Local_89.f_149.f_2 < (func_109() - 16f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 16f) && Local_89.f_149.f_2 < (func_109() - 13f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 13f) && Local_89.f_149.f_2 < (func_109() - 10f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 10f) && Local_89.f_149.f_2 < (func_109() - 8f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 8f) && Local_89.f_149.f_2 < (func_109() - 6f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 6f) && Local_89.f_149.f_2 < (func_109() - 4f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 4f) && Local_89.f_149.f_2 < (func_109() - 3f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 3f) && Local_89.f_149.f_2 < (func_109() - 2f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 2f) && Local_89.f_149.f_2 < (func_109() - 1f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (Local_89.f_149.f_2 >= (func_109() - 1f) && Local_89.f_149.f_2 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x964C4D363AF812CB(Local_89.f_37))
		{
			unk_0x791B4C3811D53DFA(Local_89.f_37);
			unk_0xBAB6F7501A822416(Local_89.f_37);
			Local_89.f_37 = -1;
		}
	}
}

void func_133()
{
	if (Local_89.f_120 >= (func_109() - 50f) || Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 50)))
	{
		func_134();
		if (unk_0x964C4D363AF812CB(Local_89.f_37))
		{
			Local_89.f_37 = unk_0x5AD02BBC63E31E46();
			unk_0x9B0169E27978C1A2(Local_89.f_37, "Out_Of_Bounds_Alarm_Loop", Local_89.f_156, 1);
		}
		if ((Local_89.f_120 >= (func_109() - 50f) && Local_89.f_120 < (func_109() - 45f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 50)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 45))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if ((Local_89.f_120 >= (func_109() - 45f) && Local_89.f_120 < (func_109() - 40f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 45)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 40))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if ((Local_89.f_120 >= (func_109() - 40f) && Local_89.f_120 < (func_109() - 35f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 40)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 35))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if ((Local_89.f_120 >= (func_109() - 35f) && Local_89.f_120 < (func_109() - 30f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 35)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 30))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if ((Local_89.f_120 >= (func_109() - 30f) && Local_89.f_120 < (func_109() - 25f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 30)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 25))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if ((Local_89.f_120 >= (func_109() - 25f) && Local_89.f_120 < (func_109() - 20f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 25)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 20))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if ((Local_89.f_120 >= (func_109() - 20f) && Local_89.f_120 < (func_109() - 15f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 20)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 15))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if ((Local_89.f_120 >= (func_109() - 15f) && Local_89.f_120 < (func_109() - 10f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 15)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 10))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if ((Local_89.f_120 >= (func_109() - 10f) && Local_89.f_120 < (func_109() - 5f)) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 10)) && Local_89.f_121 < IntToFloat((Global_262145.f_24337 - 5))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if ((Local_89.f_120 >= (func_109() - 5f) && Local_89.f_120 < func_109()) || (Local_89.f_121 >= IntToFloat((Global_262145.f_24337 - 5)) && Local_89.f_121 < IntToFloat(Global_262145.f_24337)))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x964C4D363AF812CB(Local_89.f_37))
		{
			unk_0x791B4C3811D53DFA(Local_89.f_37);
			unk_0xBAB6F7501A822416(Local_89.f_37);
			Local_89.f_37 = -1;
		}
	}
}

void func_134()
{
	int iVar0;
	
	if (unk_0xE0A6F16F546C8274() && !unk_0x234B68AC2E35ED5A(Global_1683970.f_3, 15))
	{
		if (!unk_0xE8FFE38E2BA32BD6())
		{
			iVar0 = func_137(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_136("HACK_DRONE_DIS", -1);
				iVar0++;
				func_135(22045, iVar0, -1, 1);
				unk_0x191DDA30577F440A(&(Global_1683970.f_3), 15);
			}
		}
	}
}

var func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_118();
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

void func_136(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	iVar0 = 0;
	iVar1 = func_139(iParam0, iParam1);
	uVar2 = func_138(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_138(int iParam0)
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

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_118();
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

bool func_140()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 1);
}

void func_141(float fParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "ATTENUATE_SOUND_WAVE");
	unk_0x82D42F43BE26EB72(fParam0);
	unk_0x392841D58D2EED1D();
}

void func_142(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_HEADING");
	unk_0x9E3D03981E2E9AD9(iParam0);
	unk_0x392841D58D2EED1D();
}

void func_143()
{
	if (func_24())
	{
		if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 11) && !Local_89.f_155)
		{
			func_144(1);
		}
		else
		{
			func_144(0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 11) || unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
	{
		func_144(1);
	}
	else
	{
		func_144(0);
	}
}

void func_144(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_RETICLE_ON_TARGET");
	unk_0x9D7453DF8B7E9E0B(iParam0);
	unk_0x392841D58D2EED1D();
}

void func_145()
{
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 4) || (unk_0x234B68AC2E35ED5A(Local_89.f_5, 3) && func_24()))
	{
		if (Local_89.f_18 == 100)
		{
			func_146(1);
		}
		else if (Local_89.f_18 != 0 && Local_89.f_18 != 100)
		{
			func_146(2);
		}
	}
	else
	{
		func_146(0);
	}
}

void func_146(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_RETICLE_STATE");
	unk_0x9E3D03981E2E9AD9(iParam0);
	unk_0x392841D58D2EED1D();
}

void func_147()
{
	switch (Local_89.f_25)
	{
		case 0:
			func_148(0);
			break;
		
		case 1:
			func_148(2);
			break;
		
		case 2:
			func_148(4);
			break;
	}
}

void func_148(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_ZOOM");
	unk_0x9E3D03981E2E9AD9(iParam0);
	unk_0x392841D58D2EED1D();
}

void func_149(int iParam0, char* sParam1)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_ZOOM_LABEL");
	unk_0x9E3D03981E2E9AD9(iParam0);
	func_114(sParam1);
	unk_0x392841D58D2EED1D();
}

void func_150(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_BOOST_PERCENTAGE");
	unk_0x9E3D03981E2E9AD9(uParam0);
	unk_0x392841D58D2EED1D();
}

void func_151(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_TRANQUILIZE_PERCENTAGE");
	unk_0x9E3D03981E2E9AD9(uParam0);
	unk_0x392841D58D2EED1D();
}

void func_152(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_DETONATE_PERCENTAGE");
	unk_0x9E3D03981E2E9AD9(uParam0);
	unk_0x392841D58D2EED1D();
}

void func_153(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_EMP_PERCENTAGE");
	unk_0x9E3D03981E2E9AD9(uParam0);
	unk_0x392841D58D2EED1D();
}

void func_154(int iParam0)
{
	unk_0x704F8697BB515627(Local_89.f_169, "SET_SHOCK_PERCENTAGE");
	unk_0x9E3D03981E2E9AD9(uParam0);
	unk_0x392841D58D2EED1D();
}

void func_155(float fParam0)
{
	if (unk_0x964C4D363AF812CB(Local_89.f_44))
	{
		Local_89.f_44 = unk_0x5AD02BBC63E31E46();
		unk_0x9B0169E27978C1A2(Local_89.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		unk_0xB76EE71E771BDAA1(Local_89.f_44, "signalstrength", fParam0);
	}
	else
	{
		unk_0xB76EE71E771BDAA1(Local_89.f_44, "signalstrength", fParam0);
	}
}

float func_156()
{
	float fVar0;
	
	if (func_160(unk_0x1146A9AE09CE2B14()) == 240)
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
		{
			fVar0 = func_157(unk_0xBD11ACD80727BD31(Local_89.f_158), func_158(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_157(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Param1, iParam2);
}

Vector3 func_158()
{
	if (func_160(unk_0x1146A9AE09CE2B14()) == 240)
	{
		return Global_1701005;
	}
	return 0f, 0f, 0f;
}

void func_159()
{
	if (!unk_0x964C4D363AF812CB(Local_89.f_44))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_44);
		unk_0xBAB6F7501A822416(Local_89.f_44);
		Local_89.f_44 = -1;
	}
}

int func_160(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_161(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 6);
}

int func_163()
{
	if (func_162())
	{
		if (unk_0xE75EE67F14EAAE37(Global_1695733.f_24))
		{
			return 0;
		}
	}
	return 1;
}

int func_164(bool bParam0)
{
	if (func_140())
	{
		if (bParam0)
		{
			if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_162())
	{
		return 1;
	}
	return 0;
}

void func_165()
{
	int iVar0;
	int iVar1;
	
	if (func_77())
	{
		return;
	}
	if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(21, "DRONE_MOVE", -1);
			func_126(20, "DRONE_POSITION", -1);
			if (!unk_0x0D901EFDFD7EF9D5(0))
			{
				func_125(210, "CELL_284", -1, 0);
				if ((!func_38() && !func_24()) && func_163())
				{
					func_125(209, "BOOST_DRONE_E", -1, 0);
				}
				func_125(208, "MOVE_DRONE_UP", -1, 0);
				func_125(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_126(29, "CELL_284", -1);
				if ((!func_38() && !func_24()) && func_163())
				{
					func_125(203, "BOOST_DRONE_E", -1, 0);
				}
				func_125(209, "MOVE_DRONE_UP", -1, 0);
				func_125(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_38())
			{
				iVar0 = 206;
				if (unk_0x0D901EFDFD7EF9D5(0))
				{
					iVar0 = 237;
				}
				if (func_24())
				{
					func_125(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_125(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (unk_0x0D901EFDFD7EF9D5(0))
				{
					iVar1 = 238;
				}
				if (!func_164(0))
				{
					func_125(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_172())
				{
					func_125(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_24())
			{
				if ((((func_171(0) || func_171(1)) || func_170()) || unk_0x2D54F00919E36B63()) || func_166(unk_0x1146A9AE09CE2B14()))
				{
				}
				else
				{
					func_125(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_125(80, "MOVE_DRONE_RE", -1, 0);
			unk_0x191DDA30577F440A(&(Local_89.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x0D901EFDFD7EF9D5(0))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 17))
		{
			unk_0x191DDA30577F440A(&(Local_89.f_5), 17);
			unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 17))
	{
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 17);
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
	}
}

int func_166(int iParam0)
{
	if (func_169(func_160(iParam0)))
	{
		if (func_168() != func_12())
		{
			if (func_167() == func_168())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35;
}

int func_168()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_170()
{
	return Global_22531.f_135;
}

bool func_171(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

int func_172()
{
	if (func_173() <= 0)
	{
		return 0;
	}
	if (func_162())
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	return Global_1695733.f_6;
}

bool func_174()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 7);
}

void func_175()
{
	int iVar0;
	
	if (!func_176())
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			if ((unk_0x0E8572B08CEB6A11(Local_89.f_168) && unk_0xBEFF25A5E38D38C3(Local_89.f_168)) && !func_77())
			{
				iVar0 = 80;
				if (func_83())
				{
					iVar0 = 75;
				}
				if (unk_0x86AF801D34E482FF(2, iVar0) || unk_0x96DF114B59E81B9C(2, iVar0))
				{
					if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 7))
					{
						unk_0x191DDA30577F440A(&(Local_89.f_5), 7);
					}
				}
			}
		}
	}
}

int func_176()
{
	if (func_16())
	{
		if (!func_130())
		{
			return 0;
		}
	}
	return 1;
}

void func_177()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_183() || !func_166(unk_0x1146A9AE09CE2B14())) || !unk_0x02BFF15CAA701972())
	{
		return;
	}
	iVar0 = func_182(1);
	func_181(iVar0);
	iVar1 = func_182(0);
	iVar2 = unk_0xB219A5BFF547852F(Local_89.f_140, 2f, iVar1, 0, 0, 0);
	if (unk_0x419E13582192CFEA(iVar2) && iVar2 != Local_89.f_161)
	{
		if (unk_0x73E0CF006385B59C(iVar2, joaat("weapon_stungun"), 0) || unk_0x5E7C0A485B91DB87(iVar2) == 999)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 26))
			{
				func_180(func_168(), 1, 1, 0);
				unk_0x191DDA30577F440A(&(Local_89.f_5), 26);
			}
		}
	}
	if (unk_0x419E13582192CFEA(Local_89.f_161))
	{
		if (unk_0x73E0CF006385B59C(Local_89.f_161, joaat("weapon_stungun"), 0) || unk_0x5E7C0A485B91DB87(Local_89.f_161) == 999)
		{
			if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 26))
			{
				func_180(func_168(), 1, 1, 0);
				unk_0x191DDA30577F440A(&(Local_89.f_5), 26);
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 26))
	{
		iVar3 = unk_0xB219A5BFF547852F(Local_89.f_140, 2f, iVar0, 0, 0, 0);
		if (unk_0x419E13582192CFEA(iVar3))
		{
			if (unk_0x419E13582192CFEA(Local_89.f_161))
			{
				unk_0x4603196EEEA2355C(Local_89.f_161, false, 0);
			}
			if (unk_0x419E13582192CFEA(iVar2))
			{
				unk_0x4603196EEEA2355C(iVar2, false, 0);
			}
			func_178(1);
		}
	}
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		if (!func_179())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 1);
		}
	}
	else if (func_179())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 1);
	}
}

bool func_179()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 1);
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar1;
	
	Var0 = -1428764848;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	iVar1 = 0;
	if (iParam0 != func_12())
	{
		unk_0x191DDA30577F440A(&iVar1, iParam0);
	}
	if (!iVar1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 5, iVar1);
	}
}

bool func_181(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

int func_182(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1695733.f_19 != 0)
		{
			return Global_1695733.f_19;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

bool func_183()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 14);
}

void func_184()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0x234B68AC2E35ED5A(Local_89.f_5, 1) || func_195()) || func_194())
	{
		Local_89.f_18 = 0;
		Local_89.f_19 = 0;
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 10))
		{
			unk_0x191DDA30577F440A(&(Local_89.f_5), 10);
		}
		return;
	}
	if (!func_194())
	{
		if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 10))
		{
			Local_89.f_18 = 100;
			unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 10);
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			if ((unk_0x0E8572B08CEB6A11(Local_89.f_168) && unk_0xBEFF25A5E38D38C3(Local_89.f_168)) && !unk_0x234B68AC2E35ED5A(Local_89.f_5, 2))
			{
				if ((!unk_0x234B68AC2E35ED5A(Local_89.f_5, 4) && !unk_0x234B68AC2E35ED5A(Local_89.f_5, 3)) && !Local_89.f_155)
				{
					iVar0 = 206;
					if (unk_0x0D901EFDFD7EF9D5(0))
					{
						iVar0 = 237;
					}
					if ((((unk_0x609EEF618F8CC869(2, iVar0) || unk_0x6DC4D8B66C3E0EA0(2, iVar0)) && !unk_0x234B68AC2E35ED5A(Local_89.f_5, 5)) && !unk_0x234B68AC2E35ED5A(Local_89.f_5, 24)) && !func_77())
					{
						unk_0x191DDA30577F440A(&(Local_89.f_5), 24);
						if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 11) || unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
						{
							Local_89.f_27++;
						}
					}
					if (func_24())
					{
						func_191();
					}
					else
					{
						func_190();
					}
				}
				else if (func_25(&(Local_89.f_248)))
				{
					if (func_24())
					{
						iVar1 = Global_262145.f_24961;
					}
					else
					{
						iVar1 = Global_262145.f_24330;
					}
					if (func_22(&(Local_89.f_248), iVar1, 0))
					{
						func_21(&(Local_89.f_248));
						Local_89.f_18 = 100;
						if (Local_89.f_32 != -1)
						{
							unk_0x791B4C3811D53DFA(Local_89.f_32);
							unk_0xBAB6F7501A822416(Local_89.f_32);
							Local_89.f_32 = -1;
						}
						if (unk_0x964C4D363AF812CB(Local_89.f_35))
						{
							unk_0x791B4C3811D53DFA(Local_89.f_35);
							unk_0xBAB6F7501A822416(Local_89.f_35);
							Local_89.f_35 = -1;
						}
						unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 4);
						unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 3);
						unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 24);
						Local_89.f_155 = 0;
					}
					else
					{
						iVar2 = (100 * unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_248)));
						Local_89.f_18 = (iVar2 / iVar1);
						if (!func_24())
						{
							if (unk_0x964C4D363AF812CB(Local_89.f_32))
							{
								Local_89.f_32 = unk_0x5AD02BBC63E31E46();
								unk_0x9B0169E27978C1A2(Local_89.f_32, "HUD_Shock_Recharge", Local_89.f_156, 1);
								unk_0xB76EE71E771BDAA1(Local_89.f_32, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_188();
				func_185();
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

void func_185()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	
	if (func_172())
	{
		if (unk_0x0D901EFDFD7EF9D5(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_6, 5))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_89.f_6, 4))
			{
				if (unk_0x609EEF618F8CC869(2, iVar0) || unk_0x6DC4D8B66C3E0EA0(2, iVar0))
				{
					unk_0x191DDA30577F440A(&(Local_89.f_6), 4);
				}
			}
			else if (Local_89.f_13 == 1)
			{
				if (Local_89.f_243 == 2)
				{
					Var1 = { unk_0x684B55BC7BEF0475() };
					Var2 = { unk_0x2EBAAC7478326ECC(2) };
					Var3 = { (-sin(Var2.f_2) * cos(Var2.x)), (cos(Var2.f_2) * cos(Var2.x)), sin(Var2.x) };
					Var4 = { 10f, 10f, 10f };
					Var5 = { Var1 + Var3 * Var4 };
					iVar6 = Global_262145.f_24331;
					if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
					{
						iVar6 = Global_262145.f_24332;
					}
					unk_0x91F06D934631F28B(Local_89.f_149 + Vector(0f, 0f, 0f), Var5, iVar6, 1, joaat("WEAPON_TRANQUILIZER"), unk_0x7D2B9E6A64637269(), 1, 1, -1082130432, unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0, 0, 1, 0, 0, 0);
					Local_89.f_24 = 100;
					unk_0x8543AEC08F877EE9(0, 300, 150);
					if (unk_0x964C4D363AF812CB(Local_89.f_81))
					{
						Local_89.f_81 = unk_0x5AD02BBC63E31E46();
						unk_0xE2D24A37AFCF27BF(Local_89.f_81, "Remote_Perspective_Fire", unk_0xBD11ACD80727BD31(Local_89.f_158), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
					}
					unk_0x9B0169E27978C1A2(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
					if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 11) || unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
					{
						Local_89.f_29++;
					}
					func_187((func_173() - 1));
					if (func_173() <= 0)
					{
						Local_89.f_24 = 0;
						unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
					}
					unk_0x191DDA30577F440A(&(Local_89.f_6), 5);
					func_23(&(Local_89.f_256), 0, 0);
				}
			}
		}
		else
		{
			func_186();
		}
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	
	if (func_173() > 0)
	{
		if (func_25(&(Local_89.f_256)))
		{
			iVar0 = Global_262145.f_24330;
			if (func_22(&(Local_89.f_256), iVar0, 0))
			{
				unk_0xC664C0067EEAB8D1(&(Local_89.f_6), 5);
				unk_0xC664C0067EEAB8D1(&(Local_89.f_6), 4);
				func_21(&(Local_89.f_256));
				Local_89.f_24 = 100;
				if (unk_0x964C4D363AF812CB(Local_89.f_35))
				{
					unk_0x791B4C3811D53DFA(Local_89.f_35);
					unk_0xBAB6F7501A822416(Local_89.f_35);
					Local_89.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_256)));
				Local_89.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_187(int iParam0)
{
	if (Global_1695733.f_6 != iParam0)
	{
		Global_1695733.f_6 = iParam0;
	}
}

void func_188()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_89.f_347.f_2 = 2;
	if (unk_0x0D901EFDFD7EF9D5(0))
	{
		Local_89.f_347.f_3 = 238;
	}
	else
	{
		Local_89.f_347.f_3 = 205;
	}
	iVar0 = Global_262145.f_24333;
	if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 31))
	{
		Local_89.f_22 = 100;
	}
	if (func_24())
	{
		iVar0 = (iVar0 / 2);
		if (unk_0x234B68AC2E35ED5A(Local_89.f_6, 1))
		{
			Local_89.f_21 = ((Local_89.f_23 * (Global_262145.f_24333 / 2)) / 100);
			Local_89.f_21 = ((Global_262145.f_24333 / 2) - Local_89.f_21);
			unk_0xC664C0067EEAB8D1(&(Local_89.f_6), 1);
		}
		if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 31))
		{
			iVar0 = Local_89.f_21;
		}
	}
	else
	{
		Local_89.f_22 = 100;
	}
	if (!func_164(1))
	{
		if (!func_77() && func_189(&(Local_89.f_347), 1, iVar0))
		{
			if (unk_0x964C4D363AF812CB(Local_89.f_36))
			{
				Local_89.f_36 = unk_0x5AD02BBC63E31E46();
				unk_0xE2D24A37AFCF27BF(Local_89.f_36, "Destroyed", unk_0xBD11ACD80727BD31(Local_89.f_158), Local_89.f_156, 1, 0);
			}
			unk_0x2785FE2E1CBFF018();
			iVar1 = 0;
			if (func_24())
			{
				iVar1 = 69;
			}
			unk_0xEC37EA74A17D9A1E(unk_0x7D2B9E6A64637269(), Local_89.f_149, iVar1, 0.5f, 1, 0, 1065353216);
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) < 1)
			{
				unk_0xD63E470D46B4F8A5(unk_0x1146A9AE09CE2B14(), 0, 0);
				unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
			}
			unk_0x8543AEC08F877EE9(0, 300, 200);
			unk_0x191DDA30577F440A(&(Local_89.f_5), 2);
		}
	}
	if (func_25(&(Local_89.f_347)))
	{
		unk_0x8543AEC08F877EE9(0, 300, 20);
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 5))
		{
			unk_0x191DDA30577F440A(&(Local_89.f_5), 5);
		}
		func_21(&(Local_89.f_272));
		if (!func_22(&(Local_89.f_347), iVar0, 0))
		{
			iVar2 = (Local_89.f_22 * unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_347)));
			if (!func_24())
			{
				Local_89.f_19 = (iVar2 / iVar0);
			}
			else if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 31))
			{
				Local_89.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_89.f_19 = (Local_89.f_23 + (iVar2 / iVar0));
			}
			if (unk_0x964C4D363AF812CB(Local_89.f_33))
			{
				Local_89.f_33 = unk_0x5AD02BBC63E31E46();
				unk_0x9B0169E27978C1A2(Local_89.f_33, "HUD_Detonate_Charge", Local_89.f_156, 1);
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 5))
	{
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 5);
		if (!func_24())
		{
			Local_89.f_19 = 0;
		}
		else
		{
			unk_0x191DDA30577F440A(&(Local_89.f_5), 31);
			Local_89.f_22 = (100 - Local_89.f_19);
			Local_89.f_21 = (iVar0 - unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_347)));
			Local_89.f_23 = Local_89.f_19;
			func_21(&(Local_89.f_272));
		}
		if (Local_89.f_33 != -1)
		{
			unk_0x791B4C3811D53DFA(Local_89.f_33);
			unk_0xBAB6F7501A822416(Local_89.f_33);
			Local_89.f_33 = -1;
		}
	}
	else if (func_24())
	{
		if (Local_89.f_19 > 0)
		{
			if (Local_89.f_19 <= 2)
			{
				Local_89.f_19 = 0;
			}
			if (!func_25(&(Local_89.f_272)))
			{
				func_23(&(Local_89.f_272), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24333;
				if (!func_22(&(Local_89.f_272), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_89.f_22)) / to_float((iVar3 / unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_272)))));
					Local_89.f_19 = (Local_89.f_19 - round(fVar4));
					Local_89.f_23 = Local_89.f_19;
					Local_89.f_22 = (100 - Local_89.f_19);
					unk_0x191DDA30577F440A(&(Local_89.f_6), 1);
				}
				else
				{
					Local_89.f_19 = 0;
				}
			}
		}
		else
		{
			func_21(&(Local_89.f_347));
			unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 31);
			unk_0xC664C0067EEAB8D1(&(Local_89.f_6), 1);
		}
	}
}

int func_189(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x5C6675393464A814(uParam0->f_2, uParam0->f_3) || (unk_0x51794501073F0A33(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_25(uParam0))
		{
			func_23(uParam0, 0, 0);
		}
		else if (func_22(uParam0, iParam2, 0))
		{
			func_21(uParam0);
			return 1;
		}
	}
	else
	{
		func_21(uParam0);
	}
	return 0;
}

void func_190()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 24))
	{
		if (Local_89.f_13 == 1)
		{
			if (Local_89.f_243 == 2)
			{
				Var0 = { unk_0x684B55BC7BEF0475() };
				Var1 = { unk_0x2EBAAC7478326ECC(2) };
				Var2 = { (-sin(Var1.f_2) * cos(Var1.x)), (cos(Var1.f_2) * cos(Var1.x)), sin(Var1.x) };
				Var3 = { 10f, 10f, 10f };
				Var4 = { Var0 + Var2 * Var3 };
				iVar5 = Global_262145.f_24331;
				if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
				{
					iVar5 = Global_262145.f_24332;
				}
				if (func_162())
				{
					iVar5 = 1;
				}
				unk_0x91F06D934631F28B(Local_89.f_149 + Vector(0f, 0f, 0f), Var4, iVar5, 1, joaat("weapon_stungun"), unk_0x7D2B9E6A64637269(), 1, 1, -1082130432, unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0, 0, 1, 0, 0, 0);
				Local_89.f_18 = 100;
				Local_89.f_19 = 0;
				unk_0x8543AEC08F877EE9(0, 300, 150);
				if (unk_0x964C4D363AF812CB(Local_89.f_35))
				{
					Local_89.f_35 = unk_0x5AD02BBC63E31E46();
					unk_0xE2D24A37AFCF27BF(Local_89.f_35, "Shock_Fire", unk_0xBD11ACD80727BD31(Local_89.f_158), Local_89.f_156, 1, 0);
				}
				if (Local_89.f_33 != -1)
				{
					unk_0x791B4C3811D53DFA(Local_89.f_33);
					unk_0xBAB6F7501A822416(Local_89.f_33);
					Local_89.f_33 = -1;
				}
				unk_0x191DDA30577F440A(&(Local_89.f_5), 4);
				func_23(&(Local_89.f_248), 0, 0);
			}
		}
	}
}

void func_191()
{
	if ((unk_0x234B68AC2E35ED5A(Local_89.f_5, 24) && !unk_0x234B68AC2E35ED5A(Local_89.f_5, 3)) && !Local_89.f_155)
	{
		if (unk_0xDFE58ECD10F98CE1("scr_xs_dr"))
		{
			if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
			{
				unk_0x1AB30A19F1212DFB("scr_xs_dr");
				unk_0xC67DA40CA8162F2E("scr_xs_dr_emp", unk_0xBD11ACD80727BD31(Local_89.f_158), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_89.f_18 = 100;
		unk_0x8543AEC08F877EE9(0, 300, 150);
		if (unk_0x964C4D363AF812CB(Local_89.f_35))
		{
			Local_89.f_35 = unk_0x5AD02BBC63E31E46();
			unk_0xE2D24A37AFCF27BF(Local_89.f_35, "Shock_Fire", unk_0xBD11ACD80727BD31(Local_89.f_158), Local_89.f_156, 1, 0);
		}
		if (Local_89.f_33 != -1)
		{
			unk_0x791B4C3811D53DFA(Local_89.f_33);
			unk_0xBAB6F7501A822416(Local_89.f_33);
			Local_89.f_33 = -1;
		}
		func_192(unk_0xD6E677FAD7521410(unk_0xBD11ACD80727BD31(Local_89.f_158), 1), 0);
		unk_0x191DDA30577F440A(&(Local_89.f_5), 3);
		Local_89.f_155 = 1;
		func_23(&(Local_89.f_248), 0, 0);
	}
}

void func_192(struct<3> Param0, bool bParam1)
{
	struct<6> Var0;
	
	Var0 = 975723848;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam1;
	if (!bParam1)
	{
		if (!func_193(1, 1) == 0)
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 6, func_193(1, 1));
		}
	}
	else if (Global_1695733.f_21 != func_12())
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 6, func_8(Global_1695733.f_21));
	}
}

int func_193(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_19(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_116(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_194()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 8);
}

int func_195()
{
	if ((unk_0x159BC3DDA80D71AC(Local_89.f_158) && unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0)) && !unk_0x234B68AC2E35ED5A(Local_89.f_5, 2))
	{
		return 1;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (func_166(unk_0x1146A9AE09CE2B14()) && unk_0x234B68AC2E35ED5A(Global_2542972, 0))
		{
		}
		else if (func_205())
		{
			if (unk_0x7919C1F1872DDE8E(unk_0xBD11ACD80727BD31(Local_89.f_158)) || unk_0x51AB337672378CD6(unk_0xBD11ACD80727BD31(Local_89.f_158)) != 0)
			{
				Local_89.f_26 = 1;
				return 1;
			}
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 2))
	{
		Local_89.f_26 = 4;
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 9))
	{
		Local_89.f_26 = 1;
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 7))
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0x0297E633EADA2182(unk_0xBD11ACD80727BD31(Local_89.f_158)) || func_204(unk_0xD93F965CFAC1D06A(Local_89.f_158), 0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 29))
			{
				Local_89.f_26 = 3;
				return 1;
			}
		}
	}
	if (func_202(unk_0x1146A9AE09CE2B14()))
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (func_140())
	{
		if (Global_1590753 != func_12())
		{
			if (func_47(Global_1590753))
			{
				Local_89.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_201())
	{
		Local_89.f_26 = 1;
		return 1;
	}
	if (func_200(unk_0x1146A9AE09CE2B14()))
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (func_199())
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (func_198())
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (func_32())
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (func_37())
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (func_31())
	{
		if (unk_0xC6D04E4B28753F77(unk_0x7D2B9E6A64637269(), 1))
		{
			Local_89.f_26 = 6;
			return 1;
		}
		if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) || unk_0xE0EFEBF2703510DB(unk_0x7D2B9E6A64637269()))
		{
			Local_89.f_26 = 6;
			return 1;
		}
		if (func_157(unk_0x7D2B9E6A64637269(), Local_89.f_152, 1) > 2f)
		{
			Local_89.f_26 = 7;
			return 1;
		}
	}
	if (func_197())
	{
		return 1;
	}
	if (func_16())
	{
		if (func_34())
		{
			return 1;
		}
		if (func_196("AIRDEF_WARN"))
		{
			if (func_22(&(Local_89.f_345), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_89.f_345));
		}
	}
	return 0;
}

bool func_196(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

int func_197()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var1 = { 90000f, 90000f, 2600f };
	if (!unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		return 0;
	}
	if (!unk_0xA98268C8F1649DA2(unk_0xBD11ACD80727BD31(Local_89.f_158), Var0, Var1, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_198()
{
	return Global_96679;
}

bool func_199()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 9);
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1630816[iVar0 /*597*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_201()
{
	struct<3> Var0;
	
	if (Local_89.f_17 == -1945204837)
	{
		if (func_17(unk_0xBD11ACD80727BD31(Local_89.f_158)))
		{
			if (unk_0x10AA1D668D6C5CF4(unk_0xBD11ACD80727BD31(Local_89.f_158)) == -25693127)
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0xBD11ACD80727BD31(Local_89.f_158), 1) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (func_17(unk_0xBD11ACD80727BD31(Local_89.f_158)))
		{
			if (unk_0x8954E9D0A9F6F8CF(unk_0xBD11ACD80727BD31(Local_89.f_158), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x8954E9D0A9F6F8CF(unk_0xBD11ACD80727BD31(Local_89.f_158), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		if (func_11(iParam0) && !func_203(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_204(int iParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0) || iParam1)
		{
			if (unk_0x0297E633EADA2182(iParam0))
			{
				if (unk_0x36F15E322F9C149E(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_205()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 15);
}

void func_206()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	int iVar9;
	bool bVar10;
	
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			Var0 = { Local_89.f_149 };
			switch (Local_89.f_13)
			{
				case 0:
					Var1 = { unk_0x684B55BC7BEF0475() };
					Var2 = { unk_0x2EBAAC7478326ECC(2) };
					Var3 = { (-sin(Var2.f_2) * cos(Var2.x)), (cos(Var2.f_2) * cos(Var2.x)), sin(Var2.x) };
					Var4 = { 10f, 10f, 10f };
					if (func_24())
					{
						Var4 = { Global_262145.f_24962, Global_262145.f_24962, Global_262145.f_24962 };
					}
					Var5 = { Var1 + Var3 * Var4 };
					Var0 = { unk_0x26C2ACB261895E70(Local_89.f_149, unk_0xA8D713A937F31250(unk_0xBD11ACD80727BD31(Local_89.f_158)), 0f, -0.1f, 0f) };
					Local_89.f_166 = unk_0x3F7B472B49D4D2AC(Var0, Var5, 123, unk_0xBD11ACD80727BD31(Local_89.f_158), 7);
					if (Local_89.f_166 != 0)
					{
						Local_89.f_13 = 1;
					}
					break;
				
				case 1:
					Local_89.f_243 = unk_0xA2B3B271E2AE7A08(Local_89.f_166, &iVar6, &Var8, &uVar7, &iVar9);
					if (Local_89.f_243 == 2)
					{
						if (iVar6 == 0)
						{
							Local_89.f_14 = 1;
							Var8 = { 0f, 0f, 0f };
							if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 11) && !func_24())
							{
								unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 11);
							}
							if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
							{
								unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 23);
							}
							func_213();
						}
						else
						{
							Local_89.f_14 = 2;
							if (unk_0x419E13582192CFEA(iVar9))
							{
								if (unk_0xA2CCAAC7F5CA3F49(iVar9))
								{
									if (!unk_0xE50EB54E0F21BED0(iVar9, 0))
									{
										if (unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(iVar9)))
										{
											if (func_211(unk_0x1146A9AE09CE2B14(), unk_0xCB567ED25393C1DF(unk_0xFAA5505029C4B5A6(iVar9))))
											{
												bVar10 = true;
											}
										}
										else
										{
											if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
											{
												unk_0x191DDA30577F440A(&(Local_89.f_5), 23);
												if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 11) && !func_24())
												{
													unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 11);
												}
											}
											if (!func_90(unk_0x1146A9AE09CE2B14()) && !func_87(unk_0x1146A9AE09CE2B14()))
											{
												if ((func_210(unk_0xFAA5505029C4B5A6(iVar9)) || func_209(unk_0xFAA5505029C4B5A6(iVar9))) || func_208(unk_0xFAA5505029C4B5A6(iVar9)))
												{
													func_86(Global_1575032);
													func_207(&(Local_89.f_258), 0, 0);
												}
												else
												{
													func_213();
												}
											}
										}
										if ((((!unk_0x234B68AC2E35ED5A(Local_89.f_5, 11) && !bVar10) && func_17(Global_1695733.f_23)) && unk_0x895779B17E5AA5FE(Global_1695733.f_23, iVar9, 511)) && (unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(iVar9)) && unk_0x7D2B9E6A64637269() != unk_0xFAA5505029C4B5A6(iVar9)))
										{
											unk_0x191DDA30577F440A(&(Local_89.f_5), 11);
											if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
											{
												unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_24())
									{
										if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 11))
										{
											unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 11);
										}
									}
									if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 23))
									{
										unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 23);
									}
									func_213();
								}
							}
							else
							{
								func_213();
							}
							Local_89.f_166 = 0;
							Local_89.f_13 = 0;
						}
					}
					else if (Local_89.f_243 == 0)
					{
						Local_89.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

void func_207(var uParam0, bool bParam1, bool bParam2)
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

int func_208(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0x0AF04716D74DE278(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if ((((((((((((unk_0x017139B13A2573C8(iParam0) == 7 || unk_0x017139B13A2573C8(iParam0) == 8) || unk_0x017139B13A2573C8(iParam0) == 9) || unk_0x017139B13A2573C8(iParam0) == 10) || unk_0x017139B13A2573C8(iParam0) == 11) || unk_0x017139B13A2573C8(iParam0) == 12) || unk_0x017139B13A2573C8(iParam0) == 13) || unk_0x017139B13A2573C8(iParam0) == 14) || unk_0x017139B13A2573C8(iParam0) == 15) || unk_0x017139B13A2573C8(iParam0) == 16) || unk_0x017139B13A2573C8(iParam0) == 17) || unk_0x017139B13A2573C8(iParam0) == 18) || unk_0x017139B13A2573C8(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if ((((unk_0x017139B13A2573C8(iParam0) == 6 || unk_0x017139B13A2573C8(iParam0) == 29) || unk_0x017139B13A2573C8(iParam0) == 27) || unk_0x0AF04716D74DE278(iParam0) == -472287501) || unk_0x0AF04716D74DE278(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_212(iParam0);
	if (!iVar0 == func_12())
	{
		if (iVar0 == func_212(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_12();
}

void func_213()
{
	if (func_25(&(Local_89.f_258)))
	{
		if (func_22(&(Local_89.f_258), 60000, 0))
		{
			func_21(&(Local_89.f_258));
			if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) <= 0)
			{
				func_86(Global_1575021);
			}
		}
	}
}

void func_214()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	var uVar9;
	struct<3> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 29))
		{
			return;
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		if (unk_0x6197EF56F56B9BB8(unk_0xBD11ACD80727BD31(Local_89.f_158)))
		{
			return;
		}
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			switch (Local_89.f_11)
			{
				case 0:
					if ((func_24() || func_38()) || func_35())
					{
						fVar5 = 0.3f;
					}
					else if (func_16())
					{
						fVar5 = 0.65f;
					}
					else
					{
						fVar5 = (func_217(Local_89.f_239) * 1.5f);
					}
					if (func_83())
					{
						Var6 = { Local_89.f_149 };
						Var1 = { unk_0x684B55BC7BEF0475() };
						Var2 = { unk_0x2EBAAC7478326ECC(2) };
						Var3 = { (-sin(Var2.f_2) * cos(Var2.x)), (cos(Var2.f_2) * cos(Var2.x)), sin(Var2.x) };
						Var4 = { 0.9f, 0.9f, 0.9f };
						if (func_16())
						{
							Var4 = { 1.9f, 1.9f, 1.9f };
						}
						Var7 = { Var1 + Var3 * Var4 };
					}
					else
					{
						Var6 = { Local_89.f_149 };
						Var7 = { Local_89.f_149 };
					}
					Local_89.f_165 = unk_0x7AD43B94CD205A49(Var6, Var7, fVar5, 511, unk_0xBD11ACD80727BD31(Local_89.f_158), 4);
					if (Local_89.f_165 != 0)
					{
						Local_89.f_11 = 1;
					}
					break;
				
				case 1:
					iVar12 = unk_0xA2B3B271E2AE7A08(Local_89.f_165, &iVar8, &Var10, &uVar9, &iVar11);
					if (iVar12 == 2)
					{
						if (iVar8 == 0)
						{
							Local_89.f_12 = 1;
							Var10 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0x419E13582192CFEA(iVar11))
							{
								if (unk_0x55F5BD4ABD80B211(iVar11))
								{
									if (!unk_0xE50EB54E0F21BED0(iVar11, 0) && unk_0x6471F4759775FCA4(iVar11) != Local_89.f_239)
									{
										if (unk_0x4DDAC4C80BACF92C(iVar11) > 0.5f || func_215(unk_0x6471F4759775FCA4(iVar11)))
										{
											if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 9))
											{
												unk_0x191DDA30577F440A(&(Local_89.f_5), 9);
											}
										}
									}
								}
								else if (unk_0xA2CCAAC7F5CA3F49(iVar11))
								{
									if (!unk_0xE50EB54E0F21BED0(iVar11, 0))
									{
										if (!unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(iVar11)))
										{
											if (Local_89.f_28 == 0)
											{
												iVar0 = unk_0xB36B8558948EA7A8(0, 3);
												if (iVar0 == 0)
												{
													iVar13 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar13 = 90;
												}
												else
												{
													iVar13 = 79;
												}
												Local_89.f_28 = unk_0x24CBDE4C2EEE441C(iVar13, Local_89.f_149, 5000f);
												func_207(&(Local_89.f_264), 0, 0);
											}
										}
									}
								}
							}
							Local_89.f_12 = 2;
							unk_0x8543AEC08F877EE9(0, 300, 50);
							Local_89.f_165 = 0;
							Local_89.f_11 = 0;
						}
					}
					else if (iVar12 == 0)
					{
						Local_89.f_11 = 0;
					}
					break;
			}
			if (Local_89.f_28 != 0)
			{
				if (func_25(&(Local_89.f_264)))
				{
					if (func_22(&(Local_89.f_264), 5000, 0))
					{
						unk_0x3E5BA73CEA34D768(Local_89.f_28);
						func_21(&(Local_89.f_264));
						Local_89.f_28 = 0;
					}
				}
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_216(iParam0, 1))
	{
		return 1;
	}
	if (unk_0xE267416B80E7921F(iParam0) || unk_0x48E10529AEAE00F9(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14397)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14398)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14396)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14399)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14401)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14400)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18848)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18850)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18854)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18851)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18858)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18856)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18861)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20806)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20807)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

float func_217(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_218(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var1.f_2));
}

void func_218(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F1DFD4C1BC6827A(iParam0))
	{
		unk_0xC78A38E5FBC66080(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_221(iParam0);
		if (iVar0 != 0)
		{
			func_219(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_219(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_220(iParam0, &Global_1315836);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3F1DFD4C1BC6827A(Global_1315836[iVar0]))
		{
			unk_0xC78A38E5FBC66080(Global_1315836[iVar0], &(Global_1315840[iVar0 /*3*/]), &(Global_1315847[iVar0 /*3*/]));
		}
		if (vmag(Global_1315840[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315847[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315840[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315847[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315854[iVar0] = (Global_1315847[iVar0 /*3*/] - Global_1315840[iVar0 /*3*/]);
		Global_1315857[iVar0] = (Global_1315847[iVar0 /*3*/].f_1 - Global_1315840[iVar0 /*3*/].f_1);
		Global_1315860[iVar0] = (Global_1315847[iVar0 /*3*/].f_2 - Global_1315840[iVar0 /*3*/].f_2);
		if (Global_1315854[iVar0] > Global_1315863)
		{
			Global_1315863 = Global_1315854[iVar0];
		}
		if (Global_1315860[iVar0] > Global_1315864)
		{
			Global_1315864 = Global_1315860[iVar0];
		}
		iVar0++;
	}
	Global_1315865 = (Global_1315863 * -0.5f);
	Global_1315868 = (Global_1315863 * 0.5f);
	Global_1315865.f_1 = ((((0.5f * Global_1315857[0]) + Global_1315857[1]) + Global_1315836.f_3) * -1f);
	Global_1315868.f_1 = (0.5f * Global_1315857[0]);
	Global_1315865.f_2 = (Global_1315860[0] * -0.5f);
	Global_1315868.f_2 = (Global_1315860[0] * 0.5f);
	*uParam1 = { Global_1315865 };
	*uParam2 = { Global_1315868 };
}

void func_220(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_222(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_223()
{
	int iVar0;
	
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (func_17(unk_0xBD11ACD80727BD31(Local_89.f_158)))
		{
			iVar0 = func_226(unk_0xBD11ACD80727BD31(Local_89.f_158));
			if (iVar0 != -1)
			{
				if (!func_225(&(Global_1573357.f_380), iVar0) && !func_225(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_533), iVar0))
				{
					func_224(1);
				}
			}
		}
	}
}

void func_224(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!unk_0x234B68AC2E35ED5A(Global_1695733, 9))
			{
				unk_0x191DDA30577F440A(&Global_1695733, 9);
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733, 9))
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 9);
	}
}

bool func_225(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0x234B68AC2E35ED5A((*uParam0)[iVar0], iVar1);
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x419E13582192CFEA(iParam0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = func_230(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = unk_0xB71084333B418824(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_227(iVar3);
				if (Global_1688652[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_227(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1688652[iVar0] == 0)
	{
		Global_1688652[iVar0] = unk_0xFA82BD1142427E0F(func_229(iParam0), func_228(iParam0));
	}
}

char* func_228(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_229(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 983.2747f, -99.3188f, 73.8454f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_230(int iParam0)
{
	if (func_237(iParam0))
	{
		return 15;
	}
	if (func_235(iParam0))
	{
		return 28;
	}
	if (func_233(iParam0))
	{
		return 36;
	}
	if (func_232(iParam0))
	{
		return 23;
	}
	if (func_231(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_231(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if ((unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_232(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((unk_0x8954E9D0A9F6F8CF(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_233(int iParam0)
{
	return ((!unk_0xE50EB54E0F21BED0(iParam0, 0) && unk_0x591190E69BE43117(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, 0, 1, 0)) || func_234());
}

int func_234()
{
	if (!unk_0x8B6A925F148E0E94())
	{
		if (vdist2(func_6(unk_0x1146A9AE09CE2B14()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (unk_0x3D6C3476988DE6E1(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_235(int iParam0)
{
	return ((!unk_0xE50EB54E0F21BED0(iParam0, 0) && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_236());
}

int func_236()
{
	struct<3> Var0;
	
	if (!unk_0x8B6A925F148E0E94())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (vdist2(func_6(unk_0x1146A9AE09CE2B14()), Var0) <= 25600f)
		{
			if (unk_0x3D6C3476988DE6E1(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_237(int iParam0)
{
	return ((!unk_0xE50EB54E0F21BED0(iParam0, 0) && unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_238());
}

int func_238()
{
	struct<3> Var0;
	
	if (!unk_0x8B6A925F148E0E94())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (vdist2(func_6(unk_0x1146A9AE09CE2B14()), Var0) <= 25600f)
		{
			if (unk_0x3D6C3476988DE6E1(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_239(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_35())
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0x0E8572B08CEB6A11(Local_89.f_168) && unk_0x2671671BBCC6AD9F(Local_89.f_168))
		{
			if (unk_0xBEFF25A5E38D38C3(Local_89.f_168) || iParam0)
			{
				if (!func_77())
				{
					func_71(0);
				}
				func_250(1);
				if ((!func_249() || unk_0x234B68AC2E35ED5A(Local_89.f_5, 1)) || func_195())
				{
					unk_0xAF98B1BA240CE3DB();
				}
				else
				{
					unk_0xEFD424FDD55A6EC7(9);
					unk_0xEFD424FDD55A6EC7(7);
					unk_0xEFD424FDD55A6EC7(8);
					func_80();
					func_247(1);
					uVar0 = unk_0xB71084333B418824(unk_0xD93F965CFAC1D06A(Local_89.f_158));
					if (unk_0xE75EE67F14EAAE37(uVar0))
					{
						Global_1695733.f_24 = uVar0;
						if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 8))
						{
							Local_89.f_123 = func_246(unk_0x8EF43D7DBE009D96(uVar0));
							unk_0x09FCE4B90C450212(uVar0, &(Local_89.f_146), &(Local_89.f_17));
							unk_0x191DDA30577F440A(&(Local_89.f_5), 8);
						}
						iVar1 = 0;
						if (func_245(Local_89.f_149.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1695733.f_9 == -1f)
						{
							unk_0x98E94A93D7CF5AF1(1f);
						}
						else
						{
							unk_0x98E94A93D7CF5AF1(Global_1695733.f_9);
						}
						if ((!func_166(unk_0x1146A9AE09CE2B14()) && !func_242(unk_0x1146A9AE09CE2B14())) && !func_16())
						{
							if (!func_241())
							{
								func_240(1);
							}
						}
						if (!func_16())
						{
							unk_0x7C5DE7CC950647DA(0, 0);
						}
						unk_0xD13A0E3C40852A22(Local_89.f_17, Local_89.f_146, Local_89.f_146.f_1, floor(Local_89.f_123), iVar1);
					}
					else
					{
						Local_89.f_17 = -1;
						if (Global_1695733.f_9 == -1f)
						{
							unk_0x98E94A93D7CF5AF1(0f);
						}
						else
						{
							unk_0x98E94A93D7CF5AF1(Global_1695733.f_9);
						}
						if (!func_241() && !func_16())
						{
							func_240(1);
						}
						if (!func_16())
						{
							unk_0x7C5DE7CC950647DA(0, 0);
						}
						Global_1695733.f_24 = -1;
						if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 8))
						{
							unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_240(int iParam0)
{
	Global_2465786 = iParam0;
}

bool func_241()
{
	return Global_2465786;
}

int func_242(int iParam0)
{
	if (func_244(iParam0))
	{
		return 1;
	}
	if (func_243(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_91(iParam0, 9);
	}
	return 0;
}

int func_244(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

int func_245(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_246(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_247(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_99422.f_8 = 1;
	}
	else
	{
		Global_99422.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 56)
	{
		func_248(iVar0);
		iVar0++;
	}
}

void func_248(int iParam0)
{
	Global_99422.f_190[iParam0] = 1;
	Global_99422.f_189 = 1;
}

bool func_249()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 4);
}

void func_250(int iParam0)
{
	if (Global_2544210.f_4621 != iParam0)
	{
		Global_2544210.f_4621 = iParam0;
	}
}

void func_251()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	float fVar16;
	struct<3> Var17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	var uVar26;
	var uVar27;
	struct<3> Var28;
	
	if ((unk_0x234B68AC2E35ED5A(Local_89.f_5, 1) || func_195()) || func_83())
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = unk_0x6178A36ADE734254(unk_0xBD11ACD80727BD31(Local_89.f_158));
			fVar5 = unk_0xEE91D595F0A7D056(unk_0xBD11ACD80727BD31(Local_89.f_158));
			if (func_30())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * timestep());
			func_256();
			unk_0xB5D61F76D4980A55(2);
			func_255(&(Local_89[0]), &(Local_89[1]), &(Local_89[2]), &(Local_89[3]), 0, 0);
			if (unk_0x0D901EFDFD7EF9D5(0))
			{
				iVar3 = 5;
				Local_89[2] = (Local_89[2] * iVar3);
				Local_89[3] = (Local_89[3] * iVar3);
			}
			if (unk_0x3840DB3ECC7D0818())
			{
				Local_89[3] = (Local_89[3] * -1);
			}
			if (func_22(&(Local_89.f_276), 750, 0))
			{
				if (!unk_0x0D901EFDFD7EF9D5(0))
				{
					bVar7 = unk_0x96DF114B59E81B9C(0, 210);
				}
				else
				{
					bVar7 = (unk_0x96DF114B59E81B9C(0, 241) || unk_0x96DF114B59E81B9C(0, 242));
					if (unk_0x96DF114B59E81B9C(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_207(&(Local_89.f_276), 0, 0);
				}
			}
			if (bVar7 && !func_254())
			{
				if (!unk_0x0D901EFDFD7EF9D5(0))
				{
					Local_89.f_25++;
				}
				else if (bVar8)
				{
					Local_89.f_25 = (Local_89.f_25 - 1);
				}
				else
				{
					Local_89.f_25++;
				}
				if (unk_0x964C4D363AF812CB(Local_89.f_39))
				{
					Local_89.f_39 = unk_0x5AD02BBC63E31E46();
					unk_0x9B0169E27978C1A2(Local_89.f_39, "HUD_Zoom_Change", Local_89.f_156, 1);
				}
				if (Local_89.f_25 > 2)
				{
					Local_89.f_25 = 0;
				}
				else if (Local_89.f_25 < 0)
				{
					Local_89.f_25 = 2;
				}
			}
			else if (unk_0x964C4D363AF812CB(Local_89.f_39))
			{
				unk_0x791B4C3811D53DFA(Local_89.f_39);
				unk_0xBAB6F7501A822416(Local_89.f_39);
				Local_89.f_39 = -1;
			}
			Local_89.f_128 = (Local_89.f_128 + (((Local_89.f_126 - Local_89.f_128) * 0.06f) * fVar6));
			unk_0xEF20E9A7B745D17A(Local_89.f_168, Local_89.f_128);
			if (Local_89[2] != 0 || Local_89[3] != 0)
			{
				if (Local_89[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_89[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_89[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_89[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { unk_0x4BB6BF4A85268A22(unk_0xBD11ACD80727BD31(Local_89.f_158), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_89.f_130);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_89.f_130);
				if ((fVar4 != 0f || Local_89[0] != 0) && !func_77())
				{
					if (Local_89[0] != 0)
					{
						fVar16 = (1f / (127f / IntToFloat(Local_89[0])));
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar16 = -1f;
							}
							else
							{
								fVar16 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar16 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar16 = -0.001f;
							}
						}
						else
						{
							fVar16 = 0f;
						}
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var15 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_89[0] == 0)
					{
						if (Var15.f_1 > fVar1)
						{
							Var15.f_1 = fVar1;
						}
						else if (Var15.f_1 < -fVar1)
						{
							Var15.f_1 = -fVar1;
						}
					}
					else if (Var15.f_1 > fVar1)
					{
						Var15.f_1 = fVar1;
					}
					else if (Var15.f_1 < -fVar1)
					{
						Var15.f_1 = -fVar1;
					}
				}
				if (Var15.x > fVar2)
				{
					Var15.x = fVar2;
				}
				else if (Var15.x < -fVar2)
				{
					Var15.x = -fVar2;
				}
				if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 12))
				{
					unk_0x191DDA30577F440A(&(Local_89.f_5), 12);
				}
				unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_89.f_158), Vector(0f, 0f, 0f) + Vector(Var15.f_2, Var15.f_1, Var15.x), 2, 1);
			}
			else if (((Local_89[0] != 0 || Local_89[1] != 0) && !func_254()) && !func_77())
			{
				Var17 = { unk_0x4BB6BF4A85268A22(unk_0xBD11ACD80727BD31(Local_89.f_158), 2) };
				if (func_254())
				{
					if (func_253())
					{
						fVar19 = -1f;
						Local_89.f_129 = fVar19;
					}
				}
				else
				{
					if (Local_89[0] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_89[0])));
						Local_89.f_129 = fVar18;
					}
					else
					{
						fVar18 = 0f;
					}
					if (Local_89[1] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_89[1])));
						Local_89.f_129 = fVar18;
					}
					else
					{
						fVar19 = 0f;
					}
				}
				fVar20 = -(((fVar19 * 0.05f) * fVar6) * fVar0);
				fVar21 = -(((fVar18 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_89[0] == 0 && !func_77()) || func_254())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar18 = -1f;
							}
							else
							{
								fVar18 = 1f;
							}
						}
						if (Var17.f_1 < 1.5f && Var17.f_1 > 0f)
						{
							fVar18 = 0.001f;
						}
						else if (Var17.f_1 > -1.5f && Var17.f_1 < 0f)
						{
							fVar18 = -0.001f;
						}
						fVar21 = -(((fVar18 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var22 = { Vector(0f, fVar21, fVar20) + Var17 };
				if (Var22.f_1 > fVar1)
				{
					Var22.f_1 = fVar1;
				}
				else if (Var22.f_1 < -fVar1)
				{
					Var22.f_1 = -fVar1;
				}
				if (Var22.x > fVar2)
				{
					Var22.x = fVar2;
				}
				else if (Var22.x < -fVar2)
				{
					Var22.x = -fVar2;
				}
				if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 12))
				{
					unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 12);
				}
				unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_89.f_158), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var22.f_1, Var22.x), 2, 1);
			}
			else if (!func_253() && !func_254())
			{
				Local_89.f_129 = 0f;
				Var23 = { unk_0x4BB6BF4A85268A22(unk_0xBD11ACD80727BD31(Local_89.f_158), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var23.x < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 1.5f && Var23.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var23.f_1 > -1.5f && Var23.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (Var23.x != 0f)
					{
						if (Var23.x < 1.5f && Var23.x > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (Var23.x > -1.5f && Var23.x < 0f)
						{
							fVar25 = -0.001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					uVar26 = func_252(-(((fVar25 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar27 = func_252(-(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var28 = { Vector(0f, uVar27, uVar26) + Var23 };
					if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 12))
					{
						Var28.x = Var23.x;
					}
					unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_89.f_158), Vector(0f, 0f, 0f) + Vector(Var23.f_2, Var28.f_1, Var28.x), 2, 1);
				}
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

float func_252(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_253()
{
	return unk_0x234B68AC2E35ED5A(Local_89.f_5, 22);
}

bool func_254()
{
	return unk_0x234B68AC2E35ED5A(Local_89.f_5, 21);
}

void func_255(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0x98501142AE80A99C(2, 218) * 127f));
	*uParam1 = floor((unk_0x98501142AE80A99C(2, 219) * 127f));
	*uParam2 = floor((unk_0x98501142AE80A99C(2, 220) * 127f));
	*uParam3 = floor((unk_0x98501142AE80A99C(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x7739A311341A5999(2, 218))
		{
			*uParam0 = floor((unk_0xA1108F381688010B(2, 218) * 127f));
		}
		if (!unk_0x7739A311341A5999(2, 219))
		{
			*uParam1 = floor((unk_0xA1108F381688010B(2, 219) * 127f));
		}
		if (!unk_0x7739A311341A5999(2, 220))
		{
			*uParam2 = floor((unk_0xA1108F381688010B(2, 220) * 127f));
		}
		if (!unk_0x7739A311341A5999(2, 221))
		{
			*uParam3 = floor((unk_0xA1108F381688010B(2, 221) * 127f));
		}
	}
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (bParam5)
		{
			if (unk_0x3840DB3ECC7D0818())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xA65C4F563B7CF68E())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_256()
{
	if (func_140())
	{
		switch (Local_89.f_25)
		{
			case 0:
				Local_89.f_127 = 90f;
				Local_89.f_126 = 90f;
				break;
			
			case 1:
				Local_89.f_127 = 75f;
				Local_89.f_126 = 75f;
				break;
			
			case 2:
				Local_89.f_127 = 45f;
				Local_89.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_89.f_25)
		{
			case 0:
				Local_89.f_127 = 90f;
				Local_89.f_126 = 90f;
				break;
			
			case 1:
				Local_89.f_127 = 80f;
				Local_89.f_126 = 80f;
				break;
			
			case 2:
				Local_89.f_127 = 70f;
				Local_89.f_126 = 70f;
				break;
			}
	}
}

void func_257()
{
	int iVar0;
	int iVar1;
	
	if (func_70(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = func_182(0);
		Local_89.f_140 = { func_260(&Local_89) };
		if (!unk_0x419E13582192CFEA(Local_89.f_161))
		{
			if (!func_259(Local_89.f_140))
			{
				if (func_181(iVar0))
				{
					Local_89.f_161 = unk_0x795434E153F90E41(iVar0, Local_89.f_140, 0, 0, 1);
					unk_0xDB8D6815E13996A9(Local_89.f_161, Local_89.f_140, 0, 0, 1);
					unk_0x3CBE9F07524C242D(Local_89.f_161, true, 0);
					unk_0x46EDFC827DC67D89(Local_89.f_161, 1, 1);
					unk_0xCE1DD60A1DF5A973(Local_89.f_161, 1);
					unk_0xCD37A28258D70638(Local_89.f_161, func_258());
					unk_0xA2C015B68CE01357(Local_89.f_161, true);
					unk_0x4603196EEEA2355C(Local_89.f_161, false, 0);
					unk_0x824F744352C8BC82(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0xB219A5BFF547852F(Local_89.f_140, 2f, iVar0, 0, 0, 0);
			if (unk_0x419E13582192CFEA(iVar1) && iVar1 != Local_89.f_161)
			{
				if (unk_0xA6BE8F025C6B653F(iVar1))
				{
					unk_0x158745943C39F680(iVar1, 0, 0);
					unk_0xA2C015B68CE01357(iVar1, true);
					unk_0x4603196EEEA2355C(iVar1, true, 0);
				}
				else
				{
					unk_0x13F856602366FE17(iVar1);
				}
			}
		}
	}
	else
	{
		Local_89.f_140 = { func_260(&Local_89) };
	}
}

float func_258()
{
	if (Global_1695733.f_7 != 0f)
	{
		return Global_1695733.f_7;
	}
	return 0f;
}

int func_259(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_260(var uParam0)
{
	if (!func_259(Global_1695733.f_10))
	{
		return Global_1695733.f_10;
	}
	else
	{
		return uParam0->f_140;
	}
	return 0f, 0f, 0f;
}

void func_261()
{
	if (Local_89.f_33 != -1)
	{
		unk_0x791B4C3811D53DFA(Local_89.f_33);
		unk_0xBAB6F7501A822416(Local_89.f_33);
		Local_89.f_33 = -1;
	}
}

int func_262(bool bParam0)
{
	if (unk_0xA300BD5F71A8C704() || unk_0x1C8EA7DABB529A31())
	{
		return 1;
	}
	if (unk_0xFEABE4F1525A0A08())
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (func_267(unk_0x1146A9AE09CE2B14()) && !func_266())
	{
		return 1;
	}
	if (func_166(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x234B68AC2E35ED5A(Global_2542972, 0))
		{
			return 1;
		}
	}
	if (Global_1669334 || Global_1312809)
	{
		func_265(1);
		return 1;
	}
	if (((func_263(0) || func_171(1)) || func_170()) && !bParam0)
	{
		func_71(0);
		func_80();
		func_99();
		return 1;
	}
	return 0;
}

int func_263(bool bParam0)
{
	if (unk_0x4AA05D0E8631839E())
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (func_264(unk_0x7D2B9E6A64637269()))
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

int func_264(int iParam0)
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

void func_265(bool bParam0)
{
	if (bParam0)
	{
		if (!func_37())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 20);
		}
	}
	else if (func_37())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 20);
	}
}

bool func_266()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

int func_267(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_268())
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

bool func_268()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

void func_269()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	struct<3> Var18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	var uVar27;
	var uVar28;
	struct<3> Var29;
	var uVar30;
	
	if (!func_83() || func_195())
	{
		return;
	}
	if (func_35() && func_262(0))
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = unk_0x6178A36ADE734254(unk_0xBD11ACD80727BD31(Local_89.f_158));
			fVar5 = unk_0xEE91D595F0A7D056(unk_0xBD11ACD80727BD31(Local_89.f_158));
			iVar6 = 1;
			if (func_16())
			{
				if (func_262(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_262(0))
			{
				iVar6 = 0;
			}
			if (func_16())
			{
				if (!func_130())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * unk_0x7FF6ACE380ED166C());
			func_256();
			unk_0xB5D61F76D4980A55(2);
			func_255(&(Local_89[0]), &(Local_89[1]), &(Local_89[2]), &(Local_89[3]), 0, 0);
			if (unk_0x0D901EFDFD7EF9D5(0))
			{
				iVar3 = 2;
				if (func_16())
				{
					iVar3 = 3;
				}
				Local_89[2] = (Local_89[2] * iVar3);
				Local_89[3] = (Local_89[3] * iVar3);
			}
			if (unk_0x3840DB3ECC7D0818())
			{
				Local_89[3] = (Local_89[3] * -1);
				Local_89[1] = (Local_89[1] * -1);
			}
			if (Local_89[3] != 0 && Local_89[2] != 0)
			{
				iVar8 = func_271(unk_0x909F156FC4077611(Local_89[3]), unk_0x909F156FC4077611(Local_89[2]));
				Local_89.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_89[1] != 0 && Local_89[0] != 0)
			{
				iVar9 = func_271(unk_0x909F156FC4077611(Local_89[1]), unk_0x909F156FC4077611(Local_89[0]));
				Local_89.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_89[3] != 0)
			{
				Local_89.f_129 = (1f / (127f / IntToFloat(Local_89[3])));
			}
			else if (Local_89[2] != 0)
			{
				Local_89.f_129 = (1f / (127f / IntToFloat(Local_89[2])));
			}
			else if (Local_89[1] != 0)
			{
				Local_89.f_129 = (1f / (127f / IntToFloat(Local_89[1])));
			}
			else if (Local_89[0] != 0)
			{
				Local_89.f_129 = (1f / (127f / IntToFloat(Local_89[0])));
			}
			else
			{
				Local_89.f_129 = 0f;
			}
			if (iVar6 && ((Local_89[2] != 0 || Local_89[3] != 0) || (Local_89[0] != 0 || Local_89[1] != 0)))
			{
				if (Local_89[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_89[2])));
				}
				else if (Local_89[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_89[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_89[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_89[3])));
				}
				else if (Local_89[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_89[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { unk_0x4BB6BF4A85268A22(unk_0xBD11ACD80727BD31(Local_89.f_158), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_89.f_130);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_89.f_130);
				if ((fVar4 != 0f || Local_89[2] != 0) || Local_89[0] != 0)
				{
					if (Local_89[2] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_89[2])));
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_89[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_89[0])));
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar17 = 0.0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar17 = -0.0001f;
							}
						}
						else
						{
							fVar17 = 0f;
						}
						fVar14 = -(((fVar17 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var16 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_89[2] == 0 && Local_89[0] == 0)
					{
						if (Var16.f_1 > fVar1)
						{
							Var16.f_1 = fVar1;
						}
						else if (Var16.f_1 < -fVar1)
						{
							Var16.f_1 = -fVar1;
						}
					}
					else if (Var16.f_1 > fVar1)
					{
						Var16.f_1 = fVar1;
					}
					else if (Var16.f_1 < -fVar1)
					{
						Var16.f_1 = -fVar1;
					}
				}
				if (Var16.x > fVar2)
				{
					Var16.x = fVar2;
				}
				else if (Var16.x < -fVar2)
				{
					Var16.x = -fVar2;
				}
				if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 12))
				{
					unk_0x191DDA30577F440A(&(Local_89.f_5), 12);
				}
				unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_89.f_158), Vector(0f, 0f, 0f) + Vector(Var16.f_2, Var16.f_1, Var16.x), 2, 1);
			}
			else if (iVar6 && (((Local_89[2] != 0 || Local_89[3] != 0) || Local_89[0] != 0) || Local_89[1] != 0))
			{
				Var18 = { unk_0x4BB6BF4A85268A22(unk_0xBD11ACD80727BD31(Local_89.f_158), 2) };
				if (func_254())
				{
					if (func_253())
					{
						fVar20 = -1f;
					}
				}
				else
				{
					if (Local_89[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_89[2])));
					}
					else if (Local_89[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_89[0])));
					}
					else
					{
						fVar19 = 0f;
					}
					if (Local_89[3] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_89[3])));
					}
					else if (Local_89[1] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_89[1])));
					}
					else
					{
						fVar20 = 0f;
					}
				}
				fVar21 = -(((fVar20 * 0.05f) * fVar7) * fVar0);
				fVar22 = -(((fVar19 * 0.05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_89[2] == 0 && Local_89[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (Var18.f_1 < 2f && Var18.f_1 > 0f)
						{
							fVar19 = 0.0001f;
						}
						else if (Var18.f_1 > -2f && Var18.f_1 < 0f)
						{
							fVar19 = -0.0001f;
						}
						fVar22 = -(((fVar19 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var23 = { Vector(0f, fVar22, fVar21) + Var18 };
				if (Var23.f_1 > fVar1)
				{
					Var23.f_1 = fVar1;
				}
				else if (Var23.f_1 < -fVar1)
				{
					Var23.f_1 = -fVar1;
				}
				if (Var23.x > fVar2)
				{
					Var23.x = fVar2;
				}
				else if (Var23.x < -fVar2)
				{
					Var23.x = -fVar2;
				}
				if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 12))
				{
					unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 12);
				}
				unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_89.f_158), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var23.f_1, Var23.x), 2, 1);
			}
			else
			{
				Var24 = { unk_0x4BB6BF4A85268A22(unk_0xBD11ACD80727BD31(Local_89.f_158), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var24.x < 0f)
						{
							fVar26 = -1f;
						}
						else
						{
							fVar26 = 1f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 2f && Var24.f_1 > 0f)
						{
							fVar25 = 0.0001f;
						}
						else if (Var24.f_1 > -2f && Var24.f_1 < 0f)
						{
							fVar25 = -0.0001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var24.x != 0f)
					{
						if (Var24.x < 2f && Var24.x > 0f)
						{
							fVar26 = 0.0001f;
						}
						else if (Var24.x > -2f && Var24.x < 0f)
						{
							fVar26 = -0.0001f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					uVar27 = func_252(-(((fVar26 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar28 = func_252(-(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var29 = { Vector(0f, uVar28, uVar27) + Var24 };
					if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 12))
					{
						Var29.x = Var24.x;
					}
					uVar30 = Var24.f_2;
					if (func_16())
					{
						if (!func_130())
						{
							uVar30 = Local_89.f_116;
							Var29.f_1 = 0f;
						}
					}
					unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_89.f_158), Vector(0f, 0f, 0f) + Vector(uVar30, Var29.f_1, Var29.x), 2, 1);
					if (func_16())
					{
						if (unk_0x0BCA9ADE67DF9DD8(fVar4) < 2.5f && unk_0x0BCA9ADE67DF9DD8(fVar5) < 2.5f)
						{
							func_270(1);
						}
					}
				}
				else if (func_16())
				{
					func_270(1);
				}
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

void func_270(bool bParam0)
{
	if (!bParam0)
	{
		if (unk_0x234B68AC2E35ED5A(Local_89.f_6, 6))
		{
			unk_0xC664C0067EEAB8D1(&(Local_89.f_6), 6);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(Local_89.f_6, 6))
	{
		unk_0x191DDA30577F440A(&(Local_89.f_6), 6);
	}
}

int func_271(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_272()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_35())
	{
		return;
	}
	if (func_249())
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
		{
			if (!unk_0x575B7C28D81C0B4D(Local_89.f_170))
			{
				Local_89.f_170 = func_287(Local_89.f_149, 0);
				unk_0x252BE56DB93DF816(Local_89.f_170, func_286());
				if (func_30() && !unk_0x575B7C28D81C0B4D(Local_89.f_171))
				{
					Local_89.f_171 = func_283(unk_0x7D2B9E6A64637269(), 0, 0);
					unk_0x252BE56DB93DF816(Local_89.f_171, 6);
					unk_0xB5E587F8B911573B(Local_89.f_171, 0);
					unk_0xDD205B87CDFD0C1B(Local_89.f_171, 0.7f);
					unk_0xC5BBAB0F8336ECB7(Local_89.f_171, (13 - 1));
					if (func_280(unk_0x1146A9AE09CE2B14()) != -1)
					{
						func_276(&(Local_89.f_171), func_278(func_280(unk_0x1146A9AE09CE2B14())));
					}
					else
					{
						func_276(&(Local_89.f_171), func_275());
					}
					unk_0x7A4C054D66609AD2(Local_89.f_171, 1);
				}
			}
			else
			{
				fVar0 = func_274(Local_89.f_124);
				fVar1 = Local_89.f_149;
				fVar2 = Local_89.f_149.f_1;
				unk_0xF3A3BAE36B132003(Local_89.f_170, 2);
				unk_0xC983AF341845804E(Local_89.f_170, Local_89.f_149);
				if (((func_24() || func_38()) && unk_0xA300BD5F71A8C704()) && unk_0xE45310E861787FC2())
				{
					if (!unk_0x334435E3E64C4E90())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						unk_0xC983AF341845804E(Local_89.f_170, fVar1, fVar2, 0f);
						unk_0xC8877830539DB973(fVar1, fVar2);
						unk_0x3675641E867C19AC();
					}
				}
				unk_0x348FE88799E71EA4(fVar1, fVar2);
				unk_0x0248C79F1248F36C(Local_89.f_170, round(fVar0));
				unk_0xDD205B87CDFD0C1B(Local_89.f_170, 1f);
				unk_0xC5BBAB0F8336ECB7(Local_89.f_170, 9);
				unk_0x79492A7A520B137D(round(fVar0));
				if (unk_0x575B7C28D81C0B4D(Local_89.f_171))
				{
					unk_0x0248C79F1248F36C(Local_89.f_171, func_273(unk_0x7D2B9E6A64637269()));
				}
			}
		}
	}
}

int func_273(int iParam0)
{
	float fVar0;
	
	fVar0 = unk_0xCABED3A5B36AD93E(iParam0);
	return round(fVar0);
}

float func_274(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_275()
{
	return 10;
}

void func_276(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x575B7C28D81C0B4D(*uParam0))
	{
		iVar0 = func_277(iParam1);
		unk_0xFA3E6ADC3E5D386E(*uParam0, iVar0);
	}
}

int func_277(int iParam0)
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

int func_278(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_279(iParam0);
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

var func_279(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_280(int iParam0)
{
	if (!iParam0 == func_12())
	{
		if (func_281(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_212(iParam0)];
		}
	}
	return -1;
}

bool func_281(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_282(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_12();
}

int func_282(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_12())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_283(int iParam0, bool bParam1, bool bParam2)
{
	return func_284(iParam0, !bParam1, bParam2);
}

int func_284(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_285(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, bParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_285(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, bParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_285(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_285(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_286()
{
	if (func_16())
	{
		return 548;
	}
	return 627;
}

var func_287(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x27E44C95E1D1461C(Param0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_285(unk_0x02BFF15CAA701972(), 1f, 1f));
	unk_0x13CC211F9F7ACE7F(uVar0, iParam1);
	return uVar0;
}

void func_288()
{
	if (func_35())
	{
		if (Local_89.f_149.f_2 >= (func_109() - 20f))
		{
			if (unk_0x964C4D363AF812CB(Local_89.f_37))
			{
				Local_89.f_37 = unk_0x5AD02BBC63E31E46();
				unk_0x9B0169E27978C1A2(Local_89.f_37, "Out_Of_Bounds_Alarm_Loop", Local_89.f_156, 1);
			}
		}
		else if (!unk_0x964C4D363AF812CB(Local_89.f_37))
		{
			unk_0x791B4C3811D53DFA(Local_89.f_37);
			unk_0xBAB6F7501A822416(Local_89.f_37);
			Local_89.f_37 = -1;
		}
	}
}

void func_289()
{
	if (((func_38() || func_140()) || func_30()) || func_162())
	{
		switch (Local_89.f_241)
		{
			case 0:
				func_312();
				break;
			
			case 1:
				func_299();
				break;
			
			case 2:
				func_297();
				break;
			
			case 3:
				func_290();
				break;
			}
	}
}

void func_290()
{
	func_72(1);
	if (!func_296())
	{
		unk_0x6E1E3A5B1F9AB95B(500);
	}
	func_294(0);
	func_292(0);
	func_291(0);
}

void func_291(int iParam0)
{
	if (Local_89.f_241 != iParam0)
	{
		Local_89.f_241 = iParam0;
	}
}

void func_292(bool bParam0)
{
	if (bParam0)
	{
		if (!func_293())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 17);
		}
	}
	else if (func_293())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 17);
	}
}

bool func_293()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 17);
}

void func_294(bool bParam0)
{
	if (bParam0)
	{
		if (!func_295())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 18);
		}
	}
	else if (func_295())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 18);
	}
}

bool func_295()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 18);
}

bool func_296()
{
	return Global_1683970.f_502;
}

void func_297()
{
	if (func_295() || unk_0xA300BD5F71A8C704())
	{
		func_72(1);
		func_298(0);
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
		func_291(3);
	}
}

void func_298(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 19);
		}
	}
	else if (func_77())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 19);
	}
}

void func_299()
{
	if (unk_0x8B6A925F148E0E94())
	{
		if (func_22(&(Local_89.f_266), 3000, 0))
		{
			if (func_311())
			{
				if (unk_0x234B68AC2E35ED5A(Global_4272479, 2) || func_22(&(Local_89.f_270), 8000, 0))
				{
					if (!unk_0x234B68AC2E35ED5A(Global_4272479, 2))
					{
					}
					unk_0x6E1E3A5B1F9AB95B(500);
					func_300(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
					func_21(&(Local_89.f_266));
					func_21(&(Local_89.f_270));
					func_291(2);
				}
			}
			else if (func_22(&(Local_89.f_270), 15000, 0))
			{
				func_21(&(Local_89.f_266));
				func_21(&(Local_89.f_270));
				func_72(1);
				func_298(0);
				unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
				func_291(3);
			}
		}
	}
}

void func_300(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xFDC069EFB77AEBE9())
		{
			unk_0xA82C5CF50055A1B4(0);
		}
	}
	if (func_310())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x02BFF15CAA701972())
	{
		uVar0 = iParam2;
		unk_0xF99B8860747709DD(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xE45310E861787FC2())
		{
			bVar1 = false;
		}
		if (!func_308())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x8CFC2F41A749E236(iParam0) && (unk_0xCAD1755E530A6012(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xD56332194D622ECE(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x02BFF15CAA701972())
				{
					unk_0x387A0B2797EBDE5F(1);
				}
				else if (bVar14 || (!func_116(unk_0x1146A9AE09CE2B14(), 0) && !func_268()))
				{
					unk_0x4603196EEEA2355C(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x02BFF15CAA701972() && !bVar19)
					{
						unk_0x387A0B2797EBDE5F(0);
					}
					Global_2426865[iParam0 /*449*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_305(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_304(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, true, 0);
					}
				}
				if (!unk_0x5976053523EA16C8(iVar27))
				{
					if (!bVar21)
					{
						unk_0xA2C015B68CE01357(iVar27, false);
					}
					unk_0x8B58E7AC53EED9F1(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0xA2C015B68CE01357(iVar27, false);
				}
				unk_0x1D7A4E9E23D306D6(iVar27, true);
				unk_0x03903A362E41A74F(iParam0, 0);
				unk_0x480217AACC9C34FB(iParam0, 0);
				if (unk_0x313CC23B5525839F(iVar27) && unk_0x9038A2103B9BFD38(iVar27))
				{
					unk_0x9C4430B10B361917(iVar27);
				}
				unk_0xF5143FB7B9EC876D(iVar27, 1);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
				{
					func_303();
					func_302();
				}
				if (unk_0x7A4185C9A76C12B2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xCE84F8AB9BD41C13())
				{
				}
				Global_2426865[iParam0 /*449*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405077.f_2679)
				{
					Global_2405077.f_2679 = 0;
				}
			}
			else
			{
				if (!func_304(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, !bVar15, 0);
					}
					if (!unk_0x5976053523EA16C8(iVar27))
					{
						if (!bVar21)
						{
							unk_0xA2C015B68CE01357(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x8B58E7AC53EED9F1(iVar27, 1);
						}
					}
					if (func_301(Global_4456448.f_133963))
					{
						unk_0xA2C015B68CE01357(iVar27, true);
					}
				}
				if (Global_1312878)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x03903A362E41A74F(iParam0, 0);
				}
				else
				{
					unk_0x03903A362E41A74F(iParam0, 1);
				}
				unk_0x1D7A4E9E23D306D6(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x02E166B5C96465D2(iVar27) && !unk_0xC49311A2A500FF09(iVar27, 0))
					{
						unk_0x16D66F11FE644901(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xF99B8860747709DD(iParam0, bParam1, iVar28);
		}
	}
}

bool func_301(int iParam0)
{
	return iParam0 == 17;
}

void func_302()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_303()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x4E8DA737B686529A(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_305(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0x72D30262CF8C8603(iParam1))
			{
				if (!unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), unk_0xCB567ED25393C1DF(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_307();
			}
			else if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 1))
			{
				if (unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0xA01D7927903507FB(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x191DDA30577F440A(&(Global_2359302.f_67), 1);
			}
		}
		if (func_116(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_306(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_306(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_307()
{
	int iVar0;
	
	if (!unk_0xDD14CDB3B8003696())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x5F95E51ABC3FC59A(iVar0);
				iVar0++;
			}
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 2);
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 0);
		}
	}
}

int func_308()
{
	if (func_309() == 0)
	{
		return 1;
	}
	return 0;
}

int func_309()
{
	return Global_1312485.f_18;
}

int func_310()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_311()
{
	if (unk_0x636F1F53CC61D2C9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_312()
{
	if (func_330())
	{
		if (unk_0x609EEF618F8CC869(2, 201) || unk_0x6DC4D8B66C3E0EA0(2, 201))
		{
			if (!func_311())
			{
				if (unk_0xE0A6F16F546C8274())
				{
					func_298(1);
					func_127(-1);
					func_300(unk_0x1146A9AE09CE2B14(), 0, 512, 0);
					unk_0x8BA9BCDD56AA7115(500);
					func_328(1, -1);
					func_313(3, 1, 1, 0);
					func_23(&(Local_89.f_266), 0, 0);
					func_23(&(Local_89.f_270), 0, 0);
					func_291(1);
				}
			}
		}
	}
}

int func_313(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_77248)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!unk_0x234B68AC2E35ED5A(Global_4272479, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 15);
			}
			if (iParam0 == 23)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 27);
			}
			if (iParam0 == 1)
			{
				unk_0x191DDA30577F440A(&Global_4272479, 14);
				unk_0x191DDA30577F440A(&Global_4272479, 29);
			}
		}
		if (Global_7675[iParam0 /*15*/].f_9 == 0)
		{
			func_325();
		}
		if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) > 0)
		{
			unk_0xC664C0067EEAB8D1(&Global_4272479, 14);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 16);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 15);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 27);
			unk_0xC664C0067EEAB8D1(&Global_4272479, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_318();
	if (Global_19798.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_76(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19764 == 1)
	{
		return 0;
	}
	if (Global_19798.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x4BE697D014536271(Global_19795))
	{
		if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19798.f_1 < 4)
			{
				func_317("cellphone_flashhand");
				if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) == 0)
				{
					Global_19795 = start_new_script("cellphone_flashhand", 1424);
				}
				unk_0xFC3890D22570A26E("cellphone_flashhand");
			}
		}
	}
	while (!Global_19780)
	{
		wait(0);
	}
	func_325();
	func_314();
	if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) == 0)
	{
		Global_8274 = 0;
		Global_19798.f_1 = 7;
		func_317(&(Global_7675[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) == 0)
			{
				Global_19796 = start_new_script(&(Global_7675[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x636F1F53CC61D2C9(Global_7675[iParam0 /*15*/].f_9) == 0)
		{
			Global_19796 = start_new_script(&(Global_7675[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xFC3890D22570A26E(&(Global_7675[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_314()
{
	if (Global_77248 == 0)
	{
		Global_7675[14 /*15*/].f_4 = -99;
		Global_7675[4 /*15*/].f_4 = -99;
		if (Global_2463492)
		{
			if (func_316(14))
			{
				func_315(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_315(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_315(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_315(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_315(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7675[iParam0 /*15*/]), sParam1, 16);
	Global_7675[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7675[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7675[iParam0 /*15*/].f_9 = unk_0x15173FB88ABC94F9(sParam3);
	Global_7675[iParam0 /*15*/].f_10 = iParam4;
	Global_7675[iParam0 /*15*/].f_11 = iParam5;
	Global_7675[iParam0 /*15*/].f_12 = iParam6;
	Global_7675[iParam0 /*15*/].f_13 = iParam7;
	Global_7675[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7675[iParam0 /*15*/].f_12 == 0)
	{
		Global_7675[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7675[iParam0 /*15*/].f_13 == 0)
	{
		Global_7675[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7675[iParam0 /*15*/].f_14 == 0)
	{
		Global_7675[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_316(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_317(char* sParam0)
{
	unk_0xA7988ABD4140D469(sParam0);
	while (!unk_0x79CDCC8ABB331B8C(sParam0))
	{
		wait(0);
	}
}

void func_318()
{
	if (func_316(14))
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
		Global_19798 = func_319();
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

var func_319()
{
	func_320();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_320()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_323(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_322(unk_0x7D2B9E6A64637269());
			if (func_321(iVar0) && (!func_316(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_321(Global_112293.f_2361.f_539.f_4321))
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

bool func_321(int iParam0)
{
	return iParam0 < 3;
}

int func_322(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_323(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_323(int iParam0)
{
	if (func_321(iParam0))
	{
		return func_324(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_324(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7675[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_77248 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_327(iVar2, Global_19798) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_315(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_315(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_315(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_42009 == 15 && func_326(0) == 0) && Global_7673 == 0)
		{
			func_315(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19987 = 0;
			Global_7674 = 255;
		}
		else
		{
			func_315(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19987 = 1;
			Global_7674 = 42;
		}
		if (iVar1 == 1)
		{
			func_315(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_315(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_315(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_315(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_315(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_112293.f_14049.f_89 == 1)
		{
			func_315(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_112293.f_14049.f_88 == 1)
		{
			func_315(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_315(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_315(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_315(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_315(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_315(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_315(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_315(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_315(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_315(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_315(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_315(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_315(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_315(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_315(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_315(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_315(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_315(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0x234B68AC2E35ED5A(Global_4272479, 4) == 1)
		{
			func_315(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_315(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_315(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_315(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_315(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_315(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_315(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_315(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_315(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_315(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_315(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_315(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_315(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_315(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_315(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_315(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_315(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0x234B68AC2E35ED5A(Global_4272479, 4) == 1)
		{
			if (Global_1573938)
			{
				func_315(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4272479, 20) == 1)
			{
				func_315(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4272479, 22) == 1)
			{
				func_315(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4272479, 26) == 1)
			{
				func_315(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0x234B68AC2E35ED5A(Global_4272479, 4) == 0 && Global_1573938 == 0) && unk_0x234B68AC2E35ED5A(Global_4272479, 20) == 0) && unk_0x234B68AC2E35ED5A(Global_4272479, 22) == 0) && unk_0x234B68AC2E35ED5A(Global_4272479, 26) == 0)
		{
			func_315(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_326(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_327(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_19[iParam1];
}

void func_328(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_124(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22670.f_8674)
	{
		unk_0x956EB3331C33B055(15);
		Global_22670.f_8674 = 0;
	}
	unk_0x643A5EAD42A4060C(0f);
	if (Global_22670.f_5885[iVar0])
	{
		unk_0xE498E37B41AEA1DF(9, 0);
		Global_22670.f_5885[iVar0] = 0;
	}
	if (Global_22670.f_5871[iVar0])
	{
		unk_0xB5F867E143F78583("CommonMenu");
		Global_22670.f_5871[iVar0] = 0;
	}
	if (Global_22670.f_5878[iVar0])
	{
		unk_0xB5F867E143F78583("MPShopSale");
		Global_22670.f_5878[iVar0] = 0;
	}
	if (bParam0)
	{
		func_329(&(Global_22670.f_5917[iVar0 /*10*/]));
		Global_22670.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22670.f_5978[iVar0] = 0;
	}
}

void func_329(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xDAE4BC89A198A6AF(*uParam0))
		{
			unk_0x3D9BC07C93913E04(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_330()
{
	if (func_77())
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if ((func_171(0) || func_170()) || unk_0x2D54F00919E36B63())
	{
		func_21(&(Local_89.f_274));
		func_23(&(Local_89.f_274), 0, 0);
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
		func_99();
		return 0;
	}
	else if (func_25(&(Local_89.f_274)))
	{
		if (!func_22(&(Local_89.f_274), 2000, 0))
		{
			return 0;
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 16);
			func_21(&(Local_89.f_274));
		}
	}
	if (func_166(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

void func_331()
{
	if (func_332())
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
		{
			if (unk_0xB364346471C3B028(Local_89.f_158))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 25))
				{
					unk_0xA2C015B68CE01357(unk_0xBD11ACD80727BD31(Local_89.f_158), true);
					unk_0x191DDA30577F440A(&(Local_89.f_5), 25);
				}
			}
			else
			{
				unk_0x1AA7FA4BBD799B88(Local_89.f_158);
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 25))
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
		{
			if (unk_0xB364346471C3B028(Local_89.f_158))
			{
				unk_0xA2C015B68CE01357(unk_0xBD11ACD80727BD31(Local_89.f_158), false);
				unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 25);
			}
			else
			{
				unk_0x1AA7FA4BBD799B88(Local_89.f_158);
			}
		}
	}
}

int func_332()
{
	if (func_166(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x234B68AC2E35ED5A(Global_2542972, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_333()
{
	int iVar0;
	
	if (func_83())
	{
		Global_1695733.f_1 = 0;
	}
	if (func_340() || func_195())
	{
		if (!func_25(&(Local_89.f_246)))
		{
			func_23(&(Local_89.f_246), 0, 0);
		}
		else if (func_22(&(Local_89.f_246), Global_1695733.f_1, 0) || func_195())
		{
			func_21(&(Local_89.f_244));
			if (func_83())
			{
				if (func_17(unk_0x7D2B9E6A64637269()))
				{
					unk_0xEC37EA74A17D9A1E(unk_0x7D2B9E6A64637269(), func_339(), func_338(), func_337(), 1, 0, 1065353216);
				}
				else
				{
					unk_0x8B84CFCA87CEA22E(func_339(), func_338(), func_337(), 1, 0, 1065353216, 0);
				}
				unk_0x8543AEC08F877EE9(0, 300, 200);
				unk_0x5CC6562CB9448056(Local_89.f_158, 1);
				unk_0x961F6202C2192265();
				iVar0 = unk_0xBD11ACD80727BD31(Local_89.f_158);
				unk_0x04F4D55F2C0C756D(&iVar0);
				unk_0x191DDA30577F440A(&(Local_89.f_6), 2);
			}
			if (func_31())
			{
				func_336(1);
				if (Local_89.f_26 == 0)
				{
					func_334(6, 0, 0);
				}
				else
				{
					func_334(5, 0, 0);
				}
			}
			func_386(1);
			func_385(5);
		}
	}
	else if (func_25(&(Local_89.f_246)))
	{
		func_207(&(Local_89.f_246), 0, 0);
	}
}

void func_334(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	float fVar2;
	float fVar3;
	
	StringCopy(&cVar0, func_335(iParam0), 64);
	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 69;
	}
	fVar2 = 8f;
	fVar3 = -8f;
	Local_89.f_79 = unk_0x88A92D91AB021F3F(Local_89.f_152, 0f, 0f, Local_89.f_118, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
	unk_0x5DDC0EBEF6A48288(unk_0x7D2B9E6A64637269(), Local_89.f_79, Local_89.f_157, &cVar0, fVar2, fVar3, iVar1, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			unk_0x6ACFF9B807C63BBA(unk_0xD93F965CFAC1D06A(Local_89.f_158), Local_89.f_79, Local_89.f_157, &cVar0, fVar2, fVar3, 8);
		}
	}
	StringCopy(&cVar0, func_335(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (unk_0x159BC3DDA80D71AC(Local_89.f_159))
	{
		unk_0xFFE2CF1579FA5C68(unk_0xD93F965CFAC1D06A(Local_89.f_159), &cVar0, Local_89.f_157, fVar2, bParam1, iParam2, 0, 0f, 0);
		unk_0x20CC00CC70A99443(unk_0xD93F965CFAC1D06A(Local_89.f_159));
	}
	unk_0x20F6F12F2945E30E(Local_89.f_79);
}

char* func_335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_336(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x51FB94D5F3D17E35(iVar0);
	if (unk_0xEEC203A73BC92E7E(iVar0))
	{
		unk_0xFD1CE2B6AA9C0F57(iVar0);
		unk_0x3DF4E172AD7D16AF(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_17(unk_0x7D2B9E6A64637269()))
		{
			unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
		}
	}
}

float func_337()
{
	if (func_16())
	{
		return 1f;
	}
	return 0.5f;
}

int func_338()
{
	if (func_16())
	{
		return 81;
	}
	return 72;
}

Vector3 func_339()
{
	if (func_16())
	{
		return unk_0x0D9118860A976DFD(Local_89.f_168);
	}
	return Local_89.f_149;
}

int func_340()
{
	if ((unk_0x159BC3DDA80D71AC(Local_89.f_158) && unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0)) && !unk_0x234B68AC2E35ED5A(Local_89.f_5, 2))
	{
		return 1;
	}
	if (Local_89.f_12 == 2)
	{
		Local_89.f_26 = 1;
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 1))
	{
		return 1;
	}
	if (func_349())
	{
		Local_89.f_26 = 5;
		return 1;
	}
	if (func_140() && func_342())
	{
		Local_89.f_26 = 5;
		return 1;
	}
	if (func_31() || func_16())
	{
		if (func_342())
		{
			Local_89.f_26 = 5;
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 2))
	{
		Local_89.f_26 = 4;
		return 1;
	}
	if (func_179())
	{
		if (!func_25(&(Local_89.f_254)))
		{
			func_23(&(Local_89.f_254), 0, 0);
		}
		else if (func_22(&(Local_89.f_254), 3000, 0))
		{
			Local_89.f_26 = 0;
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 7))
	{
		Local_89.f_26 = 0;
		return 1;
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0x0297E633EADA2182(unk_0xBD11ACD80727BD31(Local_89.f_158)) || func_204(unk_0xD93F965CFAC1D06A(Local_89.f_158), 0))
		{
			if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 29))
			{
				Local_89.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_140() && !func_341())
	{
		if (Local_89.f_149.f_2 >= func_109())
		{
			Local_89.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_341()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 0);
}

int func_342()
{
	struct<3> Var0;
	int iVar1;
	
	if (func_348())
	{
		return 0;
	}
	if (func_19(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
		{
			if (func_140())
			{
				if (unk_0x419E13582192CFEA(func_347()) && !unk_0xE50EB54E0F21BED0(func_347(), 0))
				{
					Var0 = { unk_0xD6E677FAD7521410(func_347(), 1) };
				}
			}
			else if (func_30())
			{
				if (!func_31())
				{
					iVar1 = func_343(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9);
					switch (iVar1)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
				}
			}
			else if (func_16())
			{
				if (func_17(func_15()))
				{
					Var0 = { unk_0xD6E677FAD7521410(func_15(), 1) };
				}
			}
			else
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			if (func_17(unk_0xBD11ACD80727BD31(Local_89.f_158)))
			{
				Local_89.f_120 = func_157(unk_0xBD11ACD80727BD31(Local_89.f_158), Var0, 1);
				if (Local_89.f_120 > func_109())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_343(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_12())
	{
		iVar0 = func_346(iParam0);
		if (iVar0 != 0)
		{
			return func_344(iVar0);
		}
	}
	return -1;
}

int func_344(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 154)
	{
		if (func_29(iVar0) == 17)
		{
			if (func_345(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 1;
		
		case 129:
			return 2;
		
		case 130:
			return 3;
		
		case 131:
			return 4;
		
		case 132:
			return 5;
		
		case 133:
			return 6;
		
		default:
	}
	return 0;
}

int func_346(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1590908[iParam0 /*874*/].f_267.f_395;
	}
	return 0;
}

int func_347()
{
	if (Global_1590753 != func_12())
	{
		if (!func_47(Global_1590753))
		{
			if (unk_0x419E13582192CFEA(Global_1372072))
			{
				return Global_1372072;
			}
			if (unk_0x419E13582192CFEA(Global_1700849[Global_1590753]))
			{
				return Global_1700849[Global_1590753];
			}
		}
	}
	return -1;
}

bool func_348()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 6);
}

int func_349()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0))
	{
		iVar1 = Global_262145.f_24337;
		if (func_16())
		{
			iVar1 *= 10;
		}
		if (unk_0x7956E831D8C0C17C(Local_89.f_149, &fVar0, 1, 0))
		{
			Local_89.f_121 = (Local_89.f_149.f_2 - fVar0);
			if (Local_89.f_121 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_350()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!func_83())
	{
		return;
	}
	if ((unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0)) && unk_0x0E8572B08CEB6A11(Local_89.f_168))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 1) || func_195())
			{
				return;
			}
			Var0 = { func_351(func_352()) };
			bVar3 = false;
			iVar4 = 1;
			iVar5 = 0;
			if (func_16())
			{
				bVar3 = true;
				iVar4 = 0;
				iVar5 = 0;
			}
			if (func_35())
			{
				if (!unk_0x0D901EFDFD7EF9D5(0))
				{
					if (unk_0x98501142AE80A99C(2, 208) != 0f)
					{
						iVar1 = 1;
					}
					if (unk_0x98501142AE80A99C(2, 207) != 0f)
					{
						iVar2 = 1;
					}
				}
				else
				{
					if (unk_0x98501142AE80A99C(2, 209) != 0f)
					{
						iVar1 = 1;
					}
					if (unk_0x98501142AE80A99C(2, 210) != 0f)
					{
						iVar2 = 1;
					}
				}
			}
			if (iVar1 && !func_262(bVar3))
			{
				Local_89.f_119 = 140f;
			}
			else if (iVar2 && !func_262(bVar3))
			{
				Local_89.f_119 = 60f;
			}
			else if (!func_16())
			{
				Local_89.f_119 = 100f;
			}
			unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), iVar5, Var0 * Vector(-Local_89.f_119, -Local_89.f_119, -Local_89.f_119), 0, 1, iVar4, 0);
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

Vector3 func_351(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_352()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_353(&Var0);
	return Var0;
}

void func_353(var uParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_354()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	
	if (func_83())
	{
		return;
	}
	if ((unk_0x159BC3DDA80D71AC(Local_89.f_158) && !unk_0xE50EB54E0F21BED0(unk_0xBD11ACD80727BD31(Local_89.f_158), 0)) && unk_0x0E8572B08CEB6A11(Local_89.f_168))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			fVar0 = 0f;
			if (!func_38() && !func_24())
			{
				if (!func_254())
				{
					if (func_25(&(Local_89.f_252)))
					{
						iVar1 = Global_262145.f_24335;
						if (func_24())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_22(&(Local_89.f_252), iVar1, 0))
						{
							iVar2 = (100 * unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_252)));
							Local_89.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_17(Local_89.f_160))
							{
								unk_0x0F1058706D5A58B4(Local_89.f_160, unk_0xBD11ACD80727BD31(Local_89.f_158), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_89.f_20 = 100;
							func_21(&(Local_89.f_252));
							if (!unk_0x964C4D363AF812CB(Local_89.f_43))
							{
								unk_0x791B4C3811D53DFA(Local_89.f_43);
								unk_0xBAB6F7501A822416(Local_89.f_43);
								Local_89.f_43 = -1;
							}
						}
					}
					if (!unk_0x0D901EFDFD7EF9D5(0))
					{
						bVar3 = unk_0x96DF114B59E81B9C(0, 209);
					}
					else
					{
						bVar3 = unk_0x96DF114B59E81B9C(0, 203);
					}
					if ((((bVar3 && Local_89.f_20 == 100) && !func_262(0)) && !func_77()) && func_163())
					{
						fVar0 = 120f;
						if (func_24())
						{
							fVar0 = 110f;
						}
						else if (func_30())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_89[1]) != 0f)
						{
							func_361(1);
						}
						else
						{
							func_361(0);
						}
						unk_0x9673FB069F90F6B9("RaceTurbo", 0, 0);
						func_23(&(Local_89.f_250), 0, 0);
						func_360(1);
						if (unk_0x964C4D363AF812CB(Local_89.f_42))
						{
							Local_89.f_42 = unk_0x5AD02BBC63E31E46();
							unk_0x9B0169E27978C1A2(Local_89.f_42, "HUD_Boost_Loop", Local_89.f_156, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_24())
					{
						fVar0 = 115f;
					}
					else if (func_30())
					{
						fVar0 = 49f;
					}
					if (unk_0x0E8572B08CEB6A11(Local_89.f_168))
					{
						if (!unk_0x92685F7745983649(Local_89.f_168))
						{
							unk_0x9C9EC7CC88D050FA(Local_89.f_168, "DRONE_BOOST_SHAKE", 1065353216);
							unk_0xD3693FDC4A25CD24(Local_89.f_168, 0.15f);
						}
					}
					if (func_25(&(Local_89.f_250)))
					{
						if (func_22(&(Local_89.f_250), Global_262145.f_24334, 0))
						{
							Local_89.f_20 = 0;
							func_361(0);
							func_360(0);
							func_21(&(Local_89.f_252));
							func_23(&(Local_89.f_252), 0, 0);
							unk_0x111FCF62A4BA857D(Local_89.f_168, 1);
							unk_0x6421AF3DB6AF9597(0);
							unk_0xBAF2F13FE4D19AA9("RaceTurbo");
							func_21(&(Local_89.f_250));
							if (!unk_0x964C4D363AF812CB(Local_89.f_42))
							{
								unk_0x791B4C3811D53DFA(Local_89.f_42);
								unk_0xBAB6F7501A822416(Local_89.f_42);
								Local_89.f_42 = -1;
							}
							if (unk_0x964C4D363AF812CB(Local_89.f_43))
							{
								Local_89.f_43 = unk_0x5AD02BBC63E31E46();
								unk_0x9B0169E27978C1A2(Local_89.f_43, "HUD_Boost_Recharge_Loop", Local_89.f_156, 1);
							}
						}
						else
						{
							fVar4 = (100f / (to_float(Global_262145.f_24334) / IntToFloat(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_250))));
							Local_89.f_20 = (100 - round(fVar4));
							unk_0x8543AEC08F877EE9(0, Global_262145.f_24334, 255);
						}
					}
				}
			}
			Var5 = { Local_89.f_149 };
			if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 1) || func_195())
			{
				return;
			}
			Var6 = { func_351(func_352()) };
			Var7 = { func_351(func_359(func_352())) };
			unk_0x7956E831D8C0C17C(Var5, &fVar8, 1, 0);
			if (!func_358())
			{
				if (Local_89.f_10 == 2 || (Var5.f_2 - fVar8) < 2f)
				{
					fVar9 = 24f;
					if (Local_89[1] != 0)
					{
						unk_0x366E7F593105797F(2, 207, 1);
					}
					if (unk_0x98501142AE80A99C(2, 207) != 0f || Local_89[1] != 0)
					{
						if ((Var5.f_2 - fVar8) < 0.5f || unk_0x98501142AE80A99C(2, 207) != 0f)
						{
							fVar9 = 24f;
						}
						else
						{
							fVar9 = 10f;
						}
					}
					else
					{
						fVar9 = 3f;
					}
					unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, 0f, fVar9, 0, 1, 1, 0);
				}
			}
			if (unk_0x0D901EFDFD7EF9D5(0))
			{
				if (Local_89[2] >= 127)
				{
					Local_89[2] = 127;
				}
				else if (Local_89[2] <= -127)
				{
					Local_89[2] = -127;
				}
				if (Local_89[0] >= 127)
				{
					Local_89[0] = 127;
				}
				else if (Local_89[0] <= -127)
				{
					Local_89[0] = -127;
				}
			}
			if (!unk_0x0D901EFDFD7EF9D5(0))
			{
				if (unk_0x98501142AE80A99C(2, 208) != 0f)
				{
					iVar10 = 1;
				}
				if (unk_0x98501142AE80A99C(2, 207) != 0f)
				{
					iVar11 = 1;
				}
			}
			else
			{
				if (unk_0x98501142AE80A99C(2, 209) != 0f)
				{
					iVar10 = 1;
				}
				if (unk_0x98501142AE80A99C(2, 210) != 0f)
				{
					iVar11 = 1;
				}
			}
			if (((iVar10 && func_357()) && !func_77()) || (func_254() && !func_253()))
			{
				fVar14 = Local_89.f_119;
				if (func_162())
				{
					fVar14 = 5f;
				}
				if (func_38() || func_24())
				{
					fVar13 = 10f;
				}
				if (func_254() && !func_253())
				{
					if (!unk_0x0D901EFDFD7EF9D5(0))
					{
						fVar12 = ((fVar14 + fVar0) / (1f / unk_0x98501142AE80A99C(2, 208)));
					}
					else
					{
						fVar12 = ((fVar14 + fVar0) / (1f / unk_0x98501142AE80A99C(2, 209)));
					}
				}
				else if (!unk_0x0D901EFDFD7EF9D5(0))
				{
					fVar12 = ((fVar14 + fVar13) / (1f / unk_0x98501142AE80A99C(2, 208)));
				}
				else
				{
					fVar12 = ((fVar14 + fVar13) / (1f / unk_0x98501142AE80A99C(2, 209)));
				}
				Var15 = { Var7 * Vector(fVar12, fVar12, fVar12) };
				if (Var15.f_2 > 149f)
				{
					Var15.f_2 = 149f;
				}
				unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, Var15, 0, 1, 1, 0);
			}
			else if (((iVar11 && !func_77()) && func_357()) && !func_262(0))
			{
				if (func_38() || func_24())
				{
					fVar17 = 10f;
				}
				if (!unk_0x0D901EFDFD7EF9D5(0))
				{
					fVar16 = ((Local_89.f_119 + fVar17) / (1f / unk_0x98501142AE80A99C(2, 207)));
				}
				else
				{
					fVar16 = ((Local_89.f_119 + fVar17) / (1f / unk_0x98501142AE80A99C(2, 210)));
				}
				unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, Var7 * Vector(-fVar16, -fVar16, -fVar16), 0, 1, 1, 0);
			}
			if (((Local_89[1] > 0 && !func_254()) && !func_262(0)) && !func_77())
			{
				fVar20 = func_356();
				fVar18 = (Local_89.f_119 / (127f / IntToFloat(Local_89[1])));
				fVar19 = (fVar20 / (127f / IntToFloat(Local_89[1])));
				unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, Var6 * Vector(fVar18, fVar18, fVar18), 0, 1, 1, 0);
				unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, 0f, fVar19, 0, 1, 1, 0);
			}
			else if ((((Local_89[1] < 0 && !func_254()) && !func_262(0)) && !func_77()) || (func_254() && func_253()))
			{
				if (func_254() && func_253())
				{
					fVar23 = 50f;
					if (func_24())
					{
						fVar21 = (Local_89.f_119 / -1f);
					}
					else
					{
						fVar21 = ((Local_89.f_119 + fVar0) / -1f);
					}
					fVar22 = (fVar23 / -1f);
				}
				else
				{
					fVar23 = func_356();
					if (func_24())
					{
						fVar21 = (Local_89.f_119 / (127f / IntToFloat(Local_89[1])));
					}
					else
					{
						fVar21 = ((Local_89.f_119 + fVar0) / (127f / IntToFloat(Local_89[1])));
					}
					fVar22 = (fVar23 / (127f / IntToFloat(Local_89[1])));
				}
				if (func_24())
				{
					if (!func_253())
					{
						unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
						unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, Var6 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
					}
					else
					{
						unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
					unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, Var6 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
				}
			}
			Var24 = { func_355(Var6, Var7) };
			if ((!func_254() && !func_262(0)) && !func_77())
			{
				if (Local_89[0] > 0)
				{
					fVar25 = -(Local_89.f_119 / (127f / IntToFloat(Local_89[0])));
					fVar26 = (8f / (127f / IntToFloat(Local_89[0])));
					unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, Var24 * Vector(fVar25, fVar25, fVar25), 0, 1, 1, 0);
					unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, 0f, fVar26, 0, 1, 1, 0);
				}
				else if (Local_89[0] < 0)
				{
					fVar27 = -(Local_89.f_119 / (127f / IntToFloat(Local_89[0])));
					fVar28 = (8f / (127f / IntToFloat(Local_89[0])));
					unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, Var24 * Vector(fVar27, fVar27, fVar27), 0, 1, 1, 0);
					unk_0x0A6448DF4E471932(unk_0xBD11ACD80727BD31(Local_89.f_158), 0, 0f, 0f, -fVar28, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

Vector3 func_355(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.x) - (Param0.x * Param1.f_2)), ((Param0.x * Param1.f_1) - (Param0.f_1 * Param1.x));
}

float func_356()
{
	if (func_24() || func_38())
	{
		return 40f;
	}
	else if (func_30())
	{
		return 30f;
	}
	else if (func_162())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_357()
{
	if (func_262(0))
	{
		return 0;
	}
	if (func_254() && !func_253())
	{
		return 0;
	}
	return 1;
}

bool func_358()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 2);
}

Vector3 func_359(struct<2> Param0, var uParam1)
{
	struct<3> Var0;
	
	Var0 = { sin(Param0.f_1), (-sin(Param0) * cos(Param0.f_1)), (cos(Param0) * cos(Param0.f_1)) };
	return Var0;
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 21))
		{
			unk_0x191DDA30577F440A(&(Local_89.f_5), 21);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 21))
	{
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 21);
	}
}

void func_361(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 22))
		{
			unk_0x191DDA30577F440A(&(Local_89.f_5), 22);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 22))
	{
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 22);
	}
}

void func_362()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_89.f_158), 0))
		{
			if ((func_24() || func_38()) || func_35())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_89.f_149;
				fVar1 = Local_89.f_149.f_1;
			}
			unk_0xC8877830539DB973(fVar0, fVar1);
			unk_0xF3C80B2E954772A7(fVar0, fVar1, 0);
			if (!unk_0xE75EE67F14EAAE37(Global_1695733.f_24) && !func_35())
			{
				if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 8))
				{
					unk_0x3675641E867C19AC();
				}
				unk_0x1B50D12638E95382();
			}
		}
	}
}

void func_363()
{
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0x964C4D363AF812CB(Local_89.f_41) && Local_89.f_41 == -1)
		{
			Local_89.f_41 = unk_0x5AD02BBC63E31E46();
			unk_0x9B0169E27978C1A2(Local_89.f_41, "HUD_Loop", Local_89.f_156, 1);
		}
	}
}

void func_364()
{
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0x964C4D363AF812CB(Local_89.f_31))
		{
			Local_89.f_31 = unk_0x5AD02BBC63E31E46();
			unk_0xE2D24A37AFCF27BF(Local_89.f_31, "Flight_Loop", unk_0xBD11ACD80727BD31(Local_89.f_158), Local_89.f_156, 0, 0);
			unk_0xB76EE71E771BDAA1(Local_89.f_31, "DroneRotationalSpeed", Local_89.f_129);
		}
		else
		{
			unk_0xB76EE71E771BDAA1(Local_89.f_31, "DroneRotationalSpeed", Local_89.f_129);
		}
		if (unk_0x964C4D363AF812CB(Local_89.f_40))
		{
			unk_0xBAB6F7501A822416(Local_89.f_40);
			Local_89.f_40 = -1;
		}
	}
}

void func_365()
{
	if (func_19(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 450, 1);
	}
}

void func_366()
{
	int iVar0;
	
	if (func_24())
	{
		iVar0 = unk_0xC502CD39B4994F3A(Local_89.f_45);
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158) && func_19(iVar0, 1, 1))
		{
			if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iVar0), 0))
			{
				if (func_367(unk_0xBD11ACD80727BD31(Local_89.f_158), unk_0xD56332194D622ECE(iVar0), Global_262145.f_24962, 1))
				{
					if (!func_211(unk_0x1146A9AE09CE2B14(), iVar0))
					{
						if (unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar0) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							unk_0x191DDA30577F440A(&(Local_89.f_5), 11);
							return;
						}
					}
				}
			}
		}
		unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 11);
	}
}

bool func_367(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return vdist2(unk_0xD6E677FAD7521410(iParam0, iParam3), unk_0xD6E677FAD7521410(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_368()
{
	int iVar0;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		iVar0 = 1000;
		if (func_24() || func_38())
		{
			iVar0 = 7000;
		}
		else if (func_16())
		{
			iVar0 = 1100;
		}
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 29))
		{
			if (unk_0x0E8572B08CEB6A11(Local_89.f_168) && unk_0xBEFF25A5E38D38C3(Local_89.f_168))
			{
				if (func_17(func_18()))
				{
					if (func_22(&(Local_89.f_268), iVar0, 0))
					{
						unk_0x158745943C39F680(func_18(), 1, 0);
						unk_0x3CBE9F07524C242D(func_18(), true, 0);
						unk_0x191DDA30577F440A(&(Local_89.f_5), 29);
					}
				}
			}
		}
	}
}

void func_369()
{
	if (!func_16() || unk_0x1146A9AE09CE2B14() == func_12())
	{
		return;
	}
	if (func_22(&(Local_89.f_280[unk_0x1146A9AE09CE2B14() /*2*/]), 2500, 0))
	{
		if (unk_0x176066ACB1B41C48(Local_89.f_206[unk_0x1146A9AE09CE2B14()]))
		{
			unk_0x39448B5909AEB658(Local_89.f_206[unk_0x1146A9AE09CE2B14()], 0);
		}
		func_21(&(Local_89.f_280[unk_0x1146A9AE09CE2B14() /*2*/]));
	}
}

void func_370()
{
	char* sVar0;
	var uVar1;
	var uVar2;
	
	sVar0 = "scr_ih_sub";
	unk_0xF523AEC50C58B0E3(sVar0);
	if (unk_0xDFE58ECD10F98CE1(sVar0))
	{
		if (func_17(func_15()) && unk_0x1146A9AE09CE2B14() != func_12())
		{
			if (!unk_0x176066ACB1B41C48(Local_89.f_206[unk_0x1146A9AE09CE2B14()]))
			{
				unk_0x1AB30A19F1212DFB(sVar0);
				uVar1 = func_377(unk_0x1146A9AE09CE2B14());
				uVar2 = unk_0xED5AD56E2C551D1E(func_15(), uVar1);
				Local_89.f_206[unk_0x1146A9AE09CE2B14()] = unk_0x16C37952C76894F5("scr_ih_sub_missile_launch", func_15(), func_376(unk_0x1146A9AE09CE2B14()), 0f, 0f, 0f, uVar2, 5f, 0, 0, 0);
			}
			else
			{
				func_23(&(Local_89.f_280[unk_0x1146A9AE09CE2B14() /*2*/]), 0, 0);
			}
			if (func_25(&(Local_89.f_280[unk_0x1146A9AE09CE2B14() /*2*/])))
			{
				if (func_22(&(Local_89.f_280[unk_0x1146A9AE09CE2B14() /*2*/]), 1000, 0))
				{
					unk_0x498BA68C5EC86A24(Local_89.f_206[unk_0x1146A9AE09CE2B14()], "flame", 0.15f, 0);
					func_372();
					func_269();
					func_350();
					if (!unk_0x1F9D47D45E125FA6(unk_0xBD11ACD80727BD31(Local_89.f_158)))
					{
						unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_89.f_158), true, 0);
					}
					func_371();
					if (unk_0x964C4D363AF812CB(Local_89.f_40))
					{
						Local_89.f_40 = unk_0x5AD02BBC63E31E46();
						unk_0x9B0169E27978C1A2(Local_89.f_40, "HUD_Startup", Local_89.f_156, 1);
					}
					func_272();
					func_102();
					func_239(1);
					unk_0x53DE24D8A6C88A9A();
					unk_0x81498BC667997F2F("IslandPeriscope");
					unk_0x09F9466B03D29D2D(1, 0, 0, 1, 1, 0);
					Local_89.f_172 = unk_0x551F46B3C7DFB654();
					unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31(Local_89.f_158), 0);
					func_385(4);
				}
			}
		}
		else
		{
			func_386(1);
			func_385(7);
		}
	}
}

void func_371()
{
	if (func_140() || func_31())
	{
		if (!unk_0xB30CD10E2CD1B67D("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0xB84B43B766630B5C("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_24())
	{
		if (!unk_0xB30CD10E2CD1B67D("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0xB84B43B766630B5C("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_38())
	{
		if (!unk_0xB30CD10E2CD1B67D("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0xB84B43B766630B5C("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_35())
	{
		if (!unk_0xB30CD10E2CD1B67D("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0xB84B43B766630B5C("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_16())
	{
		if (!unk_0xB30CD10E2CD1B67D("dlc_hei4_submarine_guided_missile_Scene"))
		{
			unk_0xB84B43B766630B5C("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_372()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	uVar1 = func_377(unk_0x1146A9AE09CE2B14());
	if (Global_1319205 == 1)
	{
		uVar0 = unk_0xED5AD56E2C551D1E(func_15(), uVar1);
		Var2 = { unk_0xE3362FD369CEE0FC(func_15(), uVar0) };
		Local_89.f_143 = { unk_0x26C2ACB261895E70(Var2, unk_0xA8D713A937F31250(func_15()), 0f, 0f, -2.6f) };
	}
	else if (Global_1319205 == 2)
	{
		uVar0 = unk_0xED5AD56E2C551D1E(func_15(), uVar1);
		Var2 = { unk_0xE3362FD369CEE0FC(func_15(), uVar0) };
		Local_89.f_143 = { unk_0x26C2ACB261895E70(Var2, unk_0xA8D713A937F31250(func_15()), 0f, 0f, -2.6f) };
	}
	Var3 = { unk_0x4BB6BF4A85268A22(func_15(), 2) };
	unk_0x78CDDD1E6367978D(unk_0xBD11ACD80727BD31(Local_89.f_158), Local_89.f_143, 1, 0, 0, 1);
	func_374(Local_89.f_143, (Var3.x + 90f), 180f, 0f);
	Var4 = { unk_0xD6E677FAD7521410(func_15(), 1) };
	Var5 = { 0f, 0f, 0f };
	Local_89.f_116 = func_373(Var5, Var4);
	unk_0xCD37A28258D70638(unk_0xBD11ACD80727BD31(Local_89.f_158), Local_89.f_116);
	unk_0xBDDCDEC7B6205897(unk_0xBD11ACD80727BD31(Local_89.f_158), (Var3.x - 90f), 0f, Local_89.f_116, 2, 1);
	if (unk_0x964C4D363AF812CB(Local_89.f_115))
	{
		Local_89.f_115 = unk_0x5AD02BBC63E31E46();
		unk_0xE2D24A37AFCF27BF(Local_89.f_115, "Missile_Launch", unk_0xBD11ACD80727BD31(Local_89.f_158), Local_89.f_156, 1, 0);
	}
}

var func_373(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x832AD84AA258AE80((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_374(struct<3> Param0, struct<3> Param1)
{
	if (!func_375(Global_1695733.f_13, Param0, 0))
	{
		Global_1695733.f_13 = { Param0 };
		Param1 = { Param1 + Vector(0f, -180f, 180f) };
		Global_1695733.f_16 = { Param1 };
	}
}

bool func_375(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_376(int iParam0)
{
	if (Local_89.f_82[iParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_377(int iParam0)
{
	if (iParam0 == func_12())
	{
		return "";
	}
	switch (Local_89.f_82[iParam0])
	{
		case 1:
			return "sub_hatch1";
		
		case 2:
			return "sub_hatch2";
		
		case 3:
			return "sub_hatch3";
		
		case 4:
			return "sub_hatch4";
		
		case 5:
			return "sub_hatch5";
		
		case 6:
			return "sub_hatch6";
		
		case 7:
			return "sub_hatch7";
		
		case 8:
			return "sub_hatch8";
		
		default:
	}
	return "sub_hatch4";
}

void func_378()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_384() || !func_31())
	{
		return;
	}
	switch (Local_89.f_80)
	{
		case 0:
			if (!unk_0x159BC3DDA80D71AC(Local_89.f_159))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_181(iVar0))
				{
					if (func_92(unk_0x5E85B9A5E6984D7D(false, 1) + 1, 0, 1))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_89.f_6, 3))
						{
							unk_0x3402985954953C67(unk_0x5E85B9A5E6984D7D(false, 1) + 1);
							unk_0x191DDA30577F440A(&(Local_89.f_6), 3);
						}
						if (unk_0x3E42A32E15B11FFA(1))
						{
							if (func_383(&(Local_89.f_159), iVar0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 0, 1, 1, 0, 0, 0, 1))
							{
								unk_0x84CE5E7CD3A7E197(Local_89.f_159, unk_0x1146A9AE09CE2B14(), 1);
								iVar1 = unk_0xA79DFB802C09F5F5(unk_0x7D2B9E6A64637269(), 28422);
								unk_0x0F1058706D5A58B4(unk_0xBD11ACD80727BD31(Local_89.f_159), unk_0x7D2B9E6A64637269(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
								unk_0x824F744352C8BC82(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_89.f_80 = 1;
			}
			break;
		
		case 1:
			if (unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), 2106541073) != 0 && unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), 2106541073) != 1)
			{
				func_334(0, 0, 0);
				Local_89.f_80 = 2;
			}
			break;
		
		case 2:
			if (func_382(0, "CREATE"))
			{
				func_364();
				if (func_381(Local_89.f_159))
				{
					if (!unk_0x1F9D47D45E125FA6(unk_0xBD11ACD80727BD31(Local_89.f_159)))
					{
						unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_89.f_159), true, 0);
					}
				}
				if (func_381(Local_89.f_158))
				{
					if (!unk_0x1F9D47D45E125FA6(unk_0xBD11ACD80727BD31(Local_89.f_158)))
					{
						unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_89.f_158), true, 0);
						unk_0x4603196EEEA2355C(Local_89.f_162, false, 0);
					}
				}
			}
			if (func_379(1))
			{
				unk_0x0F1058706D5A58B4(Local_89.f_162, unk_0xBD11ACD80727BD31(Local_89.f_158), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0x4603196EEEA2355C(Local_89.f_162, false, 0);
				unk_0x20CC00CC70A99443(unk_0xD93F965CFAC1D06A(Local_89.f_158));
				unk_0x3FCD7CC0DD8729C4(unk_0xBD11ACD80727BD31(Local_89.f_158));
				func_272();
				func_131();
				func_239(1);
				func_251();
				func_354();
				func_371();
				if (unk_0x964C4D363AF812CB(Local_89.f_40))
				{
					Local_89.f_40 = unk_0x5AD02BBC63E31E46();
					unk_0x9B0169E27978C1A2(Local_89.f_40, "HUD_Startup", Local_89.f_156, 1);
				}
				unk_0x09F9466B03D29D2D(1, 0, 0, 1, 1, 0);
				Local_89.f_172 = unk_0x551F46B3C7DFB654();
				func_385(4);
				func_334(1, 1, 0);
				Local_89.f_80 = 3;
			}
			break;
		
		case 3:
			if (func_379(0))
			{
				iVar2 = unk_0xB36B8558948EA7A8(0, 3);
				switch (iVar2)
				{
					case 0:
						func_334(2, 0, 0);
						Local_89.f_242 = 2;
						break;
					
					case 1:
						func_334(3, 0, 0);
						Local_89.f_242 = 3;
						break;
					
					case 2:
						func_334(4, 0, 0);
						Local_89.f_242 = 4;
						break;
				}
				Local_89.f_80 = 4;
			}
			break;
		
		case 4:
			if (func_379(0))
			{
				func_334(1, 1, 0);
				Local_89.f_80 = 3;
			}
			break;
	}
}

int func_379(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x7D2B9E6A64637269();
	if (func_17(iVar0))
	{
		fVar1 = func_380();
		iVar2 = unk_0x51FB94D5F3D17E35(Local_89.f_79);
		if (unk_0xEEC203A73BC92E7E(iVar2) && unk_0x0BC8768247440B3A(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_336(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_380()
{
	return 0.95f;
}

int func_381(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

int func_382(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = unk_0x51FB94D5F3D17E35(Local_89.f_79);
	if (iVar0 != -1)
	{
		if (unk_0xEEC203A73BC92E7E(iVar0))
		{
			if ((unk_0x0E497F28E1A4E3F6(unk_0x7D2B9E6A64637269(), unk_0x15173FB88ABC94F9(sParam1)) || unk_0x0E497F28E1A4E3F6(unk_0xBD11ACD80727BD31(Local_89.f_159), unk_0x15173FB88ABC94F9(sParam1))) || unk_0x0E497F28E1A4E3F6(unk_0xBD11ACD80727BD31(Local_89.f_158), unk_0x15173FB88ABC94F9(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_383(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x3E42A32E15B11FFA(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x0358AFF5157FE26F(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	else
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x795434E153F90E41(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0x6DA4D1FB7DCE9FD8(unk_0xBD11ACD80727BD31(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(*uParam0), false, 0);
		}
		if (unk_0x895470BB92940DC6(unk_0xBD11ACD80727BD31(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_384()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 13);
}

void func_385(int iParam0)
{
	if (Local_89.f_240 != iParam0)
	{
		Local_89.f_240 = iParam0;
	}
}

void func_386(bool bParam0)
{
	if (bParam0)
	{
		if (!func_384())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 13);
		}
	}
	else if (func_384())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 13);
	}
}

void func_387()
{
	struct<3> Var0;
	
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			if (!unk_0x0E8572B08CEB6A11(Local_89.f_168) && unk_0x234B68AC2E35ED5A(Local_89.f_5, 0))
			{
				if (func_398())
				{
					if (func_341())
					{
						func_300(unk_0x1146A9AE09CE2B14(), 0, 33280, 0);
					}
					else if (!func_35())
					{
						func_300(unk_0x1146A9AE09CE2B14(), 0, 512, 0);
					}
					if (!func_397())
					{
						unk_0x7ABC6553106F8B81();
					}
					else
					{
						unk_0x2785FE2E1CBFF018();
					}
					Local_89.f_168 = unk_0x84F073038B557438(26379945, 1);
					unk_0xEF20E9A7B745D17A(Local_89.f_168, Local_89.f_125);
					unk_0xCD29B8E8A95DC63C(Local_89.f_168, 0.01f);
					unk_0xE368221DAFA8842E(Local_89.f_168, 0.01f);
					unk_0x53DE24D8A6C88A9A();
					if (func_35())
					{
						unk_0x81498BC667997F2F("eyeinthesky");
					}
					Var0 = { func_396() };
					unk_0x95F4204438EC7CB9(Local_89.f_168, unk_0xBD11ACD80727BD31(Local_89.f_158), 0f, 0f, 180f, Var0, 1);
					if (func_35())
					{
						unk_0xBD833AA6EB59C81B(Local_89.f_168, func_395() - Vector(0f, -180f, 180f), 2);
					}
					unk_0x514DAB4C526F2621(Local_89.f_149, 75f, 75f);
					unk_0x52149FA3F8DAD0F2(Local_89.f_149, unk_0x864557F89941B870(Local_89.f_168, 2));
					if (!func_16())
					{
						unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31(Local_89.f_158), 0);
					}
					if (!func_341())
					{
						if (unk_0xABE4F4FD4329B037())
						{
							unk_0xED93DAC36CA89AF2();
						}
					}
					if (!func_31() && !func_16())
					{
						func_371();
						if (unk_0x964C4D363AF812CB(Local_89.f_40))
						{
							Local_89.f_40 = unk_0x5AD02BBC63E31E46();
							unk_0x9B0169E27978C1A2(Local_89.f_40, "HUD_Startup", Local_89.f_156, 1);
						}
						func_272();
						if (func_83())
						{
							func_102();
						}
						else
						{
							func_131();
						}
						func_239(1);
						func_251();
						func_354();
						unk_0x09F9466B03D29D2D(1, 0, 0, 1, 1, 0);
						Local_89.f_172 = unk_0x551F46B3C7DFB654();
					}
					func_392(1);
					func_391(1);
					func_389(158);
					unk_0x191DDA30577F440A(&(Local_87[unk_0x1146A9AE09CE2B14() /*3*/]), 0);
					if (!func_31() && !func_16())
					{
						func_385(4);
					}
					else if (func_16())
					{
						func_385(3);
					}
					else
					{
						Local_89.f_152 = { func_6(unk_0x1146A9AE09CE2B14()) };
						unk_0x7956E831D8C0C17C(Local_89.f_152, &(Local_89.f_152.f_2), 0, 0);
						Local_89.f_118 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
						func_388();
						Local_89.f_152 = { unk_0x26C2ACB261895E70(Local_89.f_152, Local_89.f_118, -0.0695723f, 0.177497f, 0f) };
						func_385(2);
					}
				}
				else if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0xCC5ED49CF9C9215F(unk_0x7D2B9E6A64637269(), 0, 0);
				}
			}
			else
			{
				if (unk_0x0E8572B08CEB6A11(Local_89.f_168))
				{
				}
				if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 0))
				{
				}
			}
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
		}
	}
}

void func_388()
{
	int iVar0;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_389(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8742)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_390() /*5557*/].f_675.f_4237[iVar0 /*3*/] == iParam0)
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

int func_390()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336, 26))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336), 26);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336, 26))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336), 26);
	}
}

void func_392(bool bParam0)
{
	if (bParam0)
	{
		if (!func_75())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 5);
		}
	}
	else
	{
		if (func_75())
		{
			unk_0xC664C0067EEAB8D1(&Global_1695733, 5);
		}
		func_393(0);
	}
}

void func_393(bool bParam0)
{
	if (bParam0)
	{
		if (!func_394())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 12);
		}
	}
	else if (func_394())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 12);
	}
}

bool func_394()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 12);
}

Vector3 func_395()
{
	return Global_1695733.f_16;
}

Vector3 func_396()
{
	if (func_24() || func_38())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_35())
	{
		return 0f, -0.9f, 0f;
	}
	else if (func_30() || func_162())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_16())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

bool func_397()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 10);
}

int func_398()
{
	if (func_39() && !func_41())
	{
		return 1;
	}
	if (func_402())
	{
		return 1;
	}
	if (func_401())
	{
		return 1;
	}
	if (func_41() && func_400())
	{
		return 1;
	}
	if (func_399() && func_400())
	{
		return 1;
	}
	if (!func_70(unk_0x1146A9AE09CE2B14(), 0) && !func_296())
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	if (func_46(unk_0x1146A9AE09CE2B14()) && func_42())
	{
		if (Global_1319205 == 2 || Global_1319205 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_400()
{
	if (Global_1319196 != -1 || Global_1319202 != -1)
	{
		if (((unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 0;
}

int func_401()
{
	return 0;
}

int func_402()
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		return 0;
	}
	if (func_41() || func_403())
	{
		return 0;
	}
	if (func_401())
	{
		return 0;
	}
	return 1;
}

int func_403()
{
	if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_404()
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	float fVar3;
	
	iVar0 = joaat("blazer5");
	if (func_181(Local_89.f_239) && func_181(iVar0))
	{
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 0))
		{
			if (!unk_0x159BC3DDA80D71AC(Local_89.f_158))
			{
				if (!func_341())
				{
					if (func_140())
					{
						if (func_17(func_347()))
						{
							Var1 = { unk_0xD6E677FAD7521410(func_347(), 1) };
						}
					}
					else
					{
						Var1 = { Local_89.f_137 };
					}
					if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
					{
						func_300(unk_0x1146A9AE09CE2B14(), 0, 512, 0);
					}
					if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 18))
					{
						if (unk_0x22C43B6780E8FE5B(Var1, 100f, 1))
						{
							unk_0x191DDA30577F440A(&(Local_89.f_5), 18);
						}
					}
					else if (unk_0xABE4F4FD4329B037())
					{
						if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 19))
						{
							if (func_410())
							{
								if (func_407())
								{
									unk_0x191DDA30577F440A(&(Local_89.f_5), 19);
								}
							}
							else
							{
								if (!func_259(func_406()))
								{
									Local_89.f_137 = { func_406() };
								}
								unk_0x191DDA30577F440A(&(Local_89.f_5), 19);
								if (func_16())
								{
									Local_89.f_137.f_2 = (Local_89.f_137.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 19) || func_341())
				{
					if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 20))
					{
						Local_89.f_162 = unk_0x170478CC84C8AE2F(iVar0, Local_89.f_137, 0f, 0, 0, 0);
						unk_0x8F160110753EB17B(Local_89.f_162, 1);
						unk_0xDB8D6815E13996A9(Local_89.f_162, Local_89.f_137, 0, 0, 1);
						unk_0x158745943C39F680(Local_89.f_162, 0, 0);
						unk_0x4603196EEEA2355C(Local_89.f_162, false, 0);
						unk_0x191DDA30577F440A(&(Local_89.f_5), 20);
					}
					else if (func_92(unk_0x5E85B9A5E6984D7D(false, 1) + 1, 0, 1))
					{
						if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 30))
						{
							unk_0x3402985954953C67(unk_0x5E85B9A5E6984D7D(false, 1) + 1);
							unk_0x191DDA30577F440A(&(Local_89.f_5), 30);
						}
						if (unk_0x3E42A32E15B11FFA(1))
						{
							bVar2 = func_405();
							if (func_31())
							{
								Local_89.f_152 = { func_6(unk_0x1146A9AE09CE2B14()) };
								unk_0x7956E831D8C0C17C(Local_89.f_152, &(Local_89.f_152.f_2), 0, 0);
								Local_89.f_137 = { unk_0xBF480D363C51CDF8(Local_89.f_157, "ENTER", Local_89.f_152, unk_0x4BB6BF4A85268A22(unk_0x7D2B9E6A64637269(), 2), 0, 2) };
							}
							if (func_383(&(Local_89.f_158), Local_89.f_239, Local_89.f_137, 0, 1, 1, 1, 1, 0, bVar2))
							{
								Global_1695733.f_20 = unk_0xBD11ACD80727BD31(Local_89.f_158);
								unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31(Local_89.f_158), 1);
								if (func_140())
								{
									if (func_17(func_347()))
									{
										unk_0xBDDCDEC7B6205897(func_18(), unk_0x4BB6BF4A85268A22(func_347(), 2), 2, 1);
										fVar3 = (unk_0xA8D713A937F31250(func_347()) + 180f);
									}
								}
								Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_422 = { Local_89.f_137 };
								Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_425 = fVar3;
								Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_2 = Local_89.f_158;
								unk_0x84CE5E7CD3A7E197(Local_89.f_158, unk_0x1146A9AE09CE2B14(), 1);
								unk_0xA5D4FD0055638340(unk_0xD93F965CFAC1D06A(Local_89.f_158), 1);
								unk_0x46EDFC827DC67D89(unk_0xD93F965CFAC1D06A(Local_89.f_158), 1, 1);
								unk_0xDB8D6815E13996A9(func_18(), Local_89.f_137, 0, 0, 1);
								unk_0xCD37A28258D70638(func_18(), fVar3);
								unk_0x7172396C42DF80C7(func_18(), 1);
								if (!func_259(func_395()))
								{
									unk_0xBDDCDEC7B6205897(func_18(), func_395(), 2, 1);
								}
								if (func_35() || func_16())
								{
									unk_0x158745943C39F680(func_18(), 0, 0);
								}
								unk_0xF7C860BB63820258(Local_89.f_158, 1);
								if (func_166(unk_0x1146A9AE09CE2B14()))
								{
									unk_0xC595907BB71C921D(func_18(), Global_262145.f_24336 * 5, 0);
								}
								else if (func_16())
								{
									unk_0xC595907BB71C921D(func_18(), 1, 0);
									unk_0xFEDD7E9148CF3B3E(Local_89.f_158, 1);
									unk_0x83E421E5A4A2A512(unk_0xD93F965CFAC1D06A(Local_89.f_158), 700);
								}
								else
								{
									unk_0xC595907BB71C921D(func_18(), Global_262145.f_24336, 0);
								}
								unk_0x5CC6562CB9448056(Local_89.f_158, 0);
								unk_0xCE1DD60A1DF5A973(unk_0xD93F965CFAC1D06A(Local_89.f_158), 1);
								unk_0x514DAB4C526F2621(Local_89.f_137, 100f, 200f);
								unk_0x52149FA3F8DAD0F2(unk_0xD6E677FAD7521410(unk_0xD93F965CFAC1D06A(Local_89.f_158), 1), unk_0x4BB6BF4A85268A22(unk_0xD93F965CFAC1D06A(Local_89.f_158), 2));
								unk_0x824F744352C8BC82(Local_89.f_239);
								unk_0x824F744352C8BC82(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0xBE0E1FA08021D61B(unk_0xBD11ACD80727BD31(Local_89.f_158), 0);
				if (func_17(Local_89.f_162))
				{
					if (func_17(unk_0xD93F965CFAC1D06A(Local_89.f_158)))
					{
						unk_0x0F1058706D5A58B4(Local_89.f_162, unk_0xBD11ACD80727BD31(Local_89.f_158), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						unk_0x191DDA30577F440A(&(Local_89.f_5), 0);
					}
				}
			}
		}
	}
}

int func_405()
{
	if (func_31())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

Vector3 func_406()
{
	return Global_1695733.f_13;
}

int func_407()
{
	if (Local_89.f_16 == 0)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_89.f_5, 14))
		{
			if ((!func_166(unk_0x1146A9AE09CE2B14()) && func_140()) && func_17(func_347()))
			{
				Local_89.f_137 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(func_347(), 1), unk_0xA8D713A937F31250(func_347()), -0.7f, 1.6f, 4f) };
				unk_0x191DDA30577F440A(&(Local_89.f_5), 14);
			}
			else
			{
				if (func_140() && func_17(func_347()))
				{
					Local_89.f_137 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(func_347(), 1), unk_0xA8D713A937F31250(func_347()), -0.7f, 1.6f, 4f) };
				}
				Local_89.f_137 = unk_0x644B8DBA4F69BB73((Local_89.f_137 - 1.5f), (Local_89.f_137 + 1.5f));
				Local_89.f_137.f_1 = unk_0x644B8DBA4F69BB73((Local_89.f_137.f_1 - 1.5f), (Local_89.f_137.f_1 + 1.5f));
				Local_89.f_137.f_2 = unk_0x644B8DBA4F69BB73((Local_89.f_137.f_2 + 0.5f), (Local_89.f_137.f_2 + 1.5f));
				if (!func_409(Local_89.f_137))
				{
					unk_0x191DDA30577F440A(&(Local_89.f_5), 14);
				}
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 15))
		{
			Local_89.f_137 = unk_0x644B8DBA4F69BB73((Local_89.f_137 - 1.5f), (Local_89.f_137 + 1.5f));
			Local_89.f_137.f_1 = unk_0x644B8DBA4F69BB73((Local_89.f_137.f_1 - 1.5f), (Local_89.f_137.f_1 + 1.5f));
			Local_89.f_137.f_2 = unk_0x644B8DBA4F69BB73((Local_89.f_137.f_2 + 0.5f), (Local_89.f_137.f_2 + 1.5f));
			if (!func_409(Local_89.f_137))
			{
				unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 15);
			}
		}
		func_408(Local_89.f_137);
	}
	else if (Local_89.f_16 == 1 && !func_409(Local_89.f_137))
	{
		return 1;
	}
	else
	{
		Local_89.f_16 = 0;
		unk_0x191DDA30577F440A(&(Local_89.f_5), 15);
	}
	return 0;
}

void func_408(struct<3> Param0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	
	switch (Local_89.f_15)
	{
		case 0:
			if (func_140())
			{
				if (func_17(func_347()))
				{
					uVar0 = func_347();
				}
			}
			if (func_24() || func_38())
			{
				fVar1 = func_217(Local_89.f_239);
			}
			else
			{
				fVar1 = (func_217(Local_89.f_239) * 11f);
			}
			Local_89.f_167 = unk_0x7AD43B94CD205A49(Param0, Param0, fVar1, 511, uVar0, 4);
			if (Local_89.f_167 != 0)
			{
				Local_89.f_15 = 1;
			}
			break;
		
		case 1:
			iVar6 = unk_0xA2B3B271E2AE7A08(Local_89.f_167, &iVar2, &Var4, &uVar3, &uVar5);
			if (iVar6 == 2)
			{
				if (iVar2 == 0)
				{
					Local_89.f_16 = 1;
					Var4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_89.f_16 = 2;
					Local_89.f_167 = 0;
					Local_89.f_15 = 0;
				}
			}
			else if (iVar6 == 0)
			{
				Local_89.f_15 = 0;
			}
			break;
	}
}

int func_409(struct<3> Param0)
{
	if (unk_0x09C4C80EA1D5B2F7(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_410()
{
	if (func_140())
	{
		return 1;
	}
	if (func_30() && !func_31())
	{
		return 1;
	}
	return 0;
}

int func_411()
{
	if (func_296())
	{
		return Global_1683970.f_503 == 0;
	}
	return 0;
}

void func_412()
{
	if (func_19(unk_0x1146A9AE09CE2B14(), 1, 1))
	{
		Local_89.f_140 = { func_260(&Local_89) };
		if (!func_259(func_406()))
		{
			Local_89.f_137 = { func_406() };
		}
		else
		{
			Local_89.f_137 = { func_6(unk_0x1146A9AE09CE2B14()) };
			Local_89.f_137 = { Local_89.f_137, Local_89.f_137.f_1, (Local_89.f_137.f_2 + 1.5f) };
		}
		if (func_70(unk_0x1146A9AE09CE2B14(), 0))
		{
			func_460(1);
		}
		if (func_70(unk_0x1146A9AE09CE2B14(), 0))
		{
			func_457();
		}
		else if (((func_455(unk_0x1146A9AE09CE2B14()) == 2 || func_455(unk_0x1146A9AE09CE2B14()) == 1) && !unk_0x234B68AC2E35ED5A(Global_1702510, 6)) && !unk_0x234B68AC2E35ED5A(Global_1702511, 0))
		{
			if (unk_0x234B68AC2E35ED5A(Global_2518763, 0))
			{
				func_454(1);
				func_446(0, 0);
				func_445();
				func_393(1);
				func_385(1);
			}
		}
		else if ((func_40() && func_441()) && !unk_0x234B68AC2E35ED5A(Global_1702510, 6))
		{
			func_428();
		}
		else if (unk_0x234B68AC2E35ED5A(Global_1702510, 6) && unk_0x234B68AC2E35ED5A(Global_1702511, 0))
		{
			func_446(0, 0);
			func_393(1);
			func_385(1);
		}
		else if (func_16())
		{
			func_414();
		}
		else if (func_31() && !func_413())
		{
			unk_0x66AE54CE92457FEE(1);
			func_136("PIM_DRONAMOS", -1);
			func_300(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
			func_385(7);
		}
		else if (func_259(Local_89.f_134))
		{
			Local_89.f_155 = 0;
			func_393(1);
			func_385(1);
		}
	}
}

bool func_413()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 23);
}

void func_414()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if ((func_399() && !func_427()) && !func_418())
	{
		if (unk_0x5C6675393464A814(2, 201) || unk_0x51794501073F0A33(2, 201))
		{
			if (Global_1319205 == 1)
			{
				Local_89.f_82[unk_0x1146A9AE09CE2B14()] = unk_0xB36B8558948EA7A8(1, 5);
			}
			else
			{
				Local_89.f_82[unk_0x1146A9AE09CE2B14()] = unk_0xB36B8558948EA7A8(5, 9);
			}
			if (Global_1319205 == 1)
			{
				uVar0 = unk_0xED5AD56E2C551D1E(func_15(), func_377(unk_0x1146A9AE09CE2B14()));
				Var1 = { unk_0xE3362FD369CEE0FC(func_15(), uVar0) };
				Local_89.f_143 = { unk_0x26C2ACB261895E70(Var1, unk_0xA8D713A937F31250(func_15()), 0f, 0f, -2.6f) };
			}
			else if (Global_1319205 == 2)
			{
				uVar0 = unk_0xED5AD56E2C551D1E(func_15(), func_377(unk_0x1146A9AE09CE2B14()));
				Var1 = { unk_0xE3362FD369CEE0FC(func_15(), uVar0) };
				Local_89.f_143 = { unk_0x26C2ACB261895E70(Var1, unk_0xA8D713A937F31250(func_15()), 0f, 0f, -2.6f) };
			}
			Var2 = { unk_0x4BB6BF4A85268A22(func_15(), 2) };
			func_374(Local_89.f_143, (Var2.x + 90f), 180f, Var2.f_2);
			func_393(1);
			func_417(Local_89.f_82[unk_0x1146A9AE09CE2B14()]);
			func_385(1);
			func_416();
			func_415();
			unk_0x66AE54CE92457FEE(1);
		}
	}
	else if (!func_17(func_15()))
	{
	}
	if (func_427())
	{
		if (func_196("MP_SUBSEAT_2"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

void func_415()
{
	Global_2544210.f_337++;
}

void func_416()
{
	Global_2544210.f_337 = 0;
	Global_2544210.f_337.f_1 = 0;
}

void func_417(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = 818614918;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = uParam0;
	iVar1 = func_193(0, 1);
	if (iVar1 != 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 3, iVar1);
	}
}

int func_418()
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_426())
	{
		return 1;
	}
	if (func_425())
	{
		return 1;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 1;
	}
	if (func_296())
	{
		return 1;
	}
	if (func_70(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_47(Global_1590753))
		{
			return 1;
		}
	}
	if (func_140())
	{
		if (func_424())
		{
			if (func_423())
			{
				return 1;
			}
			if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_16())
	{
		if ((func_422() && Global_1319205 == 1) || (func_421() && Global_1319205 == 2))
		{
			return 1;
		}
		if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 28))
		{
			return 1;
		}
		if (!func_17(func_15()))
		{
			return 1;
		}
		Var0 = { unk_0xD6E677FAD7521410(func_15(), 1) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		uVar1 = unk_0x27FC1B0077581B37(func_15(), -1, 0);
		if (func_17(uVar1))
		{
			if (unk_0x72D30262CF8C8603(uVar1))
			{
				if (func_200(unk_0xCB567ED25393C1DF(iVar1)))
				{
					return 1;
				}
			}
		}
	}
	if (func_200(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	if (func_76(0))
	{
		return 1;
	}
	if (func_311())
	{
		return 1;
	}
	if (func_140())
	{
		if (func_39())
		{
			if (func_19(unk_0x1146A9AE09CE2B14(), 1, 1))
			{
				if (func_157(unk_0x7D2B9E6A64637269(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_420())
				{
					return 1;
				}
			}
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || func_419(unk_0x7D2B9E6A64637269(), 1))
			{
				return 1;
			}
		}
	}
	if (func_198())
	{
		return 1;
	}
	if (Global_262145.f_24346)
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 27))
	{
		return 1;
	}
	if (func_70(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_17(func_347()))
		{
			if ((unk_0x8954E9D0A9F6F8CF(func_347(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(func_347(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(func_347(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319200)
	{
		return 1;
	}
	if (Global_2520124)
	{
		return 1;
	}
	if (Global_2520122)
	{
		return 1;
	}
	return 0;
}

int func_419(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0x419E13582192CFEA(iParam0) || unk_0xE50EB54E0F21BED0(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0x986C539B536E0ED2(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x73B97DAD1A2DF572(iParam0) != 0 || unk_0xC96B0C85BE0E0287(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_420()
{
	if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_421()
{
	if (unk_0x1146A9AE09CE2B14() == func_12())
	{
		return 0;
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 != func_12() && unk_0x1146A9AE09CE2B14() != func_12())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 /*874*/].f_267.f_446, 2);
	}
	return 0;
}

int func_422()
{
	if (unk_0x1146A9AE09CE2B14() == func_12())
	{
		return 0;
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 != func_12() && unk_0x1146A9AE09CE2B14() != func_12())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 /*874*/].f_267.f_446, 1);
	}
	return 0;
}

int func_423()
{
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 != func_12() && unk_0x1146A9AE09CE2B14() != func_12())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 /*874*/].f_267.f_336, 20);
	}
	return 0;
}

int func_424()
{
	if (func_166(unk_0x1146A9AE09CE2B14()) && Global_1695733.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_425()
{
	if (Global_2441237.f_1274.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_426()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_427()
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_62(unk_0x7D2B9E6A64637269()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "enter_left", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "enter", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "exit", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), sVar0, "exit_left", 3)) || func_60(unk_0x7D2B9E6A64637269(), 2106541073))
	{
		return 1;
	}
	return 0;
}

void func_428()
{
	struct<3> Var0;
	var uVar1;
	
	if (!func_418())
	{
		if ((((((func_440() || func_439()) && !Global_1669334) && func_441()) && !unk_0x234B68AC2E35ED5A(Global_2518651, 6)) && Global_1312810) && !(func_440() && Global_262145.f_26143))
		{
			if ((((((unk_0x86AF801D34E482FF(2, 224) || unk_0x96DF114B59E81B9C(2, 224)) && !unk_0x86AF801D34E482FF(2, 223)) && !unk_0x96DF114B59E81B9C(2, 223)) && !unk_0x86AF801D34E482FF(2, 235)) && !unk_0x96DF114B59E81B9C(2, 235)) && !unk_0x51794501073F0A33(2, 19))
			{
				if (unk_0x9C0D256830690A70(Global_262145.f_26145, 0, 0, 1, -1, 0) || unk_0x234B68AC2E35ED5A(Global_2518651, 2))
				{
					unk_0x191DDA30577F440A(&Global_2518651, 0);
					func_446(0, 0);
					func_393(1);
					func_385(1);
					func_435();
					func_433(73, -1);
					func_430();
					Var0 = { func_429() };
					func_374(Var0, 0f, 0f, 0f);
					if (func_440())
					{
						unk_0xE2D24A37AFCF27BF(uVar1, "Select_Spec_Drone", unk_0x7D2B9E6A64637269(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!unk_0x234B68AC2E35ED5A(Global_2518651, 4))
				{
					unk_0x191DDA30577F440A(&Global_2518651, 4);
				}
			}
		}
	}
}

Vector3 func_429()
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_127873.f_1 == 3 || Global_4456448.f_127873.f_1 == 3) || Global_4456448.f_127873.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0xDD0E57E73E5C4BF6()));
	fVar2 = (fVar2 * IntToFloat((unk_0xDD0E57E73E5C4BF6() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0x26C2ACB261895E70(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_430()
{
	int iVar0;
	
	iVar0 = func_431(73, -1);
	if (iVar0 >= 50)
	{
		unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_341.f_3), 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_341.f_3), 13);
	}
}

int func_431(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2594365[iParam0 /*3*/][func_432(iParam1)];
	if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_432(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
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

void func_433(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_431(iParam0, func_432(iParam1));
	iVar0++;
	func_434(iParam0, iVar0, iParam1);
}

void func_434(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2594365[iParam0 /*3*/][func_432(uParam2)];
	unk_0xAC4FD27671081628(iVar0, iParam1, 1);
}

void func_435()
{
	func_436(1, 7984);
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_438(iParam1, -1, 0);
	func_437(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_437(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_432(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_438(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_432(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_439()
{
	return Global_2463525;
}

int func_440()
{
	if (Global_2463524 >= 0 && Global_2463524 < 10)
	{
		return 1;
	}
	return 0;
}

int func_441()
{
	int iVar0;
	int iVar1;
	
	if (func_444() && !func_443())
	{
		return 1;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969056.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iVar0 /*16832*/].f_7447[iVar1], 23) && unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iVar0 /*16832*/].f_7447[iVar1], 24)) && unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iVar0 /*16832*/].f_7447[iVar1], 25)) && unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iVar0 /*16832*/].f_7447[iVar1], 26)) && unk_0x234B68AC2E35ED5A(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!unk_0x234B68AC2E35ED5A(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_439() || func_442(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	return 0;
}

bool func_442(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_36.f_18, 14);
}

int func_443()
{
	if (Global_4456448.f_86085 == 1 || Global_4456448.f_86085 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_444()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

void func_445()
{
	unk_0xC664C0067EEAB8D1(&Global_2518763, 0);
}

void func_446(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	Local_89.f_119 = Global_262145.f_24339;
	Local_89.f_130 = 40f;
	if (func_38() || func_24())
	{
		Local_89.f_119 = (Local_89.f_119 * 4.5f);
	}
	else if (func_35())
	{
		Local_89.f_119 = 100f;
		Local_89.f_130 = 26f;
	}
	else if (func_30())
	{
		Local_89.f_119 = 100f;
		Local_89.f_130 = 70f;
	}
	else if (func_162())
	{
		Local_89.f_119 = 10f;
		Local_89.f_130 = 35f;
	}
	else if (func_16())
	{
		Local_89.f_119 = 149f;
		Local_89.f_130 = 16f;
	}
	if (func_38())
	{
		Local_89.f_239 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_24())
	{
		Local_89.f_239 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_35())
	{
		Local_89.f_239 = joaat("xs_prop_arena_airmissile_01a");
		func_453(1);
	}
	else if (func_30())
	{
		if (!func_31())
		{
			iVar0 = func_452(unk_0x1146A9AE09CE2B14());
			switch (iVar0)
			{
				case 37:
					Local_89.f_239 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_89.f_239 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_89.f_239 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_89.f_239 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_89.f_239 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_162())
	{
		Local_89.f_239 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_16())
	{
		Local_89.f_239 = joaat("h4_prop_h4_airmissile_01a");
		func_453(1);
	}
	else
	{
		Local_89.f_239 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_89.f_137 = { Local_89.f_143 };
	}
	Global_1695733.f_1 = 1500;
	func_451();
	func_450(1);
	func_449(1);
	if (func_38() || func_83())
	{
		func_448(1);
	}
	else if (func_24())
	{
		func_448(0);
	}
	if (func_31())
	{
		Local_89.f_157 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		unk_0x068BDE31F7D112BB(Local_89.f_157);
	}
	if (func_24())
	{
		unk_0xF523AEC50C58B0E3("scr_xs_dr");
	}
	if (func_31())
	{
		func_447(Global_262145.f_28290);
	}
	else if (func_30() && !func_31())
	{
		func_447(Global_262145.f_28291);
	}
	else if (func_16())
	{
		func_447(to_float(Global_262145.f_29667));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_89.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_140() && !func_341())
	{
		func_447(200f);
	}
	func_86(Global_1575021);
	if (bParam0)
	{
	}
}

void func_447(float fParam0)
{
	if (Global_1695733.f_8 != fParam0)
	{
		Global_1695733.f_8 = fParam0;
	}
}

void func_448(bool bParam0)
{
	if (bParam0)
	{
		if (!func_194())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 8);
		}
	}
	else if (func_194())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 8);
	}
}

void func_449(bool bParam0)
{
	if (bParam0)
	{
		if (!func_358())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 2);
		}
	}
	else if (func_358())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 2);
	}
}

void func_450(bool bParam0)
{
	if (bParam0)
	{
		if (!func_249())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 4);
		}
	}
	else if (func_249())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 4);
	}
}

void func_451()
{
	if (!Local_89.f_155)
	{
		Local_89.f_18 = 100;
	}
	if (func_162())
	{
		Local_89.f_24 = 100;
	}
	Local_89.f_19 = 0;
	Local_89.f_20 = 100;
	Local_89.f_125 = 90f;
	Local_89.f_128 = 90f;
	if (!func_83())
	{
		Local_89.f_169 = unk_0x42AA2CCF0B61DCD8("DRONE_CAM");
	}
	else if (func_16())
	{
		Local_89.f_169 = func_111();
	}
	else
	{
		Local_89.f_169 = func_110();
	}
	if (func_38())
	{
		Local_89.f_156 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_24())
	{
		Local_89.f_156 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_35())
	{
		Local_89.f_156 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_16())
	{
		Local_89.f_156 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_89.f_156 = "DLC_BTL_Drone_Sounds";
	}
}

int func_452(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_2426865[iParam0 /*449*/].f_429.f_1;
	}
	return -1;
}

void func_453(bool bParam0)
{
	if (bParam0)
	{
		if (!func_205())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 15);
		}
	}
	else if (func_205())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 15);
	}
}

void func_454(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 4))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 4);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 4))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 4);
	}
}

int func_455(int iParam0)
{
	if (iParam0 == unk_0x1146A9AE09CE2B14() && !func_456())
	{
		return Global_2518668.f_1;
	}
	return Global_2418033.f_1366[iParam0 /*3*/].f_1;
}

int func_456()
{
	if (((Global_2518671 != 0 && Global_2518671 == Global_2518672) && Global_2518660 != 3) && Global_2518660 != 1)
	{
		return 0;
	}
	return 1;
}

void func_457()
{
	if (!func_418())
	{
		if (func_41())
		{
			if (func_402())
			{
				if (!unk_0xE8FFE38E2BA32BD6() && !unk_0x9B8D025C6C2200C5())
				{
					func_459("DRONE_TRIG");
				}
			}
			else if (func_196("DRONE_TRIG"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
			if (func_41() || func_401())
			{
				if (unk_0x609EEF618F8CC869(2, 176) || unk_0x6DC4D8B66C3E0EA0(2, 176))
				{
					func_393(1);
					func_385(1);
					unk_0x66AE54CE92457FEE(1);
				}
			}
			else if (func_196("DRONE_TRIG"))
			{
				if ((unk_0x609EEF618F8CC869(2, 51) || unk_0x6DC4D8B66C3E0EA0(2, 51)) || unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					Local_89.f_155 = 0;
					func_393(1);
					func_385(1);
					unk_0x66AE54CE92457FEE(1);
				}
			}
		}
		else if ((func_39() && !unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_402())
		{
			if (!unk_0xE8FFE38E2BA32BD6() && !unk_0x9B8D025C6C2200C5())
			{
				func_459("DRONE_TRIG");
			}
			if (func_196("DRONE_TRIG"))
			{
				if (unk_0x609EEF618F8CC869(2, 51) || unk_0x6DC4D8B66C3E0EA0(2, 51))
				{
					Local_89.f_155 = 0;
					func_393(1);
					func_385(1);
					unk_0x66AE54CE92457FEE(1);
				}
			}
		}
		else if (func_196("DRONE_TRIG"))
		{
			unk_0x66AE54CE92457FEE(1);
		}
		if (func_458() || func_41())
		{
			if (func_196("DRONE_TRIG"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
		}
	}
	else if (func_196("DRONE_TRIG"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
}

int func_458()
{
	if ((((unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_60(unk_0x7D2B9E6A64637269(), 2106541073))
	{
		return 1;
	}
	if ((unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_459(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

void func_460(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 1))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 1);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 1))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 1);
	}
}

void func_461()
{
	char* sVar0;
	
	if (Local_89.f_45 == -1)
	{
		return;
	}
	if (!func_463(Local_89.f_45) && !func_462(Local_89.f_45))
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_87[Local_89.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0xF523AEC50C58B0E3(sVar0);
		if (unk_0xDFE58ECD10F98CE1(sVar0))
		{
			if (!unk_0x176066ACB1B41C48(Local_89.f_173[Local_89.f_45]))
			{
				unk_0x1AB30A19F1212DFB(sVar0);
				if (func_463(Local_89.f_45))
				{
					Local_89.f_173[Local_89.f_45] = unk_0x48558536A19BA88A("scr_xs_guided_missile_trail", unk_0xBD11ACD80727BD31(Local_87[Local_89.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_89.f_173[Local_89.f_45] = unk_0x48558536A19BA88A("scr_xs_guided_missile_trail", unk_0xBD11ACD80727BD31(Local_87[Local_89.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				}
			}
		}
	}
	else if (unk_0x176066ACB1B41C48(Local_89.f_173[Local_89.f_45]))
	{
		unk_0x39448B5909AEB658(Local_89.f_173[Local_89.f_45], 0);
	}
}

int func_462(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_87[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_87[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_464()
{
	if (!func_481(6) && !func_467())
	{
		return;
	}
	if (Local_89.f_45 != -1)
	{
		if (unk_0x159BC3DDA80D71AC(Local_87[Local_89.f_45 /*3*/].f_2) && func_17(unk_0xBD11ACD80727BD31(Local_87[Local_89.f_45 /*3*/].f_2)))
		{
			if (func_466(Local_89.f_45))
			{
				Local_89.f_156 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_465(Local_89.f_45))
			{
				Local_89.f_156 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_463(Local_89.f_45))
			{
				Local_89.f_156 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_462(Local_89.f_45))
			{
				Local_89.f_156 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_89.f_156 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_89.f_46[Local_89.f_45] == -1)
			{
				Local_89.f_46[Local_89.f_45] = unk_0x5AD02BBC63E31E46();
				unk_0xE2D24A37AFCF27BF(Local_89.f_46[Local_89.f_45], "Flight_Loop", unk_0xBD11ACD80727BD31(Local_87[Local_89.f_45 /*3*/].f_2), Local_89.f_156, 0, 0);
				unk_0xB76EE71E771BDAA1(Local_89.f_46[Local_89.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0xB76EE71E771BDAA1(Local_89.f_46[Local_89.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_89.f_46[Local_89.f_45] != -1)
		{
			unk_0x791B4C3811D53DFA(Local_89.f_46[Local_89.f_45]);
			unk_0xBAB6F7501A822416(Local_89.f_46[Local_89.f_45]);
			Local_89.f_46[Local_89.f_45] = -1;
		}
	}
}

int func_465(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_87[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_87[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_467()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970.f_7, 14);
}

void func_468()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	
	if (Local_89.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_89.f_45;
	if (!func_19(iVar0, 1, 1))
	{
		return;
	}
	if (!func_481(6) && !func_467())
	{
		return;
	}
	if (unk_0x234B68AC2E35ED5A(Local_89.f_117, Local_89.f_45))
	{
		uVar1 = func_469(Global_2426865[Local_89.f_45 /*449*/].f_319.f_9);
		if (!func_17(uVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		unk_0xF523AEC50C58B0E3(sVar2);
		if (unk_0xDFE58ECD10F98CE1(sVar2))
		{
			if (!unk_0x176066ACB1B41C48(Local_89.f_206[iVar0]))
			{
				unk_0x1AB30A19F1212DFB(sVar2);
				uVar3 = func_377(iVar0);
				uVar4 = unk_0xED5AD56E2C551D1E(uVar1, uVar3);
				Local_89.f_206[iVar0] = unk_0x16C37952C76894F5("scr_ih_sub_missile_launch", iVar1, func_376(iVar0), 0f, 0f, 0f, uVar4, 5f, 0, 0, 0);
			}
			else if (!func_25(&(Local_89.f_280[iVar0 /*2*/])))
			{
				func_23(&(Local_89.f_280[iVar0 /*2*/]), 0, 0);
				unk_0x498BA68C5EC86A24(Local_89.f_206[iVar0], "flame", 0.15f, 0);
			}
			if (func_25(&(Local_89.f_280[iVar0 /*2*/])))
			{
				if (func_22(&(Local_89.f_280[iVar0 /*2*/]), 3000, 0))
				{
					if (unk_0x176066ACB1B41C48(Local_89.f_206[iVar0]))
					{
						unk_0x39448B5909AEB658(Local_89.f_206[iVar0], 0);
					}
					func_21(&(Local_89.f_280[iVar0 /*2*/]));
					unk_0xC664C0067EEAB8D1(&(Local_89.f_117), Local_89.f_45);
				}
				else if (func_22(&(Local_89.f_280[iVar0 /*2*/]), 2000, 0))
				{
					unk_0x498BA68C5EC86A24(Local_89.f_206[iVar0], "flame", 0f, 0);
				}
			}
		}
	}
}

int func_469(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (unk_0x419E13582192CFEA(Global_1700882[iParam0]))
		{
			return Global_1700882[iParam0];
		}
	}
	return -1;
}

void func_470()
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
				if (!func_481(6))
				{
					func_472(iVar0);
				}
				break;
			
			case 174:
				unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case 818614918:
						if (Global_1394274.f_828)
						{
							return;
						}
						func_471(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_471(int iParam0)
{
	struct<3> Var0;
	
	if (!func_481(6) && !func_467())
	{
		return;
	}
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (Var0.f_1 != func_12())
		{
			Local_89.f_82[Var0.f_1] = Var0.f_2;
			unk_0x191DDA30577F440A(&(Local_89.f_117), Var0.f_1);
		}
	}
}

void func_472(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 13))
		{
			if (unk_0x419E13582192CFEA(Var0) && unk_0xD93F965CFAC1D06A(Local_89.f_158) == Var0)
			{
				if (unk_0x419E13582192CFEA(Var0.f_1))
				{
					if (unk_0xA2CCAAC7F5CA3F49(Var0.f_1))
					{
						if (unk_0x72D30262CF8C8603(unk_0xFAA5505029C4B5A6(Var0.f_1)) && unk_0x7D2B9E6A64637269() != unk_0xFAA5505029C4B5A6(Var0.f_1))
						{
							Local_89.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_473()
{
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x854C404AEB476240(Local_89.f_158), 0))
		{
			Local_89.f_149 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(Local_89.f_158), 1) };
			Local_89.f_124 = unk_0xA8D713A937F31250(unk_0x854C404AEB476240(Local_89.f_158));
			if (!func_25(&(Local_89.f_260)))
			{
				func_23(&(Local_89.f_260), 0, 0);
			}
			else if (func_22(&(Local_89.f_260), 1000, 0))
			{
				if (!func_375(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_422, Local_89.f_149, 0))
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_422 = { Local_89.f_149 };
				}
				if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_425 != unk_0xA8D713A937F31250(unk_0x854C404AEB476240(Local_89.f_158)))
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_425 = unk_0xA8D713A937F31250(unk_0x854C404AEB476240(Local_89.f_158));
				}
				func_21(&(Local_89.f_260));
			}
		}
	}
	if (func_17(Local_89.f_162))
	{
		if (unk_0x1F9D47D45E125FA6(Local_89.f_162))
		{
			unk_0x4603196EEEA2355C(Local_89.f_162, false, 0);
		}
	}
	if (func_17(Local_89.f_160))
	{
		if (unk_0x1F9D47D45E125FA6(Local_89.f_160))
		{
			unk_0x4603196EEEA2355C(Local_89.f_160, false, 0);
		}
	}
}

void func_474()
{
	if (func_481(4))
	{
		if ((((func_140() || func_24()) || func_38()) || (func_30() && !func_31())) || func_16())
		{
			if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				func_300(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
			}
		}
		unk_0x366E7F593105797F(0, 37, 0);
		if (func_16())
		{
			func_477();
		}
		if (!func_35())
		{
			func_475();
			unk_0x681AE3DAF3A73058(0, 19, 1);
			unk_0x681AE3DAF3A73058(0, 166, 1);
			unk_0x681AE3DAF3A73058(0, 167, 1);
			unk_0x681AE3DAF3A73058(0, 168, 1);
			unk_0x681AE3DAF3A73058(0, 169, 1);
			unk_0x681AE3DAF3A73058(2, 218, 1);
			unk_0x681AE3DAF3A73058(2, 219, 1);
			unk_0x681AE3DAF3A73058(2, 220, 1);
			unk_0x681AE3DAF3A73058(2, 221, 1);
			unk_0x681AE3DAF3A73058(2, 205, 1);
			unk_0x681AE3DAF3A73058(2, 206, 1);
			unk_0x681AE3DAF3A73058(2, 207, 1);
			unk_0x681AE3DAF3A73058(2, 208, 1);
			unk_0x681AE3DAF3A73058(2, 209, 1);
			unk_0x681AE3DAF3A73058(2, 210, 1);
			unk_0x681AE3DAF3A73058(2, 202, 1);
			unk_0x681AE3DAF3A73058(2, 51, 1);
			unk_0x681AE3DAF3A73058(2, 190, 1);
			unk_0x681AE3DAF3A73058(2, 189, 1);
			unk_0x681AE3DAF3A73058(2, 188, 1);
			unk_0x681AE3DAF3A73058(2, 187, 1);
			unk_0x681AE3DAF3A73058(2, 201, 1);
			unk_0x681AE3DAF3A73058(2, 199, 1);
			unk_0x681AE3DAF3A73058(2, 200, 1);
			if (func_16())
			{
				unk_0x681AE3DAF3A73058(2, 20, 1);
			}
			if (unk_0x0D901EFDFD7EF9D5(0))
			{
				unk_0x681AE3DAF3A73058(0, 238, 1);
				unk_0x681AE3DAF3A73058(0, 237, 1);
				unk_0x681AE3DAF3A73058(2, 235, 1);
				unk_0x681AE3DAF3A73058(2, 234, 1);
				unk_0x681AE3DAF3A73058(2, 1, 1);
				unk_0x681AE3DAF3A73058(2, 174, 1);
				unk_0x681AE3DAF3A73058(2, 175, 1);
				unk_0x681AE3DAF3A73058(0, 174, 1);
				unk_0x681AE3DAF3A73058(0, 175, 1);
				unk_0x681AE3DAF3A73058(0, 245, 1);
				unk_0x681AE3DAF3A73058(0, 246, 1);
				unk_0x681AE3DAF3A73058(0, 247, 1);
				unk_0x681AE3DAF3A73058(0, 248, 1);
			}
			if (unk_0xA300BD5F71A8C704())
			{
				unk_0x681AE3DAF3A73058(0, 201, 1);
				unk_0x681AE3DAF3A73058(0, 202, 1);
				unk_0x681AE3DAF3A73058(0, 188, 1);
				unk_0x681AE3DAF3A73058(0, 187, 1);
				unk_0x681AE3DAF3A73058(0, 189, 1);
				unk_0x681AE3DAF3A73058(2, 195, 1);
				unk_0x681AE3DAF3A73058(2, 196, 1);
				unk_0x681AE3DAF3A73058(2, 198, 1);
				unk_0x681AE3DAF3A73058(2, 197, 1);
				unk_0x681AE3DAF3A73058(2, 217, 1);
			}
		}
	}
}

void func_475()
{
	func_476();
}

void func_476()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 361)
	{
		unk_0x366E7F593105797F(0, iVar0, 1);
		iVar0++;
	}
}

void func_477()
{
	Global_22531.f_6 = 1;
}

void func_478()
{
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 28))
	{
		if (!func_25(&(Local_89.f_262)))
		{
			func_23(&(Local_89.f_262), 0, 0);
		}
		else if (func_22(&(Local_89.f_262), 5000, 0))
		{
			unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 28);
			func_21(&(Local_89.f_262));
		}
	}
}

void func_479()
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(Local_89.f_5, 27))
	{
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 != func_12())
		{
			iVar0 = Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9;
		}
		else if (Global_1590753 != func_12())
		{
			iVar0 = Global_1590753;
		}
		else if (func_281(unk_0x1146A9AE09CE2B14(), 0))
		{
			if (func_168() != func_12())
			{
				iVar0 = func_168();
			}
		}
		if (iVar0 != func_12())
		{
			if (unk_0x8CFC2F41A749E236(iVar0))
			{
				if (unk_0x02BFF15CAA701972())
				{
					func_180(iVar0, 0, 1, 0);
					unk_0xC664C0067EEAB8D1(&(Local_89.f_5), 27);
				}
			}
		}
	}
}

void func_480()
{
	struct<3> Var0;
	
	if (func_140())
	{
		if (func_481(1))
		{
			if (func_17(func_347()))
			{
				Var0 = { unk_0xD6E677FAD7521410(func_347(), 1) };
				unk_0x514DAB4C526F2621(Var0, 200f, 200f);
				unk_0x2D89F1A81B73377C(Local_89.f_149, 60f, 30);
			}
		}
	}
	if (func_481(1) || func_481(4))
	{
		if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
		{
			if (unk_0x0E8572B08CEB6A11(Local_89.f_168) && unk_0xBEFF25A5E38D38C3(Local_89.f_168))
			{
				if (func_481(4))
				{
					if (!func_259(Local_89.f_149))
					{
						unk_0x514DAB4C526F2621(Local_89.f_149, 60f, 200f);
						unk_0x669380BF1CB76943();
						unk_0x52149FA3F8DAD0F2(Local_89.f_149, unk_0x9F2928DF31D785C7(unk_0xBD11ACD80727BD31(Local_89.f_158)));
						if ((unk_0x2053F6ACFD4ED4BC() % 120) == 0)
						{
							unk_0x2D89F1A81B73377C(Local_89.f_149, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_481(int iParam0)
{
	return Local_89.f_240 == iParam0;
}

int func_482()
{
	if (func_487())
	{
		return 1;
	}
	if (!func_308())
	{
		return 1;
	}
	if (unk_0x1146A9AE09CE2B14() != func_12())
	{
		if (!func_486())
		{
			if (func_267(unk_0x1146A9AE09CE2B14()) && !func_266())
			{
				return 1;
			}
		}
	}
	if (func_202(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	if (func_10(unk_0x1146A9AE09CE2B14()))
	{
		return 1;
	}
	if (func_486())
	{
		if (func_485())
		{
			return 1;
		}
		if (func_13(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			return 1;
		}
		if (func_40())
		{
			return 1;
		}
		if (!func_484() && !func_483())
		{
			if (func_22(&(Local_89.f_278), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_89.f_278));
		}
	}
	return 0;
}

int func_483()
{
	if (Global_1695733.f_22 != func_12())
	{
		if (Global_2426865[Global_1695733.f_22 /*449*/].f_319.f_9 != func_12())
		{
			if (func_17(Global_1700882[Global_2426865[Global_1695733.f_22 /*449*/].f_319.f_9]))
			{
				if (func_19(unk_0x1146A9AE09CE2B14(), 1, 1))
				{
					if (vdist2(func_6(unk_0x1146A9AE09CE2B14()), unk_0xD6E677FAD7521410(Global_1700882[Global_2426865[Global_1695733.f_22 /*449*/].f_319.f_9], 1)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_484()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			if (unk_0x234B68AC2E35ED5A(Local_87[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_485()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 22);
}

bool func_486()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 9);
}

bool func_487()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 0);
}

int func_488()
{
	var uVar0;
	
	func_496(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_495())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_494())
	{
		return 1;
	}
	if (func_493(159))
	{
		if (!func_492())
		{
			return 1;
		}
	}
	if (func_493(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_489() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_489()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_489()
{
	switch (func_491())
	{
		case 0:
			return func_490();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_490()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_491()
{
	return Global_31345;
}

bool func_492()
{
	return Global_2453009.f_698;
}

int func_493(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_494()
{
	return Global_2463497;
}

bool func_495()
{
	return Global_2453009.f_693;
}

void func_496(var uParam0)
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
					func_497(iVar0);
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

void func_497(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_19(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(iVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_498(uVar2, &bVar3))
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

int func_498(int iParam0, var uParam1)
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

void func_499()
{
	wait(0);
}

void func_500(bool bParam0)
{
	if (!func_486())
	{
		func_506(bParam0);
	}
	else
	{
		func_501();
	}
}

void func_501()
{
	Global_1695733.f_22 = func_12();
	func_21(&(Local_89.f_278));
	func_505(0);
	func_504(0);
	func_503(0);
	func_502();
}

void func_502()
{
	unk_0x4BFE89D21F9885DC();
}

void func_503(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733, 21))
		{
			unk_0x191DDA30577F440A(&Global_1695733, 21);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733, 21))
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 21);
	}
}

void func_504(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733, 22))
		{
			unk_0x191DDA30577F440A(&Global_1695733, 22);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733, 22))
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 22);
	}
}

void func_505(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_280, 31))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_280), 31);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_280, 31))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_280), 31);
	}
}

void func_506(bool bParam0)
{
	var uVar0;
	struct<8> Var1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	
	if (unk_0x159BC3DDA80D71AC(Local_89.f_158))
	{
		unk_0x5CC6562CB9448056(Local_89.f_158, 1);
		if (unk_0xB364346471C3B028(Local_89.f_158))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_89.f_6, 2))
			{
				if (func_83())
				{
					if (func_17(unk_0x7D2B9E6A64637269()))
					{
						unk_0xEC37EA74A17D9A1E(unk_0x7D2B9E6A64637269(), func_339(), func_338(), func_337(), 1, 0, 1065353216);
					}
					else
					{
						unk_0x8B84CFCA87CEA22E(func_339(), func_338(), func_337(), 1, 0, 1065353216, 0);
					}
					unk_0x8543AEC08F877EE9(0, 300, 200);
					unk_0x191DDA30577F440A(&(Local_89.f_6), 2);
				}
			}
			unk_0x961F6202C2192265();
			uVar0 = unk_0xBD11ACD80727BD31(Local_89.f_158);
			unk_0x407B7FBB86B988B9(uVar0, 0, 1);
			unk_0x04F4D55F2C0C756D(&uVar0);
		}
		else
		{
			unk_0x1AA7FA4BBD799B88(Local_89.f_158);
			return;
		}
	}
	if (func_30() && !func_31())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_529(&Var1, 11);
	}
	if (func_196("DRONE_TRIG"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	if (func_17(Local_89.f_160))
	{
		uVar2 = Local_89.f_160;
		unk_0xC606AE2A3209945E(&uVar2);
	}
	if (unk_0x419E13582192CFEA(Local_89.f_161))
	{
		unk_0x04F4D55F2C0C756D(&(Local_89.f_161));
	}
	if (unk_0x575B7C28D81C0B4D(Local_89.f_170))
	{
		unk_0x1AD5BCFEC31BB8D9(&(Local_89.f_170));
	}
	if (unk_0x575B7C28D81C0B4D(Local_89.f_171))
	{
		unk_0x1AD5BCFEC31BB8D9(&(Local_89.f_171));
	}
	if (unk_0x419E13582192CFEA(Local_89.f_162))
	{
		unk_0x5420D0D520CF44D0(&(Local_89.f_162));
	}
	unk_0x2785FE2E1CBFF018();
	unk_0x97D6BA3D63E00279();
	unk_0x0471F84E07D156D1();
	unk_0x98E94A93D7CF5AF1(0f);
	if (func_241())
	{
		func_240(0);
	}
	func_526();
	func_328(1, -1);
	func_525();
	if (func_31())
	{
		func_336(0);
	}
	if (unk_0x159BC3DDA80D71AC(Local_89.f_159))
	{
		uVar3 = unk_0xBD11ACD80727BD31(Local_89.f_159);
		unk_0x04F4D55F2C0C756D(&uVar3);
	}
	if (!bParam0)
	{
		if (!unk_0xAB6A270F84A8781E(Local_89.f_157))
		{
			unk_0xF9135F131C423364(Local_89.f_157);
		}
		func_524(0);
	}
	func_250(0);
	if (func_523() && (!func_267(unk_0x1146A9AE09CE2B14()) || func_266()))
	{
		func_300(unk_0x1146A9AE09CE2B14(), 1, 0, 0);
		unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), false);
	}
	Local_89.f_120 = 0f;
	Local_89.f_121 = 0f;
	Local_89.f_12 = 0;
	Local_89.f_14 = 0;
	Local_89.f_10 = 0;
	Local_89.f_16 = 0;
	func_21(&(Local_89.f_244));
	func_21(&(Local_89.f_246));
	if (!Local_89.f_155)
	{
		func_21(&(Local_89.f_248));
	}
	func_21(&(Local_89.f_252));
	func_21(&(Local_89.f_250));
	func_21(&(Local_89.f_254));
	func_21(&(Local_89.f_258));
	func_21(&(Local_89.f_264));
	func_21(&(Local_89.f_262));
	func_21(&(Local_89.f_260));
	func_21(&(Local_89.f_266));
	func_21(&(Local_89.f_268));
	func_21(&(Local_89.f_270));
	func_21(&(Local_89.f_274));
	func_21(&(Local_89.f_276));
	func_21(&(Local_89.f_256));
	func_21(&(Local_89.f_345));
	if (unk_0x1146A9AE09CE2B14() != func_12())
	{
		func_21(&(Local_89.f_280[unk_0x1146A9AE09CE2B14() /*2*/]));
	}
	Local_89.f_28 = 0;
	Local_89.f_5 = 0;
	Local_89.f_6 = 0;
	Global_1695733.f_4 = -1;
	func_522(-1f);
	func_447(0f);
	func_247(0);
	func_450(0);
	func_521(0);
	func_448(0);
	func_224(0);
	func_520(0);
	func_178(0);
	func_519(0);
	func_518(0);
	func_517(0);
	func_72(1);
	func_294(0);
	func_292(0);
	func_298(0);
	func_453(0);
	func_374(0f, 0f, 0f, 0f, 0f, 0f);
	func_516();
	Global_1695733.f_24 = -1;
	unk_0xC664C0067EEAB8D1(&Global_2518651, 0);
	unk_0xC664C0067EEAB8D1(&Global_1702511, 0);
	func_385(0);
	if (!func_515(0))
	{
		func_290();
	}
	if (func_75())
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (func_140() || func_16())
		{
			if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9 != func_12() && unk_0x8CFC2F41A749E236(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9))
			{
				iVar4 = Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_9;
			}
			else if ((func_140() && Global_1590753 != func_12()) && unk_0x8CFC2F41A749E236(Global_1590753))
			{
				iVar4 = Global_1590753;
			}
			else if ((func_16() && Global_1590754 != func_12()) && unk_0x8CFC2F41A749E236(Global_1590754))
			{
				iVar4 = Global_1590754;
			}
			else if (func_281(unk_0x1146A9AE09CE2B14(), 0))
			{
				if (func_168() != func_12() && unk_0x8CFC2F41A749E236(func_168()))
				{
					iVar4 = func_168();
				}
			}
			if (iVar4 != func_12())
			{
				if (unk_0x8CFC2F41A749E236(iVar4) && unk_0x02BFF15CAA701972())
				{
					if (func_140())
					{
						func_180(iVar4, 0, 1, 0);
					}
					else if (func_16())
					{
						func_180(iVar4, 0, 8, Global_1319205);
					}
					unk_0x191DDA30577F440A(&(Local_89.f_5), 28);
				}
				else
				{
					unk_0x191DDA30577F440A(&(Local_89.f_5), 27);
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&(Local_89.f_5), 27);
			}
		}
		else if (func_30() || func_162())
		{
			func_21(&Global_1695678);
			func_514(300000);
			func_513(1);
			unk_0x191DDA30577F440A(&(Local_89.f_5), 28);
		}
		func_392(0);
		func_391(0);
		unk_0xC664C0067EEAB8D1(&(Local_87[unk_0x1146A9AE09CE2B14() /*3*/]), 0);
		iVar5 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_89.f_172));
		if (func_30() || func_162())
		{
			Var6.f_7 = Global_786547;
			Var6.f_1 = Global_786547.f_1;
			if (unk_0xE45310E861787FC2())
			{
				Var6 = Global_4456448.f_85535;
			}
			else
			{
				Var6 = func_511(unk_0x1146A9AE09CE2B14());
			}
			Var6.f_6 = 1;
			Var6.f_4 = Local_89.f_27;
			Var6.f_5 = Local_89.f_29;
			Var6.f_3 = iVar5;
			Var6.f_2 = Local_89.f_26;
			unk_0x58889650AD8A22C7(&Var6);
		}
		else
		{
			unk_0xE8F3E4F2388876EC(iVar5, Local_89.f_26, Local_89.f_27);
		}
		if (func_16())
		{
			func_509(2, func_510());
		}
	}
	func_508();
	func_393(0);
	func_265(0);
	func_187(0);
	unk_0x3D9BC07C93913E04(&(Local_89.f_169));
	if (func_182(1) != 0)
	{
		unk_0x824F744352C8BC82(func_182(1));
	}
	if (func_182(0) != 0)
	{
		unk_0x824F744352C8BC82(func_182(0));
	}
	func_386(0);
	func_328(1, -1);
	Local_89.f_26 = 0;
	Local_89.f_27 = 0;
	Local_89.f_29 = 0;
	unk_0x3E5BA73CEA34D768(Local_89.f_28);
	if (unk_0x176066ACB1B41C48(Local_89.f_173[unk_0x1146A9AE09CE2B14()]))
	{
		unk_0x39448B5909AEB658(Local_89.f_173[unk_0x1146A9AE09CE2B14()], 0);
	}
	if (unk_0x176066ACB1B41C48(Local_89.f_206[unk_0x1146A9AE09CE2B14()]))
	{
		unk_0x39448B5909AEB658(Local_89.f_206[unk_0x1146A9AE09CE2B14()], 0);
	}
	if (!bParam0)
	{
		if (!func_166(unk_0x1146A9AE09CE2B14()))
		{
			func_507(0f, 0f, 0f, 0f);
		}
		Global_1695733.f_2 = 0;
		func_502();
	}
	else
	{
		func_446(0, 1);
	}
}

void func_507(struct<3> Param0, float fParam1)
{
	if (!func_375(Global_1695733.f_10, Param0, 0))
	{
		Global_1695733.f_10 = { Param0 };
		Global_1695733.f_7 = fParam1;
	}
}

void func_508()
{
	int iVar0;
	
	if (!unk_0x964C4D363AF812CB(Local_89.f_41))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_41);
		unk_0xBAB6F7501A822416(Local_89.f_41);
		Local_89.f_41 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_30))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_30);
		unk_0xBAB6F7501A822416(Local_89.f_30);
		Local_89.f_30 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_31))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_31);
		unk_0xBAB6F7501A822416(Local_89.f_31);
		Local_89.f_31 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_32))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_32);
		unk_0xBAB6F7501A822416(Local_89.f_32);
		Local_89.f_32 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_33))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_33);
		unk_0xBAB6F7501A822416(Local_89.f_33);
		Local_89.f_33 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_34))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_34);
		unk_0xBAB6F7501A822416(Local_89.f_34);
		Local_89.f_34 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_40))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_40);
		unk_0xBAB6F7501A822416(Local_89.f_40);
		Local_89.f_40 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_39))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_39);
		unk_0xBAB6F7501A822416(Local_89.f_39);
		Local_89.f_39 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_38))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_38);
		unk_0xBAB6F7501A822416(Local_89.f_38);
		Local_89.f_38 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_37))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_37);
		unk_0xBAB6F7501A822416(Local_89.f_37);
		Local_89.f_37 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_36))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_36);
		unk_0xBAB6F7501A822416(Local_89.f_36);
		Local_89.f_36 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_35))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_35);
		unk_0xBAB6F7501A822416(Local_89.f_35);
		Local_89.f_35 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_42))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_42);
		unk_0xBAB6F7501A822416(Local_89.f_42);
		Local_89.f_42 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_43))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_43);
		unk_0xBAB6F7501A822416(Local_89.f_43);
		Local_89.f_43 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_81))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_81);
		unk_0xBAB6F7501A822416(Local_89.f_81);
		Local_89.f_81 = -1;
	}
	if (!unk_0x964C4D363AF812CB(Local_89.f_115))
	{
		unk_0x791B4C3811D53DFA(Local_89.f_115);
		unk_0xBAB6F7501A822416(Local_89.f_115);
		Local_89.f_115 = -1;
	}
	if (func_486())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_89.f_46[iVar0] != -1)
			{
				unk_0x791B4C3811D53DFA(Local_89.f_46[iVar0]);
				unk_0xBAB6F7501A822416(Local_89.f_46[iVar0]);
				Local_89.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_159();
	if (unk_0xB30CD10E2CD1B67D("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0xC0BBE340BE2AA02D("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0xB30CD10E2CD1B67D("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0xC0BBE340BE2AA02D("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0xB30CD10E2CD1B67D("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0xC0BBE340BE2AA02D("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0xB30CD10E2CD1B67D("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0xC0BBE340BE2AA02D("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (unk_0xB30CD10E2CD1B67D("dlc_hei4_submarine_guided_missile_Scene"))
	{
		unk_0xC0BBE340BE2AA02D("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_509(int iParam0, var uParam1)
{
	if (Global_2544210.f_337 > 0 || Global_2544210.f_337.f_1 > 0)
	{
		unk_0x525220B07E34522E(iParam0, uParam1, Global_2544210.f_337, Global_2544210.f_337.f_1);
	}
	func_416();
}

bool func_510()
{
	return Global_1590754 == unk_0x1146A9AE09CE2B14();
}

int func_511(int iParam0)
{
	if (func_160(iParam0) == 243)
	{
		return func_512(iParam0);
	}
	return -1;
}

int func_512(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

void func_513(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336, 20))
		{
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336), 20);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336, 20))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_336), 20);
	}
}

void func_514(int iParam0)
{
	if (Global_1695733.f_5 != iParam0)
	{
		Global_1695733.f_5 = iParam0;
	}
}

bool func_515(int iParam0)
{
	return Local_89.f_241 == iParam0;
}

void func_516()
{
	if (func_174())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 7);
	}
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!unk_0x234B68AC2E35ED5A(Global_1695733, 16))
			{
				unk_0x191DDA30577F440A(&Global_1695733, 16);
			}
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733, 16))
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 16);
	}
}

void func_518(bool bParam0)
{
	if (bParam0)
	{
		if (!func_487())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 6);
		}
	}
	else if (func_487())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 6);
	}
}

void func_519(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733, 3))
		{
			unk_0x191DDA30577F440A(&Global_1695733, 3);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733, 3))
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 3);
	}
}

void func_520(bool bParam0)
{
	if (bParam0)
	{
		if (!func_397())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 10);
		}
	}
	else if (func_397())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 10);
	}
}

void func_521(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x636F1F53CC61D2C9(unk_0x15173FB88ABC94F9("AM_MP_DRONE")) > 0)
		{
			if (!func_487())
			{
				unk_0x191DDA30577F440A(&Global_1695733, 0);
			}
		}
	}
	else if (func_487())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 0);
	}
}

void func_522(float fParam0)
{
	if (Global_1695733.f_9 != fParam0)
	{
		Global_1695733.f_9 = fParam0;
	}
}

int func_523()
{
	if (!func_308())
	{
		return 0;
	}
	if (func_11(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_75())
	{
		return 0;
	}
	if (func_83())
	{
		return 0;
	}
	return 1;
}

void func_524(bool bParam0)
{
	if (bParam0)
	{
		if (!func_31())
		{
			unk_0x191DDA30577F440A(&Global_1695733, 24);
		}
	}
	else if (func_31())
	{
		unk_0xC664C0067EEAB8D1(&Global_1695733, 24);
	}
}

void func_525()
{
	if (unk_0x0E8572B08CEB6A11(Local_89.f_168))
	{
		unk_0xFE1DEC9C5734D0C0(Local_89.f_168, 0);
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		if (!func_37() || unk_0x234B68AC2E35ED5A(Local_89.f_6, 0))
		{
			unk_0x53DE24D8A6C88A9A();
		}
	}
}

void func_526()
{
	if (unk_0x0E8572B08CEB6A11(Local_89.f_168))
	{
		if (func_528(unk_0x1146A9AE09CE2B14()))
		{
			func_527(0);
		}
	}
}

void func_527(bool bParam0)
{
	if (bParam0)
	{
		Global_1683970.f_3471 = bParam0;
	}
	if (!Global_1683970.f_3470)
	{
		Global_1683970.f_3470 = 1;
	}
}

int func_528(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_19(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

void func_529(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = 458618622;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429, 1))
		{
			unk_0xC664C0067EEAB8D1(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_429), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_25(&(uParam0->f_1)))
	{
		func_23(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_25(&(uParam0->f_1)) && !func_22(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_21(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_21(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_8(unk_0x1146A9AE09CE2B14());
		if (iVar3 != -1)
		{
			unk_0xA5C82A39FF8ED272(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

void func_530(struct<9> Param0, var uParam1, var uParam2, var uParam3)
{
	unk_0x35BEDD7AFD26FCD5(32, 0, Param0);
	func_540(0, -1, 0);
	unk_0xF784CE07ED70869A(&uLocal_88, 1);
	unk_0xC84352B5E80ABF68(&Local_87, 97);
	if (!func_539())
	{
		func_500(0);
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (!func_486())
		{
			Local_89.f_134 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (unk_0x419E13582192CFEA(func_347()) && !unk_0xE50EB54E0F21BED0(func_347(), 0))
					{
						Local_89.f_143 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(func_347(), 1), unk_0xA8D713A937F31250(func_347()), 0f, 1.6f, 2.9f) };
						Local_89.f_137 = { Local_89.f_143 };
					}
					func_460(1);
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 1;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 1;
					break;
				
				case 2:
					func_538(1);
					Local_89.f_143 = { Param0.f_5 };
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 2;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 2;
					break;
				
				case 3:
					func_537(1);
					Local_89.f_143 = { Param0.f_5 };
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 3;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 3;
					break;
				
				case 4:
					func_454(1);
					Local_89.f_143 = { Param0.f_5 };
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 4;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 4;
					break;
				
				case 5:
					func_536(1);
					Local_89.f_143 = { Param0.f_5 };
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 5;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 5;
					break;
				
				case 6:
					func_535(1);
					Local_89.f_143 = { Param0.f_5 };
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 6;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 6;
					break;
				
				case 8:
					func_534(1);
					Local_89.f_143 = { Param0.f_5 };
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 8;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 8;
					break;
				
				case 9:
					func_533(1);
					Local_87[unk_0x1146A9AE09CE2B14() /*3*/].f_1 = 9;
					Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 = 9;
					break;
				
				default:
					func_532(1);
					Local_89.f_143 = { Param0.f_5 };
					break;
			}
			Local_89.f_140 = { Param0.f_8 };
			if (func_259(func_406()))
			{
				func_374(Local_89.f_143, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_500(0);
	}
	if (!func_486())
	{
		func_446(1, 1);
	}
	else
	{
		func_531();
	}
}

void func_531()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_89.f_46[iVar0] = -1;
		iVar0++;
	}
	func_385(6);
}

void func_532(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 0))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 0))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 0);
	}
}

void func_533(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 9))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 9);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 9))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 9);
	}
}

void func_534(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 8))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 8);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 8))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 8);
	}
}

void func_535(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 6))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 6);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 6))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 6);
	}
}

void func_536(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 5))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 5);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 5))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 5);
	}
}

void func_537(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 3))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 3);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 3))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 3);
	}
}

void func_538(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 2))
		{
			Global_1695733.f_2 = 0;
			unk_0x191DDA30577F440A(&(Global_1695733.f_2), 2);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1695733.f_2, 2))
	{
		unk_0xC664C0067EEAB8D1(&(Global_1695733.f_2), 2);
	}
}

int func_539()
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
		if (func_495())
		{
			return 0;
		}
		if (func_493(157))
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

int func_540(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_502();
			}
			else
			{
				return 0;
			}
		}
		if (!func_541())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_502();
					}
					else
					{
						return 0;
					}
				}
				if (func_495())
				{
					if (!bParam2)
					{
						func_502();
					}
					else
					{
						return 0;
					}
				}
				if (func_493(157))
				{
					if (!bParam2)
					{
						func_502();
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
					func_502();
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
				func_502();
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
			func_502();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_541()
{
	return Global_1312878;
}

