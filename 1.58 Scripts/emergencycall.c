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
	if (unk_0x4B34601C5C56F3EE(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
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
					if (unk_0x9315DBF7D972F07A())
					{
						if (unk_0x5D5732191056751C(7, unk_0xE2D3D51028F0428A(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x320D1840B6DAA1CC();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x302D843E3C8F40E2(7, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x320D1840B6DAA1CC();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (unk_0x9315DBF7D972F07A())
					{
						if ((func_7(unk_0x9E2D6C50374FCFA9(), 0) && func_4(unk_0x9E2D6C50374FCFA9()) == 5) && Global_1964135)
						{
							if (Global_1964136 == 0)
							{
								Global_1964136 = 1;
							}
							iLocal_43 = 5;
						}
						else if (unk_0x5D5732191056751C(5, unk_0xE2D3D51028F0428A(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x320D1840B6DAA1CC();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x302D843E3C8F40E2(5, Local_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = unk_0x320D1840B6DAA1CC();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (unk_0x9315DBF7D972F07A())
					{
						if (unk_0x5D5732191056751C(3, unk_0xE2D3D51028F0428A(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = unk_0x320D1840B6DAA1CC();
							iLocal_43 = 5;
						}
					}
					else if (unk_0x302D843E3C8F40E2(3, Local_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_96471.f_358 == unk_0x2E87280918B16506("AGENCY_PREP_1") || (unk_0xB4C854DD86E40FDA(unk_0x2E87280918B16506("agency_prep1")) > 0 && func_3(0)))
						{
							Global_96471.f_358 = unk_0x2E87280918B16506("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_96401 = 1;
						}
						iLocal_46 = unk_0x320D1840B6DAA1CC();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (unk_0x320D1840B6DAA1CC() > (iLocal_46 + 60000) || !unk_0x99B99DA99FB0D4EC(uLocal_47))
					{
						func_1();
					}
					else if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
					{
						if (!unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()))
						{
							if (unk_0x99B99DA99FB0D4EC(uLocal_47))
							{
								unk_0xA4D968C5E2A5D0A0(uLocal_47);
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
	unk_0xAFBDF6A5E54114C1();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112915.f_9085.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
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
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (unk_0x320D1840B6DAA1CC() > iLocal_46 + 30000)
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
			iLocal_46 = unk_0x320D1840B6DAA1CC();
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
				if (unk_0x320D1840B6DAA1CC() > iLocal_46 + 30000)
				{
					iLocal_46 = unk_0x320D1840B6DAA1CC();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
			{
				func_10(unk_0xE2D3D51028F0428A(), &Local_45, &uVar0);
			}
			iLocal_46 = unk_0x320D1840B6DAA1CC();
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
				unk_0x15CEDAB46D800682(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1), iVar0, uParam1, &fVar10, &iVar1, 5, 1077936128, 0);
				unk_0x13FD00A258A58752(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), -3044.66f, 596.43f, 6.58f, 1) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				Var6 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) - unk_0x6B62510F212526DC(uParam0, 1) };
				fVar8 = unk_0xD12EFCAB87804BED(Var6.x, Var6.f_1);
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
				else if (unk_0x535E2CA2F0DA34D4(unk_0xEA3E64155DA5F4D9(*uParam1, 1, 1, 1077936128, 0)))
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
					if (unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), 294f, -895f, 28f, 1) < 25f || unk_0x987A5F1E1A67E3C0(unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0), -713.01f, -819.64f, 22.63f, 1) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(unk_0x6DB7FBD602C51670(*uParam1, *uParam2, fVar11, 0f, 0f), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)) > vdist(unk_0x6DB7FBD602C51670(*uParam1, *uParam2, -fVar11, 0f, 0f), unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { unk_0x6DB7FBD602C51670(*uParam1, *uParam2, fVar11, 0f, 0f) };
				uVar14 = unk_0x9D2C476A7D8D9385(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (unk_0xB2D581BD7446BBE9(uVar14, &iVar15, &Var17, &uVar16, &uVar18) == 2)
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
	if (Global_20144)
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
	if (!func_13())
	{
		Global_19954.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
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

int func_15(int iParam0)
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

bool func_16()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

bool func_17()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

int func_18()
{
	return Global_22302;
}

int func_19()
{
	if (Global_21285 == 0)
	{
		return 1;
	}
	return 0;
}

