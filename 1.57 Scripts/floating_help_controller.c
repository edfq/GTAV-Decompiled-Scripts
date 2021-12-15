void __EntryFunction__()
{
	unk_0x5B2BDC877F7E8802();
	while (true)
	{
		wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110945)
	{
		if (Global_110945[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0xDFB7BFA6482FEE1E() > Global_110945[iVar0 /*28*/].f_21 && Global_110945[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x57A7F754B6B8906E(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_110945[iVar0 /*28*/].f_21 != -1)
				{
					if (!unk_0x234B68AC2E35ED5A(Global_110945[iVar0 /*28*/].f_27, 0))
					{
						Global_110945[iVar0 /*28*/].f_21 = (Global_110945[iVar0 /*28*/].f_21 + round((unk_0x7FF6ACE380ED166C() * 1000f)));
						if (unk_0x702696330F8E5676(iVar1))
						{
							unk_0x191DDA30577F440A(&(Global_110945[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_110945[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_110945[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0xE50EB54E0F21BED0(Global_110945[iVar0 /*28*/].f_23, 0))
						{
							if (!unk_0x234B68AC2E35ED5A(Global_110945[iVar0 /*28*/].f_27, 3))
							{
								unk_0xB40BF1E5B5AFAF2C(iVar1, unk_0x9E695CE384C77EF0(Global_110945[iVar0 /*28*/].f_23, Global_110945[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0x65A06F27C41E6D59(iVar1, Global_110945[iVar0 /*28*/].f_23, Global_110945[iVar0 /*28*/].f_24, Global_110945[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_110945[iVar0 /*28*/].f_24 != 0f || Global_110945[iVar0 /*28*/].f_24.f_1 != 0f) || Global_110945[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xB40BF1E5B5AFAF2C(iVar1, Global_110945[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xFE78707C87D69372(iVar1, Global_110945[iVar0 /*28*/].f_24, Global_110945[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0xDFB7BFA6482FEE1E() - Global_110945[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_110945[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110945[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110945[iParam0 /*28*/].f_4), "", 64);
	Global_110945[iParam0 /*28*/].f_23 = 0;
	Global_110945[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110945[iParam0 /*28*/].f_27 = 0;
	Global_110945[iParam0 /*28*/].f_20 = 0;
	Global_110945[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0xDA654EB115F9FF7D(&(Global_110945[iParam0 /*28*/]), "") && !unk_0x4030103C8B148AFC(&(Global_110945[iParam0 /*28*/])))
	{
		if (unk_0x234B68AC2E35ED5A(Global_110945[iParam0 /*28*/].f_27, 1))
		{
			if (unk_0x234B68AC2E35ED5A(Global_110945[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_110945[iParam0 /*28*/]), &(Global_110945[iParam0 /*28*/].f_4), Global_110945[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_110945[iParam0 /*28*/]), &(Global_110945[iParam0 /*28*/].f_4));
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Global_110945[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_110945[iParam0 /*28*/]), Global_110945[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_110945[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x4A4799828818A508(uParam1);
	return unk_0x0222F263F70347A8((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x4A4799828818A508(uParam1);
	unk_0x38CD3C04C877C35F(uParam2);
	return unk_0x0222F263F70347A8((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x4A4799828818A508(uParam1);
	unk_0x1896EC0B030A48A2(uParam2);
	return unk_0x0222F263F70347A8((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x4A4799828818A508(uParam1);
	unk_0x1896EC0B030A48A2(uParam2);
	unk_0x38CD3C04C877C35F(uParam3);
	return unk_0x0222F263F70347A8((1 + iParam0));
}

