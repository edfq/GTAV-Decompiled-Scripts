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
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	var uLocal_49 = 0;
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
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_56 = -1;
	iLocal_57 = -1;
	fLocal_66 = 0f;
	iLocal_67 = 1;
	if (Global_77852)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	unk_0x3F57BEDBC381CBC7();
	iLocal_51 = func_78();
	unk_0x249A0D3C5714BCF4("email", 1);
	while (!unk_0x01896B71C5AC966E(1))
	{
		wait(0);
	}
	Global_22318 = 0;
	Global_22319 = 0;
	Global_19954.f_1 = 8;
	Global_22319 = 1;
	Global_43783 = 1;
	if (Global_19936)
	{
		func_77(0);
		func_76(1);
		func_75(0);
	}
	settimerb(0);
	Local_47 = { Global_19907[Global_19899 /*3*/] };
	Local_48 = { Local_47 };
	Local_48.x = (Local_48.x - 10f);
	Local_48.f_1 = (Local_48.f_1 + 20f);
	while (true)
	{
		wait(0);
		if (Global_19954.f_1 != 9)
		{
			if (Global_22319 && !Global_22318)
			{
				func_73();
			}
			else if (Global_22318)
			{
				func_68();
			}
			if (!iLocal_52)
			{
				iLocal_52 = 1;
			}
			else if (Global_19936)
			{
				if (!iLocal_53)
				{
					iLocal_53 = 1;
					func_66(Global_19935, iLocal_51);
					func_65(Global_19935, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_64(Global_19935, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					if (Global_43784)
					{
						Global_43784 = 0;
						iLocal_54 = 1;
					}
					if (iLocal_54)
					{
						settimera(0);
						settimerb(0);
						if (iLocal_56 == -1)
						{
							if (iLocal_67)
							{
								iLocal_67 = 0;
								fLocal_66 = 0f;
							}
							func_64(Global_19935, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
							iVar0 = func_66(Global_19935, iLocal_51);
							func_65(Global_19935, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_55 = 0;
							if (iVar0 > 0)
							{
								func_77(1);
							}
							else
							{
								func_77(0);
							}
							func_76(1);
							func_75(0);
							func_64(Global_19935, "DISPLAY_VIEW", 8f, fLocal_66, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							func_64(Global_19935, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							wait(0);
							func_64(Global_19935, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
							wait(0);
							func_76(1);
							func_63();
							if (iLocal_57 == -1)
							{
								func_61(iLocal_51, iLocal_56);
								func_56(Global_19935, iLocal_51, iLocal_56);
								Global_22345 = 0;
								iLocal_64 = func_54(iLocal_51, iLocal_56);
								if (iLocal_64)
								{
									sLocal_65 = func_51(iLocal_51, iLocal_56);
									if (!func_50(37))
									{
										switch (func_48("AM_H_FLINK"))
										{
											case 2:
												func_45("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_44(37);
												break;
										}
									}
									else if (unk_0x8FE9914D4872D601())
									{
										if (!unk_0xE2D0C323A1AE5D85(Global_4535327, 17))
										{
											unk_0xCED9E32812D6C7C7(&Global_4535327, 17);
											func_43("AM_H_FLINK", -1);
										}
									}
									func_75(1);
								}
								else
								{
									if (!func_50(38))
									{
										switch (func_48("AM_H_SCROLL"))
										{
											case 2:
												func_45("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_44(38);
												break;
											}
									}
									func_75(0);
								}
								func_64(Global_19935, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_64(Global_19935, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								wait(0);
								func_64(Global_19935, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432, -1082130432);
								wait(0);
								func_64(Global_19935, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
								func_40(Global_19935, iLocal_51, iLocal_56);
								func_64(Global_19935, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						iLocal_54 = 0;
					}
					else
					{
						func_17();
					}
				}
			}
			if (!iLocal_51 == func_78())
			{
				Global_43783 = 0;
				func_4();
			}
		}
		if (func_3())
		{
			Global_22318 = 0;
			Global_22319 = 0;
			Global_43783 = 0;
			func_1(0);
			unk_0xAFBDF6A5E54114C1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			unk_0x2374AA601C2C4709(1);
		}
		else if (Global_19954.f_1 > 3)
		{
			unk_0x2374AA601C2C4709(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77852)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4535605 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_19954.f_1 == 1 || Global_19954.f_1 == 3) || Global_19954.f_1 == 0) || Global_19898 == 1)
	{
		Global_19941 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (Global_53092 != -1)
	{
		unk_0x861D35D42CFD2991(func_16(Global_53092));
		Global_53092 = -1;
	}
	Global_43783 = 0;
	if (Global_19954.f_1 > 4)
	{
		Global_19954.f_1 = 6;
		func_5();
	}
	unk_0xAFBDF6A5E54114C1();
}

void func_5()
{
	struct<3> Var0;
	
	if (Global_19937 == 1)
	{
		return;
	}
	if (Global_19954.f_1 < 4)
	{
		return;
	}
	while (!unk_0x0347CCBD719C8ADC(Global_19935))
	{
		if (Global_77852)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19954.f_1)
	{
		case 6:
			func_64(Global_19935, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_14(Global_8429);
			if (Global_8429 == 1)
			{
				func_64(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19958), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19958;
			}
			else
			{
				func_64(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19959), -1082130432, -1082130432, -1082130432);
				Global_19934 = Global_19959;
			}
			if (Global_19942)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20146 == 0)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_7824, 17);
			}
			else if (Global_77852)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xB0550BC91B0159D6(&Global_7824, 17);
			}
			else
			{
				if (Global_20145 == 1)
				{
					if (Global_19942)
					{
						func_13(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_13(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19942)
				{
					func_13(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_13(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0xCED9E32812D6C7C7(&Global_7824, 17);
			}
			if (Global_77852)
			{
				func_11();
				unk_0xB0550BC91B0159D6(&Global_7826, 9);
				func_64(Global_19935, "DISPLAY_VIEW", 1f, to_float(Global_19958), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_64(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_13(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19953 == 1)
			{
				func_10();
				func_64(Global_19935, "SET_THEME", to_float(Global_112915.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21298)
				{
					unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21300);
					unk_0xD1D4F8D5470AFA4C();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x6F06CF0E9AB02847();
				}
				else if (func_8(Global_7139, Global_19954) == 0)
				{
					func_13(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_13(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), "CELL_217", &(Global_1918[Global_7139 /*29*/].f_3), 0);
				}
				func_64(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21285 == 4 || Global_21285 == 3)
			{
				func_64(Global_19935, "SET_THEME", to_float(Global_112915.f_14051[Global_19954 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_21298)
				{
					unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
					unk_0x4F47E317C74C543B(4);
					unk_0x4F47E317C74C543B(0);
					unk_0x4F47E317C74C543B(2);
					unk_0x4ADC8B166E139423("CELL_CONDFON");
					unk_0x76DB21247AE4E4E2(&Global_21300);
					unk_0xD1D4F8D5470AFA4C();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x6F06CF0E9AB02847();
				}
				else
				{
					if (Global_21543)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_8(Global_7139, Global_19954) == 0)
					{
						func_64(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_7139 /*10*/].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_64(Global_19935, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_13(Global_19935, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1918[Global_7139 /*29*/].f_3), &(Global_1918[Global_7139 /*29*/].f_7), &Var0, &(Global_1918[Global_7139 /*29*/].f_3), 0);
					}
				}
				func_64(Global_19935, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()
{
	if (unk_0x0347CCBD719C8ADC(Global_19935))
	{
		func_7();
		if (Global_19953 == 1)
		{
			if (Global_19942)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21332)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_13(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
		}
		else
		{
			func_13(Global_19935, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_13(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xB0550BC91B0159D6(&Global_7824, 17);
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 20))
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19942)
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19897)
				{
					func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_13(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_7()
{
	if (Global_77852)
	{
		func_13(Global_19935, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xB0550BC91B0159D6(&Global_7824, 17);
	}
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

void func_9(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_10()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_19954 == 0)
		{
			switch (Global_112915.f_14051[Global_19954 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19954 == 1)
		{
			switch (Global_112915.f_14051[Global_19954 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19954 == 2)
		{
			switch (Global_112915.f_14051[Global_19954 /*20*/].f_6)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19954 == 3)
		{
			switch (Global_4535603)
			{
				case 1:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 0);
					break;
				
				case 2:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 1);
					break;
				
				case 3:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 2);
					break;
				
				case 4:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 3);
					break;
				
				case 5:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 4);
					break;
				
				case 6:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 5);
					break;
				
				case 7:
					unk_0x801BBD5E2830170E(unk_0x9E2D6C50374FCFA9(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()
{
	if (Global_77852)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_13(Global_19935, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xCED9E32812D6C7C7(&Global_7824, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_9(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_9(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_14(int iParam0)
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
	
	Global_22353 = 0;
	Global_8429 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8393[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_15(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar2 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar2);
								unk_0x6F06CF0E9AB02847();
							}
							if (Global_2725219)
							{
								if (iVar1 == 14)
								{
									func_13(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8393[iVar0] = 1;
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
				if (iParam0 == Global_7831[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7831[iVar1 /*15*/].f_4)
					{
						if (Global_8393[iVar0] == 0)
						{
							Global_8357[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112915.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112915.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112915.f_14141[iVar3 /*104*/].f_99[Global_19954] == 1)
											{
												Global_22353++;
											}
										}
									}
									iVar3++;
								}
								func_13(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22353), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77852)
								{
									iVar4 = 0;
									iVar4 = Global_4534061;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4534062[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4534062[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4534062[iVar5 /*104*/].f_99[Global_19954] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_13(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19954)
									{
										case 0:
											iVar6 = Global_43785;
											break;
										
										case 1:
											iVar6 = Global_43786;
											break;
										
										case 2:
											iVar6 = Global_43787;
											break;
										
										default:
											break;
									}
									func_13(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_13(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(Global_22348), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(Global_7830);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar7);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xE2D0C323A1AE5D85(Global_7825, 3))
								{
									iVar8 = 42;
									Global_20148 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20148 = 0;
								}
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(iVar8);
								unk_0x6F06CF0E9AB02847();
							}
							else if (iVar1 == 8)
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if ((iVar1 == 23 && unk_0x3C57C2F07FEE34D2(&(Global_7831[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xE2D0C323A1AE5D85(Global_7825, 6))
							{
								unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_DATA_SLOT");
								unk_0x4F47E317C74C543B(1);
								unk_0x4F47E317C74C543B(iVar0);
								unk_0x4F47E317C74C543B(Global_7831[iVar1 /*15*/].f_10);
								unk_0x4F47E317C74C543B(0);
								func_9(&(Global_7831[iVar1 /*15*/]));
								unk_0x4F47E317C74C543B(42);
								unk_0x6F06CF0E9AB02847();
							}
							else if (Global_7831[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1889922.f_1;
								func_13(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_13(Global_19935, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7831[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7831[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8393[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_15(int iParam0)
{
	return Global_42596 == iParam0;
}

char* func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Epsilon_Cars";
		
		case 1:
			return "Epsilon_Cars";
		
		case 2:
			return "Epsilon_Cars";
		
		case 3:
			return "Epsilon_Cars";
		
		case 4:
			return "Epsilon_Cars";
		
		case 5:
			return "Epsilon_Cars";
		
		case 6:
			return "Epsilon_Cars";
		
		case 12:
			return "Assassinations";
		
		case 13:
			return "Assassinations";
		
		case 14:
			return "Assassinations";
		
		case 15:
			return "Assassinations";
		
		case 64:
			return "BSPBadHacker";
		
		case 65:
			return "BPDGoodHacker";
		
		case 66:
			return "BPSMedHacker";
		
		case 75:
			return "email_quarry_bail_bond";
		
		case 76:
			return "email_abandonedfarm_bail_bond";
		
		case 77:
			return "email_mountain_bail_bond";
		
		case 78:
			return "email_hobocamp_bail_bond";
		
		case 80:
			return "email_quarry_bail_bond";
		
		case 81:
			return "email_abandonedfarm_bail_bond";
		
		case 82:
			return "email_mountain_bail_bond";
		
		case 83:
			return "email_hobocamp_bail_bond";
		
		case 205:
			return "hush_foxymama21";
		
		case 209:
			return "hush_alterego";
		
		case 212:
			return "hush_michael";
		
		case 238:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_17()
{
	bool bVar0;
	
	if (Global_22345)
	{
		iLocal_56 = 0;
		fLocal_66 = to_float(iLocal_56);
		if (func_39(iLocal_51) == 0)
		{
			iLocal_56 = -1;
		}
		if (!iLocal_56 == -1)
		{
			Global_19954.f_1 = 8;
			iLocal_54 = 1;
			settimerb(0);
			func_37();
		}
		return;
	}
	if (func_36())
	{
		return;
	}
	if (Global_22318)
	{
		return;
	}
	if (!iLocal_60)
	{
		if (unk_0xF09A4F413B0D30EB(2, 172) || unk_0xF09A4F413B0D30EB(2, 181))
		{
			iLocal_60 = 1;
			unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(1);
			unk_0x6F06CF0E9AB02847();
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
			settimera(0);
			iLocal_67 = 1;
		}
	}
	else if (unk_0x4C1B8C5717647539(2, 172) || unk_0x4C1B8C5717647539(2, 181))
	{
		if (timera() > 100 && iLocal_56 != -1)
		{
			unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(1);
			unk_0x6F06CF0E9AB02847();
			settimera(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_60 = 0;
	}
	if (!iLocal_61)
	{
		if (unk_0xF09A4F413B0D30EB(2, 173) || unk_0xF09A4F413B0D30EB(2, 180))
		{
			iLocal_61 = 1;
			unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(3);
			unk_0x6F06CF0E9AB02847();
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
			settimerb(0);
			iLocal_67 = 1;
		}
	}
	else if (unk_0x4C1B8C5717647539(2, 173) || unk_0x4C1B8C5717647539(2, 180))
	{
		if (timerb() > 100 && iLocal_56 != -1)
		{
			unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(3);
			unk_0x6F06CF0E9AB02847();
			settimerb(0);
			iLocal_67 = 1;
		}
	}
	else
	{
		iLocal_61 = 0;
	}
	if (!iLocal_62)
	{
		if (unk_0x4C1B8C5717647539(2, 174))
		{
			iLocal_62 = 1;
			unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(4);
			unk_0x6F06CF0E9AB02847();
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
		}
	}
	else if (!unk_0x4C1B8C5717647539(2, 174))
	{
		iLocal_62 = 0;
	}
	if (!iLocal_63)
	{
		if (unk_0x4C1B8C5717647539(2, 175))
		{
			iLocal_63 = 1;
			unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_INPUT_EVENT");
			unk_0x4F47E317C74C543B(2);
			unk_0x6F06CF0E9AB02847();
			unk_0x91DFC8F68F6D9B05(-1, "Menu_Navigate", &Global_19943, 1);
		}
	}
	else if (!unk_0x4C1B8C5717647539(2, 175))
	{
		iLocal_63 = 0;
	}
	if (!iLocal_59)
	{
		if (unk_0x4C1B8C5717647539(2, 176) && timerb() > 100)
		{
			if (iLocal_56 == -1)
			{
				unk_0xEA5DEA46C3EE64D3(Global_19935, "GET_CURRENT_SELECTION");
				uLocal_49 = unk_0xD452B47F164A4D79();
				while (!unk_0x17E14239FB53CCE3(uLocal_49))
				{
					wait(0);
				}
				iLocal_50 = unk_0xC2F770299DFFA794(uLocal_49);
				iLocal_56 = iLocal_50;
				if (func_39(iLocal_51) == 0)
				{
					iLocal_56 = -1;
				}
				if (!iLocal_56 == -1)
				{
					if (iLocal_67 == 1)
					{
						fLocal_66 = to_float(iLocal_56);
						iLocal_67 = 0;
					}
					Global_19954.f_1 = 8;
					iLocal_54 = 1;
					settimerb(0);
					func_37();
				}
			}
			else if (iLocal_57 == -1)
			{
				if (func_34(iLocal_51, iLocal_56) && !iLocal_55)
				{
					iLocal_57 = 0;
					iLocal_54 = 1;
					settimerb(0);
					func_37();
				}
			}
			else
			{
				iLocal_57 = 0;
				func_22(iLocal_51, iLocal_56, iLocal_57);
				iLocal_55 = 1;
				iLocal_57 = -1;
				iLocal_54 = 1;
				func_37();
				settimerb(0);
			}
			iLocal_59 = 1;
		}
	}
	else
	{
		iLocal_59 = 0;
	}
	if (timerb() > 100)
	{
		if (unk_0x4C1B8C5717647539(2, 177))
		{
			bVar0 = false;
			if (iLocal_58 == 0)
			{
				if (!iLocal_56 == -1)
				{
					if (iLocal_57 == -1)
					{
						iLocal_56 = round(fLocal_66);
						iLocal_64 = 0;
						settimerb(0);
						bVar0 = true;
						func_21();
					}
					else
					{
						settimerb(0);
						iLocal_57 = -1;
						func_21();
					}
					iLocal_54 = 1;
				}
				else
				{
					if (func_48("AM_H_FLINK") == 0)
					{
						func_44(37);
					}
					if (func_48("AM_H_SCROLL") == 0)
					{
						func_44(38);
					}
					if (Global_22319 == 0 && !Global_22318)
					{
						func_21();
						Global_22318 = 1;
						Global_43783 = 0;
					}
				}
				iLocal_58 = 1;
			}
			if (bVar0)
			{
				iLocal_56 = -1;
			}
		}
		else
		{
			iLocal_58 = 0;
		}
	}
	if (unk_0x4C1B8C5717647539(2, 179))
	{
		if (iLocal_64)
		{
			if (func_48("AM_H_FLINK") == 0)
			{
				func_44(37);
			}
			if (func_48("AM_H_SCROLL") == 0)
			{
				func_44(38);
			}
			StringCopy(&Global_75004, sLocal_65, 64);
			func_18(7, 0, 0);
			iLocal_64 = 0;
			func_37();
		}
	}
}

int func_18(int iParam0, bool bParam1, int iParam2)
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
	if (Global_77852 && func_20())
	{
		return 0;
	}
	if (!Global_77852 && func_19())
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

var func_19()
{
	return Global_75022;
}

var func_20()
{
	return Global_1932662;
}

void func_21()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Back", &Global_19943, 1);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 < -1 && iVar0 > 3)
	{
		return;
	}
	iVar1 = ((Global_52731[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_52731[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_52731[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0 || iVar3 < 0) || !iVar4 < 9) || !iVar3 < 122)
	{
		return;
	}
	iVar5 = Global_47118[iVar3 /*46*/].f_32[iVar4];
	if (Global_43793[iVar5 /*12*/].f_4 == 0)
	{
		return;
	}
	Global_52731[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_52731[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_23(iVar3, iParam2);
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_47118[iParam0 /*46*/] && !Global_47118[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_47118[iParam0 /*46*/].f_42 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_47118[iParam0 /*46*/].f_32[iVar0];
	if (!iParam1 < Global_43793[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_43793[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = false;
	if (Global_47118[iParam0 /*46*/].f_31 < (Global_47118[iParam0 /*46*/].f_30 - 1))
	{
		iVar4 = Global_47118[iParam0 /*46*/].f_8[Global_47118[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4)
		{
			bVar3 = true;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > -1)
		{
			func_33(iParam0, iVar2);
			iVar5 = Global_47118[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_43793[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_27(Global_47118[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_43793[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1)
	{
		func_24(Global_43793[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_43793[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_47118[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1)
	{
		Global_47118[iParam0 /*46*/].f_45 = Global_43793[iVar2 /*12*/].f_10;
		Global_47118[iParam0 /*46*/].f_43 = Global_43793[iVar2 /*12*/].f_11;
	}
	else
	{
		Global_47118[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_47118[iParam0 /*46*/].f_43 < 30000)
	{
		Global_47118[iParam0 /*46*/].f_43 = 30000;
	}
}

void func_24(int iParam0, bool bParam1)
{
	Global_43784 = 1;
	if (!Global_47118[iParam0 /*46*/] && !Global_47118[iParam0 /*46*/].f_1)
	{
		Global_47118[iParam0 /*46*/] = 1;
		func_26(iParam0, bParam1);
	}
	else
	{
		func_25(iParam0);
		func_24(iParam0, bParam1);
	}
}

void func_25(int iParam0)
{
	Global_47118[iParam0 /*46*/] = 0;
	Global_47118[iParam0 /*46*/].f_31 = 0;
	Global_47118[iParam0 /*46*/].f_42 = 0;
	Global_47118[iParam0 /*46*/].f_45 = 0;
	Global_47118[iParam0 /*46*/].f_43 = 0;
	Global_47118[iParam0 /*46*/].f_1 = 0;
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_47118[iParam0 /*46*/] && !Global_47118[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_47118[iParam0 /*46*/].f_31 == Global_47118[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_47118[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_43793[Global_47118[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_47118[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_47118[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_47118[iParam0 /*46*/].f_8[Global_47118[iParam0 /*46*/].f_31];
	Global_47118[iParam0 /*46*/].f_31++;
	func_33(iParam0, iVar1);
	Global_47118[iParam0 /*46*/].f_45 = Global_43793[iVar1 /*12*/].f_10;
	Global_47118[iParam0 /*46*/].f_43 = Global_43793[iVar1 /*12*/].f_11;
	iVar2 = Global_47118[iParam0 /*46*/].f_2;
	func_27(Global_43793[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_47118[iParam0 /*46*/].f_3[iVar3] != Global_43793[iVar1 /*12*/].f_2 && Global_47118[iParam0 /*46*/].f_3[iVar3] != Global_43793[iVar1 /*12*/].f_3)
		{
			func_27(Global_47118[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_47118[iParam0 /*46*/].f_31 == Global_47118[iParam0 /*46*/].f_30)
	{
		if (Global_43793[Global_47118[iParam0 /*46*/].f_32[(Global_47118[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_47118[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

void func_27(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_47118[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_47118[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_32(Global_43793[iVar5 /*12*/].f_1) };
		if (Global_43793[iVar5 /*12*/].f_2 == iParam0 && !Global_43793[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_43793[iVar5 /*12*/].f_2;
		iVar0 = Global_52731[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_52731[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_43785 = (Global_43785 - 1);
						if (Global_43785 < 0)
						{
							Global_43785 = 0;
						}
						break;
					
					case 1:
						Global_43786 = (Global_43786 - 1);
						if (Global_43786 < 0)
						{
							Global_43786 = 0;
						}
						break;
					
					case 2:
						Global_43787 = (Global_43787 - 1);
						if (Global_43787 < 0)
						{
							Global_43787 = 0;
						}
						break;
					}
				}
		}
		Global_52731[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_52731[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_52731[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_52731[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_52731[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_52731[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_52731[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_52731[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_43785 = (Global_43785 - 1);
						if (Global_43785 < 0)
						{
							Global_43785 = 0;
						}
						break;
					
					case 1:
						Global_43786 = (Global_43786 - 1);
						if (Global_43786 < 0)
						{
							Global_43786 = 0;
						}
						break;
					
					case 2:
						Global_43787 = (Global_43787 - 1);
						if (Global_43787 < 0)
						{
							Global_43787 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_53093[iVar9 /*203*/].f_1 == iParam1 && Global_53093[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_52731[iParam0 /*120*/].f_18[iVar0] = Global_53093[iVar8 /*203*/].f_1;
		Global_52731[iParam0 /*120*/].f_1[iVar0] = (Global_53093[iVar8 /*203*/].f_9 - 1);
		Global_52731[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_52731[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_52731[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_52731[iParam0 /*120*/]++;
		iVar10 = Global_52731[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_53093[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_43793[iVar11 /*12*/].f_2;
		if (Global_53093[iVar8 /*203*/].f_10[(Global_53093[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53093[iVar8 /*203*/].f_10[(Global_53093[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_32(Global_43793[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_52731[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_28(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_28(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_28(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_28(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_28(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0xF34D8FCAE3FD4EE4())
	{
		return;
	}
	iVar0 = func_78();
	bVar1 = false;
	StringCopy(&cVar2, func_31(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x150D8F58B26E9F70("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x150D8F58B26E9F70("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x150D8F58B26E9F70("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x150D8F58B26E9F70(sParam3);
				if (!unk_0xACC32B78196FBC2A(sParam4))
				{
					unk_0x26C23BE14F66F202(sParam4);
				}
				if (!unk_0xACC32B78196FBC2A(sParam5))
				{
					unk_0x26C23BE14F66F202(sParam5);
				}
				if (!unk_0xACC32B78196FBC2A(sParam6))
				{
					unk_0x26C23BE14F66F202(sParam6);
				}
				if (!unk_0xACC32B78196FBC2A(sParam7))
				{
					unk_0x26C23BE14F66F202(sParam7);
				}
				if (!unk_0xACC32B78196FBC2A(sParam8))
				{
					unk_0x26C23BE14F66F202(sParam8);
				}
				if (!unk_0xACC32B78196FBC2A(sParam9))
				{
					unk_0x26C23BE14F66F202(sParam9);
				}
				if (!unk_0xACC32B78196FBC2A(sParam10))
				{
					unk_0x26C23BE14F66F202(sParam10);
				}
				if (!unk_0xACC32B78196FBC2A(sParam11))
				{
					unk_0x26C23BE14F66F202(sParam11);
				}
				if (!unk_0xACC32B78196FBC2A(sParam12))
				{
					unk_0x26C23BE14F66F202(sParam12);
				}
				if (!unk_0xACC32B78196FBC2A(sParam13))
				{
					unk_0x26C23BE14F66F202(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_29(unk_0x3B81B9627E7885CF(&cVar2, &cVar2, 0, 2, unk_0xAEF70623D03F7B02(func_30(iParam1)), 0));
		}
		else
		{
			func_29(unk_0x3B81B9627E7885CF("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xAEF70623D03F7B02(func_30(iParam1)), 0));
		}
		switch (Global_19954)
		{
			case 0:
				StringCopy(&Global_19943, "Phone_SoundSet_Michael", 24);
				Global_43785++;
				if (Global_43785 > 16)
				{
					Global_43785 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_19943, "Phone_SoundSet_Trevor", 24);
				Global_43787++;
				if (Global_43787 > 16)
				{
					Global_43787 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_19943, "Phone_SoundSet_Franklin", 24);
				Global_43786++;
				if (Global_43786 > 16)
				{
					Global_43786 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_19943, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x91DFC8F68F6D9B05(-1, "Notification", &Global_19943, 1);
	}
}

void func_29(var uParam0)
{
	Global_43788[Global_43792] = uParam0;
	Global_22343 = 1;
	Global_22342 = uParam0;
	Global_43792++;
	if (Global_43792 == 3)
	{
		Global_43792 = 0;
	}
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_31(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xAEF70623D03F7B02(&(Global_1918[0 /*29*/].f_7));
		
		case 1:
			return unk_0xAEF70623D03F7B02(&(Global_1918[1 /*29*/].f_7));
		
		case 2:
			return unk_0xAEF70623D03F7B02(&(Global_1918[2 /*29*/].f_7));
		
		case 7:
			return unk_0xAEF70623D03F7B02(&(Global_1918[12 /*29*/].f_7));
		
		case 4:
			return unk_0xAEF70623D03F7B02(&(Global_1918[60 /*29*/].f_7));
		
		case 6:
			return unk_0xAEF70623D03F7B02(&(Global_1918[62 /*29*/].f_7));
		
		case 3:
			return unk_0xAEF70623D03F7B02(&(Global_1918[14 /*29*/].f_7));
		
		case 16:
			return unk_0xAEF70623D03F7B02(&(Global_1918[97 /*29*/].f_7));
		
		case 19:
			return unk_0xAEF70623D03F7B02(&(Global_1918[99 /*29*/].f_7));
		
		case 15:
			return unk_0xAEF70623D03F7B02(&(Global_1918[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xAEF70623D03F7B02(&(Global_1918[15 /*29*/].f_7));
		
		case 26:
			return unk_0xAEF70623D03F7B02(&(Global_1918[30 /*29*/].f_7));
		
		case 27:
			return unk_0xAEF70623D03F7B02(&(Global_1918[17 /*29*/].f_7));
		
		case 29:
			return unk_0xAEF70623D03F7B02(&(Global_1918[20 /*29*/].f_7));
		
		case 30:
			return unk_0xAEF70623D03F7B02(&(Global_1918[43 /*29*/].f_7));
		
		case 31:
			return unk_0xAEF70623D03F7B02(&(Global_1918[44 /*29*/].f_7));
		
		case 32:
			return unk_0xAEF70623D03F7B02(&(Global_1918[19 /*29*/].f_7));
		
		case 34:
			return unk_0xAEF70623D03F7B02(&(Global_1918[40 /*29*/].f_7));
		
		case 36:
			return unk_0xAEF70623D03F7B02("CELL_E_381");
		
		case 38:
			return unk_0xAEF70623D03F7B02(&(Global_1918[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xAEF70623D03F7B02(&(Global_1918[122 /*29*/].f_7));
		
		case 40:
			return unk_0xAEF70623D03F7B02(&(Global_1918[125 /*29*/].f_7));
		
		case 41:
			return unk_0xAEF70623D03F7B02(&(Global_1918[113 /*29*/].f_7));
		
		case 42:
			return unk_0xAEF70623D03F7B02(&(Global_1918[126 /*29*/].f_7));
		
		case 43:
			return unk_0xAEF70623D03F7B02(&(Global_1918[127 /*29*/].f_7));
		
		case 44:
			return unk_0xAEF70623D03F7B02(&(Global_1918[124 /*29*/].f_7));
		
		case 45:
			return unk_0xAEF70623D03F7B02(&(Global_1918[114 /*29*/].f_7));
		
		case 46:
			return unk_0xAEF70623D03F7B02(&(Global_1918[115 /*29*/].f_7));
		
		case 47:
			return unk_0xAEF70623D03F7B02(&(Global_1918[116 /*29*/].f_7));
		
		case 48:
			return unk_0xAEF70623D03F7B02(&(Global_1918[123 /*29*/].f_7));
		
		case 49:
			return unk_0xAEF70623D03F7B02(&(Global_1918[117 /*29*/].f_7));
		
		case 50:
			return unk_0xAEF70623D03F7B02(&(Global_1918[118 /*29*/].f_7));
		
		case 51:
			return unk_0xAEF70623D03F7B02(&(Global_1918[119 /*29*/].f_7));
		
		case 52:
			return unk_0xAEF70623D03F7B02(&(Global_1918[120 /*29*/].f_7));
		
		case 53:
			return unk_0xAEF70623D03F7B02(&(Global_1918[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_32(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_47118[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_47118[iParam0 /*46*/].f_32[Global_47118[iParam0 /*46*/].f_42] = iParam1;
	Global_47118[iParam0 /*46*/].f_42++;
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = ((Global_52731[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_52731[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_52731[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_52731[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_47118[iVar3 /*46*/].f_32[iVar4];
		if (Global_43793[iVar5 /*12*/].f_4 == 0)
		{
			return 0;
		}
		if (Global_52731[iVar0 /*120*/].f_35[iVar2] == 1)
		{
			return 0;
		}
		if (!func_35(iVar0, iVar2))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iParam0 < 3)
	{
		return 0;
	}
	iVar0 = Global_52731[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_52731[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_47118[iVar1 /*46*/] && !Global_47118[iVar1 /*46*/].f_1))
	{
		return 0;
	}
	if (!iVar0 == (Global_47118[iVar1 /*46*/].f_42 - 1))
	{
		return 0;
	}
	iVar2 = Global_47118[iVar1 /*46*/].f_32[(Global_47118[iVar1 /*46*/].f_42 - 1)];
	if (Global_43793[iVar2 /*12*/].f_4 > 0)
	{
		return 1;
	}
	return 0;
}

bool func_36()
{
	return Global_75021;
}

void func_37()
{
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		unk_0x91DFC8F68F6D9B05(-1, "Menu_Accept", &Global_19943, 1);
		func_38();
	}
}

void func_38()
{
	if (func_2())
	{
		unk_0xBCA3FA8D0984A7D3(5);
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	return Global_52731[iVar0 /*120*/];
}

void func_40(var uParam0, int iParam1, int iParam2)
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
	struct<16> Var9;
	struct<16> Var10;
	
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_52731[iVar0 /*120*/] - 1) - iParam2);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	if (!Global_52731[iVar0 /*120*/].f_86[iVar2])
	{
		iVar3 = Global_52731[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_52731[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_47118[iVar3 /*46*/].f_32[iVar4];
		if (Global_43793[iVar5 /*12*/].f_4 == 0)
		{
			return;
		}
		iVar6 = 0;
		iVar7 = Global_43793[iVar5 /*12*/].f_4;
		if (iVar7 > 1)
		{
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_43793[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { func_32(Global_43793[iVar8 /*12*/].f_1) };
			Var10 = { func_32(Global_43793[iVar8 /*12*/].f_1) };
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(9);
			unk_0x4F47E317C74C543B(0);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW");
			func_9(&Var10);
			func_9(func_42(Global_43793[iVar8 /*12*/].f_2));
			func_41(iVar8, Global_43793[iVar8 /*12*/].f_2);
			unk_0x6F06CF0E9AB02847();
			iVar6++;
		}
	}
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 55:
		case 57:
		case 58:
		case 59:
		case 62:
		case 63:
		case 40:
		case 41:
		case 42:
			unk_0x35395E05C7DB18D0("EmailAds_Elitas_Travel");
			unk_0xD7D6BA6E36AEC182(1);
			return;
		
		case 37:
		case 38:
		case 39:
		case 60:
		case 61:
		case 56:
			unk_0x35395E05C7DB18D0("EmailAds_Dock_Tease");
			unk_0xD7D6BA6E36AEC182(1);
			return;
		
		case 34:
		case 35:
		case 36:
			unk_0x35395E05C7DB18D0("EmailAds_Warstock");
			unk_0xD7D6BA6E36AEC182(1);
			return;
		
		case 31:
		case 32:
		case 33:
			unk_0x35395E05C7DB18D0("EmailAds_Legendary_Motorsport");
			unk_0xD7D6BA6E36AEC182(1);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 13:
			unk_0x35395E05C7DB18D0("EmailAds_Warstock");
			unk_0xD7D6BA6E36AEC182(1);
			return;
		
		case 15:
			unk_0x35395E05C7DB18D0("EmailAds_LS_Customs");
			unk_0xD7D6BA6E36AEC182(1);
			return;
		
		case 19:
			unk_0x35395E05C7DB18D0("EmailAds_LS_Tourist_Info");
			unk_0xD7D6BA6E36AEC182(1);
			return;
		
		default:
	}
}

char* func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_2";
		
		case 3:
			return "EMSTR_5";
		
		case 1:
			return "EMSTR_8";
		
		case 2:
			return "EMSTR_11";
		
		case 4:
			return "EMSTR_14";
		
		case 5:
			return "EMSTR_31";
		
		case 6:
			return "EMSTR_38";
		
		case 7:
			return "EMSTR_41";
		
		case 8:
			return "EMSTR_54";
		
		case 9:
			return "EMSTR_57";
		
		case 10:
			return "EMSTR_60";
		
		case 11:
			return "EMSTR_80";
		
		case 12:
			return "EMSTR_83";
		
		case 13:
			return "EMSTR_86";
		
		case 14:
			return "EMSTR_89";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_116";
		
		case 17:
			return "EMSTR_144";
		
		case 18:
			return "EMSTR_147";
		
		case 19:
			return "EMSTR_154";
		
		case 20:
			return "EMSTR_159";
		
		case 21:
			return "EMSTR_165";
		
		case 22:
			return "EMSTR_184";
		
		case 23:
			return "EMSTR_189";
		
		case 24:
			return "EMSTR_192";
		
		case 25:
			return "EMSTR_208";
		
		case 26:
			return "EMSTR_221";
		
		case 27:
			return "EMSTR_228";
		
		case 28:
			return "EMSTR_235";
		
		case 29:
			return "EMSTR_244";
		
		case 30:
			return "EMSTR_251";
		
		case 31:
			return "EMSTR_264";
		
		case 32:
			return "EMSTR_271";
		
		case 33:
			return "EMSTR_321";
		
		case 34:
			return "EMSTR_342";
		
		case 35:
			return "EMSTR_350";
		
		case 36:
			return "EMSTR_354";
		
		case 37:
			return "EMSTR_359";
		
		case 38:
			return "EMSTR_362";
		
		case 39:
			return "EMSTR_371";
		
		case 40:
			return "EMSTR_378";
		
		case 41:
			return "EMSTR_381";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_386";
		
		case 44:
			return "EMSTR_389";
		
		case 45:
			return "EMSTR_392";
		
		case 46:
			return "EMSTR_395";
		
		case 47:
			return "EMSTR_398";
		
		case 48:
			return "EMSTR_401";
		
		case 49:
			return "EMSTR_404";
		
		case 50:
			return "EMSTR_407";
		
		case 51:
			return "EMSTR_410";
		
		case 52:
			return "EMSTR_413";
		
		case 53:
			return "EMSTR_416";
		
		case 54:
			return "EMSTR_467";
		
		case 55:
			return "EMSTR_470";
		
		case 56:
			return "EMSTR_491";
		
		case 57:
			return "EMSTR_494";
		
		case 58:
			return "EMSTR_497";
		
		case 59:
			return "EMSTR_500";
		
		case 60:
			return "EMSTR_503";
		
		case 61:
			return "EMSTR_506";
		
		case 62:
			return "EMSTR_509";
		
		case 63:
			return "EMSTR_642";
		
		case 64:
			return "EMSTR_645";
		
		case 65:
			return "EMSTR_654";
		
		default:
	}
	return "NULL";
}

void func_43(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
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
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_112915.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112915.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112915.f_20410.f_145++;
		func_47();
	}
}

void func_47()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112915.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[0])
			{
				Global_112915.f_20410.f_146[0] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[1])
			{
				Global_112915.f_20410.f_146[1] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[2])
			{
				Global_112915.f_20410.f_146[2] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_48(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(sParam0, &Global_111558))
	{
		return 1;
	}
	if (func_49(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_49(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(uParam0, &(Global_112915.f_20410[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return "";
	}
	iVar4 = func_53(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_52731[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_47118[iVar2 /*46*/].f_32[iVar3];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53093[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_53093[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_52(iVar5);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 8:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 9:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 10:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 11:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 16:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 17:
			return "WWW_MAZE_D_BANK_COM";
		
		case 18:
			return "WWW_FLEECA_COM";
		
		case 19:
			return "WWW_MAZE_D_BANK_COM";
		
		case 20:
			return "WWW_MAZE_D_BANK_COM";
		
		case 21:
			return "WWW_MAZE_D_BANK_COM";
		
		case 22:
			return "WWW_MAZE_D_BANK_COM";
		
		case 23:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 24:
			return "WWW_FLEECA_COM";
		
		case 25:
			return "WWW_FLEECA_COM";
		
		case 26:
			return "WWW_FLEECA_COM";
		
		case 27:
			return "WWW_FLEECA_COM";
		
		case 28:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 29:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 30:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 43:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 47:
			return "WWW_AMMUNATION_NET";
		
		case 48:
			return "WWW_AMMUNATION_NET";
		
		case 49:
			return "WWW_AMMUNATION_NET";
		
		case 50:
			return "WWW_AMMUNATION_NET";
		
		case 51:
			return "WWW_AMMUNATION_NET";
		
		case 52:
			return "WWW_AMMUNATION_NET";
		
		case 53:
			return "WWW_AMMUNATION_NET";
		
		case 54:
			return "WWW_AMMUNATION_NET";
		
		case 55:
			return "WWW_ELITASTRAVEL_COM";
		
		case 56:
			return "WWW_DOCKTEASE_COM";
		
		case 57:
			return "WWW_ELITASTRAVEL_COM";
		
		case 58:
			return "WWW_ELITASTRAVEL_COM";
		
		case 59:
			return "WWW_ELITASTRAVEL_COM";
		
		case 60:
			return "WWW_DOCKTEASE_COM";
		
		case 61:
			return "WWW_DOCKTEASE_COM";
		
		case 62:
			return "WWW_ELITASTRAVEL_COM";
		
		case 63:
			return "WWW_ELITASTRAVEL_COM";
		
		case 68:
			return "WWW_AMMUNATION_NET";
		
		case 84:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 155:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 156:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 157:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 181:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 194:
			return "WWW_HUSHSMUSH_COM";
		
		case 195:
			return "WWW_HUSHSMUSH_COM";
		
		case 196:
			return "WWW_HUSHSMUSH_COM";
		
		case 197:
			return "WWW_HUSHSMUSH_COM";
		
		case 198:
			return "WWW_HUSHSMUSH_COM";
		
		case 244:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 245:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 246:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 270:
			return "WWW_AMMUNATION_NET";
		
		case 271:
			return "WWW_AMMUNATION_NET";
		
		case 272:
			return "WWW_AMMUNATION_NET";
		
		case 273:
			return "WWW_AMMUNATION_NET";
		
		case 274:
			return "WWW_AMMUNATION_NET";
		
		case 275:
			return "WWW_AMMUNATION_NET";
		
		case 276:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ((Global_52731[iParam0 /*120*/] - 1) - iParam1);
	while (iVar0 >= 16)
	{
		iVar0 = (iVar0 - 16);
	}
	iVar1 = iVar0;
	*uParam2 = Global_52731[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_52731[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_52731[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar4 = func_53(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_52731[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_47118[iVar1 /*46*/].f_32[iVar2];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53093[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_53093[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_55(iVar5);
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
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
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 43:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 68:
		case 84:
		case 155:
		case 156:
		case 157:
		case 181:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 244:
		case 245:
		case 246:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<16> Var17;
	struct<16> Var18;
	bool bVar19;
	int iVar20;
	
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x4F47E317C74C543B(9);
	unk_0x6F06CF0E9AB02847();
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar4 = func_53(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_52731[iVar0 /*120*/].f_86[iVar4];
	if (!Global_52731[iVar0 /*120*/].f_69[iVar4])
	{
		func_60(-1);
	}
	Global_52731[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5)
	{
		iVar6 = Global_47118[iVar2 /*46*/].f_32[iVar3];
		Var7 = { func_32(Global_43793[iVar6 /*12*/]) };
		Var8 = { func_32(Global_43793[iVar6 /*12*/].f_1) };
		unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
		unk_0x4F47E317C74C543B(9);
		unk_0x4F47E317C74C543B(0);
		func_9(func_59(Global_43793[iVar6 /*12*/].f_3));
		func_9(func_59(Global_43793[iVar6 /*12*/].f_2));
		func_9(&Var7);
		func_9(&Var8);
		func_9(func_42(Global_43793[iVar6 /*12*/].f_2));
		func_41(iVar6, Global_43793[iVar6 /*12*/].f_2);
		unk_0x6F06CF0E9AB02847();
		if (Global_43793[iVar6 /*12*/].f_4 == 0)
		{
			func_77(0);
		}
		else if (bVar1 || !func_35(iVar0, iVar4))
		{
			func_77(0);
		}
		else
		{
			func_77(1);
		}
		if (Global_47118[iVar2 /*46*/].f_42 > 1)
		{
			iVar9 = iVar3;
			iVar10 = (iVar3 - 1);
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < iVar9)
			{
				iVar6 = Global_47118[iVar2 /*46*/].f_32[iVar10];
				Var7 = { func_32(Global_43793[iVar6 /*12*/]) };
				Var8 = { func_32(Global_43793[iVar6 /*12*/].f_1) };
				iVar12 = func_58(iParam1, Global_43793[iVar6 /*12*/].f_3);
				unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(9);
				unk_0x4F47E317C74C543B(iVar11 + 1);
				func_9(func_59(iVar12));
				func_9(func_59(Global_43793[iVar6 /*12*/].f_2));
				func_9(&Var7);
				func_9(&Var8);
				func_9(func_42(Global_43793[iVar6 /*12*/].f_2));
				func_41(iVar6, Global_43793[iVar6 /*12*/].f_2);
				unk_0x6F06CF0E9AB02847();
				iVar10 = (iVar10 - 1);
				iVar11++;
			}
		}
	}
	else
	{
		iVar13 = -1;
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 7)
		{
			if (Global_53093[iVar14 /*203*/].f_1 == iVar2)
			{
				iVar13 = iVar14;
			}
			iVar14++;
		}
		if (iVar13 == -1)
		{
			return;
		}
		else
		{
			iVar15 = Global_53093[iVar13 /*203*/].f_10[iVar3 /*48*/];
			iVar16 = Global_53093[iVar13 /*203*/].f_10[iVar3 /*48*/];
			Var17 = { func_32(Global_43793[iVar15 /*12*/]) };
			Var18 = { func_32(Global_43793[iVar15 /*12*/].f_1) };
			if (Global_53093[iVar13 /*203*/].f_10[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var18, {Global_53093[iVar13 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_43793[iVar15 /*12*/].f_4 == 0)
			{
				func_77(0);
			}
			else if (bVar1)
			{
				func_77(0);
			}
			else
			{
				func_77(1);
			}
			bVar19 = false;
			bVar19 = func_57(uParam0, Global_53093[iVar13 /*203*/].f_1, iVar3, iVar16);
			if (!bVar19)
			{
				unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(9);
				unk_0x4F47E317C74C543B(0);
				func_9(func_59(Global_43793[iVar15 /*12*/].f_3));
				func_9(func_59(Global_43793[iVar15 /*12*/].f_2));
				func_9(&Var17);
				if (Global_53093[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6 > 0)
				{
					unk_0x4ADC8B166E139423(&Var18);
					iVar20 = 0;
					iVar20 = 0;
					while (iVar20 < Global_53093[iVar13 /*203*/].f_10[iVar3 /*48*/].f_6)
					{
						unk_0x26C23BE14F66F202(&(Global_53093[iVar13 /*203*/].f_10[iVar3 /*48*/].f_7[iVar20 /*4*/]));
						iVar20++;
					}
					unk_0xD1D4F8D5470AFA4C();
				}
				else
				{
					func_9(&Var18);
				}
				func_9(func_42(Global_43793[iVar15 /*12*/].f_2));
				func_41(iVar15, Global_43793[iVar15 /*12*/].f_2);
				unk_0x6F06CF0E9AB02847();
			}
		}
	}
}

int func_57(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	
	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x6F06CF0E9AB02847();
	Var3 = { func_32(Global_43793[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 72:
			StringCopy(&Var4, "PROPR_INCEMAIL1", 64);
			break;
		
		case 73:
			StringCopy(&Var4, "PROPR_INCEMAIL3", 64);
			break;
		
		case 74:
			StringCopy(&Var4, "PROPR_INCEMAIL2", 64);
			break;
	}
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(9);
	unk_0x4F47E317C74C543B(iVar2);
	func_9(func_59(Global_43793[iParam3 /*12*/].f_3));
	func_9(func_59(Global_43793[iParam3 /*12*/].f_2));
	func_9(&Var3);
	func_9(&Var4);
	func_9(func_42(Global_43793[iParam3 /*12*/].f_2));
	func_9("");
	unk_0x4F47E317C74C543B(0);
	unk_0xD7D6BA6E36AEC182(1);
	unk_0x6F06CF0E9AB02847();
	iVar2++;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		iVar6 = iVar5;
		bVar7 = false;
		switch (iParam3)
		{
			case 72:
				if (Global_112915.f_24904[iVar6 /*4*/] == 0)
				{
					bVar7 = true;
				}
				break;
			
			case 73:
				if (Global_112915.f_24904[iVar6 /*4*/] == 1)
				{
					bVar7 = true;
				}
				break;
			
			case 74:
				if (Global_112915.f_24904[iVar6 /*4*/] == 2)
				{
					bVar7 = true;
				}
				break;
		}
		if (bVar7)
		{
			switch (iVar6)
			{
				case 0:
					sVar8 = "ACCNA_TOWING";
					break;
				
				case 1:
					sVar8 = "ACCNA_TAXI_LOT";
					break;
				
				case 2:
					sVar8 = "ACCNA_ARMS";
					break;
				
				case 3:
					sVar8 = "ACCNA_SONAR";
					break;
				
				case 4:
					sVar8 = "ACCNA_CARMOD";
					break;
				
				case 5:
					sVar8 = "ACCNA_VCINEMA";
					break;
				
				case 6:
					sVar8 = "ACCNA_DCINEMA";
					break;
				
				case 7:
					sVar8 = "ACCNA_MCINEMA";
					break;
				
				case 8:
					sVar8 = "ACCNA_GOLF";
					break;
				
				case 9:
					sVar8 = "ACCNA_CSCRAP";
					break;
				
				case 10:
					sVar8 = "ACCNA_SMOKE";
					break;
				
				case 11:
					sVar8 = "ACCNA_TEQUILA";
					break;
				
				case 12:
					sVar8 = "ACCNA_PITCHERS";
					break;
				
				case 13:
					sVar8 = "ACCNA_HEN";
					break;
				
				case 14:
					sVar8 = "ACCNA_HOOKIES";
					break;
				
				case 15:
					sVar8 = "ACCNA_STRP";
					break;
			}
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(9);
			unk_0x4F47E317C74C543B(iVar2);
			unk_0x4ADC8B166E139423("PROPR_INCEMAIL4");
			unk_0x26C23BE14F66F202(sVar8);
			unk_0x2AE954BA77A66307(Global_112915.f_24904[iVar6 /*4*/].f_3);
			unk_0xD1D4F8D5470AFA4C();
			unk_0x6F06CF0E9AB02847();
			iVar2++;
			iVar0 = 1;
		}
		iVar5++;
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
		else if (iParam0 == 2)
		{
			return 2;
		}
	}
	return iParam1;
}

char* func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_1";
		
		case 3:
			return "EMSTR_4";
		
		case 1:
			return "EMSTR_7";
		
		case 2:
			return "EMSTR_10";
		
		case 4:
			return "EMSTR_13";
		
		case 5:
			return "EMSTR_30";
		
		case 6:
			return "EMSTR_37";
		
		case 7:
			return "EMSTR_40";
		
		case 8:
			return "EMSTR_53";
		
		case 9:
			return "EMSTR_56";
		
		case 10:
			return "EMSTR_59";
		
		case 11:
			return "EMSTR_79";
		
		case 12:
			return "EMSTR_82";
		
		case 13:
			return "EMSTR_85";
		
		case 14:
			return "EMSTR_88";
		
		case 15:
			return "EMSTR_107";
		
		case 16:
			return "EMSTR_115";
		
		case 17:
			return "EMSTR_143";
		
		case 18:
			return "EMSTR_146";
		
		case 19:
			return "EMSTR_153";
		
		case 20:
			return "EMSTR_158";
		
		case 21:
			return "EMSTR_164";
		
		case 22:
			return "EMSTR_183";
		
		case 23:
			return "EMSTR_188";
		
		case 24:
			return "EMSTR_191";
		
		case 25:
			return "EMSTR_207";
		
		case 26:
			return "EMSTR_220";
		
		case 27:
			return "EMSTR_227";
		
		case 28:
			return "EMSTR_234";
		
		case 29:
			return "EMSTR_243";
		
		case 30:
			return "EMSTR_250";
		
		case 31:
			return "EMSTR_263";
		
		case 32:
			return "EMSTR_270";
		
		case 33:
			return "EMSTR_320";
		
		case 34:
			return "EMSTR_341";
		
		case 35:
			return "EMSTR_349";
		
		case 36:
			return "EMSTR_353";
		
		case 37:
			return "EMSTR_358";
		
		case 38:
			return "EMSTR_361";
		
		case 39:
			return "EMSTR_370";
		
		case 40:
			return "EMSTR_377";
		
		case 41:
			return "EMSTR_380";
		
		case 42:
			return "EMSTR_383";
		
		case 43:
			return "EMSTR_385";
		
		case 44:
			return "EMSTR_388";
		
		case 45:
			return "EMSTR_391";
		
		case 46:
			return "EMSTR_394";
		
		case 47:
			return "EMSTR_397";
		
		case 48:
			return "EMSTR_400";
		
		case 49:
			return "EMSTR_403";
		
		case 50:
			return "EMSTR_406";
		
		case 51:
			return "EMSTR_409";
		
		case 52:
			return "EMSTR_412";
		
		case 53:
			return "EMSTR_415";
		
		case 54:
			return "EMSTR_466";
		
		case 55:
			return "EMSTR_469";
		
		case 56:
			return "EMSTR_490";
		
		case 57:
			return "EMSTR_493";
		
		case 58:
			return "EMSTR_496";
		
		case 59:
			return "EMSTR_499";
		
		case 60:
			return "EMSTR_502";
		
		case 61:
			return "EMSTR_505";
		
		case 62:
			return "EMSTR_508";
		
		case 63:
			return "EMSTR_641";
		
		case 64:
			return "EMSTR_644";
		
		case 65:
			return "EMSTR_653";
		
		default:
	}
	return "NULL";
}

void func_60(int iParam0)
{
	switch (func_78())
	{
		case 0:
			Global_43785 = (Global_43785 + iParam0);
			if (Global_43785 < 0)
			{
				Global_43785 = 0;
			}
			break;
		
		case 2:
			Global_43787 = (Global_43787 + iParam0);
			if (Global_43787 < 0)
			{
				Global_43787 = 0;
			}
			break;
		
		case 1:
			Global_43786 = (Global_43786 + iParam0);
			if (Global_43786 < 0)
			{
				Global_43786 = 0;
			}
			break;
		
		default:
			break;
	}
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = ((Global_52731[iVar0 /*120*/] - 1) - iParam1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = iVar1;
	iVar3 = Global_52731[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_52731[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_52731[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_47118[iVar3 /*46*/].f_32[iVar4];
	}
	else
	{
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7)
		{
			if (Global_53093[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1)
		{
			return;
		}
		iVar5 = Global_53093[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_62(iVar5))
	{
		return;
	}
	if (Global_53092 != -1)
	{
		unk_0x861D35D42CFD2991(func_16(Global_53092));
	}
	Global_53092 = iVar5;
	unk_0xA9911C122B3210B5(func_16(iVar5), 0);
	while (!unk_0x9D4AFED2949F7082(func_16(iVar5)))
	{
		wait(100);
	}
}

int func_62(int iParam0)
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 64:
		case 65:
		case 66:
		case 75:
		case 76:
		case 77:
		case 78:
		case 80:
		case 81:
		case 82:
		case 83:
		case 205:
		case 209:
		case 212:
		case 238:
			return 1;
		
		default:
	}
	return 0;
}

void func_63()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_43788[iVar0] != -1)
		{
			unk_0x35A0954FC4DC4CAD(Global_43788[iVar0]);
			Global_43788[iVar0] = -1;
		}
		iVar0++;
	}
	Global_43792 = 0;
}

void func_64(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	unk_0x6F06CF0E9AB02847();
}

void func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xACC32B78196FBC2A(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xACC32B78196FBC2A(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xACC32B78196FBC2A(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xACC32B78196FBC2A(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x6F06CF0E9AB02847();
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<16> Var15;
	
	func_67(iParam1);
	iVar0 = -1;
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x4F47E317C74C543B(8);
	unk_0x6F06CF0E9AB02847();
	if (Global_52731[iVar0 /*120*/] < 1)
	{
		return 0;
	}
	iVar1 = (Global_52731[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_52731[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (!Global_52731[iVar0 /*120*/].f_86[iVar1])
		{
			iVar4 = Global_52731[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_52731[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_47118[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
			if (Global_52731[iVar0 /*120*/].f_69[iVar1])
			{
				iVar7 = 1;
			}
			if (iVar7 == 1)
			{
				if (Global_43793[iVar6 /*12*/].f_4 > 0)
				{
					if (Global_52731[iVar0 /*120*/].f_35[iVar1] == 0)
					{
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {func_32(Global_43793[iVar6 /*12*/])}, 4);
			unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
			unk_0x4F47E317C74C543B(8);
			unk_0x4F47E317C74C543B(iVar3);
			unk_0x4F47E317C74C543B(iVar7);
			unk_0x4F47E317C74C543B(0);
			func_9(func_59(Global_43793[iVar6 /*12*/].f_2));
			func_9(&sVar8);
			unk_0x6F06CF0E9AB02847();
		}
		else
		{
			iVar9 = Global_52731[iVar0 /*120*/].f_18[iVar1];
			iVar10 = -1;
			iVar11 = 0;
			iVar11 = 0;
			while (iVar11 < 7)
			{
				if (Global_53093[iVar11 /*203*/].f_1 == iVar9)
				{
					iVar10 = iVar11;
				}
				iVar11++;
			}
			if (iVar10 == -1)
			{
				return 1;
			}
			else
			{
				iVar12 = Global_52731[iVar0 /*120*/].f_1[iVar1];
				iVar13 = 0;
				if (Global_52731[iVar0 /*120*/].f_69[iVar1])
				{
					iVar13 = 1;
				}
				iVar14 = Global_53093[iVar10 /*203*/].f_10[iVar12 /*48*/];
				if (iVar13 == 1)
				{
					if (Global_43793[iVar14 /*12*/].f_4 > 0)
					{
						if (Global_52731[iVar0 /*120*/].f_35[iVar1] == 0)
						{
							iVar13 = 2;
						}
					}
				}
				Var15 = { func_32(Global_43793[iVar14 /*12*/]) };
				unk_0xEA5DEA46C3EE64D3(uParam0, "SET_DATA_SLOT");
				unk_0x4F47E317C74C543B(8);
				unk_0x4F47E317C74C543B(iVar3);
				unk_0x4F47E317C74C543B(iVar13);
				unk_0x4F47E317C74C543B(0);
				func_9(func_59(Global_43793[iVar14 /*12*/].f_2));
				func_9(&Var15);
				unk_0x6F06CF0E9AB02847();
			}
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_52731[iVar0 /*120*/] < 1)
	{
		return;
	}
	iVar1 = (Global_52731[iVar0 /*120*/] - 1);
	while (iVar1 >= 16)
	{
		iVar1 = (iVar1 - 16);
	}
	iVar2 = Global_52731[iVar0 /*120*/];
	if (iVar2 > 16)
	{
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 1));
	if (iVar3 < 0)
	{
		iVar3 = (16 + iVar3);
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		bVar6 = true;
		if (Global_52731[iVar0 /*120*/].f_103[iVar3])
		{
			bVar6 = false;
		}
		if (Global_52731[iVar0 /*120*/].f_86[iVar3])
		{
			iVar7 = Global_52731[iVar0 /*120*/].f_18[iVar3];
			iVar8 = -1;
			iVar9 = 0;
			iVar9 = 0;
			while (iVar9 < 7)
			{
				if (Global_53093[iVar9 /*203*/].f_1 == iVar7)
				{
					iVar8 = iVar9;
				}
				iVar9++;
			}
			if (iVar8 == -1)
			{
				bVar6 = false;
			}
		}
		if (bVar6)
		{
			iVar10 = Var4;
			Var4.f_1[iVar10] = Global_52731[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar10] = Global_52731[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar10] = Global_52731[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar10] = Global_52731[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar10] = Global_52731[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar10] = Global_52731[iVar0 /*120*/].f_86[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 16)
		{
			iVar3 = 0;
		}
		iVar5++;
	}
	Global_52731[iVar0 /*120*/] = Var4;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Global_52731[iVar0 /*120*/].f_103[iVar5] = 0;
		Global_52731[iVar0 /*120*/].f_1[iVar5] = Var4.f_1[iVar5];
		Global_52731[iVar0 /*120*/].f_18[iVar5] = Var4.f_18[iVar5];
		Global_52731[iVar0 /*120*/].f_35[iVar5] = Var4.f_35[iVar5];
		Global_52731[iVar0 /*120*/].f_52[iVar5] = Var4.f_52[iVar5];
		Global_52731[iVar0 /*120*/].f_69[iVar5] = Var4.f_69[iVar5];
		Global_52731[iVar0 /*120*/].f_86[iVar5] = Var4.f_86[iVar5];
		iVar5++;
	}
}

void func_68()
{
	float fVar0;
	
	fVar0 = func_69(Local_48, Local_47, -90f, 0f, 90f, Global_19914, 350f, 0);
	if (Global_8628 == 0)
	{
		unk_0x3F9B1FDEB8A770EF((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_22318 = 0;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}
}

float func_69(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4535606 == 0)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_7824, 14) && Global_19954.f_1 < 4)
		{
			unk_0xC81489026785778A(&Var0);
			if (Global_19907[Global_19899 /*3*/].f_1 == Var0.f_1)
			{
				Global_4535606 = 1;
			}
		}
	}
	if (func_72() && Global_4535606 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x320D1840B6DAA1CC();
	}
	fVar1 = func_71((to_float((unk_0x320D1840B6DAA1CC() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_19882 = { func_70(Param0, Param1, fVar2) };
		Global_19885 = { func_70(Param2, Param3, fVar2) };
	}
	else
	{
		Global_19882 = { Param1 };
		Global_19885 = { Param3 };
	}
	unk_0x31636F0193379566(Global_19882);
	unk_0x6447DA2F47A963E9(Global_19885, 0);
	return fVar1;
}

Vector3 func_70(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return Param0 + Param1 - Param0 * Vector(fParam2, fParam2, fParam2);
}

float func_71(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
	{
		if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
		{
			if (Global_19897 == 0)
			{
				if (Global_7139 != 128)
				{
					if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
					{
						if (Global_21285 != 2)
						{
						}
					}
				}
			}
		}
		if (func_15(14))
		{
			return 0;
		}
		if (unk_0x1CFDD57741085128(unk_0xE2D3D51028F0428A(), 0))
		{
			return 0;
		}
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			if (!unk_0x94398B6170DCA18C())
			{
				if (unk_0xD8F9DF94CD871327(unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0xDA664493ACCDBE81(unk_0xE2D3D51028F0428A()) || unk_0x35D4F23CB8A63EDB(unk_0xE2D3D51028F0428A())) || unk_0xD28B9359D0F02ACA(unk_0x9E2D6C50374FCFA9())) || (unk_0xED99779C40AEE6C4(unk_0xE2D3D51028F0428A()) && !(unk_0xE2D0C323A1AE5D85(Global_4718592.f_37, 17) && (unk_0x44859561F653DD4E() || Global_1923652))))
		{
			return 0;
		}
		if (Global_111963)
		{
			return 0;
		}
	}
	if (Global_77852)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x94398B6170DCA18C()))
	{
		iVar2 = 1;
		if (!unk_0x55B23FE400FCEA6B(unk_0xE2D3D51028F0428A(), 0))
		{
			if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				uVar3 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
				if ((((((((unk_0x6F0299ED3CEB4E5D(unk_0x15CAA6D7B11F1A7C(uVar3)) || unk_0x532C99FAF70C652B(unk_0x15CAA6D7B11F1A7C(uVar3))) || unk_0xCD8C08FA7D84C27E(unk_0x15CAA6D7B11F1A7C(uVar3))) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("seashark")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("seashark2")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("rhino")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("submersible")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("submersible2")) || unk_0x15CAA6D7B11F1A7C(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4535605 || iVar2 == 1)
	{
		if (unk_0xB4C854DD86E40FDA(joaat("apptrackify")) > 0 || Global_112915.f_14051.f_89)
		{
			if (unk_0xB4C854DD86E40FDA(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_73()
{
	float fVar0;
	
	fVar0 = func_69(Local_47, Local_48, Global_19914, -90f, 0f, 90f, 350f, 0);
	if (Global_8628 == 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			if (!func_74())
			{
				unk_0x3F9B1FDEB8A770EF((500f + (75f * fVar0)));
			}
		}
		else
		{
			unk_0x3F9B1FDEB8A770EF((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(1);
		Global_22319 = 0;
		iLocal_18 = 0;
	}
}

int func_74()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x47E529DA87615548();
	iVar1 = unk_0x4DE6A646AFB7CF5C(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		unk_0x2F046C9381D8E91B(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_SOFT_KEYS");
		unk_0x4F47E317C74C543B(1);
		unk_0xD7D6BA6E36AEC182(1);
		unk_0x4F47E317C74C543B(16);
		unk_0x6F06CF0E9AB02847();
	}
	else
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_SOFT_KEYS");
		unk_0x4F47E317C74C543B(1);
		unk_0xD7D6BA6E36AEC182(0);
		unk_0x4F47E317C74C543B(16);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_76(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		unk_0x2F046C9381D8E91B(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_SOFT_KEYS");
		unk_0x4F47E317C74C543B(3);
		unk_0xD7D6BA6E36AEC182(1);
		unk_0x4F47E317C74C543B(4);
		unk_0x6F06CF0E9AB02847();
	}
	else
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_SOFT_KEYS");
		unk_0x4F47E317C74C543B(3);
		unk_0xD7D6BA6E36AEC182(0);
		unk_0x4F47E317C74C543B(4);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_77(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		unk_0x2F046C9381D8E91B(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0x2F046C9381D8E91B(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_SOFT_KEYS");
		unk_0x4F47E317C74C543B(2);
		unk_0xD7D6BA6E36AEC182(1);
		unk_0x4F47E317C74C543B(2);
		unk_0x6F06CF0E9AB02847();
	}
	else
	{
		unk_0xEA5DEA46C3EE64D3(Global_19935, "SET_SOFT_KEYS");
		unk_0x4F47E317C74C543B(2);
		unk_0xD7D6BA6E36AEC182(0);
		unk_0x4F47E317C74C543B(2);
		unk_0x6F06CF0E9AB02847();
	}
}

int func_78()
{
	func_79();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_79()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_82(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_81(unk_0xE2D3D51028F0428A());
			if (func_80(iVar0) && (!func_15(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_80(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

