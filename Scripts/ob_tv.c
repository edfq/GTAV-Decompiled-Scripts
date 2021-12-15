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
	if (unk_0x4B34601C5C56F3EE(2))
	{
		func_68();
	}
	if (unk_0xE5965CDF24F93A9F(uScriptParam_69))
	{
		iLocal_35 = iScriptParam_69;
		iLocal_38 = iScriptParam_69;
	}
	while (true)
	{
		wait(0);
		func_67();
		if (unk_0xE5965CDF24F93A9F(iScriptParam_69))
		{
			if ((iLocal_41 != -1 && (func_66() && !func_65())) && !func_64(iLocal_41))
			{
				func_68();
			}
			if ((unk_0x04458B4E5D9E466A() && unk_0xB6BDAC890771ED04() != 3) && unk_0xEEFB36B938654045() == 3)
			{
				func_68();
			}
			if (func_63(13) || func_63(14))
			{
				func_68();
			}
			if (unk_0xADEBC1D44FE55F78(iScriptParam_69, 0))
			{
				func_68();
			}
			if (unk_0xA7FB445015A2AF1C(iScriptParam_69))
			{
				if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
				{
					func_62();
					if (unk_0x0CF63873D754B965(iScriptParam_69) < 950)
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
									uLocal_39 = unk_0x6B3EE0CA145E8488(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
									if (unk_0xF0254DADD9D91FB8(uLocal_39))
									{
										unk_0x288F018BFD3D51ED(uLocal_39, 9);
									}
									unk_0xAFBDF6A5E54114C1();
								}
							}
							if (iLocal_41 == -1)
							{
								func_68();
							}
							else
							{
								func_57();
								unk_0x334012E4F8CC6BB6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								unk_0xF30CF8286FBA13D7(0);
								Global_31566[iLocal_41 /*11*/].f_2 = 0;
								Global_31566[iLocal_41 /*11*/].f_6 = 1;
								Global_31566[iLocal_41 /*11*/] = unk_0x5853B15F78E1A265(0, 2);
								Global_31566[iLocal_41 /*11*/].f_1 = 0;
								Global_31566[iLocal_41 /*11*/].f_4 = 0;
								Global_31566[iLocal_41 /*11*/].f_7 = 0;
								Global_31566[iLocal_41 /*11*/].f_8 = 0;
								Global_31566[iLocal_41 /*11*/].f_10 = 0;
								fLocal_30 = -4f;
								func_55(&uLocal_26);
								func_53();
								func_52();
								wait(0);
								iLocal_29 = 1;
							}
							break;
						
						case 1:
							if (unk_0x37BBF9ACD752871A(unk_0x9E2D6C50374FCFA9(), 0))
							{
								wait(0);
							}
							else if (unk_0x23CB5C83D3766044(iLocal_35) && unk_0xEFD1745E9D77E91C(iLocal_35, 1119092736))
							{
								if (func_44() || Global_31566[iLocal_41 /*11*/].f_5)
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
									unk_0x3410421C60BF7143(1);
								}
							}
							if (unk_0xE5965CDF24F93A9F(iLocal_35))
							{
								if (!unk_0x2B5F4FBAF644BEC8(iLocal_35))
								{
									unk_0x1C2ED929474DC6FE(iLocal_35, 1, 0);
								}
							}
							if (unk_0xE5965CDF24F93A9F(iLocal_37))
							{
								if (!unk_0x2B5F4FBAF644BEC8(iLocal_37))
								{
									unk_0x1C2ED929474DC6FE(iLocal_37, 1, 0);
								}
							}
							if (unk_0xE5965CDF24F93A9F(iLocal_36))
							{
								if (unk_0x2B5F4FBAF644BEC8(iLocal_36))
								{
									unk_0x1C2ED929474DC6FE(iLocal_36, 0, 0);
								}
							}
							if (!unk_0x3C57C2F07FEE34D2(&cLocal_44, "NULL"))
							{
								unk_0x380313FF4CEF9B49(&cLocal_44, 0);
							}
							unk_0xC4A210006FF80DEA(0);
							wait(0);
							if (unk_0xE5965CDF24F93A9F(iLocal_38))
							{
								unk_0x681F73673FD212DC(iLocal_38);
							}
							if (!func_64(iLocal_41))
							{
								if ((Global_31566[iLocal_41 /*11*/] == 3 || Global_31566[iLocal_41 /*11*/] == 2) || Global_31566[iLocal_41 /*11*/] == -1)
								{
									Global_31566[iLocal_41 /*11*/] = unk_0x5853B15F78E1A265(0, 2);
								}
								unk_0x71DFB1E45D792D8C(Global_31566[iLocal_41 /*11*/]);
								unk_0xCB9476BFD12CD0D4(fLocal_30);
							}
							else
							{
								iLocal_42 = Global_31566[iLocal_41 /*11*/];
								iLocal_43 = Global_31566[iLocal_41 /*11*/].f_1;
								unk_0xA7AC3C9E15F0A7DD(iLocal_42, func_41(iLocal_43), Global_31566[iLocal_41 /*11*/].f_9);
								unk_0x71DFB1E45D792D8C(iLocal_42);
								if (Global_31566[iLocal_41 /*11*/].f_7)
								{
									Global_31566[iLocal_41 /*11*/].f_5 = 0;
									Global_31566[iLocal_41 /*11*/].f_7 = 0;
								}
							}
							Global_31566[iLocal_41 /*11*/].f_2 = 1;
							func_40(133, 1);
							func_40(131, 1);
							func_40(132, 1);
							iLocal_29 = 3;
							break;
						
						case 3:
							if (Global_31566[iLocal_41 /*11*/].f_4)
							{
								iLocal_29 = 6;
							}
							if (Global_31566[iLocal_41 /*11*/].f_7 && func_64(iLocal_41))
							{
								Global_31566[iLocal_41 /*11*/].f_7 = 0;
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
								if (unk_0xB6859807232D8AED() == -1)
								{
									unk_0x71DFB1E45D792D8C(Global_31566[iLocal_41 /*11*/]);
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
							if (Global_31566[iLocal_41 /*11*/].f_4)
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
							Global_31566[iLocal_41 /*11*/].f_5 = 0;
							Global_31566[iLocal_41 /*11*/].f_4 = 0;
							Global_31566[iLocal_41 /*11*/].f_1 = 0;
							Global_31566[iLocal_41 /*11*/].f_2 = 0;
							Global_31566[iLocal_41 /*11*/].f_7 = 0;
							Global_31566[iLocal_41 /*11*/].f_8 = 0;
							Global_31566[iLocal_41 /*11*/].f_10 = 0;
							iLocal_29 = 1;
							break;
						}
					}
			}
		}
		else
		{
			func_68();
			unk_0xAFBDF6A5E54114C1();
		}
	}
	func_68();
	unk_0xAFBDF6A5E54114C1();
}

