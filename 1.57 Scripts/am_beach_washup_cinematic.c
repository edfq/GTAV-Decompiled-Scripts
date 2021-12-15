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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	func_47(&uScriptParam_44);
	while (true)
	{
		func_46();
		if (func_33())
		{
		}
		else
		{
			func_14();
		}
	}
	func_1();
}

void func_1()
{
	func_3(&uLocal_37);
	func_2();
}

void func_2()
{
	unk_0x4BFE89D21F9885DC();
}

void func_3(var uParam0)
{
	struct<7> Var0;
	
	func_4(0, 1, 1, 0, 0, 0, 0);
	if (unk_0x0E8572B08CEB6A11(uParam0->f_6))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_6, 0);
	}
	unk_0xB3099507583713CA(unk_0x7D2B9E6A64637269());
	*uParam0 = { Var0 };
}

void func_4(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x5359E9154EC8BC8F(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 1);
		func_13(1);
		unk_0x8F639D0D922F6888();
		unk_0x97B846780E2A8C66();
		if (Global_19798.f_1 > 3 && !bParam6)
		{
			if (unk_0x8820F6FCD373F9F7())
			{
				unk_0x75B41F5020877259(0);
			}
			if (!func_12())
			{
				Global_19798.f_1 = 3;
			}
			Global_21125 = 5;
		}
		func_11(1, iParam3, iParam2, 0);
		Global_62104 = 1;
		Global_74431 = 1;
		Global_77246 = 1;
	}
	else
	{
		func_13(0);
		unk_0xE1AA8B5D9066529D();
		Global_62104 = 0;
		if (bParam1)
		{
			unk_0xDFEA7BB6BBCCEC80();
		}
		unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 0);
		unk_0x987940DFD4A807FF(unk_0x1146A9AE09CE2B14(), 0);
		func_11(0, iParam3, iParam2, 0);
		if (unk_0x02BFF15CAA701972())
		{
			if (((((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_9(unk_0x1146A9AE09CE2B14())) && !func_6(unk_0x1146A9AE09CE2B14(), 0)) && !func_5()) && !bParam4) && !bParam5)
			{
				unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
			}
		}
		else if (((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !func_9(unk_0x1146A9AE09CE2B14())) && !bParam4) && !bParam5)
		{
			unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
		}
		Global_77246 = 0;
	}
}

bool func_5()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_8()
{
	return Global_1312763;
}

int func_9(int iParam0)
{
	if (func_6(iParam0, 0))
	{
		return 1;
	}
	if (func_10())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_10()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_11(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xFBB350E73795834E() != iParam0 && uParam2)
		{
			unk_0x31F2EFD33130D530(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_12()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 13);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 13);
	}
}

void func_14()
{
	if (func_15(&uLocal_37))
	{
		func_1();
	}
}

int func_15(var uParam0)
{
	unk_0xAF98B1BA240CE3DB();
	unk_0xD8A14DD983454D11();
	func_30(1);
	unk_0x2EA77AAC984722FF();
	func_24(0);
	if (unk_0xA300BD5F71A8C704())
	{
		unk_0x348B9A67D786EAEA(0);
	}
	switch (func_23(uParam0))
	{
		case 0:
			func_18(uParam0);
			break;
		
		case 1:
			func_16(uParam0);
			break;
		
		case 2:
			return 1;
	}
	return 0;
}

void func_16(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x51FB94D5F3D17E35(uParam0->f_5);
	if (unk_0x0BC8768247440B3A(uVar0) >= 0.9f)
	{
		unk_0x3DF4E172AD7D16AF(uParam0->f_5);
		unk_0x09F9466B03D29D2D(0, 1, 3000, 1, 0, 0);
		unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 1f, 2000, 0, 1, 0);
		func_17(uParam0, 2);
	}
}

