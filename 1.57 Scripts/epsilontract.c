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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	var uLocal_48 = 0;
	struct<11> Local_49[10];
	char* sLocal_50[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_37 = 1;
	iLocal_38 = 1;
	iLocal_40 = joaat("prop_time_capsule_01");
	if (unk_0x4210287E2833D44B(210))
	{
		func_50();
	}
	if (unk_0x636F1F53CC61D2C9(joaat("epsilontract")) > 1)
	{
		unk_0x4BFE89D21F9885DC();
	}
	func_49(9);
	while (true)
	{
		wait(0);
		switch (iLocal_39)
		{
			case 0:
				func_48();
				break;
			
			case 1:
				func_1();
				break;
			
			case 2:
				func_50();
				break;
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if ((func_47(unk_0x7D2B9E6A64637269()) && !func_46(14)) && !unk_0x8B6A925F148E0E94())
	{
		if (iLocal_41 < 10)
		{
			if (iLocal_41 == 0)
			{
				if (!func_45(36) && (unk_0xDFB7BFA6482FEE1E() - iLocal_42) > iLocal_43)
				{
					func_44(0, 60, sLocal_50[0], 1, 0, 0, 0, 0, 1);
					func_43(36);
					iLocal_42 = -1;
				}
			}
			else if (iLocal_41 < 10)
			{
				if (!iLocal_42 == -1)
				{
					if ((unk_0xDFB7BFA6482FEE1E() - iLocal_42) > 15000)
					{
						func_44(0, 60, sLocal_50[iLocal_41], 1, 0, 0, 0, 0, 1);
						iLocal_42 = -1;
					}
				}
			}
			if (Local_49[iLocal_41 /*11*/].f_10)
			{
				if (unk_0x21C88062F3ECEF83(Local_49[iLocal_41 /*11*/].f_1) || func_42(Local_49[iLocal_41 /*11*/].f_1))
				{
					if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
					{
						unk_0x880C7B361C9651EE(unk_0x7D2B9E6A64637269());
					}
					func_41(&(Local_49[iLocal_41 /*11*/].f_1));
					Local_49[iLocal_41 /*11*/].f_10 = 0;
					unk_0x8543AEC08F877EE9(0, 200, 250);
					iVar0 = (805 + iLocal_41);
					func_40(iVar0, 1, -1, 1);
					unk_0x39255E004257D303(joaat("num_hidden_packages_2"), 1f);
					bLocal_46 = true;
					if (iLocal_41 < 10)
					{
						iLocal_41++;
						iLocal_42 = unk_0xDFB7BFA6482FEE1E();
						func_39(1, 0);
						func_37();
					}
				}
				else if (unk_0xC2EBFA0B77E6B2D4(Local_49[iLocal_41 /*11*/].f_1))
				{
					func_35(Local_49[iLocal_41 /*11*/].f_3);
					func_34(&(Local_49[iLocal_41 /*11*/].f_1), &(Local_49[iLocal_41 /*11*/].f_10));
				}
			}
			else
			{
				while (func_33(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_41)
				{
					func_31(&(Local_49[iLocal_41 /*11*/]), iLocal_40, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_47 && !bLocal_46)
		{
			func_13();
		}
		func_2(&bLocal_46, &bLocal_47, &uLocal_48, 4, &uLocal_44, &uLocal_45, "TRACT_TITLE", "TRACT_COLLECT");
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, var uParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_12(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*uParam5 = unk_0x42AA2CCF0B61DCD8("MIDSIZED_MESSAGE");
				if (unk_0xDAE4BC89A198A6AF(*uParam5))
				{
					iVar0 = unk_0x5AD02BBC63E31E46();
					if (iParam3 == 6)
					{
						unk_0x9B0169E27978C1A2(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x9B0169E27978C1A2(iVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				unk_0x704F8697BB515627(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x35CA0C119E6A2A27(sParam6);
				unk_0xD4B2C39F7AD5A6A6();
				unk_0x35CA0C119E6A2A27(sParam7);
				unk_0x38CD3C04C877C35F(func_4(iParam3));
				unk_0xD4B2C39F7AD5A6A6();
				unk_0x392841D58D2EED1D();
				*uParam2 = unk_0xDFB7BFA6482FEE1E();
				*uParam4++;
				break;
			
			case 2:
				if ((unk_0xDFB7BFA6482FEE1E() - *uParam2) > 7000)
				{
					unk_0x704F8697BB515627(*uParam5, "SHARD_ANIM_OUT");
					unk_0x9E3D03981E2E9AD9(1);
					unk_0x82D42F43BE26EB72(0.33f);
					unk_0x392841D58D2EED1D();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0xDAE4BC89A198A6AF(*uParam5))
					{
						func_12(1);
						unk_0x44EF5678D6916481(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0xDFB7BFA6482FEE1E() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (unk_0xDAE4BC89A198A6AF(*uParam5))
					{
						func_12(1);
						unk_0x44EF5678D6916481(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0xDAE4BC89A198A6AF(*uParam5))
				{
					unk_0x3D9BC07C93913E04(uParam5);
				}
				func_12(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

int func_3()
{
	if (Global_77508)
	{
		return 1;
	}
	else if (Global_62092 && !Global_62098)
	{
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			if (unk_0x234B68AC2E35ED5A(Global_112293.f_10047.f_108, func_10(func_11(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0xD885BEFA31A18D47(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0xD885BEFA31A18D47(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0xD885BEFA31A18D47(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_11(iParam0))
		{
			iVar2 = (func_9(iParam0) + iVar1);
			if (func_5(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_5(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_7(iParam0, iParam1);
	uVar2 = func_6(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_8()
{
	return Global_1312763;
}

int func_9(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_10(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_11(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_12(int iParam0)
{
	if (Global_77515 != iParam0)
	{
		Global_77515 = iParam0;
	}
}

void func_13()
{
	func_30(95, 1);
	func_15(27, 84, 0);
	func_14(9);
	iLocal_39 = 2;
}

int func_14(int iParam0)
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

int func_15(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_28(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_52501[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_52501[iVar0 /*203*/].f_2 = iParam0;
	Global_52501[iVar0 /*203*/].f_10[Global_52501[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_52501[iVar0 /*203*/].f_10[Global_52501[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_52501[iVar0 /*203*/].f_10[Global_52501[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_52501[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_52501[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_52501[iVar0 /*203*/].f_4[iVar1] == Global_43201[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_52501[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_52501[iVar0 /*203*/].f_4[Global_52501[iVar0 /*203*/].f_3] = Global_43201[iParam1 /*12*/].f_3;
			Global_52501[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_52501[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_52501[iVar0 /*203*/].f_4[iVar1] == Global_43201[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_52501[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_52501[iVar0 /*203*/].f_4[Global_52501[iVar0 /*203*/].f_3] = Global_43201[iParam1 /*12*/].f_2;
			Global_52501[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_52501[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_52501[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_16(Global_52501[iVar0 /*203*/].f_4[iVar1], Global_52501[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_46526[iParam1 /*46*/].f_42 - 1);
		if (iVar4 < 0)
		{
			return;
		}
		iVar5 = Global_46526[iParam1 /*46*/].f_32[iVar4];
		iVar2 = iVar5;
		Var3 = { func_27(Global_43201[iVar5 /*12*/].f_1) };
		if (Global_43201[iVar5 /*12*/].f_2 == iParam0 && !Global_43201[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_43201[iVar5 /*12*/].f_2;
		iVar0 = Global_52139[iParam0 /*120*/];
		bVar6 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar6 = true;
		}
		if (bVar6)
		{
			if (!Global_52139[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_43193 = (Global_43193 - 1);
						if (Global_43193 < 0)
						{
							Global_43193 = 0;
						}
						break;
					
					case 1:
						Global_43194 = (Global_43194 - 1);
						if (Global_43194 < 0)
						{
							Global_43194 = 0;
						}
						break;
					
					case 2:
						Global_43195 = (Global_43195 - 1);
						if (Global_43195 < 0)
						{
							Global_43195 = 0;
						}
						break;
					}
				}
		}
		Global_52139[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_52139[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_52139[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_52139[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_52139[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_52139[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_52139[iParam0 /*120*/];
		bVar7 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar7 = true;
		}
		if (bVar7)
		{
			if (!Global_52139[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_43193 = (Global_43193 - 1);
						if (Global_43193 < 0)
						{
							Global_43193 = 0;
						}
						break;
					
					case 1:
						Global_43194 = (Global_43194 - 1);
						if (Global_43194 < 0)
						{
							Global_43194 = 0;
						}
						break;
					
					case 2:
						Global_43195 = (Global_43195 - 1);
						if (Global_43195 < 0)
						{
							Global_43195 = 0;
						}
						break;
					}
				}
		}
		iVar8 = -1;
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < 7)
		{
			if (Global_52501[iVar9 /*203*/].f_1 == iParam1 && Global_52501[iVar9 /*203*/].f_9 > 0)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == -1)
		{
			return;
		}
		Global_52139[iParam0 /*120*/].f_18[iVar0] = Global_52501[iVar8 /*203*/].f_1;
		Global_52139[iParam0 /*120*/].f_1[iVar0] = (Global_52501[iVar8 /*203*/].f_9 - 1);
		Global_52139[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_52139[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_52139[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_52139[iParam0 /*120*/]++;
		iVar10 = Global_52139[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_52501[iVar8 /*203*/].f_10[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_43201[iVar11 /*12*/].f_2;
		if (Global_52501[iVar8 /*203*/].f_10[(Global_52501[iVar8 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_52501[iVar8 /*203*/].f_10[(Global_52501[iVar8 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_27(Global_43201[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_52139[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_17(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_17(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_17(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_17(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x2CA4B93E310C1860())
	{
		return;
	}
	iVar0 = func_21();
	bVar1 = false;
	StringCopy(&cVar2, func_20(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0xAD97A7EDCF347FBB("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0xAD97A7EDCF347FBB("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0xAD97A7EDCF347FBB("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0xAD97A7EDCF347FBB(sParam3);
				if (!unk_0xAB6A270F84A8781E(iParam4))
				{
					unk_0x1896EC0B030A48A2(iParam4);
				}
				if (!unk_0xAB6A270F84A8781E(iParam5))
				{
					unk_0x1896EC0B030A48A2(iParam5);
				}
				if (!unk_0xAB6A270F84A8781E(iParam6))
				{
					unk_0x1896EC0B030A48A2(iParam6);
				}
				if (!unk_0xAB6A270F84A8781E(iParam7))
				{
					unk_0x1896EC0B030A48A2(iParam7);
				}
				if (!unk_0xAB6A270F84A8781E(iParam8))
				{
					unk_0x1896EC0B030A48A2(iParam8);
				}
				if (!unk_0xAB6A270F84A8781E(iParam9))
				{
					unk_0x1896EC0B030A48A2(iParam9);
				}
				if (!unk_0xAB6A270F84A8781E(iParam10))
				{
					unk_0x1896EC0B030A48A2(iParam10);
				}
				if (!unk_0xAB6A270F84A8781E(iParam11))
				{
					unk_0x1896EC0B030A48A2(iParam11);
				}
				if (!unk_0xAB6A270F84A8781E(iParam12))
				{
					unk_0x1896EC0B030A48A2(iParam12);
				}
				if (!unk_0xAB6A270F84A8781E(iParam13))
				{
					unk_0x1896EC0B030A48A2(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_18(unk_0x1664AA1696810AD6(&cVar2, &cVar2, 0, 2, unk_0x3A2A8DAFDBEC4CFE(func_19(iParam1)), 0));
		}
		else
		{
			func_18(unk_0x1664AA1696810AD6("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0x3A2A8DAFDBEC4CFE(func_19(iParam1)), 0));
		}
		switch (Global_19798)
		{
			case 0:
				StringCopy(&Global_19787, "Phone_SoundSet_Michael", 24);
				Global_43193++;
				if (Global_43193 > 16)
				{
					Global_43193 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_19787, "Phone_SoundSet_Trevor", 24);
				Global_43195++;
				if (Global_43195 > 16)
				{
					Global_43195 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_19787, "Phone_SoundSet_Franklin", 24);
				Global_43194++;
				if (Global_43194 > 16)
				{
					Global_43194 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_19787, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x9B0169E27978C1A2(-1, "Notification", &Global_19787, 1);
	}
}

void func_18(var uParam0)
{
	Global_43196[Global_43200] = uParam0;
	Global_22183 = 1;
	Global_22182 = uParam0;
	Global_43200++;
	if (Global_43200 == 3)
	{
		Global_43200 = 0;
	}
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_20(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[0 /*29*/].f_7));
		
		case 1:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[1 /*29*/].f_7));
		
		case 2:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[2 /*29*/].f_7));
		
		case 7:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[12 /*29*/].f_7));
		
		case 4:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[60 /*29*/].f_7));
		
		case 6:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[62 /*29*/].f_7));
		
		case 3:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[14 /*29*/].f_7));
		
		case 16:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[97 /*29*/].f_7));
		
		case 19:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[99 /*29*/].f_7));
		
		case 15:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[15 /*29*/].f_7));
		
		case 26:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[30 /*29*/].f_7));
		
		case 27:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[17 /*29*/].f_7));
		
		case 29:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[20 /*29*/].f_7));
		
		case 30:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[43 /*29*/].f_7));
		
		case 31:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[44 /*29*/].f_7));
		
		case 32:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[19 /*29*/].f_7));
		
		case 34:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[40 /*29*/].f_7));
		
		case 36:
			return unk_0x3A2A8DAFDBEC4CFE("CELL_E_381");
		
		case 38:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[122 /*29*/].f_7));
		
		case 40:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[125 /*29*/].f_7));
		
		case 41:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[113 /*29*/].f_7));
		
		case 42:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[126 /*29*/].f_7));
		
		case 43:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[127 /*29*/].f_7));
		
		case 44:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[124 /*29*/].f_7));
		
		case 45:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[114 /*29*/].f_7));
		
		case 46:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[115 /*29*/].f_7));
		
		case 47:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[116 /*29*/].f_7));
		
		case 48:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[123 /*29*/].f_7));
		
		case 49:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[117 /*29*/].f_7));
		
		case 50:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[118 /*29*/].f_7));
		
		case 51:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[119 /*29*/].f_7));
		
		case 52:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[120 /*29*/].f_7));
		
		case 53:
			return unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

var func_21()
{
	func_22();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_25(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_24(unk_0x7D2B9E6A64637269());
			if (func_23(iVar0) && (!func_46(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_23(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

struct<16> func_27(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_29(iParam0);
	if (iVar0 > -1)
	{
		if (Global_52501[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_52501[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_52501[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_52501[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_52501[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_52501[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_52501[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_52501[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_52139[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_52139[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_52139[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_52139[iVar6 /*120*/].f_18[iVar8] == Global_52501[iVar4 /*203*/].f_1)
							{
								if (Global_52139[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_43193 = (Global_43193 - 1);
											break;
										
										case 1:
											Global_43194 = (Global_43194 - 1);
											break;
										
										case 2:
											Global_43195 = (Global_43195 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_52501[iVar4 /*203*/].f_2 = iParam0;
	Global_52501[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_52501[iVar4 /*203*/] = 1;
	}
	Global_112293.f_21035.f_310++;
	if (Global_112293.f_21035.f_310 == 0)
	{
		Global_112293.f_21035.f_310 = 1;
	}
	Global_52501[iVar4 /*203*/].f_1 = Global_112293.f_21035.f_310;
	Global_52501[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_52501[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_52501[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_52501[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_112293.f_9083.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_112293.f_9083.f_99.f_58[iParam0] = iParam1;
}

void func_31(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (!func_46(13) && !func_46(14))
			{
				if (!unk_0xC2EBFA0B77E6B2D4(uParam0->f_1))
				{
					if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x16E516CA9C88FF48(iParam1);
						while (!unk_0xA9C0BBFB9CBB66F1(iParam1))
						{
							unk_0x16E516CA9C88FF48(iParam1);
							wait(0);
						}
						if (bParam3)
						{
							func_32(uParam0->f_3);
						}
						unk_0x6AF7EE4DD9F8B944(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0x191DDA30577F440A(&uVar0, 1);
							uParam0->f_1 = unk_0x902811AB4D3F0E4F(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, iParam1);
						}
						else
						{
							unk_0x191DDA30577F440A(&uVar0, 3);
							unk_0x191DDA30577F440A(&uVar0, 4);
							unk_0x191DDA30577F440A(&uVar0, 8);
							unk_0x191DDA30577F440A(&uVar0, 1);
							uParam0->f_1 = unk_0x3A63BEB7A1E25FB1(iParam2, uParam0->f_3, uVar0, -1, 1, iParam1);
						}
						unk_0x824F744352C8BC82(iParam1);
					}
				}
			}
			if (unk_0xC2EBFA0B77E6B2D4(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_32(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xDE7E9AF51E2E18EB(Param0);
	if (unk_0xE75EE67F14EAAE37(uVar0))
	{
		unk_0x0EFDA7B3FFAA82B3(uVar0);
		while (!unk_0xC4EACCE45DBAA313(uVar0))
		{
			wait(0);
		}
		wait(0);
		unk_0x8BAFB6B897BD2A31(uVar0);
	}
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, -1, -1);
}

void func_34(var uParam0, var uParam1)
{
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0x0BABEFEA577FCFA4(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xCA4950AD4AC0DAD8(*uParam0), 1) >= 60f)
		{
			func_41(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_35(struct<3> Param0)
{
	if (func_36(unk_0x7D2B9E6A64637269(), Param0, 7f))
	{
		unk_0xDDFB0D5F3D3B74AA(unk_0x7D2B9E6A64637269(), Param0, 100, 2048, 1);
	}
}

bool func_36(var uParam0, struct<3> Param1, float fParam2)
{
	return vdist2(unk_0xD6E677FAD7521410(uParam0, 1), Param1) <= (fParam2 * fParam2);
}

int func_37()
{
	if (func_38(0))
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

bool func_38(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_39(int iParam0, int iParam1)
{
	Global_99409.f_7 = iParam0;
	Global_99409.f_8 = iParam1;
}

int func_40(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_41(var uParam0)
{
	if (unk_0xC2EBFA0B77E6B2D4(*uParam0))
	{
		unk_0xDB5C5980B9AE89B9(*uParam0);
	}
}

int func_42(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0xC2EBFA0B77E6B2D4(uParam0))
	{
		return 0;
	}
	if (func_47(unk_0x7D2B9E6A64637269()))
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			iVar1 = unk_0x6471F4759775FCA4(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xCA4950AD4AC0DAD8(uParam0)) < (5f * 5f) || unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), unk_0x49851BEFF428591A(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_20408.f_150[iVar1]), iVar0);
	}
}

int func_44(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		
		case 1:
			iVar0 = 22;
			break;
		
		case 2:
			iVar0 = 23;
			break;
		
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_112293.f_14139[iVar0 /*104*/]), sParam2, 64);
	Global_112293.f_14139[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_112293.f_14139[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_112293.f_14139[iVar0 /*104*/].f_25 = iParam4;
	Global_112293.f_14139[iVar0 /*104*/].f_26 = iParam5;
	Global_112293.f_14139[iVar0 /*104*/].f_29 = iParam6;
	Global_112293.f_14139[iVar0 /*104*/].f_30 = iParam8;
	Global_112293.f_14139[iVar0 /*104*/].f_31 = iParam7;
	Global_112293.f_14139[iVar0 /*104*/].f_28 = 0;
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_20408.f_150[iVar1], iVar0);
	}
	return 0;
}

bool func_46(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_47(var uParam0)
{
	if (unk_0x419E13582192CFEA(uParam0))
	{
		if (!unk_0xE50EB54E0F21BED0(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_112293.f_18572.f_388)
	{
		sLocal_50[0] = "TRACT_HINT1B";
		iLocal_43 = 300000;
	}
	else
	{
		sLocal_50[0] = "TRACT_HINT1";
		iLocal_43 = 16000;
	}
	Local_49[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_49[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_50[1] = "TRACT_HINT2";
	Local_49[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_50[2] = "TRACT_HINT3";
	Local_49[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_50[3] = "TRACT_HINT4";
	Local_49[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_50[4] = "TRACT_HINT5";
	Local_49[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_50[5] = "TRACT_HINT6";
	Local_49[6 /*11*/].f_3 = { -1804.546f, 403.9298f, 112.1966f };
	sLocal_50[6] = "TRACT_HINT7";
	Local_49[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_50[7] = "TRACT_HINT8";
	Local_49[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_50[8] = "TRACT_HINT9";
	Local_49[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_50[9] = "TRACT_HINT10";
	iLocal_42 = unk_0xDFB7BFA6482FEE1E();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (func_5(iVar1, -1, -1))
		{
			iLocal_41++;
		}
		iVar0++;
	}
	iLocal_39 = 1;
}

int func_49(int iParam0)
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

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_41(&(Local_49[iVar0 /*11*/].f_1));
		iVar0++;
	}
	unk_0x4BFE89D21F9885DC();
}

