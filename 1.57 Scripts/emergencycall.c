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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x4210287E2833D44B(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (unk_0x02BFF15CAA701972())
					{
						if (unk_0x1F3EE1342053D674(7, unk_0x7D2B9E6A64637269(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xDFB7BFA6482FEE1E();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x966FF0999887A469(7, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0xDFB7BFA6482FEE1E();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x02BFF15CAA701972())
					{
						if ((func_7(unk_0x1146A9AE09CE2B14(), 0) && func_4(unk_0x1146A9AE09CE2B14()) == 5) && Global_1700948)
						{
							if (Global_1700949 == 0)
							{
								Global_1700949 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x1F3EE1342053D674(5, unk_0x7D2B9E6A64637269(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xDFB7BFA6482FEE1E();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x966FF0999887A469(5, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0xDFB7BFA6482FEE1E();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x02BFF15CAA701972())
					{
						if (unk_0x1F3EE1342053D674(3, unk_0x7D2B9E6A64637269(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0xDFB7BFA6482FEE1E();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x966FF0999887A469(3, Local_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_95867.f_358 == unk_0x15173FB88ABC94F9("AGENCY_PREP_1") || (unk_0x636F1F53CC61D2C9(unk_0x15173FB88ABC94F9("agency_prep1")) > 0 && func_3(0)))
						{
							Global_95867.f_358 = unk_0x15173FB88ABC94F9("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_95797 = 1;
						}
						iLocal_46 = unk_0xDFB7BFA6482FEE1E();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0xDFB7BFA6482FEE1E() > (iLocal_46 + 60000) || !unk_0x4F20B49F58DE595E(uLocal_47))
					{
						func_1();
					}
					else if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
						{
							if (unk_0x4F20B49F58DE595E(uLocal_47))
							{
								unk_0x7A65E39F58B0A607(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	unk_0x4BFE89D21F9885DC();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0xDFB7BFA6482FEE1E() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = unk_0xDFB7BFA6482FEE1E();
			break;
		
		case 1:
			while (!func_19())
			{
				wait(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (unk_0xDFB7BFA6482FEE1E() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0xDFB7BFA6482FEE1E();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				func_10(unk_0x7D2B9E6A64637269(), &Local_45, &uVar0);
			}
			iLocal_46 = unk_0xDFB7BFA6482FEE1E();
			break;
	}
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	var uVar14;
	int iVar15;
	var uVar16;
	struct<3> Var17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				unk_0x87BE0E4947F798AC(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), iVar0, uParam1, &fVar10, &iVar1, 5, 1077936128, 0);
				unk_0x74F971D19CAD1757(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var6 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) - unk_0xD6E677FAD7521410(uParam0, 1) };
				fVar8 = unk_0x832AD84AA258AE80(Var6.x, Var6.f_1);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (unk_0x4664EA53DEDF81DD(unk_0x963E03AF64E1395B(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * to_float((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(unk_0x26C2ACB261895E70(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)) > vdist(unk_0x26C2ACB261895E70(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0x26C2ACB261895E70(*uParam1, *uParam2, fVar11, 0f, 0f) };
				uVar14 = unk_0x7AD43B94CD205A49(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0xA2B3B271E2AE7A08(uVar14, &iVar15, &Var17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (Var17.f_2 > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19798.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_17()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_18()
{
	return Global_22142;
}

int func_19()
{
	if (Global_21125 == 0)
	{
		return 1;
	}
	return 0;
}

