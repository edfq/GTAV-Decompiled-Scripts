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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<33> Local_96 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 1;
	var uLocal_98[3] = { 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 5;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_49 = { 500f, 500f, 500f };
	iLocal_107 = 3;
	if (unk_0x4210287E2833D44B(98))
	{
		func_321();
	}
	if (func_318(0))
	{
		bLocal_86 = true;
		iLocal_83 = unk_0x8E9D6E2DA3B756D5();
	}
	if (Global_3)
	{
		unk_0x66AE54CE92457FEE(1);
		unk_0x4BFE89D21F9885DC();
	}
	if (func_317(14))
	{
		unk_0x66AE54CE92457FEE(1);
		unk_0x4BFE89D21F9885DC();
	}
	func_316(&Local_96, 3);
	func_307(&uScriptParam_120);
	Var0 = { 24.088f, -1345.623f, 29.5082f };
	Var1 = { 24.94562f, -1344.954f, 29.49f };
	Var2 = { Var0 - Var1 };
	Var2 = { Var1 - Var0 };
	fVar4 = 147.297f;
	Var3 = { -1228.443f, -905.3416f, 13.523f };
	Var2 = { Var3 - Vector(12.31f, -907.8234f, -1222.331f) };
	Var2 = { func_306(Var2, fVar4) };
	if ((((func_305() && !func_304()) || Global_112237) || Global_31348) || Global_112282 != -1)
	{
		if (func_305() && !func_304())
		{
		}
		else if (Global_112237)
		{
		}
		else if (Global_31348)
		{
		}
		else if (Global_112282 != -1)
		{
		}
		if (!func_303())
		{
			func_301(&(Local_66.f_470), 64);
			func_299(1);
		}
		else
		{
			func_299(0);
		}
		func_321();
	}
	else if (Global_112293.f_20033[iLocal_80] > 0)
	{
		if (func_298())
		{
			func_296(iLocal_80, Local_66.f_486.f_9.f_2, &Var5, &Var6);
			unk_0x91F94D2287684BDB(Local_66.f_181, 15f, 0);
			uLocal_79 = unk_0x0823FA7465392E20(Var5, Var6, 0, 1, 1, 1);
			if (!func_303())
			{
				func_299(1);
			}
			else
			{
				func_299(0);
				func_294(&(Local_66.f_470), 512);
			}
			iLocal_65 = 2;
		}
		else
		{
			func_299(0);
		}
		if (!func_293())
		{
			iLocal_62 = 10;
			iVar7 = unk_0xB36B8558948EA7A8(0, 3);
			if (iVar7 == 0)
			{
				Local_66.f_2.f_12 = 1;
			}
			else
			{
				Local_66.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_299(0);
	}
	while (true)
	{
		func_290(&Local_96);
		if (func_285())
		{
			func_321();
		}
		if (!bLocal_86)
		{
			if (func_318(0))
			{
				func_284();
				bLocal_86 = true;
			}
		}
		switch (iLocal_65)
		{
			case 0:
				func_255();
				break;
			
			case 1:
				func_6();
				break;
			
			case 2:
				if (func_303())
				{
					if (!unk_0xE8FFE38E2BA32BD6())
					{
						if (!func_4("SHOP_CLOSED", func_5(iLocal_80)) && !func_3(unk_0x1146A9AE09CE2B14()))
						{
							unk_0x8A90955C39C9044C(0);
							func_2("SHOP_CLOSED", func_5(iLocal_80));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED", func_5(iLocal_80)))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					if (func_1(Local_66.f_470, 512))
					{
						func_299(1);
						func_301(&(Local_66.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		wait(0);
	}
}

bool func_1(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x1896EC0B030A48A2(sParam1);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

int func_3(int iParam0)
{
	int iVar0;
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
		iVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(iVar0))
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

int func_4(char* sParam0, char* sParam1)
{
	unk_0x4A4799828818A508(sParam0);
	unk_0x1896EC0B030A48A2(sParam1);
	return unk_0x0222F263F70347A8(0);
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_252();
	func_249();
	func_244();
	func_238();
	func_220();
	func_198();
	func_192();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!func_50())
	{
		func_37();
		func_27();
	}
	if (unk_0x419E13582192CFEA(Local_66))
	{
		unk_0xBDC364B886846D11(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_88 = false;
	if (!unk_0xECEC7528A52B4EE8(Local_66.f_2) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0xB590A8673D04F7DA(unk_0x1146A9AE09CE2B14()) && unk_0x836F48E8C4A773BF(unk_0x7D2B9E6A64637269(), Local_66.f_2, 45f)) && unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), Local_66.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), Local_66.f_2)) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), Local_66.f_2))
				{
					if (!func_26() && !unk_0x8ACA9ACB93EC151E())
					{
						bLocal_88 = true;
					}
				}
			}
		}
	}
	if (bLocal_88)
	{
		if (!iLocal_89 && func_1(Local_66.f_470, 4))
		{
			iVar2 = func_25(unk_0x7D2B9E6A64637269());
			iVar3 = unk_0xD17465D40BEBC86E(iVar2);
			if (iVar3 == joaat("GROUP_PISTOL"))
			{
				sLocal_90 = "hold_up_head_additive_pistol";
				unk_0x4261814A9A26E86F(unk_0x7D2B9E6A64637269(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == joaat("GROUP_MG") || iVar3 == joaat("GROUP_RIFLE")) || iVar3 == joaat("GROUP_SHOTGUN")) || iVar3 == joaat("GROUP_SNIPER")) || iVar3 == joaat("GROUP_SMG"))
			{
				sLocal_90 = "hold_up_head_additive_rifle";
				unk_0x4261814A9A26E86F(unk_0x7D2B9E6A64637269(), "mp_am_hold_up", sLocal_90, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_90 = "";
			}
			iLocal_89 = 1;
		}
	}
	else if (iLocal_89)
	{
		if (!unk_0xAB6A270F84A8781E(sLocal_90))
		{
			if (unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "mp_am_hold_up", sLocal_90, 3))
			{
				unk_0x066FC15C60D0E579(unk_0x7D2B9E6A64637269(), "mp_am_hold_up", sLocal_90, -1056964608);
			}
		}
		iLocal_89 = 0;
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_303())
			{
				if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
				{
					iLocal_62 = 12;
				}
				else
				{
					iLocal_50 = 2;
					iLocal_57 = 1;
					if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
					{
						if (!unk_0xC49311A2A500FF09(Local_66, 0))
						{
							if ((func_25(Local_66) == joaat("weapon_unarmed") || func_25(Local_66) == joaat("object")) || func_25(Local_66) == joaat("weapon_briefcase"))
							{
								iLocal_60 = 1;
								iLocal_62 = 1;
							}
							else if (!func_1(Local_66.f_470, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_60 = 2;
									iLocal_62 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_60 = 3;
									iLocal_62 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_60 = 4;
									iLocal_62 = 5;
								}
								else
								{
									iLocal_62 = 2;
								}
								func_294(&(Local_66.f_470), 1);
							}
						}
						else
						{
							iLocal_62 = 3;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_50 = 2;
				iLocal_62 = 3;
			}
			else if (!func_303() && func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
			{
				iLocal_62 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_66.f_470, 2))
			{
				iLocal_51 = 1;
				iLocal_56 = 1;
				func_294(&(Local_66.f_470), 2);
			}
			iLocal_62 = 5;
			break;
		
		case 2:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_51 = 6;
			iLocal_56 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (!func_303() && !func_1(Local_66.f_470, 1))
			{
				iLocal_62 = 0;
			}
			break;
		
		case 6:
			if (iLocal_51 >= 13)
			{
				if (Local_66.f_2.f_12)
				{
					if (!func_20())
					{
						iLocal_62 = 7;
					}
				}
				else
				{
					iLocal_62 = 8;
				}
				iLocal_52 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_66.f_470, 256))
			{
				func_19();
				unk_0xC664C0067EEAB8D1(&Global_95221, 3);
				iLocal_62 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_66.f_470, 16))
			{
				if (func_17())
				{
					if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
					{
						if (!unk_0x6B9E71121F5B8154(Local_66.f_2))
						{
							if (func_303())
							{
								if (Local_66.f_486 >= 0)
								{
									if (unk_0xEEC203A73BC92E7E(Local_66.f_486))
									{
										unk_0x4261814A9A26E86F(Local_66.f_2, Local_66.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_58 = 10;
									}
								}
							}
							else
							{
								unk_0x1DC2BF231DE6A016(Local_66.f_2, unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
								iLocal_58 = 10;
							}
						}
					}
					unk_0xC664C0067EEAB8D1(&Global_95221, 3);
					iLocal_62 = 13;
				}
			}
			break;
		
		case 9:
			func_16(2, 0);
			iLocal_59 = 7;
			if (iLocal_63 == 1)
			{
				iLocal_62 = 8;
			}
			else
			{
				iLocal_62 = 13;
			}
			break;
		
		case 10:
			if (func_303())
			{
				iLocal_62 = 11;
			}
			break;
		
		case 11:
			if (!func_15(&(Local_66.f_477)))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 28;
				}
				else
				{
					iLocal_51 = 29;
				}
				func_12(&(Local_66.f_477));
			}
			else if (func_9(&(Local_66.f_477)) > 5f)
			{
				func_16(1, 0);
				iLocal_62 = 13;
			}
			else if (func_9(&(Local_66.f_477)) > 1.5f)
			{
				if (!func_20())
				{
					if (iLocal_58 != 12)
					{
						iLocal_58 = 12;
						if (!Local_66.f_2.f_12)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_15(&(Local_66.f_477)))
			{
				func_7();
				iLocal_51 = 30;
				iLocal_58 = 12;
				func_12(&(Local_66.f_477));
			}
			else if (func_9(&(Local_66.f_477)) > 3f)
			{
				iLocal_62 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_7()
{
	var uVar0;
	
	if (unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		return;
	}
	unk_0x5C679902079A7E80(&uVar0);
	unk_0x45B1B4E55BF15523(0, Local_66.f_2.f_6, 2f, -1, 0.25f, 0, Local_66.f_2.f_9);
	unk_0x37DE87D06B5C195D(0, -1);
	unk_0x1BBD0A5729AB1226(uVar0);
	unk_0x8A1AC8EBC73850C8(Local_66.f_2, uVar0);
	unk_0x8D5B447F21217223(&uVar0);
	func_294(&(Local_66.f_470), 128);
}

void func_8()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		unk_0x8D5B447F21217223(&uLocal_78);
		unk_0x5C679902079A7E80(&uLocal_78);
		unk_0x37DE87D06B5C195D(0, 5000);
		unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
		unk_0x1BBD0A5729AB1226(uLocal_78);
		unk_0x8A1AC8EBC73850C8(Local_66.f_2, uLocal_78);
	}
}

float func_9(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0xDFB7BFA6482FEE1E());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x02BFF15CAA701972())
	{
		iVar2 = unk_0x551F46B3C7DFB654();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0xDFB7BFA6482FEE1E()) / 1000f);
}

bool func_11(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

void func_12(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_13(uParam0);
	}
}

void func_13(var uParam0)
{
	func_14(uParam0, 0f);
}

