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
		func_2();
	}
	uLocal_18 = unk_0x42AA2CCF0B61DCD8("graphic_design");
	while (!unk_0xDAE4BC89A198A6AF(uLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		unk_0x43D93129BD1AD792(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		wait(0);
	}
}

void func_1(var uParam0)
{
	if (Global_19777 == 0)
	{
		if (((((((unk_0x5C6675393464A814(2, 189) || unk_0x5C6675393464A814(2, 190)) || unk_0x5C6675393464A814(2, 188)) || unk_0x5C6675393464A814(2, 187)) || unk_0x5C6675393464A814(2, 205)) || unk_0x5C6675393464A814(2, 206)) || unk_0x5C6675393464A814(2, 201)) || unk_0x5C6675393464A814(2, 202))
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
		if (unk_0x5C6675393464A814(2, 189))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(10);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x5C6675393464A814(2, 190))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(11);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x5C6675393464A814(2, 205))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(4);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x5C6675393464A814(2, 206))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(6);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x5C6675393464A814(2, 188))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(8);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x5C6675393464A814(2, 187))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(9);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x5C6675393464A814(2, 201))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(16);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x5C6675393464A814(2, 202))
		{
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(17);
			unk_0x392841D58D2EED1D();
		}
	}
}

void func_2()
{
	func_3(0);
	unk_0x543F5B2D3F90CA6D(0);
	unk_0x3D9BC07C93913E04(&uLocal_18);
	unk_0x4BFE89D21F9885DC();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19798.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_8()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

