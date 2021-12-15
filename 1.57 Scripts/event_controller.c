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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x4210287E2833D44B(34))
	{
		unk_0x4BFE89D21F9885DC();
	}
	while (true)
	{
		wait(0);
		func_140();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x5B99D5C0DE301BD3())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x1131A9F5A725F45A(1))
		{
			iVar7 = unk_0x5F0847A02025CAB5(1, iVar2);
			switch (iVar7)
			{
				case 192:
					func_137();
					break;
				
				case 193:
					func_136();
					break;
				
				case 194:
					func_130(iVar2);
					break;
				
				case 195:
					func_129(iVar2);
					break;
				
				case 196:
					func_118(iVar2);
					break;
				
				case 214:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x1131A9F5A725F45A(0))
	{
		iVar0 = unk_0x5F0847A02025CAB5(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				unk_0x53858F1E03A88AE1(0, iVar2, &uVar1, 1);
				if (unk_0x419E13582192CFEA(uVar1))
				{
					if (unk_0x55F5BD4ABD80B211(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_54349.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0xA2CCAAC7F5CA3F49(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_54349.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				unk_0x53858F1E03A88AE1(0, iVar2, &uVar1, 1);
				if (unk_0x419E13582192CFEA(uVar1))
				{
					if (unk_0x55F5BD4ABD80B211(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_54349.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0xA2CCAAC7F5CA3F49(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_54349.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_54349 = iVar3;
	Global_54349.f_12 = iVar4;
	Global_54349.f_24 = iVar5;
	Global_54349.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0xF27915DA30087A9F(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < unk_0x399FE7DFD14716CA())
		{
			if (unk_0x5491887B955D095B(iVar1) || unk_0x7E500A72F7BF6557(iVar1))
			{
				if (unk_0x7E500A72F7BF6557(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					unk_0x343B9F9115ED2C30(iVar1);
				}
				func_54(Var0.f_37, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, var uParam2, struct<13> Param3, var uParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (func_46())
		{
			func_45(uParam2);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (!unk_0x02BFF15CAA701972())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x9B050CE2036A4DAD(&Param3))
		{
			func_45(uParam2);
			return 0;
		}
		if (Global_19741)
		{
			func_45(uParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (!func_41(unk_0x1146A9AE09CE2B14()))
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (unk_0xAB6A270F84A8781E(&Param1))
	{
		func_45(uParam2);
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(&Param0))
	{
		func_45(uParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != -1)
	{
		func_37(iVar3);
	}
	uVar4 = unk_0xF27915DA30087A9F(uParam2);
	iVar5 = unk_0xBF142393960F568B(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2395292[iVar6 /*4*/].f_3 && unk_0xDFB7BFA6482FEE1E() < Global_2395292[iVar6 /*4*/].f_2)
		{
			Global_2395292[iVar6 /*4*/].f_2 = unk_0xDFB7BFA6482FEE1E() + 30000;
			iVar6 = 12;
			func_45(uParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	func_36(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0) };
		Var13 = { func_29(&Var7) };
		iVar15 = 1;
		iVar14 = func_28(&Var7, 0);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_17(unk_0x1146A9AE09CE2B14(), Param3))
		{
			if (!unk_0x02BFF15CAA701972())
			{
				bVar23 = true;
			}
			else
			{
				func_45(uParam2);
				func_15(0);
				return 0;
			}
		}
		if (!unk_0x2322DD4FBF5E4E2F())
		{
			if (!bVar23)
			{
				if (func_13(unk_0x1146A9AE09CE2B14(), Param3))
				{
					func_45(uParam2);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam2);
			bVar24 = true;
			func_15(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_45(uParam2);
				func_15(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_1390206;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2392991[iVar26 /*99*/] = { Global_2392991[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1390206++;
	if (Global_1390206 > 12)
	{
		Global_1390206 = 12;
	}
	iVar28 = 0;
	Global_2392991[iVar28 /*99*/] = 0;
	Global_2392991[iVar28 /*99*/].f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_5 = 0;
	Global_2392991[iVar28 /*99*/].f_2 = iVar16;
	Global_2392991[iVar28 /*99*/].f_3 = 0;
	Global_2392991[iVar28 /*99*/].f_4 = iVar17;
	Global_2392991[iVar28 /*99*/].f_6 = { Param0 };
	Global_2392991[iVar28 /*99*/].f_12 = uVar20;
	Global_2392991[iVar28 /*99*/].f_13 = uVar21;
	Global_2392991[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2392991[iVar28 /*99*/].f_31), "", 64);
	Global_2392991[iVar28 /*99*/].f_49 = iVar10;
	Global_2392991[iVar28 /*99*/].f_50 = iVar8;
	Global_2392991[iVar28 /*99*/].f_51 = iVar9;
	Global_2392991[iVar28 /*99*/].f_91 = uParam2;
	Global_2392991[iVar28 /*99*/].f_57 = { Var12 };
	Global_2392991[iVar28 /*99*/].f_73 = { Var13 };
	Global_2392991[iVar28 /*99*/].f_52 = iVar14;
	Global_2392991[iVar28 /*99*/].f_53 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2392991[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2392991[iVar28 /*99*/].f_56 = iVar15;
	Global_2392991[iVar28 /*99*/].f_90 = uParam4;
	Global_2392991[iVar28 /*99*/].f_92 = -1;
	Global_2392991[iVar28 /*99*/].f_93 = iVar18;
	Global_2392991[iVar28 /*99*/].f_94 = Global_2395344;
	Global_2392991[iVar28 /*99*/].f_95 = iVar19;
	Global_2392991[iVar28 /*99*/].f_98 = unk_0x9B050CE2036A4DAD(&Param3);
	if (Global_2392991[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2392991[iVar28 /*99*/].f_51 == 1)
		{
			Global_2392991[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2392991[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2392991[iVar28 /*99*/].f_97 = 0;
	Global_2392991[iVar28 /*99*/].f_89 = iParam5;
	Global_2395344++;
	Global_2392991[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2392991[iVar28 /*99*/].f_47 != -1)
	{
		Global_2392991[iVar28 /*99*/].f_48 = unk_0xDFB7BFA6482FEE1E() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0x2322DD4FBF5E4E2F())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0x4AA9B591F7C133EB(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x9B050CE2036A4DAD(&uParam0))
	{
		return 0;
	}
	if (Global_2392991[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0x2322DD4FBF5E4E2F())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x1146A9AE09CE2B14()) };
	if (!bParam14 && !unk_0x65436E51C985931E(&Var0, &uParam0))
	{
		if (!unk_0x9B050CE2036A4DAD(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0xDC39E4D9D73B0D14() || (unk_0xE22116C6D321FECA() && iParam0 == 0))
	{
		if (unk_0x68B90AB279E39C7B(1) == 0 || unk_0xA40947BF4C26445B(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x68B90AB279E39C7B(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xDC39E4D9D73B0D14() && unk_0xAE06D39287DB2B6A())
	{
		return 1;
	}
	if (unk_0x60FF5ED57C36A351() && unk_0xAE06D39287DB2B6A())
	{
		return 1;
	}
	if ((unk_0xE22116C6D321FECA() && unk_0xF54628B8295E0CFD() == 0) && unk_0xAE06D39287DB2B6A())
	{
		return 1;
	}
	if (unk_0x2322DD4FBF5E4E2F() && unk_0xAE06D39287DB2B6A())
	{
		return 1;
	}
	if (unk_0x3640D836D145B814() && unk_0xAE06D39287DB2B6A())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0xDC39E4D9D73B0D14() || (unk_0xE22116C6D321FECA() && iParam0 == 0))
	{
		if (unk_0x68B90AB279E39C7B(0) == 0 || unk_0xA40947BF4C26445B(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x68B90AB279E39C7B(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()
{
	if (!unk_0x60FF5ED57C36A351())
	{
		return 1;
	}
	return unk_0xAE06D39287DB2B6A();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0x2322DD4FBF5E4E2F())
		{
			if (unk_0x94D4A49E53F5209A(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0x68B90AB279E39C7B(0))
		{
			if (!unk_0x68B90AB279E39C7B(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0x60FF5ED57C36A351())
		{
			return;
		}
	}
	if (unk_0x2322DD4FBF5E4E2F())
	{
		return;
	}
	iVar0 = unk_0xDFB7BFA6482FEE1E();
	if (iVar0 < Global_2395341)
	{
		return;
	}
	if (unk_0xE8FFE38E2BA32BD6())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2395341 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0x2322DD4FBF5E4E2F())
		{
			if (unk_0x94D4A49E53F5209A(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x37612007604356A6() == 0)
	{
		return 0;
	}
	if (unk_0xDC39E4D9D73B0D14())
	{
		if (unk_0xA40947BF4C26445B(1, -1))
		{
			if (unk_0xAE06D39287DB2B6A())
			{
				return 1;
			}
		}
	}
	if (unk_0xE22116C6D321FECA())
	{
		if (unk_0x68B90AB279E39C7B(1))
		{
			if (unk_0xAE06D39287DB2B6A())
			{
				return 1;
			}
		}
	}
	if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
	{
		if (unk_0x68E0E843A17D2933(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xA40947BF4C26445B(0, -1))
		{
			if (unk_0xAE06D39287DB2B6A())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0x234B68AC2E35ED5A(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0x234B68AC2E35ED5A(Global_2398103.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x234B68AC2E35ED5A(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return unk_0x234B68AC2E35ED5A(Global_917806.f_604[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0xAB6A270F84A8781E(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x234B68AC2E35ED5A(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xDA654EB115F9FF7D(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0x234B68AC2E35ED5A(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xDA654EB115F9FF7D(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x234B68AC2E35ED5A(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xDA654EB115F9FF7D(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x234B68AC2E35ED5A(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0x234B68AC2E35ED5A(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xDA654EB115F9FF7D(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		if (unk_0x234B68AC2E35ED5A(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x234B68AC2E35ED5A(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xDA654EB115F9FF7D(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0xDA654EB115F9FF7D(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return iParam0 == 9999;
}

int func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0xDA654EB115F9FF7D(&(Global_2395346.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_2395346.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_20(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0x234B68AC2E35ED5A(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0x234B68AC2E35ED5A(Global_2398103.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x234B68AC2E35ED5A(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return unk_0x234B68AC2E35ED5A(Global_917806.f_604[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0x234B68AC2E35ED5A(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_28;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_38;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0x234B68AC2E35ED5A(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237[uParam0->f_9 /*16*/];
			}
			return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_22;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_917806.f_604[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1146A9AE09CE2B14())
	{
		return Global_939452.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_22(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 281;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_917806.f_604[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return Global_939452.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 281;
	}
	return 281;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x234B68AC2E35ED5A(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (unk_0x234B68AC2E35ED5A(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_917806.f_604[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_917806.f_604[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0x234B68AC2E35ED5A(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0xDA654EB115F9FF7D(&(Global_939452.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_939452.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x1146A9AE09CE2B14();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 159;
		
		case 14:
			return 160;
		
		case 122:
			return 164;
		
		case 11:
			return 161;
		
		case 13:
			return 162;
		
		case 12:
			return 163;
		
		case 8:
			return 166;
		
		case 1:
			return 167;
		
		case 5:
			return 165;
		
		case 6:
			return 168;
		
		case 3:
			return 171;
		
		case 0:
			return 169;
		
		case 2:
			return 170;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 150:
			return 127;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		case 256:
			return 130;
		
		case 258:
			return 131;
		
		case 259:
			return 133;
		
		case 271:
			return 134;
		
		case 273:
			return 135;
		
		case 276:
			return 136;
		
		case 277:
			return 137;
		
		case 269:
			return 138;
		
		case 270:
			return 139;
		
		case 275:
			return 140;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0xAB6A270F84A8781E(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0xCF7E9D7EE2349689(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0x435E59191DAA3ED5(sParam0, 0, 5), 8);
	if (!unk_0xDA654EB115F9FF7D(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0x435E59191DAA3ED5(sParam0, 5, 12), 16);
	if (unk_0xDA654EB115F9FF7D(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0xDA654EB115F9FF7D(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0xDA654EB115F9FF7D(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0xDA654EB115F9FF7D(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0xDA654EB115F9FF7D(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0xDA654EB115F9FF7D(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0x435E59191DAA3ED5(sParam0, 12, iVar0), 8);
	if (!unk_0xB733B49B5DF09CE3(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1390206)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0xDFB7BFA6482FEE1E() > Global_2395292[iVar0 /*4*/].f_2 || Global_2395292[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0x399FE7DFD14716CA() > 0 && Global_2392991[iParam0 /*99*/].f_91 < unk_0x399FE7DFD14716CA())
			{
				Global_2395292[iVar0 /*4*/].f_3 = unk_0xBF142393960F568B(Global_2392991[iParam0 /*99*/].f_91);
				Global_2395292[iVar0 /*4*/].f_2 = unk_0xDFB7BFA6482FEE1E() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392991[iParam0 /*99*/].f_92 != -1)
	{
		unk_0xAE77D1668DA754A8(Global_2392991[iParam0 /*99*/].f_92);
	}
	if (!Global_2392991[iParam0 /*99*/].f_56)
	{
		if (Global_2392991[iParam0 /*99*/].f_52 != 0)
		{
			unk_0xA94E048BE46D64B3(Global_2392991[iParam0 /*99*/].f_52);
		}
	}
	func_45(Global_2392991[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1390206)
	{
		Global_2392991[iVar1 /*99*/] = { Global_2392991[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1390206 = (Global_1390206 - 1);
	if (Global_1390179)
	{
		if (Global_1390177 > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_1390179 = 0;
}

void func_39(int iParam0)
{
	Global_2392991[iParam0 /*99*/] = 0;
	Global_2392991[iParam0 /*99*/].f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_31), "", 64);
	Global_2392991[iParam0 /*99*/].f_47 = -1;
	Global_2392991[iParam0 /*99*/].f_48 = unk_0xDFB7BFA6482FEE1E();
	Global_2392991[iParam0 /*99*/].f_49 = -1;
	Global_2392991[iParam0 /*99*/].f_50 = -1;
	Global_2392991[iParam0 /*99*/].f_51 = -1;
	Global_2392991[iParam0 /*99*/].f_52 = 0;
	Global_2392991[iParam0 /*99*/].f_53 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2392991[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_73), "", 64);
	Global_2392991[iParam0 /*99*/].f_89 = 0;
	Global_2392991[iParam0 /*99*/].f_90 = 0;
	Global_2392991[iParam0 /*99*/].f_91 = -1;
	Global_2392991[iParam0 /*99*/].f_92 = -1;
	Global_2392991[iParam0 /*99*/].f_93 = 0;
	Global_2392991[iParam0 /*99*/].f_94 = -1;
	Global_2392991[iParam0 /*99*/].f_95 = 0;
	Global_2392991[iParam0 /*99*/].f_96 = 0;
	Global_2392991[iParam0 /*99*/].f_97 = 0;
	Global_2392991[iParam0 /*99*/].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1390206)
	{
		if (unk_0xDA654EB115F9FF7D(&uParam0, &(Global_2392991[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_139, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_43()
{
	if (Global_112293.f_9083.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_139, 2);
}

void func_45(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF27915DA30087A9F(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0x399FE7DFD14716CA())
	{
		return;
	}
	if (unk_0x3A27345E11FEC62C(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_1312861 == 10;
}

int func_47()
{
	if (!Global_77248)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1312763;
}

bool func_52()
{
	return Global_1312890;
}

bool func_53()
{
	return Global_1312892;
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1312882[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_111();
	if (func_110(1))
	{
		if (!func_99())
		{
			if (!func_88(1))
			{
				if (unk_0xE45310E861787FC2())
				{
					func_87();
				}
				func_58(1, 0);
				unk_0x343B9F9115ED2C30(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_1669483.f_7 = 1;
}

void func_57()
{
	Global_1669483.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_110(iParam0))
	{
		Global_1669483.f_16[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1669483 = 1;
		}
	}
}

void func_59()
{
	Global_1669483.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0xE45310E861787FC2())
	{
		if (bParam1)
		{
			func_86();
			func_72(unk_0x1146A9AE09CE2B14(), 0, 81920, 0);
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_95 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)
{
	StringCopy(&(Global_2453009.f_859), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_959568.f_42), sParam0, 24);
	}
}

bool func_62()
{
	return unk_0x234B68AC2E35ED5A(Global_2453903.f_1.f_2809, 5);
}

void func_63(int iParam0)
{
	Global_1669483.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)
{
	return Global_1669483.f_16[iParam0 /*44*/].f_6;
}

void func_65()
{
	Global_2453009.f_9 = 100;
}

void func_66()
{
	unk_0x191DDA30577F440A(&Global_2453009, 5);
	func_67();
}

void func_67()
{
	unk_0x191DDA30577F440A(&Global_2453009, 8);
}

void func_68(var uParam0)
{
	Global_1669483.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_1669483.f_9 = uParam0;
}

void func_70()
{
	Global_2461742.f_1 = 0;
}

void func_71()
{
	char* sVar0;
	
	StringCopy(&(Global_2453009.f_859), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xFDC069EFB77AEBE9())
		{
			unk_0xA82C5CF50055A1B4(0);
		}
	}
	if (func_85())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x02BFF15CAA701972())
	{
		uVar0 = iParam2;
		unk_0xF99B8860747709DD(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xE45310E861787FC2())
		{
			bVar1 = false;
		}
		if (!func_83())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x8CFC2F41A749E236(iParam0) && (unk_0xCAD1755E530A6012(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xD56332194D622ECE(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x02BFF15CAA701972())
				{
					unk_0x387A0B2797EBDE5F(1);
				}
				else if (bVar14 || (!func_81(unk_0x1146A9AE09CE2B14(), 0) && !func_80()))
				{
					unk_0x4603196EEEA2355C(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x02BFF15CAA701972() && !bVar19)
					{
						unk_0x387A0B2797EBDE5F(0);
					}
					Global_2426865[iParam0 /*449*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_77(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_76(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(uVar27, true, 0);
					}
				}
				if (!unk_0x5976053523EA16C8(uVar27))
				{
					if (!bVar21)
					{
						unk_0xA2C015B68CE01357(uVar27, false);
					}
					unk_0x8B58E7AC53EED9F1(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0xA2C015B68CE01357(uVar27, false);
				}
				unk_0x1D7A4E9E23D306D6(uVar27, true);
				unk_0x03903A362E41A74F(iParam0, 0);
				unk_0x480217AACC9C34FB(iParam0, 0);
				if (unk_0x313CC23B5525839F(uVar27) && unk_0x9038A2103B9BFD38(uVar27))
				{
					unk_0x9C4430B10B361917(uVar27);
				}
				unk_0xF5143FB7B9EC876D(uVar27, 1);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
				{
					func_75();
					func_74();
				}
				if (unk_0x7A4185C9A76C12B2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xCE84F8AB9BD41C13())
				{
				}
				Global_2426865[iParam0 /*449*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405077.f_2679)
				{
					Global_2405077.f_2679 = 0;
				}
			}
			else
			{
				if (!func_76(uVar27) && !unk_0x0D5E478A215B3F4A(uVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(uVar27, !bVar15, 0);
					}
					if (!unk_0x5976053523EA16C8(uVar27))
					{
						if (!bVar21)
						{
							unk_0xA2C015B68CE01357(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x8B58E7AC53EED9F1(uVar27, 1);
						}
					}
					if (func_73(Global_4456448.f_133963))
					{
						unk_0xA2C015B68CE01357(uVar27, true);
					}
				}
				if (Global_1312878)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x03903A362E41A74F(iParam0, 0);
				}
				else
				{
					unk_0x03903A362E41A74F(iParam0, 1);
				}
				unk_0x1D7A4E9E23D306D6(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x02E166B5C96465D2(uVar27) && !unk_0xC49311A2A500FF09(uVar27, 0))
					{
						unk_0x16D66F11FE644901(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xF99B8860747709DD(iParam0, bParam1, iVar28);
		}
	}
}

bool func_73(int iParam0)
{
	return iParam0 == 17;
}

void func_74()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_75()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_76(var uParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x4E8DA737B686529A(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0x72D30262CF8C8603(iParam1))
			{
				if (!unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), unk_0xCB567ED25393C1DF(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_79();
			}
			else if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 1))
			{
				if (unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0xA01D7927903507FB(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x191DDA30577F440A(&(Global_2359302.f_67), 1);
			}
		}
		if (func_81(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_78(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_79()
{
	int iVar0;
	
	if (!unk_0xDD14CDB3B8003696())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x5F95E51ABC3FC59A(iVar0);
				iVar0++;
			}
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 2);
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_80()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

bool func_81(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_82(-1, 0) == 8;
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

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_83()
{
	if (func_84() == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	return Global_1312485.f_18;
}

int func_85()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_86()
{
	unk_0x191DDA30577F440A(&Global_2453009, 7);
}

void func_87()
{
	unk_0x191DDA30577F440A(&(Global_2453009.f_2), 15);
}

int func_88(int iParam0)
{
	if (iParam0 || func_98())
	{
		if (!func_90(1))
		{
			return 1;
		}
		if (!func_89())
		{
			return 1;
		}
		if (unk_0x3CEB66EC8A34CB10())
		{
			return 1;
		}
	}
	return 0;
}

bool func_89()
{
	return Global_1669483.f_4;
}

int func_90(bool bParam0)
{
	if (!func_95())
	{
		return 0;
	}
	if ((func_93(func_94(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_92();
		return 1;
	}
	else if (bParam0)
	{
		func_91();
	}
	return 0;
}

void func_91()
{
	Global_1669483.f_5 = 1;
}

void func_92()
{
	Global_1669483.f_4 = 1;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_94(int iParam0)
{
	return Global_1390527[func_50(iParam0)];
}

int func_95()
{
	if (func_97() && func_96(0))
	{
		return 1;
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_97()
{
	return func_96(func_51() + 1);
}

var func_98()
{
	return Global_1669483.f_2;
}

int func_99()
{
	if (((((func_109() || !func_107(-1)) || !func_105()) || !func_102()) || !func_101()) || func_100())
	{
		return 1;
	}
	return 0;
}

var func_100()
{
	return Global_2463510;
}

int func_101()
{
	if (unk_0xC82CD1DB42480082(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	int iVar0;
	
	if (func_103(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_103(var uParam0)
{
	if (func_104())
	{
		*uParam0 = 10;
		return 1;
	}
	return unk_0x84B16C7901B604D0(uParam0);
}

bool func_104()
{
	return Global_31622;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_106(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_108(iParam0);
	uVar1 = unk_0xC82CD1DB42480082(uVar0);
	if (unk_0x234B68AC2E35ED5A(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_109()
{
	return Global_2453009.f_743;
}

bool func_110(int iParam0)
{
	return Global_1669483.f_16[iParam0 /*44*/].f_4;
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	func_117();
	if (unk_0x5829ED84C6884229() && !func_114())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0x145AC4C26461DAE7(func_113(iVar0));
			if (iVar1 > 0)
			{
				Global_1669483.f_16[iVar0 /*44*/] = iVar1;
				func_112(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1669483.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_112(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x7D8470C9351FF6CF(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1669483.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x7D8470C9351FF6CF(iParam1, "playlist", &Var1))
	{
		Global_1669483.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x884CBAFF30A27EBB(iParam1, &Var1))
	{
		Global_1669483.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0xDEAB473B761FA4B2(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1669483.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1669483.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1669483.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0xDEAB473B761FA4B2(iParam1, "eventSubType", &uVar2))
		{
			Global_1669483.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1669483.f_1 = 1;
		}
		Global_1669483.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1669483.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_114()
{
	if (!func_115())
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	if (func_116())
	{
		return 0;
	}
	if (unk_0x6280556FDB0D083D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_116()
{
	return Global_2464001;
}

void func_117()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1669483 = { Var0 };
}

void func_118(int iParam0)
{
	var uVar0;
	
	if (Global_77248)
	{
		unk_0x9B0169E27978C1A2(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x9B0169E27978C1A2(-1, "Hang_Up", &Global_19787, 1);
	}
	if (unk_0x53858F1E03A88AE1(1, iParam0, &uVar0, 21))
	{
		func_120();
	}
	Global_2550920.f_1 = 0;
	Global_2550920.f_33 = -1;
	Global_2550920.f_34 = -1;
	StringCopy(&(Global_2550920.f_4), "", 64);
	func_119(&(Global_2550920.f_20));
}

void func_119(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_120()
{
	Global_2550920.f_2 = 1;
	Global_2550920.f_38 = 1;
	if (unk_0x0B4295B1608BB934())
	{
		if (unk_0x0AC576C57F4675DF())
		{
			while (unk_0xAD2A40A210A89D47())
			{
				wait(0);
			}
			unk_0x158BE4DA604B8CE3();
			Global_2550920 = 0;
			Global_2550920.f_2 = 0;
		}
		else if (func_128(Global_2550920.f_20))
		{
			if (unk_0x9B050CE2036A4DAD(&(Global_2550920.f_20)))
			{
				if (!unk_0x6B8C9C1D64326EAE(&(Global_2550920.f_20)))
				{
					func_127();
				}
			}
		}
		else
		{
			func_127();
		}
	}
	else
	{
		func_127();
	}
	if (Global_2550920.f_37)
	{
		func_121(0);
	}
	Global_2550920.f_37 = 0;
	Global_2550920.f_3 = 0;
}

void func_121(int iParam0)
{
	if (func_126())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_125())
		{
			func_123(1, 1);
		}
		else
		{
			func_123(0, 0);
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
	if (!func_122())
	{
		Global_19798.f_1 = 3;
	}
}

int func_122()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_124(0))
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

int func_124(int iParam0)
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

bool func_125()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_126()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_127()
{
	Global_2550920.f_1 = 0;
	Global_2550920 = 0;
	Global_2550920.f_2 = 0;
	Global_2550920.f_33 = -1;
	Global_2550920.f_34 = -1;
	StringCopy(&(Global_2550920.f_4), "", 64);
	StringCopy(&(Global_2550920.f_39[0 /*16*/]), "", 64);
	Global_2550920.f_38 = 0;
	Global_2550920.f_56 = 0;
	Global_2550920.f_57 = 0;
	Global_2550920.f_58 = -2;
	Global_2550920.f_3 = 0;
	func_119(&(Global_2550920.f_20));
}

bool func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

void func_129(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 15))
	{
		Global_2550920.f_33 = Var0.f_1;
		Global_2550920.f_34 = Var0;
	}
}

void func_130(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x53858F1E03A88AE1(1, iParam0, &Var0, 21))
	{
		if (Global_2550920.f_3 == 0)
		{
			if (!func_131(&(Var0.f_8)))
			{
				unk_0x857B3D3645392E1F(0, 2);
			}
			else
			{
				Global_2550920.f_3 = 1;
				MemCopy(&(Global_2550920.f_4), {Var0}, 16);
				Global_2550920.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2550920.f_39[0 /*16*/]), "", 64);
				Global_2550920.f_58 = -2;
				Global_2550920.f_56 = 0;
				Global_2550920.f_57 = 0;
			}
		}
		else if (!func_131(&(Var0.f_8)))
		{
			unk_0x857B3D3645392E1F(0, 2);
		}
		else
		{
			Global_2550920.f_3 = 1;
			MemCopy(&(Global_2550920.f_4), {Var0}, 16);
			Global_2550920.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2550920.f_39[0 /*16*/]), "", 64);
			Global_2550920.f_58 = -2;
			Global_2550920.f_56 = 0;
			Global_2550920.f_57 = 0;
		}
	}
}

int func_131(var uParam0)
{
	if (Global_77248)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_135(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0x36F15E322F9C149E(unk_0x7D2B9E6A64637269()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x6280556FDB0D083D() == 0)
	{
		return 0;
	}
	if (Global_2550920.f_1)
	{
	}
	if (Global_19992 == 1)
	{
		return 0;
	}
	if (Global_1574447)
	{
		return 0;
	}
	if (Global_2550920.f_36)
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	if (((Global_42009 != 6 && Global_42009 != 8) && Global_42009 != 12) && Global_42009 != 15)
	{
		return 0;
	}
	if (func_134() && !func_133(12))
	{
		return 0;
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		return 0;
	}
	if (unk_0x43DDCE9C73E22D9D())
	{
		return 0;
	}
	if (!func_132(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (Global_77508)
	{
		return 0;
	}
	if (unk_0x40C925D4A6D691FB())
	{
		if (!unk_0xD9203CBCEC2C0A1B(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (!unk_0x0B4295B1608BB934())
	{
		return 0;
	}
	if (unk_0x9FA24EA712B9DC35(uParam0) || unk_0x19CE48398ED0AA35(uParam0))
	{
		return 0;
	}
	if (unk_0xAA95EF44AC54CFF9(uParam0) || unk_0x6692B50177E3C4B8(uParam0))
	{
		return 0;
	}
	if (unk_0xC72A027F63D1F5DE())
	{
		if (unk_0x2322DD4FBF5E4E2F())
		{
			if (unk_0x932557B3260F13C4())
			{
				return 0;
			}
		}
		else if (unk_0xE22116C6D321FECA())
		{
			return 0;
		}
	}
	return 1;
}

int func_132(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x37612007604356A6() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x1146A9AE09CE2B14())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
	{
		if (unk_0xA40947BF4C26445B(0, iVar0))
		{
			if (unk_0xAE06D39287DB2B6A())
			{
				return 1;
			}
		}
	}
	if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			if (unk_0x2999FF4884D79BD0(0, -3, 1) || unk_0xA40947BF4C26445B(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0xA40947BF4C26445B(0, -1) || (unk_0xA40947BF4C26445B(1, -1) && unk_0x9B050CE2036A4DAD(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xA40947BF4C26445B(0, iVar0))
		{
			if (unk_0xAE06D39287DB2B6A())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_133(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_134()
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(uParam0))
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

void func_136()
{
	func_127();
}

void func_137()
{
	Global_2550920.f_1 = 1;
	Global_2550920.f_33 = -1;
	Global_2550920.f_34 = -1;
	if (unk_0xDAE4BC89A198A6AF(Global_19779) == 1)
	{
		if (Global_19786)
		{
			func_138(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_19741)
			{
				func_138(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_138(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_138(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_139(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(iParam8))
	{
		func_139(iParam8);
	}
	if (!unk_0xAB6A270F84A8781E(iParam9))
	{
		func_139(iParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_139(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_139(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_139(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

void func_140()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_54349 = 0;
		Global_54349.f_12 = 0;
		Global_54349.f_24 = 0;
		Global_54349.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_54349.f_1[iVar0] = 0;
			Global_54349.f_13[iVar0] = 0;
			Global_54349.f_25[iVar0] = 0;
			Global_54349.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