void func_1()
{
	if (iLocal_41 != -1)
	{
		Global_31566[iLocal_41 /*11*/] = unk_0xB6859807232D8AED();
	}
	fLocal_30 = unk_0xD6385C54CBBB95CD();
	unk_0x71DFB1E45D792D8C(-1);
	func_4();
	if (unk_0xB4C854DD86E40FDA(joaat("family5")) == 0)
	{
		if (!unk_0x3C57C2F07FEE34D2(&cLocal_44, "NULL"))
		{
			unk_0x380313FF4CEF9B49(&cLocal_44, 1);
		}
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x3410421C60BF7143(1);
	}
	func_3();
	func_52();
	if (unk_0xE5965CDF24F93A9F(iLocal_36))
	{
		if (!unk_0x2B5F4FBAF644BEC8(iLocal_36))
		{
			unk_0x1C2ED929474DC6FE(iLocal_36, 1, 0);
		}
	}
	unk_0x266D7C8B18F0C4DB(0);
	func_2();
}

void func_2()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (iLocal_67 == 1)
		{
			unk_0x027F803A942FB98F();
			iLocal_67 = 0;
		}
	}
}

void func_3()
{
	if (!iLocal_33 == -1)
	{
		unk_0xCF0E3BB302EAC0EA(iLocal_33);
		if (unk_0xE5965CDF24F93A9F(iLocal_35))
		{
			if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				unk_0x1C2ED929474DC6FE(iLocal_35, 0, 0);
				if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("v_ilev_mm_scre_off"))
				{
					unk_0xCA4C0AD3CAFF651E(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else
			{
				unk_0xCA4C0AD3CAFF651E(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_37))
	{
		unk_0x1C2ED929474DC6FE(iLocal_37, 0, 0);
	}
}

void func_4()
{
	if (iLocal_65)
	{
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		if (unk_0xA24FDA4986456697(uLocal_62))
		{
			unk_0xDD786B89B15AA63F(uLocal_62, 0);
		}
		unk_0x588DDCB644C6486A(uLocal_62, 0);
		unk_0x94953C3FF0664F66(0);
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 0);
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), Local_31, 1, 0, 2);
			if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				if (bLocal_34 == 1)
				{
					bLocal_34 = false;
					unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 1, 0);
				}
			}
			unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 1, 0);
		}
		if (!unk_0x3C57C2F07FEE34D2(&cLocal_53, "NULL"))
		{
			if (unk_0xA37204C64473B324(&cLocal_53))
			{
				unk_0x0AF8D3A06BB92903(&cLocal_53);
			}
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_37))
		{
			unk_0x1C2ED929474DC6FE(iLocal_37, 1, 0);
		}
		func_5(0, 1, 0, 0, 0, 0, 0);
		unk_0x266D7C8B18F0C4DB(0);
		iLocal_65 = 0;
	}
}

