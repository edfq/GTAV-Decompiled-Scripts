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
	if (unk_0x4B34601C5C56F3EE(34))
	{
		unk_0xAFBDF6A5E54114C1();
	}
	while (true)
	{
		wait(0);
		func_141();
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
	if (unk_0xC65B603E7942D0DB())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x9418088815C89D59(1))
		{
			iVar7 = unk_0xB1D84E0EF6979085(1, iVar2);
			switch (iVar7)
			{
				case 192:
					func_138();
					break;
				
				case 193:
					func_137();
					break;
				
				case 194:
					func_131(iVar2);
					break;
				
				case 195:
					func_130(iVar2);
					break;
				
				case 196:
					func_119(iVar2);
					break;
				
				case 214:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x9418088815C89D59(0))
	{
		iVar0 = unk_0xB1D84E0EF6979085(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				unk_0x92039F20B184AB4D(0, iVar2, &uVar1, 1);
				if (unk_0xE5965CDF24F93A9F(uVar1))
				{
					if (unk_0x04D9F44466CBF3CA(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_54941.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0x9044EDB8A7BF67B4(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_54941.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				unk_0x92039F20B184AB4D(0, iVar2, &uVar1, 1);
				if (unk_0xE5965CDF24F93A9F(uVar1))
				{
					if (unk_0x04D9F44466CBF3CA(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_54941.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0x9044EDB8A7BF67B4(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_54941.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_54941 = iVar3;
	Global_54941.f_12 = iVar4;
	Global_54941.f_24 = iVar5;
	Global_54941.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0xB5EDCDA1860870A0(Var0.f_38);
		if (iVar1 >= 0 && iVar1 < unk_0x46D4F0814B2A2202())
		{
			if (unk_0x00ACF7948F0868E0(iVar1) || unk_0x052E8467AC4FE90E(iVar1))
			{
				if (unk_0x052E8467AC4FE90E(iVar1))
				{
					func_56(iVar1);
				}
				else
				{
					unk_0xF7C55939E655699D(iVar1);
				}
				func_55(Var0.f_37, -1);
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
	if (unk_0x9315DBF7D972F07A())
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
	if (!unk_0x9315DBF7D972F07A())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x106C9EE9D83F20DF(&Param3))
		{
			func_45(uParam2);
			return 0;
		}
		if (Global_19897)
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
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_41(unk_0x9E2D6C50374FCFA9()))
		{
			func_45(uParam2);
			return 0;
		}
	}
	if (unk_0xACC32B78196FBC2A(&Param1))
	{
		func_45(uParam2);
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(&Param0))
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
	uVar4 = unk_0xB5EDCDA1860870A0(uParam2);
	iVar5 = unk_0x8D67B99A0E382905(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_2657436[iVar6 /*4*/].f_3 && unk_0x320D1840B6DAA1CC() < Global_2657436[iVar6 /*4*/].f_2)
		{
			Global_2657436[iVar6 /*4*/].f_2 = unk_0x320D1840B6DAA1CC() + 30000;
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
		if (func_17(unk_0x9E2D6C50374FCFA9(), Param3))
		{
			if (!unk_0x9315DBF7D972F07A())
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
		if (!unk_0x3EBD3AF4E5D7A08C())
		{
			if (!bVar23)
			{
				if (func_13(unk_0x9E2D6C50374FCFA9(), Param3))
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
	iVar26 = Global_1655307;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_2655135[iVar26 /*99*/] = { Global_2655135[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_1655307++;
	if (Global_1655307 > 12)
	{
		Global_1655307 = 12;
	}
	iVar28 = 0;
	Global_2655135[iVar28 /*99*/] = 0;
	Global_2655135[iVar28 /*99*/].f_1 = 0;
	Global_2655135[iVar28 /*99*/].f_5 = 0;
	Global_2655135[iVar28 /*99*/].f_2 = iVar16;
	Global_2655135[iVar28 /*99*/].f_3 = 0;
	Global_2655135[iVar28 /*99*/].f_4 = iVar17;
	Global_2655135[iVar28 /*99*/].f_6 = { Param0 };
	Global_2655135[iVar28 /*99*/].f_12 = uVar20;
	Global_2655135[iVar28 /*99*/].f_13 = uVar21;
	Global_2655135[iVar28 /*99*/].f_15 = { Param1 };
	StringCopy(&(Global_2655135[iVar28 /*99*/].f_31), "", 64);
	Global_2655135[iVar28 /*99*/].f_49 = iVar10;
	Global_2655135[iVar28 /*99*/].f_50 = iVar8;
	Global_2655135[iVar28 /*99*/].f_51 = iVar9;
	Global_2655135[iVar28 /*99*/].f_91 = uParam2;
	Global_2655135[iVar28 /*99*/].f_57 = { Var12 };
	Global_2655135[iVar28 /*99*/].f_73 = { Var13 };
	Global_2655135[iVar28 /*99*/].f_52 = iVar14;
	Global_2655135[iVar28 /*99*/].f_53 = 0;
	Global_2655135[iVar28 /*99*/].f_53.f_1 = 0;
	Global_2655135[iVar28 /*99*/].f_53.f_2 = 0;
	Global_2655135[iVar28 /*99*/].f_56 = iVar15;
	Global_2655135[iVar28 /*99*/].f_90 = uParam4;
	Global_2655135[iVar28 /*99*/].f_92 = -1;
	Global_2655135[iVar28 /*99*/].f_93 = iVar18;
	Global_2655135[iVar28 /*99*/].f_94 = Global_2657488;
	Global_2655135[iVar28 /*99*/].f_95 = iVar19;
	Global_2655135[iVar28 /*99*/].f_98 = unk_0x106C9EE9D83F20DF(&Param3);
	if (Global_2655135[iVar28 /*99*/].f_50 == 0)
	{
		if (Global_2655135[iVar28 /*99*/].f_51 == 1)
		{
			Global_2655135[iVar28 /*99*/].f_56 = 0;
		}
	}
	Global_2655135[iVar28 /*99*/].f_96 = func_6(Param3, iVar28);
	Global_2655135[iVar28 /*99*/].f_97 = 0;
	Global_2655135[iVar28 /*99*/].f_89 = iParam5;
	Global_2657488++;
	Global_2655135[iVar28 /*99*/].f_47 = func_5(Param3);
	if (Global_2655135[iVar28 /*99*/].f_47 != -1)
	{
		Global_2655135[iVar28 /*99*/].f_48 = unk_0x320D1840B6DAA1CC() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0x3EBD3AF4E5D7A08C())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0x750877EFC42C7771(&Var0, 1);
	if (iVar1 < 0)
	{
		return -1;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x106C9EE9D83F20DF(&uParam0))
	{
		return 0;
	}
	if (Global_2655135[iParam13 /*99*/].f_90 > 0)
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
	if (unk_0x3EBD3AF4E5D7A08C())
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
	Var0 = { func_8(unk_0x9E2D6C50374FCFA9()) };
	if (!bParam14 && !unk_0x3665714316BA3ABC(&Var0, &uParam0))
	{
		if (!unk_0x106C9EE9D83F20DF(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0x527312C0DF85960A() || (unk_0xA7384DAD7CF469DA() && iParam0 == 0))
	{
		if (unk_0x818F829545200020(1) == 0 || unk_0x1A1B1F5DC3F2D868(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x818F829545200020(1) == 0)
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
	if (unk_0x527312C0DF85960A() && unk_0x17C7C36F1FCE1AC2())
	{
		return 1;
	}
	if (unk_0xDFC67688F9088B45() && unk_0x17C7C36F1FCE1AC2())
	{
		return 1;
	}
	if ((unk_0xA7384DAD7CF469DA() && unk_0x74A0CF38086BFA4D() == 0) && unk_0x17C7C36F1FCE1AC2())
	{
		return 1;
	}
	if (unk_0x3EBD3AF4E5D7A08C() && unk_0x17C7C36F1FCE1AC2())
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601() && unk_0x17C7C36F1FCE1AC2())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0x527312C0DF85960A() || (unk_0xA7384DAD7CF469DA() && iParam0 == 0))
	{
		if (unk_0x818F829545200020(0) == 0 || unk_0x1A1B1F5DC3F2D868(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x818F829545200020(0) == 0)
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
	if (!unk_0xDFC67688F9088B45())
	{
		return 1;
	}
	return unk_0x17C7C36F1FCE1AC2();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (unk_0x3984FBEFE07835D4(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0x818F829545200020(0))
		{
			if (!unk_0x818F829545200020(1))
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
		if (!unk_0xDFC67688F9088B45())
		{
			return;
		}
	}
	if (unk_0x3EBD3AF4E5D7A08C())
	{
		return;
	}
	iVar0 = unk_0x320D1840B6DAA1CC();
	if (iVar0 < Global_2657485)
	{
		return;
	}
	if (unk_0xF847447D4467709D())
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
	Global_2657485 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (unk_0x3984FBEFE07835D4(&uParam1))
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
	if (unk_0xF1AB1E47A12AA2E6() == 0)
	{
		return 0;
	}
	if (unk_0x527312C0DF85960A())
	{
		if (unk_0x1A1B1F5DC3F2D868(1, -1))
		{
			if (unk_0x17C7C36F1FCE1AC2())
			{
				return 1;
			}
		}
	}
	if (unk_0xA7384DAD7CF469DA())
	{
		if (unk_0x818F829545200020(1))
		{
			if (unk_0x17C7C36F1FCE1AC2())
			{
				return 1;
			}
		}
	}
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		if (unk_0x3EE42535A14BA719(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x1A1B1F5DC3F2D868(0, -1))
		{
			if (unk_0x17C7C36F1FCE1AC2())
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
		return unk_0xE2D0C323A1AE5D85(Global_2657490.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xE2D0C323A1AE5D85(Global_2660247.f_1.f_63, 14);
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
			return unk_0xE2D0C323A1AE5D85(Global_794709.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return unk_0xE2D0C323A1AE5D85(Global_998606.f_604[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9E2D6C50374FCFA9())
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
	
	if (unk_0xACC32B78196FBC2A(&(uParam0->f_3)))
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
			if (unk_0xE2D0C323A1AE5D85(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x3C57C2F07FEE34D2(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x3C57C2F07FEE34D2(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xE2D0C323A1AE5D85(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x3C57C2F07FEE34D2(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xE2D0C323A1AE5D85(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x3C57C2F07FEE34D2(&(Global_998606.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x9E2D6C50374FCFA9())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x3C57C2F07FEE34D2(&(Global_1020252.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x3C57C2F07FEE34D2(&(Global_1020252.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (Global_2660247)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_2660247.f_1), &(uParam0->f_3)))
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
	if (!Global_2657490.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x3C57C2F07FEE34D2(&(Global_2657490.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_2657490.f_356[iVar0 /*75*/].f_5, 3))
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
			return Global_794709.f_177589[iVar1 /*13*/];
		
		case 62:
			return Global_998606.f_9405[iVar1 /*13*/];
		
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
		return unk_0xE2D0C323A1AE5D85(Global_2657490.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xE2D0C323A1AE5D85(Global_2660247.f_1.f_63, 17);
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
			return unk_0xE2D0C323A1AE5D85(Global_794709.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return unk_0xE2D0C323A1AE5D85(Global_998606.f_604[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9E2D6C50374FCFA9())
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
			if (unk_0xE2D0C323A1AE5D85(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2660381.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2660247.f_1.f_54;
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
			return Global_998606.f_604[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_54;
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
		return Global_2657490.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2660247.f_1.f_28;
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
			return Global_998606.f_604[iVar1 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_38;
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
			if (unk_0xE2D0C323A1AE5D85(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2660381[uParam0->f_9 /*16*/];
			}
			return Global_2657490.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2660247.f_1.f_12;
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
			return Global_998606.f_604[iVar1 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_22;
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
		return Global_2657490.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2660247.f_1.f_55;
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
			return Global_998606.f_604[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_1020252.f_5[iVar1 /*88*/].f_68;
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
		if (Global_2660247)
		{
			return Global_2660247.f_1.f_53;
		}
		return 286;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794709.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_998606.f_604[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_1020252.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 286;
	}
	return 286;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 2018;
	if (!bParam2)
	{
		iVar2 = 2000;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x3C57C2F07FEE34D2(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
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
		if (unk_0xE2D0C323A1AE5D85(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x3C57C2F07FEE34D2(&(Global_998606.f_604[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_998606.f_604[iVar0 /*88*/].f_65;
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
		if (unk_0xE2D0C323A1AE5D85(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x3C57C2F07FEE34D2(&(Global_1020252.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_1020252.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x9E2D6C50374FCFA9();
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
			return 164;
		
		case 14:
			return 165;
		
		case 122:
			return 169;
		
		case 11:
			return 166;
		
		case 13:
			return 167;
		
		case 12:
			return 168;
		
		case 8:
			return 171;
		
		case 1:
			return 172;
		
		case 5:
			return 170;
		
		case 6:
			return 173;
		
		case 3:
			return 176;
		
		case 0:
			return 174;
		
		case 2:
			return 175;
		
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
		
		case 262:
			return 138;
		
		case 263:
			return 139;
		
		case 264:
			return 140;
		
		case 268:
			return 141;
		
		case 269:
			return 143;
		
		case 270:
			return 144;
		
		case 275:
			return 145;
		
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
	
	if (unk_0xACC32B78196FBC2A(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4B83FFC4B00987D9(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0xC98697A0990910C1(sParam0, 0, 5), 8);
	if (!unk_0x3C57C2F07FEE34D2(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0xC98697A0990910C1(sParam0, 5, 12), 16);
	if (unk_0x3C57C2F07FEE34D2(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x3C57C2F07FEE34D2(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x3C57C2F07FEE34D2(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x3C57C2F07FEE34D2(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x3C57C2F07FEE34D2(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x3C57C2F07FEE34D2(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0xC98697A0990910C1(sParam0, 12, iVar0), 8);
	if (!unk_0xA8581FB9086C10C4(&cVar3, iParam2))
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
	
	if (iParam0 >= Global_1655307)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x320D1840B6DAA1CC() > Global_2657436[iVar0 /*4*/].f_2 || Global_2657436[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0x46D4F0814B2A2202() > 0 && Global_2655135[iParam0 /*99*/].f_91 < unk_0x46D4F0814B2A2202())
			{
				Global_2657436[iVar0 /*4*/].f_3 = unk_0x8D67B99A0E382905(Global_2655135[iParam0 /*99*/].f_91);
				Global_2657436[iVar0 /*4*/].f_2 = unk_0x320D1840B6DAA1CC() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2655135[iParam0 /*99*/].f_92 != -1)
	{
		unk_0x35A0954FC4DC4CAD(Global_2655135[iParam0 /*99*/].f_92);
	}
	if (!Global_2655135[iParam0 /*99*/].f_56)
	{
		if (Global_2655135[iParam0 /*99*/].f_52 != 0)
		{
			unk_0xB1BB0770DDABA505(Global_2655135[iParam0 /*99*/].f_52);
		}
	}
	func_45(Global_2655135[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1655307)
	{
		Global_2655135[iVar1 /*99*/] = { Global_2655135[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1655307 = (Global_1655307 - 1);
	if (Global_1655280)
	{
		if (Global_1655278 > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_1655280 = 0;
}

void func_39(int iParam0)
{
	Global_2655135[iParam0 /*99*/] = 0;
	Global_2655135[iParam0 /*99*/].f_1 = 0;
	Global_2655135[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2655135[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2655135[iParam0 /*99*/].f_31), "", 64);
	Global_2655135[iParam0 /*99*/].f_47 = -1;
	Global_2655135[iParam0 /*99*/].f_48 = unk_0x320D1840B6DAA1CC();
	Global_2655135[iParam0 /*99*/].f_49 = -1;
	Global_2655135[iParam0 /*99*/].f_50 = -1;
	Global_2655135[iParam0 /*99*/].f_51 = -1;
	Global_2655135[iParam0 /*99*/].f_52 = 0;
	Global_2655135[iParam0 /*99*/].f_53 = 0;
	Global_2655135[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2655135[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2655135[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2655135[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2655135[iParam0 /*99*/].f_73), "", 64);
	Global_2655135[iParam0 /*99*/].f_89 = 0;
	Global_2655135[iParam0 /*99*/].f_90 = 0;
	Global_2655135[iParam0 /*99*/].f_91 = -1;
	Global_2655135[iParam0 /*99*/].f_92 = -1;
	Global_2655135[iParam0 /*99*/].f_93 = 0;
	Global_2655135[iParam0 /*99*/].f_94 = -1;
	Global_2655135[iParam0 /*99*/].f_95 = 0;
	Global_2655135[iParam0 /*99*/].f_96 = 0;
	Global_2655135[iParam0 /*99*/].f_97 = 0;
	Global_2655135[iParam0 /*99*/].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1655307)
	{
		if (unk_0x3C57C2F07FEE34D2(&uParam0, &(Global_2655135[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_139, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

int func_43()
{
	if (Global_112915.f_9085.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_139, 2);
}

void func_45(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB5EDCDA1860870A0(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0x46D4F0814B2A2202())
	{
		return;
	}
	if (unk_0x69C28C0FD93CA75B(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_1575005 == 10;
}

int func_47()
{
	if (!Global_77852)
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
	if (!func_49())
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (Global_1574610)
	{
		return 1;
	}
	if (func_54())
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	return func_50(120, -1);
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_52()
{
	return Global_1574907;
}

bool func_53()
{
	return Global_1575034;
}

bool func_54()
{
	return Global_1575036;
}

void func_55(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_52();
	}
	Global_1575026[iVar0] = uParam0;
}

void func_56(int iParam0)
{
	func_112();
	if (func_111(1))
	{
		if (!func_100())
		{
			if (!func_89(1))
			{
				if (unk_0x44859561F653DD4E())
				{
					func_88();
				}
				func_59(1, 0);
				unk_0xF7C55939E655699D(iParam0);
				func_58();
				func_57();
			}
		}
	}
}

void func_57()
{
	Global_1932341.f_7 = 1;
}

void func_58()
{
	Global_1932341.f_6 = 1;
}

void func_59(int iParam0, bool bParam1)
{
	if (func_111(iParam0))
	{
		Global_1932341.f_16[iParam0 /*44*/].f_5 = 1;
		func_61(iParam0, 0);
		func_60();
		if (bParam1)
		{
			Global_1932341 = 1;
		}
	}
}

void func_60()
{
	Global_1932341.f_2 = 1;
}

void func_61(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x44859561F653DD4E())
	{
		if (bParam1)
		{
			func_87();
			func_73(unk_0x9E2D6C50374FCFA9(), 0, 81920, 0);
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_95 = 8;
			func_72();
			func_71();
		}
		func_70(iParam0);
		func_69(iParam0);
		func_67();
		func_66();
		func_60();
	}
	Var0 = { func_65(iParam0) };
	func_64(iParam0);
	func_62(&Var0);
}

void func_62(char* sParam0)
{
	StringCopy(&(Global_2714627.f_859), sParam0, 24);
	if (func_63())
	{
		StringCopy(&(Global_1048576.f_42), sParam0, 24);
	}
}

bool func_63()
{
	return unk_0xE2D0C323A1AE5D85(Global_2715542.f_1.f_2809, 5);
}

void func_64(int iParam0)
{
	Global_1932341.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_65(int iParam0)
{
	return Global_1932341.f_16[iParam0 /*44*/].f_6;
}

void func_66()
{
	Global_2714627.f_9 = 100;
}

void func_67()
{
	unk_0xCED9E32812D6C7C7(&Global_2714627, 5);
	func_68();
}

void func_68()
{
	unk_0xCED9E32812D6C7C7(&Global_2714627, 8);
}

void func_69(var uParam0)
{
	Global_1932341.f_8 = uParam0;
}

void func_70(var uParam0)
{
	Global_1932341.f_9 = uParam0;
}

void func_71()
{
	Global_2723433.f_1 = 0;
}

void func_72()
{
	char* sVar0;
	
	StringCopy(&(Global_2714627.f_859), sVar0, 24);
}

void func_73(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_86())
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
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
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
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_84())
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
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_82(unk_0x9E2D6C50374FCFA9(), 0) && !func_81()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_78(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_77(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(uVar27, false);
					}
					unk_0x398C962F550CF3B4(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(uVar27, false);
				}
				unk_0xA7266A50941DBAEA(uVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(uVar27) && unk_0x6090FC735660B8F7(uVar27))
				{
					unk_0xAD9047296F9EA375(uVar27);
				}
				unk_0xC252F409BDE7A700(uVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_76();
					func_75();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_77(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(uVar27, 1);
						}
					}
					if (func_74(Global_4718592.f_138117))
					{
						unk_0x5C65DDDC219B3AA5(uVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(uVar27) && !unk_0xD5C6B5E3B93A5EDC(uVar27, 0))
					{
						unk_0x51BB443B279E4104(uVar27);
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
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_74(int iParam0)
{
	return iParam0 == 17;
}

void func_75()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_76()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_77(var uParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_78(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
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
				func_80();
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 1))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 1);
			}
		}
		if (func_82(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_79(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_80()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_81()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

bool func_82(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_83(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_84()
{
	if (func_85() == 0)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	return Global_1574629.f_18;
}

int func_86()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_87()
{
	unk_0xCED9E32812D6C7C7(&Global_2714627, 7);
}

void func_88()
{
	unk_0xCED9E32812D6C7C7(&(Global_2714627.f_2), 15);
}

int func_89(int iParam0)
{
	if (iParam0 || func_99())
	{
		if (!func_91(1))
		{
			return 1;
		}
		if (!func_90())
		{
			return 1;
		}
		if (unk_0xC8EB486898DDBCF0())
		{
			return 1;
		}
	}
	return 0;
}

bool func_90()
{
	return Global_1932341.f_4;
}

int func_91(bool bParam0)
{
	if (!func_96())
	{
		return 0;
	}
	if ((func_94(func_95(-1), 0) >= 1 || func_50(123, -1)) && func_50(133, -1))
	{
		func_93();
		return 1;
	}
	else if (bParam0)
	{
		func_92();
	}
	return 0;
}

void func_92()
{
	Global_1932341.f_5 = 1;
}

void func_93()
{
	Global_1932341.f_4 = 1;
}

int func_94(int iParam0, int iParam1)
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
		if (Global_294328[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294328[iVar3] < iParam0)
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

int func_95(int iParam0)
{
	return Global_1655628[func_51(iParam0)];
}

int func_96()
{
	if (func_98() && func_97(0))
	{
		return 1;
	}
	return 0;
}

var func_97(int iParam0)
{
	return Global_1574536[iParam0];
}

var func_98()
{
	return func_97(func_52() + 1);
}

var func_99()
{
	return Global_1932341.f_2;
}

int func_100()
{
	if (((((func_110() || !func_108(-1)) || !func_106()) || !func_103()) || !func_102()) || func_101())
	{
		return 1;
	}
	return 0;
}

var func_101()
{
	return Global_2725237;
}

int func_102()
{
	if (unk_0x5D851A9195129CE9(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	int iVar0;
	
	if (func_104(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_104(var uParam0)
{
	if (func_105())
	{
		*uParam0 = 10;
		return 1;
	}
	return unk_0xBE80A802DC72EDC6(uParam0);
}

bool func_105()
{
	return Global_31782;
}

int func_106()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_107(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_50(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_109(iParam0);
	uVar1 = unk_0x5D851A9195129CE9(uVar0);
	if (unk_0xE2D0C323A1AE5D85(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
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

var func_110()
{
	return Global_2714627.f_743;
}

bool func_111(int iParam0)
{
	return Global_1932341.f_16[iParam0 /*44*/].f_4;
}

void func_112()
{
	int iVar0;
	int iVar1;
	
	func_118();
	if (unk_0xD5A3CFD28ABC1DCD() && !func_115())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0xACB1492C0AC1508E(func_114(iVar0));
			if (iVar1 > 0)
			{
				Global_1932341.f_16[iVar0 /*44*/] = iVar1;
				func_113(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1932341.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_113(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x8C7E520683702281(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1932341.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x8C7E520683702281(iParam1, "playlist", &Var1))
	{
		Global_1932341.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x906A3DDD892EFD32(iParam1, &Var1))
	{
		Global_1932341.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0xBE0A744F66C123FA(iParam1, "coronaCountdown", &uVar2))
		{
			Global_1932341.f_16[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_1932341.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1932341.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0xBE0A744F66C123FA(iParam1, "eventSubType", &uVar2))
		{
			Global_1932341.f_16[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1932341.f_1 = 1;
		}
		Global_1932341.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1932341.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_114(int iParam0)
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

int func_115()
{
	if (!func_116())
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	if (func_117())
	{
		return 0;
	}
	if (unk_0x47C86377AA337CBE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_117()
{
	return Global_2725728;
}

void func_118()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1932341 = { Var0 };
}

void func_119(int iParam0)
{
	var uVar0;
	
	if (Global_77852)
	{
		unk_0x91DFC8F68F6D9B05(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x91DFC8F68F6D9B05(-1, "Hang_Up", &Global_19943, 1);
	}
	if (unk_0x92039F20B184AB4D(1, iParam0, &uVar0, 21))
	{
		func_121();
	}
	Global_2817051.f_1 = 0;
	Global_2817051.f_33 = -1;
	Global_2817051.f_34 = -1;
	StringCopy(&(Global_2817051.f_4), "", 64);
	func_120(&(Global_2817051.f_20));
}

void func_120(var uParam0)
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

void func_121()
{
	Global_2817051.f_2 = 1;
	Global_2817051.f_38 = 1;
	if (unk_0x20E4972CBF3DBE1B())
	{
		if (unk_0xEE03516F1F1A249B())
		{
			while (unk_0x8D9B0AD025E894AD())
			{
				wait(0);
			}
			unk_0x39FC9DEDBEF0B2CE();
			Global_2817051 = 0;
			Global_2817051.f_2 = 0;
		}
		else if (func_129(Global_2817051.f_20))
		{
			if (unk_0x106C9EE9D83F20DF(&(Global_2817051.f_20)))
			{
				if (!unk_0x98E8458382A8BD60(&(Global_2817051.f_20)))
				{
					func_128();
				}
			}
		}
		else
		{
			func_128();
		}
	}
	else
	{
		func_128();
	}
	if (Global_2817051.f_37)
	{
		func_122(0);
	}
	Global_2817051.f_37 = 0;
	Global_2817051.f_3 = 0;
}

void func_122(int iParam0)
{
	if (func_127())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_126())
		{
			func_124(1, 1);
		}
		else
		{
			func_124(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_123())
	{
		Global_19954.f_1 = 3;
	}
}

int func_123()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_124(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_125(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

int func_125(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
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
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_126()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_127()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_128()
{
	Global_2817051.f_1 = 0;
	Global_2817051 = 0;
	Global_2817051.f_2 = 0;
	Global_2817051.f_33 = -1;
	Global_2817051.f_34 = -1;
	StringCopy(&(Global_2817051.f_4), "", 64);
	StringCopy(&(Global_2817051.f_39[0 /*16*/]), "", 64);
	Global_2817051.f_38 = 0;
	Global_2817051.f_56 = 0;
	Global_2817051.f_57 = 0;
	Global_2817051.f_58 = -2;
	Global_2817051.f_3 = 0;
	func_120(&(Global_2817051.f_20));
}

bool func_129(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

void func_130(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 15))
	{
		Global_2817051.f_33 = Var0.f_1;
		Global_2817051.f_34 = Var0;
	}
}

void func_131(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 21))
	{
		if (Global_2817051.f_3 == 0)
		{
			if (!func_132(&(Var0.f_8)))
			{
				unk_0x5AA72B892713ABC8(0, 2);
			}
			else
			{
				Global_2817051.f_3 = 1;
				MemCopy(&(Global_2817051.f_4), {Var0}, 16);
				Global_2817051.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2817051.f_39[0 /*16*/]), "", 64);
				Global_2817051.f_58 = -2;
				Global_2817051.f_56 = 0;
				Global_2817051.f_57 = 0;
			}
		}
		else if (!func_132(&(Var0.f_8)))
		{
			unk_0x5AA72B892713ABC8(0, 2);
		}
		else
		{
			Global_2817051.f_3 = 1;
			MemCopy(&(Global_2817051.f_4), {Var0}, 16);
			Global_2817051.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2817051.f_39[0 /*16*/]), "", 64);
			Global_2817051.f_58 = -2;
			Global_2817051.f_56 = 0;
			Global_2817051.f_57 = 0;
		}
	}
}

int func_132(var uParam0)
{
	if (Global_77852)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_136(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (unk_0xD8F9DF94CD871327(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x1CC29FEB3B8D48E8(unk_0xE2D3D51028F0428A()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x47C86377AA337CBE() == 0)
	{
		return 0;
	}
	if (Global_2817051.f_1)
	{
	}
	if (Global_20152 == 1)
	{
		return 0;
	}
	if (Global_1836602)
	{
		return 0;
	}
	if (Global_2817051.f_36)
	{
		return 0;
	}
	if (func_123())
	{
		return 0;
	}
	if (((Global_42596 != 6 && Global_42596 != 8) && Global_42596 != 12) && Global_42596 != 15)
	{
		return 0;
	}
	if (func_135() && !func_134(12))
	{
		return 0;
	}
	if (unk_0xA3329B7A7520670E())
	{
		return 0;
	}
	if (unk_0x496531E41FCF5116())
	{
		return 0;
	}
	if (!func_133(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (Global_78112)
	{
		return 0;
	}
	if (unk_0x71880CE67EE81F91())
	{
		if (!unk_0x096CDF67382A3EAF(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 0;
	}
	if (unk_0x5AC8E3AF6B0E9458(uParam0) || unk_0x4882A06B36985DD5(uParam0))
	{
		return 0;
	}
	if (unk_0x3D2C801F928BA9C8(uParam0) || unk_0x644B8FB9F0B8AF6E(uParam0))
	{
		return 0;
	}
	if (unk_0x9D176461AEBC1FDE())
	{
		if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (unk_0xA6A33E7A7C82DAEA())
			{
				return 0;
			}
		}
		else if (unk_0xA7384DAD7CF469DA())
		{
			return 0;
		}
	}
	return 1;
}

int func_133(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0xF1AB1E47A12AA2E6() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x9E2D6C50374FCFA9())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x527312C0DF85960A() || unk_0xA7384DAD7CF469DA())
	{
		if (unk_0x1A1B1F5DC3F2D868(0, iVar0))
		{
			if (unk_0x17C7C36F1FCE1AC2())
			{
				return 1;
			}
		}
	}
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			if (unk_0x4B719B4A8760B77F(0, -3, 1) || unk_0x1A1B1F5DC3F2D868(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0x1A1B1F5DC3F2D868(0, -1) || (unk_0x1A1B1F5DC3F2D868(1, -1) && unk_0x106C9EE9D83F20DF(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x1A1B1F5DC3F2D868(0, iVar0))
		{
			if (unk_0x17C7C36F1FCE1AC2())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_134(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_135()
{
	if (Global_42596 == 15)
	{
		return 0;
	}
	return 1;
}

int func_136(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_137()
{
	func_128();
}

void func_138()
{
	Global_2817051.f_1 = 1;
	Global_2817051.f_33 = -1;
	Global_2817051.f_34 = -1;
	if (unk_0x0347CCBD719C8ADC(Global_19935) == 1)
	{
		if (Global_19942)
		{
			func_139(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_19897)
			{
				func_139(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_139(Global_19935, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_139(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0xEA5DEA46C3EE64D3(uParam0, sParam1);
	unk_0x4F47E317C74C543B(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4F47E317C74C543B(round(fParam6));
	}
	if (!unk_0xACC32B78196FBC2A(sParam7))
	{
		func_140(sParam7);
	}
	if (!unk_0xACC32B78196FBC2A(iParam8))
	{
		func_140(iParam8);
	}
	if (!unk_0xACC32B78196FBC2A(iParam9))
	{
		func_140(iParam9);
	}
	if (!unk_0xACC32B78196FBC2A(iParam10))
	{
		func_140(iParam10);
	}
	if (!unk_0xACC32B78196FBC2A(iParam11))
	{
		func_140(iParam11);
	}
	unk_0x6F06CF0E9AB02847();
}

void func_140(var uParam0)
{
	unk_0x4ADC8B166E139423(uParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_141()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_54941 = 0;
		Global_54941.f_12 = 0;
		Global_54941.f_24 = 0;
		Global_54941.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_54941.f_1[iVar0] = 0;
			Global_54941.f_13[iVar0] = 0;
			Global_54941.f_25[iVar0] = 0;
			Global_54941.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

