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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_50 = 0;
	var uLocal_51[4] = { 0, 0, 0, 0 };
	var uLocal_52 = 0;
	struct<3> Local_53[4];
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
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
	bLocal_56 = true;
	iLocal_62 = joaat("s_m_m_pilot_01");
	iLocal_77 = 500;
	if (unk_0x4210287E2833D44B(3))
	{
		func_12();
	}
	uLocal_75 = unk_0x7D2B9E6A64637269();
	while (true)
	{
		if (unk_0xE50EB54E0F21BED0(uLocal_75, 0))
		{
			iLocal_76 = 5;
		}
		switch (iLocal_76)
		{
			case 0:
				iLocal_76 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_76 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_76 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_76 = 4;
				break;
			
			case 4:
				if (Global_96298)
				{
					iLocal_76 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		wait(iLocal_77);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x419E13582192CFEA(uLocal_49[iVar0]))
		{
			if (unk_0x98E18969B1D0C4AB(uLocal_49[iVar0]) || (!unk_0xE50EB54E0F21BED0(uLocal_49[iVar0], 0) && !unk_0x1F9D47D45E125FA6(uLocal_49[iVar0])))
			{
				unk_0x5420D0D520CF44D0(&(uLocal_49[iVar0]));
				unk_0xC606AE2A3209945E(&(uLocal_51[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(uLocal_49[iVar0]), &(uLocal_51[iVar0]));
				unk_0x795957CD3A0042C8(&(uLocal_49[iVar0]));
				unk_0x0F3BD19FF11738D3(&(uLocal_51[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x419E13582192CFEA(uLocal_50))
	{
		if (unk_0x98E18969B1D0C4AB(uLocal_50))
		{
			unk_0x5420D0D520CF44D0(&uLocal_50);
			unk_0xC606AE2A3209945E(&uLocal_52);
		}
		else
		{
			func_2(&uLocal_50, &uLocal_52);
			unk_0x795957CD3A0042C8(&uLocal_50);
			unk_0x0F3BD19FF11738D3(&uLocal_52);
		}
	}
	if (bLocal_60)
	{
		unk_0x7B6B41ECBE4B733F(101, "AirportJetTakeOff");
		unk_0x7B6B41ECBE4B733F(102, "AirportJetTakeOff");
		unk_0x7B6B41ECBE4B733F(101, "AirportNew");
		unk_0x7B6B41ECBE4B733F(102, "AirportNew");
		unk_0x7B6B41ECBE4B733F(103, "AirplaneLandingRedux");
		unk_0x7B6B41ECBE4B733F(104, "AirplaneLandingRedux");
		unk_0x7B6B41ECBE4B733F(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1)
{
	if (((unk_0x419E13582192CFEA(*uParam0) && unk_0x419E13582192CFEA(*uParam1)) && !unk_0xE50EB54E0F21BED0(*uParam0, 0)) && !unk_0xE50EB54E0F21BED0(*uParam1, 0))
	{
		if (unk_0x397C98A5552886EB(*uParam0))
		{
			if (unk_0xAB0BB1BDD76B67DC(*uParam0))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0x0E0B8D8B4E896661(*uParam1, *uParam0, 0, 0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_56)
	{
		if (unk_0x419E13582192CFEA(uLocal_49[0]) && !unk_0xE50EB54E0F21BED0(uLocal_49[0], 0))
		{
			if (unk_0x397C98A5552886EB(uLocal_49[0]))
			{
				if (!unk_0xAB0BB1BDD76B67DC(uLocal_49[0]))
				{
					if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(uLocal_51[0], 0)) && !unk_0xE50EB54E0F21BED0(uLocal_49[0], 0))
					{
						unk_0x0E0B8D8B4E896661(uLocal_51[0], uLocal_49[0], 0, 0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(uLocal_51[0], 0)) && !unk_0xE50EB54E0F21BED0(uLocal_49[0], 0))
					{
						unk_0x0E0B8D8B4E896661(uLocal_51[0], uLocal_49[0], 0, 0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (unk_0x419E13582192CFEA(uLocal_49[2]) && !unk_0xE50EB54E0F21BED0(uLocal_49[2], 0))
		{
			if (unk_0x397C98A5552886EB(uLocal_49[2]))
			{
				if (!unk_0xAB0BB1BDD76B67DC(uLocal_49[2]))
				{
					if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(uLocal_51[2], 0)) && !unk_0xE50EB54E0F21BED0(uLocal_49[2], 0))
					{
						unk_0x0E0B8D8B4E896661(uLocal_51[2], uLocal_49[2], 0, 0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(uLocal_51[2], 0)) && !unk_0xE50EB54E0F21BED0(uLocal_49[2], 0))
					{
						unk_0x0E0B8D8B4E896661(uLocal_51[2], uLocal_49[2], 0, 0, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_66)
	{
		case 0:
			Local_53[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			Local_53[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			Local_53[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			Local_53[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			Local_54 = { -1612.174f, -2688.442f, 12.9444f };
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if ((unk_0xD1A2328AC17D6F4C(unk_0x7D2B9E6A64637269()) || unk_0x8599CD37AE5778BB(unk_0x7D2B9E6A64637269())) || unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
				{
					bLocal_56 = false;
				}
				else
				{
					bLocal_56 = true;
				}
			}
			iLocal_66 = 1;
			break;
		
		case 1:
			unk_0x16E516CA9C88FF48(joaat("jet"));
			unk_0x16E516CA9C88FF48(iLocal_62);
			unk_0x498685EB9132AF88(101, "AirportJetTakeOff");
			unk_0x498685EB9132AF88(103, "AirplaneLandingRedux");
			unk_0x498685EB9132AF88(101, "EastWestFlight");
			unk_0x498685EB9132AF88(101, "AirportNew");
			unk_0x498685EB9132AF88(104, "AirplaneLandingRedux");
			iLocal_66 = 2;
			break;
		
		case 2:
			if (!bLocal_60)
			{
				if ((((((unk_0xA9C0BBFB9CBB66F1(joaat("jet")) && unk_0xA9C0BBFB9CBB66F1(iLocal_62)) && unk_0x9CF7186A344D26A9(101, "AirportJetTakeOff")) && unk_0x9CF7186A344D26A9(103, "AirplaneLandingRedux")) && unk_0x9CF7186A344D26A9(101, "AirportNew")) && unk_0x9CF7186A344D26A9(104, "AirplaneLandingRedux")) && unk_0x9CF7186A344D26A9(101, "EastWestFlight"))
				{
					bLocal_60 = true;
				}
				else
				{
					unk_0x16E516CA9C88FF48(joaat("jet"));
					unk_0x16E516CA9C88FF48(iLocal_62);
					unk_0x498685EB9132AF88(101, "AirportJetTakeOff");
					unk_0x498685EB9132AF88(102, "AirportJetTakeOff");
					unk_0x498685EB9132AF88(101, "AirportNew");
					unk_0x498685EB9132AF88(102, "AirportNew");
					unk_0x498685EB9132AF88(101, "EastWestFlight");
				}
			}
			if (bLocal_60)
			{
				if (!unk_0x3D6C3476988DE6E1(Local_53[0 /*3*/], 50f) && !unk_0x3D6C3476988DE6E1(Local_54, 50f))
				{
					iLocal_66 = 3;
				}
				else
				{
					if (unk_0x3D6C3476988DE6E1(Local_53[0 /*3*/], 50f))
					{
					}
					if (unk_0x3D6C3476988DE6E1(Local_54, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_49[0] = unk_0x170478CC84C8AE2F(joaat("jet"), Local_53[0 /*3*/], 0, 1, 1, 0);
			unk_0xCD37A28258D70638(uLocal_49[0], 240.3179f);
			unk_0x058C28579D81FB08(uLocal_49[0], 0);
			uLocal_49[1] = unk_0x170478CC84C8AE2F(joaat("jet"), Local_53[1 /*3*/], 0, 1, 1, 0);
			unk_0x058C28579D81FB08(uLocal_49[1], 0);
			uLocal_49[2] = unk_0x170478CC84C8AE2F(joaat("jet"), Local_53[2 /*3*/], 0, 1, 1, 0);
			unk_0x058C28579D81FB08(uLocal_49[2], 0);
			uLocal_49[3] = unk_0x170478CC84C8AE2F(joaat("jet"), Local_53[3 /*3*/], 0, 1, 1, 0);
			unk_0x058C28579D81FB08(uLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (unk_0x419E13582192CFEA(uLocal_49[iVar0]))
				{
					uLocal_51[iVar0] = unk_0x42F3C85A00B4FC7B(uLocal_49[iVar0], 4, iLocal_62, -1, 1, 1);
					unk_0x83E421E5A4A2A512(uLocal_49[iVar0], 1000);
					unk_0x89E171705EA920DA(uLocal_49[iVar0], 1, 1, 0);
					unk_0xBE91B077ADADE97F(uLocal_51[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_49[1]), &(uLocal_51[1]));
			func_8(&(uLocal_49[2]), &(uLocal_51[2]));
			func_8(&(uLocal_49[3]), &(uLocal_51[3]));
			if (bLocal_56)
			{
				if (unk_0x419E13582192CFEA(uLocal_49[0]))
				{
					if (unk_0x9CF7186A344D26A9(101, "AirportJetTakeOff"))
					{
						unk_0x9C6D92A07D6159B7(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_55 = 1;
					}
					else
					{
						unk_0x498685EB9132AF88(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_66 = 4;
			break;
		
		case 4:
			if (iLocal_59)
			{
				if (unk_0x419E13582192CFEA(uLocal_49[3]) && !unk_0xE50EB54E0F21BED0(uLocal_49[3], 0))
				{
					if (unk_0x98E18969B1D0C4AB(uLocal_49[3]))
					{
						if (!iLocal_57)
						{
							func_8(&(uLocal_49[3]), &(uLocal_51[3]));
							iLocal_57 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_65)
			{
				case 0:
					if (!iLocal_55)
					{
						if (bLocal_56)
						{
							if (unk_0x419E13582192CFEA(uLocal_49[0]) && !unk_0xE50EB54E0F21BED0(uLocal_49[0], 0))
							{
								if (unk_0x98E18969B1D0C4AB(uLocal_49[0]) && !unk_0x3D6C3476988DE6E1(Local_53[0 /*3*/], 50f))
								{
									if (unk_0x9CF7186A344D26A9(101, "AirportJetTakeOff"))
									{
										unk_0x9C6D92A07D6159B7(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_55 = 1;
									}
									else
									{
										unk_0x498685EB9132AF88(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_55)
					{
						if (unk_0x419E13582192CFEA(uLocal_49[0]) && !unk_0xE50EB54E0F21BED0(uLocal_49[0], 0))
						{
							if (unk_0xAB0BB1BDD76B67DC(uLocal_49[0]))
							{
								fLocal_63 = unk_0x0829510481BBFC01(uLocal_49[0]);
							}
						}
						if (fLocal_63 > 1100f)
						{
							iLocal_65 = 1;
						}
					}
					break;
				
				case 1:
					if (unk_0x419E13582192CFEA(uLocal_49[1]) && !unk_0xE50EB54E0F21BED0(uLocal_49[1], 0))
					{
						if (bLocal_56)
						{
							if (unk_0x98E18969B1D0C4AB(uLocal_49[1]))
							{
								if (iLocal_59)
								{
									if (iLocal_57)
									{
										func_6(&(uLocal_49[1]), &(uLocal_51[1]));
										if (unk_0x9CF7186A344D26A9(103, "AirplaneLandingRedux"))
										{
											unk_0x9C6D92A07D6159B7(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_58 = 0;
											iLocal_65 = 2;
										}
										else
										{
											unk_0x498685EB9132AF88(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_49[1]), &(uLocal_51[1]));
									if (unk_0x9CF7186A344D26A9(103, "AirplaneLandingRedux"))
									{
										unk_0x9C6D92A07D6159B7(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_58 = 0;
										iLocal_65 = 2;
									}
									else
									{
										unk_0x498685EB9132AF88(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (unk_0x419E13582192CFEA(uLocal_49[1]) && !unk_0xE50EB54E0F21BED0(uLocal_49[1], 0))
					{
						if (!unk_0xAB0BB1BDD76B67DC(uLocal_49[1]))
						{
							iLocal_65 = 3;
						}
					}
					break;
				
				case 3:
					if (unk_0x419E13582192CFEA(uLocal_49[2]) && !unk_0xE50EB54E0F21BED0(uLocal_49[2], 0))
					{
						if (unk_0x9CF7186A344D26A9(101, "AirportNew"))
						{
							if (!unk_0x3D6C3476988DE6E1(Local_53[2 /*3*/], 50f))
							{
								if (!unk_0xAB0BB1BDD76B67DC(uLocal_49[2]))
								{
									func_6(&(uLocal_49[2]), &(uLocal_51[2]));
									unk_0x069557E67CC67C29(uLocal_49[2], 101, "AirportNew", 1);
									iLocal_65 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (unk_0x419E13582192CFEA(uLocal_49[2]) && !unk_0xE50EB54E0F21BED0(uLocal_49[2], 0))
					{
						if (unk_0xAB0BB1BDD76B67DC(uLocal_49[2]))
						{
							fLocal_64 = unk_0x0829510481BBFC01(uLocal_49[2]);
						}
					}
					if (unk_0x419E13582192CFEA(uLocal_49[1]) && !unk_0xE50EB54E0F21BED0(uLocal_49[1], 0))
					{
						if (!unk_0xAB0BB1BDD76B67DC(uLocal_49[1]))
						{
							if (unk_0x98E18969B1D0C4AB(uLocal_49[1]))
							{
								func_8(&(uLocal_49[1]), &(uLocal_51[1]));
								iLocal_58 = 1;
							}
						}
					}
					if (fLocal_64 > 1100f)
					{
						if (unk_0x419E13582192CFEA(uLocal_49[3]) && !unk_0xE50EB54E0F21BED0(uLocal_49[3], 0))
						{
							if (unk_0x9CF7186A344D26A9(104, "AirplaneLandingRedux"))
							{
								if (!unk_0x3D6C3476988DE6E1(Local_53[3 /*3*/], 50f))
								{
									if (!unk_0xAB0BB1BDD76B67DC(uLocal_49[3]) && iLocal_58)
									{
										func_6(&(uLocal_49[3]), &(uLocal_51[3]));
										unk_0x069557E67CC67C29(uLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_65 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (unk_0x419E13582192CFEA(uLocal_49[3]) && !unk_0xE50EB54E0F21BED0(uLocal_49[3], 0))
					{
						if (!unk_0xAB0BB1BDD76B67DC(uLocal_49[3]))
						{
							func_5();
							iLocal_65 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_63 = 0f;
	iLocal_55 = 0;
	iLocal_59 = 1;
	iLocal_57 = 0;
}

void func_6(var uParam0, var uParam1)
{
	unk_0x4603196EEEA2355C(*uParam0, 1, 0);
	unk_0x4603196EEEA2355C(*uParam1, 1, 0);
	unk_0x3CBE9F07524C242D(*uParam0, 1, 0);
	unk_0xA2C015B68CE01357(*uParam0, 0);
}

void func_7()
{
	struct<3> Var0;
	
	switch (iLocal_61)
	{
		case 0:
			if (!unk_0x419E13582192CFEA(uLocal_50))
			{
				uLocal_50 = unk_0x170478CC84C8AE2F(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
				unk_0x83E421E5A4A2A512(uLocal_50, 1000);
				unk_0x89E171705EA920DA(uLocal_50, 1, 1, 0);
				unk_0x058C28579D81FB08(uLocal_50, 0);
				uLocal_52 = unk_0x42F3C85A00B4FC7B(uLocal_50, 4, iLocal_62, -1, 1, 1);
				unk_0xBE91B077ADADE97F(uLocal_52, 1);
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			if (unk_0x419E13582192CFEA(uLocal_50) && !unk_0xE50EB54E0F21BED0(uLocal_50, 0))
			{
				if (unk_0x9CF7186A344D26A9(101, "EastWestFlight"))
				{
					if (!unk_0xAB0BB1BDD76B67DC(uLocal_50))
					{
						unk_0x9C6D92A07D6159B7(uLocal_50, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_61 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
			}
			if (unk_0x419E13582192CFEA(uLocal_50) && !unk_0xE50EB54E0F21BED0(uLocal_50, 0))
			{
				if (!unk_0xAB0BB1BDD76B67DC(uLocal_50))
				{
					if ((unk_0x98E18969B1D0C4AB(uLocal_50) && !unk_0x3D6C3476988DE6E1(-1602.086f, -2674.039f, 12.9444f, 50f)) && vdist2(Var0, unk_0xD6E677FAD7521410(uLocal_50, 1)) > 62500f)
					{
						iLocal_61 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	unk_0x4603196EEEA2355C(*uParam0, 0, 0);
	unk_0x4603196EEEA2355C(*uParam1, 0, 0);
	unk_0x3CBE9F07524C242D(*uParam0, 0, 0);
	unk_0xA2C015B68CE01357(*uParam0, 1);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	unk_0x4BFE89D21F9885DC();
}

void func_13()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	
	if (unk_0x419E13582192CFEA(uLocal_67))
	{
		if (unk_0x98E18969B1D0C4AB(uLocal_67))
		{
			unk_0x5420D0D520CF44D0(&uLocal_67);
		}
		else if (!unk_0xE50EB54E0F21BED0(uLocal_67, 0) && !unk_0xECEC7528A52B4EE8(uLocal_68))
		{
			unk_0x50B76EE36FBE865F(uLocal_67);
			unk_0x504B26425DFF773C(uLocal_68, 1);
			Var0 = { unk_0xD6E677FAD7521410(uLocal_67, 1) };
			uVar3 = unk_0xA8D713A937F31250(uLocal_67);
			Var1 = { 0f, 500f, 50f };
			Var2 = { unk_0x26C2ACB261895E70(Var0, uVar3, Var1) };
			unk_0x040CCF00053DBCB0(uLocal_68, uLocal_67, 0, 0, Var2, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_73)
	{
		unk_0x7B6B41ECBE4B733F(102, "HelicopterTakeOff");
	}
}

