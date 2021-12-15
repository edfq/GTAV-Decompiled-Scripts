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
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 32;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<150> Local_125 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
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
	var uLocal_137 = 0;
	struct<21> Local_138 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x9315DBF7D972F07A())
	{
		func_206(ScriptParam_138);
	}
	else
	{
		func_197(0);
	}
	while (true)
	{
		func_196();
		if (func_185())
		{
			func_197(0);
		}
		if (func_182())
		{
			func_197(0);
		}
		func_2();
		if (unk_0x54E30A65F4FA4962())
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
	func_179();
	if (func_178(0))
	{
		func_166();
	}
	else if (func_178(1))
	{
		if (func_165())
		{
			func_138();
		}
		else
		{
			func_130();
		}
	}
	else if (func_178(2))
	{
		if (func_113())
		{
			func_112(3);
		}
		func_103();
		if (func_99())
		{
			return;
		}
		func_90();
		func_89();
		func_60();
		func_49();
		func_47();
		func_3();
	}
	else if (func_178(3))
	{
		func_197(1);
	}
}

void func_3()
{
	func_46();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1577884 = iParam0;
}

void func_5(int iParam0)
{
	Global_1645739.f_1121 = iParam0;
}

void func_6()
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (unk_0x3A76A0944BE2C291(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (unk_0x3A76A0944BE2C291(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x3A76A0944BE2C291(0))
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 6))
		{
			unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 6);
			unk_0xB0550BC91B0159D6(&(Local_125.f_5), 4);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 6))
	{
		unk_0xB0550BC91B0159D6(&(Local_125.f_5), 6);
		unk_0xB0550BC91B0159D6(&(Local_125.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (unk_0xD199EE48D2842EB1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(unk_0x9E2D6C50374FCFA9(), 0))
		{
			return;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x9417F1137725B4B3() == 0 || unk_0xD199EE48D2842EB1())
		{
			return;
		}
	}
	if (Global_22830.f_5026 != 0)
	{
		if (unk_0xB1C1E679BD17A4F0(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5026)
			{
				if (Global_22830.f_5283[iVar1] != 361)
				{
					StringCopy(&(Global_22830.f_5028[iVar1 /*16*/]), unk_0x2018949B2C9FD96A(2, Global_22830.f_5283[iVar1], 1), 64);
				}
				else if (Global_22830.f_5296[iVar1] != 32)
				{
					StringCopy(&(Global_22830.f_5028[iVar1 /*16*/]), unk_0x19214818F925D149(2, Global_22830.f_5296[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22830.f_5027 = 0;
		}
		if (!Global_22830.f_5027)
		{
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xCA5D23E5F0F0306F((1f - (Global_22830.f_5338 / 100f)));
			unk_0x6F06CF0E9AB02847();
			if (unk_0x8FE9914D4872D601())
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
			}
			iVar1 = 0;
			while (iVar1 < Global_22830.f_5026)
			{
				if (unk_0x2E87280918B16506(&(Global_22830.f_5221[iVar1 /*4*/])) != unk_0x2E87280918B16506("PREV"))
				{
					unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(iVar1);
					func_9(&(Global_22830.f_5028[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x2E87280918B16506(&(Global_22830.f_5221[iVar2 /*4*/])) == unk_0x2E87280918B16506("PREV"))
					{
						func_9(&(Global_22830.f_5028[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22830.f_5270[iVar1] == -1)
					{
						func_8(&(Global_22830.f_5221[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22830.f_5270[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x4ADC8B166E139423(&(Global_22830.f_5221[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x28594D0D61DB1278(iVar3, 70);
						}
						else
						{
							unk_0x2AE954BA77A66307(iVar3);
						}
						unk_0xD1D4F8D5470AFA4C();
					}
					if (unk_0x8FE9914D4872D601())
					{
						if (Global_22830.f_5283[iVar1] != 361 && unk_0xE2D0C323A1AE5D85(Global_22830.f_5309, iVar1))
						{
							unk_0xD7D6BA6E36AEC182(1);
							unk_0x4F47E317C74C543B(Global_22830.f_5283[iVar1]);
						}
						else
						{
							unk_0xD7D6BA6E36AEC182(0);
							unk_0x4F47E317C74C543B(361);
						}
					}
					unk_0x6F06CF0E9AB02847();
				}
				iVar1++;
			}
			if (unk_0x2E87280918B16506(&(Global_4533983.f_16)) != unk_0x2E87280918B16506(""))
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(Global_22830.f_5026);
				func_9(&Global_4533983);
				if (Global_4533983.f_20 == -1)
				{
					func_8(&(Global_4533983.f_16));
				}
				else
				{
					iVar4 = Global_22830.f_5270[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x4ADC8B166E139423(&(Global_4533983.f_16));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iVar4, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iVar4);
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				unk_0x6F06CF0E9AB02847();
			}
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(0);
			unk_0x4F47E317C74C543B(80);
			unk_0x6F06CF0E9AB02847();
			unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22830.f_5339)
			{
				unk_0x4F47E317C74C543B(1);
			}
			else
			{
				unk_0x4F47E317C74C543B(0);
			}
			unk_0x6F06CF0E9AB02847();
			Global_22830.f_5027 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22830.f_5026)
		{
			if (Global_22830.f_5270[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x4F47E317C74C543B(iVar1);
					unk_0x4ADC8B166E139423(&(Global_22830.f_5221[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x28594D0D61DB1278(iParam2, 70);
					}
					else
					{
						unk_0x2AE954BA77A66307(iParam2);
					}
					unk_0xD1D4F8D5470AFA4C();
					unk_0x6F06CF0E9AB02847();
				}
			}
			iVar1++;
		}
		if (Global_4533983.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x4F47E317C74C543B(iVar1);
				unk_0x4ADC8B166E139423(&(Global_4533983.f_16));
				if (bParam5)
				{
					unk_0x28594D0D61DB1278(iParam2, 70);
				}
				else
				{
					unk_0x2AE954BA77A66307(iParam2);
				}
				unk_0xD1D4F8D5470AFA4C();
				unk_0x6F06CF0E9AB02847();
			}
		}
		unk_0xA5AAB00FA8C570A4(76, 66);
		unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22830.f_8674)
			{
				unk_0xE73F8CB95153F5B1(15, 0f, -0.0375f);
				Global_22830.f_8674 = 1;
			}
		}
		else if (Global_22830.f_8674)
		{
			unk_0x4FEF096D3AB4AA8C(15);
			Global_22830.f_8674 = 0;
		}
		unk_0xB5A50A903B9AB61B();
		if (Global_22830.f_5312)
		{
			unk_0xA5AAB00FA8C570A4(82, 66);
			unk_0x98F560BC13E5293F(0f, 0f, 0f, 0f);
			unk_0x694170BB080C08FF(Global_22830.f_5917[iVar0 /*10*/], Global_22830.f_5310, Global_22830.f_5311, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xB5A50A903B9AB61B();
		}
		else
		{
			unk_0xC4353D240DCE9533(Global_22830.f_5917[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_8(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_9(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574907;
}

int func_13()
{
	struct<3> Var0;
	
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	if (func_14())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xC81489026785778A(&Var0);
		if (Global_19899 == 0)
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

int func_14()
{
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)
{
	if (Global_2703656.f_1585.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xE9E8955A780DDA01() || (func_17(8, -1) && func_16() != 65)) || (unk_0x1A76A9A82BD6228C() != 0 && !bParam1)) || (unk_0x04458B4E5D9E466A() && !bParam0)) || unk_0x06C559386AD19942()) || Global_78112) || Global_22830.f_8673) || unk_0x3E6C9DAD84CEFED1()) || Global_100026.f_1457)
	{
		return 0;
	}
	return 1;
}

int func_16()
{
	return Global_1574980;
}

bool func_17(int iParam0, int iParam1)
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

int func_18(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x9315DBF7D972F07A() && unk_0xDD50B5A22807BAD4())
		{
			iParam2 = unk_0x5C5CE5291FB79534();
		}
	}
	StringCopy(&cVar0, unk_0x05CBA41180F5D521(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x2E87280918B16506(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22830.f_5978[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22830.f_5978[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22830.f_5978[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x2018949B2C9FD96A(2, iParam0, 1);
	if (Global_22830.f_5026 >= 12)
	{
		StringCopy(&Global_4533983, sVar0, 64);
		StringCopy(&(Global_4533983.f_16), sParam1, 16);
		Global_4533983.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_22830.f_5309), Global_22830.f_5026);
	}
	StringCopy(&(Global_22830.f_5028[Global_22830.f_5026 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22830.f_5221[Global_22830.f_5026 /*4*/]), sParam1, 16);
	Global_22830.f_5270[Global_22830.f_5026] = iParam2;
	Global_22830.f_5283[Global_22830.f_5026] = iParam0;
	Global_22830.f_5296[Global_22830.f_5026] = 32;
	Global_22830.f_5026++;
}

void func_20(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x19214818F925D149(2, iParam0, 1);
	if (Global_22830.f_5026 >= 12)
	{
		StringCopy(&Global_4533983, sVar0, 64);
		StringCopy(&(Global_4533983.f_16), sParam1, 16);
		Global_4533983.f_20 = iParam2;
		return;
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_22830.f_5309), Global_22830.f_5026);
	StringCopy(&(Global_22830.f_5028[Global_22830.f_5026 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22830.f_5221[Global_22830.f_5026 /*4*/]), sParam1, 16);
	Global_22830.f_5270[Global_22830.f_5026] = iParam2;
	Global_22830.f_5283[Global_22830.f_5026] = 361;
	Global_22830.f_5296[Global_22830.f_5026] = iParam0;
	Global_22830.f_5026++;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22830.f_5026 = 0;
	Global_22830.f_5027 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22830.f_5221[iVar0 /*4*/]), "", 16);
		Global_22830.f_5270[iVar0] = -1;
		Global_22830.f_5283[iVar0] = 361;
		Global_22830.f_5296[iVar0] = 32;
		iVar0++;
	}
	Global_22830.f_5309 = 0;
	StringCopy(&(Global_4533983.f_16), "", 16);
	Global_4533983.f_20 = -1;
	if (unk_0x8FE9914D4872D601())
	{
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xEA5DEA46C3EE64D3(Global_22830.f_5917[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(0);
		unk_0x6F06CF0E9AB02847();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_18(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22830.f_5892[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_5892[iVar0 /*4*/])))
	{
		unk_0x249A0D3C5714BCF4(&(Global_22830.f_5892[iVar0 /*4*/]), 9);
		Global_22830.f_5885[iVar0] = 1;
		if (!unk_0x5FABFB823FD821D4(&(Global_22830.f_5892[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xA9911C122B3210B5("CommonMenu", 0);
	Global_22830.f_5871[iVar0] = 1;
	if (!unk_0x9D4AFED2949F7082("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xA9911C122B3210B5("MPShopSale", 0);
		Global_22830.f_5878[iVar0] = 1;
		if (!unk_0x9D4AFED2949F7082("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22830.f_5917[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_23(&(Global_22830.f_5917[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				*uParam0 = unk_0x528279F3F1EEF869(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x0347CCBD719C8ADC(*uParam0))
					{
						uParam0->f_8 = unk_0x320D1840B6DAA1CC();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_8 = unk_0x320D1840B6DAA1CC();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x0347CCBD719C8ADC(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_24()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	
	if (func_165())
	{
		if (!unk_0x0347CCBD719C8ADC(Local_125.f_62))
		{
			Local_125.f_62 = unk_0x528279F3F1EEF869(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_125.f_8 > -1 || unk_0xE2D0C323A1AE5D85(Local_125.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (unk_0x876B1078E90C91CB(Local_125.f_61))
		{
			Var0 = { unk_0xE42645792657F001(Local_125.f_61, 2) };
			func_32(round(-Var0.f_2));
		}
		func_31(Local_125.f_33);
	}
	else if (unk_0x876B1078E90C91CB(Local_125.f_61))
	{
		Var1 = { unk_0xE42645792657F001(Local_125.f_61, 2) };
		fVar2 = Var1.f_2;
		if (unk_0xE5965CDF24F93A9F(func_30()))
		{
			if (!unk_0x55B23FE400FCEA6B(func_30(), 0))
			{
				Var8 = { unk_0x6B62510F212526DC(func_30(), 1) };
				fVar4 = unk_0x82FE2343F8BDFF0B(func_30());
			}
		}
		while (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		while (fVar2 > 360f)
		{
			fVar2 = (fVar2 - 360f);
		}
		while (fVar4 < 0f)
		{
			fVar4 = (fVar4 + 360f);
		}
		while (fVar4 > 360f)
		{
			fVar4 = (fVar4 - 360f);
		}
		fVar7 = fVar2;
		func_25(&fVar9);
		fVar5 = (fVar4 - fVar9);
		fVar6 = (fVar4 + fVar9);
		if (fVar7 < fVar5 && (fVar7 + 360f) <= fVar6)
		{
			fVar7 = (fVar7 + 360f);
		}
		if (fVar7 > fVar6 && (fVar7 - 360f) >= fVar5)
		{
			fVar7 = (fVar7 - 360f);
		}
		fVar3 = ((fVar7 - fVar5) / (fVar6 - fVar5));
		if (fVar3 == 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 == -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 < 0f && fVar3 >= -0.5f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 < 0f && fVar3 > -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 > 1.5f && fVar3 < 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 > 2f || fVar3 < -1f)
		{
			fVar3 = 0.5f;
		}
		unk_0xEA5DEA46C3EE64D3(Local_125.f_62, "SET_ALT_FOV_HEADING");
		unk_0xCA5D23E5F0F0306F(Var8.f_2);
		unk_0xCA5D23E5F0F0306F(fVar3);
		unk_0xCA5D23E5F0F0306F(fVar2);
		unk_0x6F06CF0E9AB02847();
		unk_0xEA5DEA46C3EE64D3(Local_125.f_62, "SET_CAM_LOGO");
		unk_0x4F47E317C74C543B(0);
		unk_0x6F06CF0E9AB02847();
	}
	unk_0x2E04B7B46A3670E5(1);
	unk_0xC4353D240DCE9533(Local_125.f_62, 255, 255, 255, 0, 0);
}

void func_25(var uParam0)
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_26(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x15CAA6D7B11F1A7C(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_29())
			{
				return func_27(Global_2689156[iParam0 /*453*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
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
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_28(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	return -1;
}

int func_30()
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_1637053))
		{
			return Global_1637053;
		}
		if (Global_1852973 != -1)
		{
			if (unk_0xE5965CDF24F93A9F(Global_1964036[Global_1852973]))
			{
				return Global_1964036[Global_1852973];
			}
		}
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		return unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
	}
	return -1;
}

void func_31(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_125.f_62, "SET_MISSILE_PERCENTAGE");
	unk_0x4F47E317C74C543B(uParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_32(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_125.f_62, "SET_HEADING");
	unk_0x4F47E317C74C543B(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_33()
{
	if (Local_125.f_59 <= 60f && Local_125.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_125.f_59 <= 55f && Local_125.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_125.f_59 <= 50f && Local_125.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_125.f_59 <= 45f && Local_125.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_125.f_59 <= 40f && Local_125.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_125.f_62, "SET_ZOOM");
	unk_0x4F47E317C74C543B(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_35(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_125.f_62, "SET_RETICLE_STATE");
	unk_0x4F47E317C74C543B(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_36(int iParam0)
{
	unk_0xEA5DEA46C3EE64D3(Local_125.f_62, "SET_RETICLE_ON_TARGET");
	unk_0xD7D6BA6E36AEC182(iParam0);
	unk_0x6F06CF0E9AB02847();
}

void func_37(char* sParam0, int iParam1)
{
	unk_0xEA5DEA46C3EE64D3(Local_125.f_62, sParam0);
	unk_0xD7D6BA6E36AEC182(iParam1);
	unk_0x6F06CF0E9AB02847();
}

char* func_38()
{
	if (func_165())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_44(0))
		{
			func_40(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_41())
	{
		Global_19954.f_1 = 3;
	}
}

int func_41()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_46()
{
	unk_0xCED9E32812D6C7C7(&Global_7825, 4);
}

void func_47()
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	
	if (!func_165())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (((unk_0x876B1078E90C91CB(Local_125.f_61) && unk_0x4B0B4E357722C507(Local_125.f_61)) && func_48(Local_125.f_84[iVar1])) && func_48(func_30()))
		{
			Var6 = { unk_0x97A9BB81C66772B5(Local_125.f_61) };
			Var7 = { unk_0x6B62510F212526DC(Local_125.f_84[iVar1], 1) };
			switch (Local_125.f_10[iVar1])
			{
				case 0:
					Local_125.f_98[iVar1] = unk_0x1E4C19DC2AD86A18(Var6, Var7, 511, 0, 7);
					if (Local_125.f_98[iVar1] != 0)
					{
						Local_125.f_10[iVar1] = 1;
					}
					break;
				
				case 1:
					iVar5 = unk_0xB2D581BD7446BBE9(Local_125.f_98[iVar1], &iVar0, &Var3, &uVar2, &iVar4);
					if (iVar5 == 2)
					{
						if (iVar0 == 0)
						{
							Local_125.f_17[iVar1] = 1;
							Var3 = { 0f, 0f, 0f };
							if (unk_0xE2D0C323A1AE5D85(Local_125.f_7, iVar1))
							{
								unk_0xB0550BC91B0159D6(&(Local_125.f_7), iVar1);
							}
						}
						else
						{
							Local_125.f_17[iVar1] = 2;
							if (unk_0xE2D0C323A1AE5D85(Local_125.f_7, iVar1))
							{
								unk_0xB0550BC91B0159D6(&(Local_125.f_7), iVar1);
							}
							if (unk_0xE5965CDF24F93A9F(iVar4))
							{
								if (Local_125.f_84[iVar1] == iVar4)
								{
									if (!unk_0xE2D0C323A1AE5D85(Local_125.f_7, iVar1))
									{
										unk_0xCED9E32812D6C7C7(&(Local_125.f_7), iVar1);
									}
								}
							}
							Local_125.f_98[iVar1] = 0;
							Local_125.f_10[iVar1] = 0;
						}
					}
					else if (iVar5 == 0)
					{
						Local_125.f_10[iVar1] = 0;
					}
					break;
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Local_125.f_7, iVar1))
		{
			unk_0xB0550BC91B0159D6(&(Local_125.f_7), iVar1);
		}
		iVar1++;
	}
}

int func_48(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	
	if (!func_165())
	{
		return;
	}
	iVar0 = 208;
	if (unk_0x3A76A0944BE2C291(0))
	{
		iVar0 = 237;
	}
	if ((unk_0x4C1B8C5717647539(2, iVar0) || unk_0x0DBA73788F6E3C5F(2, iVar0)) || unk_0xE2D0C323A1AE5D85(Local_125.f_5, 5))
	{
		iVar1 = 250;
		uVar2 = func_59();
		if (Local_125.f_8 > -1)
		{
			if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 3))
			{
				if (!func_58(&(Local_125.f_115)))
				{
					func_57(&(Local_125.f_115), 0, 0);
					Local_125.f_31 = 0;
					unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 5);
				}
				else if (func_56(&(Local_125.f_115), 300, 0) || Local_125.f_31 == 0)
				{
					if (Local_125.f_31 < 0 || Local_125.f_31 >= 6)
					{
						Local_125.f_31 = 0;
					}
					if (unk_0xE5965CDF24F93A9F(Local_125.f_84[Local_125.f_31]) && !unk_0x55B23FE400FCEA6B(Local_125.f_84[Local_125.f_31], 0))
					{
						iVar3 = unk_0x7F0054A115D66F44(func_30(), func_55());
						if (iVar3 != -1)
						{
							Var4 = { unk_0x96EDA732FD9DC0AF(func_30(), iVar3) + func_54(Local_125.f_31) };
							Var5 = { unk_0x52BD0FA2342C7246(2) };
							Var6 = { (-sin(Var5.f_2) * cos(Var5.x)), (cos(Var5.f_2) * cos(Var5.x)), sin(Var5.x) };
							Var7 = { 1f, 1f, 1f };
							Var8 = { Var4 + Var6 * Var7 };
							unk_0x633F41B5CEA31CC2(Var4, Var8, iVar1, 1, func_53(0), unk_0xE2D3D51028F0428A(), 1, 1, -1082130432, uVar2, 0, 0, Local_125.f_84[Local_125.f_31], 1, 0, 1, 0);
							unk_0xD336F8D9637B963F(-1, "Fire", Var4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_125.f_32++;
							func_52(&(Local_125.f_115), 0, 0);
						}
					}
					if (Local_125.f_32 == Local_125.f_8)
					{
						Local_125.f_31 = 0;
						Local_125.f_33 = 0;
						Local_125.f_32 = -1;
						unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 3);
						unk_0xB0550BC91B0159D6(&(Local_125.f_5), 5);
						func_57(&(Local_125.f_119), 0, 0);
						func_51(&(Local_125.f_115));
					}
					Local_125.f_31++;
				}
			}
		}
		else if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 1))
		{
			if (Local_125.f_31 < 0 || Local_125.f_31 >= 6)
			{
				Local_125.f_31 = 0;
			}
			iVar9 = unk_0x7F0054A115D66F44(func_30(), func_55());
			if (iVar9 != -1)
			{
				Var10 = { unk_0x96EDA732FD9DC0AF(func_30(), iVar9) + func_54(Local_125.f_31) };
				Var11 = { unk_0x524171C8263E7C3E() };
				Var12 = { unk_0x52BD0FA2342C7246(2) };
				Var13 = { (-sin(Var12.f_2) * cos(Var12.x)), (cos(Var12.f_2) * cos(Var12.x)), sin(Var12.x) };
				Var14 = { 10f, 10f, 10f };
				if (!func_50(Local_125.f_56))
				{
					Var14.x = unk_0x987A5F1E1A67E3C0(Local_125.f_56, Var11, 0);
					Var14.f_1 = unk_0x987A5F1E1A67E3C0(Local_125.f_56, Var11, 0);
					Var14.f_2 = unk_0x987A5F1E1A67E3C0(Local_125.f_56, Var11, 0);
				}
				Var15 = { Var11 + Var13 * Var14 };
				unk_0x633F41B5CEA31CC2(Var10, Var15, iVar1, 1, func_53(1), unk_0xE2D3D51028F0428A(), 1, 1, -1082130432, uVar2, 0, 0, 0, 1, 0, 1, 0);
				unk_0xD336F8D9637B963F(-1, "Fire", Var10, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 1);
				Local_125.f_33 = 0;
				func_57(&(Local_125.f_134), 0, 0);
				Local_125.f_31++;
			}
		}
	}
}

int func_50(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

int func_53(int iParam0)
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (iParam0 == 0)
		{
			return joaat("vehicle_weapon_hacker_missile_homing");
		}
		else
		{
			return joaat("vehicle_weapon_hacker_missile");
		}
	}
	return 0;
}

Vector3 func_54(int iParam0)
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			
			case 1:
				return -0.3f, -0.3f, 0.8f;
			
			case 2:
				return -0.1f, -0.1f, 0.8f;
			
			case 3:
				return 0.1f, 0.1f, 0.8f;
			
			case 4:
				return 0.3f, 0.3f, 0.8f;
			
			case 5:
				return 0.6f, 0.6f, 0.9f;
			
			case 6:
				return 0f, 0f, 0.8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_55()
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_56(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_57(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_57(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

bool func_58(var uParam0)
{
	return uParam0->f_1;
}

int func_59()
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return Global_1637053;
	}
	return -1;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if (!func_165())
	{
		return;
	}
	if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 3))
	{
		if (func_58(&(Local_125.f_119)))
		{
			if (!func_56(&(Local_125.f_119), 5000, 0))
			{
				iVar0 = (100 * unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_125.f_119)));
				Local_125.f_33 = (iVar0 / 5000);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_125.f_119));
				unk_0xB0550BC91B0159D6(&(Local_125.f_5), 3);
				Local_125.f_32 = -1;
				Local_125.f_33 = 100;
			}
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 1))
	{
		if (func_58(&(Local_125.f_134)))
		{
			if (!func_56(&(Local_125.f_134), 1500, 0))
			{
				iVar1 = (100 * unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_125.f_134)));
				Local_125.f_33 = (iVar1 / 1500);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_125.f_134));
				unk_0xB0550BC91B0159D6(&(Local_125.f_5), 1);
				Local_125.f_33 = 100;
			}
		}
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 1) && !unk_0xE2D0C323A1AE5D85(Local_125.f_5, 5))
	{
		switch (Local_125.f_111)
		{
			case 0:
				func_85();
				break;
			
			case 1:
				func_75();
				break;
		}
		func_68();
	}
	func_62();
	func_61();
}

void func_61()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	
	if ((unk_0x876B1078E90C91CB(Local_125.f_61) && unk_0x4B0B4E357722C507(Local_125.f_61)) && func_48(func_30()))
	{
		Var4 = { unk_0x524171C8263E7C3E() };
		Var5 = { unk_0x52BD0FA2342C7246(2) };
		Var6 = { (-sin(Var5.f_2) * cos(Var5.x)), (cos(Var5.f_2) * cos(Var5.x)), sin(Var5.x) };
		Var7 = { 300f, 300f, 300f };
		Var8 = { Var4 + Var6 * Var7 };
		Var9 = { Var4 + Var6 * Vector(1f, 1f, 1f) };
		switch (Local_125.f_27)
		{
			case 0:
				Local_125.f_106 = unk_0x1E4C19DC2AD86A18(Var9, Var8, 511, func_30(), 7);
				if (Local_125.f_106 != 0)
				{
					Local_125.f_27 = 1;
				}
				break;
			
			case 1:
				iVar3 = unk_0xB2D581BD7446BBE9(Local_125.f_106, &iVar0, &(Local_125.f_56), &uVar1, &uVar2);
				if (iVar3 == 2)
				{
					if (iVar0 == 0)
					{
						Local_125.f_26 = 1;
						Local_125.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_125.f_26 = 2;
						Local_125.f_27 = 0;
					}
				}
				else if (iVar3 == 0)
				{
					Local_125.f_27 = 0;
				}
				break;
			}
	}
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_63(Local_125.f_84[iVar0], 0, iVar0);
		iVar0++;
	}
}

void func_63(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x9D4AFED2949F7082("helicopterhud"))
	{
		unk_0x2E04B7B46A3670E5(1);
		if (Local_125.f_8 > -1)
		{
			if (func_48(iParam0))
			{
				unk_0xF00526C1598A6868(unk_0x6B62510F212526DC(iParam0, 1), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (unk_0x9044EDB8A7BF67B4(iParam0))
					{
						iVar7 = unk_0x28AA31872A651BC7(iParam0);
						if (unk_0x65FAB09725E2FE75(iVar7))
						{
							iVar8 = unk_0xFF65CDB0EB7ACE71(iVar7);
							if (func_28(iVar8, 1, 1))
							{
								if (func_67(iVar8, -1))
								{
									unk_0x8955D96A20FF3811(unk_0xB3FF0049C1FD38EC(iVar7, 0), 2);
								}
							}
						}
					}
					else if (unk_0x04D9F44466CBF3CA(iParam0))
					{
						iVar9 = unk_0xAB793EA186AB8DAA(unk_0x31EB55FAEEE9C0F5(iParam0), -1, 0);
						if (unk_0xE5965CDF24F93A9F(iVar9))
						{
							if (unk_0x65FAB09725E2FE75(iVar9))
							{
								iVar10 = unk_0xFF65CDB0EB7ACE71(iVar9);
								if (func_28(iVar10, 1, 1))
								{
									unk_0x8955D96A20FF3811(unk_0x31EB55FAEEE9C0F5(iParam0), 2);
								}
							}
						}
					}
					if (!unk_0xE2D0C323A1AE5D85(Local_125.f_48, iParam2))
					{
						if ((unk_0x78D9ADD511FEAD8B(Local_125.f_34[iParam2]) && Local_125.f_34[iParam2] == -1) && !func_66())
						{
							Local_125.f_34[iParam2] = unk_0xA9ADCC8D104AA552();
							unk_0x91DFC8F68F6D9B05(Local_125.f_34[iParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_57(&(Local_125.f_136[iParam2 /*2*/]), 0, 0);
							unk_0xCED9E32812D6C7C7(&(Local_125.f_48), iParam2);
						}
					}
					else if (!unk_0xE2D0C323A1AE5D85(Local_125.f_48, iParam2 + 6))
					{
						if (func_58(&(Local_125.f_136[iParam2 /*2*/])))
						{
							if (func_56(&(Local_125.f_136[iParam2 /*2*/]), 1000, 0))
							{
								func_65(iParam2, 0);
								if (unk_0x78D9ADD511FEAD8B(Local_125.f_41[iParam2]) && Local_125.f_41[iParam2] == -1)
								{
									Local_125.f_41[iParam2] = unk_0xA9ADCC8D104AA552();
									unk_0x91DFC8F68F6D9B05(Local_125.f_41[iParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_57(&(Local_125.f_149[iParam2 /*2*/]), 0, 0);
									unk_0xCED9E32812D6C7C7(&(Local_125.f_48), iParam2 + 6);
								}
							}
						}
					}
					else if (func_58(&(Local_125.f_149[iParam2 /*2*/])))
					{
						if (func_56(&(Local_125.f_149[iParam2 /*2*/]), 700, 0))
						{
							func_64(iParam2, 0);
						}
					}
					unk_0x691736A810DA2BD4(unk_0x6B62510F212526DC(iParam0, 1), 0);
					if (!unk_0xE2D0C323A1AE5D85(Local_125.f_48, iParam2 + 6))
					{
						unk_0x2F046C9381D8E91B(15, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					else
					{
						unk_0x2F046C9381D8E91B(6, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					if (!bParam1)
					{
						unk_0xEBF08DA37D86CD05("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, uVar3, uVar4, uVar5, uVar6, 1);
					}
					unk_0xEBF08DA37D86CD05("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, uVar3, uVar4, uVar5, uVar6, 1);
					unk_0xEBF08DA37D86CD05("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, uVar3, uVar4, uVar5, uVar6, 1);
					unk_0xEBF08DA37D86CD05("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, uVar3, uVar4, uVar5, uVar6, 1);
					unk_0xCCC0A2EF3DC76A34();
				}
				else
				{
					func_65(iParam2, 1);
					func_64(iParam2, 1);
				}
			}
			else
			{
				func_65(iParam2, 1);
				func_64(iParam2, 1);
			}
		}
		else
		{
			func_65(iParam2, 1);
			func_64(iParam2, 1);
		}
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Local_125.f_48, iParam0 + 6))
	{
		if (!unk_0x78D9ADD511FEAD8B(Local_125.f_41[iParam0]))
		{
			unk_0xF889BDFCC181BA9F(Local_125.f_41[iParam0]);
			unk_0xCDBCC1BC1184B002(Local_125.f_41[iParam0]);
		}
		Local_125.f_41[iParam0] = -1;
		if (bParam1)
		{
			unk_0xB0550BC91B0159D6(&(Local_125.f_48), iParam0 + 6);
		}
		func_51(&(Local_125.f_149[iParam0 /*2*/]));
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (unk_0xE2D0C323A1AE5D85(Local_125.f_48, iParam0))
	{
		if (!unk_0x78D9ADD511FEAD8B(Local_125.f_34[iParam0]))
		{
			unk_0xF889BDFCC181BA9F(Local_125.f_34[iParam0]);
			unk_0xCDBCC1BC1184B002(Local_125.f_34[iParam0]);
		}
		Local_125.f_34[iParam0] = -1;
		if (bParam1)
		{
			unk_0xB0550BC91B0159D6(&(Local_125.f_48), iParam0);
		}
		func_51(&(Local_125.f_136[iParam0 /*2*/]));
	}
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0x78D9ADD511FEAD8B(Local_125.f_34[iVar0]) || !unk_0x78D9ADD511FEAD8B(Local_125.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_28(iParam0, 1, 1))
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iParam0), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iParam0), 0);
			if (unk_0x55A0C756C4A8220C(uVar0, 0))
			{
				if (unk_0xE2D3D51028F0428A() == unk_0xAB793EA186AB8DAA(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_68()
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar0]))
		{
			if (unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar0]))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_125.f_7, iVar0))
				{
					if (func_58(&(Local_125.f_121[iVar0 /*2*/])))
					{
						if (func_56(&(Local_125.f_121[iVar0 /*2*/]), 1000, 0))
						{
							Local_125.f_84[iVar0] = -1;
							if (Local_125.f_8 > -1)
							{
								Local_125.f_17[iVar0] = 0;
								func_51(&(Local_125.f_121[iVar0 /*2*/]));
								Local_125.f_8 = (Local_125.f_8 - 1);
							}
						}
					}
					else
					{
						func_57(&(Local_125.f_121[iVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_51(&(Local_125.f_121[iVar0 /*2*/]));
				}
				if ((!func_74(Local_125.f_84[iVar0]) || !unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar0])) || !func_69(Local_125.f_84[iVar0]))
				{
					if (!unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar0]))
					{
					}
					if (!func_74(Local_125.f_84[iVar0]))
					{
					}
					Local_125.f_84[iVar0] = -1;
					if (Local_125.f_8 > -1)
					{
						Local_125.f_17[iVar0] = 0;
						func_51(&(Local_125.f_121[iVar0 /*2*/]));
						Local_125.f_8 = (Local_125.f_8 - 1);
					}
				}
			}
		}
		if (unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_125.f_8 != iVar1)
	{
		Local_125.f_8 = iVar1;
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0x04D9F44466CBF3CA(iParam0))
		{
			if (func_73(unk_0x31EB55FAEEE9C0F5(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_72(unk_0x15CAA6D7B11F1A7C(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x9044EDB8A7BF67B4(iParam0))
		{
			iVar0 = unk_0x28AA31872A651BC7(iParam0);
			if (unk_0x65FAB09725E2FE75(iVar0))
			{
				if (!func_70(unk_0xFF65CDB0EB7ACE71(iVar0), unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_29();
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xADD893BD545BE5FC(iParam0) + 1;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x7158135695FAE89D(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xAB793EA186AB8DAA(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xE5965CDF24F93A9F(iVar2))
					{
						if (unk_0x65FAB09725E2FE75(iVar2))
						{
							if (!bParam2 && func_70(unk_0xFF65CDB0EB7ACE71(iVar2), unk_0x9E2D6C50374FCFA9()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xF68107C40359970C(iVar2))
				{
					if (unk_0x65FAB09725E2FE75(iVar2))
					{
						if (!bParam2 && func_70(unk_0xFF65CDB0EB7ACE71(iVar2), unk_0x9E2D6C50374FCFA9()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		unk_0xF00526C1598A6868(unk_0x6B62510F212526DC(iParam0, 1), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_75()
{
	if (Local_125.f_28 < 0 || Local_125.f_28 >= 20)
	{
		Local_125.f_28 = 0;
	}
	else if (unk_0xE5965CDF24F93A9F(Local_125.f_63[Local_125.f_28]) && !unk_0x55B23FE400FCEA6B(Local_125.f_63[Local_125.f_28], 0))
	{
		func_83(Local_125.f_63[Local_125.f_28]);
		if (func_56(&(Local_125.f_117), 1000, 0))
		{
			if (Local_125.f_112 == 2)
			{
				if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 0))
				{
					if (Local_125.f_8 < 5)
					{
						if (func_82(Local_125.f_63[Local_125.f_28]))
						{
							Local_125.f_63[Local_125.f_28] = -1;
							unk_0xB0550BC91B0159D6(&(Local_125.f_5), 0);
							func_51(&(Local_125.f_117));
							Local_125.f_28++;
						}
					}
					else
					{
						if (func_79(Local_125.f_63[Local_125.f_28]))
						{
							func_76(Local_125.f_63[Local_125.f_28]);
						}
						Local_125.f_63[Local_125.f_28] = -1;
						unk_0xB0550BC91B0159D6(&(Local_125.f_5), 0);
						Local_125.f_25 = 0;
						func_51(&(Local_125.f_117));
						Local_125.f_28++;
					}
				}
				else
				{
					Local_125.f_25 = 0;
					Local_125.f_63[Local_125.f_28] = -1;
					unk_0xB0550BC91B0159D6(&(Local_125.f_5), 0);
					func_52(&(Local_125.f_117), 0, 0);
					Local_125.f_28++;
				}
			}
		}
	}
	else
	{
		Local_125.f_63[Local_125.f_28] = -1;
		Local_125.f_25 = 0;
		func_51(&(Local_125.f_117));
		Local_125.f_28++;
	}
	if (Local_125.f_28 == 20)
	{
		Local_125.f_111 = 0;
		Local_125.f_25 = 0;
		func_51(&(Local_125.f_117));
		Local_125.f_28 = 0;
	}
}

void func_76(int iParam0)
{
	if (func_77() != -1 && func_77() < 6)
	{
		if (unk_0xE5965CDF24F93A9F(Local_125.f_84[func_77()]) && unk_0xE5965CDF24F93A9F(iParam0))
		{
			Local_125.f_84[func_77()] = iParam0;
		}
	}
}

int func_77()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	
	iVar0 = -1;
	fVar1 = 0f;
	if (unk_0x876B1078E90C91CB(Local_125.f_61) && unk_0x4B0B4E357722C507(Local_125.f_61))
	{
		Var2 = { unk_0x97A9BB81C66772B5(Local_125.f_61) };
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			if (unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar3]) && !unk_0x55B23FE400FCEA6B(Local_125.f_84[iVar3], 0))
			{
				Var4 = { unk_0x6B62510F212526DC(Local_125.f_84[iVar3], 1) - Var2 };
				fVar5 = func_78(Var4);
				if (fVar5 > fVar1)
				{
					fVar1 = fVar5;
					iVar0 = iVar3;
				}
			}
			iVar3++;
		}
	}
	Local_125.f_9 = iVar0;
	return iVar0;
}

float func_78(struct<3> Param0)
{
	return sqrt((((Param0.x * Param0.x) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2)));
}

int func_79(int iParam0)
{
	if (func_77() != -1)
	{
		if ((func_48(Local_125.f_84[func_77()]) && func_48(iParam0)) && func_48(func_81()))
		{
			if (func_80(func_81(), Local_125.f_84[func_77()], 1) > func_80(func_81(), iParam0, 1) && func_80(Local_125.f_84[func_77()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_80(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	if (!unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0x6B62510F212526DC(iParam1, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Var1, iParam2);
}

int func_81()
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (unk_0xA52C4F51ECAB7E02() != -1)
		{
			return Global_2703656.f_814[unk_0xA52C4F51ECAB7E02()];
		}
	}
	return -1;
}

int func_82(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar0]))
		{
			Local_125.f_84[iVar0] = uParam0;
			Local_125.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_83(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	int iVar5;
	
	if (((unk_0x876B1078E90C91CB(Local_125.f_61) && unk_0x4B0B4E357722C507(Local_125.f_61)) && func_48(iParam0)) && func_48(func_30()))
	{
		Var0 = { unk_0x97A9BB81C66772B5(Local_125.f_61) };
		Var1 = { unk_0x6B62510F212526DC(iParam0, 1) };
		switch (Local_125.f_25)
		{
			case 0:
				Local_125.f_105 = unk_0x1E4C19DC2AD86A18(Var0, Var1, 511, 0, 7);
				if (Local_125.f_105 != 0)
				{
					Local_125.f_25 = 1;
				}
				break;
			
			case 1:
				Local_125.f_112 = unk_0xB2D581BD7446BBE9(Local_125.f_105, &iVar2, &Var4, &uVar3, &iVar5);
				if (Local_125.f_112 == 2)
				{
					if (iVar2 == 0)
					{
						Local_125.f_24 = 1;
						Var4 = { 0f, 0f, 0f };
						if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 0))
						{
							unk_0xB0550BC91B0159D6(&(Local_125.f_5), 0);
						}
					}
					else
					{
						Local_125.f_24 = 2;
						if (unk_0xE5965CDF24F93A9F(iVar5))
						{
							if (unk_0x04D9F44466CBF3CA(iVar5) || (unk_0x9044EDB8A7BF67B4(iVar5) && unk_0x65FAB09725E2FE75(unk_0x28AA31872A651BC7(iVar5))))
							{
								if (iVar5 == func_84(iParam0))
								{
									if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
									{
										if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 0))
										{
											unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 0);
										}
									}
								}
							}
							else if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 0))
							{
								unk_0xB0550BC91B0159D6(&(Local_125.f_5), 0);
							}
						}
						Local_125.f_105 = 0;
						Local_125.f_25 = 0;
					}
				}
				else if (Local_125.f_112 == 0)
				{
					Local_125.f_25 = 0;
				}
				break;
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 0))
	{
		unk_0xB0550BC91B0159D6(&(Local_125.f_5), 0);
	}
}

int func_84(int iParam0)
{
	return iParam0;
}

void func_85()
{
	int iVar0;
	int iVar1;
	var uVar2[100];
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x876B1078E90C91CB(Local_125.f_61) && unk_0x4B0B4E357722C507(Local_125.f_61))
	{
		if (func_28(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (func_48(func_81()))
			{
				iVar5 = unk_0xA0547B659F4E7B59(&uVar2);
				if (iVar5 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (!unk_0xE5965CDF24F93A9F(uVar2[iVar0]))
						{
						}
						else if ((!unk_0x04D9F44466CBF3CA(uVar2[iVar0]) || uVar2[iVar0] == func_30()) || !func_69(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_87(uVar2[iVar0]) && !func_86(uVar2[iVar0]))
						{
							if (func_74(uVar2[iVar0]) && func_80(uVar2[iVar0], func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_125.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (unk_0x0D01086B38EC256F(unk_0xA1087A6350CD9244(iVar0)))
					{
						iVar3 = unk_0xA1087A6350CD9244(iVar0);
						iVar4 = unk_0x407E03586628E458(iVar3);
						if ((iVar3 == unk_0x9E2D6C50374FCFA9() || !func_69(iVar4)) || unk_0x55B23FE400FCEA6B(iVar4, 0))
						{
						}
						else if (func_87(iVar4) && !func_86(iVar4))
						{
							if (func_80(iVar4, func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_125.f_63[iVar1] = iVar4;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_125.f_111 = 1;
			}
		}
	}
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((unk_0xE5965CDF24F93A9F(Local_125.f_84[iVar0]) && !unk_0x55B23FE400FCEA6B(Local_125.f_84[iVar0], 0)) && unk_0xE5965CDF24F93A9F(iParam0)) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (iParam0 == Local_125.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (unk_0xE5965CDF24F93A9F(iParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
		{
			if (iParam0 == Local_125.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_65(iVar0, 1);
		func_64(iVar0, 1);
		iVar0++;
	}
}

void func_89()
{
	int iVar0;
	
	if ((func_48(func_30()) && unk_0x876B1078E90C91CB(Local_125.f_61)) && unk_0x4B0B4E357722C507(Local_125.f_61))
	{
		iVar0 = unk_0x7F0054A115D66F44(func_30(), func_55());
		if (iVar0 != -1)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_395, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_395), 0);
			}
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_395, 0))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_395), 0);
	}
}

void func_90()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	int iVar16;
	struct<3> Var17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	struct<3> Var29;
	int iVar30;
	int iVar31;
	
	if (((unk_0x876B1078E90C91CB(Local_125.f_61) && (unk_0x4B0B4E357722C507(Local_125.f_61) || !unk_0xE2D0C323A1AE5D85(Local_125.f_5, 2))) && func_48(func_30())) && func_30() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_98(&fVar1);
		if (unk_0x3A76A0944BE2C291(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_97(&fVar8, &fVar7);
		func_96(&fVar10, &fVar9);
		func_95(&fVar12, &fVar11);
		func_25(&fVar13);
		unk_0x7BC5E5A5FF7F278F(2);
		unk_0x07899AAA5D680386(0, 39);
		if (unk_0x3A76A0944BE2C291(0))
		{
			fVar14 = 15f;
			fVar5 = (unk_0x1EC2077A4D963881(0, 291) * -fVar14);
			fVar6 = (unk_0x1EC2077A4D963881(0, 290) * fVar14);
		}
		else
		{
			iVar4 = floor((unk_0x1EC2077A4D963881(0, 291) * -fVar14));
			iVar3 = floor((unk_0x1EC2077A4D963881(0, 290) * fVar14));
		}
		iVar2 = floor((unk_0x159F9B5A2920DF4E(0, 39) * fVar14));
		if (!unk_0x3A76A0944BE2C291(0))
		{
			iVar16 = round((IntToFloat(iVar16) * fVar14));
			if (unk_0x07141611FD632B59(iVar2) < iVar16)
			{
				iVar2 = 0;
			}
			Var17 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (vmag(Var17) < IntToFloat(iVar16))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar18 = ((Var15.x / fVar7) * 0.5f);
		if (fVar18 > 0f)
		{
			fVar18 = (fVar18 + 1f);
		}
		else
		{
			fVar18 = 1f;
		}
		if (unk_0x3A76A0944BE2C291(0))
		{
			Local_125[2] = ((fVar5 * Local_125.f_59) * fVar1);
			Local_125[3] = (((fVar6 * Local_125.f_59) * fVar1) * fVar18);
		}
		else
		{
			Local_125[2] = (((to_float(iVar4) * Local_125.f_59) * fVar1) * timestep());
			Local_125[3] = ((((to_float(iVar3) * Local_125.f_59) * fVar1) * fVar18) * timestep());
		}
		Local_125[3] = func_94(Local_125[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			Var15 = { unk_0xE42645792657F001(Local_125.f_61, 2) };
		}
		if (!func_93(unk_0x97A9BB81C66772B5(Local_125.f_61), 0f, 0f, 0f, 0))
		{
			if (!unk_0x55B23FE400FCEA6B(func_30(), 0))
			{
				fVar19 = unk_0x82FE2343F8BDFF0B(func_30());
				fVar20 = (fVar19 - Var15.f_2);
				while (unk_0x48053974ED6F63CE(fVar20) >= 180f && iVar21 < 30)
				{
					if (fVar20 < 0f)
					{
						fVar20 = (fVar20 + 360f);
					}
					else
					{
						fVar20 = (fVar20 - 360f);
					}
					iVar21++;
					if (iVar21 == 30)
					{
					}
				}
				if (fVar20 >= fVar11)
				{
					if (fVar20 > 0f)
					{
						Var15.f_2 = (fVar19 - fVar11);
					}
					else
					{
						Var15.f_2 = (fVar19 + fVar11);
					}
				}
				if (fVar20 < fVar12)
				{
					if (fVar20 > 0f)
					{
						Var15.f_2 = (fVar19 - unk_0x48053974ED6F63CE(fVar12));
					}
					else
					{
						Var15.f_2 = (fVar19 + unk_0x48053974ED6F63CE(fVar12));
					}
				}
			}
			fVar22 = 0f;
			fVar23 = 0f;
			if (func_93(Local_125.f_50, 0f, 0f, 0f, 0))
			{
				Local_125.f_50 = { unk_0x63A8BF5E6C2BF85C(func_30(), 2) };
			}
			else
			{
				Var24 = { unk_0x63A8BF5E6C2BF85C(func_30(), 2) };
				fVar25 = ((unk_0x48053974ED6F63CE(Local_125.f_53.f_2) - 90f) / -90f);
				fVar22 = (fVar22 + ((Var24.x - Local_125.f_50) * fVar25));
				fVar23 = (fVar23 + (Var24.f_2 - Local_125.f_50.f_2));
				if (fVar23 > 180f)
				{
					fVar23 = (fVar23 - 360f);
				}
				if (fVar23 < -180f)
				{
					fVar23 = (fVar23 + 360f);
				}
				if (Var24.x < -80f || Var24.x > 80f)
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				if (unk_0x68C47642183F091A(func_30()))
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				Local_125.f_50 = { Var24 };
			}
			if ((((Local_125[2] != 0f || Local_125[3] != 0f) || fVar22 != 0f) || fVar23 != 0f) || !unk_0xE2D0C323A1AE5D85(Local_125.f_5, 2))
			{
				fVar26 = (((Local_125.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar26 < 3f)
				{
					fVar26 = 3f;
				}
				Local_125[2] = (Local_125[2] * fVar26);
				Local_125[3] = (Local_125[3] * fVar26);
				Local_125.f_53 = (Local_125.f_53 + Local_125[2]);
				Local_125.f_53.f_2 = (Local_125.f_53.f_2 - Local_125[3]);
				Local_125.f_53 = (Local_125.f_53 - fVar22);
				Local_125.f_53.f_2 = (Local_125.f_53.f_2 - fVar23);
				if (Local_125.f_53 < fVar8)
				{
					Local_125.f_53 = fVar8;
				}
				if (Local_125.f_53 > fVar7)
				{
					Local_125.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_125.f_53.f_2 > 180f)
					{
						Local_125.f_53.f_2 = (Local_125.f_53.f_2 - 360f);
					}
					while (Local_125.f_53.f_2 < -180f)
					{
						Local_125.f_53.f_2 = (Local_125.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_125.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_125.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_125.f_53.f_2 > (fVar13 / 2f))
					{
						Local_125.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 2))
			{
				if (func_165())
				{
					Local_125.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_125.f_53 = { fVar7, 0f, 0f };
				}
				unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 2);
			}
			if (!func_92(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_396[0 /*3*/], Local_125.f_53, 0f, Local_125.f_53.f_2, 1056964608, 0))
			{
				Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_396[0 /*3*/] = { Local_125.f_53, 0f, Local_125.f_53.f_2 };
			}
			if (func_165())
			{
				unk_0xBE3ECD06B6BDF192(Local_125.f_61, func_30(), unk_0x7F0054A115D66F44(func_30(), "weapon_1d"), 1, Local_125.f_53, 0f, Local_125.f_53.f_2, func_91(), 1);
			}
			else
			{
				unk_0xBE3ECD06B6BDF192(Local_125.f_61, func_30(), 0, 1, Local_125.f_53, 0f, Local_125.f_53.f_2, func_91(), 1);
			}
		}
		Local_125.f_59 = (Local_125.f_59 + (((to_float(iVar2) / 5f) * timestep()) * fVar0));
		if (Local_125.f_59 > fVar9)
		{
			Local_125.f_59 = fVar9;
		}
		if (Local_125.f_59 < fVar10)
		{
			Local_125.f_59 = fVar10;
		}
		unk_0xE776D70A603C3C81(1f);
		unk_0x0A18C027350D3C19(Local_125.f_61, Local_125.f_59);
		fVar27 = ((Local_125.f_59 - 5f) / 42f);
		unk_0xB27951EAA6BC6646(fVar27);
		if (unk_0x8133A5F807883BC6("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((unk_0x07141611FD632B59(iVar2) > 0 && Local_125.f_59 <= fVar9) && Local_125.f_59 >= fVar10)
			{
				iVar28 = Local_125.f_29;
				if (iVar28 != -1)
				{
					if (unk_0x78D9ADD511FEAD8B(iVar28))
					{
						unk_0x91DFC8F68F6D9B05(iVar28, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					unk_0x57973ADDF2BFAA90(iVar28, "Ctrl", to_float(iVar2));
					if (iVar2 < 0)
					{
						unk_0x57973ADDF2BFAA90(iVar28, "Dir", -1f);
					}
					else
					{
						unk_0x57973ADDF2BFAA90(iVar28, "Dir", 1f);
					}
				}
			}
			else if (Local_125.f_29 != -1)
			{
				if (!unk_0x78D9ADD511FEAD8B(Local_125.f_29))
				{
					unk_0xF889BDFCC181BA9F(Local_125.f_29);
				}
			}
			Var29 = { -Vector(unk_0x1EC2077A4D963881(0, 290), 0f, unk_0x1EC2077A4D963881(0, 291)) };
			if (vmag(Var29) > 0f)
			{
				iVar30 = Local_125.f_30;
				if (iVar30 != -1)
				{
					if (unk_0x78D9ADD511FEAD8B(iVar30))
					{
						unk_0x91DFC8F68F6D9B05(iVar30, "COP_HELI_CAM_TURN", 0, 1);
					}
					unk_0x57973ADDF2BFAA90(iVar30, "Ctrl", vmag(Var29));
				}
			}
			else
			{
				iVar31 = Local_125.f_30;
				if (iVar31 != -1)
				{
					if (!unk_0x78D9ADD511FEAD8B(iVar31))
					{
						unk_0xF889BDFCC181BA9F(iVar31);
					}
				}
			}
		}
	}
}

Vector3 func_91()
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (unk_0xE5965CDF24F93A9F(func_30()))
	{
		switch (unk_0x15CAA6D7B11F1A7C(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_92(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x48053974ED6F63CE((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x48053974ED6F63CE((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_93(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

float func_94(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_95(var uParam0, var uParam1)
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_96(var uParam0, var uParam1)
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_97(var uParam0, var uParam1)
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_98(float fParam0)
{
	*fParam0 = 0.0015f;
}

int func_99()
{
	if (unk_0xF1EC2C71FD1371B8() || unk_0x06C559386AD19942())
	{
		return 1;
	}
	if (func_102(1))
	{
		return 1;
	}
	if (func_100(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
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

bool func_101()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

bool func_102(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

void func_103()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_111())
	{
		func_110(1);
	}
	unk_0x111B8C39EE6C95E7(0, 1);
	if (func_165())
	{
		func_109();
	}
	else if (unk_0xE5965CDF24F93A9F(Local_125.f_107))
	{
		unk_0xC2C78FE6CDE262FE(Local_125.f_107);
	}
	Var0 = { unk_0x524171C8263E7C3E() };
	if ((((unk_0xF1EC2C71FD1371B8() || func_108()) || unk_0xF09A4F413B0D30EB(2, 199)) || unk_0x4C1B8C5717647539(2, 199)) || unk_0x26009F50A14AD073(2, 199))
	{
		unk_0x9C929B838435DB54(Var0.x, Var0.f_1);
		unk_0xC8813DFDECA7BB27(Var0.x, Var0.f_1, 0);
		if (unk_0xF1EC2C71FD1371B8() || func_108())
		{
			if (unk_0x12DD4A0B247D9B4D(unk_0x74248A89DFCAA77F()))
			{
				unk_0xFBBD8F124403B0F5(unk_0x74248A89DFCAA77F(), 255);
			}
		}
	}
	else if (func_165())
	{
		if (unk_0x12DD4A0B247D9B4D(unk_0x74248A89DFCAA77F()))
		{
			unk_0xFBBD8F124403B0F5(unk_0x74248A89DFCAA77F(), 0);
		}
	}
	unk_0x262D43EBE3CA4397(Var0.x, Var0.f_1);
	unk_0xA6CE32374156EFA0();
	unk_0x9A42DD879A371772();
	if (unk_0x876B1078E90C91CB(Local_125.f_61))
	{
		unk_0x8D32379EC749B177(Local_125.f_61, 1);
	}
	unk_0xCD6C63A108B12434(0);
	if (func_165())
	{
		Var1 = { unk_0x52BD0FA2342C7246(0) };
		Var1 = { func_107(Var1) };
		if (!unk_0x12DD4A0B247D9B4D(Local_125.f_109))
		{
			Local_125.f_108 = func_105(Var0, 0);
			unk_0x1A5B5BA56167D412(Local_125.f_108, 425);
			unk_0x3430966AC4550BB9(Local_125.f_108, 0);
			unk_0x94C2F928B167AA54(Local_125.f_108, 4);
			unk_0xA582EE8380437B1B(Local_125.f_108, func_104(2));
			unk_0xFF833B22CE9EBABD(Local_125.f_108, 1, 11);
			unk_0x293A9399E902A33B(Local_125.f_108, 0.54f);
			unk_0x7A610B2EC5DA34E7(Local_125.f_108, 13 + 1);
			Local_125.f_109 = func_105(Var0, 0);
			unk_0x1A5B5BA56167D412(Local_125.f_109, 425);
			unk_0x3430966AC4550BB9(Local_125.f_109, 0);
			unk_0x94C2F928B167AA54(Local_125.f_109, 4);
			unk_0xA582EE8380437B1B(Local_125.f_109, func_104(18));
			unk_0xFF833B22CE9EBABD(Local_125.f_109, 1, 11);
			unk_0x293A9399E902A33B(Local_125.f_109, 0.44f);
			unk_0x7A610B2EC5DA34E7(Local_125.f_109, 13 + 1);
			unk_0x2AE77DBCBF631065(Local_125.f_109, 1);
			unk_0xB02954D4F69B7A25(Local_125.f_109, round(unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1)));
			unk_0x2AE77DBCBF631065(Local_125.f_108, 1);
			unk_0xB02954D4F69B7A25(Local_125.f_108, round(unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1)));
		}
		else
		{
			unk_0xFB7ACC9D9D6401A8(Local_125.f_109, Var0);
			unk_0xB02954D4F69B7A25(Local_125.f_109, round(unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1)));
			unk_0x94C2F928B167AA54(Local_125.f_109, 5);
			unk_0xFB7ACC9D9D6401A8(Local_125.f_108, Var0);
			unk_0xB02954D4F69B7A25(Local_125.f_108, round(unk_0xD12EFCAB87804BED(Var1.x, Var1.f_1)));
			unk_0x94C2F928B167AA54(Local_125.f_108, 5);
		}
	}
}

int func_104(int iParam0)
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
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_105(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0xC5B823372B67998A(Param0);
	unk_0x293A9399E902A33B(uVar0, func_106(unk_0x9315DBF7D972F07A(), 1f, 1f));
	unk_0xAAD76B24A5282FDD(uVar0, iParam1);
	return uVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_107(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.x = cos(Param0.x);
	Var0.f_1 = cos(Param0.f_2);
	Var0.f_2 = sin(Param0.x);
	Var0.f_1 = (Var0.f_1 * Var0.x);
	Var0.x = (Var0.x * -sin(Param0.f_2));
	return Var0;
}

bool func_108()
{
	return unk_0x1A76A9A82BD6228C() != 0;
}

void func_109()
{
	Global_1574828 = 1;
}

void func_110(int iParam0)
{
	Global_2727513 = iParam0;
}

bool func_111()
{
	return Global_2727513;
}

void func_112(int iParam0)
{
	if (Local_125.f_110 != iParam0)
	{
		Local_125.f_110 = iParam0;
	}
}

int func_113()
{
	struct<3> Var0;
	float fVar1;
	
	if (func_129() && !func_99())
	{
		if ((func_127(0) || func_102(1)) || func_126())
		{
		}
		else
		{
			if (func_165())
			{
				if (unk_0xF09A4F413B0D30EB(2, 80) || unk_0xF01464D7AF0B7347(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (unk_0xF09A4F413B0D30EB(0, 51) || unk_0xF01464D7AF0B7347(0, 51))
				{
					if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_125.f_107, 0))
					{
						unk_0x52EF8B7F3D0A9EA8(Local_125.f_107, 1f);
						unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
					}
					return 1;
				}
				if (func_48(func_30()))
				{
					if (unk_0x876B1078E90C91CB(Local_125.f_61))
					{
						Var0 = { unk_0x97A9BB81C66772B5(Local_125.f_61) };
						if (unk_0x9CD4CBF2BBE10F00(Var0, &fVar1, 0, 0))
						{
							if (vdist(Var0, Var0.x, Var0.f_1, fVar1) < 2f)
							{
								return 1;
							}
						}
					}
					if (unk_0xD8F9DF94CD871327(func_30()))
					{
						return 1;
					}
					if (!unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), Local_125.f_107, 0))
					{
						unk_0x52EF8B7F3D0A9EA8(Local_125.f_107, 1f);
						unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_124())
			{
				return 1;
			}
		}
	}
	if (func_122(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_48(func_114()))
		{
			if ((unk_0x8142A6539DDC180F() % 30) == 0)
			{
				if (unk_0xD132EDDA78FF4A51(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (unk_0x68C47642183F091A(func_114()))
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

int func_114()
{
	if (Global_1852973 != func_29())
	{
		if (!func_115(Global_1852973))
		{
			if (unk_0xE5965CDF24F93A9F(Global_1637053))
			{
				return Global_1637053;
			}
			if (unk_0xE5965CDF24F93A9F(Global_1964036[Global_1852973]))
			{
				return Global_1964036[Global_1852973];
			}
		}
	}
	return -1;
}

int func_115(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_3, 4);
	}
	return 0;
}

int func_116()
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (Global_1852973 != func_29())
		{
			if (func_115(Global_1852973) || func_121(Global_1852973))
			{
				return 1;
			}
			if (func_120(Global_1852973))
			{
				if (func_27(func_119(Global_1852973)) == 11)
				{
					if (func_27(func_118(Global_1852973)) == 11)
					{
						if (func_117(Global_1852973) == 5)
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

int func_117(int iParam0)
{
	return unk_0xF6CF013E72C680B4(Global_2689156[iParam0 /*453*/].f_319.f_3, 28, 31);
}

int func_118(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_17;
	}
	return -1;
}

int func_119(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

int func_120(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 4);
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_344, 14);
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		if (func_123(iParam0) && !func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

int func_124()
{
	int iVar0;
	int iVar1;
	
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (unk_0xE5965CDF24F93A9F(func_30()))
		{
			iVar0 = unk_0xAB793EA186AB8DAA(func_30(), -1, 0);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				if (unk_0x65FAB09725E2FE75(iVar0))
				{
					iVar1 = unk_0xFF65CDB0EB7ACE71(iVar0);
					if (func_28(iVar1, 1, 1))
					{
						if (func_125(iVar1))
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

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1893548[iVar0 /*600*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

var func_126()
{
	return Global_22691.f_135;
}

int func_127(bool bParam0)
{
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_128(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4C1B8C5717647539(0, 25) || unk_0x4C1B8C5717647539(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (unk_0x4C1B8C5717647539(0, 19) || (!bParam0 && unk_0x0DBA73788F6E3C5F(0, 19)))
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (((unk_0x4C1B8C5717647539(0, 166) || unk_0x4C1B8C5717647539(0, 167)) || unk_0x4C1B8C5717647539(0, 168)) || unk_0x4C1B8C5717647539(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0DBA73788F6E3C5F(0, 166) || unk_0x0DBA73788F6E3C5F(0, 167)) || unk_0x0DBA73788F6E3C5F(0, 168)) || unk_0x0DBA73788F6E3C5F(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(iParam0))
		{
			unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_129()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958899, 1);
}

void func_130()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (func_137())
	{
		if (!unk_0x876B1078E90C91CB(Local_125.f_61))
		{
			Local_125.f_61 = unk_0xAE96F9AFF21228DC(26379945, 1);
			unk_0x0A18C027350D3C19(Local_125.f_61, Local_125.f_59);
			Var0 = { unk_0x63A8BF5E6C2BF85C(func_30(), 2) };
			unk_0x93150D31CE38FE75(Local_125.f_61, 0f, 0f, Var0.f_2, 2);
			unk_0x3FB84450A94CB528(Local_125.f_61, func_30(), func_136(), 1);
			func_133(1);
			func_132(1);
			func_90();
			unk_0xDEABC7EC7DA2B48E();
		}
		else if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 2))
		{
			func_103();
			func_3();
			unk_0x850D4EF3D40FB068(1, 0, 0, 1, 1, 0);
			unk_0x5C3549D308EC0B7F("eyeinthesky");
			if (Local_125.f_49 == -1)
			{
				Local_125.f_49 = unk_0xA9ADCC8D104AA552();
				unk_0x91DFC8F68F6D9B05(Local_125.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				Local_125.f_107 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				Var1 = { unk_0x6B62510F212526DC(Local_125.f_107, 1) };
				unk_0x03A927199A2DFE46(unk_0xE2D3D51028F0428A());
				unk_0x545C59578966D5B8(unk_0xE2D3D51028F0428A(), Local_125.f_107, 0, 0, Var1, 4, 0f, -1f, -1f, -1, -1, -1082130432, 0);
				unk_0x52EF8B7F3D0A9EA8(Local_125.f_107, 0f);
			}
			func_131("HUNTGUN_2b", -1);
			func_112(2);
		}
	}
	else
	{
		func_112(3);
	}
}

void func_131(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_344, 25))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_344), 25);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_344, 25))
	{
		unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_344), 25);
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!func_129())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958899, 1);
		}
	}
	else
	{
		if (func_129())
		{
			unk_0xB0550BC91B0159D6(&Global_1958899, 1);
		}
		func_134(0);
	}
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		if (!func_135())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958899, 2);
		}
	}
	else if (func_135())
	{
		unk_0xB0550BC91B0159D6(&Global_1958899, 2);
	}
}

bool func_135()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958899, 2);
}

Vector3 func_136()
{
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (unk_0xE5965CDF24F93A9F(func_30()))
	{
		switch (unk_0x15CAA6D7B11F1A7C(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_137()
{
	if (!unk_0xE5965CDF24F93A9F(func_30()))
	{
		return 0;
	}
	if (unk_0xE5965CDF24F93A9F(func_30()) && unk_0x55B23FE400FCEA6B(func_30(), 0))
	{
		return 0;
	}
	return 1;
}

void func_138()
{
	struct<3> Var0;
	
	if (func_137())
	{
		if (func_150())
		{
			if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
			{
				func_139(unk_0x9E2D6C50374FCFA9(), 0, 32768, 0);
			}
			if (!func_58(&(Local_125.f_113)))
			{
				if (func_48(func_30()))
				{
					if (unk_0xCA60DF1D01DBD440(unk_0x6B62510F212526DC(func_30(), 1), 100f, 1))
					{
						func_57(&(Local_125.f_113), 0, 0);
					}
				}
			}
			else if (func_56(&(Local_125.f_113), 2000, 0))
			{
				unk_0x34582635DA718E5A(func_30());
			}
		}
		if (func_58(&(Local_125.f_113)))
		{
			if (func_56(&(Local_125.f_113), 5000, 0))
			{
				if (unk_0x8A6AB093D1EE5368())
				{
					if (!unk_0x876B1078E90C91CB(Local_125.f_61))
					{
						Local_125.f_61 = unk_0xAE96F9AFF21228DC(26379945, 1);
						unk_0x0A18C027350D3C19(Local_125.f_61, Local_125.f_59);
						Var0 = { unk_0x63A8BF5E6C2BF85C(func_30(), 2) };
						unk_0x93150D31CE38FE75(Local_125.f_61, 0f, 0f, Var0.f_2, 2);
						unk_0x3FB84450A94CB528(Local_125.f_61, func_30(), func_136(), 1);
						func_133(1);
						func_132(1);
						func_90();
						unk_0xDEABC7EC7DA2B48E();
						unk_0x66B27A59829491D3("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 2))
					{
						func_103();
						func_3();
						unk_0xEE3A19A84A10F8B9();
						unk_0x850D4EF3D40FB068(1, 0, 0, 1, 1, 0);
						if (Local_125.f_49 == -1)
						{
							Local_125.f_49 = unk_0xA9ADCC8D104AA552();
							unk_0x91DFC8F68F6D9B05(Local_125.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_112(2);
					}
				}
			}
		}
	}
	else
	{
		func_112(3);
	}
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_149())
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
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
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
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_147())
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
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_10(unk_0x9E2D6C50374FCFA9(), 0) && !func_101()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_144(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_143(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(uVar27, false);
					}
					unk_0x398C962F550CF3B4(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(uVar27, false);
				}
				unk_0xA7266A50941DBAEA(uVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(uVar27) && unk_0x6090FC735660B8F7(uVar27))
				{
					unk_0xAD9047296F9EA375(uVar27);
				}
				unk_0xC252F409BDE7A700(uVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_142();
					func_141();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_143(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(uVar27, 1);
						}
					}
					if (func_140(Global_4718592.f_138117))
					{
						unk_0x5C65DDDC219B3AA5(uVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(uVar27) && !unk_0xD5C6B5E3B93A5EDC(uVar27, 0))
					{
						unk_0x51BB443B279E4104(iVar27);
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
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_140(int iParam0)
{
	return iParam0 == 17;
}

void func_141()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_142()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_143(int iParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
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
				func_146();
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 1))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 1);
			}
		}
		if (func_10(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_145(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_146()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 0);
		}
	}
}

int func_147()
{
	if (func_148() == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	return Global_1574629.f_18;
}

int func_149()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	if (Global_1581337 != -1 || Global_1581343 != -1)
	{
		if (((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (func_164(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_163(unk_0x9E2D6C50374FCFA9());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 4) && unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar0))) && !unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar0))) && unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar0), 0)) && unk_0xE5965CDF24F93A9F(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0))) && func_162(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0)))
			{
				return 1;
			}
			if (!func_161(Global_4718592.f_86750))
			{
				if (func_164(iVar0))
				{
					if (func_160(iVar0))
					{
						return 1;
					}
					else if (func_123(unk_0x9E2D6C50374FCFA9()) || func_159())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1958949)
	{
		return 1;
	}
	if (func_158(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = func_157(unk_0x9E2D6C50374FCFA9());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 9) && unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar0))) && !unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar0))) && unk_0xD5C6B5E3B93A5EDC(unk_0x407E03586628E458(iVar0), 0)) && unk_0xE5965CDF24F93A9F(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0))) && unk_0x15CAA6D7B11F1A7C(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_156(iVar0))
			{
				return 1;
			}
			else if (func_123(unk_0x9E2D6C50374FCFA9()) || func_159())
			{
				return 1;
			}
		}
	}
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		iVar0 = func_155(unk_0x9E2D6C50374FCFA9());
		if (func_28(iVar0, 0, 1))
		{
			if ((((Global_1852973 != func_29() && func_123(Global_1852973)) && func_27(func_119(Global_1852973)) == 11) && func_67(Global_1852973, -1)) && unk_0x7010991FDA59D3F2(unk_0xB3FF0049C1FD38EC(unk_0x407E03586628E458(Global_1852973), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_115(iVar0))
			{
				return 1;
			}
			else if (func_123(unk_0x9E2D6C50374FCFA9()) || func_159())
			{
				return 1;
			}
		}
	}
	if (func_154(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0x9E2D6C50374FCFA9() != func_29())
		{
			iVar0 = Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_319.f_9;
			if (func_28(iVar0, 0, 1))
			{
				if (func_123(unk_0x9E2D6C50374FCFA9()) || func_159())
				{
					return 1;
				}
			}
		}
	}
	if (func_158(unk_0x9E2D6C50374FCFA9()) || func_153(unk_0x9E2D6C50374FCFA9()))
	{
		switch (Global_1581343)
		{
			case 1:
				if (Global_262145.f_22860)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22861)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22862)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1581341 == 1)
	{
		return 1;
	}
	if (func_152(3))
	{
		if (Global_1835501 == 185)
		{
			if (Global_1836612 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	return Global_262145.f_5011[iParam0] == Global_4718592.f_86750;
}

int func_153(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_27(Global_2689156[iParam0 /*453*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_29())
			{
				return func_27(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_156(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_2, 6);
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_158(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_29())
			{
				return func_27(Global_2689156[iParam0 /*453*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

bool func_159()
{
	return unk_0xE2D0C323A1AE5D85(Global_1946934, 6);
}

int func_160(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 6);
	}
	return 0;
}

bool func_161(int iParam0)
{
	return Global_262145.f_5002[4] == iParam0;
}

int func_162(int iParam0)
{
	if (unk_0x15CAA6D7B11F1A7C(uParam0) == joaat("hauler2") || unk_0x15CAA6D7B11F1A7C(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_164(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_29())
			{
				return func_27(Global_2689156[iParam0 /*453*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

bool func_165()
{
	return unk_0xE2D0C323A1AE5D85(Local_125.f_5, 7);
}

void func_166()
{
	if (!func_99())
	{
		if (func_28(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!func_172())
			{
				if (func_165())
				{
					if ((func_168() && !func_150()) && func_167("MP_HTRUCK_T_2"))
					{
						if (unk_0x26009F50A14AD073(2, 176) || unk_0x51844F589D928A86(2, 176))
						{
							func_134(1);
							func_112(1);
							unk_0x3410421C60BF7143(1);
						}
					}
				}
				else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
				{
					if ((!unk_0xF847447D4467709D() && !unk_0x2D3AAABB780ED9B6()) && !func_167("HUNTGUN_1b"))
					{
						func_131("HUNTGUN_1b", -1);
					}
					else if (!func_167("HUNTGUN_1b"))
					{
						unk_0x3410421C60BF7143(1);
					}
					else if (unk_0xF09A4F413B0D30EB(0, 51) || unk_0xF01464D7AF0B7347(0, 51))
					{
						func_134(1);
						func_112(1);
						unk_0x3410421C60BF7143(1);
					}
				}
				else if (func_167("HUNTGUN_1b"))
				{
					unk_0x3410421C60BF7143(1);
				}
			}
			else if (func_167("HUNTGUN_1b"))
			{
				unk_0x3410421C60BF7143(1);
			}
		}
	}
}

bool func_167(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

int func_168()
{
	if ((func_26(unk_0x9E2D6C50374FCFA9(), 0) && Global_1581337 == 2) && func_169())
	{
		return 1;
	}
	return 0;
}

int func_169()
{
	if (Global_1581337 != -1 || Global_1581343 != -1)
	{
		if ((((unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_170(unk_0xE2D3D51028F0428A(), 2106541073))
		{
			return 0;
		}
		if (((((!unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0xFCF559C8631ABED7(unk_0xE2D3D51028F0428A(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 1;
}

int func_170(int iParam0, int iParam1)
{
	if (func_171(iParam0))
	{
		if (unk_0x174CED88B97C78D9(iParam0, iParam1) == 1 || unk_0x174CED88B97C78D9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if (func_48(uParam0))
	{
		if (!unk_0xF68107C40359970C(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_172()
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (Global_262145.f_24433)
		{
			return 1;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_176())
	{
		return 1;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_115(Global_1852973))
		{
			return 1;
		}
	}
	if (func_125(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	if (func_44(0))
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (!func_137())
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (Global_1581341)
	{
		return 1;
	}
	if (func_26(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_48(func_114()))
		{
			if (unk_0xD132EDDA78FF4A51(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x68C47642183F091A(func_114()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (!func_165())
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			uVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (func_48(uVar0))
			{
				Var1 = { unk_0x6B62510F212526DC(uVar0, 1) };
				if (unk_0x9CD4CBF2BBE10F00(Var1, &fVar2, 0, 0))
				{
					if (vdist(Var1, Var1.x, Var1.f_1, fVar2) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_173()
{
	return Global_97283;
}

int func_174()
{
	if (unk_0xB4C854DD86E40FDA(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	return Global_1946934.f_518;
}

int func_176()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_177()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

bool func_178(int iParam0)
{
	return Local_125.f_110 == iParam0;
}

void func_179()
{
	struct<3> Var0;
	
	if (func_178(1) || func_178(2))
	{
		if (func_48(func_30()))
		{
			Var0 = { unk_0x6B62510F212526DC(func_30(), 1) };
			unk_0x940745265434EB5F(Var0, 100f, 200f);
			unk_0x8F010262EB7D058C();
			if ((unk_0x8142A6539DDC180F() % 120) == 0)
			{
				unk_0x90D68B004DE537B5(Var0, 300f, 30);
			}
		}
	}
	if (func_178(2))
	{
		if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
		{
			func_139(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
		}
		func_180();
		unk_0x5089DD830FA61D71(0, 19, 1);
		unk_0x5089DD830FA61D71(0, 166, 1);
		unk_0x5089DD830FA61D71(0, 167, 1);
		unk_0x5089DD830FA61D71(0, 168, 1);
		unk_0x5089DD830FA61D71(0, 169, 1);
		unk_0x5089DD830FA61D71(2, 218, 1);
		unk_0x5089DD830FA61D71(2, 219, 1);
		unk_0x5089DD830FA61D71(2, 220, 1);
		unk_0x5089DD830FA61D71(2, 221, 1);
		unk_0x5089DD830FA61D71(2, 205, 1);
		unk_0x5089DD830FA61D71(2, 206, 1);
		unk_0x5089DD830FA61D71(2, 207, 1);
		unk_0x5089DD830FA61D71(2, 208, 1);
		unk_0x5089DD830FA61D71(2, 209, 1);
		unk_0x5089DD830FA61D71(2, 210, 1);
		unk_0x5089DD830FA61D71(2, 202, 1);
		unk_0x5089DD830FA61D71(2, 80, 1);
		unk_0x5089DD830FA61D71(2, 51, 1);
		unk_0x5089DD830FA61D71(2, 190, 1);
		unk_0x5089DD830FA61D71(2, 199, 1);
		unk_0x5089DD830FA61D71(2, 200, 1);
		if (unk_0x3A76A0944BE2C291(0))
		{
			unk_0x5089DD830FA61D71(0, 238, 1);
			unk_0x5089DD830FA61D71(0, 237, 1);
		}
		if (unk_0xF1EC2C71FD1371B8())
		{
			unk_0x5089DD830FA61D71(0, 201, 1);
			unk_0x5089DD830FA61D71(0, 202, 1);
			unk_0x5089DD830FA61D71(0, 188, 1);
			unk_0x5089DD830FA61D71(0, 187, 1);
			unk_0x5089DD830FA61D71(0, 189, 1);
			unk_0x5089DD830FA61D71(2, 195, 1);
			unk_0x5089DD830FA61D71(2, 196, 1);
			unk_0x5089DD830FA61D71(2, 198, 1);
			unk_0x5089DD830FA61D71(2, 197, 1);
		}
	}
}

void func_180()
{
	func_181();
}

void func_181()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 361)
	{
		unk_0x7653D561C9574763(0, iVar0, 1);
		iVar0++;
	}
}

int func_182()
{
	if (!func_147())
	{
		return 1;
	}
	if (func_184())
	{
		return 1;
	}
	if (!func_165())
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!func_183(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
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

int func_183(int iParam0)
{
	if (unk_0xE5965CDF24F93A9F(uParam0) && !unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		if (unk_0xAB793EA186AB8DAA(iParam0, -1, 0) == unk_0xE2D3D51028F0428A() && unk_0x7158135695FAE89D(iParam0, 0, 1))
		{
			switch (unk_0x15CAA6D7B11F1A7C(iParam0))
			{
				case joaat("maverick"):
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_184()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958899, 0);
}

int func_185()
{
	var uVar0;
	
	func_193(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_192())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_191())
	{
		return 1;
	}
	if (func_190(159))
	{
		if (!func_189())
		{
			return 1;
		}
	}
	if (func_190(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_186() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_186()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_186()
{
	switch (func_188())
	{
		case 0:
			return func_187();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_187()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_188()
{
	return Global_31505;
}

bool func_189()
{
	return Global_2714627.f_698;
}

int func_190(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_191()
{
	return Global_2725224;
}

bool func_192()
{
	return Global_2714627.f_693;
}

void func_193(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_194(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_194(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_28(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iVar1, 0))
				{
					uVar2 = unk_0xB3FF0049C1FD38EC(iVar1, 0);
					if (unk_0x49E701A18D345B0E(uVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_195(uVar2, &bVar3))
						{
							unk_0xF6FBA55B09506B23(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x3D81769BEC61BFF8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_195(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xA6A089369417736E(iParam0))
		{
			if (unk_0x58FDF0B505AA2260(iParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					unk_0x2D58A6131679D82C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(iParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_196()
{
	wait(0);
}

void func_197(bool bParam0)
{
	int iVar0;
	
	if (!func_165())
	{
		if (func_167("HUNTGUN_1b"))
		{
			unk_0x3410421C60BF7143(1);
		}
		unk_0xDEABC7EC7DA2B48E();
	}
	if (func_48(func_30()))
	{
		unk_0x5639E771F6085BF6();
	}
	unk_0x861D35D42CFD2991("helicopterhud");
	unk_0x861D35D42CFD2991("droneHUD");
	unk_0x705B098546DEB18A(&(Local_125.f_62));
	func_205();
	func_204();
	if (func_111())
	{
		func_110(0);
	}
	unk_0x1C35FDD57F36FBEA();
	unk_0xBD18A1EF31F0166B();
	if (func_147() && !func_123(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0xBC4351060BEFB0D2())
		{
			func_139(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
			unk_0x5C65DDDC219B3AA5(unk_0xE2D3D51028F0428A(), false);
		}
	}
	func_51(&(Local_125.f_113));
	func_51(&(Local_125.f_115));
	func_51(&(Local_125.f_117));
	func_51(&(Local_125.f_119));
	func_133(0);
	func_132(0);
	Local_125.f_32 = -1;
	Local_125.f_31 = 0;
	Local_125.f_5 = 0;
	Local_125.f_24 = 0;
	Local_125.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_125.f_17[iVar0] = 0;
		func_51(&(Local_125.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_88();
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_395, 0))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_395), 0);
	}
	Local_125.f_48 = 0;
	func_203();
	func_201(1, -1);
	if (unk_0x12DD4A0B247D9B4D(Local_125.f_108))
	{
		unk_0xFFD8EB5462B07B59(&(Local_125.f_108));
	}
	if (unk_0x12DD4A0B247D9B4D(Local_125.f_109))
	{
		unk_0xFFD8EB5462B07B59(&(Local_125.f_109));
	}
	if (!bParam0)
	{
		func_200(0);
		func_199();
	}
	else
	{
		func_198(0);
	}
}

void func_198(bool bParam0)
{
	int iVar0;
	
	Local_125.f_33 = 100;
	Local_125.f_59 = 50f;
	Local_125.f_62 = unk_0x528279F3F1EEF869(func_38());
	unk_0x8133A5F807883BC6("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	unk_0xA9911C122B3210B5("helicopterhud", 0);
	unk_0xA9911C122B3210B5("droneHUD", 0);
	Local_125.f_29 = unk_0xA9ADCC8D104AA552();
	Local_125.f_30 = unk_0xA9ADCC8D104AA552();
	func_112(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_125.f_34[iVar0] = -1;
		Local_125.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_199()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184())
		{
			unk_0xCED9E32812D6C7C7(&Global_1958899, 0);
		}
	}
	else if (func_184())
	{
		unk_0xB0550BC91B0159D6(&Global_1958899, 0);
	}
}

void func_201(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22830.f_8674)
	{
		unk_0x4FEF096D3AB4AA8C(15);
		Global_22830.f_8674 = 0;
	}
	unk_0x7ED668FC4CB0F4C4(0f);
	if (Global_22830.f_5885[iVar0])
	{
		unk_0xC511E7C272201CF7(9, 0);
		Global_22830.f_5885[iVar0] = 0;
	}
	if (Global_22830.f_5871[iVar0])
	{
		unk_0x861D35D42CFD2991("CommonMenu");
		Global_22830.f_5871[iVar0] = 0;
	}
	if (Global_22830.f_5878[iVar0])
	{
		unk_0x861D35D42CFD2991("MPShopSale");
		Global_22830.f_5878[iVar0] = 0;
	}
	if (bParam0)
	{
		func_202(&(Global_22830.f_5917[iVar0 /*10*/]));
		Global_22830.f_5978[iVar0] = 0;
	}
	else
	{
		Global_22830.f_5978[iVar0] = 0;
	}
}

void func_202(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x0347CCBD719C8ADC(*uParam0))
		{
			unk_0x705B098546DEB18A(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_203()
{
	if (Local_125.f_30 != -1)
	{
		unk_0xF889BDFCC181BA9F(Local_125.f_30);
		unk_0xCDBCC1BC1184B002(Local_125.f_30);
		Local_125.f_30 = -1;
	}
	if (Local_125.f_29 != -1)
	{
		unk_0xF889BDFCC181BA9F(Local_125.f_29);
		unk_0xCDBCC1BC1184B002(Local_125.f_29);
		Local_125.f_29 = -1;
	}
	if (Local_125.f_49 != -1)
	{
		unk_0xF889BDFCC181BA9F(Local_125.f_49);
		unk_0xCDBCC1BC1184B002(Local_125.f_49);
		Local_125.f_49 = -1;
	}
	unk_0x0AF8D3A06BB92903("DLC_GR_MOC_Turret_View_Scene");
	unk_0x257D98D0E399F50E();
}

void func_204()
{
	if (Local_125.f_6 == -1)
	{
		unk_0xF889BDFCC181BA9F(Local_125.f_6);
		unk_0xCDBCC1BC1184B002(Local_125.f_6);
		Local_125.f_6 = -1;
	}
}

void func_205()
{
	if (unk_0x876B1078E90C91CB(Local_125.f_61))
	{
		unk_0x588DDCB644C6486A(Local_125.f_61, 0);
		unk_0x850D4EF3D40FB068(0, 0, 3000, 1, 0, 0);
		unk_0xDEABC7EC7DA2B48E();
	}
}

void func_206(struct<19> Param0, var uParam1, var uParam2)
{
	unk_0xD9B114A8D3A8319F(32, 0, Param0.f_16);
	func_209(0, -1, 0);
	unk_0x21F2B09183F31D02(&uLocal_124, 1, 0);
	unk_0x7157B1051528D729(&uLocal_91, 33, 0);
	if (!func_208())
	{
		func_197(0);
	}
	if (unk_0x9315DBF7D972F07A())
	{
	}
	else
	{
		func_197(0);
	}
	if (Param0.f_18 == 1)
	{
		func_207(1);
	}
	else
	{
		func_207(0);
	}
	func_198(1);
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_125.f_5, 7))
		{
			unk_0xCED9E32812D6C7C7(&(Local_125.f_5), 7);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Local_125.f_5, 7))
	{
		unk_0xB0550BC91B0159D6(&(Local_125.f_5), 7);
	}
}

int func_208()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_192())
		{
			return 0;
		}
		if (func_190(157))
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

int func_209(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_199();
			}
			else
			{
				return 0;
			}
		}
		if (!func_210())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_199();
					}
					else
					{
						return 0;
					}
				}
				if (func_192())
				{
					if (!bParam2)
					{
						func_199();
					}
					else
					{
						return 0;
					}
				}
				if (func_190(157))
				{
					if (!bParam2)
					{
						func_199();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_199();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_199();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_199();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_210()
{
	return Global_1575022;
}