void func_5(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x85B547885D8F8B40(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 1);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 1);
		func_14(1);
		unk_0x1B7AAA85D46FE6FB();
		unk_0xA240F4C910B19938();
		if (Global_19954.f_1 > 3 && !bParam6)
		{
			if (unk_0xA3329B7A7520670E())
			{
				unk_0xD681CC2BC1084DB6(0);
			}
			if (!func_13())
			{
				Global_19954.f_1 = 3;
			}
			Global_21285 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_62696 = 1;
		Global_75024 = 1;
		Global_77850 = 1;
	}
	else
	{
		func_14(0);
		unk_0x45227777D3EBECE5();
		Global_62696 = 0;
		if (bParam1)
		{
			unk_0xA91EC7D49DF9F229();
		}
		unk_0x7A8DF8C7511BE48A(unk_0x9E2D6C50374FCFA9(), 0);
		unk_0xB5B3AAE149FC278D(unk_0x9E2D6C50374FCFA9(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x9315DBF7D972F07A())
		{
			if (((((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_10(unk_0x9E2D6C50374FCFA9())) && !func_7(unk_0x9E2D6C50374FCFA9(), 0)) && !func_6()) && !bParam4) && !bParam5)
			{
				unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
			}
		}
		else if (((!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()) && !func_10(unk_0x9E2D6C50374FCFA9())) && !bParam4) && !bParam5)
		{
			unk_0x9210F85E9CD785F1(unk_0xE2D3D51028F0428A(), 0);
		}
		Global_77850 = 0;
	}
}

bool func_6()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_8(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
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
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_9()
{
	return Global_1574907;
}

int func_10(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_11()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && uParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 13);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 13);
	}
}