void func_17(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_18(var uParam0)
{
	var uVar0;
	
	uVar0 = func_20();
	unk_0x068BDE31F7D112BB(uVar0);
	if (!unk_0x0EC2B29D4172D225(uVar0))
	{
		return;
	}
	unk_0x6E1E3A5B1F9AB95B(800);
	func_17(uParam0, 1);
	func_19(uParam0);
}

void func_19(var uParam0)
{
	var uVar0;
	
	uVar0 = func_20();
	uParam0->f_5 = unk_0x88A92D91AB021F3F(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0x5DDC0EBEF6A48288(unk_0x7D2B9E6A64637269(), uParam0->f_5, uVar0, "action", 1000f, -1.5f, 0, 0, 1148846080, 0);
	unk_0x20F6F12F2945E30E(uParam0->f_5);
	unk_0xB6E26A0DD88BE958(unk_0x7D2B9E6A64637269(), "HS4F_IG25_BEACH", 0);
	unk_0xE37EB80DFB0D31FB(unk_0x7D2B9E6A64637269(), 0, 0);
	uParam0->f_6 = unk_0x84F073038B557438(964613260, 1);
	unk_0x5DECB07FFEBB3573(uParam0->f_6, "action_camera", uVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
	unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
	unk_0xF9135F131C423364(uVar0);
}

char* func_20()
{
	if (func_21())
	{
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
	}
	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

bool func_21()
{
	return func_22(unk_0x1146A9AE09CE2B14());
}

int func_22(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0)
{
	return *uParam0;
}

void func_24(int iParam0)
{
	if (func_29())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_28(0))
		{
			func_25(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_25(int iParam0)
{
	if (func_29())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_27())
		{
			func_26(1, 1);
		}
		else
		{
			func_26(0, 0);
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
	if (!func_12())
	{
		Global_19798.f_1 = 3;
	}
}

void func_26(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_28(0))
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

bool func_27()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_28(int iParam0)
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

bool func_29()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_30(bool bParam0)
{
	if (bParam0)
	{
		func_32();
	}
	func_31(4, -1);
	func_31(6, -1);
	func_31(7, -1);
	func_31(3, -1);
	func_31(1, -1);
	func_31(2, -1);
	func_31(11, -1);
	func_31(13, -1);
	func_31(14, -1);
	func_31(16, -1);
}

void func_31(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1379108.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1379108.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_32()
{
	Global_2544210.f_4598 = 0;
}

int func_33()
{
	if (func_34())
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	var uVar0;
	
	func_42(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!unk_0x02BFF15CAA701972())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (unk_0x636F1F53CC61D2C9(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_36()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()
{
	return Global_31345;
}

bool func_38()
{
	return Global_2453009.f_698;
}

int func_39(int iParam0)
{
	if (unk_0x7B95B829DF1701E0(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()
{
	return Global_2463497;
}

bool func_41()
{
	return Global_2453009.f_693;
}

void func_42(var uParam0)
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
					func_43(iVar0);
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

void func_43(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 3))
	{
		if (func_45(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0xD56332194D622ECE(Var0.f_1);
			if (unk_0x419E13582192CFEA(uVar1))
			{
				if (unk_0xC49311A2A500FF09(uVar1, 0))
				{
					uVar2 = unk_0x75B58B38E45C6F9A(uVar1, 0);
					if (unk_0xF2A0B4A5DE0987FB(uVar2, Var0.f_2) && unk_0x8ED8428AB65B7367())
					{
						if (func_44(uVar2, &bVar3))
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

int func_44(var uParam0, var uParam1)
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

int func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
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

void func_46()
{
	wait(0);
}

void func_47(var uParam0)
{
	unk_0x35BEDD7AFD26FCD5(32, 0, -1);
	func_48(&uLocal_37, *uParam0, uParam0->f_3);
}

void func_48(var uParam0, struct<3> Param1, var uParam2)
{
	func_50(uParam0, Param1);
	func_49(uParam0, uParam2);
	func_4(1, 1, 1, 0, 0, 0, 0);
	unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param1, 1, 0, 0, 1);
	if (unk_0x8B6A925F148E0E94())
	{
		unk_0xBC2EC768349461B7();
	}
}

void func_49(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_50(var uParam0, struct<3> Param1)
{
	uParam0->f_1 = { Param1 };
}

