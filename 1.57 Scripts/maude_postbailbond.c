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
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	
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
	iLocal_45 = -1;
	iLocal_46 = -1;
	if (unk_0x4210287E2833D44B(19))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!func_51(uLocal_42))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_43 = unk_0xDFB7BFA6482FEE1E();
		iLocal_45 = func_49();
		iLocal_44 = 0;
		func_48(1, &uLocal_48);
	}
	while (true)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (!func_51(uLocal_42))
			{
				func_56();
			}
			Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			Var1 = { unk_0xD6E677FAD7521410(uLocal_42, 1) };
			if (vdist2(Var0, Var1) >= (100f * 100f))
			{
				func_56();
			}
			switch (iLocal_47)
			{
				case 0:
					func_43(Var1, Var0, 18000, 1101004800);
					if (func_25(&iLocal_42, 0))
					{
						func_24();
						func_16(0);
						func_12(Var1, Var0);
						unk_0x068BDE31F7D112BB(func_11());
						iLocal_47 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_42, &uLocal_39, &iLocal_46))
					{
						iLocal_47 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_42, 1805844857) && !unk_0x11DBA82F76F3C4C2(iLocal_42))
					{
						if (!unk_0x698F51FB33ADAF7B(iLocal_42, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_56();
					}
					break;
				}
		}
		wait(0);
	}
}