void func_14(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_15(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

void func_16(int iParam0, bool bParam1)
{
	if (unk_0x6C9038EC46DA62DE(unk_0x638BDC79E655C1C2()) < iParam0 && (!bLocal_86 || (bLocal_86 && iParam0 < iLocal_83)))
	{
		unk_0xD63E470D46B4F8A5(unk_0x638BDC79E655C1C2(), iParam0, 0);
		unk_0x87524F5C1E0857AB(unk_0x638BDC79E655C1C2(), 0);
		Local_66.f_158 = 1;
		if (bParam1)
		{
			unk_0x20D884FB6567BAD5(iParam0);
		}
		else
		{
			unk_0x20D884FB6567BAD5(5);
		}
	}
	else if (bLocal_86 && iParam0 > iLocal_83)
	{
	}
}

int func_17()
{
	func_18();
	switch (iLocal_54)
	{
		case 0:
			Local_66.f_486 = unk_0xD955F1CC0BCABC78(Local_66.f_486.f_6, Local_66.f_486.f_9, 2);
			if (!unk_0xC6D04E4B28753F77(Local_66.f_2, 1))
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_28, 0))
				{
					if (Local_66.f_486 >= 0)
					{
						unk_0x3CBE9F07524C242D(Local_66.f_28, 1, 0);
						unk_0x0B87A8220B73252D(Local_66.f_28, 1);
						unk_0xAD844C8843FC405C(Local_66.f_2, Local_66.f_486, Local_66.f_486.f_1, Local_66.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						unk_0xED3365BAA5895E01(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
						unk_0xED3365BAA5895E01(Local_66.f_96.f_1, Local_66.f_486, Local_66.f_486.f_5, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_55 = 1;
					iLocal_58 = 5;
					iLocal_54 = 2;
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
			break;
		
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xEEC203A73BC92E7E(Local_66.f_486))
				{
					if (unk_0x0BC8768247440B3A(Local_66.f_486) > 0.478f)
					{
						if (!unk_0xE50EB54E0F21BED0(Local_66.f_28, 0))
						{
							unk_0xED3365BAA5895E01(Local_66.f_28, Local_66.f_486, Local_66.f_486.f_4, Local_66.f_486.f_1, 1000f, 8f, 137, 1148846080);
							Local_66.f_28.f_7 = { Local_66.f_28.f_7, Local_66.f_28.f_7.f_1, (Local_66.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_54 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xEEC203A73BC92E7E(Local_66.f_486))
				{
					if (unk_0x0BC8768247440B3A(Local_66.f_486) > 0.447f)
					{
						if (!unk_0xE50EB54E0F21BED0(Local_66.f_28, 0))
						{
							if (!unk_0x1F9D47D45E125FA6(Local_66.f_28))
							{
								unk_0x4603196EEEA2355C(Local_66.f_28, 1, 0);
							}
						}
					}
					if (Local_66.f_467)
					{
						if (unk_0x5723F3E75C8CABCD(Local_66.f_486) != 1.45f)
						{
							unk_0x3943912232B2A7BF(Local_66.f_486, 1.45f);
						}
					}
					if (unk_0x0BC8768247440B3A(Local_66.f_486) > 0.894f)
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_28, 0))
			{
				if (Local_66.f_486 >= 0)
				{
					if (unk_0xEEC203A73BC92E7E(Local_66.f_486))
					{
						if (iLocal_53 >= 4)
						{
							if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.871f)
							{
								iLocal_55 = 4;
							}
							unk_0x90ED32458AC2D129(Local_66.f_28, -16f, 1);
							unk_0xC5DE9743D6DA2C15(Local_66.f_28);
						}
					}
				}
			}
			iLocal_54 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_18()
{
	if (Local_66.f_486 >= 0)
	{
		if (unk_0xEEC203A73BC92E7E(Local_66.f_486))
		{
			if (unk_0x0BC8768247440B3A(Local_66.f_486) >= 0f)
			{
				if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.117f)
				{
					iLocal_53 = 1;
				}
				else if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.154f)
				{
					iLocal_53 = 2;
				}
				else if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.477f)
				{
					iLocal_53 = 3;
				}
				else if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.487f)
				{
					iLocal_53 = 4;
				}
				else if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.809f)
				{
					iLocal_53 = 5;
				}
				else if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.871f)
				{
					iLocal_53 = 6;
				}
				else if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.894f)
				{
					iLocal_53 = 7;
				}
				else if (unk_0x0BC8768247440B3A(Local_66.f_486) < 0.999f)
				{
					iLocal_53 = 8;
				}
				else if (iLocal_53 == 9)
				{
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else if (iLocal_53 == 0)
		{
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

void func_19()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		unk_0xD82D50E4AC0D46B9(Local_66.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		unk_0x2FF622571073AA69(Local_66.f_2, joaat("weapon_pumpshotgun"), 0);
		unk_0x2271ED1E65FB75EE(Local_66.f_2, -2065892691);
		unk_0x5C679902079A7E80(&(Local_66.f_2.f_22));
		unk_0x2AA99ECF9FBD1E5D(0, Local_66, 2000, 0);
		unk_0x41D7811563AAD1B1(0, Local_66, 4000, -957453492);
		unk_0x99EBE9AD8C344773(0, 25f, 0);
		unk_0x1BBD0A5729AB1226(Local_66.f_2.f_22);
		unk_0x8A1AC8EBC73850C8(Local_66.f_2, Local_66.f_2.f_22);
	}
}

int func_20()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0xE50EB54E0F21BED0(uParam1, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	if (unk_0x3E72EB0926A107F9(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xA3EE9E61D762C09A(Var0, to_float(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x24A466C655E8588A(uParam0, 2))
	{
		if (unk_0x7F716EA884E75E49(uParam0))
		{
			if (unk_0x591190E69BE43117(iParam1, unk_0xD6E677FAD7521410(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x836F48E8C4A773BF(unk_0xFAA5505029C4B5A6(iParam1), iParam0, 120f) && unk_0x895779B17E5AA5FE(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xC49311A2A500FF09(unk_0xFAA5505029C4B5A6(iParam1), 0))
			{
				iVar1 = unk_0x75B58B38E45C6F9A(unk_0xFAA5505029C4B5A6(iParam1), 0);
			}
			if (unk_0x8A92595B8AA1D4E9(iParam0) || func_22(iVar1))
			{
				if (unk_0x591190E69BE43117(iParam1, unk_0xD6E677FAD7521410(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x836F48E8C4A773BF(unk_0xFAA5505029C4B5A6(iParam1), iParam0, 120f) && unk_0x895779B17E5AA5FE(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xD7196DD041C06559((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x27FC1B0077581B37(iParam0, -1, 0) != 0)
			{
				if (unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_23(unk_0x7D2B9E6A64637269(), iParam0, 1) < 40f)
						{
							if (unk_0xE5B011B4A813BDC4(unk_0x1146A9AE09CE2B14(), &uVar1))
							{
								if ((unk_0x55F5BD4ABD80B211(uVar1) && unk_0x611CD1312FD3CA66(iVar1) == iParam0) || (unk_0xA2CCAAC7F5CA3F49(iVar1) && unk_0xFAA5505029C4B5A6(iVar1) == unk_0x27FC1B0077581B37(iParam0, -1, 0)))
								{
									if ((unk_0xBBC3519C07015926(unk_0x7D2B9E6A64637269()) && unk_0x5C6675393464A814(0, 24)) || (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && unk_0x5C6675393464A814(0, 69)))
									{
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
	return 0;
}

float func_23(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	if (!unk_0xE50EB54E0F21BED0(uParam1, 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Var1, iParam2);
}

int func_24()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		if (unk_0xC49311A2A500FF09(Local_66, 0))
		{
			iVar1 = unk_0x75B58B38E45C6F9A(Local_66, 0);
			bVar0 = true;
		}
		else if (!unk_0xE50EB54E0F21BED0(unk_0x0BF0F8F3AD0993F6(), 0))
		{
			iVar1 = unk_0x0BF0F8F3AD0993F6();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0xE50EB54E0F21BED0(iVar1, 0))
		{
			if (unk_0x8954E9D0A9F6F8CF(iVar1, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0x8954E9D0A9F6F8CF(iVar1, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, 1, 0))
			{
				return 1;
			}
			else if (unk_0x8954E9D0A9F6F8CF(iVar1, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, 1, 0))
			{
				return 1;
			}
			else if (Local_66.f_199 != -1f)
			{
				if (unk_0x8954E9D0A9F6F8CF(iVar1, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	var uVar0;
	
	unk_0xBDC364B886846D11(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26()
{
	if (unk_0x636F1F53CC61D2C9(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	switch (iLocal_50)
	{
		case 0:
			break;
		
		case 2:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_112293.f_20033.f_20, 1))
					{
						switch (func_36("SHR_HOLDUP_1"))
						{
							case 2:
								func_34("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_294(&(Global_112293.f_20033.f_20), 1);
								iLocal_50 = 1;
								break;
						}
						if (iLocal_63 > 0)
						{
							if (func_33("SHR_HOLDUP_1"))
							{
								func_29("SHR_HOLDUP_1", 1);
								iLocal_50 = 4;
							}
						}
						if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_50 = 1;
					}
				}
				else if (func_33("SHR_HOLDUP_1"))
				{
					func_29("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_112293.f_20033.f_20, 2))
					{
						switch (func_36("SHR_SNK_TUT"))
						{
							case 2:
								func_34("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_294(&(Global_112293.f_20033.f_20), 2);
								iLocal_50 = 4;
								break;
						}
					}
					else
					{
						iLocal_50 = 4;
					}
				}
				else if (func_33("SHR_SNK_TUT"))
				{
					func_29("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_28("SHR_HOLDUP_1") || func_28("SHR_SNK_TUT"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
			if (func_33("SHR_SNK_TUT") && !func_1(Global_112293.f_20033.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
			}
			if (func_33("SHR_HOLDUP_1") && !func_1(Global_112293.f_20033.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
			}
			iLocal_50 = 4;
			break;
		
		case 4:
			if ((!func_303() && func_33("SHR_HOLDUP_1")) && !func_1(Global_112293.f_20033.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
				iLocal_50 = 2;
			}
			if ((!func_303() && func_33("SHR_SNK_TUT")) && !func_1(Global_112293.f_20033.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
				iLocal_50 = 2;
			}
			break;
	}
}

int func_28(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_29(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_110933 && iParam1)
	{
		if (func_28(sParam0) && !unk_0x48AD110DC0A6BE25())
		{
			unk_0x66AE54CE92457FEE(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_112293.f_20408.f_145 - 2))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_112293.f_20408.f_145 - 1));
			Global_112293.f_20408.f_145 = (Global_112293.f_20408.f_145 - 1);
			func_30();
			return;
		}
		iVar0++;
	}
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112293.f_20408.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[0])
			{
				Global_112293.f_20408.f_146[0] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[1])
			{
				Global_112293.f_20408.f_146[1] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[2])
			{
				Global_112293.f_20408.f_146[2] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_31(int iParam0)
{
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/].f_4), "", 16);
	Global_112293.f_20408[iParam0 /*16*/].f_8 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = -1;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = 0;
}

void func_32(int iParam0, int iParam1)
{
	Global_112293.f_20408[iParam0 /*16*/] = { Global_112293.f_20408[iParam1 /*16*/] };
	Global_112293.f_20408[iParam0 /*16*/].f_4 = { Global_112293.f_20408[iParam1 /*16*/].f_4 };
	Global_112293.f_20408[iParam0 /*16*/].f_8 = Global_112293.f_20408[iParam1 /*16*/].f_8;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = Global_112293.f_20408[iParam1 /*16*/].f_10;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = Global_112293.f_20408[iParam1 /*16*/].f_9;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = Global_112293.f_20408[iParam1 /*16*/].f_11;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = Global_112293.f_20408[iParam1 /*16*/].f_12;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = Global_112293.f_20408[iParam1 /*16*/].f_13;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = Global_112293.f_20408[iParam1 /*16*/].f_14;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = Global_112293.f_20408[iParam1 /*16*/].f_15;
}

int func_33(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xDA654EB115F9FF7D(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_20408[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112293.f_20408.f_145 < 9)
	{
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_4), sParam1, 16);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_8 = (unk_0xDFB7BFA6482FEE1E() + iParam3);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_9 = iParam5;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_11 = iParam6;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_12 = uParam2;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_13 = iParam7;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_14 = iParam8;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = ((unk_0xDFB7BFA6482FEE1E() + iParam3) + iParam4);
		}
		else
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = -1;
		}
		Global_112293.f_20408.f_145++;
		func_30();
	}
}

int func_36(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D(sParam0, &Global_110936))
	{
		return 1;
	}
	if (func_33(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_37()
{
	if (func_303())
	{
		if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
		{
		}
	}
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
	}
	switch (iLocal_51)
	{
		case 1:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_GREET", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 2:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 3:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 4:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 5:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 6:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 15:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 7:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 8:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 36:
			if (!func_20())
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 9:
			if (!func_20())
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "BUMP", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 10:
			if (!func_20())
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 11:
			if (!func_20())
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 14:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_91)
					{
						iLocal_51 = 7;
						iLocal_91 = 1;
					}
				}
				else if (func_44())
				{
					if (!iLocal_92)
					{
						iLocal_51 = 8;
						iLocal_92 = 1;
					}
				}
				if (!func_15(&(Local_66.f_483)))
				{
					func_12(&(Local_66.f_483));
				}
				else if (func_11(&(Local_66.f_483)))
				{
					func_43(&(Local_66.f_483));
				}
				else if (func_9(&(Local_66.f_483)) > 10f)
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!unk_0xECEC7528A52B4EE8(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							unk_0x4261814A9A26E86F(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_294(&(Local_66.f_470), 32);
					}
				}
			}
			else if (func_15(&(Local_66.f_483)) && !func_11(&(Local_66.f_483)))
			{
				func_42(&(Local_66.f_483));
			}
			break;
		
		case 12:
			if (!unk_0xCCCF5C35DC145D71(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					func_48(unk_0x7D2B9E6A64637269(), "SHOP_HOLDUP", 8);
				}
				func_13(&(Local_66.f_471));
				if (Local_66.f_2.f_11)
				{
					iLocal_51 = 37;
				}
				else
				{
					iLocal_51 = 13;
				}
			}
			else
			{
				unk_0xDDF04C83FF11A9B0(unk_0x7D2B9E6A64637269());
			}
			break;
		
		case 13:
			if (func_41(&(Local_66.f_471)) > 3f)
			{
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else if (Local_66.f_458)
				{
					iLocal_51 = 17;
				}
				else if (Local_66.f_459)
				{
					iLocal_51 = 18;
				}
				else if (Local_66.f_460)
				{
					iLocal_51 = 19;
				}
				else if (Local_66.f_461)
				{
					iLocal_51 = 20;
				}
				else if (Local_66.f_462)
				{
					iLocal_51 = 21;
				}
				else
				{
					iLocal_51 = 16;
				}
				func_40(&(Local_66.f_471));
			}
			break;
		
		case 16:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 17:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 18:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 19:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 20:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 21:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 22:
			if (!unk_0xCCCF5C35DC145D71(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 8);
				}
				func_294(&(Local_66.f_470), 256);
				iLocal_51 = 37;
			}
			break;
		
		case 23:
			if (!unk_0xCCCF5C35DC145D71(unk_0x7D2B9E6A64637269()))
			{
				if (Local_66.f_28.f_14)
				{
					if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
					{
						func_48(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_51 = 37;
			}
			else
			{
				unk_0xDDF04C83FF11A9B0(unk_0x7D2B9E6A64637269());
			}
			break;
		
		case 24:
			if (unk_0xBFCE58B2B3249999(Local_66.f_46.f_4[0], 0))
			{
				unk_0xE3F32DF0088B1EA4(Local_66.f_46.f_4[0], 0);
			}
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_46[0], 0))
			{
				func_48(Local_66.f_46[0], "SURROUNDED", 15);
			}
			iLocal_51 = 25;
			break;
		
		case 25:
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				func_48(unk_0x7D2B9E6A64637269(), "SPOT_POLICE", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 26:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 27:
			if (!func_20())
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_51 = 37;
			}
			else
			{
				func_38();
			}
			break;
		
		case 28:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 29:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 30:
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 31:
			if (!func_20())
			{
				iLocal_51 = 37;
			}
			break;
		
		case 33:
			if (!unk_0xCCCF5C35DC145D71(unk_0x7D2B9E6A64637269()) && !unk_0xCCCF5C35DC145D71(Local_66.f_2))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					func_48(unk_0x7D2B9E6A64637269(), "SHOP_HURRY", 11);
				}
				func_13(&(Local_66.f_471));
				iLocal_51 = 32;
			}
			break;
		
		case 32:
			if (func_41(&(Local_66.f_471)) > 1f)
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 34:
			if (!func_20())
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_SELL", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 35:
			if (!func_20())
			{
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_STEAL", 3);
				}
				iLocal_51 = 37;
			}
			break;
	}
}

void func_38()
{
	Global_19991 = 0;
	func_39();
}

void func_39()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_41(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_42(var uParam0)
{
	if (func_15(uParam0))
	{
		if (!func_11(uParam0))
		{
			uParam0->f_2 = (func_10(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
			unk_0x191DDA30577F440A(uParam0, 2);
		}
	}
}

void func_43(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			uParam0->f_1 = (func_10(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_2);
			uParam0->f_2 = 0f;
			unk_0xC664C0067EEAB8D1(uParam0, 2);
		}
	}
}

int func_44()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_214, Local_66.f_217, Local_66.f_220, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_46(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_47()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(iParam0, sParam1, func_49(iParam2), 1);
}

int func_49(int iParam0)
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

bool func_50()
{
	return Global_22529;
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_303() && iLocal_64 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x1131A9F5A725F45A(0))
		{
			iVar0 = unk_0x5F0847A02025CAB5(0, iVar2);
			switch (iVar0)
			{
				case 142:
					unk_0x53858F1E03A88AE1(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0xA2CCAAC7F5CA3F49(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(unk_0x7D2B9E6A64637269()))
							{
								func_294(&(Local_66.f_470), 8);
							}
						}
						if (!unk_0xA2CCAAC7F5CA3F49(iVar1) && !unk_0x55F5BD4ABD80B211(iVar1))
						{
							func_294(&(Local_66.f_470), 8);
						}
					}
					break;
				
				case 141:
					unk_0x53858F1E03A88AE1(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0xA2CCAAC7F5CA3F49(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(unk_0x7D2B9E6A64637269()))
							{
								func_294(&(Local_66.f_470), 8);
							}
						}
						if (!unk_0xA2CCAAC7F5CA3F49(iVar1) && !unk_0x55F5BD4ABD80B211(iVar1))
						{
							func_294(&(Local_66.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_52(int iParam0)
{
	return iParam0;
}

int func_53(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0xB71084333B418824(iParam0) == Local_66.f_185)
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(iParam0, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(iParam0, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(iParam0, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (unk_0x8954E9D0A9F6F8CF(iParam0, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54()
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_303())
		{
			if (!unk_0x234B68AC2E35ED5A(Local_66.f_162.f_18, 0))
			{
				iVar2 = 0;
				iVar3 = 0;
				iVar2 = unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_66.f_162)
				{
					Local_66.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_66.f_162)
					{
						if ((unk_0x419E13582192CFEA(uVar1[iVar3]) && !unk_0xECEC7528A52B4EE8(uVar1[iVar3])) && !unk_0xC49311A2A500FF09(uVar1[iVar3], 0))
						{
							if (unk_0xAB3E7E62A69D0DB3(uVar1[iVar3], unk_0xC66769C13C830856(unk_0x1146A9AE09CE2B14())))
							{
								Local_66.f_162[iVar0] = uVar1[iVar3];
								Local_66.f_162.f_5[iVar0 /*3*/] = { unk_0xD6E677FAD7521410(uVar1[iVar3], 1) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				unk_0x191DDA30577F440A(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((unk_0x419E13582192CFEA(Local_66.f_162[iVar0]) && !unk_0xECEC7528A52B4EE8(Local_66.f_162[iVar0])) && !unk_0xC49311A2A500FF09(Local_66.f_162[iVar0], 0))
				{
					if (unk_0x234B68AC2E35ED5A(Local_66.f_162.f_18, 1))
					{
						if ((unk_0xDFB7BFA6482FEE1E() % 1500) < 50)
						{
						}
						unk_0x4603196EEEA2355C(Local_66.f_162[iVar0], 0, 0);
						unk_0x3CBE9F07524C242D(Local_66.f_162[iVar0], 0, 0);
						unk_0xA2C015B68CE01357(Local_66.f_162[iVar0], 1);
						unk_0xDB8D6815E13996A9(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0x1F9D47D45E125FA6(Local_66.f_162[iVar0]))
					{
						unk_0x4603196EEEA2355C(Local_66.f_162[iVar0], 1, 0);
						unk_0x3CBE9F07524C242D(Local_66.f_162[iVar0], 1, 0);
						unk_0xA2C015B68CE01357(Local_66.f_162[iVar0], 0);
						unk_0xDB8D6815E13996A9(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0x234B68AC2E35ED5A(Local_66.f_162.f_18, 0))
			{
				unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_162)
			{
				if ((unk_0x419E13582192CFEA(Local_66.f_162[iVar0]) && !unk_0xECEC7528A52B4EE8(Local_66.f_162[iVar0])) && !unk_0xC49311A2A500FF09(Local_66.f_162[iVar0], 0))
				{
					if (!unk_0x1F9D47D45E125FA6(Local_66.f_162[iVar0]))
					{
						unk_0x4603196EEEA2355C(Local_66.f_162[iVar0], 1, 0);
						unk_0x3CBE9F07524C242D(Local_66.f_162[iVar0], 1, 0);
						unk_0xA2C015B68CE01357(Local_66.f_162[iVar0], 0);
						unk_0xDB8D6815E13996A9(Local_66.f_162[iVar0], Local_66.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()
{
	switch (iLocal_99)
	{
		case 0:
			if (func_303())
			{
				unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
				unk_0x068BDE31F7D112BB("oddjobs@shop_robbery@rob_till");
				unk_0x068BDE31F7D112BB("misscommon@response");
				unk_0xA08F3C300F9E3468(func_64(iLocal_80), false);
				unk_0x16E516CA9C88FF48(joaat("prop_choc_ego"));
				unk_0x16E516CA9C88FF48(joaat("prop_choc_meto"));
				unk_0x16E516CA9C88FF48(joaat("prop_choc_pq"));
				if (!bLocal_86)
				{
					unk_0x16E516CA9C88FF48(Local_66.f_46.f_26);
					unk_0x16E516CA9C88FF48(Local_66.f_46.f_27);
				}
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x952AB441FA24BF16("SCRIPT\MARKET_CASH_REGISTER", false, -1))
			{
				return;
			}
			if (!unk_0x0EC2B29D4172D225("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0x0EC2B29D4172D225("misscommon@response"))
			{
				return;
			}
			if (!unk_0xA9C0BBFB9CBB66F1(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0xA9C0BBFB9CBB66F1(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0xA9C0BBFB9CBB66F1(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_86)
			{
				if (!unk_0xA9C0BBFB9CBB66F1(Local_66.f_46.f_26))
				{
					return;
				}
				if (!unk_0xA9C0BBFB9CBB66F1(Local_66.f_46.f_27))
				{
					return;
				}
			}
			if (!func_62("SNK_MNU", iLocal_80, 0))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 4))
			{
				if (!func_1(Local_66.f_470, 1024))
				{
					uLocal_98[0] = unk_0x795434E153F90E41(func_61(0), func_60(0), 1, 1, 0);
					uLocal_98[1] = unk_0x795434E153F90E41(func_61(1), func_60(1), 1, 1, 0);
					uLocal_98[2] = unk_0x795434E153F90E41(func_61(2), func_60(2), 1, 1, 0);
					unk_0x4603196EEEA2355C(uLocal_98[0], 0, 0);
					unk_0x4603196EEEA2355C(uLocal_98[1], 0, 0);
					unk_0x4603196EEEA2355C(uLocal_98[2], 0, 0);
					func_294(&(Local_66.f_470), 1024);
				}
				func_294(&(Local_66.f_470), 4);
				iLocal_99 = 2;
			}
			break;
		
		case 2:
			if (!func_303())
			{
				func_56();
				func_301(&(Local_66.f_470), 4);
				iLocal_99 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 4))
			{
				func_56();
				func_301(&(Local_66.f_470), 4);
			}
			break;
	}
}

void func_56()
{
	unk_0xF9135F131C423364("oddjobs@shop_robbery@rob_till");
	unk_0xF9135F131C423364("misscommon@response");
	unk_0x315DA2F7337A8638("SCRIPT\MARKET_CASH_REGISTER");
	unk_0xB5F867E143F78583(func_64(iLocal_80));
	unk_0x824F744352C8BC82(joaat("prop_choc_ego"));
	unk_0x824F744352C8BC82(joaat("prop_choc_meto"));
	unk_0x824F744352C8BC82(joaat("prop_choc_pq"));
	func_57(1, iLocal_80);
	if (!bLocal_86)
	{
		unk_0x824F744352C8BC82(Local_66.f_46.f_26);
		unk_0x824F744352C8BC82(Local_66.f_46.f_27);
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
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
		unk_0xE498E37B41AEA1DF(9, false);
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
		func_58(&(Global_22670.f_5917[iVar0 /*10*/]));
		Global_22670.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22670.f_5978[iVar0] = 0;
	}
}

void func_58(var uParam0)
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

int func_59(var uParam0, bool bParam1, int iParam2)
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

Vector3 func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_66.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_66.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_62(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 1, iParam1))
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
	unk_0xA08F3C300F9E3468("CommonMenu", false);
	Global_22670.f_5871[iVar0] = 1;
	if (!unk_0xAD9D75DD073BF477("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA08F3C300F9E3468("MPShopSale", false);
		Global_22670.f_5878[iVar0] = 1;
		if (!unk_0xAD9D75DD073BF477("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22670.f_5917[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_22670.f_5917[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)
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

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_65()
{
	switch (iLocal_100)
	{
		case 0:
			if (func_303())
			{
				unk_0x068BDE31F7D112BB(Local_66.f_486.f_1);
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x0EC2B29D4172D225(Local_66.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_66.f_470, 16))
			{
				func_294(&(Local_66.f_470), 16);
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			if (!func_303() && iLocal_63 != 1)
			{
				unk_0xF9135F131C423364(Local_66.f_486.f_1);
				func_301(&(Local_66.f_470), 16);
				iLocal_100 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_470, 16))
			{
				unk_0xF9135F131C423364(Local_66.f_486.f_1);
				func_301(&(Local_66.f_470), 16);
			}
			break;
	}
}

void func_66()
{
	switch (iLocal_119)
	{
		case 0:
			if (Local_66.f_158)
			{
				iLocal_119 = 1;
			}
			break;
		
		case 1:
			if (func_303())
			{
				if (func_15(&(Local_66.f_158.f_1)))
				{
					func_40(&(Local_66.f_158.f_1));
				}
				if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
				{
				}
				if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
				{
					unk_0xA4A022C8F062BB1D(unk_0x1146A9AE09CE2B14());
				}
			}
			else
			{
				func_13(&(Local_66.f_158.f_1));
				iLocal_119 = 2;
			}
			break;
		
		case 2:
			if (func_303())
			{
				iLocal_119 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	char* sVar5;
	var uVar6;
	
	func_191();
	if (((((iLocal_58 == 1 || iLocal_58 == 2) && unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) == 0) && !unk_0xECEC7528A52B4EE8(Local_66)) && !func_190(-1082130432)) && !unk_0xECEC7528A52B4EE8(Local_66.f_2))
	{
		iVar1 = unk_0x5E7C0A485B91DB87(unk_0x7D2B9E6A64637269());
		iVar2 = unk_0x6352BFB5F372FA37(unk_0x7D2B9E6A64637269());
		if (((iLocal_64 != 2 && iLocal_64 != 3) && iLocal_64 != 4) && func_303())
		{
			if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
			}
		}
		iVar4 = 0;
		switch (iLocal_64)
		{
			case 0:
				if (func_1(Local_66.f_470, 4) && func_25(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_189(iLocal_80, &(Local_66.f_486.f_6), Local_66.f_486.f_9.f_2, &(Local_66.f_102.f_26[0 /*3*/]), &(Local_66.f_102.f_26[1 /*3*/]), &(Local_66.f_102.f_33), &(Local_66.f_102.f_36)))
					{
						Var3 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
						if (unk_0x0BABEFEA577FCFA4(Var3, Local_66.f_102.f_33, 1) < 5f)
						{
							if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), Local_66.f_102.f_26[0 /*3*/], Local_66.f_102.f_26[1 /*3*/], Local_66.f_102.f_36, 0, 1, 0))
							{
								if (unk_0x3E09537707C40210(unk_0x7D2B9E6A64637269(), Local_66.f_102.f_33, 135f))
								{
									if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
									{
									}
									if (((!func_28("SHR_HOLDUP_1") && !func_28("SHR_MENU")) && !func_50()) && func_188())
									{
										func_187("SHR_MENU");
									}
									Local_66.f_469 = -1;
									func_186(&(Local_66.f_469), 4, "SHR_MENU", 0, 0, 0, 0);
									unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 1);
									unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 0);
									iLocal_64 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0x3E09537707C40210(unk_0x7D2B9E6A64637269(), Local_66.f_102.f_33, 135f) || !func_25(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_28("SHR_MENU"))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					Local_66.f_102.f_22 = -1;
					func_185(&(Local_66.f_469));
					iLocal_64 = 0;
				}
				else if (((!func_28("SHR_MENU") && !func_28("SHR_HOLDUP_1")) && func_188()) && !func_184(Local_66.f_469, 0))
				{
					func_187("SHR_MENU");
				}
				if ((!unk_0xD9045D352687BE18(unk_0x7D2B9E6A64637269()) && !unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) && !unk_0xF49153DE3D8F6474(unk_0x7D2B9E6A64637269()))
				{
					if (func_182(Local_66.f_469, 1))
					{
						if (func_28("SHR_MENU"))
						{
							unk_0x66AE54CE92457FEE(1);
						}
						unk_0x191DDA30577F440A(&(Local_66.f_162.f_18), 1);
						func_13(&(Local_66.f_102.f_53));
						func_185(&(Local_66.f_469));
						func_181(23, 1);
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !unk_0xECEC7528A52B4EE8(Local_66.f_2))
						{
							unk_0xB0C1A43193C25F7A(unk_0x7D2B9E6A64637269(), Local_66.f_2, 0);
						}
						iLocal_64 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x0E8572B08CEB6A11(uLocal_118))
				{
					uLocal_118 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_180(iLocal_80, Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, &(Local_66.f_102), &(Local_66.f_102.f_3), &uVar6);
				unk_0x7508AE96782B0441(uLocal_118, Local_66.f_102);
				unk_0xBD833AA6EB59C81B(uLocal_118, Local_66.f_102.f_3, 2);
				unk_0xEF20E9A7B745D17A(uLocal_118, 35f);
				unk_0x9C9EC7CC88D050FA(uLocal_118, "HAND_SHAKE", 0.1f);
				unk_0x6FA8221C9D2ECB46(uLocal_118, 1);
				unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
				{
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
					func_294(&(Local_66.f_470), 2048);
				}
				Local_66.f_102.f_46 = func_64(iLocal_80);
				Local_66.f_102.f_23 = 0;
				Local_66.f_102.f_24 = 3;
				func_179(0, 0);
				func_178(1, 1, 0, 0, 0);
				func_177(1, 2, 1, 1, 1);
				func_176(func_5(iLocal_80));
				func_174(1, Local_66.f_102.f_46, Local_66.f_102.f_46);
				func_173();
				func_169(0, "SNK_ITEM1", 0, 1, 0, 0, 0);
				func_169(0, "ITEM_COST", 1, 1, 0, 0, 0);
				func_165(func_168(0), 0);
				func_169(1, "SNK_ITEM2", 0, 1, 0, 0, 0);
				func_169(1, "ITEM_COST", 1, 1, 0, 0, 0);
				func_165(func_168(1), 0);
				func_169(2, "SNK_ITEM3", 0, 1, 0, 0, 0);
				func_169(2, "ITEM_COST", 1, 1, 0, 0, 0);
				func_165(func_168(2), 0);
				func_164(0);
				func_163(Local_66.f_102.f_23, 1, 1);
				func_162("SNK_ITEM1_D", 0, 0);
				func_161(201, "ITEM_SELECT", -1, 0);
				func_161(202, "ITEM_BACK", -1, 0);
				func_161(203, "SNK_LIFT", -1, 0);
				iLocal_64 = 3;
				break;
			
			case 3:
				iVar4 = 0;
				if (unk_0x3640D836D145B814())
				{
					if (unk_0xE7F34EDB631EC2D3(2))
					{
						unk_0x366E7F593105797F(0, 1, 1);
						unk_0x366E7F593105797F(0, 2, 1);
						unk_0x681AE3DAF3A73058(0, 237, 1);
						unk_0x681AE3DAF3A73058(0, 238, 1);
						unk_0x681AE3DAF3A73058(0, 241, 1);
						unk_0x681AE3DAF3A73058(0, 242, 1);
						func_158(0, 0, 0, 1);
						func_157(0, -1, 1);
						if (func_156())
						{
							if (Global_4271211 != Local_66.f_102.f_23)
							{
								unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_66.f_102.f_23 = Global_4271211;
								func_163(Local_66.f_102.f_23, 1, 1);
								Local_66.f_102.f_37 = 0;
								Local_66.f_102.f_41 = 0;
								Local_66.f_102.f_42 = 0;
								sVar5 = func_155(Local_66.f_102.f_23);
								if (unk_0x49875FC4498CDA9A(sVar5))
								{
									func_162(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				func_116(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0, -1);
				func_112();
				if (unk_0x96DF114B59E81B9C(2, 201) || iVar4 == 1)
				{
					Local_66.f_102.f_37 = 1;
					Local_66.f_102.f_41 = 0;
					Local_66.f_102.f_42 = 0;
					if (Local_66.f_102.f_40 && Local_66.f_102.f_43)
					{
						Local_66.f_102.f_44 = 1;
						unk_0x9B0169E27978C1A2(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_108 = 1;
						iLocal_111 = Local_66.f_102.f_23;
						iLocal_64 = 4;
					}
					else
					{
						Local_66.f_102.f_44 = 0;
						unk_0x9B0169E27978C1A2(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (unk_0x96DF114B59E81B9C(2, 203))
				{
					iLocal_64 = 6;
					unk_0x9B0169E27978C1A2(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_111();
				}
				if (unk_0x96DF114B59E81B9C(2, 202) || unk_0x609EEF618F8CC869(2, 238))
				{
					iLocal_64 = 7;
					Local_66.f_102.f_45 = unk_0xDFB7BFA6482FEE1E();
					unk_0x9B0169E27978C1A2(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_111();
				}
				break;
			
			case 4:
				func_116(1, iLocal_80, 1, 0, 1, -1082130432, 0, 0, -1);
				switch (Local_66.f_102.f_23)
				{
					case 0:
						iVar0 = func_168(Local_66.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar2, 0);
						}
						else
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_168(Local_66.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar2, 0);
						}
						else
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_168(Local_66.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar2, 0);
						}
						else
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar1 + 15, 0);
						}
						break;
				}
				func_69(func_105(), 98, iVar0);
				if (!Local_66.f_102.f_39)
				{
					iLocal_51 = 34;
					Local_66.f_102.f_39 = 1;
				}
				func_13(&(Local_66.f_102.f_53));
				iLocal_64 = 3;
				break;
			
			case 5:
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					if (!bLocal_86)
					{
					}
					iLocal_64 = 6;
				}
				break;
			
			case 6:
				switch (Local_66.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar2, 0);
						}
						else
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar2, 0);
						}
						else
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar2, 0);
						}
						else
						{
							unk_0xC595907BB71C921D(unk_0x7D2B9E6A64637269(), iVar1 + 15, 0);
						}
						break;
				}
				unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 1, 0);
				func_181(23, 0);
				iLocal_51 = 35;
				if (!unk_0xECEC7528A52B4EE8(Local_66.f_2) && func_1(Local_66.f_470, 4))
				{
					unk_0x4261814A9A26E86F(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_64 = 8;
				break;
			
			case 7:
				if ((unk_0xDFB7BFA6482FEE1E() - Local_66.f_102.f_45) > 1000)
				{
					iLocal_64 = 0;
				}
				else
				{
					unk_0x203739B163D4D88E(2, 193);
					unk_0x203739B163D4D88E(2, 202);
					unk_0x203739B163D4D88E(2, 188);
					unk_0x203739B163D4D88E(2, 187);
					unk_0x203739B163D4D88E(2, 189);
					unk_0x203739B163D4D88E(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 8 && func_1(Local_66.f_470, 4))
		{
			if ((iLocal_64 == 3 || iLocal_64 == 2) || iLocal_64 == 4)
			{
				func_111();
			}
			iLocal_64 = 8;
		}
		if (func_28("SHR_SNACKS"))
		{
			unk_0x66AE54CE92457FEE(1);
			func_185(&(Local_66.f_469));
		}
		if (func_28("SHR_MENU"))
		{
			unk_0x66AE54CE92457FEE(1);
			func_185(&(Local_66.f_469));
		}
		if (unk_0x234B68AC2E35ED5A(Local_66.f_162.f_18, 1) && iLocal_101 < 2)
		{
			unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 1);
		}
		if (func_1(Local_66.f_470, 4))
		{
			func_68();
		}
	}
}

void func_68()
{
	if (func_1(Local_66.f_470, 2048))
	{
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
			}
			unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
			func_301(&(Local_66.f_470), 2048);
		}
	}
	Local_66.f_102.f_37 = 0;
	unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 1);
	if (unk_0x0E8572B08CEB6A11(uLocal_118))
	{
		unk_0xFE1DEC9C5734D0C0(uLocal_118, 0);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (func_104(iParam0) == 3)
	{
		return 0;
	}
	if (func_104(iParam0) == 4)
	{
		return 0;
	}
	return func_70(func_104(iParam0), 0, iParam1, iParam2, 0);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_103();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_102(99, 1);
					func_101(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_81(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_81(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xC34DC2DC2423B647())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_81(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_80(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_102(95, iParam3);
					break;
				
				case 1:
					func_102(97, iParam3);
					break;
				
				case 2:
					func_102(96, iParam3);
					break;
			}
			func_102(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_73(iVar1);
	}
	iVar5 = (Global_59272[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_59272[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_59272[iVar2] = 2147483647;
				}
				else
				{
					Global_59272[iVar2] = (Global_59272[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_101(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_59272[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_59272[iVar2];
			Global_59272[iVar2] = (Global_59272[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_2[Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_112293.f_20562.f_233[iVar2 /*69*/]++;
		Global_112293.f_20562.f_233[iVar2 /*69*/].f_1++;
		if (Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_112293.f_20562.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_72(iParam0);
	if (Global_42009 == 15)
	{
		func_71(0);
	}
	return 1;
}

void func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_112293.f_20562.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_59280[iVar0 /*3*/][0] = Global_112293.f_20562[iVar0];
		Global_59280.f_31[iVar0 /*3*/][0] = Global_112293.f_20562.f_11[iVar0];
		Global_59280.f_62[iVar0 /*3*/][0] = Global_112293.f_20562.f_22[iVar0];
		Global_59280.f_93[iVar0 /*3*/][0] = Global_112293.f_20562.f_33[iVar0];
		Global_59280.f_124[iVar0 /*3*/][0] = Global_112293.f_20562.f_44[iVar0];
		Global_59280.f_155[iVar0 /*3*/][0] = Global_112293.f_20562.f_55[iVar0];
		Global_59280.f_186[iVar0 /*3*/][0] = Global_112293.f_20562.f_66[iVar0];
		Global_59280.f_217[iVar0 /*3*/][0] = Global_112293.f_20562.f_77[iVar0];
		Global_59280.f_248[iVar0 /*3*/][0] = Global_112293.f_20562.f_88[iVar0];
		if (!bParam0)
		{
			Global_59280[iVar0 /*3*/][1] = Global_112293.f_20562[iVar0];
			Global_59280.f_31[iVar0 /*3*/][1] = Global_112293.f_20562.f_11[iVar0];
			Global_59280.f_62[iVar0 /*3*/][1] = Global_112293.f_20562.f_22[iVar0];
			Global_59280.f_93[iVar0 /*3*/][1] = Global_112293.f_20562.f_33[iVar0];
			Global_59280.f_124[iVar0 /*3*/][1] = Global_112293.f_20562.f_44[iVar0];
			Global_59280.f_155[iVar0 /*3*/][1] = Global_112293.f_20562.f_55[iVar0];
			Global_59280.f_186[iVar0 /*3*/][1] = Global_112293.f_20562.f_66[iVar0];
			Global_59280.f_217[iVar0 /*3*/][1] = Global_112293.f_20562.f_77[iVar0];
			Global_59280.f_248[iVar0 /*3*/][1] = Global_112293.f_20562.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_59272[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xAC4FD27671081628(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xAC4FD27671081628(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xAC4FD27671081628(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_73(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_79(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_79(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_79(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_79(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_76(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_76(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_76(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_76(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_76(8275, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_76(8276, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x02BFF15CAA701972())
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || unk_0x234B68AC2E35ED5A(Global_2097152[func_75() /*5557*/].f_675.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_20562.f_471), iParam0);
		unk_0xC664C0067EEAB8D1(&(Global_2097152[func_75() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_RED");
		unk_0x1896EC0B030A48A2(func_74(iParam0));
		unk_0x1664AA1696810AD6(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_77(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_78();
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

int func_78()
{
	return Global_1312763;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar10;
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
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_78();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_80(int iParam0)
{
	func_102(93, iParam0);
	func_102(29, iParam0);
	func_102(30, iParam0);
}

bool func_81(int iParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_83(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_83(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_83(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_83(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		iVar1 = func_82(8271, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		iVar3 = func_82(8272, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		iVar5 = func_82(8273, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x666C16A4ED8F3098();
		iVar7 = func_82(8274, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x666C16A4ED8F3098();
		iVar9 = func_82(8275, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x666C16A4ED8F3098();
		iVar11 = func_82(8276, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x02BFF15CAA701972())
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0);
	}
	return unk_0x234B68AC2E35ED5A(Global_2097152[func_75() /*5557*/].f_675.f_10, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_77(iParam1)];
		if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_78();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)
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

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_78();
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

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x4999364EFF3B7CFC(27))
	{
		return 0;
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD885BEFA31A18D47(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD885BEFA31A18D47(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xAC4FD27671081628(joaat("num_cash_spent"), iVar1, 1);
		func_100(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_87(27, 1);
	return 1;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_88(iParam0, iParam1);
}

int func_88(int iParam0, int iParam1)
{
	if (func_317(14) && !func_99(iParam0))
	{
		return 0;
	}
	if (unk_0x4999364EFF3B7CFC(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31595 != 0 && !Global_77248)
	{
		return 0;
	}
	if (func_98(&Global_4272779))
	{
		if (func_96(&Global_4272779, iParam0))
		{
			return 0;
		}
		if (func_89(&Global_4272779, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x6296023D689C5E64(iParam0))
		{
			return 0;
		}
		if (unk_0x4999364EFF3B7CFC(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_89(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_317(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	func_92(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x4999364EFF3B7CFC(iParam1))
	{
		return 0;
	}
	if (func_317(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_93(uParam0, iVar0);
		iVar0++;
	}
	func_94(uParam0, (Global_4272778 - 0.5f));
}

void func_93(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_94(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_95(var uParam0)
{
	return uParam0->f_80;
}

bool func_96(var uParam0, int iParam1)
{
	return func_97(uParam0, iParam1) != -1;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_98(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x37A2D5DD137657EB(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x74634292CAC72DD6(iParam0, iParam1);
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD885BEFA31A18D47(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0xAC4FD27671081628(iParam0, iVar0, 1);
}

void func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/])
	{
		unk_0xD885BEFA31A18D47(Global_57840[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xAC4FD27671081628(Global_57840[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_103()
{
	int iVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_59272[0] == iVar0)
		{
			Global_59272[0] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_59272[1] == iVar0)
		{
			Global_59272[1] = iVar0;
		}
		unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_59272[2] == iVar0)
		{
			Global_59272[2] = iVar0;
		}
	}
}

int func_104(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_17;
}

int func_105()
{
	func_106();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_106()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_109(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_108(unk_0x7D2B9E6A64637269());
			if (func_107(iVar0) && (!func_317(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_107(Global_112293.f_2361.f_539.f_4321))
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

bool func_107(int iParam0)
{
	return iParam0 < 3;
}

int func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_109(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_109(int iParam0)
{
	if (func_107(iParam0))
	{
		return func_110(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_110(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_111()
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
	}
	func_301(&(Local_66.f_470), 2048);
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
	unk_0xDF23DCD7A3E1B7A5(0);
	unk_0x3A13FD2813C8251F(0, 1065353216);
	func_181(23, 0);
	Local_66.f_102.f_37 = 0;
	unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 1);
	if (unk_0x0E8572B08CEB6A11(uLocal_118))
	{
		unk_0xFE1DEC9C5734D0C0(uLocal_118, 0);
	}
	unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
}

void func_112()
{
	char* sVar0;
	
	unk_0x203739B163D4D88E(2, 193);
	unk_0x203739B163D4D88E(2, 202);
	unk_0x203739B163D4D88E(2, 188);
	unk_0x203739B163D4D88E(2, 187);
	unk_0x203739B163D4D88E(2, 189);
	unk_0x203739B163D4D88E(2, 190);
	if (func_115())
	{
		Local_66.f_102.f_37 = 0;
		func_40(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23 = (Local_66.f_102.f_23 - 1);
		if (Local_66.f_102.f_23 < 0)
		{
			Local_66.f_102.f_23 = (Local_66.f_102.f_24 - 1);
		}
		unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_163(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_155(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (unk_0x49875FC4498CDA9A(sVar0))
		{
			func_162(sVar0, 0, 0);
		}
	}
	if (func_114())
	{
		Local_66.f_102.f_37 = 0;
		func_40(&(Local_66.f_102.f_53));
		Local_66.f_102.f_23++;
		if (Local_66.f_102.f_23 > (Local_66.f_102.f_24 - 1))
		{
			Local_66.f_102.f_23 = 0;
		}
		unk_0x9B0169E27978C1A2(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_163(Local_66.f_102.f_23, 1, 1);
		sVar0 = func_155(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 0;
		Local_66.f_102.f_42 = 0;
		if (unk_0x49875FC4498CDA9A(sVar0))
		{
			func_162(sVar0, 0, 0);
		}
	}
	if (!Local_66.f_102.f_41)
	{
		Local_66.f_102.f_40 = func_113(func_108(unk_0x7D2B9E6A64637269())) >= func_168(Local_66.f_102.f_23);
		Local_66.f_102.f_41 = 1;
	}
	if (!Local_66.f_102.f_42)
	{
		Local_66.f_102.f_43 = unk_0x5E7C0A485B91DB87(unk_0x7D2B9E6A64637269()) < unk_0x6352BFB5F372FA37(unk_0x7D2B9E6A64637269());
		Local_66.f_102.f_42 = 1;
	}
	if (Local_66.f_102.f_37)
	{
		if (func_41(&(Local_66.f_102.f_53)) < 3f)
		{
			if (Local_66.f_102.f_44)
			{
				func_162("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_66.f_102.f_40)
			{
				func_162("SNK_AFFORD", 0, 0);
			}
			else if (!Local_66.f_102.f_43)
			{
				func_162("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_66.f_102.f_37 = 0;
			Local_66.f_102.f_44 = 0;
			func_40(&(Local_66.f_102.f_53));
			sVar0 = func_155(Local_66.f_102.f_23);
			if (unk_0x49875FC4498CDA9A(sVar0))
			{
				func_162(sVar0, 0, 0);
			}
		}
	}
}

int func_113(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD885BEFA31A18D47(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD885BEFA31A18D47(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD885BEFA31A18D47(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_114()
{
	float fVar0;
	
	fVar0 = unk_0xBDAD193FD6CC54F5(2, 219);
	if ((fVar0 > 0.8f || unk_0x5C6675393464A814(2, 187)) || unk_0x86AF801D34E482FF(2, 242))
	{
		if (!func_15(&uLocal_115))
		{
			func_12(&uLocal_115);
			return 1;
		}
		else if (func_9(&uLocal_115) > 0.25f)
		{
			func_13(&uLocal_115);
			return 1;
		}
	}
	else if (func_15(&uLocal_115))
	{
		func_40(&uLocal_115);
	}
	return 0;
}

int func_115()
{
	float fVar0;
	
	fVar0 = unk_0xBDAD193FD6CC54F5(2, 219);
	if ((fVar0 < -0.8f || unk_0x5C6675393464A814(2, 188)) || unk_0x86AF801D34E482FF(2, 241))
	{
		if (!func_15(&uLocal_112))
		{
			func_12(&uLocal_112);
			return 1;
		}
		else if (func_9(&uLocal_112) > 0.25f)
		{
			func_13(&uLocal_112);
			return 1;
		}
	}
	else if (func_15(&uLocal_112))
	{
		func_40(&uLocal_112);
	}
	return 0;
}

void func_116(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar10;
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
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_152(0, bParam6))
	{
		return;
	}
	unk_0x53CE6C5893F65093(76, 84);
	unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22670)
	{
		if (func_150(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22670 = 0;
		}
	}
	if (unk_0x15173FB88ABC94F9(&(Global_22670.f_1)) == unk_0x15173FB88ABC94F9("HIDE"))
	{
		fVar57 = Global_22668;
	}
	else
	{
		fVar57 = (((Global_22668 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22669;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x32C9F8FADAAEEFE6(&iVar58, &iVar59);
		fVar61 = unk_0x451E904FC8FB5C54(0);
		if (func_149())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_149())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x24BE716BB6F8D262(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22670.f_5475 <= 1)
		{
			func_169(Global_22670.f_5475 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_22670.f_6271 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22670.f_5985)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_1)) == unk_0x15173FB88ABC94F9("HIDE"))
			{
				fVar49 = Global_22668;
			}
			else
			{
				if (Global_22670)
				{
					StringCopy(&cVar63, func_148(29), 64);
					StringCopy(&cVar64, func_145(29, 1), 64);
					if (unk_0x15173FB88ABC94F9(&(Global_22670.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_144(Global_22667, Global_22668, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0xDDD5C8D7152E128F(&cVar63, &cVar64, (Global_22667 + (fParam5 * 0.5f)), (Global_22668 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0xDDD5C8D7152E128F(&cVar63, &cVar64, (Global_22667 + (fParam5 * 0.5f)), (Global_22668 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22670.f_8644)
				{
					iVar1 = Global_22670.f_8640;
					iVar2 = Global_22670.f_8641;
					iVar3 = Global_22670.f_8642;
					iVar4 = Global_22670.f_8643;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_144(Global_22667, (Global_22668 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22668 + fVar55) + 0.034722f) + 0f);
				if (unk_0x15173FB88ABC94F9(&(Global_22670.f_1)) != 0)
				{
					func_143();
					unk_0xE5A80C83FA218963(&(Global_22670.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22670.f_68)
					{
						if (Global_22670.f_5[iVar14] == 2)
						{
							unk_0x38CD3C04C877C35F(Global_22670.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22670.f_5[iVar14] == 3)
						{
							unk_0x21300A5159EC89B1(Global_22670.f_14[iVar16], Global_22670.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22670.f_5[iVar14] == 1)
						{
							unk_0x1896EC0B030A48A2(&(Global_22670.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22670.f_5[iVar14] == 8)
						{
							unk_0x1896EC0B030A48A2(&(Global_22670.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22670.f_5[iVar14] == 5)
						{
							unk_0xA91D83F2CC1345A6(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22670.f_5[iVar14] == 6)
						{
							unk_0x1896EC0B030A48A2(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22670.f_5[iVar14] == 7)
						{
							unk_0xA91D83F2CC1345A6(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22670.f_5[iVar14] == 9)
						{
							unk_0xA91D83F2CC1345A6(&(Global_22670.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xBC68FBDA73BBB4A6((Global_22667 + 0.00390625f), ((Global_22668 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22670.f_5992)
				{
					func_143();
					func_141((((Global_22667 + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_22670.f_5993, Global_22670.f_5994)), ((Global_22668 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22670.f_5993, Global_22670.f_5994);
				}
				else if (Global_22670.f_5988 > Global_22670.f_5482)
				{
					if (Global_22670.f_5991 != 0)
					{
						func_143();
						func_141((((Global_22667 + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_22670.f_5991, Global_22670.f_5990)), ((Global_22668 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22670.f_5991, Global_22670.f_5990);
					}
				}
			}
			iVar6 = Global_22670.f_5995;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22670.f_8654)
			{
				iVar1 = Global_22670.f_8650;
				iVar2 = Global_22670.f_8651;
				iVar3 = Global_22670.f_8652;
				iVar4 = Global_22670.f_8653;
			}
			else
			{
				unk_0xB4D5E37C91862216(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22670.f_5482 && iVar6 <= Global_22670.f_5475)
			{
				if (iVar6 >= 0)
				{
					if (Global_22670.f_5742[iVar6])
					{
						if (Global_22670.f_5613[iVar6] && iVar6 != Global_22670.f_5995)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22670.f_6002[iVar6] != 0f)
						{
							fVar54 = Global_22670.f_6002[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Bgd", (Global_22667 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22670.f_5988 > Global_22670.f_5482)
			{
				if (Global_22670.f_8659)
				{
					iVar1 = Global_22670.f_8655;
					iVar2 = Global_22670.f_8656;
					iVar3 = Global_22670.f_8657;
					iVar4 = Global_22670.f_8658;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_144(Global_22667, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x345540F6D1175D5D("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22670.f_8672)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xB4D5E37C91862216(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDDD5C8D7152E128F("CommonMenu", "shop_arrows_upANDdown", (Global_22667 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_4947)) != 0 && Global_22670.f_5023 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22667 + 0.0046875f);
				if (Global_22670.f_5025 != 0)
				{
					func_150(Global_22670.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22667 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar40);
				unk_0x9681B7444691EB29(&(Global_22670.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22670.f_5019)
				{
					if (Global_22670.f_4953[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_22670.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22670.f_4953[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_22670.f_4962[iVar16], Global_22670.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22670.f_4953[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5F1D2FA6FBF403D1(fVar40, (fVar49 + 0.00277776f));
				unk_0xB4D5E37C91862216(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_22667, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22670.f_8664)
				{
					iVar1 = Global_22670.f_8660;
					iVar2 = Global_22670.f_8661;
					iVar3 = Global_22670.f_8662;
					iVar4 = Global_22670.f_8663;
				}
				else
				{
					unk_0xB4D5E37C91862216(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Bgd", (Global_22667 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_140(fVar40);
				unk_0xE5A80C83FA218963(&(Global_22670.f_4947));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22670.f_5019)
				{
					if (Global_22670.f_4953[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_22670.f_4958[iVar15]);
						iVar15++;
					}
					else if (Global_22670.f_4953[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_22670.f_4962[iVar16], Global_22670.f_4966[iVar16]);
						iVar16++;
					}
					else if (Global_22670.f_4953[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22670.f_4953[iVar14] == 8)
					{
						unk_0x1896EC0B030A48A2(&(Global_22670.f_4970[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBC68FBDA73BBB4A6(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22670.f_5025 != 0)
				{
					func_150(Global_22670.f_5025, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_22670.f_5025, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xDDD5C8D7152E128F(func_148(Global_22670.f_5025), func_145(Global_22670.f_5025, 1), ((Global_22667 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22670.f_5023 > 0)
				{
					if ((unk_0xDFB7BFA6482FEE1E() - Global_22670.f_5024) > Global_22670.f_5023)
					{
						StringCopy(&(Global_22670.f_4947), "", 24);
						Global_22670.f_5023 = -1;
					}
				}
			}
			if (unk_0x15173FB88ABC94F9(&(Global_4271135.f_21)) != 0 && Global_4271135.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22667 + 0.0046875f);
				if (Global_4271135.f_67 != 0)
				{
					func_150(Global_4271135.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22667 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar40);
				unk_0x9681B7444691EB29(&(Global_4271135.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4271135.f_61)
				{
					if (Global_4271135.f_25[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_4271135.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4271135.f_25[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_4271135.f_34[iVar16], Global_4271135.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4271135.f_25[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 8)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5F1D2FA6FBF403D1(fVar40, (fVar49 + 0.00277776f));
				unk_0xB4D5E37C91862216(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_22667, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22670.f_8664)
				{
					iVar1 = Global_22670.f_8660;
					iVar2 = Global_22670.f_8661;
					iVar3 = Global_22670.f_8662;
					iVar4 = Global_22670.f_8663;
				}
				else
				{
					unk_0xB4D5E37C91862216(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Bgd", (Global_22667 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_140(fVar40);
				unk_0xE5A80C83FA218963(&(Global_4271135.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4271135.f_61)
				{
					if (Global_4271135.f_25[iVar14] == 2)
					{
						unk_0x38CD3C04C877C35F(Global_4271135.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4271135.f_25[iVar14] == 3)
					{
						unk_0x21300A5159EC89B1(Global_4271135.f_34[iVar16], Global_4271135.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4271135.f_25[iVar14] == 1)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 8)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 5)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 6)
					{
						unk_0x1896EC0B030A48A2(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 7)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4271135.f_25[iVar14] == 9)
					{
						unk_0xA91D83F2CC1345A6(&(Global_4271135.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xBC68FBDA73BBB4A6(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4271135.f_67 != 0)
				{
					func_150(Global_4271135.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_4271135.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xDDD5C8D7152E128F(func_148(Global_4271135.f_67), func_145(Global_4271135.f_67, 1), ((Global_22667 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x7E12948ACF187619(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4271135.f_65 > 0)
				{
					if ((unk_0xDFB7BFA6482FEE1E() - Global_4271135.f_66) > Global_4271135.f_65)
					{
						StringCopy(&(Global_4271135.f_21), "", 16);
						Global_4271135.f_65 = -1;
					}
				}
			}
			func_132(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x53CE6C5893F65093(76, 84);
			unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22670.f_5985)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22670.f_5475;
			if (Global_22670.f_5986)
			{
				iVar66 = (Global_22670.f_5989 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22670.f_6002[iVar6] != 0f)
				{
					fVar54 = Global_22670.f_6002[iVar6];
				}
				if (Global_22670.f_5986)
				{
					iVar6 = Global_22670.f_8295[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22670.f_5995 && iVar9 < Global_22670.f_5482)
				{
					bVar33 = true;
					if (Global_22670.f_5996 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22670.f_5613[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22670.f_6136[iVar6] = fVar35;
				fVar34 = (Global_22667 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22670.f_5996 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22670.f_8666)
					{
						unk_0xB4D5E37C91862216(Global_22670.f_8665, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xB4D5E37C91862216(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xDDD5C8D7152E128F("CommonMenu", "Gradient_Nav", (Global_22667 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22670.f_6134 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22670.f_5483)
				{
					if (unk_0x234B68AC2E35ED5A(Global_22670.f_5346[iVar6], iVar8) || Global_22670.f_5313[iVar8] == 5)
					{
						if (Global_22670.f_5986)
						{
							iVar19 = Global_22670.f_8311[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar20 = Global_22670.f_8352[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar21 = Global_22670.f_8393[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar22 = Global_22670.f_8434[((iVar9 * Global_22670.f_5483) + iVar8)];
							iVar23 = Global_22670.f_8475[((iVar9 * Global_22670.f_5483) + iVar8)];
						}
						else
						{
							Global_22670.f_8311[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar19;
							Global_22670.f_8352[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar20;
							Global_22670.f_8393[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar21;
							Global_22670.f_8434[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar22;
							Global_22670.f_8475[((iVar9 * Global_22670.f_5483) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22670.f_6268[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22670.f_6265[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22670.f_6268[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22670.f_6265[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22670.f_5319[iVar8] != -1f)
						{
							fVar34 = ((Global_22667 + 0.0046875f) + Global_22670.f_5319[iVar8]);
						}
						if ((iVar8 < 4 && Global_22670.f_5319[iVar8 + 1] != -1f) && fVar34 < Global_22670.f_5319[iVar8 + 1])
						{
							fVar44 = (Global_22670.f_5319[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22667 + Global_22669) - 0.0046875f) - fVar34);
						}
						if ((Global_22670.f_5332[iVar8] && Global_22670.f_6131) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22670.f_5313[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22670.f_5986)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_22670.f_2124[iVar24])
											{
												bVar51 = true;
											}
											func_130(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xF942A67633C39BF7(&(Global_22670.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x1896EC0B030A48A2(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x38CD3C04C877C35F(Global_22670.f_4175[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x21300A5159EC89B1(Global_22670.f_4432[(iVar21 + iVar27)], Global_22670.f_4561[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0xB12E7ADB99F5BEEB(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_150(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22670.f_4690[(iVar22 + iVar14)] == 2 || Global_22670.f_4690[(iVar22 + iVar14)] == 51) || Global_22670.f_4690[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22670.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
										Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar41;
										Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar42;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22670.f_5340[iVar69] == 2)
												{
													Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar69)] = (Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar69)] - Global_22670.f_5325[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar41 = Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar42 = Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5 || Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_22670.f_2124[iVar24])
										{
											bVar51 = true;
										}
										func_130(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22670.f_8670 && Global_22670.f_8671 == iVar6)
										{
											func_129(bVar32);
										}
										unk_0xE5A80C83FA218963(&(Global_22670.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x1896EC0B030A48A2(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xA91D83F2CC1345A6(&(Global_2464040[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x38CD3C04C877C35F(Global_22670.f_4175[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x21300A5159EC89B1(Global_22670.f_4432[(iVar21 + iVar27)], Global_22670.f_4561[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22670.f_4690[(iVar22 + iVar28)] == 2 || Global_22670.f_4690[(iVar22 + iVar28)] == 51) || Global_22670.f_4690[(iVar22 + iVar28)] == 61)
											{
												if (func_150(Global_22670.f_4690[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_150(Global_22670.f_4690[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_139(Global_22670.f_4690[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22670.f_5340[iVar8] == 2)
															{
																unk_0xDDD5C8D7152E128F(func_148(Global_22670.f_4690[(iVar22 + iVar28)]), func_145(Global_22670.f_4690[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xDDD5C8D7152E128F(func_148(Global_22670.f_4690[(iVar22 + iVar28)]), func_145(Global_22670.f_4690[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22670.f_5340[iVar8] == 2)
										{
											unk_0xBC68FBDA73BBB4A6(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xBC68FBDA73BBB4A6((fVar34 + fVar40), fVar35, 0);
											if (func_128() && unk_0x636F1F53CC61D2C9(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_22670.f_2124[iVar24])
													{
														bVar51 = true;
													}
													func_130(0, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0x9E8B548C035F223D(0f, (0.35f * 0.7f));
													unk_0x968AC0BD45D79791(255, 255, 255, 150);
													unk_0x80B2E30CC8B794C0((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0xE5A80C83FA218963(&cVar75);
													unk_0x38CD3C04C877C35F((Global_22670.f_5995 + iVar30));
													unk_0xBC68FBDA73BBB4A6((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22670.f_4690[(iVar22 + iVar14)] != 2 && Global_22670.f_4690[(iVar22 + iVar14)] != 51) && Global_22670.f_4690[(iVar22 + iVar14)] != 61)
											{
												if (func_150(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_150(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_139(Global_22670.f_4690[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22670.f_4690[(iVar22 + iVar14)] == 30)
															{
																unk_0xDDD5C8D7152E128F(func_148(Global_22670.f_4690[(iVar22 + iVar14)]), func_145(Global_22670.f_4690[(iVar22 + iVar14)], bVar32), (Global_22667 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22670.f_5340[iVar8] == 2)
															{
																unk_0xDDD5C8D7152E128F(func_148(Global_22670.f_4690[(iVar22 + iVar14)]), func_145(Global_22670.f_4690[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0xDDD5C8D7152E128F(func_148(Global_22670.f_4690[(iVar22 + iVar14)]), func_145(Global_22670.f_4690[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22670.f_2381[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22670.f_5986)
									{
										func_130(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22670.f_8670 && Global_22670.f_8671 == iVar6)
										{
											func_129(bVar32);
										}
										unk_0xF942A67633C39BF7("NUMBER");
										unk_0x38CD3C04C877C35F(Global_22670.f_4175[iVar20]);
										fVar41 = unk_0xB12E7ADB99F5BEEB(1);
										fVar40 = 0f;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22670.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
										Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar41 = Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_130(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
										func_127((fVar34 + fVar40), fVar35, "NUMBER", Global_22670.f_4175[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22670.f_5986)
									{
										func_130(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22670.f_8670 && Global_22670.f_8671 == iVar6)
										{
											func_129(bVar32);
										}
										unk_0xF942A67633C39BF7("NUMBER");
										unk_0x21300A5159EC89B1(Global_22670.f_4432[iVar21], Global_22670.f_4561[iVar21]);
										fVar41 = unk_0xB12E7ADB99F5BEEB(1);
										fVar40 = 0f;
										if (Global_22670.f_5340[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22670.f_5340[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
										Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
										fVar41 = Global_22670.f_8557[((iVar9 * Global_22670.f_5483) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xDDD5C8D7152E128F(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_130(bVar32, Global_22670.f_1610[iVar24], Global_22670.f_1867[iVar24], bVar53, 0, 0, 0);
									func_126((fVar34 + fVar40), fVar35, "NUMBER", Global_22670.f_4432[iVar21], Global_22670.f_4561[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_150(Global_22670.f_4690[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22670.f_5986)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22670.f_5340[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22670.f_5340[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar40;
											Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22670.f_8516[((iVar9 * Global_22670.f_5483) + iVar8)];
											fVar42 = Global_22670.f_8598[((iVar9 * Global_22670.f_5483) + iVar8)];
										}
										if (bVar52)
										{
											if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22670.f_5340[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xDDD5C8D7152E128F(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xDDD5C8D7152E128F(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_150(Global_22670.f_4690[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(Global_22670.f_4690[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xDDD5C8D7152E128F(func_148(Global_22670.f_4690[iVar22]), func_145(Global_22670.f_4690[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_125(Global_22670.f_4690[iVar22])), (fVar37 * func_125(Global_22670.f_4690[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22670.f_5313[iVar8] == 5)
						{
							if (Global_22670.f_5325[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22670.f_5325[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22670.f_5325[iVar8]);
							if (Global_22670.f_5332[iVar8])
							{
								if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22670.f_5325[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22670.f_8295[iVar9] = iVar6;
						Global_22670.f_5997 = iVar6;
						iVar9++;
						if (Global_22670.f_5613[iVar6])
						{
							iVar13++;
						}
						if (Global_22670.f_6002[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22670.f_6002[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22670.f_5985)
					{
						Global_22670.f_5742[iVar6] = 1;
						if (Global_22670.f_5484[iVar6])
						{
							if (bVar32)
							{
								Global_22670.f_5991 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22670.f_5991 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22670.f_5985)
			{
				Global_22670.f_5987 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22670.f_5990 = iVar11;
				Global_22670.f_5988 = iVar10;
				Global_22670.f_5985 = 1;
			}
		}
		if (!Global_22670.f_5986)
		{
			Global_22670.f_5989 = iVar9;
			Global_22670.f_5986 = 1;
		}
		iVar5++;
	}
	Global_22670.f_6133 = fVar49;
	Global_22670.f_6135 = unk_0xDFB7BFA6482FEE1E();
	unk_0x643A5EAD42A4060C(Global_22670.f_6133);
	if (!Global_22670.f_8639)
	{
		func_118(0);
	}
	Global_22670.f_8639 = 0;
	if (bParam2)
	{
		unk_0xEFD424FDD55A6EC7(10);
	}
	unk_0xEFD424FDD55A6EC7(6);
	unk_0xEFD424FDD55A6EC7(7);
	unk_0xEFD424FDD55A6EC7(9);
	unk_0xEFD424FDD55A6EC7(8);
	if (bParam0)
	{
		func_117(1);
	}
	unk_0x17552FF90A99ABEA();
}

void func_117(int iParam0)
{
	Global_1380638.f_1121 = iParam0;
}

void func_118(int iParam0)
{
	if (func_124())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_123(0))
		{
			func_119(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_119(int iParam0)
{
	if (func_124())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_122())
		{
			func_121(1, 1);
		}
		else
		{
			func_121(0, 0);
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
	if (!func_120())
	{
		Global_19798.f_1 = 3;
	}
}

int func_120()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_121(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_123(0))
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

bool func_122()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_123(int iParam0)
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

bool func_124()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

float func_125(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_126(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x21300A5159EC89B1(uParam3, uParam4);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, 0);
}

void func_127(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x38CD3C04C877C35F(iParam3);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, iParam4);
}

var func_128()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

void func_129(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xB4D5E37C91862216(Global_22670.f_8667[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xB4D5E37C91862216(Global_22670.f_8667[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
}

void func_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_131(Global_22670.f_6268[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xB4D5E37C91862216(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xB4D5E37C91862216(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x968AC0BD45D79791(155, 155, 155, 255);
		}
		else
		{
			unk_0x968AC0BD45D79791(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x968AC0BD45D79791(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x968AC0BD45D79791(155, 155, 155, 255);
	}
	else
	{
		unk_0x968AC0BD45D79791(155, 155, 155, 255);
	}
	unk_0x9E8B548C035F223D(0f, 0.35f);
	unk_0xD7BF3EFD7B2022EC(1);
	if (bParam5)
	{
		unk_0x9E8B548C035F223D(0f, 0.425f);
		unk_0x57BF57F8A1C8167A(4);
	}
	else if (bParam6)
	{
		unk_0x9E8B548C035F223D(0f, 0.425f);
		unk_0x57BF57F8A1C8167A(6);
	}
	else
	{
		unk_0x57BF57F8A1C8167A(0);
	}
	unk_0x70D76B2EE444F0BD(0f, 1f);
	unk_0x7160B751D113C8C6(0);
	unk_0xEC535F8A76FD9ED3(0, 0, 0, 0, 0);
	unk_0x515B0629DCBB6181(0, 0, 0, 0, 0);
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_152(bParam4, bParam8))
	{
		return;
	}
	if (func_137())
	{
		return;
	}
	if (unk_0xFEABE4F1525A0A08())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_135(unk_0x1146A9AE09CE2B14(), 0))
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
					func_134(&(Global_22670.f_5028[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x15173FB88ABC94F9(&(Global_22670.f_5221[iVar2 /*4*/])) == unk_0x15173FB88ABC94F9("PREV"))
					{
						func_134(&(Global_22670.f_5028[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22670.f_5270[iVar1] == -1)
					{
						func_133(&(Global_22670.f_5221[iVar1 /*4*/]));
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
				func_134(&Global_4271135);
				if (Global_4271135.f_20 == -1)
				{
					func_133(&(Global_4271135.f_16));
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

void func_133(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_134(var uParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

bool func_135(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_136(-1, 0) == 8;
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

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_78();
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

int func_137()
{
	struct<3> Var0;
	
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	if (func_138())
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

int func_138()
{
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xB4D5E37C91862216(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0xB4D5E37C91862216(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_140(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x57BF57F8A1C8167A(0);
	unk_0x9E8B548C035F223D(0f, 0.35f);
	unk_0x403A87C18C91C19E(2);
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iVar3);
	unk_0x70D76B2EE444F0BD(fParam0, ((Global_22667 + Global_22669) - 0.0046875f));
	unk_0x7160B751D113C8C6(0);
	unk_0xEC535F8A76FD9ED3(0, 0, 0, 0, 0);
	unk_0x515B0629DCBB6181(0, 0, 0, 0, 0);
}

void func_141(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0x38CD3C04C877C35F(uParam3);
	unk_0x38CD3C04C877C35F(uParam4);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, 0);
}

float func_142(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x4030103C8B148AFC(sParam0))
	{
		if (unk_0x15173FB88ABC94F9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_143();
	unk_0xF942A67633C39BF7(sParam0);
	unk_0x38CD3C04C877C35F(uParam1);
	unk_0x38CD3C04C877C35F(uParam2);
	return unk_0xB12E7ADB99F5BEEB(1);
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xB4D5E37C91862216(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22670.f_8649)
	{
		iVar0 = Global_22670.f_8645;
		iVar1 = Global_22670.f_8646;
		iVar2 = Global_22670.f_8647;
		iVar3 = Global_22670.f_8648;
	}
	unk_0x57BF57F8A1C8167A(0);
	unk_0x9E8B548C035F223D(0f, 0.35f);
	unk_0x968AC0BD45D79791(iVar0, iVar1, iVar2, iVar3);
	unk_0x70D76B2EE444F0BD((Global_22667 + 0.0046875f), ((Global_22667 + Global_22669) - 0.0046875f));
	unk_0x7160B751D113C8C6(0);
	unk_0xEC535F8A76FD9ED3(0, 0, 0, 0, 0);
	unk_0x515B0629DCBB6181(0, 0, 0, 0, 0);
}

void func_144(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x80B2E30CC8B794C0((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_145(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xAB6A270F84A8781E(&(Global_22670.f_7286[iParam0 /*16*/])))
	{
		if (unk_0x15173FB88ABC94F9(&(Global_22670.f_7286[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_147(unk_0x1146A9AE09CE2B14()) };
			if (unk_0x72021D50470D04D2(&Var2, &uVar1))
			{
				return func_146(&uVar1);
			}
		}
		else
		{
			return func_146(&(Global_22670.f_7286[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_146(var uParam0)
{
	return uParam0;
}

struct<13> func_147(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

char* func_148(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xAB6A270F84A8781E(&(Global_22670.f_6277[iParam0 /*16*/])))
	{
		if (unk_0x15173FB88ABC94F9(&(Global_22670.f_6277[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_147(unk_0x1146A9AE09CE2B14()) };
			unk_0x72021D50470D04D2(&Var1, &uVar0);
			return func_146(&uVar0);
		}
		else
		{
			return func_146(&(Global_22670.f_6277[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_149()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x32C9F8FADAAEEFE6(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_148(iParam0), 64);
	StringCopy(&cVar1, func_145(iParam0, bParam1), 64);
	if (unk_0x15173FB88ABC94F9(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x32C9F8FADAAEEFE6(&iVar2, &iVar3);
			fVar5 = unk_0x451E904FC8FB5C54(0);
			if (func_149())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_149())
			{
				fVar4 = 1f;
			}
			if (unk_0x636F1F53CC61D2C9(joaat("director_mode")) > 0)
			{
				unk_0x24BE716BB6F8D262(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x24BE716BB6F8D262(&iVar2, &iVar3);
		}
		Var7 = { unk_0x345540F6D1175D5D(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_151(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_151(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x15173FB88ABC94F9(&(Global_22670.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x928E0D7BE0057D1C() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22669)
			{
				*fParam4 = (*fParam4 * (Global_22669 / *fParam3));
				*fParam3 = Global_22669;
			}
		}
		return 1;
	}
	return 0;
}

float func_151(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_152(bool bParam0, bool bParam1)
{
	if (Global_2441237.f_2012.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE0A6F16F546C8274() || (func_154(8, -1) && func_153() != 65)) || (unk_0xC62ED852B1172A41() != 0 && !bParam1)) || (unk_0xF471787D45ADC2C1() && !bParam0)) || unk_0x1C8EA7DABB529A31()) || Global_77508) || Global_22670.f_8673) || unk_0xD76BEAE1A33E3251()) || Global_99422.f_1441)
	{
		return 0;
	}
	return 1;
}

int func_153()
{
	return Global_1312836;
}

bool func_154(int iParam0, int iParam1)
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

char* func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_156()
{
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (Global_4271211 > -1)
		{
			if (unk_0x86AF801D34E482FF(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704() || unk_0xD76BEAE1A33E3251())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0xA944664D6E32BDF8();
	}
	if (Global_4271211 == -6)
	{
		unk_0x16EB94D2E38AD136(4);
		if (iParam0 && unk_0x5C6675393464A814(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4271211 = -1;
			return 0;
		}
	}
	if (((Global_4271211 > -1 || Global_4271211 == -3) || Global_4271211 == -2) || unk_0xE83E493D593614A6())
	{
		unk_0x16EB94D2E38AD136(1);
		return 0;
	}
	if (Global_4271211 == -1 && iParam0)
	{
		if (unk_0x5C6675393464A814(2, 237))
		{
			unk_0x16EB94D2E38AD136(4);
			Global_4271211 = -6;
			return 1;
		}
		else
		{
			unk_0x16EB94D2E38AD136(3);
			return 0;
		}
	}
	unk_0x16EB94D2E38AD136(1);
	return 0;
}

void func_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0x0D901EFDFD7EF9D5(2))
	{
		Global_4271211 = -1;
		return;
	}
	unk_0xB6C1B9E2FFDAEEDF(1);
	fVar0 = Global_22667;
	fVar2 = (fVar0 + Global_22669);
	fVar3 = Global_22670.f_5987;
	fVar1 = (Global_22670.f_5987 - (IntToFloat(Global_22670.f_5989) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22670.f_5989 < 1)
	{
		fVar1 = (Global_22670.f_5987 - 0.034722f);
	}
	unk_0x53CE6C5893F65093(76, 84);
	unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0x3B89B4AD3274A55C(fVar0, fVar1, &fVar0, &fVar1);
	unk_0x3B89B4AD3274A55C(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x17552FF90A99ABEA();
	func_160();
	if (Global_4271211 == -6)
	{
		return;
	}
	Global_4271211 = -1;
	fVar7 = Global_4271205;
	fVar8 = Global_4271206;
	if (Global_22670.f_5990 > Global_22670.f_5989)
	{
		if (((Global_4271205 >= fVar0 && Global_4271205 <= fVar2) && Global_4271206 >= fVar3) && Global_4271206 < (fVar3 + fVar6))
		{
			Global_4271211 = -2;
			if (bParam3)
			{
				func_159(0);
			}
			return;
		}
		if (((Global_4271205 >= fVar0 && Global_4271205 <= fVar2) && Global_4271206 >= (fVar3 + fVar6)) && Global_4271206 < (fVar3 + 0.034722f))
		{
			Global_4271211 = -3;
			if (bParam3)
			{
				func_159(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_22670.f_5990 == -1)
		{
			Global_4271211 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22670.f_5989);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0x53CE6C5893F65093(76, 84);
				unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
				func_144(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22669, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x17552FF90A99ABEA();
			}
		}
		Global_4271211 = Global_22670.f_8295[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4271211 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4271211 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4271211 = -4;
		return;
	}
	Global_4271211 = -1;
}

void func_159(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22667;
	fVar1 = Global_22670.f_5987;
	unk_0x53CE6C5893F65093(76, 84);
	unk_0x0C456F50E9145299(-0.05f, -0.05f, 0f, 0f);
	if (Global_4271211 == -2)
	{
		func_144(fVar0, fVar1, Global_22669, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4271211 == -3)
	{
		func_144(fVar0, (fVar1 + fVar2), Global_22669, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x17552FF90A99ABEA();
}

void func_160()
{
	Global_4271207 = Global_4271205;
	Global_4271208 = Global_4271206;
	Global_4271205 = unk_0xC40DD87705E0DB63(2, 239);
	Global_4271206 = unk_0xC40DD87705E0DB63(2, 240);
	Global_4271209 = (Global_4271205 - Global_4271207);
	Global_4271210 = (Global_4271206 - Global_4271208);
}

void func_161(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_162(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22670.f_4947), sParam0, 24);
	Global_22670.f_5019 = 0;
	Global_22670.f_5020 = 0;
	Global_22670.f_5021 = 0;
	Global_22670.f_5022 = 0;
	Global_22670.f_5023 = iParam1;
	Global_22670.f_5024 = unk_0xDFB7BFA6482FEE1E();
	Global_22670.f_5025 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_4953[iVar0] = 0;
		iVar0++;
	}
}

void func_163(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22670.f_5996 = uParam0;
	Global_22670.f_6131 = iParam2;
	if (Global_22670.f_5996 < Global_22670.f_5995)
	{
		Global_22670.f_5995 = Global_22670.f_5996;
	}
	else if ((Global_22670.f_5986 && Global_22670.f_5996 > Global_22670.f_5997) || (!Global_22670.f_5986 && Global_22670.f_5996 >= (Global_22670.f_5995 + Global_22670.f_5482)))
	{
		iVar0 = Global_22670.f_5995;
		while (iVar0 <= Global_22670.f_5996)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22670.f_5346[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22670.f_5482 && Global_22670.f_5995 < 128)
		{
			Global_22670.f_5995++;
			iVar1 = 0;
			iVar0 = Global_22670.f_5995;
			while (iVar0 <= Global_22670.f_5996)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22670.f_5346[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22670.f_5985 = 0;
	Global_22670.f_5986 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22670.f_4947), "", 24);
		StringCopy(&(Global_4271135.f_21), "", 16);
	}
}

void func_164(int iParam0)
{
	Global_22670.f_5995 = iParam0;
}

void func_165(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22670.f_5479 >= 256)
	{
		return;
	}
	if (Global_22670.f_6000 >= 4)
	{
		return;
	}
	if (Global_22670.f_6001 != 1)
	{
		return;
	}
	if (Global_22670.f_6000 >= Global_22670.f_5998)
	{
		return;
	}
	Global_22670.f_4175[Global_22670.f_5479] = uParam0;
	Global_22670.f_5479++;
	Global_22670.f_2381[Global_22670.f_5999 /*5*/][Global_22670.f_6000] = 2;
	Global_22670.f_6000++;
	if (Global_22670.f_6000 >= Global_22670.f_5998)
	{
		fVar0 = func_167();
		if (Global_22670.f_5332[Global_22670.f_5476] && Global_22670.f_6000 == Global_22670.f_5998)
		{
			func_150(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22670.f_5325[(Global_22670.f_5476 - 1)])
		{
			Global_22670.f_5325[(Global_22670.f_5476 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22670.f_6000 >= Global_22670.f_5998)
		{
			fVar3 = func_166();
			if (fVar3 > Global_22670.f_6002[Global_22670.f_5475])
			{
				Global_22670.f_6002[Global_22670.f_5475] = fVar3;
			}
		}
	}
}

float func_166()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22670.f_6000)
	{
		if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22670.f_4690[((Global_22670.f_5481 - iVar1) + iVar0)] != 0)
		{
			if (func_150(Global_22670.f_4690[((Global_22670.f_5481 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x7E12948ACF187619(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x7E12948ACF187619(0.35f, 0);
}

float func_167()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_22670.f_6000)
	{
		if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_130(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
	{
		unk_0xF942A67633C39BF7(&(Global_22670.f_73[Global_22670.f_5999 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22670.f_6000)
	{
		if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(Global_22670.f_5999 + iVar8) /*6*/]));
			}
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0x1896EC0B030A48A2(&(Global_22670.f_73[(Global_22670.f_5999 + iVar8) /*6*/]));
			}
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 2)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0x38CD3C04C877C35F(Global_22670.f_4175[((Global_22670.f_5479 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 3)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0x21300A5159EC89B1(Global_22670.f_4432[((Global_22670.f_5480 - iVar4) + iVar10)], Global_22670.f_4561[((Global_22670.f_5480 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 5)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0xA91D83F2CC1345A6(&(Global_2464040[((Global_22670.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 6)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0x1896EC0B030A48A2(&(Global_2464040[((Global_22670.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 7)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0xA91D83F2CC1345A6(&(Global_2464040[((Global_22670.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22670.f_2381[Global_22670.f_5999 /*5*/][iVar7] == 9)
		{
			if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
			{
				unk_0xA91D83F2CC1345A6(&(Global_2464040[((Global_22670.f_5478 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x15173FB88ABC94F9(&(Global_22670.f_73[Global_22670.f_5999 /*6*/])) != 0)
	{
		fVar0 = unk_0xB12E7ADB99F5BEEB(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22670.f_4690[((Global_22670.f_5481 - iVar5) + iVar7)] != 0)
		{
			func_150(Global_22670.f_4690[((Global_22670.f_5481 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_169(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22670.f_5475 > iParam0)
	{
		return;
	}
	if (Global_22670.f_5475 >= 128)
	{
		return;
	}
	if (Global_22670.f_5477 >= 256)
	{
		return;
	}
	if (Global_22670.f_6000 < Global_22670.f_5998)
	{
		return;
	}
	if (Global_22670.f_5475 != iParam0)
	{
		Global_22670.f_5475 = iParam0;
		Global_22670.f_5476 = 0;
	}
	iVar0 = Global_22670.f_5313[Global_22670.f_5476];
	if (iVar0 != 1)
	{
		while (Global_22670.f_5476 < 4 && iVar0 != 1)
		{
			Global_22670.f_5476++;
			iVar0 = Global_22670.f_5313[Global_22670.f_5476];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22670.f_73[Global_22670.f_5477 /*6*/]), sParam1, 24);
	if (!unk_0xAB6A270F84A8781E(sParam1) && !unk_0x49875FC4498CDA9A(sParam1))
	{
	}
	Global_22670.f_1610[Global_22670.f_5477] = bParam3;
	Global_22670.f_1867[Global_22670.f_5477] = iParam4;
	Global_22670.f_2124[Global_22670.f_5477] = iParam6;
	Global_22670.f_5477++;
	if (!bParam3)
	{
		func_172(Global_22670.f_5475, 1);
	}
	else
	{
		func_172(Global_22670.f_5475, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_171(&(Global_22670.f_73[Global_22670.f_5477 /*6*/]));
		if (Global_22670.f_5332[Global_22670.f_5476])
		{
			func_150(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22670.f_5325[Global_22670.f_5476])
		{
			Global_22670.f_5325[Global_22670.f_5476] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_170(&(Global_22670.f_73[Global_22670.f_5477 /*6*/]));
			if (fVar4 > Global_22670.f_6002[iParam0])
			{
				Global_22670.f_6002[iParam0] = fVar4;
			}
		}
	}
	unk_0x191DDA30577F440A(&(Global_22670.f_5346[iParam0]), Global_22670.f_5476);
	Global_22670.f_5476++;
	Global_22670.f_6001 = 1;
	Global_22670.f_5999 = (Global_22670.f_5477 - 1);
	Global_22670.f_6000 = 0;
	Global_22670.f_5998 = iParam2;
}

float func_170(char* sParam0)
{
	if (!unk_0x49875FC4498CDA9A(sParam0))
	{
	}
	return unk_0x7E12948ACF187619(0.35f, 0);
}

float func_171(char* sParam0)
{
	if (!unk_0x4030103C8B148AFC(sParam0))
	{
		if (unk_0x15173FB88ABC94F9(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_130(0, 1, 0, 0, 0, 0, 0);
	unk_0xF942A67633C39BF7(sParam0);
	return unk_0xB12E7ADB99F5BEEB(1);
}

void func_172(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&(Global_22670.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_22670.f_6272[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_173()
{
	if (unk_0x3640D836D145B814())
	{
		unk_0x8E01EA82E83CAEF2(0.325f, 0.3f);
	}
}

void func_174(int iParam0, char* sParam1, char* sParam2)
{
	Global_22670 = iParam0;
	func_175(29, sParam1, sParam2);
}

void func_175(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22670.f_6277[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22670.f_7286[iParam0 /*16*/]), sParam2, 64);
}

void func_176(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22670.f_1), sParam0, 16);
	Global_22670.f_68 = 0;
	Global_22670.f_69 = 0;
	Global_22670.f_70 = 0;
	Global_22670.f_71 = 0;
	Global_22670.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22670.f_5340[0] = iParam0;
	Global_22670.f_5340[1] = iParam1;
	Global_22670.f_5340[2] = iParam2;
	Global_22670.f_5340[3] = iParam3;
	Global_22670.f_5340[4] = iParam4;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22670.f_5313[0] = iParam0;
	Global_22670.f_5313[1] = iParam1;
	Global_22670.f_5313[2] = iParam2;
	Global_22670.f_5313[3] = iParam3;
	Global_22670.f_5313[4] = iParam4;
	Global_22670.f_5483 = 0;
	if (iParam0 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam1 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam2 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam3 != 0)
	{
		Global_22670.f_5483++;
	}
	if (iParam4 != 0)
	{
		Global_22670.f_5483++;
	}
}

void func_179(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22670.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22670.f_2381[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2464040[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22670.f_4175[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22670.f_4432[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22670.f_4690[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22670.f_5346[iVar0] = 0;
		Global_22670.f_5484[iVar0] = 0;
		Global_22670.f_5613[iVar0] = 0;
		Global_22670.f_6136[iVar0] = 0f;
		Global_22670.f_5742[iVar0] = 0;
		Global_22670.f_6002[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22670.f_5313[iVar0] = 0;
		Global_22670.f_5325[iVar0] = 0f;
		Global_22670.f_5319[iVar0] = -1f;
		Global_22670.f_5332[iVar0] = 0;
		Global_22670.f_5340[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22670.f_5221[iVar0 /*4*/]), "", 16);
		Global_22670.f_5270[iVar0] = -1;
		Global_22670.f_5283[iVar0] = 361;
		Global_22670.f_5296[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22670.f_6277[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22670.f_7286[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22670.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4271135.f_16), "", 16);
	Global_4271135.f_20 = -1;
	Global_22670 = 0;
	Global_22670.f_5475 = 0;
	Global_22670.f_5476 = 0;
	Global_22670.f_5477 = 0;
	Global_22670.f_5479 = 0;
	Global_22670.f_5480 = 0;
	Global_22670.f_5481 = 0;
	Global_22670.f_5478 = 0;
	Global_22670.f_6131 = 0;
	Global_22670.f_6271 = 0;
	Global_22670.f_5996 = 0;
	Global_22670.f_5995 = 0;
	Global_22670.f_5997 = 0;
	StringCopy(&(Global_22670.f_4947), "", 24);
	Global_22670.f_5019 = 0;
	Global_22670.f_5020 = 0;
	Global_22670.f_5021 = 0;
	Global_22670.f_5022 = 0;
	Global_22670.f_5023 = 0;
	Global_22670.f_5024 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_4953[iVar0] = 0;
		iVar0++;
	}
	Global_22670.f_5025 = 0;
	StringCopy(&(Global_4271135.f_21), "", 16);
	Global_4271135.f_61 = 0;
	Global_4271135.f_62 = 0;
	Global_4271135.f_63 = 0;
	Global_4271135.f_64 = 0;
	Global_4271135.f_65 = 0;
	Global_4271135.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4271135.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4271135.f_67 = 0;
	StringCopy(&(Global_22670.f_1), "", 16);
	Global_22670.f_5331 = 0f;
	Global_22670.f_68 = 0;
	Global_22670.f_69 = 0;
	Global_22670.f_70 = 0;
	Global_22670.f_71 = 0;
	Global_22670.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22670.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22670.f_6001 = 0;
	Global_22670.f_6000 = 0;
	Global_22670.f_5998 = 0;
	Global_22670.f_5999 = 0;
	Global_22670.f_5026 = 0;
	Global_22670.f_5027 = 0;
	Global_22670.f_5482 = 10;
	Global_22670.f_5483 = 0;
	Global_22670.f_6133 = 0f;
	Global_22670.f_6134 = 0f;
	Global_22670.f_5985 = 0;
	Global_22670.f_5986 = 0;
	Global_22670.f_5987 = 0f;
	Global_22670.f_5988 = 0;
	Global_22670.f_5990 = 0;
	Global_22670.f_5989 = 0;
	Global_22670.f_5991 = 0;
	Global_22670.f_5992 = 0;
	Global_22670.f_5993 = 0;
	Global_22670.f_5994 = 0;
	Global_22670.f_8670 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22670.f_6265[iVar0] = -1;
		Global_22670.f_6268[iVar0] = -1;
		iVar0++;
	}
	Global_22670.f_5338 = 0f;
	Global_22670.f_5309 = 0;
	Global_22670.f_5339 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22670.f_6272)
	{
		Global_22670.f_6272[iVar0] = 0;
		iVar0++;
	}
	Global_22670.f_8649 = 0;
	Global_22670.f_8644 = 0;
	Global_22670.f_8654 = 0;
	Global_22670.f_8659 = 0;
	Global_22670.f_8664 = 0;
	Global_22670.f_8666 = 0;
	Global_22670.f_8672 = 0;
	Global_22667 = 0.05f;
	Global_22668 = 0.05f;
	Global_22669 = 0.225f;
	fVar2 = unk_0x451E904FC8FB5C54(0);
	if (bParam0)
	{
		Global_22669 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22669 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22669 = 0.225f;
	}
}

int func_180(int iParam0, struct<3> Param1, float fParam2, var uParam3, var uParam4, var uParam5)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x26C2ACB261895E70(Param1, fParam2, 2.40015f, -7.75244f, 1.0825f) };
			*uParam4 = -4.2069f;
			uParam4->f_1 = -0.027f;
			uParam4->f_2 = (fParam2 + 22.8175f);
			*uParam5 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x26C2ACB261895E70(Param1, fParam2, 3.80296f, -5.391f, 1.213f) };
			*uParam4 = -9.3866f;
			uParam4->f_1 = -0.0011f;
			uParam4->f_2 = (fParam2 + 46.9866f);
			*uParam5 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x26C2ACB261895E70(Param1, fParam2, 2.97963f, -3.39452f, 0.934498f) };
			*uParam4 = -8.483f;
			uParam4->f_1 = 0.0149f;
			uParam4->f_2 = (fParam2 + 53.5519f);
			*uParam5 = 35f;
			break;
		
		case -2:
			*uParam3 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam4 = { -3.6091f, 0.022f, -8.6461f };
			*uParam5 = 35f;
			break;
	}
	return 1;
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x191DDA30577F440A(&Global_31593, iParam0);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_31593, iParam0);
	}
}

int func_182(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xCAD1755E530A6012(unk_0x638BDC79E655C1C2()))
	{
		return 0;
	}
	if (func_123(0))
	{
		return 0;
	}
	if (unk_0x2CA4B93E310C1860())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/] == 1 && Global_42737[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42737[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42737[iVar0 /*32*/].f_5 = 1;
			Global_42737[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42737[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42737[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_183(int iParam0)
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
		if (Global_42737[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_183(iParam0);
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
	if (Global_42737[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_42737[iVar0 /*32*/].f_12)
	{
		unk_0x4A4799828818A508(&(Global_42737[iVar0 /*32*/].f_8));
		unk_0x1896EC0B030A48A2(&Global_42932);
		iVar1 = unk_0x0222F263F70347A8(0);
	}
	else
	{
		unk_0x4A4799828818A508(&(Global_42737[iVar0 /*32*/].f_8));
		unk_0x1896EC0B030A48A2(&Global_42932);
		if (Global_42737[iVar0 /*32*/].f_30)
		{
			unk_0xA91D83F2CC1345A6(&(Global_42737[iVar0 /*32*/].f_13));
		}
		else
		{
			unk_0x1896EC0B030A48A2(&(Global_42737[iVar0 /*32*/].f_13));
		}
		iVar1 = unk_0x0222F263F70347A8(0);
	}
	return iVar1;
}

void func_185(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_183(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/])
		{
			Global_42737[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_186(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x636F1F53CC61D2C9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF471787D45ADC2C1())
	{
		if (!*uParam0 == -1)
		{
			func_185(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42737[iVar0 /*32*/])
		{
			Global_42737[iVar0 /*32*/] = 1;
			Global_42737[iVar0 /*32*/].f_1 = Global_42938;
			Global_42938++;
			Global_42737[iVar0 /*32*/].f_4 = 0;
			Global_42737[iVar0 /*32*/].f_29 = 0;
			Global_42737[iVar0 /*32*/].f_5 = 0;
			Global_42737[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42737[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42737[iVar0 /*32*/].f_6 = iParam3;
			Global_42737[iVar0 /*32*/].f_31 = unk_0x62D18D65FE22FF39();
			Global_42737[iVar0 /*32*/].f_7 = 0;
			Global_42737[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xAB6A270F84A8781E(sParam4))
			{
				Global_42737[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42737[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42737[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42737[iVar0 /*32*/].f_12 = 0;
				Global_42737[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42737[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_187(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

int func_188()
{
	if (Global_112293.f_20408.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x26C2ACB261895E70(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x26C2ACB261895E70(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_190(float fParam0)
{
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0xA937637D5E35176E(unk_0x7D2B9E6A64637269()) > 0;
		}
		else
		{
			return unk_0x41DAC3909ACCB648(unk_0x7D2B9E6A64637269(), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), fParam0) > 0;
		}
	}
	return 0;
}

void func_191()
{
	if (iLocal_108)
	{
		if (iLocal_107 == 3)
		{
			iLocal_107 = 0;
		}
		iLocal_108 = 0;
	}
	switch (iLocal_107)
	{
		case 0:
			unk_0x4603196EEEA2355C(uLocal_98[iLocal_111], 1, 0);
			uLocal_109 = unk_0xD955F1CC0BCABC78(unk_0x26C2ACB261895E70(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_66.f_486.f_9, 2);
			if (!unk_0xECEC7528A52B4EE8(Local_66.f_2))
			{
				unk_0xAD844C8843FC405C(Local_66.f_2, uLocal_109, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xED3365BAA5895E01(uLocal_98[iLocal_111], uLocal_109, "purchase_chocbar", "mp_am_hold_up", 1000f, 1090519040, 1, 1148846080);
				iLocal_107 = 1;
			}
			break;
		
		case 1:
			if (unk_0xEEC203A73BC92E7E(uLocal_109))
			{
				if (unk_0x0BC8768247440B3A(uLocal_109) == 1f)
				{
					if (!unk_0xECEC7528A52B4EE8(Local_66.f_2))
					{
						unk_0xCA089CD1A17D76DF(Local_66.f_2);
					}
					if (unk_0x419E13582192CFEA(uLocal_98[iLocal_111]))
					{
						unk_0x0B87A8220B73252D(uLocal_98[iLocal_111], 1);
					}
					iLocal_110 = unk_0xDFB7BFA6482FEE1E();
					iLocal_107 = 2;
				}
			}
			else
			{
				iLocal_110 = unk_0xDFB7BFA6482FEE1E();
				iLocal_107 = 2;
			}
			break;
		
		case 2:
			if ((unk_0xDFB7BFA6482FEE1E() - iLocal_110) > 1000)
			{
				if (unk_0x419E13582192CFEA(uLocal_98[iLocal_111]))
				{
					unk_0x4603196EEEA2355C(uLocal_98[iLocal_111], 0, 0);
					unk_0x78CDDD1E6367978D(uLocal_98[iLocal_111], func_60(iLocal_111), 1, 0, 0, 1);
					unk_0x0B87A8220B73252D(uLocal_98[iLocal_111], 0);
				}
				iLocal_107 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_192()
{
	if (iLocal_52 != 6)
	{
		switch (iLocal_52)
		{
			case 1:
				if (func_197())
				{
					iLocal_52 = 2;
				}
				else
				{
					iLocal_52 = 6;
				}
				break;
			
			case 2:
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_86, 0))
				{
					func_196();
					func_12(&(Local_66.f_86.f_7));
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_86, 0))
				{
					if ((func_195(&(Local_66.f_86.f_7), 5f) || func_193(Local_66.f_2, &(Local_66.f_451))) || unk_0x6B9E71121F5B8154(Local_66.f_86))
					{
						iLocal_52 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0xE50EB54E0F21BED0(Local_66.f_86, 0))
				{
					iLocal_51 = 31;
					unk_0x1DC2BF231DE6A016(Local_66.f_86, Local_66, 500f, -1, 0, 0);
					iLocal_52 = 5;
				}
				func_40(&(Local_66.f_86.f_7));
				break;
			}
	}
}

int func_193(int iParam0, var uParam1)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x24A466C655E8588A(unk_0x7D2B9E6A64637269(), 7))
		{
			if (unk_0x4140085B99B17F97(unk_0x1146A9AE09CE2B14(), iParam0) || unk_0x87BE50F80F3FCEAB(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (unk_0x836F48E8C4A773BF(iParam0, unk_0x7D2B9E6A64637269(), 90f))
				{
					if (func_194(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0xDFB7BFA6482FEE1E();
						}
						else if ((unk_0xDFB7BFA6482FEE1E() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_194(int iParam0, int iParam1)
{
	return func_23(unk_0xD56332194D622ECE(unk_0x638BDC79E655C1C2()), iParam0, iParam1);
}

int func_195(var uParam0, float fParam1)
{
	if (func_15(uParam0))
	{
		if (func_9(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_196()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_86, 0))
	{
		unk_0x5C679902079A7E80(&(Local_66.f_86.f_6));
		unk_0xB0C1A43193C25F7A(0, Local_66, 0);
		unk_0x8ADA462BC5F42FD8(0, Local_66, 2500, 0, 2);
		unk_0xB111AAA7C1B0D64F(0, 2500, 0, -1, 0);
		unk_0x1BBD0A5729AB1226(Local_66.f_86.f_6);
		unk_0x8A1AC8EBC73850C8(Local_66.f_86, Local_66.f_86.f_6);
	}
}

int func_197()
{
	unk_0x61CB990E8973DFE6(Local_66.f_86.f_2, Local_66.f_86.f_5, 1, 0, &(Local_66.f_86), 0, 1, -1);
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_86, 0))
	{
		if (unk_0x6471F4759775FCA4(Local_66.f_86) == Local_66.f_86.f_1)
		{
			unk_0x4985CD0720AFD468(Local_66.f_86, 1, 0);
			unk_0xBE91B077ADADE97F(Local_66.f_86, 1);
			return 1;
		}
	}
	return 0;
}

void func_198()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	
	if (iLocal_101 > 1 && iLocal_101 < 5)
	{
		if (func_219())
		{
			unk_0x8BA9BCDD56AA7115(500);
			iLocal_101 = 6;
		}
	}
	switch (iLocal_101)
	{
		case 0:
			if ((((unk_0xE50EB54E0F21BED0(Local_66.f_2, 0) || !func_218()) || func_1(Local_66.f_470, 128)) && iLocal_55 < 3) && unk_0x1009A332C2986B7C(Local_66.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && !func_217(0))
				{
					func_216("SHR_ROBTILL", -1);
					Local_66.f_469 = -1;
					func_186(&(Local_66.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 1);
					unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 0);
					iLocal_101 = 1;
				}
			}
			else if (!unk_0xECEC7528A52B4EE8(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 7)
			{
			}
			else if (unk_0x1009A332C2986B7C(Local_66.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_45())
			{
				if (func_182(Local_66.f_469, 1))
				{
					if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
					{
						if (!unk_0xE50EB54E0F21BED0(unk_0x0BF0F8F3AD0993F6(), 0))
						{
							iVar3 = unk_0x0BF0F8F3AD0993F6();
							if (unk_0x8954E9D0A9F6F8CF(iVar3, Local_66.f_214, Local_66.f_217, Local_66.f_220, 0, 1, 0))
							{
								unk_0x78CDDD1E6367978D(iVar3, unk_0x26C2ACB261895E70(Local_66.f_486.f_6, Local_66.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, 0, 0, 1);
							}
						}
					}
					unk_0x191DDA30577F440A(&(Local_66.f_162.f_18), 1);
					if (func_28("SHR_ROBTILL"))
					{
						unk_0x66AE54CE92457FEE(1);
					}
					func_185(&(Local_66.f_469));
					bVar2 = unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iLocal_105, 1);
					if (bVar2)
					{
						unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
					}
					unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 0, 0);
					unk_0x8BE64A4794BF87FA(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 15f);
					unk_0x0513A10C6415B57C(0);
					func_119(0);
					func_210(1, 1, 1, 0, 0, 0, 0);
					unk_0xDD7C2F9844E745B1(0);
					func_181(23, 1);
					unk_0xAA464864BA733E26(Local_66.f_2.f_1, 3f, 0);
					iLocal_101 = 2;
				}
				else if ((unk_0xDFB7BFA6482FEE1E() % 1000) < 50)
				{
					if (Local_66.f_469 <= 0)
					{
						Local_66.f_469 = -1;
						func_186(&(Local_66.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_28("SHR_ROBTILL"))
				{
					unk_0x66AE54CE92457FEE(1);
				}
				func_185(&(Local_66.f_469));
				iLocal_101 = 0;
			}
			break;
		
		case 2:
			if (unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				unk_0x3CBE9F07524C242D(Local_66.f_2, 0, 0);
				unk_0xA2C015B68CE01357(Local_66.f_2, 1);
			}
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), unk_0x26C2ACB261895E70(Local_66.f_2.f_1, Local_66.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0, 1);
				unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), Local_66.f_2.f_4);
				unk_0x8D5B447F21217223(&uLocal_78);
				unk_0x5C679902079A7E80(&uLocal_78);
				unk_0x4261814A9A26E86F(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0x4261814A9A26E86F(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_78);
				unk_0x8A1AC8EBC73850C8(unk_0x7D2B9E6A64637269(), uLocal_78);
				if (!unk_0x0E8572B08CEB6A11(uLocal_102))
				{
					uLocal_102 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x612434A5544F5847(uLocal_102, unk_0x7D2B9E6A64637269(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x5C062C9AFC66C513(uLocal_102, unk_0x7D2B9E6A64637269(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0xEF20E9A7B745D17A(uLocal_102, 35f);
				unk_0x9C9EC7CC88D050FA(uLocal_102, "HAND_SHAKE", 0.1f);
				unk_0x6FA8221C9D2ECB46(uLocal_102, 1);
				unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
			}
			iLocal_101 = 3;
			break;
		
		case 3:
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0x0E8572B08CEB6A11(uLocal_103))
				{
					uLocal_103 = unk_0x1CA878DB277C6DF0(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0x612434A5544F5847(uLocal_103, unk_0x7D2B9E6A64637269(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x5C062C9AFC66C513(uLocal_103, unk_0x7D2B9E6A64637269(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0xEF20E9A7B745D17A(uLocal_103, 35f);
				unk_0x9C9EC7CC88D050FA(uLocal_103, "HAND_SHAKE", 0.3f);
				unk_0x32279DAB93C9A9FA(uLocal_103, uLocal_102, 8000, 1, 1);
			}
			iLocal_106 = unk_0xDFB7BFA6482FEE1E();
			iLocal_101 = 4;
			break;
		
		case 4:
			if (((unk_0xDFB7BFA6482FEE1E() - iLocal_106) > 4800 || (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))) || unk_0x1009A332C2986B7C(Local_66.f_2.f_1, 3f) > 0)
			{
				iLocal_101 = 5;
			}
			else if ((unk_0xDFB7BFA6482FEE1E() - iLocal_106) > 4500)
			{
				if (func_209())
				{
					if (!iLocal_95)
					{
						unk_0x9673FB069F90F6B9("CamPushInNeutral", 0, 0);
						unk_0x9B0169E27978C1A2(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_95 = 1;
					}
				}
			}
			else if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0x4598B7969D5B0A28(unk_0x7D2B9E6A64637269(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_104)
					{
						iVar1 = unk_0xB36B8558948EA7A8(10, 51);
						func_208(func_105(), 1, iVar1, 0, 0);
						iLocal_81 = (iLocal_81 + iVar1);
						Local_66.f_28.f_6 = unk_0x5AD02BBC63E31E46();
						unk_0x9B0169E27978C1A2(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
						iLocal_104 = 1;
					}
				}
				else if (iLocal_104)
				{
					iLocal_104 = 0;
				}
			}
			break;
		
		case 5:
			if (unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
			{
				unk_0x3CBE9F07524C242D(Local_66.f_2, 1, 0);
				unk_0xA2C015B68CE01357(Local_66.f_2, 0);
			}
			unk_0xDF23DCD7A3E1B7A5(0);
			unk_0x3A13FD2813C8251F(0, 1065353216);
			if (unk_0x0E8572B08CEB6A11(uLocal_102))
			{
				unk_0xFE1DEC9C5734D0C0(uLocal_102, 0);
			}
			if (unk_0x0E8572B08CEB6A11(uLocal_103))
			{
				unk_0xFE1DEC9C5734D0C0(uLocal_103, 0);
			}
			unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
			if (!unk_0xE50EB54E0F21BED0(unk_0x0BF0F8F3AD0993F6(), 0))
			{
				iVar3 = unk_0x0BF0F8F3AD0993F6();
				Var4 = { unk_0xD6E677FAD7521410(iVar3, 1) };
			}
			if (iLocal_105 != joaat("weapon_unarmed") && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), iLocal_105, 1);
			}
			if (unk_0x234B68AC2E35ED5A(Local_66.f_162.f_18, 1))
			{
				unk_0xC664C0067EEAB8D1(&(Local_66.f_162.f_18), 1);
			}
			func_207(1, 1, 1);
			func_16(1, 0);
			iLocal_60 = 12;
			func_204();
			func_199(297, 0, 0);
			Local_66.f_468 = 1;
			iLocal_101 = 7;
			break;
		
		case 6:
			if (unk_0x8B6A925F148E0E94())
			{
				unk_0x6FA8221C9D2ECB46(uLocal_103, 0);
				unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
				}
				if (iLocal_81 < 15)
				{
					iVar1 = unk_0xB36B8558948EA7A8(25, 65);
					func_208(func_105(), 1, iVar1, 0, 0);
					iLocal_81 = (iLocal_81 + iVar1);
				}
				unk_0x6E1E3A5B1F9AB95B(500);
				iLocal_101 = 5;
			}
			break;
	}
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_79((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_112293.f_10192[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112293.f_10192[iParam0 /*12*/].f_6 == 11 || Global_112293.f_10192[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112293.f_10192[iParam0 /*12*/].f_5 = 1;
		Global_112293.f_10192[iParam0 /*12*/].f_10 = iParam1;
		Global_112293.f_10192[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x94F7E80BDFF33F26(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_200();
	}
}

void func_200()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_112029 = 0;
	Global_112030 = 0;
	Global_112031 = 0;
	Global_112032 = 0;
	Global_112033 = 0;
	Global_112034 = 0;
	Global_112035 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112293.f_10192.f_3853;
	Global_112293.f_10192.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112293.f_10192[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112293.f_10192[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112029++;
					fVar1 = (fVar1 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112030++;
					fVar2 = (fVar2 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112031++;
					fVar3 = (fVar3 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112032++;
					fVar4 = (fVar4 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112033++;
					fVar5 = (fVar5 + (Global_112293.f_10192[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112034++;
					fVar6 = (fVar6 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112035++;
					fVar7 = (fVar7 + Global_112293.f_10192[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112012 > 0)
	{
		if (Global_112029 == Global_112012)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112013 > 0)
	{
		if (Global_112030 == Global_112013)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112014 > 0)
	{
		if (Global_112031 == Global_112014)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112015 > 0)
	{
		if (Global_112032 == Global_112015)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112016 > 0)
	{
		if (((Global_112033 == Global_112016 || (Global_112016 * 10 / Global_112033) < 41) || Global_112033 > Global_112019) || Global_112033 == Global_112019)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_112293.f_10192.f_3856, 14))
			{
				if (Global_112033 == Global_112016)
				{
					unk_0x94F7E80BDFF33F26(joaat("num_rndevents_completed"), Global_112016, 0);
					unk_0x191DDA30577F440A(&(Global_112293.f_10192.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112017 > 0)
	{
		if (Global_112034 == Global_112017)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112018 > 0)
	{
		if (Global_112035 == Global_112018)
		{
			fVar7 = 5f;
		}
	}
	Global_112293.f_10192.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112033 > Global_112019 || Global_112033 == Global_112019)
	{
		iVar9 = Global_112019;
	}
	else
	{
		iVar9 = Global_112033;
	}
	unk_0xAC4FD27671081628(joaat("num_missions_completed"), Global_112029, 1);
	unk_0xAC4FD27671081628(joaat("num_missions_available"), Global_112012, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_completed"), Global_112030, 1);
	unk_0xAC4FD27671081628(joaat("num_minigames_available"), Global_112013, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_completed"), Global_112031, 1);
	unk_0xAC4FD27671081628(joaat("num_oddjobs_available"), Global_112014, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_completed"), Global_112032, 1);
	unk_0xAC4FD27671081628(joaat("num_rndpeople_available"), Global_112015, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xAC4FD27671081628(joaat("num_rndevents_available"), Global_112019, 1);
	unk_0xAC4FD27671081628(joaat("num_misc_completed"), (Global_112035 + Global_112034), 1);
	unk_0xAC4FD27671081628(joaat("num_misc_available"), (Global_112018 + Global_112017), 1);
	Global_112036 = (Global_112029 * 100 / Global_112012);
	Global_112038 = ((Global_112031 + Global_112030) * 100 / (Global_112014 + Global_112013));
	Global_112037 = ((Global_112032 + iVar9) * 100 / (Global_112015 + Global_112019));
	Global_112039 = ((Global_112034 + Global_112035) * 100 / (Global_112017 + Global_112018));
	unk_0xBAE77BA3A38F7944(joaat("total_progress_made"), Global_112293.f_10192.f_3853, 1);
	unk_0xAC4FD27671081628(joaat("percent_story_missions"), Global_112036, 1);
	unk_0xAC4FD27671081628(joaat("percent_ambient_missions"), Global_112037, 1);
	unk_0xAC4FD27671081628(joaat("percent_oddjobs"), Global_112038, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_112293.f_10192.f_3853))
	{
		func_100(13, floor(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_203() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_201();
				}
			}
		}
	}
}

int func_201()
{
	if (func_202(0))
	{
		return 0;
	}
	if (Global_99409.f_8)
	{
		if (Global_99409.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_99409.f_10 > 1)
	{
		return 0;
	}
	Global_99409.f_10++;
	return 1;
}

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_203()
{
	return Global_31345;
}

void func_204()
{
	if (!iLocal_87)
	{
		Global_112293.f_20033[iLocal_80]++;
		Global_112293.f_20033.f_62[iLocal_80] = Local_66.f_1;
		if (func_105() == 0)
		{
			func_205(5);
		}
		iLocal_87 = 1;
	}
}

void func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_206(&Global_95838, 1);
			break;
		
		case 1:
			func_206(&Global_95840, 3);
			break;
		
		case 2:
			func_206(&Global_95844, 1);
			break;
		
		case 3:
			func_206(&Global_95846, 1);
			break;
		
		case 4:
			func_206(&Global_95848, 1);
			break;
		
		case 5:
			func_206(&Global_95850, 1);
			break;
		
		case 6:
			func_206(&Global_95852, 1);
			break;
		
		case 7:
			func_206(&Global_95854, 2);
			break;
		
		case 8:
			func_206(&Global_95857, 1);
			break;
		
		case 9:
			func_206(&Global_95859, 1);
			break;
	}
}

void func_206(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0xDFB7BFA6482FEE1E();
		}
		iVar0++;
	}
}

void func_207(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0xF99B8860747709DD(unk_0x638BDC79E655C1C2(), 1, 0);
	}
	unk_0x0513A10C6415B57C(1);
	func_210(0, 1, iParam2, 0, 0, 0, 0);
	if (bParam1)
	{
		unk_0xDD7C2F9844E745B1(1);
		unk_0x4200138CBB376D4D(1);
	}
	func_181(23, 0);
}

void func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_104(iParam0) == 3)
	{
		return;
	}
	if (func_104(iParam0) == 4)
	{
		return;
	}
	func_70(func_104(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0xD885BEFA31A18D47(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0xAC4FD27671081628(iVar1, iVar0, 1);
	}
}

int func_209()
{
	if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_210(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_215(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_120())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_214(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_215(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_214(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_212(unk_0x1146A9AE09CE2B14())) && !func_135(unk_0x1146A9AE09CE2B14(), 0)) && !func_211()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_212(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_211()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

int func_212(int iParam0)
{
	if (func_135(iParam0, 0))
	{
		return 1;
	}
	if (func_213())
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

bool func_213()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_214(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && uParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_215(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 13);
	}
}

void func_216(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_217(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
			{
				if (Global_19797 == 1)
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
		else
		{
			return 0;
		}
	}
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_19797 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_19798.f_1 > 3)
	{
		if (Global_19797 == 1)
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

int func_218()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		if (unk_0xB71084333B418824(Local_66.f_2) == Local_66.f_185)
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(Local_66.f_2, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(Local_66.f_2, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(Local_66.f_2, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (unk_0x8954E9D0A9F6F8CF(Local_66.f_2, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_219()
{
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (unk_0x86AF801D34E482FF(0, 18) || unk_0x86AF801D34E482FF(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_220()
{
	int iVar0;
	
	func_237();
	func_234();
	if (unk_0x419E13582192CFEA(Local_66))
	{
		unk_0xBDC364B886846D11(Local_66, &iVar0, 1);
		if ((iLocal_58 == 1 && iLocal_99 == 2) && ((unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()) || func_233()) || func_232()))
		{
			unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
			func_16(1, 0);
			iLocal_58 = 9;
		}
	}
	else
	{
		return;
	}
	func_229();
	if (!bLocal_86)
	{
		func_228();
	}
	switch (iLocal_58)
	{
		case 1:
			if (func_303())
			{
				if ((func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || (func_193(Local_66.f_2, &(Local_66.f_451)) && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_227();
					unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_58 = 5;
					unk_0x191DDA30577F440A(&Global_95221, 3);
					func_226();
				}
				if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!unk_0xECEC7528A52B4EE8(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							unk_0x4261814A9A26E86F(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_225();
						func_294(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_303())
			{
				if (func_193(Local_66.f_2, &(Local_66.f_451)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
					Local_66.f_2.f_11 = 1;
					func_204();
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_60 = 11;
					iLocal_58 = 3;
					unk_0x191DDA30577F440A(&Global_95221, 3);
					func_226();
				}
				else if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
				{
					unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
					func_225();
					func_227();
					iLocal_51 = 12;
					iLocal_58 = 5;
					func_226();
				}
				else if (func_1(Local_66.f_470, 8))
				{
					if (!func_1(Local_66.f_470, 32))
					{
						if (!unk_0xECEC7528A52B4EE8(Local_66.f_2) && func_1(Local_66.f_470, 4))
						{
							unk_0x4261814A9A26E86F(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_225();
						func_294(&(Local_66.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_51 >= 13)
			{
				if (!unk_0xCCCF5C35DC145D71(unk_0x7D2B9E6A64637269()) && !unk_0xCCCF5C35DC145D71(Local_66.f_2))
				{
					iLocal_51 = 15;
					iLocal_56 = 5;
					iLocal_60 = 12;
					iLocal_58 = 4;
				}
			}
			break;
		
		case 4:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) && func_303())
			{
				func_227();
				if (Local_66.f_2.f_12)
				{
					iLocal_51 = 22;
				}
				else
				{
					iLocal_51 = 16;
				}
				iLocal_58 = 5;
			}
			break;
		
		case 5:
			if (Local_66.f_486 >= 0)
			{
				if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) && func_303())
				{
					if (unk_0xEEC203A73BC92E7E(Local_66.f_486) && !Local_66.f_467)
					{
						iLocal_51 = 33;
						Local_66.f_467 = 1;
					}
				}
			}
			if (iLocal_53 >= 1 && iLocal_53 < 7)
			{
				unk_0x13520157939D4329(unk_0x638BDC79E655C1C2());
				if (func_223(Local_66.f_2, 0, 1, 0, 1, 1) || !unk_0xEEC203A73BC92E7E(Local_66.f_486))
				{
					iLocal_58 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_54 != 3 && iLocal_54 != 4)
			{
				iLocal_54 = 4;
			}
			unk_0xC664C0067EEAB8D1(&Global_95221, 3);
			if (!unk_0x6B9E71121F5B8154(Local_66.f_2))
			{
				func_7();
				iLocal_58 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x6B9E71121F5B8154(Local_66.f_2))
			{
				func_222();
				iLocal_51 = 36;
				func_16(1, 0);
				func_294(&(Local_66.f_470), 32);
				iLocal_56 = 7;
				iLocal_58 = 8;
			}
			break;
		
		case 8:
			if (((func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || func_193(Local_66.f_2, &(Local_66.f_451))) && func_303()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_66.f_2.f_12)
				{
					iLocal_51 = 10;
					iLocal_58 = 9;
				}
				else
				{
					func_19();
					iLocal_51 = 11;
					iLocal_58 = 0;
				}
				Local_66.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_7();
			iLocal_58 = 12;
			break;
		
		case 10:
			if ((((func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1) || func_193(Local_66.f_2, &(Local_66.f_451))) && func_303()) && iVar0 != joaat("weapon_unarmed")) && !func_15(&(Local_66.f_480)))
			{
				func_12(&(Local_66.f_480));
				if (unk_0x6B9E71121F5B8154(Local_66.f_2))
				{
					func_7();
				}
				iLocal_51 = 23;
			}
			else if (func_41(&(Local_66.f_480)) > 10f)
			{
				if (!unk_0xECEC7528A52B4EE8(Local_66.f_2))
				{
					unk_0x1DC2BF231DE6A016(Local_66.f_2, unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
				}
				iLocal_58 = 12;
			}
			break;
		
		case 11:
			func_221();
			iLocal_58 = 12;
			break;
	}
}

void func_221()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		unk_0xBE91B077ADADE97F(Local_66.f_2, 0);
	}
}

void func_222()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		unk_0x8ADA462BC5F42FD8(Local_66.f_2, Local_66, -1, 0, 2);
	}
}

int func_223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x5E7C0A485B91DB87(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x5E7C0A485B91DB87(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x0BF0F8F3AD0993F6();
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA6E8FBD68548675F(iParam0, unk_0x7D2B9E6A64637269(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x0BF0F8F3AD0993F6();
		if (!unk_0xE50EB54E0F21BED0(iVar1, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			if (unk_0xECA23EB9C2A5E83F(iParam0))
			{
				if (unk_0x4EAA932BAAB38AF6(iParam0) == unk_0x7D2B9E6A64637269())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x591190E69BE43117(iParam0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x733CCC70A38EA8EC(unk_0x1146A9AE09CE2B14()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xCDDAB3241735D813(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xB30D2DEA3AE60A3B(iParam0))
		{
			return 1;
		}
	}
	if (func_224(unk_0x7D2B9E6A64637269(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x6B9E71121F5B8154(iParam0) && func_194(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xC49311A2A500FF09(iParam0, 0))
		{
			if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), unk_0x75B58B38E45C6F9A(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), iParam0))
		{
			return 1;
		}
		if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
		{
			if (unk_0xA6E8FBD68548675F(iParam1, unk_0x7D2B9E6A64637269(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xBDC364B886846D11(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x7F716EA884E75E49(iParam0))
		{
			if (vdist(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xD6E677FAD7521410(iParam1, 1)) < 2.5f)
			{
				if (unk_0x836F48E8C4A773BF(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_225()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && func_303())
	{
		iVar1 = unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != unk_0x7D2B9E6A64637269() && uVar0[iVar2] != Local_66.f_2) && !unk_0xECEC7528A52B4EE8(uVar0[iVar2])) && !unk_0xEE1D92A39CF8E1E6(uVar0[iVar2])) && !unk_0x3D28F4F0775C6C2A(uVar0[iVar2], 0))
			{
				unk_0x4985CD0720AFD468(uVar0[iVar2], 1, 1);
				unk_0x1DC2BF231DE6A016(uVar0[iVar2], unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
			}
			iVar2++;
		}
	}
}

void func_226()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && func_303())
	{
		iVar1 = unk_0x65C60F47A52ECB92(unk_0x7D2B9E6A64637269(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != unk_0x7D2B9E6A64637269() && uVar0[iVar2] != Local_66.f_2) && !unk_0xEE1D92A39CF8E1E6(uVar0[iVar2]))
			{
				unk_0x4985CD0720AFD468(uVar0[iVar2], 1, 1);
				unk_0x8D5B447F21217223(&uLocal_78);
				unk_0x5C679902079A7E80(&uLocal_78);
				unk_0x37DE87D06B5C195D(0, 5000);
				unk_0x1DC2BF231DE6A016(0, unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
				unk_0x1BBD0A5729AB1226(uLocal_78);
				unk_0x8A1AC8EBC73850C8(uVar0[iVar2], uLocal_78);
			}
			iVar2++;
		}
	}
}

void func_227()
{
	if (func_25(Local_66) == joaat("weapon_rpg"))
	{
		Local_66.f_458 = 1;
	}
	else if (func_25(Local_66) == joaat("weapon_knife"))
	{
		Local_66.f_459 = 1;
	}
	else if (((func_25(Local_66) == joaat("weapon_hammer") || func_25(Local_66) == joaat("weapon_crowbar")) || func_25(Local_66) == joaat("weapon_bat")) || func_25(Local_66) == joaat("weapon_bottle"))
	{
		Local_66.f_460 = 1;
	}
	else if ((func_25(Local_66) == joaat("weapon_grenade") || func_25(Local_66) == joaat("weapon_smokegrenade")) || func_25(Local_66) == joaat("weapon_molotov"))
	{
		Local_66.f_461 = 1;
	}
	else if (func_25(Local_66) == joaat("weapon_stickybomb"))
	{
		Local_66.f_462 = 1;
	}
	iLocal_60 = 12;
	func_204();
	iLocal_59 = 2;
	iLocal_63 = 1;
	iLocal_62 = 6;
	Local_66.f_2.f_13 = 0;
}

void func_228()
{
	if (iLocal_53 == 0)
	{
		if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
		{
			switch (iLocal_56)
			{
				case 1:
					iLocal_56 = 0;
					break;
				
				case 2:
					unk_0x4261814A9A26E86F(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 3:
					unk_0x4261814A9A26E86F(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 4:
					unk_0x4261814A9A26E86F(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 5:
					unk_0x4261814A9A26E86F(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 6:
					iLocal_56 = 0;
					break;
				
				case 7:
					unk_0x4261814A9A26E86F(Local_66.f_2, Local_66.f_2.f_15, Local_66.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				}
			}
	}
}

void func_229()
{
	switch (iLocal_57)
	{
		case 1:
			func_222();
			iLocal_57 = 2;
			break;
		
		case 2:
			if (iLocal_53 == 2)
			{
				func_231();
				Local_66.f_2.f_13 = 0;
				iLocal_57 = 3;
			}
			if ((func_45() || func_44()) && !Local_66.f_2.f_13)
			{
				Local_66.f_2.f_13 = 1;
			}
			if (!Local_66.f_2.f_14)
			{
				if (!unk_0xECEC7528A52B4EE8(Local_66.f_2) && unk_0x11DBA82F76F3C4C2(Local_66.f_2))
				{
					Local_66.f_2.f_14 = 1;
				}
			}
			if ((Local_66.f_2.f_13 && !unk_0xECEC7528A52B4EE8(Local_66.f_2)) && !iLocal_58 == 12)
			{
				func_230();
			}
			break;
		
		case 3:
			if (iLocal_53 >= 7)
			{
				func_222();
				iLocal_57 = 4;
			}
			break;
	}
}

void func_230()
{
	if ((unk_0xDFB7BFA6482FEE1E() - Local_66.f_2.f_10) > 5000)
	{
		unk_0x8D5B447F21217223(&(Local_66.f_2.f_24));
		unk_0x5C679902079A7E80(&(Local_66.f_2.f_24));
		unk_0xB0C1A43193C25F7A(0, Local_66, 0);
		unk_0x8ADA462BC5F42FD8(0, Local_66, -1, 0, 2);
		unk_0x1BBD0A5729AB1226(Local_66.f_2.f_24);
		unk_0x8A1AC8EBC73850C8(Local_66.f_2, Local_66.f_2.f_24);
		Local_66.f_2.f_10 = unk_0xDFB7BFA6482FEE1E();
	}
}

void func_231()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		unk_0x880C7B361C9651EE(Local_66.f_2);
	}
}

int func_232()
{
	if (unk_0x47A71ED5EBF4D6CA(Local_66.f_186, Local_66.f_189, Local_66.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	if (unk_0xDCD58F2C1C3707C7(-1, Local_66.f_186, Local_66.f_189, Local_66.f_192))
	{
		return 1;
	}
	return 0;
}

void func_234()
{
	if (!Local_66.f_465)
	{
		if (func_235())
		{
			if (!func_15(&(Local_66.f_474)))
			{
				func_12(&(Local_66.f_474));
			}
			else if (func_195(&(Local_66.f_474), 1f))
			{
				Local_66.f_465 = 1;
				iLocal_51 = 26;
				if (!unk_0xECEC7528A52B4EE8(Local_66.f_2))
				{
					unk_0x1DC2BF231DE6A016(Local_66.f_2, unk_0x7D2B9E6A64637269(), 100f, -1, 0, 0);
					func_16(1, 0);
				}
			}
		}
		else if (func_15(&(Local_66.f_474)))
		{
			func_40(&(Local_66.f_474));
		}
	}
}

int func_235()
{
	int iVar0;
	
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		if (func_236())
		{
			unk_0xBDC364B886846D11(Local_66, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x7F716EA884E75E49(Local_66))
				{
					if (unk_0x836F48E8C4A773BF(Local_66.f_2, Local_66, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_236()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_237()
{
	if (iLocal_58 != 12)
	{
		if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
		{
			if (unk_0x11DBA82F76F3C4C2(Local_66.f_2))
			{
				unk_0x1DC2BF231DE6A016(Local_66.f_2, Local_66, 100f, -1, 0, 0);
				iLocal_58 = 12;
				iLocal_57 = 4;
				iLocal_56 = 8;
				iLocal_60 = 15;
				if (iLocal_63 == 1)
				{
					iLocal_63 = 2;
				}
				else
				{
					iLocal_63 = 3;
				}
				iLocal_62 = 13;
				iLocal_51 = 27;
				if (!Local_66.f_2.f_14)
				{
					Local_66.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_238()
{
	switch (iLocal_55)
	{
		case 1:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xEEC203A73BC92E7E(Local_66.f_486))
				{
					if (unk_0x0BC8768247440B3A(Local_66.f_486) > 0.876f)
					{
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_486 >= 0)
			{
				if (unk_0xEEC203A73BC92E7E(Local_66.f_486))
				{
					if (unk_0x0BC8768247440B3A(Local_66.f_486) > 0.894f || (unk_0x0BC8768247440B3A(Local_66.f_486) > 0.871f && vdist2(unk_0xD6E677FAD7521410(Local_66.f_28, 1), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) < 1f))
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_16(1, 0);
			func_239(0);
			unk_0x61918AA39871DD2B(Local_66.f_28, 0, 0);
			iLocal_55 = 5;
			break;
		
		case 4:
			func_16(1, 0);
			func_239(1);
			unk_0x4603196EEEA2355C(Local_66.f_28, 0, 0);
			iLocal_55 = 5;
			break;
		
		case 5:
			if (unk_0xDA872572A987B2AD(Local_66.f_28, unk_0x7D2B9E6A64637269()))
			{
				func_208(func_105(), 1, iLocal_81, 0, 0);
				unk_0x4603196EEEA2355C(Local_66.f_28, 0, 0);
				if (unk_0x575B7C28D81C0B4D(Local_66.f_28.f_2))
				{
					unk_0x1AD5BCFEC31BB8D9(&(Local_66.f_28.f_2));
				}
				if (iLocal_60 != 12)
				{
					iLocal_60 = 12;
				}
				func_199(297, 0, 0);
				Local_66.f_468 = 1;
				Local_66.f_28.f_6 = unk_0x5AD02BBC63E31E46();
				unk_0x9B0169E27978C1A2(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
				func_13(&(Local_66.f_28.f_15));
				iLocal_55 = 6;
			}
			else if (!unk_0xE50EB54E0F21BED0(Local_66.f_28, 0) && unk_0x1F9D47D45E125FA6(Local_66.f_28))
			{
			}
			break;
		
		case 6:
			if (func_9(&(Local_66.f_28.f_15)) > 2.5f)
			{
				if (unk_0x419E13582192CFEA(Local_66.f_28) && unk_0xDA872572A987B2AD(Local_66.f_28, unk_0x7D2B9E6A64637269()))
				{
					unk_0x3211C35423263392(unk_0x7D2B9E6A64637269(), 1, 1);
					unk_0x04F4D55F2C0C756D(&(Local_66.f_28));
				}
				iLocal_55 = 7;
			}
			break;
	}
}

void func_239(bool bParam0)
{
	Local_66.f_28.f_3 = 0;
	unk_0x191DDA30577F440A(&(Local_66.f_28.f_3), 3);
	unk_0x191DDA30577F440A(&(Local_66.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_81 = unk_0xB36B8558948EA7A8(Local_66.f_28.f_4, Local_66.f_28.f_5);
		if (!unk_0x575B7C28D81C0B4D(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_242(Local_66.f_28);
			unk_0xFA3E6ADC3E5D386E(Local_66.f_28.f_2, 2);
		}
		unk_0x31A051E72DD399A9(Local_66.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_81 = unk_0xB36B8558948EA7A8(50, Local_66.f_28.f_4);
		Local_66.f_28.f_1 = unk_0x3A63BEB7A1E25FB1(joaat("pickup_money_variable"), unk_0xD6E677FAD7521410(Local_66.f_28, 1), Local_66.f_28.f_3, iLocal_81, 1, 0);
		if (!unk_0x575B7C28D81C0B4D(Local_66.f_28.f_2))
		{
			Local_66.f_28.f_2 = func_240(Local_66.f_28.f_1);
		}
	}
	Local_66.f_28.f_14 = 1;
}

int func_240(var uParam0)
{
	var uVar0;
	
	if (!unk_0xC2EBFA0B77E6B2D4(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x214E857DC196E5F9(uParam0);
	unk_0xDD205B87CDFD0C1B(uVar0, func_241(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	return uVar0;
}

float func_241(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_242(var uParam0)
{
	return func_243(uParam0, 1, 0);
}

int func_243(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x419E13582192CFEA(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xB20BB447C131B310(iParam0);
	if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_241(unk_0x02BFF15CAA701972(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB592493CDC7124C3(uVar0, iParam1);
		}
		else
		{
			unk_0xFA3E6ADC3E5D386E(uVar0, 2);
		}
	}
	else if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_241(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
		unk_0xB592493CDC7124C3(uVar0, iParam1);
	}
	else if (unk_0x50997FC21D62251F(iParam0))
	{
		unk_0xDD205B87CDFD0C1B(uVar0, func_241(unk_0x02BFF15CAA701972(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_244()
{
	int iVar0;
	int iVar1;
	
	if (Local_66.f_464)
	{
		switch (iLocal_59)
		{
			case 2:
				if (func_1(Local_66.f_470, 4))
				{
					func_248();
					Local_66.f_46.f_39 = unk_0xDFB7BFA6482FEE1E();
					iLocal_59 = 3;
				}
				break;
			
			case 3:
				if (unk_0xDFB7BFA6482FEE1E() - Local_66.f_46.f_39) > unk_0xB36B8558948EA7A8(1000, 3000)
				{
					if (unk_0xBFCE58B2B3249999(Local_66.f_46.f_4[0], 0))
					{
						unk_0xE3F32DF0088B1EA4(Local_66.f_46.f_4[0], 1);
					}
					iLocal_59 = 4;
				}
				break;
			
			case 4:
				if (func_247() && func_246())
				{
					iLocal_59 = 5;
				}
				break;
			
			case 5:
				iLocal_51 = 24;
				func_16(1, 0);
				iLocal_59 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((unk_0xECEC7528A52B4EE8(Local_66.f_46[iVar0]) || (!unk_0xE50EB54E0F21BED0(Local_66.f_46[iVar0], 0) && unk_0x73E0CF006385B59C(Local_66.f_46[iVar0], 0, 2))) || unk_0xECEC7528A52B4EE8(Local_66.f_2)) || (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0) && unk_0x73E0CF006385B59C(Local_66.f_2, 0, 2))) || func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0xECEC7528A52B4EE8(Local_66.f_46[iVar1]))
							{
								unk_0x9DA29013F33252A6(Local_66.f_46[iVar1], unk_0x7D2B9E6A64637269(), 0, 16);
								unk_0xBE91B077ADADE97F(Local_66.f_46[iVar1], 0);
							}
							iVar1++;
						}
						iLocal_59 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_245();
				iLocal_59 = 0;
				break;
			}
	}
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE50EB54E0F21BED0(Local_66.f_46[iVar0], 0))
		{
			unk_0xBE91B077ADADE97F(Local_66.f_46[iVar0], 0);
		}
		iVar0++;
	}
}

int func_246()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE50EB54E0F21BED0(Local_66.f_46[iVar0], 0))
		{
			if (!unk_0xC49311A2A500FF09(Local_66.f_46[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_247()
{
	int iVar0;
	
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_46[iVar0], 0))
			{
				if (!unk_0x98E18969B1D0C4AB(Local_66.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0xE50EB54E0F21BED0(Local_66.f_46.f_4[iVar0], 0))
			{
				if (!unk_0x98E18969B1D0C4AB(Local_66.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_248()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_66.f_46[iVar0] = unk_0x0FDCFECB2EF2BC1C(6, Local_66.f_46.f_26, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], 1, 1);
		unk_0x4985CD0720AFD468(Local_66.f_46[iVar0], 1, 0);
		unk_0xBE91B077ADADE97F(Local_66.f_46[iVar0], 1);
		Local_66.f_46.f_4[iVar0] = unk_0x170478CC84C8AE2F(Local_66.f_46.f_27, Local_66.f_46.f_8[iVar0 /*3*/], Local_66.f_46.f_18[iVar0], 1, 1, 0);
		unk_0x4985CD0720AFD468(Local_66.f_46.f_4[iVar0], 1, 0);
		if (!(unk_0xE50EB54E0F21BED0(Local_66.f_46[iVar0], 0) && unk_0xE50EB54E0F21BED0(Local_66.f_46.f_4[iVar0], 0)))
		{
			unk_0xB1D85A6C23F2F945(Local_66.f_46[iVar0], Local_66.f_46.f_4[iVar0], -1);
			unk_0xD82D50E4AC0D46B9(Local_66.f_46[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		unk_0x5C679902079A7E80(&(Local_66.f_46.f_35[iVar0]));
		unk_0xE946751408DFA71B(0, Local_66.f_46.f_4[iVar0], Local_66.f_46.f_22, (unk_0xACBF3CDEE04E0AEC(Local_66.f_46.f_4[iVar0]) - 8f), 1, Local_66.f_46.f_27, 786981, Local_66.f_46.f_25, -1f);
		unk_0xCC5ED49CF9C9215F(0, 0, 0);
		unk_0x2AA99ECF9FBD1E5D(0, Local_66, -1, 0);
		unk_0x1BBD0A5729AB1226(Local_66.f_46.f_35[iVar0]);
		unk_0x8A1AC8EBC73850C8(Local_66.f_46[iVar0], Local_66.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_249()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(Local_66))
	{
		unk_0xBDC364B886846D11(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_60)
	{
		case 1:
			iLocal_60 = 6;
			break;
		
		case 2:
			iLocal_51 = 2;
			iLocal_60 = 5;
			break;
		
		case 3:
			iLocal_51 = 3;
			iLocal_60 = 5;
			break;
		
		case 4:
			iLocal_51 = 4;
			iLocal_60 = 5;
			break;
		
		case 5:
			if (((((func_25(Local_66) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_303())
			{
				iLocal_60 = 7;
			}
			break;
		
		case 6:
			if (func_25(Local_66) != joaat("weapon_unarmed") && func_303())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_60 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_60 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_60 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_60 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_60 = 15;
			break;
		
		case 8:
			iLocal_51 = 2;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 9:
			iLocal_51 = 3;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 10:
			iLocal_51 = 4;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 11:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_451), 1))
			{
				func_227();
				iLocal_58 = 5;
			}
			break;
		
		case 12:
			if (!func_303())
			{
				if (!Local_66.f_464)
				{
					iLocal_62 = 9;
					iLocal_60 = 15;
				}
				else
				{
					iLocal_60 = 13;
				}
			}
			break;
		
		case 13:
			if (unk_0x4DDAC4C80BACF92C(Local_66) < 0.1f && !func_251())
			{
				func_250();
				iLocal_60 = 14;
			}
			else if (func_251() && !func_303())
			{
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (func_251() && !func_303())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0xECEC7528A52B4EE8(Local_66.f_46[iVar1]))
					{
						unk_0x9DA29013F33252A6(Local_66.f_46[iVar1], unk_0x7D2B9E6A64637269(), 0, 16);
						unk_0xBE91B077ADADE97F(Local_66.f_46[iVar1], 0);
					}
					iVar1++;
				}
				iLocal_62 = 9;
				iLocal_60 = 15;
			}
			break;
	}
}

void func_250()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE50EB54E0F21BED0(Local_66.f_46[iVar0], 0))
		{
			if (!unk_0x2F4A7A59A01DB353(Local_66.f_46[iVar0]))
			{
				unk_0xCA089CD1A17D76DF(Local_66.f_46[iVar0]);
				unk_0xC74074470B4DB0EF(Local_66.f_46[iVar0], Local_66);
			}
		}
		iVar0++;
	}
}

int func_251()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_46.f_28, Local_66.f_46.f_31, Local_66.f_46.f_34, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_252()
{
	switch (iLocal_63)
	{
		case 0:
			if (!iLocal_93)
			{
				if (func_253())
				{
					iLocal_51 = 9;
					iLocal_58 = 7;
					iLocal_50 = 3;
					iLocal_62 = 13;
					iLocal_63 = 3;
					iLocal_93 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_253()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0x419E13582192CFEA(Local_66))
	{
		unk_0xBDC364B886846D11(Local_66, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_66.f_470, 128))
	{
		if ((unk_0x6B9E71121F5B8154(Local_66.f_2) || (unk_0xA6E8FBD68548675F(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))) || func_254(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0x6B9E71121F5B8154(Local_66.f_2))
			{
			}
			if (unk_0xA6E8FBD68548675F(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_254(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0x591190E69BE43117(Local_66.f_2, Local_66.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0))
			{
				Var1 = { unk_0xD6E677FAD7521410(Local_66.f_2, 1) };
				Var1 = { Local_66.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_254(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	return unk_0x0BABEFEA577FCFA4(Var0, Param1, iParam2);
}

void func_255()
{
	switch (iLocal_61)
	{
		case 0:
			if (func_283())
			{
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			func_276();
			iLocal_61 = 2;
			break;
		
		case 2:
			func_272();
			iLocal_61 = 3;
			break;
		
		case 3:
			if (func_267())
			{
				iLocal_61 = 4;
			}
			break;
		
		case 4:
			func_256();
			unk_0x13520157939D4329(unk_0x1146A9AE09CE2B14());
			iLocal_65 = 1;
			break;
	}
}

void func_256()
{
	func_260();
	func_259();
	func_258();
	if (unk_0xE75EE67F14EAAE37(Local_66.f_185))
	{
		unk_0x5F9C583F796C0E96(Local_66.f_2, Local_66.f_185);
		unk_0x5F9C583F796C0E96(Local_66.f_28, Local_66.f_185);
		if (!bLocal_86)
		{
			unk_0x5F9C583F796C0E96(Local_66.f_96.f_1, Local_66.f_185);
		}
	}
	func_257();
}

void func_257()
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
	int iVar10;
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
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = unk_0xB36B8558948EA7A8(1, 11);
	iVar1 = unk_0xB36B8558948EA7A8(1, 5);
	iVar2 = unk_0xB36B8558948EA7A8(1, 5);
	iVar3 = unk_0xB36B8558948EA7A8(1, 3);
	iVar4 = unk_0xB36B8558948EA7A8(1, 6);
	iVar5 = unk_0xB36B8558948EA7A8(1, 4);
	iVar6 = unk_0xB36B8558948EA7A8(1, 5);
	iVar7 = unk_0xB36B8558948EA7A8(1, 4);
	iVar8 = unk_0xB36B8558948EA7A8(1, 4);
	iVar9 = unk_0xB36B8558948EA7A8(1, 5);
	iVar10 = unk_0xB36B8558948EA7A8(1, 5);
	iVar11 = unk_0xB36B8558948EA7A8(1, 5);
	iVar12 = unk_0xB36B8558948EA7A8(1, 5);
	iVar13 = unk_0xB36B8558948EA7A8(1, 9);
	iVar14 = unk_0xB36B8558948EA7A8(1, 3);
	iVar15 = unk_0xB36B8558948EA7A8(1, 5);
	iVar16 = unk_0xB36B8558948EA7A8(1, 3);
	iVar17 = unk_0xB36B8558948EA7A8(1, 6);
	iVar18 = unk_0xB36B8558948EA7A8(1, 5);
	iVar19 = unk_0xB36B8558948EA7A8(1, 4);
	iVar20 = unk_0xB36B8558948EA7A8(1, 4);
	iVar21 = unk_0xB36B8558948EA7A8(1, 4);
	iVar22 = unk_0xB36B8558948EA7A8(1, 6);
	iVar23 = unk_0xB36B8558948EA7A8(1, 6);
	iVar24 = unk_0xB36B8558948EA7A8(1, 6);
	iVar25 = unk_0xB36B8558948EA7A8(1, 6);
	iVar26 = unk_0xB36B8558948EA7A8(1, 4);
	iVar27 = unk_0xB36B8558948EA7A8(1, 3);
	iVar28 = unk_0xB36B8558948EA7A8(1, 4);
	iVar29 = unk_0xB36B8558948EA7A8(1, 4);
	if (func_105() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_105() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_105() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_66.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_66.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_66.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_66.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_66.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_66.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_66.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_66.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_66.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_66.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_66.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_66.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_66.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_66.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_66.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_66.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_66.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_66.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_66.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_66.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_66.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_66.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_66.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_66.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_66.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_66.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_66.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_66.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_66.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_66.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_66.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_66.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_66.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_66.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_66.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_66.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_66.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_66.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_66.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_66.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_66.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_66.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_66.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_66.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_66.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_66.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_66.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_66.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_66.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_66.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_66.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_66.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_66.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_66.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_66.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_66.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_66.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_66.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_66.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_66.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_66.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_66.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_66.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_66.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_66.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_66.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_66.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_66.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_66.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_66.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_66.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_66.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_66.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_66.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_66.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_66.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_66.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_66.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_66.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_66.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_66.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_66.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_221.f_166 = "OJSRAUD";
	Local_66.f_221.f_167 = "OJSR_GREET";
	Local_66.f_221.f_168 = "OJSR_BATEQ";
	Local_66.f_221.f_169 = "OJSR_TOOLEQ";
	Local_66.f_221.f_170 = "OJSR_STICKEQ";
	Local_66.f_221.f_171 = "OJSR_WORRY";
	Local_66.f_221.f_172 = "OJSR_SHOCK";
	Local_66.f_221.f_173 = "OJSR_STUBBRN";
	Local_66.f_221.f_174 = "OJSR_COUNTER";
	Local_66.f_221.f_175 = "OJSR_BACKRM";
	Local_66.f_221.f_176 = "OJSR_BUMP";
	Local_66.f_221.f_177 = "OJSR_BPAIM";
	Local_66.f_221.f_178 = "OJSR_BPAIMAG";
	Local_66.f_221.f_179 = "OJSR_HOLDUP";
	Local_66.f_221.f_180 = "OJSR_SCARED";
	Local_66.f_221.f_181 = "OJSR_KNIFAIM";
	Local_66.f_221.f_182 = "OJSR_TOOLAIM";
	Local_66.f_221.f_183 = "OJSR_GRANAIM";
	Local_66.f_221.f_184 = "OJSR_STICAIM";
	Local_66.f_221.f_185 = "OJSR_BRAVE";
	Local_66.f_221.f_186 = "OJSR_MOREAIM";
	Local_66.f_221.f_187 = "OJSR_SURNDER";
	Local_66.f_221.f_188 = "OJSR_COPS";
	Local_66.f_221.f_189 = "OJSR_POURCAN";
	Local_66.f_221.f_190 = "OJSR_FLEE";
	Local_66.f_221.f_191 = "OJSR_RECSCAR";
	Local_66.f_221.f_192 = "OJSR_RECAGGR";
	Local_66.f_221.f_193 = "OJSR_CSTMER";
	Local_66.f_221.f_194 = "OJSR_MOSC";
	Local_66.f_221.f_195 = "OJSR_PLRHUR";
	Local_66.f_221.f_196 = "OJSR_BUY";
	Local_66.f_221.f_197 = "OJSR_STEAL";
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
}

void func_258()
{
	unk_0xD2FBB949CDCF79AB(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), 1);
	unk_0xD2FBB949CDCF79AB(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	unk_0xD2FBB949CDCF79AB(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_66.f_96.f_1 = unk_0x795434E153F90E41(Local_66.f_96, Local_66.f_486.f_6, 1, 1, 0);
	unk_0xCD37A28258D70638(Local_66.f_96.f_1, Local_66.f_96.f_5);
	unk_0xA2C015B68CE01357(Local_66.f_96.f_1, 1);
}

void func_259()
{
	Local_66.f_28 = unk_0x61A4FE6962D74E54(joaat("pickup_portable_crate_unfixed"), Local_66.f_28.f_7, 0, Local_66.f_28.f_13);
	unk_0xBDDCDEC7B6205897(Local_66.f_28, Local_66.f_28.f_10, 2, 1);
	unk_0x4603196EEEA2355C(Local_66.f_28, 0, 0);
	unk_0x61918AA39871DD2B(Local_66.f_28, 1, 0);
	Local_66.f_28.f_14 = 0;
}

void func_260()
{
	var uVar0;
	var uVar1;
	
	Local_66.f_2 = unk_0x0FDCFECB2EF2BC1C(4, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, 1, 1);
	func_266(iLocal_80, &uVar1, &uVar0);
	unk_0x4170FE884DF7426D(Local_66.f_2, 0, uVar1, uVar0, 0);
	func_265(&uVar1, &uVar0);
	unk_0x4170FE884DF7426D(Local_66.f_2, 2, uVar1, uVar0, 0);
	func_264(&uVar1, &uVar0);
	unk_0x4170FE884DF7426D(Local_66.f_2, 3, uVar1, uVar0, 0);
	func_263(&uVar1, &uVar0);
	unk_0x4170FE884DF7426D(Local_66.f_2, 4, uVar1, uVar0, 0);
	func_262(&uVar1, &uVar0);
	unk_0x4170FE884DF7426D(Local_66.f_2, 8, uVar1, uVar0, 0);
	unk_0xBE91B077ADADE97F(Local_66.f_2, 1);
	if (Local_66.f_2.f_12)
	{
		func_261();
	}
}

void func_261()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
	}
}

void func_262(var uParam0, var uParam1)
{
	*uParam0 = unk_0xB36B8558948EA7A8(0, 2);
	if (*uParam0 == 0)
	{
		*uParam1 = unk_0xB36B8558948EA7A8(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_263(var uParam0, var uParam1)
{
	*uParam0 = 0;
	*uParam1 = unk_0xB36B8558948EA7A8(0, 2);
}

void func_264(var uParam0, var uParam1)
{
	*uParam0 = unk_0xB36B8558948EA7A8(0, 2);
	*uParam1 = unk_0xB36B8558948EA7A8(0, 3);
}

void func_265(var uParam0, var uParam1)
{
	*uParam0 = unk_0xB36B8558948EA7A8(0, 3);
	if (*uParam0 > 0)
	{
		*uParam1 = unk_0xB36B8558948EA7A8(0, 2);
	}
	else
	{
		*uParam1 = 0;
	}
}

void func_266(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = unk_0xB36B8558948EA7A8(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = unk_0xB36B8558948EA7A8(0, 3);
			break;
	}
}

int func_267()
{
	if (!func_268(&Local_96))
	{
		return 0;
	}
	if (!bLocal_86)
	{
		if (!unk_0x0EC2B29D4172D225(Local_66.f_2.f_15))
		{
			return 0;
		}
	}
	if (!unk_0xC4EACCE45DBAA313(Local_66.f_185))
	{
		return 0;
	}
	unk_0x6ECBFF1E07110050(0);
	return 1;
}

int func_268(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_269(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_269(var uParam0)
{
	return func_270(*uParam0, "NULL", uParam0->f_1);
}

int func_270(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(uParam0, 30))
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, 29))
		{
			switch (func_271(iParam0))
			{
				case 0:
					return unk_0xA9C0BBFB9CBB66F1(uParam2);
					break;
				
				case 1:
					return unk_0x0EC2B29D4172D225(sParam1);
					break;
				
				case 2:
					return unk_0x472AC3055A188881(sParam1);
					break;
				
				case 3:
					return unk_0xAD9D75DD073BF477(sParam1);
					break;
				
				case 4:
					return unk_0x9CF7186A344D26A9(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x9745FAC5B3E4C8B8(sParam1);
					break;
				
				case 6:
					return unk_0x952AB441FA24BF16(sParam1, unk_0x234B68AC2E35ED5A(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0xD3419C924F3692F7(iParam2);
					break;
				
				case 8:
					return unk_0x080D38ACEC5DC1A2(iParam2);
					break;
				
				case 9:
					return unk_0xB4C12EFC62A8536A();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x234B68AC2E35ED5A(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_272()
{
	unk_0x6ECBFF1E07110050(1);
	if (!bLocal_86)
	{
		unk_0x068BDE31F7D112BB(Local_66.f_2.f_15);
		Local_96.f_32 = unk_0x2053F6ACFD4ED4BC();
	}
	func_273(&Local_96, Local_66.f_2.f_5);
	func_273(&Local_96, Local_66.f_28.f_13);
	func_273(&Local_96, Local_66.f_96);
	Local_66.f_466 = 1;
}

void func_273(var uParam0, int iParam1)
{
	func_274(uParam0, 0, iParam1, 0);
}

void func_274(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_275(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x191DDA30577F440A(uParam0[iVar0 /*2*/], iParam1);
			unk_0x191DDA30577F440A(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_276()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	func_281(iLocal_80, &(Local_66.f_46.f_8), &(Local_66.f_46.f_18), &(Local_66.f_46.f_22), &(Local_66.f_46.f_25), &(Local_66.f_46.f_26), &(Local_66.f_46.f_27), &(Local_66.f_46.f_28), &(Local_66.f_46.f_31), &(Local_66.f_46.f_34));
	func_279(iLocal_80);
	Var0 = { -3244.573f, 1000.658f, 12.83f };
	fVar3 = 175.074f;
	Var1 = { -3242.008f, 1001.202f, 11.83071f };
	Var2 = { Var1 - Var0 };
	Var2 = { func_306(Var2, fVar3) };
	Var1 = { -3245.088f, 1001.468f, 13.65071f };
	Var2 = { Var1 - Var0 };
	Var2 = { func_306(Var2, fVar3) };
	Var1 = { -3243.37f, 1000.37f, 12.83f };
	Var2 = { Var1 - Var0 };
	Var2 = { func_306(Var2, fVar3) };
	Local_66.f_469 = -1;
	Local_66.f_102.f_22 = -1;
	Local_66.f_96 = joaat("p_till_01_s");
	Local_66.f_96.f_2 = { Local_66.f_486.f_6 };
	Local_66.f_96.f_5 = (Local_66.f_486.f_9.f_2 + 180f);
	Local_66.f_451.f_3 = 0;
	Local_66.f_458 = 0;
	Local_66.f_459 = 0;
	Local_66.f_460 = 0;
	Local_66.f_461 = 0;
	Local_66.f_462 = 0;
	Local_66.f_465 = 0;
	func_278(iLocal_80, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_277();
}

void func_277()
{
	Local_66.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_66.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_66.f_86.f_5 = 2f;
}

void func_278(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_279(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_280(Local_66.f_186, Local_66.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_66.f_185 = unk_0xFA82BD1142427E0F(Var0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_66.f_185 = unk_0xFA82BD1142427E0F(Var0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_66.f_185 = unk_0xFA82BD1142427E0F(Var0, "v_shop_247");
			break;
	}
}

Vector3 func_280(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	
	Var0.x = ((Param0.x + Param1.x) / 2f);
	Var0.f_1 = ((Param0.f_1 + Param1.f_1) / 2f);
	Var0.f_2 = ((Param0.f_2 + Param1.f_2) / 2f);
	return Var0;
}

void func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!func_282(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_282(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_283()
{
	struct<3> Var0;
	
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(Local_66, 1) };
		if (unk_0x0BABEFEA577FCFA4(Var0, Local_66.f_181, 1) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_284()
{
	if (Local_66.f_46.f_26 != 0)
	{
		unk_0x824F744352C8BC82(Local_66.f_46.f_26);
	}
	if (Local_66.f_46.f_27 != 0)
	{
		unk_0x824F744352C8BC82(Local_66.f_46.f_27);
	}
	if (!unk_0xAB6A270F84A8781E(Local_66.f_2.f_15))
	{
		unk_0xF9135F131C423364(Local_66.f_2.f_15);
	}
}

int func_285()
{
	if (Global_112293.f_9083)
	{
		if (!func_289(56))
		{
			return 1;
		}
	}
	if (func_288())
	{
		return 1;
	}
	if (!unk_0xCC7E6EA219FD8BAC())
	{
		return 1;
	}
	if (func_305() && !func_304())
	{
		return 1;
	}
	if (func_287() && func_286())
	{
		return 1;
	}
	if (Global_31348)
	{
		unk_0x66AE54CE92457FEE(1);
		unk_0x4BFE89D21F9885DC();
	}
	return 0;
}

bool func_286()
{
	return Global_112011 > 0;
}

int func_287()
{
	if (Global_96292 != -1)
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	struct<3> Var0;
	float fVar1;
	
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		Var0 = { unk_0xD6E677FAD7521410(Local_66, 1) };
		fVar1 = unk_0x0BABEFEA577FCFA4(Var0, Local_66.f_181, 1);
		if (fVar1 > Local_66.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

void func_290(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((unk_0x2053F6ACFD4ED4BC() >= (uParam0->f_32 + uParam0->f_33) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 2)) || unk_0x234B68AC2E35ED5A(Global_99370.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], 29))
					{
						func_291(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = unk_0x2053F6ACFD4ED4BC();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_291(var uParam0)
{
	func_292(uParam0, "NULL", uParam0->f_1);
}

void func_292(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(*uParam0, 30))
	{
		switch (func_271(*uParam0))
		{
			case 0:
				unk_0x16E516CA9C88FF48(uParam2);
				break;
			
			case 1:
				unk_0x068BDE31F7D112BB(sParam1);
				break;
			
			case 2:
				unk_0x5590FBCD51709DFE(sParam1);
				break;
			
			case 3:
				unk_0xA08F3C300F9E3468(sParam1, unk_0x234B68AC2E35ED5A(*uParam0, 28));
				break;
			
			case 4:
				unk_0x498685EB9132AF88(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x1594E542FF3D23EF(sParam1);
				break;
			
			case 6:
				unk_0x952AB441FA24BF16(sParam1, unk_0x234B68AC2E35ED5A(*uParam0, 27), -1);
				break;
			
			case 7:
				unk_0x5B99C7B716657782(iParam2);
				break;
			
			case 8:
				unk_0xBB3CDAB62C8773C8(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x7C0019321F1FC821();
				break;
			
			default:
				break;
		}
		unk_0x191DDA30577F440A(uParam0, 29);
	}
}

int func_293()
{
	int iVar0;
	
	if (Local_66.f_1 != Global_112293.f_20033.f_62[iLocal_80])
	{
		return 1;
	}
	iVar0 = (unk_0x9E6858A319A1F6F2() - Global_112293.f_20033.f_42[iLocal_80]);
	iLocal_85 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x9E6858A319A1F6F2() + 31;
		iVar0 = (iVar0 - Global_112293.f_20033.f_42[iLocal_80]);
	}
	if (iVar0 < iLocal_85)
	{
		return 0;
	}
	return 1;
}

void func_294(var uParam0, int iParam1)
{
	func_295(uParam0, iParam1);
}

void func_295(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_296(int iParam0, float fParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { unk_0x26C2ACB261895E70(func_297(iParam0), uParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0x26C2ACB261895E70(func_297(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0x26C2ACB261895E70(func_297(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0x26C2ACB261895E70(func_297(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { unk_0x26C2ACB261895E70(func_297(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0x26C2ACB261895E70(func_297(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_297(int iParam0)
{
	if (!func_282(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0xCA86FAB7FADC8353() - Global_112293.f_20033.f_21[iLocal_80]);
	iVar1 = (unk_0x9E6858A319A1F6F2() - Global_112293.f_20033.f_42[iLocal_80]);
	iLocal_84 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0xCA86FAB7FADC8353() + 24;
		iVar0 = (iVar0 - Global_112293.f_20033.f_21[iLocal_80]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_84 && iVar1 == 0) || (iVar0 < iLocal_84 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_299(bool bParam0)
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	struct<3> Var3[2];
	
	func_300(iLocal_80, &uVar1, &uVar2, &Var3);
	if (!func_1(Local_66.f_470, 64))
	{
		if (!unk_0x4336DC3297C47528(uVar1[iVar0]))
		{
			unk_0x94F284E4B5633B45(uVar1[0], uVar2[0], Var3[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1)
			{
				unk_0x94F284E4B5633B45(uVar1[1], uVar2[1], Var3[1 /*3*/], 0, 0, 0);
			}
		}
		func_294(&(Local_66.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x4336DC3297C47528(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0x8E492A20859BE285(uVar1[iVar0]) != 1)
				{
					unk_0x1EA8B94F4F446F35(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (unk_0x8E492A20859BE285(uVar1[iVar0]) != 0)
			{
				unk_0x1EA8B94F4F446F35(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = joaat("v_ilev_ml_door1");
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0x15173FB88ABC94F9("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_301(var uParam0, int iParam1)
{
	func_302(uParam0, iParam1);
}

void func_302(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_303()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66, 0))
	{
		if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_186, Local_66.f_189, Local_66.f_192, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_200, Local_66.f_203, Local_66.f_206, 0, 1, 0))
		{
			return 1;
		}
		else if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_207, Local_66.f_210, Local_66.f_213, 0, 1, 0))
		{
			return 1;
		}
		else if (Local_66.f_199 != -1f)
		{
			if (unk_0x8954E9D0A9F6F8CF(Local_66, Local_66.f_193, Local_66.f_196, Local_66.f_199, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304()
{
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xC1D06696CC3E719B() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_305()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_306(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	Var0.x = ((Param0.x * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.x * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_307(var uParam0)
{
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_59 = 1;
	iLocal_55 = 0;
	iLocal_58 = 1;
	iLocal_57 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	Local_66 = unk_0x7D2B9E6A64637269();
	func_315(&(uParam0->f_1[0 /*3*/]), &(Local_66.f_181), &iLocal_80);
	if ((((((((iLocal_80 == 10 || iLocal_80 == 11) || iLocal_80 == 12) || iLocal_80 == 13) || iLocal_80 == 14) || iLocal_80 == 15) || iLocal_80 == 16) || iLocal_80 == 17) || iLocal_80 == 18)
	{
		bLocal_94 = true;
	}
	Local_66.f_184 = 150f;
	Local_66.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_66.f_2.f_16 = "absolutely";
	Local_66.f_2.f_17 = "is_this_it";
	Local_66.f_2.f_18 = "shock";
	Local_66.f_2.f_19 = "anger_a";
	Local_66.f_2.f_20 = "screw_you";
	Local_66.f_2.f_21 = "but_why";
	Local_66.f_486.f_1 = "mp_am_hold_up";
	Local_66.f_486.f_2 = "guard_handsup_loop";
	Local_66.f_486.f_3 = "holdup_victim_20s";
	Local_66.f_486.f_4 = "holdup_victim_20s_bag";
	Local_66.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_82 = func_314();
	if (!bLocal_86)
	{
		func_310();
	}
	iLocal_87 = 0;
	if (iLocal_80 != 7)
	{
		iLocal_52 = 6;
	}
	else
	{
		iLocal_52 = 0;
	}
	if (func_105() == 0)
	{
		Local_66.f_1 = 0;
	}
	else if (func_105() == 1)
	{
		Local_66.f_1 = 1;
	}
	else if (func_105() == 2)
	{
		Local_66.f_1 = 2;
	}
	func_309(iLocal_80, &(Local_66.f_186), &(Local_66.f_189), &(Local_66.f_192), &(Local_66.f_193), &(Local_66.f_196), &(Local_66.f_199), &(Local_66.f_200), &(Local_66.f_203), &(Local_66.f_206), &(Local_66.f_207), &(Local_66.f_210), &(Local_66.f_213), &(Local_66.f_214), &(Local_66.f_217), &(Local_66.f_220), &(Local_66.f_102.f_6), &(Local_66.f_102.f_9));
	func_308(iLocal_80, &(Local_66.f_486.f_6), &(Local_66.f_486.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_28.f_7), &(Local_66.f_28.f_10), &(Local_66.f_28.f_13), &(Local_66.f_28.f_4), &(Local_66.f_28.f_5), &(Local_66.f_102.f_21));
}

void func_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { unk_0x26C2ACB261895E70(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0x26C2ACB261895E70(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0x26C2ACB261895E70(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { unk_0x26C2ACB261895E70(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_309(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_310()
{
	func_313();
	func_312();
	func_311();
}

void func_311()
{
	int iVar0;
	
	if (iLocal_82 >= 9)
	{
		if (Global_112293.f_20033.f_41 > 3)
		{
			if (iLocal_82 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0xB36B8558948EA7A8(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_66.f_464 = 1;
				Global_112293.f_20033.f_41 = 0;
			}
			else
			{
				Local_66.f_464 = 0;
				Global_112293.f_20033.f_41++;
			}
		}
		else
		{
			Global_112293.f_20033.f_41++;
		}
	}
	else
	{
		Global_112293.f_20033.f_41++;
	}
}

void func_312()
{
	int iVar0;
	
	if (iLocal_82 >= 3)
	{
		if (iLocal_82 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_66.f_2.f_12 = 1;
		}
		else
		{
			Local_66.f_2.f_12 = 0;
		}
	}
}

void func_313()
{
	int iVar0;
	
	if (iLocal_82 >= 6)
	{
		if (iLocal_82 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_58 = 2;
		}
		else
		{
			iLocal_58 = 1;
		}
	}
}

int func_314()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_112293.f_20033[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_315(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = vdist2(func_297(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = vdist2(*uParam0, func_297(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_297(*iParam2) };
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_317(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_318(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_319(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_319(int iParam0)
{
	return func_320(iParam0, Global_42009);
}

int func_320(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_321()
{
	if (((iLocal_63 == 1 || iLocal_63 == 2) || iLocal_101 == 7) || (unk_0xE50EB54E0F21BED0(Local_66.f_2, 0) && iLocal_65 == 1))
	{
		if (iLocal_63 == 1)
		{
		}
		if (iLocal_63 == 2)
		{
		}
		if (iLocal_101 == 7)
		{
		}
		if (unk_0xE50EB54E0F21BED0(Local_66.f_2, 0) && iLocal_65 == 1)
		{
		}
		Global_112293.f_20033.f_21[iLocal_80] = unk_0xCA86FAB7FADC8353();
		Global_112293.f_20033.f_42[iLocal_80] = unk_0x9E6858A319A1F6F2();
	}
	if ((unk_0x0B4295B1608BB934() && func_332()) && Local_66.f_468)
	{
		func_328(&iLocal_80, &iLocal_87, &iLocal_81);
	}
	func_327();
	iLocal_87 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	if (!bLocal_86)
	{
		unk_0x20D884FB6567BAD5(5);
	}
	unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
	unk_0xE6B53A6E51AAA49F(uLocal_79, 0);
	func_29("SHR_HOLDUP_1", 1);
	func_29("SHR_SNK_TUT", 1);
	if ((func_28("SHR_MENU") || func_28("SHR_HOLDUP_1")) || func_28("SHR_SNK_TUT"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	if (func_1(Local_66.f_470, 1024))
	{
		if ((unk_0x419E13582192CFEA(uLocal_98[0]) && unk_0x419E13582192CFEA(uLocal_98[1])) && unk_0x419E13582192CFEA(uLocal_98[2]))
		{
			unk_0x04F4D55F2C0C756D(&(uLocal_98[0]));
			unk_0x04F4D55F2C0C756D(&(uLocal_98[1]));
			unk_0x04F4D55F2C0C756D(&(uLocal_98[2]));
		}
	}
	if (iLocal_100 == 2)
	{
		unk_0xF9135F131C423364(Local_66.f_486.f_1);
	}
	func_322(&Local_96, 0);
	unk_0x4BFE89D21F9885DC();
}

void func_322(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_324(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_323(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_323(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_324(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar0 /*2*/], 30))
		{
			func_325(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_325(var uParam0)
{
	func_326(*uParam0, "NULL", uParam0->f_1);
}

void func_326(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0x234B68AC2E35ED5A(uParam0, 30))
	{
		switch (func_271(iParam0))
		{
			case 0:
				unk_0x824F744352C8BC82(uParam2);
				break;
			
			case 1:
				unk_0xF9135F131C423364(sParam1);
				break;
			
			case 2:
				unk_0x88718F88EB6B8FD5(sParam1);
				break;
			
			case 3:
				unk_0xB5F867E143F78583(sParam1);
				break;
			
			case 4:
				unk_0x7B6B41ECBE4B733F(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xD0AC51DF5D1C2659(sParam1);
				break;
			
			case 6:
				unk_0xE76ABB7DC1AD1626();
				break;
			
			case 7:
				unk_0x41BE3F722FC386CD(iParam2);
				break;
			
			case 8:
				unk_0xE498E37B41AEA1DF(iParam2, unk_0x234B68AC2E35ED5A(iParam0, 26));
				break;
			
			case 9:
				unk_0x4D2B6680250EFCC8();
				break;
			
			default:
				break;
		}
	}
}

void func_327()
{
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_2, 0))
	{
		unk_0xCA089CD1A17D76DF(Local_66.f_2);
	}
	if (unk_0x419E13582192CFEA(Local_66.f_2))
	{
		func_221();
		unk_0x0F3BD19FF11738D3(&(Local_66.f_2));
	}
	if (unk_0x419E13582192CFEA(Local_66.f_86))
	{
		unk_0x0F3BD19FF11738D3(&(Local_66.f_86));
	}
	if (!unk_0xE50EB54E0F21BED0(Local_66.f_28, 0))
	{
		if (iLocal_53 >= 4)
		{
			unk_0x90ED32458AC2D129(Local_66.f_28, -8f, 1);
			unk_0xBC5268D1B5C5B73B(Local_66.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0x419E13582192CFEA(Local_66.f_28))
	{
		unk_0x39E572BDDBA714A2(&(Local_66.f_28));
	}
	if (unk_0x419E13582192CFEA(Local_66.f_96.f_1))
	{
		unk_0x04F4D55F2C0C756D(&(Local_66.f_96.f_1));
		unk_0xC5CAF559D14B1D18(Local_66.f_486.f_6, 0.5f, joaat("prop_till_01"), 0);
		unk_0xC5CAF559D14B1D18(Local_66.f_486.f_6, 0.5f, joaat("prop_till_02"), 0);
		unk_0xC5CAF559D14B1D18(Local_66.f_486.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (unk_0xC2EBFA0B77E6B2D4(Local_66.f_28.f_1))
	{
		unk_0xDB5C5980B9AE89B9(Local_66.f_28.f_1);
	}
	if (func_15(&(Local_66.f_477)))
	{
		func_40(&(Local_66.f_477));
	}
	if (Local_66.f_466)
	{
		if (!bLocal_86)
		{
			unk_0xF9135F131C423364(Local_66.f_2.f_15);
		}
		Local_66.f_466 = 0;
	}
}

void func_328(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	
	iVar0 = func_331(*uParam1, 1, 0);
	StringCopy(&(Var2[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_330(iParam0)}, 6);
	if (func_329(276, &Var1, &Var2, 2, -1, 0, 0))
	{
		unk_0x81E9B27A86C752C9(131, *uParam2, to_float(*uParam2));
		unk_0x81E9B27A86C752C9(114, iVar0, to_float(iVar0));
	}
}

int func_329(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x0B4295B1608BB934())
	{
	}
	if ((!unk_0x3CEB66EC8A34CB10() && (unk_0xAE06D39287DB2B6A() || !unk_0xF54628B8295E0CFD())) && unk_0x976177065FE891D9())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x29712F962253A7EB())
			{
				Var2 = { func_147(unk_0x1146A9AE09CE2B14()) };
				if (unk_0xDA1611E46AAEA71B(&Var2))
				{
					if (unk_0xEDDAF8F99F371228(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x02BFF15CAA701972() && Global_2461742.f_3)
			{
				unk_0xF57054D6036F7B21(&Var0, &(Global_1669483.f_10));
			}
			else
			{
				unk_0x968102705396C4F1(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x3CEB66EC8A34CB10())
	{
	}
	if (!unk_0xAE06D39287DB2B6A())
	{
	}
	if (unk_0xF54628B8295E0CFD())
	{
	}
	if (!unk_0x976177065FE891D9())
	{
	}
	return 0;
}

struct<8> func_330(var uParam0)
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_331(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_332()
{
	if (func_334() && func_333(0))
	{
		return 1;
	}
	return 0;
}

var func_333(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_334()
{
	return func_333(func_78() + 1);
}

