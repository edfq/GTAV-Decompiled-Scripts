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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	func_4(21);
	if (unk_0x4210287E2833D44B(18))
	{
		if (unk_0xF7F6A9157CE1B76E() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		wait(0);
		if (unk_0x636F1F53CC61D2C9(joaat("docks_setup")) == 0)
		{
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					iLocal_28 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				}
				else
				{
					iLocal_28 = 0;
				}
			}
			if (unk_0x419E13582192CFEA(iLocal_28))
			{
				if (unk_0xBFCE58B2B3249999(iLocal_28, 0))
				{
					if (unk_0xEACFC87E44438F24(iLocal_28, joaat("handler")))
					{
						unk_0x203739B163D4D88E(0, 51);
						if (!unk_0xC5A8254991E59BD8(iLocal_28))
						{
							if (iLocal_32 == 0)
							{
								if (!unk_0x419E13582192CFEA(iLocal_29) || (unk_0x419E13582192CFEA(iLocal_29) && unk_0xB219A5BFF547852F(unk_0xD6E677FAD7521410(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_29))
								{
									iLocal_29 = unk_0xB219A5BFF547852F(unk_0xD6E677FAD7521410(iLocal_28, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0x419E13582192CFEA(iLocal_29))
								{
									if (func_1(&uLocal_30, 1000))
									{
										if (unk_0xA8367F71564DC09F(iLocal_28, iLocal_29))
										{
											if (unk_0x86AF801D34E482FF(0, 51))
											{
												unk_0x6980F6E4D4AC14F7(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_31 == 1)
							{
								uLocal_30 = unk_0xDFB7BFA6482FEE1E();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (unk_0x86AF801D34E482FF(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xDFB7BFA6482FEE1E();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x4BFE89D21F9885DC();
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[iVar0], iVar1))
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_9083.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x234B68AC2E35ED5A(Global_112293.f_9083.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x191DDA30577F440A(&(Global_112293.f_9083.f_99.f_219[iVar0]), iVar1);
	return 1;
}

