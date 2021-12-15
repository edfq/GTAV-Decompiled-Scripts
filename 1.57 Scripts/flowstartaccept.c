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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x4210287E2833D44B(83))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x3640D836D145B814()) && unk_0x068B689C2D0BFA82())
	{
		unk_0xA82C5CF50055A1B4(1);
		if (!unk_0x8B6A925F148E0E94())
		{
			if (!unk_0x4E38E404B98F3D9A())
			{
				unk_0x8BA9BCDD56AA7115(800);
			}
		}
		iLocal_20 = unk_0x42AA2CCF0B61DCD8("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x42AA2CCF0B61DCD8("INSTRUCTIONAL_BUTTONS");
		while (!unk_0xDAE4BC89A198A6AF(iLocal_20) || !unk_0xDAE4BC89A198A6AF(iLocal_21))
		{
			wait(0);
		}
		unk_0x704F8697BB515627(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(iLocal_21, "SET_DATA_SLOT");
		unk_0x9E3D03981E2E9AD9(0);
		func_4(unk_0x908D1ACF42DAF9B8(2, 201, 1));
		func_5("HUD_CONTINUE");
		unk_0x392841D58D2EED1D();
		unk_0x704F8697BB515627(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x9D7453DF8B7E9E0B(0);
		unk_0x392841D58D2EED1D();
		while (!unk_0x8B6A925F148E0E94())
		{
			wait(0);
		}
		unk_0x55A70F08F08A3A71();
		while (!iLocal_22)
		{
			unk_0xBDF731C5B27D78FF();
			unk_0x0F33095580A670CE(7);
			unk_0x44EF5678D6916481(iLocal_20, 255, 255, 255, 0, 0);
			unk_0x44EF5678D6916481(iLocal_21, 255, 255, 255, 0, 0);
			if (unk_0x5C6675393464A814(2, 201))
			{
				iLocal_22 = 1;
			}
			wait(0);
		}
		unk_0xA82C5CF50055A1B4(0);
		func_3(1, 1);
		func_1();
	}
	Global_77517.f_1 = 0;
	unk_0x191DDA30577F440A(&(Global_112293.f_10014.f_25), 0);
	func_6();
}

int func_1()
{
	if (func_2(0))
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

int func_2(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_3(int iParam0, int iParam1)
{
	Global_99409.f_7 = iParam0;
	Global_99409.f_8 = iParam1;
}

void func_4(var uParam0)
{
	unk_0x5FEAD10623875182(uParam0);
}

void func_5(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_6()
{
	if (iLocal_20 != 0)
	{
		unk_0x3D9BC07C93913E04(&iLocal_20);
	}
	if (iLocal_21 != 0)
	{
		unk_0x3D9BC07C93913E04(&iLocal_21);
	}
	unk_0x0F33095580A670CE(4);
	unk_0xA82C5CF50055A1B4(0);
	unk_0x4BFE89D21F9885DC();
}

