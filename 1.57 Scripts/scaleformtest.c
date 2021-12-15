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
	var uLocal_19 = 0;
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
	if (unk_0x8B6A925F148E0E94())
	{
		unk_0x6E1E3A5B1F9AB95B(500);
	}
	if (unk_0x4210287E2833D44B(3))
	{
		func_5();
	}
	uLocal_19 = unk_0x42AA2CCF0B61DCD8("instructional_buttons");
	while (!unk_0xDAE4BC89A198A6AF(uLocal_19))
	{
		wait(0);
	}
	while (true)
	{
		unk_0x44EF5678D6916481(uLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, uLocal_19);
		wait(0);
	}
}

void func_1(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x704F8697BB515627(uParam1, "CLEAR_ALL");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_CLEAR_SPACE");
			unk_0x9E3D03981E2E9AD9(200);
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(0);
			func_3(unk_0x908D1ACF42DAF9B8(2, 191, 1));
			func_2("PRESS A");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(1);
			func_3(unk_0x908D1ACF42DAF9B8(2, 194, 1));
			func_2("PRESS B");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(2);
			func_3(unk_0x908D1ACF42DAF9B8(2, 193, 1));
			func_2("PRESS X");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(3);
			func_3(unk_0x908D1ACF42DAF9B8(2, 192, 1));
			func_2("PRESS Y");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(80);
			unk_0x392841D58D2EED1D();
			iLocal_18 = -1;
			break;
		
		case 1:
			unk_0x704F8697BB515627(uParam1, "CLEAR_ALL");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_CLEAR_SPACE");
			unk_0x9E3D03981E2E9AD9(200);
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(0);
			func_3(unk_0x908D1ACF42DAF9B8(2, 187, 1));
			func_2("DOWN");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(1);
			func_3(unk_0x908D1ACF42DAF9B8(2, 188, 1));
			func_2("UP");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(2);
			func_3(unk_0x908D1ACF42DAF9B8(2, 190, 1));
			func_2("LEFT");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(3);
			func_3(unk_0x908D1ACF42DAF9B8(2, 189, 1));
			func_2("RIGHT");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(80);
			unk_0x392841D58D2EED1D();
			iLocal_18 = -1;
			break;
		
		case 2:
			unk_0x704F8697BB515627(uParam1, "CLEAR_ALL");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_CLEAR_SPACE");
			unk_0x9E3D03981E2E9AD9(200);
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(0);
			func_3(unk_0x908D1ACF42DAF9B8(2, 202, 1));
			func_2("BACK");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(uParam1, "SET_BACKGROUND_COLOUR");
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x9E3D03981E2E9AD9(80);
			unk_0x392841D58D2EED1D();
			iLocal_18 = -1;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_3(var uParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

void func_4()
{
	if (Global_19777 == 0)
	{
		if (((((((((unk_0x5C6675393464A814(2, 189) || unk_0x5C6675393464A814(2, 190)) || unk_0x5C6675393464A814(2, 188)) || unk_0x5C6675393464A814(2, 187)) || unk_0x5C6675393464A814(2, 205)) || unk_0x5C6675393464A814(2, 206)) || unk_0x5C6675393464A814(2, 207)) || unk_0x5C6675393464A814(2, 208)) || unk_0x5C6675393464A814(2, 201)) || unk_0x5C6675393464A814(2, 202))
		{
			Global_19777 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_19777 = 0;
	}
	if (Global_19777 == 0)
	{
		if (unk_0x5C6675393464A814(2, 217))
		{
			iLocal_18 = 1;
		}
		if (unk_0x5C6675393464A814(2, 189))
		{
			iLocal_18 = 2;
		}
		if (unk_0x5C6675393464A814(2, 190))
		{
			iLocal_18 = 2;
		}
		if (unk_0x5C6675393464A814(2, 205))
		{
		}
		if (unk_0x5C6675393464A814(2, 206))
		{
		}
		if (unk_0x5C6675393464A814(2, 207))
		{
		}
		if (unk_0x5C6675393464A814(2, 208))
		{
		}
		if (unk_0x5C6675393464A814(2, 188))
		{
			iLocal_18 = 2;
		}
		if (unk_0x5C6675393464A814(2, 187))
		{
			iLocal_18 = 2;
		}
		if (unk_0x5C6675393464A814(2, 201))
		{
			iLocal_18 = 1;
		}
		if (unk_0x5C6675393464A814(2, 202))
		{
			iLocal_18 = 0;
		}
		if (unk_0x5C6675393464A814(2, 203))
		{
			iLocal_18 = 1;
		}
		if (unk_0x5C6675393464A814(2, 204))
		{
			iLocal_18 = 1;
		}
	}
}

void func_5()
{
	func_6(0);
	unk_0x543F5B2D3F90CA6D(0);
	unk_0x3D9BC07C93913E04(&uLocal_19);
	unk_0x4BFE89D21F9885DC();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_13();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_12(0))
		{
			func_7(0);
		}
	}
	else if (Global_19798.f_1 == 1)
	{
		if (!Global_19798.f_1 == 0)
		{
			Global_19798.f_1 = 3;
		}
	}
}

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_10())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
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
	if (!func_8())
	{
		Global_19798.f_1 = 3;
	}
}

int func_8()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_12(0))
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

bool func_10()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_11()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_12(int iParam0)
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

void func_13()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