void func_1()
{
	if (func_51(iLocal_42))
	{
		func_2(&iLocal_42);
		unk_0x1DC2BF231DE6A016(iLocal_42, unk_0x7D2B9E6A64637269(), 10000f, -1, 0, 0);
		unk_0x504B26425DFF773C(iLocal_42, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0x82D2BB48A39F1E88(*uParam0, 2, 0);
		unk_0x82D2BB48A39F1E88(*uParam0, 64, 0);
		unk_0x82D2BB48A39F1E88(*uParam0, 128, 0);
		unk_0x82D2BB48A39F1E88(*uParam0, 8, 0);
		unk_0x82D2BB48A39F1E88(*uParam0, 1, 0);
		unk_0x82D2BB48A39F1E88(*uParam0, 32, 0);
		unk_0xA415F00D0E0DFBCE(*uParam0, 5, 0);
		unk_0xA415F00D0E0DFBCE(*uParam0, 17, 1);
		unk_0x7B28A83A0D3DD0F9(*uParam0, 118, 1);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(var uParam0, int iParam1)
{
	if (func_51(uParam0))
	{
		if (unk_0x4E8DA737B686529A(uParam0, iParam1) == 1 || unk_0x4E8DA737B686529A(uParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (func_51(*uParam0))
	{
		if (unk_0x698F51FB33ADAF7B(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x6B9E71121F5B8154(*uParam0) || unk_0x674642CC58396437(*uParam0))
			{
				unk_0x068BDE31F7D112BB(func_11());
				if (unk_0x0EC2B29D4172D225(func_11()))
				{
					*iParam2 = unk_0xD955F1CC0BCABC78(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					unk_0xB9314D20143CEED3(*iParam2, 0);
					unk_0x1C6FA6A93BF99EA4(*iParam2, 0);
					if (func_4(*uParam0, 1785177548))
					{
						unk_0x90ED32458AC2D129(*uParam0, -1000f, 1);
					}
					unk_0xAD844C8843FC405C(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xE37EB80DFB0D31FB(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0x698F51FB33ADAF7B(*uParam1, func_10(), func_7(), 3))
						{
							unk_0x90ED32458AC2D129(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0xED3365BAA5895E01(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
}

int func_8(int iParam0)
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

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(struct<3> Param0, struct<3> Param1)
{
	if (func_51(iLocal_42))
	{
		if (!unk_0xCCCF5C35DC145D71(iLocal_42))
		{
			if (vdist2(Param1, Param0) < (35f * 35f))
			{
				func_13(&iLocal_42, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*uParam0))
	{
		bVar0 = unk_0x1F9A96198946E6F0(*uParam0);
		if (bVar0)
		{
			unk_0x05D0B763CEEA9ABD(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			unk_0x05D0B763CEEA9ABD(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0xF91D68602B0BFFFF(uParam0, uParam1, uParam2, func_15(iParam3), 0);
}

int func_15(int iParam0)
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

void func_16(bool bParam0)
{
	struct<6> Var0;
	var uVar1;
	
	if (func_23())
	{
		Var0 = { func_22() };
		uVar1 = func_21();
		if (unk_0xDA654EB115F9FF7D(&Var0, uVar1))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_19991 = 0;
	func_18();
}

void func_18()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

void func_19()
{
	Global_19991 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0xBA3738C78262143F();
		Global_22136 = 0;
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

char* func_21()
{
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 3))
	{
		return "BB4_loiter";
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 2))
	{
		return "BB3_loiter";
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 1))
	{
		return "BB2_loiter";
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21125 == 4)
	{
		return Global_20744;
	}
	return Var0;
}

int func_23()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0x419E13582192CFEA(uLocal_41))
	{
		unk_0xA2C015B68CE01357(iLocal_41, 0);
	}
	if (unk_0x419E13582192CFEA(uLocal_40))
	{
		unk_0xA2C015B68CE01357(iLocal_40, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0x4E37ACBE6D599CB9(*uParam0) || unk_0xC51EC1626E7099CA(*uParam0)) || unk_0xC6FB16A6BCF56FEE(*uParam0))
		{
			return 1;
		}
		if (unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), *uParam0))
			{
				return 1;
			}
			if (unk_0x419E13582192CFEA(uLocal_39))
			{
				if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_39))
				{
					return 1;
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_40))
			{
				if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_40))
				{
					return 1;
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_41))
			{
				if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iLocal_41))
				{
					return 1;
				}
			}
		}
		if (unk_0x077B4D0A7F830A6F(*uParam0, 61))
		{
			return 1;
		}
		if (unk_0x6B9E71121F5B8154(*uParam0))
		{
			if (unk_0xD406352E21A7E1D0(*uParam0, unk_0x7D2B9E6A64637269(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x077B4D0A7F830A6F(*uParam0, 51))
		{
			return 1;
		}
		if (func_33(*uParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*uParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x16B4C536089C3CAD(-1, unk_0xD6E677FAD7521410(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x077B4D0A7F830A6F(*uParam0, 73))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
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

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0x7D2B9E6A64637269()) && func_8(iParam0))
	{
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x8E93627D38C90C19(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
				{
					if (unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	Var1 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.x = (Var1.x + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x24EE3332DFDF21FE(unk_0xD6E677FAD7521410(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD7196DD041C06559(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xACDE87C3A0618AF7(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_29(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_31(Param1 - unk_0xD6E677FAD7521410(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x557C9CA8FCC667DF(iParam0) };
	}
	else
	{
		Var1 = { func_31(unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 5f, 0f) - unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_31(struct<3> Param0)
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

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x3E72EB0926A107F9(unk_0xD6E677FAD7521410(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x7D2B9E6A64637269()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iParam0))
		{
			if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)
{
	return func_35(iParam0, unk_0x7D2B9E6A64637269(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar2 != -1)
		{
			func_40(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_38();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_37[iVar2 /*4*/]), Var1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xDFB7BFA6482FEE1E() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_8(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_37(iParam2, iParam5) };
		*uParam0 = unk_0x3F7B472B49D4D2AC(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0xA2B3B271E2AE7A08(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xA2CCAAC7F5CA3F49(iVar3))
	{
		func_8(iVar3);
		if (unk_0xFAA5505029C4B5A6(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				unk_0x52A935C3774D2C0B(Param1, unk_0xD6E677FAD7521410(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0xDFB7BFA6482FEE1E();
			return 1;
		}
		return 0;
	}
	if (unk_0x55F5BD4ABD80B211(iVar3))
	{
		func_8(iVar3);
		if (unk_0xC49311A2A500FF09(iParam2, 0))
		{
			if (unk_0x611CD1312FD3CA66(iVar3) == unk_0x75B58B38E45C6F9A(iParam2, 0))
			{
				if (bLocal_38)
				{
					unk_0x52A935C3774D2C0B(Param1, unk_0xD6E677FAD7521410(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0xDFB7BFA6482FEE1E();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xB36B8558948EA7A8(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xD6E677FAD7521410(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x885F3A431ECE75E3(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xD6E677FAD7521410(iParam0, 1);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_31(unk_0xD6E677FAD7521410(iParam1, 1) - unk_0xD6E677FAD7521410(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x557C9CA8FCC667DF(iParam0) };
	}
	else
	{
		Var1 = { func_31(unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 5f, 0f) - unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(var uParam0)
{
	if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), uParam0) && unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(struct<3> Param0, struct<3> Param1, int iParam2, float fParam3)
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	
	if (iLocal_44 < iLocal_45)
	{
		if (!func_23())
		{
			if (vdist2(Param1, Param0) < (fParam3 * fParam3))
			{
				if (unk_0xDFB7BFA6482FEE1E() - iLocal_43) > (iParam2 + unk_0xB36B8558948EA7A8(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_42, "MAUDE", 0, 1);
					cVar1 = func_46();
					sVar2 = func_21();
					func_44(&uVar0, cVar1, sVar2, 7, 0, 0);
					iLocal_43 = unk_0xDFB7BFA6482FEE1E();
					iLocal_44++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_43 = unk_0xDFB7BFA6482FEE1E();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
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

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_46()
{
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 3))
	{
		return "BB4AUD";
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 2))
	{
		return "BB3AUD";
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 1))
	{
		return "BB2AUD";
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

void func_48(bool bParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 2711.198f, 4134.425f, 32.90168f };
	Var1 = { 2739.981f, 4155.221f, 50.28859f };
	if (bParam0)
	{
		*uParam1 = unk_0x0823FA7465392E20(Var0, Var1, 0, 1, 1, 1);
		unk_0x494E8A58F41F5F54(Var0, Var1);
		unk_0x86DA8A407ED8A381(Var0, Var1, 0, 1);
		unk_0x016587321D096AED(Var0, Var1, 0);
		unk_0x6F21DC8C6FD88FCF(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		unk_0x6AF7EE4DD9F8B944(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0xE6B53A6E51AAA49F(*uParam1, 0);
		unk_0x36C2CA307C00F187();
		unk_0x86DA8A407ED8A381(Var0, Var1, 1, 1);
		unk_0xE99504CC51D09E54(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

int func_49()
{
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 3))
	{
		return 4;
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 2))
	{
		return 4;
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 1))
	{
		return 4;
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_24984, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	struct<3> Var0;
	
	if (func_51(iLocal_42))
	{
		if (!unk_0xEE1D92A39CF8E1E6(iLocal_42))
		{
			unk_0x4985CD0720AFD468(iLocal_42, 1, 0);
		}
		unk_0xBE91B077ADADE97F(iLocal_42, 1);
		unk_0xEC7D41CF790FC6FB(iLocal_42, 0);
		unk_0x1D7A4E9E23D306D6(iLocal_42, 0);
		unk_0x2271ED1E65FB75EE(iLocal_42, 1862763509);
		unk_0x8D8037621076DC86(iLocal_42, 0);
		unk_0xBC4B0376D5E2BD1A(iLocal_42, 0);
		unk_0x7B28A83A0D3DD0F9(iLocal_42, 118, 0);
		Var0 = { 2728.33f, 4145.6f, 43.89f };
		if (unk_0xCC09B877A009E41F(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_40 = unk_0xB219A5BFF547852F(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_40))
			{
				unk_0x78CDDD1E6367978D(iLocal_40, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(iLocal_40, -92.17f);
				unk_0xA2C015B68CE01357(iLocal_40, 1);
			}
		}
		if (unk_0xCC09B877A009E41F(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_41 = unk_0xB219A5BFF547852F(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_41))
			{
				if (!unk_0xEE1D92A39CF8E1E6(iLocal_41))
				{
					unk_0x4985CD0720AFD468(iLocal_41, 1, 0);
				}
				unk_0x78CDDD1E6367978D(iLocal_41, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(iLocal_41, 71f);
				unk_0xA2C015B68CE01357(iLocal_41, 1);
			}
		}
		if (unk_0xCC09B877A009E41F(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_39 = unk_0xB219A5BFF547852F(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_39))
			{
				if (!unk_0xEE1D92A39CF8E1E6(iLocal_39))
				{
					unk_0x4985CD0720AFD468(iLocal_39, 1, 0);
				}
				unk_0x78CDDD1E6367978D(iLocal_39, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(iLocal_39, -91.28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0xECEC7528A52B4EE8(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		iVar0 = unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x6471F4759775FCA4(uVar2[iVar1]) == func_53(62))
				{
					iLocal_42 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (!func_55(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

void func_56()
{
	func_48(0, &uLocal_48);
	if (func_8(iLocal_41))
	{
		unk_0xA2C015B68CE01357(iLocal_41, 0);
	}
	func_58(&iLocal_41, 0);
	if (func_8(iLocal_40))
	{
		unk_0xA2C015B68CE01357(iLocal_40, 0);
	}
	func_58(&iLocal_40, 0);
	if (func_8(iLocal_39))
	{
		unk_0xA2C015B68CE01357(iLocal_39, 0);
		if (unk_0x698F51FB33ADAF7B(iLocal_39, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x971223096C6B5513(iLocal_39, "base_chair", "special_ped@maude@base", -1000f);
			unk_0x90ED32458AC2D129(iLocal_39, -1000f, 1);
		}
		else if (unk_0x698F51FB33ADAF7B(iLocal_39, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x971223096C6B5513(iLocal_39, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0x90ED32458AC2D129(iLocal_39, -1000f, 1);
		}
	}
	func_58(&iLocal_39, 0);
	if (func_51(iLocal_42))
	{
		unk_0x504B26425DFF773C(iLocal_42, 1);
		unk_0x7B28A83A0D3DD0F9(iLocal_42, 118, 1);
	}
	func_57(&iLocal_42, 1, 0, 1);
	unk_0xF9135F131C423364(func_11());
	unk_0x4BFE89D21F9885DC();
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_58(var uParam0, bool bParam1)
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

