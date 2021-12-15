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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	float fLocal_30 = 0f;
	struct<3> Local_31 = { 0, 0, 0 } ;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	char cLocal_44[64] = "";
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	char cLocal_53[64] = "";
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
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
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	StringCopy(&cLocal_44, "NULL", 64);
	StringCopy(&cLocal_53, "NULL", 64);
	if (unk_0x4210287E2833D44B(2))
	{
		func_68();
	}
	if (unk_0x419E13582192CFEA(uScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		wait(0);
		func_67();
		if (unk_0x419E13582192CFEA(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_66() && !func_65())) && !func_64(iLocal_41))
			{
				func_68();
			}
			if ((unk_0xF471787D45ADC2C1() && unk_0xC50751593572DDAE() != 3) && unk_0xE544790FBAA57D4F() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (unk_0x9EE168DA5EB62BF3(iScriptParam_69, 0))
			{
				func_68();
			}
			if (unk_0xF03E9E22B505CC07(iScriptParam_69))
			{
				if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
				{
					func_62();
					if (unk_0x5E7C0A485B91DB87(iScriptParam_69) < 950)
					{
						func_68();
					}
					switch (iLocal_29)
					{
						case 0:
							func_59();
							if (iLocal_41 == 5)
							{
								if (func_58(18) == 1 && func_58(20) == 0)
								{
									uLocal_39 = unk_0xE9B5676DFF7B46CD(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0x94DF8EC7DE1863A1(uLocal_39))
									{
										unk_0x6322ED685F2E1703(uLocal_39, 9);
									}
									unk_0x4BFE89D21F9885DC();
								}
							}
							if (iLocal_41 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0x47E8C764787EF133("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0x9783B77820E7F699(0);
								Global_31406[iLocal_41 /*11*/].f_2 = 0;
								Global_31406[iLocal_41 /*11*/].f_6 = 1;
								Global_31406[iLocal_41 /*11*/] = unk_0xB36B8558948EA7A8(0, 2);
								Global_31406[iLocal_41 /*11*/].f_1 = 0;
								Global_31406[iLocal_41 /*11*/].f_4 = 0;
								Global_31406[iLocal_41 /*11*/].f_7 = 0;
								Global_31406[iLocal_41 /*11*/].f_8 = 0;
								Global_31406[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								wait(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
							{
								wait(0);
							}
							else if (unk_0x67091B7523DD301D(iLocal_35) && unk_0x1595C3E8842A8F45(iLocal_35, 1119092736))
							{
								if (func_44() || Global_31406[iLocal_41 /*11*/].f_5)
								{
									iLocal_29 = 2;
								}
							}
							else
							{
								func_43(&iLocal_40);
							}
							break;
						
						case 2:
							func_53();
							if (!func_64(iLocal_41))
							{
								func_43(&iLocal_40);
								if (func_42("TV_HLP1"))
								{
									unk_0x66AE54CE92457FEE(1);
								}
							}
							if (unk_0x419E13582192CFEA(iLocal_35))
							{
								if (!unk_0x1F9D47D45E125FA6(iLocal_35))
								{
									unk_0x4603196EEEA2355C(iLocal_35, 1, 0);
								}
							}
							if (unk_0x419E13582192CFEA(iLocal_37))
							{
								if (!unk_0x1F9D47D45E125FA6(iLocal_37))
								{
									unk_0x4603196EEEA2355C(iLocal_37, 1, 0);
								}
							}
							if (unk_0x419E13582192CFEA(iLocal_36))
							{
								if (unk_0x1F9D47D45E125FA6(iLocal_36))
								{
									unk_0x4603196EEEA2355C(iLocal_36, 0, 0);
								}
							}
							if (!unk_0xDA654EB115F9FF7D(&cLocal_44, "NULL"))
							{
								unk_0xCDF87F9AAD28040F(&cLocal_44, 0);
							}
							unk_0xDFEBBBCF22115AF0(0);
							wait(0);
							if (unk_0x419E13582192CFEA(iLocal_38))
							{
								unk_0x04DD7CE0F03C289C(iLocal_38);
							}
							if (!func_64(iLocal_41))
							{
								if ((Global_31406[iLocal_41 /*11*/] == 3 || Global_31406[iLocal_41 /*11*/] == 2) || Global_31406[iLocal_41 /*11*/] == -1)
								{
									Global_31406[iLocal_41 /*11*/] = unk_0xB36B8558948EA7A8(0, 2);
								}
								unk_0xAD2289EA9C4D4F11(Global_31406[iLocal_41 /*11*/]);
								unk_0xEAB4ED37EBFA63CF(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_31406[iLocal_41 /*11*/];
								iLocal_43 = Global_31406[iLocal_41 /*11*/].f_1;
								unk_0x774561E80A3178A4(iLocal_42, func_41(iLocal_43), Global_31406[iLocal_41 /*11*/].f_9);
								unk_0xAD2289EA9C4D4F11(iLocal_42);
								if (Global_31406[iLocal_41 /*11*/].f_7)
								{
									Global_31406[iLocal_41 /*11*/].f_5 = 0;
									Global_31406[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_31406[iLocal_41 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_31406[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_31406[iLocal_41 /*11*/].f_7 && func_64(iLocal_41))
							{
								Global_31406[iLocal_41 /*11*/].f_7 = 0;
								iLocal_29 = 6;
							}
							if (!func_38(iLocal_41))
							{
								func_37();
								iLocal_29 = 5;
							}
							else
							{
								func_35();
								if (unk_0xCAE2ED65934CDBBA() == -1)
								{
									unk_0xAD2289EA9C4D4F11(Global_31406[iLocal_41 /*11*/]);
								}
								if (func_15())
								{
									iLocal_29 = 6;
								}
							}
							break;
						
						case 5:
							if (func_38(iLocal_41))
							{
								iLocal_29 = 2;
							}
							if (Global_31406[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							break;
						
						case 6:
							func_1();
							if (iLocal_40 != -1)
							{
								func_43(&iLocal_40);
							}
							Global_31406[iLocal_41 /*11*/].f_5 = 0;
							Global_31406[iLocal_41 /*11*/].f_4 = 0;
							Global_31406[iLocal_41 /*11*/].f_1 = 0;
							Global_31406[iLocal_41 /*11*/].f_2 = 0;
							Global_31406[iLocal_41 /*11*/].f_7 = 0;
							Global_31406[iLocal_41 /*11*/].f_8 = 0;
							Global_31406[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0x4BFE89D21F9885DC();
		}
	}
	func_68();
	unk_0x4BFE89D21F9885DC();
}

void func_1()
{
	if (iLocal_41 != -1)
	{
		Global_31406[iLocal_41 /*11*/] = unk_0xCAE2ED65934CDBBA();
	}
	fLocal_30 = unk_0x293EFD9177EC62E3();
	unk_0xAD2289EA9C4D4F11(-1);
	func_4();
	if (unk_0x636F1F53CC61D2C9(joaat("family5")) == 0)
	{
		if (!unk_0xDA654EB115F9FF7D(&cLocal_44, "NULL"))
		{
			unk_0xCDF87F9AAD28040F(&cLocal_44, 1);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	func_3();
	func_52();
	if (unk_0x419E13582192CFEA(iLocal_36))
	{
		if (!unk_0x1F9D47D45E125FA6(iLocal_36))
		{
			unk_0x4603196EEEA2355C(iLocal_36, 1, 0);
		}
	}
	unk_0x775EE0EF25FF3461(0);
	func_2();
}

void func_2()
{
	if (unk_0x3640D836D145B814())
	{
		if (iLocal_67 == 1)
		{
			unk_0xBD9F36815B9331DB();
			iLocal_67 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_33 == -1)
	{
		unk_0x27DA7E2B98AB7899(iLocal_33);
		if (unk_0x419E13582192CFEA(iLocal_35))
		{
			if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x6471F4759775FCA4(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x4603196EEEA2355C(iLocal_35, 0, 0);
				if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0x80B2E30CC8B794C0(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0x80B2E30CC8B794C0(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_37))
	{
		unk_0x4603196EEEA2355C(iLocal_37, 0, 0);
	}
}

void func_4()
{
	if (iLocal_65)
	{
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		if (unk_0x2671671BBCC6AD9F(uLocal_62))
		{
			unk_0x6FA8221C9D2ECB46(uLocal_62, 0);
		}
		unk_0xFE1DEC9C5734D0C0(uLocal_62, 0);
		unk_0xDF23DCD7A3E1B7A5(0);
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), 0);
			unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
			unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), Local_31, 1, 0, 2);
			if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 1, 0);
				}
			}
			unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 1, 0);
		}
		if (!unk_0xDA654EB115F9FF7D(&cLocal_53, "NULL"))
		{
			if (unk_0xB30CD10E2CD1B67D(&cLocal_53))
			{
				unk_0xC0BBE340BE2AA02D(&cLocal_53);
			}
		}
		if (unk_0x419E13582192CFEA(iLocal_37))
		{
			unk_0x4603196EEEA2355C(iLocal_37, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		unk_0x775EE0EF25FF3461(0);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_14(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_13())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_14(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_10(unk_0x1146A9AE09CE2B14())) && !func_7(unk_0x1146A9AE09CE2B14(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_10(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_6()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1312763;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
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

bool func_11()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_13()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
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

int func_15()
{
	if (!func_64(iLocal_41))
	{
		if (((((((func_31(&uLocal_26) >= 1f && unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_68, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0xB71084333B418824(iLocal_35) == unk_0xB71084333B418824(unk_0x7D2B9E6A64637269())) && !func_30(8, -1)) && !unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0)) && unk_0x3E09537707C40210(unk_0x7D2B9E6A64637269(), Local_31, 90f)) && !unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) && !unk_0xF471787D45ADC2C1())
		{
			if (iLocal_40 == -1)
			{
				func_29();
				func_28(&iLocal_40, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_26(iLocal_40, 1))
			{
				func_43(&iLocal_40);
				func_55(&uLocal_26);
				Global_31406[iLocal_41 /*11*/].f_7 = 0;
				if (unk_0x936616EE3F524830("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x9B0169E27978C1A2(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0x66AE54CE92457FEE(1);
			}
			func_2();
			func_43(&iLocal_40);
		}
	}
	return 0;
}

void func_16()
{
	if (iLocal_65 == 0)
	{
		unk_0x203739B163D4D88E(2, 222);
		if (unk_0x86AF801D34E482FF(2, 222))
		{
			func_43(&iLocal_40);
			func_28(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x366E7F593105797F(2, 200, 1);
		if (unk_0x1F9D47D45E125FA6(unk_0x7D2B9E6A64637269()))
		{
			unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 0, 0);
		}
		if (bLocal_34)
		{
			if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
			}
		}
		unk_0xAF98B1BA240CE3DB();
		unk_0xAE57E698E5255D74(unk_0x7D2B9E6A64637269());
		func_23(1, 1);
		unk_0x203739B163D4D88E(2, 222);
		func_17(0);
		if (unk_0x86AF801D34E482FF(2, 222) || (unk_0x0D901EFDFD7EF9D5(2) && unk_0x6DC4D8B66C3E0EA0(2, 200)))
		{
			func_43(&iLocal_40);
			func_4();
		}
	}
}

void func_17(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_20())
		{
			func_19(1, 1);
		}
		else
		{
			func_19(0, 0);
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
	if (!func_13())
	{
		Global_19798.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
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

bool func_20()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_21(int iParam0)
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

bool func_22()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_23(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 64;
	if (bParam0)
	{
		if (func_24(0))
		{
			if (!iLocal_22)
			{
				if (unk_0x936616EE3F524830("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x9B0169E27978C1A2(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xCAE2ED65934CDBBA() == 0)
				{
					unk_0xAD2289EA9C4D4F11(1);
				}
				else
				{
					unk_0xAD2289EA9C4D4F11(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22)
		{
			iLocal_22 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (unk_0x49721683C2EB0132(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0x293EFD9177EC62E3();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xEAB4ED37EBFA63CF(fVar2);
				iLocal_24 = unk_0xDFB7BFA6482FEE1E();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0x293EFD9177EC62E3();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xEAB4ED37EBFA63CF(fVar2);
				iLocal_24 = unk_0xDFB7BFA6482FEE1E();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x936616EE3F524830("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x9B0169E27978C1A2(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0xDFB7BFA6482FEE1E() > iLocal_24 + 24)
			{
				iLocal_23 = 0;
			}
		}
	}
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 64;
	iVar1 = (unk_0x49721683C2EB0132(2, 218) - 127);
	if (iParam0 || timera() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			settimera(0);
			return 1;
		}
	}
	return 0;
}

void func_25()
{
	float fVar0;
	
	fVar0 = 50f;
	if (iLocal_65 == 0)
	{
		uLocal_62 = unk_0x4EE8324979A597B2("DEFAULT_SCRIPTED_CAMERA", Local_63, Local_64, fVar0, 0, 2);
		unk_0x64B711F5179A0CEC(uLocal_62, 100f);
		unk_0x6FA8221C9D2ECB46(uLocal_62, 1);
		unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
		if (unk_0x419E13582192CFEA(iLocal_37))
		{
			unk_0x4603196EEEA2355C(iLocal_37, 0, 0);
		}
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), 1);
			unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
			if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
			{
				unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
				bLocal_34 = true;
			}
			unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), Local_31, -1, 0, 2);
			unk_0x4603196EEEA2355C(unk_0x7D2B9E6A64637269(), 0, 0);
		}
		if (!unk_0xDA654EB115F9FF7D(&cLocal_53, "NULL"))
		{
			if (!unk_0xB30CD10E2CD1B67D(&cLocal_53))
			{
				unk_0xB84B43B766630B5C(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		unk_0x775EE0EF25FF3461(1);
		iLocal_65 = 1;
	}
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0xCAD1755E530A6012(unk_0x638BDC79E655C1C2()))
	{
		return 0;
	}
	if (func_21(0))
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

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x636F1F53CC61D2C9(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF471787D45ADC2C1())
	{
		if (!*iParam0 == -1)
		{
			func_43(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_42737[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	if (unk_0x3640D836D145B814())
	{
		if (iLocal_67 == 0)
		{
			unk_0x1780951D345B980F("TV_Controls");
			iLocal_67 = 1;
		}
	}
}

bool func_30(int iParam0, int iParam1)
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

float func_31(var uParam0)
{
	if (func_34(uParam0))
	{
		if (func_33(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_32(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_32(bool bParam0)
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

bool func_33(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return unk_0x234B68AC2E35ED5A(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0x27DA7E2B98AB7899(iLocal_33);
	unk_0x0F33095580A670CE(4);
	unk_0x51D19921B47902B3(1);
	unk_0x11618436C6AA1BE5(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0x27DA7E2B98AB7899(unk_0xA05F91D121569413());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x451E904FC8FB5C54(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_31406[iLocal_41 /*11*/].f_7 = 0;
	Global_31406[iLocal_41 /*11*/] = unk_0xCAE2ED65934CDBBA();
	fLocal_30 = unk_0x293EFD9177EC62E3();
	if (unk_0xB30CD10E2CD1B67D(&cLocal_53))
	{
		unk_0xC0BBE340BE2AA02D(&cLocal_53);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	func_43(&iLocal_40);
	unk_0xAD2289EA9C4D4F11(-1);
	wait(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(unk_0x1146A9AE09CE2B14()) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return 1;
			break;
		
		case 4:
			if (Var0.f_2 < 74f)
			{
				return 1;
			}
			break;
		
		case 5:
			if (Var0.f_2 > 75f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

void func_40(int iParam0, int iParam1)
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

char* func_41(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

bool func_42(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_43(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_27(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42737[iVar0 /*32*/])
		{
			Global_42737[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_44()
{
	if (func_31(&uLocal_26) < 1f)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if ((!unk_0x591190E69BE43117(unk_0x7D2B9E6A64637269(), Local_68, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0x3E09537707C40210(unk_0x7D2B9E6A64637269(), Local_31, 90f)) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0xB71084333B418824(iLocal_35) != unk_0xB71084333B418824(unk_0x7D2B9E6A64637269()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_96298)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_31406[iLocal_41 /*11*/].f_8)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (iLocal_40 == -1)
	{
		func_28(&iLocal_40, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_26(iLocal_40, 1))
	{
		func_43(&iLocal_40);
		func_55(&uLocal_26);
		Global_31406[iLocal_41 /*11*/].f_7 = 1;
		if (unk_0x936616EE3F524830("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x9B0169E27978C1A2(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_45(309, 0, 0);
		return 1;
	}
	return 0;
}

void func_45(int iParam0, int iParam1, int iParam2)
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
		func_51((891 + iParam0), 1, -1, 1);
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
		func_46();
	}
}

void func_46()
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
		func_50(13, floor(Global_112293.f_10192.f_3853));
	}
	if (!unk_0x0854A007D3887A73())
	{
		if (!Global_77248)
		{
			if (func_49() == 2 == 0 && !unk_0x02BFF15CAA701972())
			{
				if (unk_0x6280556FDB0D083D())
				{
					Global_112027 = 0;
				}
				if (!Global_62098)
				{
					func_47();
				}
			}
		}
	}
}

int func_47()
{
	if (func_48(0))
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

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_49()
{
	return Global_31345;
}

int func_50(int iParam0, int iParam1)
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

int func_51(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_9();
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

void func_52()
{
	wait(0);
	if (unk_0x041B9511CD0AC7F4("tvscreen"))
	{
		unk_0x85EFAD0D44058E0C("tvscreen");
		iLocal_33 = -1;
		unk_0x27DA7E2B98AB7899(unk_0xA05F91D121569413());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_54();
	}
	if (unk_0x041B9511CD0AC7F4("tvscreen"))
	{
		unk_0x85EFAD0D44058E0C("tvscreen");
	}
	wait(0);
	if (!unk_0x419E13582192CFEA(iLocal_35))
	{
		func_68();
	}
	iVar0 = unk_0x6471F4759775FCA4(iLocal_35);
	unk_0xDEAC76DD3EF26CF5("tvscreen", 0);
	unk_0x78CA761D4F0B65D9(iVar0);
	wait(0);
	if (iLocal_41 != 4)
	{
		while (!unk_0xAF18C5D546F1B022(iVar0))
		{
			if (!unk_0x419E13582192CFEA(iLocal_35))
			{
				func_68();
			}
			if (!unk_0xF03E9E22B505CC07(iLocal_35))
			{
				func_68();
			}
			if (!unk_0x041B9511CD0AC7F4("tvscreen"))
			{
				unk_0xDEAC76DD3EF26CF5("tvscreen", 0);
			}
			if (!unk_0xAF18C5D546F1B022(iVar0))
			{
				unk_0x78CA761D4F0B65D9(iVar0);
			}
			wait(0);
		}
	}
	iLocal_33 = unk_0xC7D18C6E194A37FF("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0x419E13582192CFEA(iLocal_35))
	{
		if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = unk_0x0358AFF5157FE26F(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0xCD37A28258D70638(iLocal_35, uLocal_32);
	unk_0xA2C015B68CE01357(iLocal_35, 1);
	unk_0x4603196EEEA2355C(iLocal_35, 0, 0);
	iLocal_37 = 0;
	iLocal_37 = unk_0x0358AFF5157FE26F(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0xCD37A28258D70638(iLocal_37, uLocal_32);
	unk_0xA2C015B68CE01357(iLocal_37, 1);
	unk_0x4603196EEEA2355C(iLocal_37, 0, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0, 0f);
}

void func_56(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0x234B68AC2E35ED5A(*uParam0, 4)) - fParam1);
	unk_0x191DDA30577F440A(uParam0, 1);
	unk_0xC664C0067EEAB8D1(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_57()
{
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

void func_59()
{
	Local_31 = { unk_0xD6E677FAD7521410(iLocal_35, 1) };
	uLocal_32 = unk_0xA8D713A937F31250(iLocal_35);
	func_61();
	if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("prop_tv_03"))
	{
		if (vdist(Local_31, -9.541955f, -1440.917f, 31.34692f) < 3f)
		{
			iLocal_41 = 0;
			Local_63 = { -9.8135f, -1440.913f, 31.3654f };
			Local_64 = { 0f, 0f, -134.3211f };
			Local_68 = { -9.3078f, -1440.931f, 30.1015f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (vdist(Local_31, 1978.425f, 3819.657f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			Local_63 = { 1978.23f, 3819.65f, 34.2724f };
			Local_64 = { 0f, 0f, -105.15f };
			Local_68 = { 1978.33f, 3819.717f, 32.4501f };
			func_60();
			StringCopy(&cLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (vdist(Local_31, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			Local_63 = { 2.5724f, 527.9989f, 176.1619f };
			Local_64 = { 0f, 0f, -29.9488f };
			Local_68 = { 3.6654f, 529.8486f, 173.6281f };
			StringCopy(&cLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_53, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (vdist(Local_31, -1160.695f, -1520.745f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			Local_63 = { -1160.502f, -1520.76f, 10.7393f };
			Local_64 = { 0f, 0f, 60.061f };
			Local_68 = { -1160.143f, -1520.495f, 9.6555f };
			StringCopy(&cLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_53, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x6471F4759775FCA4(iLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (vdist(Local_31, -802.2527f, 173.0374f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			Local_63 = { -802.8972f, 172.537f, 74.5801f };
			Local_64 = { 0f, 0f, -69.0273f };
			Local_68 = { -800.7292f, 173.2194f, 71.8348f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("des_tvsmash_start"))
	{
		if (vdist(Local_31, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			Local_63 = { -808.3051f, 171.2623f, 77.2822f };
			Local_64 = { 1.8886f, 0f, 110.9232f };
			Local_68 = { -809.962f, 170.919f, 75.7407f };
			StringCopy(&cLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_53, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_60()
{
	iLocal_36 = unk_0x0358AFF5157FE26F(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0xCD37A28258D70638(iLocal_36, uLocal_32);
	unk_0x4603196EEEA2355C(iLocal_36, 1, 0);
	unk_0xA2C015B68CE01357(iLocal_36, 1);
}

void func_61()
{
	unk_0x774561E80A3178A4(0, func_41(1), 0);
	if (func_58(22))
	{
		unk_0x774561E80A3178A4(1, func_41(12), 0);
	}
	else
	{
		unk_0x774561E80A3178A4(1, func_41(2), 0);
	}
}

void func_62()
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_31406[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (unk_0x419E13582192CFEA(iLocal_38))
			{
				unk_0x8F160110753EB17B(iLocal_38, 0);
			}
			if (unk_0x419E13582192CFEA(iLocal_35))
			{
				unk_0x8F160110753EB17B(iLocal_35, 0);
			}
			if (unk_0x419E13582192CFEA(iLocal_37))
			{
				unk_0x8F160110753EB17B(iLocal_37, 0);
			}
			if (unk_0x419E13582192CFEA(iLocal_36))
			{
				unk_0x8F160110753EB17B(iLocal_36, 0);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (unk_0x419E13582192CFEA(iLocal_38))
		{
			unk_0x8F160110753EB17B(iLocal_38, 1);
		}
		if (unk_0x419E13582192CFEA(iLocal_35))
		{
			unk_0x8F160110753EB17B(iLocal_35, 1);
		}
		if (unk_0x419E13582192CFEA(iLocal_37))
		{
			unk_0x8F160110753EB17B(iLocal_37, 1);
		}
		if (unk_0x419E13582192CFEA(iLocal_36))
		{
			unk_0x8F160110753EB17B(iLocal_36, 1);
		}
		iLocal_66 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_31406[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
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

int func_66()
{
	if (Global_96292 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_90158[Global_96292 /*34*/].f_15, 20);
	}
	return 0;
}

void func_67()
{
}

void func_68()
{
	if (iLocal_41 == -1)
	{
		unk_0x4BFE89D21F9885DC();
	}
	func_43(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_31406[iLocal_41 /*11*/].f_6 = 0;
		Global_31406[iLocal_41 /*11*/].f_7 = 0;
		Global_31406[iLocal_41 /*11*/].f_8 = 0;
		Global_31406[iLocal_41 /*11*/].f_4 = 0;
		Global_31406[iLocal_41 /*11*/].f_5 = 0;
		Global_31406[iLocal_41 /*11*/].f_2 = 0;
		Global_31406[iLocal_41 /*11*/] = -1;
		Global_31406[iLocal_41 /*11*/].f_1 = 0;
		Global_31406[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
	wait(0);
	func_69();
	if (unk_0xB30CD10E2CD1B67D(&cLocal_53))
	{
		unk_0xC0BBE340BE2AA02D(&cLocal_53);
	}
	unk_0x3D62E0B627279EB8();
	func_2();
	unk_0x4BFE89D21F9885DC();
}

void func_69()
{
	func_52();
	if (unk_0x419E13582192CFEA(iLocal_35))
	{
		if (unk_0x6471F4759775FCA4(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x04F4D55F2C0C756D(&iLocal_35);
			unk_0x824F744352C8BC82(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0x419E13582192CFEA(iLocal_37))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_37);
		unk_0x824F744352C8BC82(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0x419E13582192CFEA(iLocal_36))
	{
		unk_0x04F4D55F2C0C756D(&iLocal_36);
		unk_0x824F744352C8BC82(joaat("prop_tt_screenstatic"));
	}
}

