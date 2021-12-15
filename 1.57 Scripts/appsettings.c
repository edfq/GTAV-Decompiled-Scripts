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
	int iLocal_18[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	unk_0x5B2BDC877F7E8802();
	func_46(Global_19779, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_45();
	if (Global_19743 == 0)
	{
		fLocal_43 = 0.75f;
		fLocal_44 = 0.8f;
	}
	else
	{
		fLocal_43 = 0.65f;
		fLocal_44 = 0.77f;
	}
	Global_8473[Global_19798 /*2811*/][2 /*281*/].f_259 = Global_112293.f_14049[Global_19798 /*20*/].f_6;
	Global_8473[Global_19798 /*2811*/][4 /*281*/].f_259 = Global_112293.f_14049[Global_19798 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (Global_77248)
		{
			Global_8473[Global_19798 /*2811*/][1 /*281*/].f_259 = func_44(1199, -1, 0);
			Global_8473[Global_19798 /*2811*/][2 /*281*/].f_259 = func_44(2030, -1, 0);
			Global_8473[Global_19798 /*2811*/][4 /*281*/].f_259 = func_44(2029, -1, 0);
		}
		else if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_14049[Global_19798 /*20*/].f_11), &(Global_8473[Global_19798 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])))
		{
			Global_8473[Global_19798 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_77248)
	{
		Global_112293.f_14049[3 /*20*/].f_10 = func_44(1198, -1, 0);
	}
	Global_8473[Global_19798 /*2811*/][3 /*281*/].f_259 = Global_112293.f_14049[Global_19798 /*20*/].f_10;
	func_43();
	if (Global_77248)
	{
		Global_8473[3 /*2811*/][0 /*281*/] = 190;
		Global_8473[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&(Global_8473[3 /*2811*/][0 /*281*/].f_2), "CELL_701", 16);
		Global_8473[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_8473[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&(Global_8473[3 /*2811*/][0 /*281*/].f_7[0 /*4*/]), "CELL_704", 16);
		Global_8473[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_8473[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_8473[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&(Global_8473[3 /*2811*/][0 /*281*/].f_7[1 /*4*/]), "CELL_703", 16);
		Global_8473[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_8473[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_8473[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&(Global_8473[3 /*2811*/][0 /*281*/].f_7[2 /*4*/]), "CELL_801", 16);
		Global_8473[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_8473[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_8473[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_44(2092, -1, 0) == 0)
		{
			Global_8473[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else
		{
			Global_8473[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true)
	{
		wait(0);
		if (iLocal_30)
		{
			if (timerb() > 3500)
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0x3D9AD37162DD6896(unk_0x7D2B9E6A64637269());
				}
				iLocal_30 = 0;
			}
		}
		if (Global_19798.f_1 != 9)
		{
			switch (Global_19798.f_1)
			{
				case 7:
					func_28();
					func_26();
					break;
				
				case 8:
					if (bLocal_36 || iLocal_37)
					{
						if (bLocal_36)
						{
							bLocal_36 = false;
							settimerb(0);
							Global_112293.f_14049.f_82 = 1;
							iLocal_37 = 1;
						}
						else if (timerb() > 7500)
						{
							iLocal_37 = 0;
							unk_0x66AE54CE92457FEE(1);
						}
					}
					else
					{
						func_28();
						func_12();
						if (iLocal_33)
						{
							func_11();
						}
						if (func_10(2, Global_19766, 0))
						{
							if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
							{
								unk_0x3D9AD37162DD6896(unk_0x7D2B9E6A64637269());
							}
							iLocal_33 = 0;
							func_9();
							Global_19776 = 1;
							func_46(Global_19779, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_33();
							if (Global_19798.f_1 > 3)
							{
								Global_19798.f_1 = 7;
							}
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_19800 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19798.f_1 == 1 || Global_19798.f_1 == 3) || Global_19798.f_1 == 0) || Global_19742 == 1)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x3D9AD37162DD6896(unk_0x7D2B9E6A64637269());
	}
	if (bLocal_36)
	{
		unk_0x66AE54CE92457FEE(1);
	}
	if (Global_112293.f_14049.f_83 == 0 || Global_112293.f_14049.f_82 == 0)
	{
		func_3();
	}
	unk_0x543F5B2D3F90CA6D(0);
	unk_0x4BFE89D21F9885DC();
}

void func_3()
{
	if (Global_8473[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8473[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8473[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 25);
	unk_0x191DDA30577F440A(&Global_7669, 11);
}

int func_4(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_42009);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_45();
	Global_8473[Global_19798 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_8274 == 1 || Global_19798.f_1 < 7)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Back", &Global_19787, 1);
	}
}

int func_10(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x86AF801D34E482FF(iParam0, iParam1) || (iParam2 == 1 && unk_0x96DF114B59E81B9C(iParam0, iParam1)))
	{
		if (unk_0x3640D836D145B814())
		{
			if (unk_0x4793CFF25F0D14B5() == 0 || (unk_0xFEABE4F1525A0A08() && unk_0x0D901EFDFD7EF9D5(2)))
			{
				return 0;
			}
		}
		if (unk_0xA300BD5F71A8C704() || unk_0xD76BEAE1A33E3251())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	int iVar0;
	
	iLocal_34 = unk_0xDFB7BFA6482FEE1E();
	iVar0 = (iLocal_34 - iLocal_35);
	if ((iVar0 % 600) <= 300 && iVar0 < 3000)
	{
		unk_0x8543AEC08F877EE9(0, 100, 100);
	}
}

void func_12()
{
	int iVar0;
	var uVar1;
	struct<13> Var2;
	int iVar3;
	
	if (iLocal_23 == 1)
	{
		if (iLocal_32)
		{
			iLocal_34 = unk_0xDFB7BFA6482FEE1E();
			if ((iLocal_34 - iLocal_35) > 1000)
			{
				iLocal_31 = 1;
				iLocal_32 = 0;
			}
		}
		if (unk_0x0D901EFDFD7EF9D5(2))
		{
			if (unk_0x86AF801D34E482FF(2, 180))
			{
				iLocal_45 = 1;
				iLocal_46 = 0;
			}
			if (unk_0x86AF801D34E482FF(2, 181))
			{
				iLocal_45 = 0;
				iLocal_46 = 1;
			}
		}
		if ((((func_10(2, Global_19774, 0) || func_10(2, Global_19775, 0)) || iLocal_31) || iLocal_45 == 1) || iLocal_46 == 1)
		{
			iLocal_45 = 0;
			iLocal_46 = 0;
			iLocal_31 = 0;
			iLocal_32 = 0;
			settimerb(0);
			iLocal_30 = 1;
			unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x4E45F52E0261CADA();
			while (!unk_0xCCBB1074CAAE000A(uLocal_21))
			{
				wait(0);
			}
			iLocal_27 = iLocal_18[unk_0x399B6D3F817B71F1(uLocal_21)];
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				unk_0x3D9AD37162DD6896(unk_0x7D2B9E6A64637269());
				wait(100);
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					if (!unk_0x9442B8AA55165151(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0xDA654EB115F9FF7D(&(Global_8473[Global_19798 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), "Silent Ringtone Dummy"))
						{
						}
						else
						{
							unk_0xF13F8FC27BECDEF6(&(Global_8473[Global_19798 /*2811*/][1 /*281*/].f_144[iLocal_27 /*6*/]), unk_0x7D2B9E6A64637269(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_19776 == 0)
	{
		if (func_10(2, Global_19767, 0))
		{
			func_23();
			Global_19776 = 1;
			unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x4E45F52E0261CADA();
			while (!unk_0xCCBB1074CAAE000A(uLocal_21))
			{
				wait(0);
			}
			iLocal_26 = unk_0x399B6D3F817B71F1(uLocal_21);
			if (iLocal_26 < 0)
			{
				iLocal_26 = 0;
			}
			Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
			if (iLocal_23 == 2)
			{
				iVar0 = Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_259;
				Global_112293.f_14049[Global_19798 /*20*/].f_6 = Global_8473[Global_19798 /*2811*/][2 /*281*/].f_260[iVar0];
				func_46(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_77248)
				{
					Global_4272755 = Global_8473[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_8473[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_46(Global_19779, "SET_THEME", to_float(Global_4272755), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_46(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(23), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_46(Global_19779, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 4)
			{
				Global_112293.f_14049[Global_19798 /*20*/].f_9 = Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_77248)
				{
					Global_4272756 = Global_8473[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_8473[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_4272756 == 0)
					{
						Var2 = { func_17(unk_0x1146A9AE09CE2B14()) };
						iVar3 = 0;
						if (unk_0x68B90AB279E39C7B(0) == 0)
						{
						}
						if ((unk_0xDA1611E46AAEA71B(&Var2) && unk_0x68B90AB279E39C7B(0)) && Global_4272759 == 0)
						{
							settimera(0);
							while (!unk_0x72021D50470D04D2(&Var2, &uVar1) && timera() < 3000)
							{
								wait(0);
								if (timera() > 2999)
								{
									iVar3 = 1;
								}
							}
							if (iVar3 == 0)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_BACKGROUND_CREW_IMAGE");
								unk_0x35CA0C119E6A2A27("CELL_2000");
								unk_0xA91D83F2CC1345A6(&uVar1);
								unk_0xD4B2C39F7AD5A6A6();
								unk_0x392841D58D2EED1D();
							}
						}
						else
						{
							func_46(Global_19779, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_46(Global_19779, "SET_BACKGROUND_IMAGE", to_float(Global_4272756), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_46(Global_19779, "SET_BACKGROUND_IMAGE", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(23), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_46(Global_19779, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 1)
			{
				Global_112293.f_14049[Global_19798 /*20*/].f_11 = { Global_8473[Global_19798 /*2811*/][1 /*281*/].f_144[Global_8473[Global_19798 /*2811*/][1 /*281*/].f_259 /*6*/] };
				if (Global_77248)
				{
					func_20(1199, Global_8473[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(18), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iLocal_26;
				func_46(Global_19779, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
			}
			if (iLocal_23 == 3)
			{
				Global_112293.f_14049[Global_19798 /*20*/].f_10 = Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_259;
				if (Global_77248)
				{
					func_20(1198, Global_112293.f_14049[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_112293.f_14049[Global_19798 /*20*/].f_10 == 1)
				{
					iLocal_33 = 1;
					iLocal_35 = unk_0xDFB7BFA6482FEE1E();
				}
				else
				{
					iLocal_33 = 0;
				}
			}
			if (iLocal_23 == 0)
			{
				if (Global_77248 == 1)
				{
					Global_8473[3 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_25), to_float(19), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_25] /*4*/]), 0, 0, 0, 0);
					func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iLocal_26), to_float(48), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iLocal_18[iLocal_26] /*4*/]), 0, 0, 0, 0);
					iLocal_25 = iLocal_26;
					func_46(Global_19779, "DISPLAY_VIEW", 22f, to_float(iLocal_26), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_8473[3 /*2811*/][iLocal_23 /*281*/].f_259, -1, 1, 0);
				}
				else
				{
					Global_8473[0 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_8473[1 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					Global_8473[2 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[iLocal_26];
					if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_42009 == 15)
						{
							if (Global_112293.f_14049.f_82 == 0)
							{
								unk_0x66AE54CE92457FEE(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
							else
							{
								func_46(Global_19779, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								unk_0x191DDA30577F440A(&Global_7668, 25);
								unk_0x191DDA30577F440A(&Global_7669, 11);
								if (Global_112293.f_14049.f_83 == 0)
								{
									unk_0x66AE54CE92457FEE(1);
									func_15("CELL_7051", -1);
									Global_112293.f_14049.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_46(Global_19779, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						unk_0xC664C0067EEAB8D1(&Global_7668, 25);
						unk_0x191DDA30577F440A(&Global_7669, 11);
					}
				}
			}
			func_13(Global_19779, "SET_HEADER", &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xAB6A270F84A8781E(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0xAB6A270F84A8781E(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0xAB6A270F84A8781E(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0xAB6A270F84A8781E(iParam6))
	{
		func_14(iParam6);
	}
	unk_0x392841D58D2EED1D();
}

void func_14(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_16(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

struct<13> func_17(var uParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(uParam0, &Var0, 13);
	return Var0;
}

void func_18(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		func_14(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0xAB6A270F84A8781E(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_14(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_19()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (Global_19798 == 0)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 1)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 2)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 3)
		{
			switch (Global_4272755)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_20(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, iParam3);
	}
}

int func_21(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_22();
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

var func_22()
{
	return Global_1312763;
}

void func_23()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Accept", &Global_19787, 1);
		func_24();
	}
}

void func_24()
{
	if (func_25())
	{
		unk_0x63E7B2FCB3D2ECBB(5);
	}
}

int func_25()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4272757 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_26()
{
	if (Global_19776 == 0)
	{
		if (func_10(2, Global_19767, 0))
		{
			func_23();
			Global_19776 = 1;
			unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x4E45F52E0261CADA();
			while (!unk_0xCCBB1074CAAE000A(uLocal_21))
			{
				wait(0);
			}
			iLocal_24 = unk_0x399B6D3F817B71F1(uLocal_21);
			iLocal_23 = iLocal_18[iLocal_24];
			switch (iLocal_23)
			{
				case 0:
					if (Global_77248 == 0)
					{
						if (Global_42009 == 15)
						{
							if (Global_112293.f_14049.f_82 == 0)
							{
								unk_0x66AE54CE92457FEE(1);
								func_16("CELL_7050");
								if (fLocal_43 == fLocal_44)
								{
								}
								bLocal_36 = true;
							}
						}
					}
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				
				case 3:
					break;
			}
			if (Global_19798.f_1 > 3)
			{
				Global_19798.f_1 = 8;
			}
			func_27();
			iLocal_32 = 1;
			iLocal_35 = unk_0xDFB7BFA6482FEE1E();
		}
	}
}

void func_27()
{
	int iVar0[19];
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	func_46(Global_19779, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_19 = 0;
	iVar1 = 0;
	if (Global_77248)
	{
		StringCopy(&(Global_8473[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_CREWEMB", 16);
		Var2 = { func_17(unk_0x1146A9AE09CE2B14()) };
		if (!unk_0xDA1611E46AAEA71B(&Var2))
		{
			StringCopy(&(Global_8473[3 /*2811*/][4 /*281*/].f_7[0 /*4*/]), "CELL_840", 16);
		}
	}
	while (iVar1 < 19)
	{
		iVar3 = 0;
		iVar4 = 18;
		Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_84[iVar4] = 5000;
		while (iVar3 < 19)
		{
			if (Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_124[iVar3] == 1)
			{
				if (iVar0[iVar3] == 0)
				{
					if (Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] < Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_84[iVar4])
					{
						iVar4 = iVar3;
						func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_104[iVar4]), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar3++;
		}
		iLocal_18[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (unk_0xDA654EB115F9FF7D(&(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/])))
		{
			iLocal_28 = iVar1;
			if (iLocal_28 < 0)
			{
				iLocal_28 = 0;
			}
			if ((iLocal_23 == 1 || iLocal_23 == 4) || iLocal_23 == 2)
			{
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(48), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
			if (iLocal_23 == 0 && Global_77248 == 1)
			{
				func_18(Global_19779, "SET_DATA_SLOT", to_float(22), to_float(iVar1), to_float(48), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[iVar4 /*4*/]), 0, 0, 0, 0);
				iLocal_25 = iVar1;
			}
		}
		if (Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_46(Global_19779, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_19779, "SET_HEADER", &(Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_7[Global_8473[Global_19798 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_19786)
	{
		func_18(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC664C0067EEAB8D1(&Global_7668, 17);
}

void func_28()
{
	if (iLocal_42)
	{
		if (timera() > 50)
		{
			iLocal_42 = 0;
		}
	}
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (func_10(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
		}
		if (func_10(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
		}
	}
	if (iLocal_42 == 0)
	{
		if (func_10(2, Global_19774, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_31();
			iLocal_42 = 1;
			settimera(0);
		}
		if (func_10(2, Global_19775, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_29();
			iLocal_42 = 1;
			settimera(0);
		}
	}
}

void func_29()
{
	func_46(Global_19779, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_30();
}

void func_30()
{
	if (func_25())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
	}
}

void func_31()
{
	func_46(Global_19779, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_32();
}

void func_32()
{
	if (func_25())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
	}
}

void func_33()
{
	int iVar0[20];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_8473[Global_19798 /*2811*/][iVar3 /*281*/] = 5000;
		if (unk_0xC82CD1DB42480082(2) == 0)
		{
			Global_8473[Global_19798 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else
		{
			Global_8473[Global_19798 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar2 < 9)
		{
			if (Global_8473[Global_19798 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_8473[Global_19798 /*2811*/][iVar2 /*281*/] < Global_8473[Global_19798 /*2811*/][iVar3 /*281*/])
					{
						if (Global_77248)
						{
							if (iVar2 == 0)
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_19779, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_19779, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2)
						{
							if (iVar2 == 4 || iVar2 == 5)
							{
							}
							else
							{
								iVar3 = iVar2;
								func_42(iVar2, iVar3);
								func_18(Global_19779, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (iVar2 == 5)
						{
						}
						else
						{
							iVar3 = iVar2;
							func_42(iVar2, iVar3);
							func_18(Global_19779, "SET_DATA_SLOT", to_float(13), to_float(iVar1), to_float(iLocal_29), -1f, -1f, &(Global_8473[Global_19798 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_8473[Global_19798 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_46(Global_19779, "DISPLAY_VIEW", 13f, to_float(iLocal_24), -1082130432, -1082130432, -1082130432);
	func_13(Global_19779, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_19786)
	{
		func_18(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC664C0067EEAB8D1(&Global_7668, 17);
}

int func_34()
{
	if (Global_77248)
	{
		Global_19798 = 3;
	}
	else
	{
		Global_19798 = func_35();
	}
	if (Global_19798 > 3)
	{
		Global_19798 = 3;
	}
	return Global_112293.f_14049[Global_19798 /*20*/].f_7;
}

var func_35()
{
	func_36();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_40(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_39(unk_0x7D2B9E6A64637269());
			if (func_38(iVar0) && (!func_37(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_38(Global_112293.f_2361.f_539.f_4321))
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

bool func_37(int iParam0)
{
	return Global_42009 == iParam0;
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

int func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_40(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_40(int iParam0)
{
	if (func_38(iParam0))
	{
		return func_41(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_41(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_42(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (Global_77248)
			{
				iLocal_29 = 19;
			}
			else if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
			{
				iLocal_29 = 26;
			}
			else
			{
				iLocal_29 = 25;
			}
			break;
		
		case 3:
			if (Global_8473[Global_19798 /*2811*/][3 /*281*/].f_259 == 1)
			{
				iLocal_29 = 20;
			}
			else
			{
				iLocal_29 = 21;
			}
			break;
		
		default:
			iLocal_29 = Global_8473[Global_19798 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}
}

void func_43()
{
	if (Global_42009 != 15)
	{
		func_45();
		Global_8473[Global_19798 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_21(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_45()
{
	if (func_37(14))
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
		Global_19798 = func_35();
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

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

