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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_43 = 277.7314f;
	Local_45 = { -196.045f, -580.13f, 135.0004f };
	unk_0x8BA9BCDD56AA7115(800);
	func_20();
	while (true)
	{
		unk_0x803158F310875408();
		func_19();
		if (func_7() || uLocal_42)
		{
			func_3();
		}
		if (!iLocal_38)
		{
			if (!iLocal_37 && unk_0x8B6A925F148E0E94())
			{
				unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Local_45, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fLocal_43);
				unk_0x22C43B6780E8FE5B(Local_45, 2500f, 0);
				unk_0xDF23DCD7A3E1B7A5(0);
				iLocal_37 = 1;
			}
			else if (unk_0xCE84F8AB9BD41C13())
			{
				if (!bLocal_41)
				{
					bLocal_41 = func_2();
				}
				else if (!bLocal_39)
				{
					bLocal_39 = func_1();
				}
				else
				{
					unk_0x6E1E3A5B1F9AB95B(800);
					iLocal_38 = 1;
				}
			}
		}
	}
}

int func_1()
{
	if (!unk_0xBB61E4E5DB5BBD9B(uLocal_44, "garage_decor_01"))
	{
		unk_0xEFDEF37B67B5BBF4(uLocal_44, "garage_decor_01");
	}
	else
	{
		unk_0xB15BA3909055E465(uLocal_44);
		return 1;
	}
	return 0;
}

int func_2()
{
	uLocal_44 = unk_0xB71084333B418824(unk_0x7D2B9E6A64637269());
	if (unk_0xE75EE67F14EAAE37(uLocal_44))
	{
		if (!iLocal_40)
		{
			unk_0x0EFDA7B3FFAA82B3(uLocal_44);
			iLocal_40 = 1;
		}
		else if (unk_0xC4EACCE45DBAA313(uLocal_44))
		{
			unk_0x8BAFB6B897BD2A31(uLocal_44);
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_36)
	{
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

void func_4()
{
	unk_0x4BFE89D21F9885DC();
}

void func_5(int iParam0)
{
	func_6(&(uLocal_35[iParam0]));
	unk_0xCE293C7793B5EC3F((unk_0xB99E3F8D18D17364(0, 0) - 1));
}

void func_6(var uParam0)
{
	var uVar0;
	
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		if (!unk_0xB364346471C3B028(*uParam0))
		{
		}
	}
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x24DBE20C830AE9AB(&uVar0);
	}
}

int func_7()
{
	var uVar0;
	
	func_15(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_14())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_13())
	{
		return 1;
	}
	if (func_12(159))
	{
		if (!func_11())
		{
			return 1;
		}
	}
	if (func_12(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_8() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_8()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	switch (func_10())
	{
		case 0:
			return func_9();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_9()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_10()
{
	return Global_31345;
}

bool func_11()
{
	return Global_2453009.f_698;
}

int func_12(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	return Global_2463497;
}

bool func_14()
{
	return Global_2453009.f_693;
}

void func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x1131A9F5A725F45A(1))
	{
		iVar1 = unk_0x5F0847A02025CAB5(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x53858F1E03A88AE1(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_16(iVar0);
					break;
				
				case -1320260596:
					unk_0x53858F1E03A88AE1(1, iVar0, &Var3, 4);
					if (Var3.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_18(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(uVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(uVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_17(uVar2, &bVar3))
						{
							unk_0x2B360ED559ED11A6(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x795957CD3A0042C8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_17(var uParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(uParam0))
		{
			if (unk_0x456C91FDAFEEF560(uParam0))
			{
				if (!unk_0x8C6BE3ED9638F314(unk_0x6471F4759775FCA4(uParam0)))
				{
					unk_0x4985CD0720AFD468(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9984C023D4E57C2E(uParam0, 0))
		{
			if (unk_0xA6BE8F025C6B653F(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(uParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_19()
{
	wait(0);
}

void func_20()
{
	unk_0x35BEDD7AFD26FCD5(32, 0, -1);
	func_22(0, -1, 0);
	unk_0xF784CE07ED70869A(&uLocal_35, 21);
	if (!func_21())
	{
		func_3();
	}
	unk_0x87F1904AB605184A(0);
	if (!unk_0xD17A6DB35E21C90C("imp_dt1_02_cargarage_a"))
	{
		unk_0xD0051FAE2E1BB4C8("imp_dt1_02_cargarage_a");
	}
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x02BFF15CAA701972())
		{
			return 0;
		}
		if (unk_0x50309A384D827846())
		{
			return 1;
		}
		if (func_14())
		{
			return 0;
		}
		if (func_12(157))
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

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x41BB6B0BDB7933FF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x02BFF15CAA701972())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_14())
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
				if (func_12(157))
				{
					if (!bParam2)
					{
						func_4();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x930F75DAF7DE892B())
			{
				if (!bParam2)
				{
					func_4();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x41BB6B0BDB7933FF();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			if (!bParam2)
			{
				func_4();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x930F75DAF7DE892B())
	{
		if (!bParam2)
		{
			func_4();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23()
{
	return Global_1312878;
}