int func_15()
{
	if (!func_64(iLocal_41))
	{
		if (((((((func_31(&uLocal_26) >= 1f && unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_68, 1f, 1f, 1.5f, 0, 1, 0)) && unk_0x6D7EE245AD1E10B0(iLocal_35) == unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A())) && !func_30(8, -1)) && !unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && unk_0xC9CD8C710046A3DD(unk_0xE2D3D51028F0428A(), Local_31, 90f)) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A())) && !unk_0x04458B4E5D9E466A())
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
				Global_31566[iLocal_41 /*11*/].f_7 = 0;
				if (unk_0x8133A5F807883BC6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x91DFC8F68F6D9B05(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return 1;
			}
			func_16();
		}
		else
		{
			if (func_42("TV_HLP5"))
			{
				unk_0x3410421C60BF7143(1);
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
		unk_0x07899AAA5D680386(2, 222);
		if (unk_0xF09A4F413B0D30EB(2, 222))
		{
			func_43(&iLocal_40);
			func_28(&iLocal_40, 3, "TV_HLP6", 0, 0, 0, 0);
			func_25();
		}
	}
	else
	{
		unk_0x7653D561C9574763(2, 200, 1);
		if (unk_0x2B5F4FBAF644BEC8(unk_0xE2D3D51028F0428A()))
		{
			unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 0, 0);
		}
		if (bLocal_34)
		{
			if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
			}
		}
		unk_0xC43E67C9BA871ECB();
		unk_0x9A01624727325C8A(unk_0xE2D3D51028F0428A());
		func_23(1, 1);
		unk_0x07899AAA5D680386(2, 222);
		func_17(0);
		if (unk_0xF09A4F413B0D30EB(2, 222) || (unk_0x3A76A0944BE2C291(2) && unk_0x51844F589D928A86(2, 200)))
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
	if (!Global_19954.f_1 == 1)
	{
		if (func_21(0))
		{
			func_18(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_18(int iParam0)
{
	if (func_22())
	{
		return;
	}
	if (Global_20144)
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
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_13())
	{
		Global_19954.f_1 = 3;
	}
}

void func_19(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

bool func_20()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_21(int iParam0)
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

bool func_22()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
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
				if (unk_0x8133A5F807883BC6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					unk_0x91DFC8F68F6D9B05(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (unk_0xB6859807232D8AED() == 0)
				{
					unk_0x71DFB1E45D792D8C(1);
				}
				else
				{
					unk_0x71DFB1E45D792D8C(0);
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
		iVar1 = (unk_0xF439FF1991626CB9(2, 219) - 127);
		if (!iLocal_23)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = unk_0xD6385C54CBBB95CD();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				unk_0xCB9476BFD12CD0D4(fVar2);
				iLocal_24 = unk_0x320D1840B6DAA1CC();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = unk_0xD6385C54CBBB95CD();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				unk_0xCB9476BFD12CD0D4(fVar2);
				iLocal_24 = unk_0x320D1840B6DAA1CC();
				iLocal_23 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_25 = 1;
			}
			else if (iLocal_25)
			{
				if (unk_0x8133A5F807883BC6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						unk_0x91DFC8F68F6D9B05(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23)
		{
			if (iVar1 == 0 || unk_0x320D1840B6DAA1CC() > iLocal_24 + 24)
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
	iVar1 = (unk_0xF439FF1991626CB9(2, 218) - 127);
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
		uLocal_62 = unk_0x6729FA3AF971BE2A("DEFAULT_SCRIPTED_CAMERA", Local_63, Local_64, fVar0, 0, 2);
		unk_0xAC79343A28CEA8E0(uLocal_62, 100f);
		unk_0xDD786B89B15AA63F(uLocal_62, 1);
		unk_0x850D4EF3D40FB068(1, 0, 3000, 1, 0, 0);
		if (unk_0xE5965CDF24F93A9F(iLocal_37))
		{
			unk_0x1C2ED929474DC6FE(iLocal_37, 0, 0);
		}
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), 1);
			unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
			if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), 0, 0);
				bLocal_34 = true;
			}
			unk_0xE1E1AF00CA06A2B7(unk_0xE2D3D51028F0428A(), Local_31, -1, 0, 2);
			unk_0x1C2ED929474DC6FE(unk_0xE2D3D51028F0428A(), 0, 0);
		}
		if (!unk_0x3C57C2F07FEE34D2(&cLocal_53, "NULL"))
		{
			if (!unk_0xA37204C64473B324(&cLocal_53))
			{
				unk_0x66B27A59829491D3(&cLocal_53);
			}
		}
		func_5(1, 1, 0, 0, 0, 0, 0);
		unk_0x266D7C8B18F0C4DB(1);
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
	if (!unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43328[iVar0 /*32*/] == 1 && Global_43328[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_43328[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_43328[iVar0 /*32*/].f_5 = 1;
			Global_43328[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_43328[iVar0 /*32*/] == 0)
			{
			}
			if (Global_43328[iVar0 /*32*/].f_7)
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
		if (Global_43328[iVar0 /*32*/].f_1 == iParam0)
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
	
	if (unk_0xB4C854DD86E40FDA(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x04458B4E5D9E466A())
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
		if (!Global_43328[iVar0 /*32*/])
		{
			Global_43328[iVar0 /*32*/] = 1;
			Global_43328[iVar0 /*32*/].f_1 = Global_43529;
			Global_43529++;
			Global_43328[iVar0 /*32*/].f_4 = 0;
			Global_43328[iVar0 /*32*/].f_29 = 0;
			Global_43328[iVar0 /*32*/].f_5 = 0;
			Global_43328[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_43328[iVar0 /*32*/].f_8), sParam2, 16);
			Global_43328[iVar0 /*32*/].f_6 = iParam3;
			Global_43328[iVar0 /*32*/].f_31 = unk_0x69CE66B03B2184EB();
			Global_43328[iVar0 /*32*/].f_7 = 0;
			Global_43328[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xACC32B78196FBC2A(sParam4))
			{
				Global_43328[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_43328[iVar0 /*32*/].f_13), sParam4, 64);
				Global_43328[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_43328[iVar0 /*32*/].f_12 = 0;
				Global_43328[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_43328[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_29()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (iLocal_67 == 0)
		{
			unk_0x9E4A185A00C358E1("TV_Controls");
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
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
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
			return (func_32(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - uParam0->f_1);
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
		fVar0 = to_float(unk_0x320D1840B6DAA1CC());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		iVar2 = unk_0x0A89FDFA763DCAED();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x320D1840B6DAA1CC()) / 1000f);
}

bool func_33(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 2);
}

bool func_34(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, 1);
}

void func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	func_36(&fVar0);
	unk_0xCF0E3BB302EAC0EA(iLocal_33);
	unk_0x2E04B7B46A3670E5(4);
	unk_0xE53134ABB42F336F(1);
	unk_0x8E2A4F58A41ACB36(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	unk_0xCF0E3BB302EAC0EA(unk_0x56555A9ED8B80DFD());
}

void func_36(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xF4CC509EEB975296(0);
	if (fVar0 <= (16f / 9f))
	{
		fVar1 = (fVar0 / (16f / 9f));
		fVar2 = *fParam0;
		*fParam0 = (fVar2 * fVar1);
	}
}

void func_37()
{
	Global_31566[iLocal_41 /*11*/].f_7 = 0;
	Global_31566[iLocal_41 /*11*/] = unk_0xB6859807232D8AED();
	fLocal_30 = unk_0xD6385C54CBBB95CD();
	if (unk_0xA37204C64473B324(&cLocal_53))
	{
		unk_0x0AF8D3A06BB92903(&cLocal_53);
	}
	if (((func_42("TV_HLP1") || func_42("TV_HLP2")) || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x3410421C60BF7143(1);
	}
	func_43(&iLocal_40);
	unk_0x71DFB1E45D792D8C(-1);
	wait(0);
	func_3();
	func_52();
}

int func_38(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(unk_0x9E2D6C50374FCFA9()) };
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
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_58432[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (Global_58432[iParam0 /*7*/])
	{
		unk_0x61481F9FBB1C7EDD(Global_58432[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x076A5661EF5ABEE4(Global_58432[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
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
		if (Global_43328[iVar0 /*32*/])
		{
			Global_43328[iVar0 /*32*/].f_7 = 1;
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
	if ((!unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Local_68, 1f, 1f, 1.5f, 0, 1, 0) || !unk_0xC9CD8C710046A3DD(unk_0xE2D3D51028F0428A(), Local_31, 90f)) || unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0x6D7EE245AD1E10B0(iLocal_35) != unk_0x6D7EE245AD1E10B0(unk_0xE2D3D51028F0428A()))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (func_30(8, -1))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_96902)
	{
		func_43(&iLocal_40);
		return 0;
	}
	if (Global_31566[iLocal_41 /*11*/].f_8)
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
		Global_31566[iLocal_41 /*11*/].f_7 = 1;
		if (unk_0x8133A5F807883BC6("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
		{
			unk_0x91DFC8F68F6D9B05(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
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
		func_51((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_112915.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_112915.f_10194[iParam0 /*12*/].f_6 == 11 || Global_112915.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_112915.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_112915.f_10194[iParam0 /*12*/].f_10 = iParam1;
		Global_112915.f_10194[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x423A6008CEED5D6C(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_112651 = 0;
	Global_112652 = 0;
	Global_112653 = 0;
	Global_112654 = 0;
	Global_112655 = 0;
	Global_112656 = 0;
	Global_112657 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_112915.f_10194.f_3853;
	Global_112915.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_112915.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_112915.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_112651++;
					fVar1 = (fVar1 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_112652++;
					fVar2 = (fVar2 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_112653++;
					fVar3 = (fVar3 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_112654++;
					fVar4 = (fVar4 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_112655++;
					fVar5 = (fVar5 + (Global_112915.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_112656++;
					fVar6 = (fVar6 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_112657++;
					fVar7 = (fVar7 + Global_112915.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_112634 > 0)
	{
		if (Global_112651 == Global_112634)
		{
			fVar1 = 55f;
		}
	}
	if (Global_112635 > 0)
	{
		if (Global_112652 == Global_112635)
		{
			fVar2 = 10f;
		}
	}
	if (Global_112636 > 0)
	{
		if (Global_112653 == Global_112636)
		{
			fVar3 = 0f;
		}
	}
	if (Global_112637 > 0)
	{
		if (Global_112654 == Global_112637)
		{
			fVar4 = 10f;
		}
	}
	if (Global_112638 > 0)
	{
		if (((Global_112655 == Global_112638 || (Global_112638 * 10 / Global_112655) < 41) || Global_112655 > Global_112641) || Global_112655 == Global_112641)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_112915.f_10194.f_3856, 14))
			{
				if (Global_112655 == Global_112638)
				{
					unk_0x423A6008CEED5D6C(joaat("num_rndevents_completed"), Global_112638, 0);
					unk_0xCED9E32812D6C7C7(&(Global_112915.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_112639 > 0)
	{
		if (Global_112656 == Global_112639)
		{
			fVar6 = 15f;
		}
	}
	if (Global_112640 > 0)
	{
		if (Global_112657 == Global_112640)
		{
			fVar7 = 5f;
		}
	}
	Global_112915.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_112655 > Global_112641 || Global_112655 == Global_112641)
	{
		iVar9 = Global_112641;
	}
	else
	{
		iVar9 = Global_112655;
	}
	unk_0x076A5661EF5ABEE4(joaat("num_missions_completed"), Global_112651, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_missions_available"), Global_112634, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_completed"), Global_112652, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_minigames_available"), Global_112635, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_completed"), Global_112653, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_oddjobs_available"), Global_112636, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_completed"), Global_112654, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndpeople_available"), Global_112637, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_rndevents_available"), Global_112641, 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_completed"), (Global_112657 + Global_112656), 1);
	unk_0x076A5661EF5ABEE4(joaat("num_misc_available"), (Global_112640 + Global_112639), 1);
	Global_112658 = (Global_112651 * 100 / Global_112634);
	Global_112660 = ((Global_112653 + Global_112652) * 100 / (Global_112636 + Global_112635));
	Global_112659 = ((Global_112654 + iVar9) * 100 / (Global_112637 + Global_112641));
	Global_112661 = ((Global_112656 + Global_112657) * 100 / (Global_112639 + Global_112640));
	unk_0xD9B28F1445FFCEE7(joaat("total_progress_made"), Global_112915.f_10194.f_3853, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_story_missions"), Global_112658, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_ambient_missions"), Global_112659, 1);
	unk_0x076A5661EF5ABEE4(joaat("percent_oddjobs"), Global_112660, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_112915.f_10194.f_3853))
	{
		func_50(13, floor(Global_112915.f_10194.f_3853));
	}
	if (!unk_0x665245305CD9E866())
	{
		if (!Global_77852)
		{
			if (func_49() == 2 == 0 && !unk_0x9315DBF7D972F07A())
			{
				if (unk_0x47C86377AA337CBE())
				{
					Global_112649 = 0;
				}
				if (!Global_62690)
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
	if (Global_100013.f_8)
	{
		if (Global_100013.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100013.f_10 > 1)
	{
		return 0;
	}
	Global_100013.f_10++;
	return 1;
}

bool func_48(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

int func_49()
{
	return Global_31505;
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
	iVar0 = unk_0xE70CD2CDEE98DF14(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xEE587CFF91CF5EDA(iParam0, iParam1);
	}
	return 0;
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_9();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

void func_52()
{
	wait(0);
	if (unk_0xBB75DCB31B62483C("tvscreen"))
	{
		unk_0xEFD883943E59207A("tvscreen");
		iLocal_33 = -1;
		unk_0xCF0E3BB302EAC0EA(unk_0x56555A9ED8B80DFD());
	}
}

void func_53()
{
	int iVar0;
	
	if (iLocal_41 == 4)
	{
		func_54();
	}
	if (unk_0xBB75DCB31B62483C("tvscreen"))
	{
		unk_0xEFD883943E59207A("tvscreen");
	}
	wait(0);
	if (!unk_0xE5965CDF24F93A9F(iLocal_35))
	{
		func_68();
	}
	iVar0 = unk_0x15CAA6D7B11F1A7C(iLocal_35);
	unk_0x7F31E4CDB9FB2193("tvscreen", 0);
	unk_0xC043F1F3CF279111(iVar0);
	wait(0);
	if (iLocal_41 != 4)
	{
		while (!unk_0x593C5E295B4590F4(iVar0))
		{
			if (!unk_0xE5965CDF24F93A9F(iLocal_35))
			{
				func_68();
			}
			if (!unk_0xA7FB445015A2AF1C(iLocal_35))
			{
				func_68();
			}
			if (!unk_0xBB75DCB31B62483C("tvscreen"))
			{
				unk_0x7F31E4CDB9FB2193("tvscreen", 0);
			}
			if (!unk_0x593C5E295B4590F4(iVar0))
			{
				unk_0xC043F1F3CF279111(iVar0);
			}
			wait(0);
		}
	}
	iLocal_33 = unk_0x014679E62446327A("tvscreen");
	func_3();
}

void func_54()
{
	if (unk_0xE5965CDF24F93A9F(iLocal_35))
	{
		if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			return;
		}
	}
	iLocal_35 = 0;
	iLocal_35 = unk_0x0A7322C6D0E1A985(joaat("v_ilev_mm_screen2"), Local_31, 1, 1, 0);
	unk_0xBBF86885619695CE(iLocal_35, uLocal_32);
	unk_0x5C65DDDC219B3AA5(iLocal_35, 1);
	unk_0x1C2ED929474DC6FE(iLocal_35, 0, 0);
	iLocal_37 = 0;
	iLocal_37 = unk_0x0A7322C6D0E1A985(joaat("v_ilev_mm_screen2_vl"), Local_31, 1, 1, 0);
	unk_0xBBF86885619695CE(iLocal_37, uLocal_32);
	unk_0x5C65DDDC219B3AA5(iLocal_37, 1);
	unk_0x1C2ED929474DC6FE(iLocal_37, 0, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0, 0f);
}

void func_56(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_32(unk_0xE2D0C323A1AE5D85(*uParam0, 4)) - fParam1);
	unk_0xCED9E32812D6C7C7(uParam0, 1);
	unk_0xB0550BC91B0159D6(uParam0, 2);
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
	return Global_112915.f_9085.f_330[iParam0 /*6*/];
}

void func_59()
{
	Local_31 = { unk_0x6B62510F212526DC(iLocal_35, 1) };
	uLocal_32 = unk_0x82FE2343F8BDFF0B(iLocal_35);
	func_61();
	if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("prop_tv_03"))
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
	else if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("prop_trev_tv_01"))
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
	else if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("prop_tv_flat_01"))
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
	else if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("prop_tv_flat_02"))
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
	else if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("v_ilev_mm_screen2") || unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("v_ilev_mm_scre_off"))
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
	else if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("des_tvsmash_start"))
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
	iLocal_36 = unk_0x0A7322C6D0E1A985(joaat("prop_tt_screenstatic"), Local_31, 1, 1, 0);
	unk_0xBBF86885619695CE(iLocal_36, uLocal_32);
	unk_0x1C2ED929474DC6FE(iLocal_36, 1, 0);
	unk_0x5C65DDDC219B3AA5(iLocal_36, 1);
}

void func_61()
{
	unk_0xA7AC3C9E15F0A7DD(0, func_41(1), 0);
	if (func_58(22))
	{
		unk_0xA7AC3C9E15F0A7DD(1, func_41(12), 0);
	}
	else
	{
		unk_0xA7AC3C9E15F0A7DD(1, func_41(2), 0);
	}
}

void func_62()
{
	if (iLocal_41 == -1)
	{
		return;
	}
	if (Global_31566[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_66 == 1)
		{
			if (unk_0xE5965CDF24F93A9F(iLocal_38))
			{
				unk_0x9210F85E9CD785F1(iLocal_38, 0);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_35))
			{
				unk_0x9210F85E9CD785F1(iLocal_35, 0);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_37))
			{
				unk_0x9210F85E9CD785F1(iLocal_37, 0);
			}
			if (unk_0xE5965CDF24F93A9F(iLocal_36))
			{
				unk_0x9210F85E9CD785F1(iLocal_36, 0);
			}
			iLocal_66 = 0;
		}
	}
	else if (iLocal_66 == 0)
	{
		if (unk_0xE5965CDF24F93A9F(iLocal_38))
		{
			unk_0x9210F85E9CD785F1(iLocal_38, 1);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_35))
		{
			unk_0x9210F85E9CD785F1(iLocal_35, 1);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_37))
		{
			unk_0x9210F85E9CD785F1(iLocal_37, 1);
		}
		if (unk_0xE5965CDF24F93A9F(iLocal_36))
		{
			unk_0x9210F85E9CD785F1(iLocal_36, 1);
		}
		iLocal_66 = 1;
	}
}

bool func_63(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_64(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_31566[iParam0 /*11*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x5CC952A51A751C4C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (Global_96896 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_90762[Global_96896 /*34*/].f_15, 20);
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
		unk_0xAFBDF6A5E54114C1();
	}
	func_43(&iLocal_40);
	if (iLocal_41 != -1)
	{
		func_1();
		Global_31566[iLocal_41 /*11*/].f_6 = 0;
		Global_31566[iLocal_41 /*11*/].f_7 = 0;
		Global_31566[iLocal_41 /*11*/].f_8 = 0;
		Global_31566[iLocal_41 /*11*/].f_4 = 0;
		Global_31566[iLocal_41 /*11*/].f_5 = 0;
		Global_31566[iLocal_41 /*11*/].f_2 = 0;
		Global_31566[iLocal_41 /*11*/] = -1;
		Global_31566[iLocal_41 /*11*/].f_1 = 0;
		Global_31566[iLocal_41 /*11*/].f_10 = 0;
	}
	if ((func_42("TV_HLP1") || func_42("TV_HLP5")) || func_42("TV_HLP6"))
	{
		unk_0x3410421C60BF7143(1);
	}
	wait(0);
	func_69();
	if (unk_0xA37204C64473B324(&cLocal_53))
	{
		unk_0x0AF8D3A06BB92903(&cLocal_53);
	}
	unk_0x1469F0F8128B7961();
	func_2();
	unk_0xAFBDF6A5E54114C1();
}

void func_69()
{
	func_52();
	if (unk_0xE5965CDF24F93A9F(iLocal_35))
	{
		if (unk_0x15CAA6D7B11F1A7C(iLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			unk_0x4BDA5AFD88C085EB(&iLocal_35);
			unk_0xF1A23B343DFEDFD0(joaat("v_ilev_mm_screen2"));
		}
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_37))
	{
		unk_0x4BDA5AFD88C085EB(&iLocal_37);
		unk_0xF1A23B343DFEDFD0(joaat("v_ilev_mm_screen2_vl"));
	}
	if (unk_0xE5965CDF24F93A9F(iLocal_36))
	{
		unk_0x4BDA5AFD88C085EB(&iLocal_36);
		unk_0xF1A23B343DFEDFD0(joaat("prop_tt_screenstatic"));
	}
}

