#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x4210287E2833D44B(83))
	{
		func_10();
	}
	unk_0x53DE9210BC084E9F(0);
	unk_0xC664C0067EEAB8D1(&(Global_112293.f_10014.f_25), 1);
	func_7();
	unk_0xA82C5CF50055A1B4(1);
	if (!unk_0x8B6A925F148E0E94())
	{
		unk_0x8BA9BCDD56AA7115(0);
	}
	iLocal_0 = unk_0x42AA2CCF0B61DCD8("OPENING_CREDITS");
	while (!unk_0xDAE4BC89A198A6AF(iLocal_0))
	{
		func_7();
		wait(0);
	}
	while (!unk_0x8B6A925F148E0E94())
	{
		func_7();
		wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0xDFB7BFA6482FEE1E() + 8000 + round((2f * 1000f)));
	while (!unk_0x2CA4B93E310C1860())
	{
		func_7();
		if (!unk_0x234B68AC2E35ED5A(Global_112293.f_10014.f_25, 1))
		{
			unk_0x44EF5678D6916481(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (unk_0xDFB7BFA6482FEE1E() + round((2f * 1000f)));
				}
			}
			else if (unk_0xDFB7BFA6482FEE1E() > iLocal_1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_10014.f_25), 1);
				if (unk_0x068B689C2D0BFA82() || unk_0x3640D836D145B814())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		wait(0);
	}
	func_10();
}

void func_1()
{
	Global_99409 = 1;
}

int func_2()
{
	if (func_3(0))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_99409.f_7 = iParam0;
	Global_99409.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x704F8697BB515627(iLocal_0, "HIDE_LOGO");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x392841D58D2EED1D();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x704F8697BB515627(iLocal_0, "SHOW_LOGO");
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
	unk_0x82D42F43BE26EB72(fParam1);
	unk_0x82D42F43BE26EB72(fParam2);
	unk_0x82D42F43BE26EB72(fParam3);
	unk_0x82D42F43BE26EB72(fParam4);
	unk_0x82D42F43BE26EB72(fParam5);
	unk_0x82D42F43BE26EB72(fParam6);
	unk_0x82D42F43BE26EB72(fParam7);
	unk_0x392841D58D2EED1D();
}

void func_7()
{
	unk_0xBDF731C5B27D78FF();
	unk_0x366E7F593105797F(2, 199, 1);
	unk_0x0F33095580A670CE(7);
	func_8();
}

void func_8()
{
	unk_0xDA81FB7770247CC0();
	func_9();
}

void func_9()
{
	Global_22531.f_134 = 1;
}

void func_10()
{
	unk_0x191DDA30577F440A(&(Global_112293.f_10014.f_25), 1);
	if (iLocal_0 != 0)
	{
		unk_0x3D9BC07C93913E04(&iLocal_0);
	}
	unk_0x0F33095580A670CE(4);
	unk_0xA82C5CF50055A1B4(0);
	unk_0x53DE9210BC084E9F(1);
	unk_0x4BFE89D21F9885DC();
}

