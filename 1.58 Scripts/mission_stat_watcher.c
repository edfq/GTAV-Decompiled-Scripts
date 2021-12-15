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
	struct<567> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	iLocal_62 = iLocal_61;
	iLocal_63 = iLocal_62;
	fLocal_68 = 100f;
	if (unk_0xB4C854DD86E40FDA(joaat("mission_stat_watcher")) > 1)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	Global_62684 = 0;
	Global_62691 = 0;
	iVar0 = 1;
	if (unk_0x4B34601C5C56F3EE(18))
	{
		func_114();
		Global_74785 = 0;
		Global_62685 = 0;
		Global_62711 = 0;
		unk_0xAFBDF6A5E54114C1();
	}
	iVar1 = 0;
	wait(0);
	func_112();
	while (!Global_62683)
	{
		wait(200);
		if (Global_62691)
		{
			func_114();
			unk_0xAFBDF6A5E54114C1();
		}
	}
	Global_62698 = 0;
	Global_62685 = 1;
	while (!Global_62684)
	{
		if (Global_74785 > 0)
		{
			func_106();
			if (Global_62718 == -1)
			{
				Global_62718 = unk_0x320D1840B6DAA1CC();
			}
			else if ((unk_0x320D1840B6DAA1CC() - Global_62718) > 1000)
			{
				func_105();
			}
		}
		if (Global_62691)
		{
			func_114();
			Global_62685 = 0;
			unk_0xAFBDF6A5E54114C1();
		}
		wait(0);
	}
	Global_62685 = 0;
	if (func_104())
	{
		while (func_104())
		{
			wait(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_62686 == iLocal_70)
		{
			if (Global_62686)
			{
				settimerb(0);
				iLocal_60 = 0;
				Global_62701 = 0;
			}
			iLocal_70 = Global_62686;
		}
		while (Global_62690)
		{
			wait(1000);
		}
		if (Global_62684 && !Global_62691)
		{
			if (Global_62683 || iLocal_72)
			{
				Global_62688 = 0;
				if (bLocal_71)
				{
				}
				if (Global_62684)
				{
				}
				if (!bLocal_71 == Global_62684)
				{
					func_103(&Local_45);
					Local_45.f_566 = 1;
					func_102();
					func_101();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_74785)
					{
						if (Global_74786[iVar3 /*9*/] > 0)
						{
							if (Global_62915[Global_74786[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_62915[Global_74786[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_62915[Global_74786[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_74786[iVar3 /*9*/].f_1 == 0)
										{
											Global_74786[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_78112 && !Global_62680) || Global_62692)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (unk_0xE9E8955A780DDA01() || unk_0xECD40FEF3CF43BDB())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_100013.f_8)
						{
							bVar5 = true;
						}
						if (Global_62710)
						{
							bVar5 = true;
						}
					}
					if (func_100(0))
					{
						bVar5 = true;
						Global_62710 = 1;
					}
					iVar6 = Global_74936;
					if (Global_62693)
					{
						func_97(Global_62694);
						iVar0 = 2;
						func_96(&Local_45, "HISHPA", &Global_62705, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_95(&Local_45, 3, "ACTATAKE_AG", "", Global_112915.f_1.f_126[Global_62694 /*23*/], 0, 0, 0);
						}
						else
						{
							func_95(&Local_45, 3, "POTATAKE", "", Global_112915.f_1.f_126[Global_62694 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_96204[Global_62694 /*38*/].f_37)
						{
							if (Global_96204[Global_62694 /*38*/].f_31[iVar7] > 0)
							{
								func_95(&Local_45, 3, func_94(Global_96204[Global_62694 /*38*/].f_25[iVar7]), "", (-1 * Global_96204[Global_62694 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_112915.f_1.f_126[Global_62694 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_95(&Local_45, 3, "ACTATAKE_M", "", Global_112915.f_1.f_126[Global_62694 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_112915.f_1.f_126[Global_62694 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_95(&Local_45, 3, "ACTATAKE_F", "", Global_112915.f_1.f_126[Global_62694 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_112915.f_1.f_126[Global_62694 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_95(&Local_45, 3, "ACTATAKE_T", "", Global_112915.f_1.f_126[Global_62694 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_96194.f_7 > 0)
						{
							func_95(&Local_45, 3, "ACTATAKE_L", "", Global_96194.f_7, 0, 0, 0);
						}
						iVar8 = func_92(func_93(Global_62694));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_96003[iVar8 /*19*/])
						{
							if (!func_91(Global_112915.f_1.f_12[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_112915.f_1.f_126[Global_62694 /*23*/].f_17[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_112915.f_1.f_126[Global_62694 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_95(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_95(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_100(0))
							{
								switch (iVar6)
								{
									case 90:
										unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_95(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_96(&Local_45, "MISHPA", &Global_62705, 0);
					}
					if (Global_74785 > 0)
					{
						func_76(&Local_45);
					}
					if (!Global_62680)
					{
						func_70();
					}
					while (!bVar5)
					{
						if (unk_0xE9E8955A780DDA01() || unk_0xECD40FEF3CF43BDB())
						{
							bVar5 = true;
						}
						wait(0);
					}
					if ((bVar5 || Global_62710) && !bVar4)
					{
						if (!Global_62692)
						{
							func_66(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_74935)
						{
							switch (Global_74936)
							{
								case 50:
								case 51:
								case 52:
									unk_0x6CE6C3A402C3E20C("HoldMissionCompleteWhenPrepared", 1);
									func_62(1);
									bVar11 = true;
									break;
								
								default:
									unk_0x6CE6C3A402C3E20C("HoldMissionCompleteWhenPrepared", 1);
									func_62(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							unk_0x6CE6C3A402C3E20C("HoldMissionCompleteWhenPrepared", 1);
							func_62(1);
							bVar11 = true;
						}
						iVar1 = func_61();
						unk_0x249A0D3C5714BCF4("MISHSTA", 3);
						while (!unk_0x01896B71C5AC966E(3))
						{
							wait(0);
						}
						bLocal_73 = true;
						while (unk_0xF34D8FCAE3FD4EE4())
						{
							wait(0);
						}
						while (unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
						{
							wait(0);
						}
						func_66(&Local_45, 1, 0);
						unk_0x6CE6C3A402C3E20C("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!unk_0x51B424149BC1C8F0())
							{
								wait(0);
							}
						}
						unk_0xAB06B90F4B4B3043();
					}
					if (Global_62683)
					{
						iLocal_72 = 1;
						Global_62683 = 0;
					}
					settimera(0);
				}
				if (bLocal_73 && !Global_62691)
				{
					if (unk_0xB4C854DD86E40FDA(joaat("appcamera")) > 0)
					{
						func_57(0);
					}
					if (Global_74785 > 0 || Global_62680)
					{
						if (Global_62710)
						{
							unk_0x2E04B7B46A3670E5(7);
						}
						if (iVar1 && !Global_62680)
						{
							Global_43528 = 1;
						}
						if (!Global_62692)
						{
							if (func_21(&Local_45, 0, to_float(iVar0), 0, 0, 0))
							{
								Global_62691 = 1;
							}
							func_20();
						}
						if (Global_62710)
						{
							unk_0x2E04B7B46A3670E5(7);
						}
					}
					func_19(1);
					if (!unk_0xE9E8955A780DDA01())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_71 = Global_62684;
				if (Global_62681)
				{
				}
				else
				{
					unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6());
					if (unk_0x0CF63873D754B965(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6())) < 1)
					{
						Global_62692 = 1;
					}
					if (((((func_104() || func_9()) || Global_62691) || Global_78121) || Global_62692) || !bLocal_73)
					{
						Global_62680 = 0;
						Global_62684 = 0;
						iLocal_72 = 0;
						Global_62687 = 0;
						Global_62688 = 0;
						Global_62698 = 0;
						Global_62701 = 0;
						func_19(0);
						func_2();
						Global_62691 = 0;
						bVar2 = true;
					}
				}
			}
		}
		wait(0);
	}
	func_1(&Local_45, 0);
	Global_31758 = 0;
	Global_62695 = 0;
	unk_0xAFBDF6A5E54114C1();
}

void func_1(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x705B098546DEB18A(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
		}
		unk_0x705B098546DEB18A(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x94B5910A9C945688(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78120)
	{
		if (!unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
		{
			if (!Global_78121)
			{
				if (unk_0xA829C9A2767AC8EF() && !func_100(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()
{
	if (Global_62690)
	{
		return;
	}
	Global_62699 = 0;
	Global_74785 = 0;
	Global_62701 = 0;
	if (Global_62698)
	{
	}
	Global_62698 = 0;
	func_19(0);
	func_8();
	Global_74937 = 0;
	Global_62689 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_62680 = 0;
	Global_62710 = 0;
	Global_62718 = -1;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_74972[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_74981 = 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_74938[iVar0 /*2*/] = 0;
		Global_74938[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_74971 = 0;
}

void func_5()
{
	Global_62849 = 0;
}

void func_6()
{
	Global_62709 = 0;
	Global_62713 = func_7(joaat("sp0_shots"));
	Global_62712 = func_7(joaat("sp0_hits"));
	Global_62715 = func_7(joaat("sp1_shots"));
	Global_62714 = func_7(joaat("sp1_hits"));
	Global_62717 = func_7(joaat("sp2_shots"));
	Global_62716 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)
{
	var uVar0;
	
	unk_0x61481F9FBB1C7EDD(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_62719 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_62720[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()
{
	return Global_1575046;
}

void func_10(int iParam0)
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
		unk_0xCED9E32812D6C7C7(&(Global_112915.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x3C57C2F07FEE34D2(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(&(Global_112915.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112915.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_8 = (unk_0x320D1840B6DAA1CC() + iParam3);
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = ((unk_0x320D1840B6DAA1CC() + iParam3) + iParam4);
		}
		else
		{
			Global_112915.f_20410[Global_112915.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_112915.f_20410.f_145++;
		func_13();
	}
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112915.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[0])
			{
				Global_112915.f_20410.f_146[0] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[1])
			{
				Global_112915.f_20410.f_146[1] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xE2D0C323A1AE5D85(Global_112915.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112915.f_20410[iVar0 /*16*/].f_12 > Global_112915.f_20410.f_146[2])
			{
				Global_112915.f_20410.f_146[2] = Global_112915.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_14(char* sParam0)
{
	if (unk_0x3C57C2F07FEE34D2(sParam0, &Global_111558))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112915.f_20410.f_145)
	{
		if (unk_0x3C57C2F07FEE34D2(uParam0, &(Global_112915.f_20410[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
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
		return unk_0xE2D0C323A1AE5D85(Global_112915.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_17()
{
	unk_0x16E09CCC0BD508DA();
	func_18();
}

void func_18()
{
	Global_22691.f_134 = 1;
}

void func_19(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

void func_20()
{
	Global_22691.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0x8142A6539DDC180F() == uParam0->f_578)
	{
		return uParam0->f_579;
	}
	uParam0->f_578 = unk_0x8142A6539DDC180F();
	if (!unk_0x9315DBF7D972F07A())
	{
		if (unk_0xE63474311C6E3825(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), 1))
		{
			uParam0->f_579 = 1;
			return 1;
		}
		if (unk_0x1C7F03843C4541AD(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6())))
		{
			uParam0->f_579 = 1;
			return 1;
		}
	}
	if (!uParam0->f_568)
	{
		if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x94B5910A9C945688(1);
			uParam0->f_568 = 1;
		}
	}
	if (unk_0x3583A42587543334(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (unk_0xA89C6F3818CC3ACB(unk_0x9E2D6C50374FCFA9(), 0))
			{
				unk_0xC204033758E4127F(unk_0x9E2D6C50374FCFA9(), 0);
			}
		}
	}
	unk_0xAC765EF46E85A446(7);
	unk_0xAC765EF46E85A446(8);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(19);
	unk_0x7653D561C9574763(2, 19, 1);
	unk_0x7653D561C9574763(0, 37, 1);
	unk_0x7653D561C9574763(0, 21, 1);
	unk_0x7653D561C9574763(0, 28, 1);
	unk_0x7653D561C9574763(0, 29, 1);
	unk_0x7653D561C9574763(0, 171, 1);
	func_54(0);
	if (unk_0x3A76A0944BE2C291(2))
	{
		if (unk_0x87694B2FAA0FC0C7() || (unk_0xA829C9A2767AC8EF() && !unk_0xECD40FEF3CF43BDB()))
		{
			unk_0x60236500251FDE8E();
		}
	}
	Global_43146 = 1;
	if (!uParam0->f_567)
	{
		switch (func_50(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6())))
		{
			case 1:
				unk_0x9DCF157443EA30D6("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x9DCF157443EA30D6("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x9DCF157443EA30D6("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_567 = 1;
	}
	if (uParam0->f_562 == 0)
	{
		uParam0->f_562 = (uParam0->f_576 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_576 >= (uParam0->f_562 - 1500))
	{
		uParam0->f_562 = uParam0->f_576 + 3000;
	}
	if (uParam0->f_564 == 0f)
	{
		uParam0->f_564 = (uParam0->f_564 + func_49(30f));
		uParam0->f_564 = (uParam0->f_564 + (IntToFloat(uParam0->f_56) * func_49(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_564 = (uParam0->f_564 + func_49((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_564 = (uParam0->f_564 + (func_49(30f) - func_49(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_576 = (uParam0->f_576 + round((0f + (1000f * timestep()))));
		func_26(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_569)
				{
					uParam0->f_569 = 0;
					uParam0->f_570 = 0;
					uParam0->f_577 = 0.75f;
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "TRANSITION_OUT");
			unk_0x6F06CF0E9AB02847();
			uParam0->f_546 = uParam0->f_576;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_576 > (uParam0->f_562 - 333))
		{
			if (!uParam0->f_565)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_566)
		{
			if (unk_0xB1C1E679BD17A4F0(2))
			{
				if (unk_0x0347CCBD719C8ADC(uParam0->f_4))
				{
					if (!uParam0->f_571)
					{
						func_22(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0xF09A4F413B0D30EB(2, 216) && uParam0->f_562 > uParam0->f_576 + 333)
		{
			if (((!uParam0->f_570 && uParam0->f_56 != 0) && unk_0x0347CCBD719C8ADC(uParam0->f_4)) && IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_569)
				{
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					if (uParam0->f_576 > (uParam0->f_562 - 5000))
					{
						uParam0->f_562 = uParam0->f_576 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
					uParam0->f_569 = 0;
					uParam0->f_577 = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_569 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_569 || uParam0->f_570) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_576) > (IntToFloat(uParam0->f_562 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_570 && !uParam0->f_569)
				{
					uParam0->f_569 = 1;
					uParam0->f_577 = 0.75f;
					unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0x6F06CF0E9AB02847();
				}
				uParam0->f_563 = func_25((uParam0->f_563 + (((1f / 0.3f) * uParam0->f_577) * timestep())), 0f, 1f);
				uParam0->f_577 = func_25((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_563 = func_25((uParam0->f_563 - ((((1f / 0.3f) * uParam0->f_577) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_577 = func_25((uParam0->f_577 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_576 > uParam0->f_562)
		{
			if (uParam0->f_565)
			{
				if (!uParam0->f_571)
				{
					if (unk_0xF09A4F413B0D30EB(2, 215))
					{
						uParam0->f_565 = 0;
					}
				}
			}
			else if ((uParam0->f_576 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_579 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)
{
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "CLEAR_ALL");
	unk_0x6F06CF0E9AB02847();
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(1);
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(0);
	func_24(unk_0x2018949B2C9FD96A(2, 215, 1));
	func_23("ES_HELP");
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xD7D6BA6E36AEC182(1);
		unk_0x4F47E317C74C543B(215);
	}
	unk_0x6F06CF0E9AB02847();
	if (bParam1)
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
		unk_0x4F47E317C74C543B(1);
		func_24(unk_0x2018949B2C9FD96A(2, 216, 1));
		func_23("ES_XPAND");
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xD7D6BA6E36AEC182(1);
			unk_0x4F47E317C74C543B(216);
		}
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x6F06CF0E9AB02847();
}

void func_23(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

void func_24(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_26(var uParam0, float fParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_48() * 0.25f);
	if (unk_0x0347CCBD719C8ADC(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				if (uParam0->f_560 == 4)
				{
					func_47(&(uParam0->f_13));
				}
				else
				{
					func_23(&(uParam0->f_13));
				}
				if (unk_0x9315DBF7D972F07A())
				{
					unk_0x4F47E317C74C543B(150);
				}
				else
				{
					unk_0x4F47E317C74C543B(100);
				}
				unk_0xD7D6BA6E36AEC182(1);
				if (uParam0->f_560 == 4)
				{
					unk_0x4F47E317C74C543B((uParam0->f_56 - 1));
				}
				else
				{
					unk_0x4F47E317C74C543B(uParam0->f_56);
				}
				unk_0xD7D6BA6E36AEC182(iParam2);
				if (uParam0->f_560 == 4 || uParam0->f_560 == 3)
				{
					unk_0x4F47E317C74C543B(2);
				}
				else
				{
					unk_0x4F47E317C74C543B(69);
				}
				unk_0x6F06CF0E9AB02847();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_576 > 600)
			{
				unk_0xEA5DEA46C3EE64D3(uParam0->f_1, "TRANSITION_UP");
				unk_0xCA5D23E5F0F0306F(0.15f);
				unk_0xD7D6BA6E36AEC182(1);
				unk_0x6F06CF0E9AB02847();
				uParam0->f_3 = 1;
			}
		}
		func_46();
		unk_0xC4353D240DCE9533(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_564 * uParam0->f_563) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_571)
	{
		fVar3 = (((0.1388889f + func_49((2f * 2f))) * uParam0->f_572) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_48());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_560 != 4)
	{
		fVar7 = func_45(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0xF4CC509EEB975296(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		if (!unk_0xACC32B78196FBC2A(&(uParam0->f_554)))
		{
			fVar7 = func_44(&(uParam0->f_550), &(uParam0->f_554));
		}
		else
		{
			fVar7 = func_45(&(uParam0->f_550));
		}
		fVar8 = (((0.119f + 0.05f) / func_48()) / 2.5f);
		if ((uParam0->f_560 == 1 || uParam0->f_560 == 0) && uParam0->f_561 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_560 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x07899AAA5D680386(2, 215);
	unk_0x07899AAA5D680386(2, 216);
	unk_0x07899AAA5D680386(2, 200);
	unk_0x7653D561C9574763(2, 200, 1);
	if (uParam0->f_566 || uParam0->f_571)
	{
		if ((IntToFloat(uParam0->f_562) - (14000f * fParam1)) < IntToFloat(uParam0->f_576) || ((uParam0->f_571 && uParam0->f_563 > 0.95f) && (uParam0->f_562 - 10000) < uParam0->f_576))
		{
			if (uParam0->f_571)
			{
				if (uParam0->f_574 < 0)
				{
					uParam0->f_574 = (uParam0->f_574 * -1);
					uParam0->f_574 = (uParam0->f_576 + uParam0->f_574);
				}
				if (uParam0->f_574 > 0)
				{
					if ((uParam0->f_574 - uParam0->f_576) > 0)
					{
						func_41((uParam0->f_574 - uParam0->f_576), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_574 = 0;
						uParam0->f_573 = 1;
						uParam0->f_571 = 0;
						uParam0->f_565 = 0;
						uParam0->f_566 = 0;
						uParam0->f_562 = uParam0->f_576 + 500;
						uParam0->f_574 = 0;
					}
				}
				if (uParam0->f_572 < 1f)
				{
					uParam0->f_572 = (uParam0->f_572 + (0f + ((1f / 0.166f) * timestep())));
					if (uParam0->f_572 > 1f)
					{
						uParam0->f_572 = 1f;
					}
				}
			}
			if (unk_0xA829C9A2767AC8EF())
			{
				unk_0x33F5772842F16E82();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_576 <= uParam0->f_562)
			{
				unk_0xAC765EF46E85A446(7);
				unk_0xAC765EF46E85A446(8);
				unk_0xAC765EF46E85A446(9);
				unk_0xAC765EF46E85A446(6);
				unk_0xC4353D240DCE9533(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_571)
			{
				unk_0x7653D561C9574763(0, 140, 1);
				unk_0x7653D561C9574763(0, 141, 1);
				unk_0x7653D561C9574763(0, 142, 1);
				unk_0x7653D561C9574763(2, 188, 1);
				if (unk_0xF01464D7AF0B7347(2, 188))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 3;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x7653D561C9574763(2, 187, 1);
				if (unk_0xF01464D7AF0B7347(2, 187))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 4;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x7653D561C9574763(2, 202, 1);
				if (unk_0xF01464D7AF0B7347(2, 202))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_571 = 0;
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					uParam0->f_573 = 2;
					uParam0->f_574 = 0;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_566)
			{
				unk_0xAC765EF46E85A446(7);
				unk_0xAC765EF46E85A446(8);
				unk_0xAC765EF46E85A446(9);
				unk_0xAC765EF46E85A446(6);
				unk_0x7653D561C9574763(0, 140, 1);
				unk_0x7653D561C9574763(0, 141, 1);
				unk_0x7653D561C9574763(0, 142, 1);
				if (unk_0xF09A4F413B0D30EB(2, 215) || unk_0xF01464D7AF0B7347(2, 200))
				{
					unk_0x91DFC8F68F6D9B05(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_566 = 0;
					uParam0->f_565 = 0;
					uParam0->f_562 = uParam0->f_576 + 500;
					unk_0x91DFC8F68F6D9B05(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x2F046C9381D8E91B(1, &uVar13, &uVar14, &uVar15, &iVar16);
	unk_0x71F4002CB1A0B451(uVar13, uVar14, uVar15, iVar0);
	unk_0xE835F806BE49C67B(fVar9, fVar10);
	unk_0xB8306DA8A5D18C52(0);
	unk_0x3F03C2D4EFA888BC(1f, 0.4f);
	fVar1 = (fVar1 - func_49(6f));
	fVar1 = (fVar1 + (func_49(30f) - func_49((2f * 2f))));
	fVar11 = (fVar2 - func_49((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_49(25f))), 0f, 1f);
		func_46();
		unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 - (func_49((2f - 0.5f)) - 0.001388889f)), fVar6, func_40(1f), uVar13, uVar14, uVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_49((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_49((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_48())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_49(25f))), 0f, 1f);
			func_37(uParam0, iVar17, (fVar1 + func_49(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_49(25f));
		if (uParam0->f_560 == 4)
		{
			if (iVar17 == (uParam0->f_580 - 1))
			{
				fVar1 = (fVar1 + func_49((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_48())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_49(2f));
					fVar12 = func_25((fVar11 / (0.6f * func_49(25f))), 0f, 1f);
					func_46();
					unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 + func_49((2f * 0.5f))), fVar6, func_40(1f), uVar13, uVar14, uVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_49((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_49((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_560 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_49((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_48())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_49(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_49(25f))), 0f, 1f);
			func_46();
			unk_0xCA4C0AD3CAFF651E(0.5f, (fVar1 + func_49((2f * 0.5f))), fVar6, func_40(1f), uVar13, uVar14, uVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_49((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_48())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_49(25f))), 0f, 1f);
			unk_0x71F4002CB1A0B451(uVar13, uVar14, uVar15, round((fVar12 * IntToFloat(iVar0))));
			func_30(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xE2F2D76A4AA269FF() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_48()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_48()) / 2.5f));
				if (uParam0->f_560 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_48()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_48()) / 2.5f));
				}
			}
			if (uParam0->f_561 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_560 != 3)
			{
				unk_0xE835F806BE49C67B(fVar20, fVar21);
				unk_0xB8306DA8A5D18C52(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xB8306DA8A5D18C52(0);
			}
			unk_0x3F03C2D4EFA888BC(1f, 0.4f);
			if (unk_0xACC32B78196FBC2A(&(uParam0->f_554)))
			{
				func_29(&(uParam0->f_550), fVar20, (fVar1 + func_49((2f * 2f))), 0, 0, 0);
			}
			else
			{
				func_28(&(uParam0->f_550), &(uParam0->f_554), fVar20, (fVar1 + func_49((2f * 2f))), 0, 0);
			}
			unk_0xE835F806BE49C67B(fVar20, fVar21);
			unk_0xB8306DA8A5D18C52(2);
			unk_0x3F03C2D4EFA888BC(1f, 0.4f);
			unk_0x21FC15AE6B6188C4(0);
			func_46();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0xE835F806BE49C67B(fVar20, fVar22);
			unk_0x71F4002CB1A0B451(uVar13, uVar14, uVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_560)
			{
				case 0:
					unk_0xCDDA0C58B818F6B2("PERCENTAGE");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_49((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0xCDDA0C58B818F6B2("FO_TWO_NUM");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x2AE954BA77A66307(uParam0->f_559);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_49((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0xCDDA0C58B818F6B2("MTPHPER_XPNO");
					unk_0x2AE954BA77A66307(uParam0->f_558);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_49((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0xCDDA0C58B818F6B2("ESDOLLA");
					unk_0x3788872A07BA04B3(uParam0->f_558, 1);
					unk_0x1A53079994915FA6(fVar20, (fVar1 + func_49((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_561 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_561)
				{
					case 1:
						unk_0x2F046C9381D8E91B(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x2F046C9381D8E91B(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x2F046C9381D8E91B(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_49(10f)) + fVar29);
				if (uParam0->f_560 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0xEBF08DA37D86CD05(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_49(30f) - 2f));
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5)
{
	unk_0x21FC15AE6B6188C4(iParam4);
	unk_0xF68E5437AF17EFBC(iParam5);
	func_46();
	unk_0xCDDA0C58B818F6B2(sParam0);
	unk_0x76DB21247AE4E4E2(sParam1);
	unk_0x1A53079994915FA6(fParam2, fParam3, 0);
}

void func_29(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x21FC15AE6B6188C4(iParam3);
	unk_0xF68E5437AF17EFBC(iParam5);
	func_46();
	if (bParam4)
	{
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(sParam0);
	}
	else
	{
		unk_0xCDDA0C58B818F6B2(sParam0);
	}
	unk_0x1A53079994915FA6(fParam1, fParam2, 0);
}

int func_30(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_36(iParam0), 64);
	StringCopy(&cVar1, func_33(iParam0, bParam1), 64);
	if (unk_0x2E87280918B16506(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x604161EB05F29E6D(&iVar2, &iVar3);
			fVar5 = unk_0xF4CC509EEB975296(0);
			if (func_32())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_32())
			{
				fVar4 = 1f;
			}
			if (unk_0xB4C854DD86E40FDA(joaat("director_mode")) > 0)
			{
				unk_0xBE74EC1CD33D16EA(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0xBE74EC1CD33D16EA(&iVar2, &iVar3);
		}
		Var7 = { unk_0x7DF13542ADA68880(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_31(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_31(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x2E87280918B16506(&(Global_22830.f_7286[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xD87C62FA7E75D2C5() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22829)
			{
				*fParam4 = (*fParam4 * (Global_22829 / *fParam3));
				*fParam3 = Global_22829;
			}
		}
		return 1;
	}
	return 0;
}

float func_31(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_32()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x604161EB05F29E6D(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_33(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_7286[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_22830.f_7286[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_35(unk_0x9E2D6C50374FCFA9()) };
			if (unk_0xF9518F925A4A1894(&Var2, &uVar1))
			{
				return func_34(&uVar1);
			}
		}
		else
		{
			return func_34(&(Global_22830.f_7286[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_34(var uParam0)
{
	return uParam0;
}

struct<13> func_35(var uParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(uParam0, &Var0, 13);
	return Var0;
}

char* func_36(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xACC32B78196FBC2A(&(Global_22830.f_6277[iParam0 /*16*/])))
	{
		if (unk_0x2E87280918B16506(&(Global_22830.f_6277[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_35(unk_0x9E2D6C50374FCFA9()) };
			unk_0xF9518F925A4A1894(&Var1, &uVar0);
			return func_34(&uVar0);
		}
		else
		{
			return func_34(&(Global_22830.f_6277[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_37(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x2F046C9381D8E91B(1, &uVar0, &uVar1, &uVar2, &uVar3);
	unk_0x71F4002CB1A0B451(uVar0, uVar1, uVar2, iParam5);
	unk_0xE835F806BE49C67B(fParam3, fParam4);
	unk_0xB8306DA8A5D18C52(1);
	unk_0x3F03C2D4EFA888BC(1f, func_39(14f));
	unk_0x21FC15AE6B6188C4(0);
	unk_0xF68E5437AF17EFBC(0);
	func_46();
	if (uParam0->f_531[iParam1])
	{
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0xCDDA0C58B818F6B2(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x2AE954BA77A66307(uParam0->f_489[iParam1]);
		}
	}
	unk_0x1A53079994915FA6(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_30(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_33(7, 0), (fParam4 - 0.006f), ((fParam2 + func_49(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_30(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_33(5, 0), (fParam4 - 0.006f), ((fParam2 + func_49(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_30(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", func_33(6, 0), (fParam4 - 0.006f), ((fParam2 + func_49(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xB8306DA8A5D18C52(1);
	}
	else
	{
		unk_0xB8306DA8A5D18C52(2);
	}
	unk_0x3F03C2D4EFA888BC(1f, func_39(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0xE835F806BE49C67B(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0xE835F806BE49C67B(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0x71F4002CB1A0B451(uVar0, uVar1, uVar2, iParam5);
	func_38(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_38(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x21FC15AE6B6188C4(0);
	unk_0xF68E5437AF17EFBC(0);
	func_46();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x3F03C2D4EFA888BC(1f, func_39(18f));
			unk_0xF68E5437AF17EFBC(4);
			if (iParam0 < 0)
			{
				unk_0x27ED46EA48C0A455("ESMINDOLLA");
				unk_0x3788872A07BA04B3((-1 * iParam0), 1);
				fVar1 = unk_0x63F498818B4DEE3E(0);
			}
			else
			{
				unk_0x27ED46EA48C0A455("ESDOLLA");
				unk_0x3788872A07BA04B3(iParam0, 1);
				fVar1 = unk_0x63F498818B4DEE3E(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0xEBF08DA37D86CD05("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x3F03C2D4EFA888BC(1f, func_39(14f));
			break;
	}
	unk_0x138506D6C7564EF1(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0xCDDA0C58B818F6B2("PERCENTAGE");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 1:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("FO_NUM");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 2:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("FO_TWO_NUM");
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x3F03C2D4EFA888BC(1f, func_39(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0xCDDA0C58B818F6B2("ESMINDOLLA");
				unk_0x3788872A07BA04B3((-1 * iParam0), 1);
			}
			else
			{
				unk_0xCDDA0C58B818F6B2("ESDOLLA");
				unk_0x3788872A07BA04B3(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0xCDDA0C58B818F6B2(sParam4);
			break;
		
		case 7:
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x76DB21247AE4E4E2(sParam4);
			break;
		
		case 8:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 14);
			break;
		
		case 9:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 6);
			break;
		
		case 10:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 2055);
			break;
		
		case 18:
			unk_0xF68E5437AF17EFBC(5);
			unk_0xCDDA0C58B818F6B2("STRING");
			unk_0x28594D0D61DB1278(iParam0, 2055);
			break;
		
		case 12:
			unk_0xCDDA0C58B818F6B2("AHD_DIST");
			unk_0x2AE954BA77A66307(iParam0);
			break;
		
		case 13:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam0);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 16:
			unk_0xCDDA0C58B818F6B2(sParam4);
			unk_0x2AE954BA77A66307(iParam1);
			break;
		
		case 20:
			unk_0xCDDA0C58B818F6B2(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0x1A53079994915FA6((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x3F03C2D4EFA888BC(1f, func_39(14f));
		}
		else
		{
			unk_0x1A53079994915FA6(fParam2, fParam3, 0);
		}
	}
}

float func_39(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_40(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_41(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_43(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_42(7, iVar0);
		Global_1645739.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1645739.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1645739.f_4617.f_172[iVar0] = iParam2;
		Global_1645739.f_4617.f_216[iVar0] = iParam3;
		Global_1645739.f_4617.f_183[iVar0] = iParam4;
		Global_1645739.f_4617.f_194[iVar0] = iParam5;
		Global_1645739.f_4617.f_249[iVar0] = iParam6;
		Global_1645739.f_4617.f_260[iVar0] = iParam7;
		Global_1645739.f_4617.f_205[iVar0] = iParam8;
		Global_1645739.f_4617.f_314[iVar0] = iParam9;
		Global_1645739.f_4617.f_325[iVar0] = iParam10;
		Global_1645739.f_4617.f_357[iVar0] = iParam11;
		Global_1645739.f_4617.f_238[iVar0] = iParam12;
		Global_1645739.f_4617.f_271[iVar0] = iParam13;
		Global_1645739.f_4617.f_368[iVar0] = iParam14;
		Global_1645739.f_4617.f_379[iVar0] = iParam15;
		Global_1645739.f_4617.f_390[iVar0] = iParam16;
		Global_1645739.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_42(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1645739.f_6736[iParam0]), iParam1);
}

bool func_43(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1645739.f_6736[iParam0], iParam1);
}

float func_44(char* sParam0, char* sParam1)
{
	unk_0x27ED46EA48C0A455(sParam0);
	unk_0x76DB21247AE4E4E2(uParam1);
	return (unk_0x63F498818B4DEE3E(1) / 2f);
}

float func_45(char* sParam0)
{
	unk_0x27ED46EA48C0A455(sParam0);
	return (unk_0x63F498818B4DEE3E(1) / 2f);
}

void func_46()
{
	unk_0x2E04B7B46A3670E5(1);
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xA829C9A2767AC8EF())
	{
		unk_0x2E04B7B46A3670E5(7);
	}
	unk_0xE53134ABB42F336F(0);
}

void func_47(var uParam0)
{
	unk_0x341872E4D54CD053(uParam0);
}

float func_48()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0x8FE9914D4872D601())
	{
	}
	return fVar0;
}

float func_49(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5965CDF24F93A9F(iParam0))
	{
		iVar1 = unk_0x15CAA6D7B11F1A7C(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_51(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_51(int iParam0)
{
	if (func_53(iParam0))
	{
		return func_52(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_52(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

bool func_53(int iParam0)
{
	return iParam0 < 3;
}

void func_54(int iParam0)
{
	if (func_56())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_55(0))
		{
			func_57(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

int func_55(int iParam0)
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

bool func_56()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_57(int iParam0)
{
	if (func_56())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_60())
		{
			func_59(1, 1);
		}
		else
		{
			func_59(0, 0);
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
	if (!func_58())
	{
		Global_19954.f_1 = 3;
	}
}

int func_58()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_55(0))
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

bool func_60()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		if (Global_74786[iVar0 /*9*/] > 0)
		{
			if (Global_62915[Global_74786[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_62(bool bParam0)
{
	char* sVar0;
	
	unk_0xF30CF8286FBA13D7(0);
	switch (func_63())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	unk_0xB6E6F1FBDDE27CF3(sVar0);
}

int func_63()
{
	func_64();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_64()
{
	int iVar0;
	
	if (unk_0xE5965CDF24F93A9F(unk_0xE2D3D51028F0428A()))
	{
		if (func_51(Global_112915.f_2363.f_539.f_4321) != unk_0x15CAA6D7B11F1A7C(unk_0xE2D3D51028F0428A()))
		{
			iVar0 = func_50(unk_0xE2D3D51028F0428A());
			if (func_53(iVar0) && (!func_65(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_53(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

bool func_65(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_66(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_69(uParam0);
	func_68(uParam0);
	if (unk_0x3C57C2F07FEE34D2(&(uParam0->f_550), "SPR_RESULT") || (unk_0x3C57C2F07FEE34D2(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_570 = 1;
	}
	if (unk_0x9315DBF7D972F07A())
	{
		unk_0xA9911C122B3210B5("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xA9911C122B3210B5("CommonMenu", 0);
		unk_0xA9911C122B3210B5("MPLeaderboard", 0);
		unk_0xA9911C122B3210B5("MPHud", 0);
		uParam0->f_1 = unk_0x528279F3F1EEF869("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0xD9EA500ADEAC231A("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x0347CCBD719C8ADC(uParam0->f_1) || !unk_0x9D4AFED2949F7082("CommonMenu")) || !unk_0x9D4AFED2949F7082("MPLeaderboard")) || !unk_0x9D4AFED2949F7082("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_566 || uParam0->f_571)
		{
			while (!unk_0x0347CCBD719C8ADC(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x0347CCBD719C8ADC(uParam0->f_1) || !unk_0x9D4AFED2949F7082("CommonMenu")) || !unk_0x9D4AFED2949F7082("MPLeaderboard")) || !unk_0x9D4AFED2949F7082("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_566)
		{
			if (!unk_0x0347CCBD719C8ADC(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_566)
	{
		if (uParam0->f_571)
		{
			func_67(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_78113 = 1;
	return 1;
}

void func_67(var uParam0)
{
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "CLEAR_ALL");
	unk_0x6F06CF0E9AB02847();
	if (unk_0x8FE9914D4872D601())
	{
		unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xD7D6BA6E36AEC182(1);
		unk_0x6F06CF0E9AB02847();
	}
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(2);
	func_24(unk_0x2018949B2C9FD96A(2, 188, 1));
	func_23("ES_HELP_TU");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(1);
	func_24(unk_0x2018949B2C9FD96A(2, 187, 1));
	func_23("ES_HELP_TD");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "SET_DATA_SLOT");
	unk_0x4F47E317C74C543B(0);
	func_24(unk_0x2018949B2C9FD96A(2, 202, 1));
	func_23("ES_HELP_AB");
	unk_0x6F06CF0E9AB02847();
	unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0x6F06CF0E9AB02847();
}

void func_68(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xB8306DA8A5D18C52(0);
	unk_0x3F03C2D4EFA888BC(1f, func_39(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x27ED46EA48C0A455("STRING");
			unk_0x76DB21247AE4E4E2(&(uParam0->f_13));
			fVar0 = unk_0x63F498818B4DEE3E(1);
		}
		else
		{
			unk_0x27ED46EA48C0A455(&(uParam0->f_13));
			fVar0 = unk_0x63F498818B4DEE3E(1);
		}
	}
	else
	{
		unk_0x27ED46EA48C0A455("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x2AE954BA77A66307(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x26C23BE14F66F202(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x76DB21247AE4E4E2(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x63F498818B4DEE3E(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_69(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (Global_74785 == 0)
	{
		return;
	}
	if (Global_74936 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		if (Global_74786[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		iVar3 = Global_74786[iVar0 /*9*/];
		bVar4 = !Global_62915[iVar3 /*13*/].f_7;
		bVar5 = Global_62915[iVar3 /*13*/].f_8;
		uVar6 = Global_62915[iVar3 /*13*/].f_12;
		fVar7 = Global_62915[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_75(iVar3, Global_74786[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_74786[iVar0 /*9*/].f_1;
			iVar10 = floor((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_74931 = iVar1;
	Global_74932 = iVar2;
	if (unk_0x20E4972CBF3DBE1B())
	{
		if (Global_74935 == 0)
		{
			iVar11 = Global_74936;
			if (iVar11 == 90)
			{
				if (Global_112915.f_9085.f_99.f_205[func_74(0)] == 2)
				{
					Var12.f_2.f_1 = 4;
					Var12.x = 716;
					unk_0x4A42A2E45A8D2C8B(&Var12);
					unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
					unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
					unk_0x6D1A116F1B08FA08(126, 1, 0f);
					unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
					unk_0x6D1A116F1B08FA08(135, func_73(810), 0f);
					unk_0x6D1A116F1B08FA08(136, func_73(811), 0f);
					unk_0x6D1A116F1B08FA08(132, func_73(812), 0f);
					unk_0x6D1A116F1B08FA08(2, func_73(813), 0f);
					unk_0x6D1A116F1B08FA08(141, func_73(814), 0f);
					unk_0x6D1A116F1B08FA08(127, func_73(815), 0f);
					unk_0x6D1A116F1B08FA08(137, func_73(816), 0f);
					unk_0x6D1A116F1B08FA08(7, func_73(817), 0f);
					unk_0x6D1A116F1B08FA08(133, func_73(818), 0f);
					unk_0x6D1A116F1B08FA08(90, func_73(819), 0f);
					Var12.x = 717;
					unk_0x4A42A2E45A8D2C8B(&Var12);
					unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
					unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
					unk_0x6D1A116F1B08FA08(126, 1, 0f);
					unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
					unk_0x6D1A116F1B08FA08(135, func_73(810), 0f);
					unk_0x6D1A116F1B08FA08(136, func_73(811), 0f);
					unk_0x6D1A116F1B08FA08(132, func_73(812), 0f);
					unk_0x6D1A116F1B08FA08(2, func_73(813), 0f);
					unk_0x6D1A116F1B08FA08(141, func_73(814), 0f);
					unk_0x6D1A116F1B08FA08(127, func_73(815), 0f);
					unk_0x6D1A116F1B08FA08(137, func_73(816), 0f);
					unk_0x6D1A116F1B08FA08(7, func_73(817), 0f);
					unk_0x6D1A116F1B08FA08(133, func_73(818), 0f);
					unk_0x6D1A116F1B08FA08(90, func_73(819), 0f);
				}
				else
				{
					func_72(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				Var13.f_2.f_1 = 4;
				Var13.x = 673;
				unk_0x4A42A2E45A8D2C8B(&Var13);
				unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
				unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
				unk_0x6D1A116F1B08FA08(126, 1, 0f);
				unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
				unk_0x6D1A116F1B08FA08(142, func_73(413), 0f);
				unk_0x6D1A116F1B08FA08(1, func_73(414), 0f);
				unk_0x6D1A116F1B08FA08(87, func_73(415), 0f);
				unk_0x6D1A116F1B08FA08(138, func_73(416), 0f);
				unk_0x6D1A116F1B08FA08(133, func_73(417), 0f);
				unk_0x6D1A116F1B08FA08(7, func_73(418), 0f);
				unk_0x6D1A116F1B08FA08(90, func_73(419), 0f);
				unk_0x6D1A116F1B08FA08(92, func_73(420), 0f);
				unk_0x6D1A116F1B08FA08(5, func_73(421), 0f);
				unk_0x6D1A116F1B08FA08(127, func_73(422), 0f);
				unk_0x6D1A116F1B08FA08(139, func_73(423), 0f);
				unk_0x6D1A116F1B08FA08(134, func_73(424), 0f);
				unk_0x6D1A116F1B08FA08(141, func_73(425), 0f);
				unk_0x6D1A116F1B08FA08(137, func_73(426), 0f);
				unk_0x6D1A116F1B08FA08(132, func_73(427), 0f);
				unk_0x6D1A116F1B08FA08(2, func_73(428), 0f);
				unk_0x6D1A116F1B08FA08(140, 0, 0f);
				Var13.x = 672;
				unk_0x4A42A2E45A8D2C8B(&Var13);
				unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
				unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
				unk_0x6D1A116F1B08FA08(126, 1, 0f);
				unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
				unk_0x6D1A116F1B08FA08(142, func_73(413), 0f);
				unk_0x6D1A116F1B08FA08(1, func_73(414), 0f);
				unk_0x6D1A116F1B08FA08(87, func_73(415), 0f);
				unk_0x6D1A116F1B08FA08(138, func_73(416), 0f);
				unk_0x6D1A116F1B08FA08(133, func_73(417), 0f);
				unk_0x6D1A116F1B08FA08(7, func_73(418), 0f);
				unk_0x6D1A116F1B08FA08(90, func_73(419), 0f);
				unk_0x6D1A116F1B08FA08(92, func_73(420), 0f);
				unk_0x6D1A116F1B08FA08(5, func_73(421), 0f);
				unk_0x6D1A116F1B08FA08(127, func_73(422), 0f);
				unk_0x6D1A116F1B08FA08(139, func_73(423), 0f);
				unk_0x6D1A116F1B08FA08(134, func_73(424), 0f);
				unk_0x6D1A116F1B08FA08(141, func_73(425), 0f);
				unk_0x6D1A116F1B08FA08(135, func_73(426), 0f);
				unk_0x6D1A116F1B08FA08(132, func_73(427), 0f);
				unk_0x6D1A116F1B08FA08(2, func_73(428), 0f);
				unk_0x6D1A116F1B08FA08(140, 0, 0f);
			}
			else
			{
				func_72(iVar11);
			}
			Global_112915.f_9085.f_330[iVar11 /*6*/].f_4 = Global_74931;
		}
		else
		{
			func_71(Global_74936);
		}
	}
}

void func_71(var uParam0)
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_72(int iParam0)
{
	struct<3> Var0;
	struct<13> Var1;
	var uVar2;
	
	Var0.f_2.f_1 = 4;
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return;
	}
	if (unk_0xF453DE81BDFDAE6F())
	{
		Var1 = { func_35(unk_0x9E2D6C50374FCFA9()) };
		if (unk_0x8C992447292D600F(&Var1))
		{
			if (unk_0x4FFBF2C0D8249E45(&uVar2, 35, &Var1))
			{
				Var0.f_1 = uVar2;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			Var0.x = 577;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(0), 0f);
			unk_0x6D1A116F1B08FA08(148, func_73(1), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(2), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(3), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(4), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(5), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(6), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(7), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(8), 0f);
			Var0.x = 913;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(0), 0f);
			unk_0x6D1A116F1B08FA08(148, func_73(1), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(2), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(3), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(4), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(5), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(6), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(7), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(8), 0f);
			return;
		
		case 1:
			Var0.x = 576;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(9), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(10), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(11), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(12), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(13), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(14), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(15), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(16), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(17), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(18), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(19), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(20), 0f);
			Var0.x = 575;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(9), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(10), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(11), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(12), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(13), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(14), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(15), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(16), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(17), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(18), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(19), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(20), 0f);
			return;
		
		case 2:
			Var0.x = 579;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(21), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(22), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(23), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(24), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(25), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(26), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(27), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(28), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(29), 0f);
			Var0.x = 578;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(21), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(22), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(23), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(24), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(25), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(26), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(27), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(28), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(29), 0f);
			return;
		
		case 3:
			Var0.x = 797;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(30), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(31), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(32), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(33), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(34), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(35), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(36), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(37), 0f);
			Var0.x = 796;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(30), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(31), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(32), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(33), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(34), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(35), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(36), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(37), 0f);
			return;
		
		case 4:
			Var0.x = 799;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(43), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(44), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(45), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(46), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(47), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(48), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(49), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(50), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(51), 0f);
			Var0.x = 798;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(43), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(44), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(45), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(46), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(47), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(48), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(49), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(50), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(51), 0f);
			return;
		
		case 5:
			Var0.x = 801;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(57), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(58), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(59), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(60), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(61), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(62), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(63), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(64), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(65), 0f);
			Var0.x = 800;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(57), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(58), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(59), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(60), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(61), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(62), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(63), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(64), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(65), 0f);
			return;
		
		case 6:
			Var0.x = 803;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(71), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(72), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(73), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(74), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(75), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(76), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(77), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(78), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(79), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(80), 0f);
			Var0.x = 802;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(71), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(72), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(73), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(74), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(75), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(76), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(77), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(78), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(79), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(80), 0f);
			return;
		
		case 7:
			Var0.x = 805;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(86), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(87), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(88), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(89), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(90), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(91), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(92), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(93), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(94), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(95), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(96), 0f);
			Var0.x = 804;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(86), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(87), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(88), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(89), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(90), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(91), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(92), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(93), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(94), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(95), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(96), 0f);
			return;
		
		case 9:
			Var0.x = 639;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(102), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(103), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(104), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(105), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(106), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(107), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(108), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(109), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(110), 0f);
			Var0.x = 638;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(102), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(103), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(104), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(105), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(106), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(107), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(108), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(109), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(110), 0f);
			return;
		
		case 8:
			Var0.x = 641;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(111), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(112), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(113), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(114), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(115), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(116), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(117), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(118), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(119), 0f);
			Var0.x = 640;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(111), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(112), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(113), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(114), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(115), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(116), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(117), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(118), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(119), 0f);
			return;
		
		case 10:
			Var0.x = 646;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(120), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(121), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(122), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(123), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(124), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(125), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(126), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(127), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(128), 0f);
			Var0.x = 645;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(120), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(121), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(122), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(123), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(124), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(125), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(126), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(127), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(128), 0f);
			return;
		
		case 11:
			Var0.x = 671;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(129), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(130), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(131), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(132), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(133), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(134), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(135), 0f);
			Var0.x = 670;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(129), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(130), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(131), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(132), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(133), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(134), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(135), 0f);
			return;
		
		case 12:
			Var0.x = 603;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(136), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(137), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(138), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(139), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(140), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(141), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(142), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(143), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(144), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(145), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(146), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(147), 0f);
			Var0.x = 602;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(136), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(137), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(138), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(139), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(140), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(141), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(142), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(143), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(144), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(145), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(146), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(147), 0f);
			return;
		
		case 13:
			Var0.x = 605;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(148), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(149), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(150), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(151), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(152), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(153), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(154), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(155), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(156), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(157), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(158), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(159), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(160), 0f);
			Var0.x = 604;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(148), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(149), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(150), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(151), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(152), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(153), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(154), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(155), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(156), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(157), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(158), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(159), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(160), 0f);
			return;
		
		case 14:
			Var0.x = 648;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(161), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(162), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(163), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(164), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(165), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(166), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(167), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(168), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(169), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(170), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(171), 0f);
			Var0.x = 647;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(161), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(162), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(163), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(164), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(165), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(166), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(167), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(168), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(169), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(170), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(171), 0f);
			return;
		
		case 15:
			Var0.x = 650;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(172), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(173), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(174), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(175), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(176), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(177), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(178), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(179), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(180), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(181), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(182), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(183), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(184), 0f);
			Var0.x = 649;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(172), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(173), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(174), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(175), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(176), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(177), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(178), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(179), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(180), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(181), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(182), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(183), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(184), 0f);
			return;
		
		case 16:
			Var0.x = 656;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(185), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(186), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(187), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(188), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(189), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(190), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(191), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(192), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(193), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(194), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(195), 0f);
			Var0.x = 655;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(185), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(186), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(187), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(188), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(189), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(190), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(191), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(192), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(193), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(194), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(195), 0f);
			return;
		
		case 17:
			Var0.x = 583;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(196), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(197), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(198), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(199), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(200), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(201), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(202), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(203), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(204), 0f);
			Var0.x = 582;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(196), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(197), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(198), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(199), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(200), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(201), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(202), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(203), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(204), 0f);
			return;
		
		case 18:
			Var0.x = 585;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(205), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(206), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(207), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(208), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(209), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(210), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(211), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(212), 0f);
			unk_0x6D1A116F1B08FA08(140, func_73(213), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(214), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(215), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(216), 0f);
			Var0.x = 584;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(205), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(206), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(207), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(208), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(209), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(210), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(211), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(212), 0f);
			unk_0x6D1A116F1B08FA08(140, func_73(213), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(214), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(215), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(216), 0f);
			return;
		
		case 19:
			Var0.x = 587;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(217), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(218), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(219), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(220), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(221), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(222), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(223), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(224), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(225), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(226), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(227), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(228), 0f);
			Var0.x = 586;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(217), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(218), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(219), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(220), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(221), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(222), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(223), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(224), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(225), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(226), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(227), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(228), 0f);
			return;
		
		case 20:
			Var0.x = 609;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(229), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(230), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(231), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(232), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(233), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(234), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(235), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(236), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(237), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(238), 0f);
			Var0.x = 608;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(229), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(230), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(231), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(232), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(233), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(234), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(235), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(236), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(237), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(238), 0f);
			return;
		
		case 21:
			Var0.x = 621;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(239), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(240), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(241), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(242), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(243), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(244), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(245), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(246), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(247), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(248), 0f);
			Var0.x = 620;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(239), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(240), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(241), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(242), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(243), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(244), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(245), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(246), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(247), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(248), 0f);
			return;
		
		case 22:
			Var0.x = 675;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(249), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(250), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(251), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(252), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(253), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(254), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(255), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(256), 0f);
			Var0.x = 674;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(249), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(250), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(251), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(252), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(253), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(254), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(255), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(256), 0f);
			return;
		
		case 26:
			Var0.x = 712;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(257), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(258), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(259), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(260), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(261), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(262), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(263), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(264), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(265), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(266), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(267), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(268), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(269), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(270), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(271), 0f);
			unk_0x6D1A116F1B08FA08(103, func_73(272), 0f);
			Var0.x = 711;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(257), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(258), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(259), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(260), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(261), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(262), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(263), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(264), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(265), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(266), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(267), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(268), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(269), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(270), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(271), 0f);
			unk_0x6D1A116F1B08FA08(103, func_73(272), 0f);
			return;
		
		case 29:
			Var0.x = 611;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(273), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(274), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(275), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(276), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(277), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(278), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(279), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(280), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(281), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(282), 0f);
			Var0.x = 610;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(273), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(274), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(275), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(276), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(277), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(278), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(279), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(280), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(281), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			Var0.x = 615;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(283), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(284), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(285), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(286), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(287), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(288), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(289), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(290), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(291), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(292), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(293), 0f);
			Var0.x = 614;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(283), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(284), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(285), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(286), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(287), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(288), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(289), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(290), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(291), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(292), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(293), 0f);
			return;
		
		case 31:
			Var0.x = 623;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(294), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(295), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(296), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(297), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(298), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(299), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(300), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(301), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(302), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(303), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(304), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(305), 0f);
			Var0.x = 622;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(294), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(295), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(296), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(297), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(298), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(299), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(300), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(301), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(302), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(303), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(304), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(305), 0f);
			return;
		
		case 38:
			Var0.x = 627;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(306), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(307), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(308), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(309), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(310), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(311), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(312), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(313), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(314), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(315), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(316), 0f);
			Var0.x = 626;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(306), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(307), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(308), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(309), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(310), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(311), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(312), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(313), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(314), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(315), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(316), 0f);
			return;
		
		case 33:
			Var0.x = 741;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(317), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(318), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(319), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(320), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(321), 0f);
			Var0.x = 740;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(317), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(318), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(319), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(320), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(321), 0f);
			return;
		
		case 34:
			Var0.x = 745;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(322), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(323), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(324), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(325), 0f);
			Var0.x = 742;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(322), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(323), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(324), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(325), 0f);
			return;
		
		case 39:
			Var0.x = 658;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(326), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(327), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(328), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(329), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(330), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(331), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(332), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(333), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(334), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(335), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(336), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(337), 0f);
			Var0.x = 657;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(326), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(327), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(328), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(329), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(330), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(331), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(332), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(333), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(334), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(335), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(336), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(337), 0f);
			return;
		
		case 40:
			Var0.x = 581;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(338), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(339), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(340), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(341), 0f);
			unk_0x6D1A116F1B08FA08(140, func_73(342), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(343), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(344), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(345), 0f);
			Var0.x = 580;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(338), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(339), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(340), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(341), 0f);
			unk_0x6D1A116F1B08FA08(140, func_73(342), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(343), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(344), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(345), 0f);
			return;
		
		case 41:
			Var0.x = 619;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(346), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(347), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(348), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(349), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(350), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(351), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(352), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(353), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(354), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(355), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(356), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(357), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(358), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(359), 0f);
			Var0.x = 618;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(346), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(347), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(348), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(349), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(350), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(351), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(352), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(353), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(354), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(355), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(356), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(357), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(358), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(359), 0f);
			return;
		
		case 42:
			Var0.x = 704;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(360), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(361), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(362), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(363), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(364), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(365), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(366), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(367), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(368), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(369), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(370), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(371), 0f);
			Var0.x = 703;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(360), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(361), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(362), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(363), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(364), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(365), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(366), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(367), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(368), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(369), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(370), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(371), 0f);
			return;
		
		case 43:
			Var0.x = 593;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(372), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(373), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(374), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(375), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(376), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(377), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(378), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(379), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(380), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(381), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(382), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(383), 0f);
			Var0.x = 592;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(372), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(373), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(374), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(375), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(376), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(377), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(378), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(379), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(380), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(381), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(382), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(383), 0f);
			return;
		
		case 44:
			Var0.x = 589;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(384), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(385), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(386), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(387), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(388), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(389), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(390), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(391), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(392), 0f);
			Var0.x = 588;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(384), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(385), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(386), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(387), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(388), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(389), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(390), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(391), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(392), 0f);
			return;
		
		case 45:
			Var0.x = 635;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(393), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(394), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(395), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(396), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(397), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(398), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(399), 0f);
			Var0.x = 634;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(393), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(394), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(395), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(396), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(397), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(398), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(399), 0f);
			return;
		
		case 46:
			Var0.x = 669;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(400), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(401), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(402), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(403), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(404), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(405), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(406), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(407), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(408), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(409), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(410), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(411), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(412), 0f);
			Var0.x = 668;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(400), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(401), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(402), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(403), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(404), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(405), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(406), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(407), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(408), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(409), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(410), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(411), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(412), 0f);
			return;
		
		case 47:
			Var0.x = 673;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(413), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(414), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(415), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(416), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(417), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(418), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(419), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(420), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(421), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(422), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(423), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(424), 0f);
			unk_0x6D1A116F1B08FA08(141, func_73(425), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(426), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(427), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(428), 0f);
			Var0.x = 672;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(413), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(414), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(415), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(416), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(417), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(418), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(419), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(420), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(421), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(422), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(423), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(424), 0f);
			unk_0x6D1A116F1B08FA08(141, func_73(425), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(426), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(427), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(428), 0f);
			return;
		
		case 48:
			Var0.x = 694;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(429), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(430), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(431), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(432), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(433), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(434), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(435), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(436), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(437), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(438), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(439), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(440), 0f);
			Var0.x = 693;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(429), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(430), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(431), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(432), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(433), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(434), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(435), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(436), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(437), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(438), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(439), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(440), 0f);
			return;
		
		case 49:
			Var0.x = 702;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(441), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(442), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(443), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(444), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(445), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(446), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(447), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(448), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(449), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(450), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(451), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(452), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(453), 0f);
			Var0.x = 701;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(441), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(442), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(443), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(444), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(445), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(446), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(447), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(448), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(449), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(450), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(451), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(452), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(453), 0f);
			return;
		
		case 53:
			Var0.x = 714;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(454), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(455), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(456), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(457), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(458), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(459), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(460), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(461), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(462), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(463), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(464), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(465), 0f);
			Var0.x = 713;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(454), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(455), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(456), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(457), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(458), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(459), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(460), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(461), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(462), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(463), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(464), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(465), 0f);
			return;
		
		case 60:
			Var0.x = 809;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(466), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(467), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(468), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(469), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(470), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(471), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(472), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(473), 0f);
			Var0.x = 808;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(466), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(467), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(468), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(469), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(470), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(471), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(472), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(473), 0f);
			return;
		
		case 61:
			Var0.x = 637;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(474), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(475), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(476), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(477), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(478), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(479), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(480), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(481), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(482), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(483), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(484), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(485), 0f);
			Var0.x = 636;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(474), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(475), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(476), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(477), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(478), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(479), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(480), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(481), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(482), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(483), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(484), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(485), 0f);
			return;
		
		case 62:
			Var0.x = 599;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(486), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(487), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(488), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(489), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(490), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(491), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(492), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(493), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(494), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(495), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(496), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(497), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(498), 0f);
			Var0.x = 598;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(486), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(487), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(488), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(489), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(490), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(491), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(492), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(493), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(494), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(495), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(496), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(497), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(498), 0f);
			return;
		
		case 63:
			Var0.x = 601;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(499), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(500), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(501), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(502), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(503), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(504), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(505), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(506), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(507), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(508), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(509), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(510), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(511), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(512), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(513), 0f);
			unk_0x6D1A116F1B08FA08(9, func_73(514), 0f);
			Var0.x = 600;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(499), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(500), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(501), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(502), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(503), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(504), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(505), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(506), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(507), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(508), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(509), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(510), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(511), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(512), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(513), 0f);
			unk_0x6D1A116F1B08FA08(9, func_73(514), 0f);
			return;
		
		case 64:
			Var0.x = 607;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(515), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(516), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(517), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(518), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(519), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(520), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(521), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(522), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(523), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(524), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(525), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(526), 0f);
			Var0.x = 606;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(515), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(516), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(517), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(518), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(519), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(520), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(521), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(522), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(523), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(524), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(525), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(526), 0f);
			return;
		
		case 66:
			Var0.x = 680;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(527), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(528), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(529), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(530), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(531), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(532), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(533), 0f);
			Var0.x = 676;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(527), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(528), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(529), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(530), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(531), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(532), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(533), 0f);
			return;
		
		case 67:
			Var0.x = 679;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(534), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(535), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(536), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(537), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(538), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(539), 0f);
			Var0.x = 678;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(534), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(535), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(536), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(537), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(538), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(539), 0f);
			return;
		
		case 68:
			Var0.x = 725;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(540), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(541), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(542), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(543), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(544), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(545), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(546), 0f);
			Var0.x = 724;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(540), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(541), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(542), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(543), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(544), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(545), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			Var0.x = 686;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(547), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(548), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(549), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(550), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(551), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(552), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(553), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(554), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(555), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(556), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(557), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(558), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(559), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(560), 0f);
			Var0.x = 681;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(547), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(548), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(549), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(550), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(551), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(552), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(553), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(554), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(555), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(556), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(557), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(558), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(559), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(560), 0f);
			return;
		
		case 70:
			Var0.x = 721;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(561), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(562), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(563), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(564), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(565), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(566), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(567), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(568), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(569), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(570), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(571), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(572), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(573), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(574), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(575), 0f);
			Var0.x = 720;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(561), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(562), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(563), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(564), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(565), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(566), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(567), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(568), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(569), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(570), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(571), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(572), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(573), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(574), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(575), 0f);
			return;
		
		case 71:
			Var0.x = 617;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(576), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(577), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(578), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(579), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(580), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(581), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(582), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(583), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(584), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(585), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(586), 0f);
			Var0.x = 616;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(576), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(577), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(578), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(579), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(580), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(581), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(582), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(583), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(584), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(585), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(586), 0f);
			return;
		
		case 72:
			Var0.x = 727;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(587), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(588), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(589), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(590), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(591), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(592), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(593), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(594), 0f);
			Var0.x = 726;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(587), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(588), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(589), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(590), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(591), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(592), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(593), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(594), 0f);
			return;
		
		case 73:
			Var0.x = 729;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(595), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(596), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(597), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(598), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(599), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(600), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(601), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(602), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(603), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(604), 0f);
			Var0.x = 728;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(595), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(596), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(597), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(598), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(599), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(600), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(601), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(602), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(603), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(604), 0f);
			return;
		
		case 74:
			Var0.x = 625;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(605), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(606), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(607), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(608), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(609), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(610), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(611), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(612), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(613), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(614), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(615), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(616), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(617), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(618), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(619), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(620), 0f);
			Var0.x = 624;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(605), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(606), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(607), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(608), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(609), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(610), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(611), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(612), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(613), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(614), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(615), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(616), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(617), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(618), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(619), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(620), 0f);
			return;
		
		case 75:
			Var0.x = 719;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(621), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(622), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(623), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(624), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(625), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(626), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(627), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(628), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(629), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(630), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(631), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(632), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(633), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(634), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(635), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(636), 0f);
			Var0.x = 718;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(621), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(622), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(623), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(624), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(625), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(626), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(627), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(628), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(629), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(630), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(631), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(632), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(633), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(634), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(635), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(636), 0f);
			return;
		
		case 76:
			Var0.x = 667;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(637), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(638), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(639), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(640), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(641), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(642), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(643), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(644), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(645), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(646), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(647), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(648), 0f);
			Var0.x = 666;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(637), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(638), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(639), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(640), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(641), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(642), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(643), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(644), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(645), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(646), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(647), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(648), 0f);
			return;
		
		case 78:
			Var0.x = 735;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(649), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(650), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(651), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(652), 0f);
			Var0.x = 734;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(649), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(650), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(651), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(652), 0f);
			return;
		
		case joaat("mpsv_lp0_31"):
			Var0.x = 737;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(653), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(654), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(655), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(656), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(657), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(658), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(659), 0f);
			Var0.x = 736;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(653), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(654), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(655), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(656), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(657), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(658), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(659), 0f);
			return;
		
		case 84:
			Var0.x = 706;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(660), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(661), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(662), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(663), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(664), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(665), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(666), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(667), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(668), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(669), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(670), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(671), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(672), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(673), 0f);
			Var0.x = 705;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(660), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(661), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(662), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(663), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(664), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(665), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(666), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(667), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(668), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(669), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(670), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(671), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(672), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(673), 0f);
			return;
		
		case 85:
			Var0.x = 723;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(674), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(675), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(676), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(677), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(678), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(679), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(680), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(681), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(682), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(683), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(684), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(685), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(686), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(687), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(688), 0f);
			Var0.x = 722;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(674), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(675), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(676), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(677), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(678), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(679), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(680), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(681), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(682), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(683), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(684), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(685), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(686), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(687), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(688), 0f);
			return;
		
		case 86:
			Var0.x = 595;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(689), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(690), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(691), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(692), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(693), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(694), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(695), 0f);
			Var0.x = 594;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(689), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(690), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(691), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(692), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(693), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(694), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(695), 0f);
			return;
		
		case 87:
			Var0.x = 731;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(696), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(697), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(698), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(699), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(700), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(701), 0f);
			Var0.x = 730;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(696), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(697), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(698), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(699), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(700), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(701), 0f);
			return;
		
		case 88:
			Var0.x = 733;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(702), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(703), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(704), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(705), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(706), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(707), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(708), 0f);
			Var0.x = 732;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(702), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(703), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(704), 0f);
			unk_0x6D1A116F1B08FA08(139, func_73(705), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(706), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(707), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(708), 0f);
			return;
		
		case 91:
			Var0.x = 652;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(709), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(710), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(711), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(712), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(713), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(714), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(715), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(716), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(717), 0f);
			Var0.x = 651;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(709), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(710), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(711), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(712), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(713), 0f);
			unk_0x6D1A116F1B08FA08(142, func_73(714), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(715), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(716), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(717), 0f);
			return;
		
		case 92:
			Var0.x = 739;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(718), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(719), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(720), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(721), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(722), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(723), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(724), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(725), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(726), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(727), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(728), 0f);
			Var0.x = 738;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(718), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(719), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(720), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(721), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(722), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(723), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(724), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(725), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(726), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(727), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(728), 0f);
			return;
		
		case 93:
			Var0.x = 654;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(729), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(730), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(731), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(732), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(733), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(734), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(735), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(736), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(737), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(738), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(739), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(740), 0f);
			Var0.x = 653;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(729), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(730), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(731), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(732), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(733), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(734), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(735), 0f);
			unk_0x6D1A116F1B08FA08(87, func_73(736), 0f);
			unk_0x6D1A116F1B08FA08(1, func_73(737), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(738), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(739), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(740), 0f);
			return;
		
		case 90:
			Var0.x = 597;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(810), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(811), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(812), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(813), 0f);
			unk_0x6D1A116F1B08FA08(141, func_73(814), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(815), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(816), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(817), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(818), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(819), 0f);
			Var0.x = 596;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(810), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(811), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(812), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(813), 0f);
			unk_0x6D1A116F1B08FA08(141, func_73(814), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(815), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(816), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(817), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(818), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(819), 0f);
			return;
		
		case 36:
			Var0.x = 831;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(820), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(821), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(822), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(823), 0f);
			Var0.x = 832;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(820), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(821), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(822), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(823), 0f);
			return;
		
		case 37:
			Var0.x = 833;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(824), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(825), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(826), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(827), 0f);
			Var0.x = 834;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(824), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(825), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(826), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(827), 0f);
			return;
		
		case 24:
			Var0.x = 848;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(846), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(847), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(848), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(849), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(850), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(851), 0f);
			Var0.x = 847;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(846), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(847), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(848), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(849), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(850), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(851), 0f);
			return;
		
		case 25:
			Var0.x = 846;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(852), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(853), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(854), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(855), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(856), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(857), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(858), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(859), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(860), 0f);
			Var0.x = 845;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(852), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(853), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(854), 0f);
			unk_0x6D1A116F1B08FA08(5, func_73(855), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(856), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(857), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(858), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(859), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(860), 0f);
			return;
		
		case 59:
			Var0.x = 807;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(861), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(862), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(863), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(864), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(865), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(866), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(867), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(868), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(869), 0f);
			Var0.x = 806;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(861), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(862), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(863), 0f);
			unk_0x6D1A116F1B08FA08(135, func_73(864), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(865), 0f);
			unk_0x6D1A116F1B08FA08(136, func_73(866), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(867), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(868), 0f);
			unk_0x6D1A116F1B08FA08(137, func_73(869), 0f);
			return;
		
		case 65:
			Var0.x = 838;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(870), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(871), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(872), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(873), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(874), 0f);
			Var0.x = 837;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(870), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(871), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(872), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(873), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			Var0.x = 917;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(875), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(876), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(877), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(878), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(879), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(880), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(881), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(882), 0f);
			Var0.x = 916;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(875), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(876), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(877), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(878), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(879), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(880), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(881), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(882), 0f);
			return;
		
		case 81:
			Var0.x = 919;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(883), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(884), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(885), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(886), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(887), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(888), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(889), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(890), 0f);
			Var0.x = 918;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(883), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(884), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(885), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(886), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(887), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(888), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(889), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(890), 0f);
			return;
		
		case 82:
			Var0.x = 921;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(891), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(892), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(893), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(894), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(895), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(896), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(897), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(898), 0f);
			Var0.x = 920;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(891), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(892), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(893), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(894), 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(895), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(896), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(897), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(898), 0f);
			return;
		
		case 83:
			Var0.x = 923;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(899), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(900), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(901), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(902), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(903), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(904), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(905), 0f);
			Var0.x = 922;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(899), 0f);
			unk_0x6D1A116F1B08FA08(134, func_73(900), 0f);
			unk_0x6D1A116F1B08FA08(92, func_73(901), 0f);
			unk_0x6D1A116F1B08FA08(133, func_73(902), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(903), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(904), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(905), 0f);
			return;
		
		case 89:
			Var0.x = 925;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(906), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(907), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(908), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(909), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(910), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(911), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(912), 0f);
			Var0.x = 924;
			unk_0x4A42A2E45A8D2C8B(&Var0);
			unk_0x6D1A116F1B08FA08(131, Global_74931, 0f);
			unk_0x6D1A116F1B08FA08(162, Global_74932, 0f);
			unk_0x6D1A116F1B08FA08(126, 1, 0f);
			unk_0x6D1A116F1B08FA08(161, Global_74934, 0f);
			unk_0x6D1A116F1B08FA08(138, func_73(906), 0f);
			unk_0x6D1A116F1B08FA08(2, func_73(907), 0f);
			unk_0x6D1A116F1B08FA08(7, func_73(908), 0f);
			unk_0x6D1A116F1B08FA08(127, func_73(909), 0f);
			unk_0x6D1A116F1B08FA08(95, func_73(910), 0f);
			unk_0x6D1A116F1B08FA08(90, func_73(911), 0f);
			unk_0x6D1A116F1B08FA08(132, func_73(912), 0f);
			return;
		
		default:
	}
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_112915.f_1.f_126[Global_62694 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_112915.f_1.f_126[Global_62694 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		if (Global_74786[iVar0 /*9*/] == iParam0)
		{
			return Global_74786[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_62915[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_112915.f_24904[4 /*4*/] == func_63())
	{
		Global_62915[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_62915[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_62915[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_62915[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_62680)
	{
		Global_62695 = 0;
		return;
	}
	iLocal_61 = 0;
	iLocal_62 = 0;
	iVar0 = 0;
	if (func_100(0))
	{
		unk_0x4A38A0835FED135B();
		Global_62682 = 1;
		unk_0x3E9C72BE85529FCA(33, 33);
	}
	iVar1 = -1;
	iLocal_66 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		switch (Global_74786[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_74786[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_87(uParam0, iVar0))
		{
		}
		if (Global_74786[iVar0 /*9*/] >= 0)
		{
			if (!Global_62915[Global_74786[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_62++;
				if (Global_74786[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_74786[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_74786[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_74934 = iLocal_61;
	fVar3 = func_82(uParam0, iLocal_61, iLocal_62, bVar2);
	if (func_100(0))
	{
		unk_0x0BC5939C2B796F37(Global_74936);
		unk_0x0BC5939C2B796F37(round(fVar3));
		if (bVar2)
		{
			unk_0x0BC5939C2B796F37(1);
		}
		else
		{
			unk_0x0BC5939C2B796F37(0);
		}
		if (Global_74935)
		{
			unk_0x0BC5939C2B796F37(1);
		}
		else
		{
			unk_0x0BC5939C2B796F37(0);
		}
		unk_0x7C6521E71E7516FF();
		Global_62682 = 0;
	}
	Global_62695 = 0;
	if (iVar1 > -1)
	{
		fVar3 = to_float(iVar1);
	}
	func_77(fVar3, bVar2);
}

void func_77(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_74935)
	{
		iVar1 = Global_74936;
		fVar0 = func_81(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_112915.f_10016.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_80(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_74936 == -1)
	{
	}
	else
	{
		iVar2 = Global_74936;
		fVar0 = func_79(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_112915.f_10016.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_78(iVar2, fParam0, bParam1);
		}
	}
}

void func_78(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_112915.f_9085.f_330[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_112915.f_9085.f_330[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_31515 = 1;
}

float func_79(int iParam0)
{
	return Global_112915.f_9085.f_330[iParam0 /*6*/].f_5;
}

void func_80(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_112915.f_18574[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_112915.f_18574[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_31515 = 1;
}

var func_81(int iParam0)
{
	return Global_112915.f_18574[iParam0 /*6*/].f_5;
}

float func_82(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_86(iParam1, iParam2, 0);
	iVar1 = func_85(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_84(uParam0, 1, "MTPHPER", 0, 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_83(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_83(iVar1))
	{
		case 109:
			func_84(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 108:
			func_84(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 107:
			func_84(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
	}
	return fVar0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

int func_85(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_86(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (to_float(iParam0) / to_float(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = to_float(ceil(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_87(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_74786[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_62915[Global_74786[iParam1 /*9*/] /*13*/] };
	if (Var2 == 15)
	{
		Global_74786[iParam1 /*9*/].f_1 = iLocal_69;
	}
	if (Var2 == 9)
	{
		Global_74786[iParam1 /*9*/].f_2 = fLocal_68;
	}
	if (Var2 == 14)
	{
		Global_74786[iParam1 /*9*/].f_1 = floor(Global_74786[iParam1 /*9*/].f_2);
	}
	if (func_75(Global_74786[iParam1 /*9*/], Global_74786[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_74786[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = to_float(floor(((to_float(Global_74786[iParam1 /*9*/].f_1) / to_float(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar3 = func_90(Var2.f_4);
	iVar4 = 0;
	switch (Global_74786[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar4 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar4 = 1;
			break;
	}
	if (Global_74786[iParam1 /*9*/].f_3 == 0 || iVar4)
	{
		if (Var2.f_3)
		{
			if ((iVar3 > Global_74786[iParam1 /*9*/].f_1 || iVar3 < 0) || iVar3 == -1)
			{
				func_89(Global_74786[iParam1 /*9*/].f_1, Global_74786[iParam1 /*9*/]);
			}
		}
		else if ((Global_74786[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0) || iVar3 == -1)
		{
			func_89(Global_74786[iParam1 /*9*/].f_1, Global_74786[iParam1 /*9*/]);
		}
	}
	iVar5 = Global_74786[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar6 = 1;
	if (fVar0 == 1f)
	{
		iLocal_61++;
		iVar6 = 2;
	}
	sVar7 = func_88(Global_74786[iParam1 /*9*/]);
	if (Global_74786[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_100(0))
		{
			func_89(-1, Global_74786[iParam1 /*9*/]);
		}
		sVar8 = "MTPHPERRET";
		switch (Global_74786[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar8 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar8 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar8 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar8 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_66 == Global_74786[iParam1 /*9*/].f_3)
		{
			sVar8 = "";
		}
		iLocal_66 = Global_74786[iParam1 /*9*/].f_3;
		func_95(uParam0, 6, sVar7, sVar8, Global_74786[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_66 = 0;
		switch (Var2)
		{
			case 1:
				func_95(uParam0, 8, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 2:
				func_95(uParam0, 9, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 3:
				func_95(uParam0, 0, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 4:
			case 17:
				func_95(uParam0, 9, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 5:
				func_95(uParam0, 11, sVar7, "", ceil(((to_float(Global_74786[iParam1 /*9*/].f_1) / to_float(Var2.f_2)) * 100f)), 0, iVar6, 0);
				break;
			
			case 6:
				func_95(uParam0, 0, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 7:
				if (iVar5 > Var2.f_2)
				{
					iVar5 = Var2.f_2;
				}
				func_95(uParam0, 2, sVar7, "", iVar5, Var2.f_2, iVar6, 0);
				break;
			
			case 8:
				iVar9 = Global_74786[iParam1 /*9*/].f_1;
				if (iVar9 > Var2.f_2)
				{
					iVar9 = Var2.f_2;
				}
				func_95(uParam0, 2, sVar7, "", iVar9, Var2.f_2, iVar6, 0);
				break;
			
			case 9:
				func_95(uParam0, 11, sVar7, "", round(Global_74786[iParam1 /*9*/].f_2), 0, iVar6, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_95(uParam0, 1, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 11:
				func_95(uParam0, 11, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 14:
				func_95(uParam0, 12, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 12:
			case 13:
				func_95(uParam0, 3, sVar7, "", Global_74786[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_62915[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_62915[iParam1 /*13*/].f_1 = iParam0;
	uVar1 = iParam0 + 1;
	unk_0x076A5661EF5ABEE4(iVar0, uVar1, 1);
	if (func_100(0) && Global_62682)
	{
		unk_0x0BC5939C2B796F37(iVar0);
		unk_0x0BC5939C2B796F37(iParam0);
		unk_0x0BC5939C2B796F37(iParam1);
	}
}

int func_90(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0x61481F9FBB1C7EDD(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_91(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_112915.f_1.f_118, iParam0);
}

int func_92(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112915.f_9085.f_99.f_205[iParam0];
}

int func_93(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_95(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_96(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_97(int iParam0)
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
	
	if (Global_96194.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_112915.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_112915.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_112915.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_112915.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_112915.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_112915.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_92(func_74(iParam0));
	iVar1 = Global_112915.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_99(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_99(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_112915.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_96204[iParam0 /*38*/].f_37)
	{
		if (Global_96204[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_96204[iParam0 /*38*/].f_31[iVar2]);
			Global_112915.f_1.f_126[iParam0 /*23*/].f_1 = (Global_112915.f_1.f_126[iParam0 /*23*/].f_1 - Global_96204[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = floor((to_float(Global_112915.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f));
		func_99(iParam0, 3, iVar4);
		Global_112915.f_1.f_126[iParam0 /*23*/].f_1 = (Global_112915.f_1.f_126[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_112915.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_112915.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_112915.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(((to_float(Global_95849[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_112915.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_112915.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(((to_float(Global_95849[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_112915.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_96003[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_112915.f_1.f_126[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_112915.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_112915.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_112915.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_96194.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_112915.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_112915.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_112915.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_112915.f_1.f_126[0 /*23*/].f_2[1] = ceil((0.12f * IntToFloat(Global_112915.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_112915.f_1.f_126[0 /*23*/].f_2[1]);
			Global_96194.f_7 = ceil((0.14f * IntToFloat(Global_112915.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96194.f_7);
			Global_96194.f_6 = 14f;
			Global_112915.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_112915.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_112915.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_112915.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_112915.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_112915.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_112915.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_96194.f_6 = -1f;
			break;
		
		case 2:
			Global_112915.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_112915.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_112915.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_96194.f_7 = ceil((0.12f * IntToFloat(Global_112915.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96194.f_7);
			Global_96194.f_6 = 12f;
			Global_112915.f_1.f_126[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_112915.f_1.f_126[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_112915.f_1.f_126[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_96194.f_6 = 0f;
			break;
		
		case 3:
			Global_112915.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_112915.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_112915.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_96194.f_7 = ceil((0.12f * IntToFloat(Global_112915.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96194.f_7);
			Global_96194.f_6 = 12f;
			Global_112915.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_112915.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_112915.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_112915.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_96194.f_7 = ceil((0.12f * IntToFloat(Global_112915.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_96194.f_7);
			Global_96194.f_6 = 12f;
			Global_112915.f_1.f_126[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_112915.f_1.f_126[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_112915.f_1.f_126[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_96194.f_6 = 0f;
			break;
	}
	iVar6 = Global_112915.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_112915.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_112915.f_1.f_126[iParam0 /*23*/].f_6[0] = ((to_float(Global_112915.f_1.f_126[iParam0 /*23*/].f_2[0]) / to_float(iVar6)) * 100f);
	}
	if (Global_112915.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_112915.f_1.f_126[iParam0 /*23*/].f_6[1] = ((to_float(Global_112915.f_1.f_126[iParam0 /*23*/].f_2[1]) / to_float(iVar6)) * 100f);
	}
	if (Global_112915.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_112915.f_1.f_126[iParam0 /*23*/].f_6[2] = ((to_float(Global_112915.f_1.f_126[iParam0 /*23*/].f_2[2]) / to_float(iVar6)) * 100f);
	}
	if (Global_96194.f_6 != -1f)
	{
		Global_96194.f_6 = ((to_float(Global_96194.f_7) / to_float(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			unk_0x076A5661EF5ABEE4(joaat("jewel_heist_raw_take"), Global_112915.f_1.f_126[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_112915.f_1.f_126[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_98(810, Global_112915.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_98(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_92(8))
			{
				case 3:
					func_98(610, Global_112915.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_98(611, iVar7, 1);
					break;
				
				case 4:
					func_98(622, Global_112915.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_98(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_98(734, Global_112915.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_98(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_92(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_92(11))
			{
				case 8:
					func_98(664, Global_112915.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_98(671, iVar7, 1);
					break;
				
				case 9:
					func_98(674, Global_112915.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_98(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_96194.f_3 = 1;
	Global_62690 = 0;
}

void func_98(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		if (Global_74786[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_74786[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_74786[iVar0 /*9*/].f_1 = (Global_74786[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_74786[iVar0 /*9*/] != -1)
	{
		if (Global_62915[Global_74786[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_74786[iVar0 /*9*/].f_1 > 1)
			{
				Global_74786[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_74786[iVar0 /*9*/].f_1 < 0)
			{
				Global_74786[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_96204[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_96204[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_96204[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_96204[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_96204[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			unk_0x076A5661EF5ABEE4(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_96204[iParam0 /*38*/].f_25[Global_96204[iParam0 /*38*/].f_37] = iParam1;
	Global_96204[iParam0 /*38*/].f_31[Global_96204[iParam0 /*38*/].f_37] = iVar0;
	Global_96204[iParam0 /*38*/].f_37++;
}

bool func_100(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_101()
{
	int iVar0;
	int iVar1;
	
	if (Global_74785 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		if (Global_74786[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_74786[iVar0 /*9*/].f_2 != 0f)
			{
				Global_74786[iVar0 /*9*/].f_1 = floor(Global_74786[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_74786[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_62915[iVar1 /*13*/] == 9)
			{
				Global_74786[iVar0 /*9*/].f_1 = round(fLocal_68);
			}
			if (Global_62915[iVar1 /*13*/] == 15)
			{
				Global_74786[iVar0 /*9*/].f_1 = iLocal_69;
			}
		}
		iVar0++;
	}
}

void func_102()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_62709)
	{
		return;
	}
	Global_62709 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_62713);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_62712);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_62715));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_62714));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_62717));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_62716));
	wait(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = to_float(iVar0);
		fVar4 = to_float(iVar1);
		fVar2 = to_float(floor(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_68 = fVar2;
	iLocal_69 = iVar0;
}

void func_103(var uParam0)
{
	func_69(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

int func_104()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return Global_97452.f_44 == 1;
	}
	return 0;
}

void func_105()
{
	int iVar0;
	
	if (Global_31754 == 0 && !Global_31758)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		Global_74786[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_106()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_107();
	if (((Global_62696 && unk_0x3583A42587543334(unk_0xB6BA8B8E3D0B41C6())) && !unk_0x496531E41FCF5116()) && !unk_0xF1EC2C71FD1371B8())
	{
		Global_62696 = 0;
	}
	if (Global_62689)
	{
		Global_62689 = 0;
		iLocal_60 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (unk_0xF1EC2C71FD1371B8())
	{
		bVar0 = false;
	}
	if (!unk_0xA08A61313445DB46())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_62696)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!unk_0x1C7A1A7E9E4766CF(unk_0xB6BA8B8E3D0B41C6()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_60 = round((unk_0x51109C28352EC9A3() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_74785)
	{
		if (Global_74786[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_62915[Global_74786[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_74786[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_74786[iVar2 /*9*/].f_7 == 1)
						{
							Global_74786[iVar2 /*9*/].f_8 = 0;
							Global_74786[iVar2 /*9*/].f_1 = 0;
							Global_74786[iVar2 /*9*/].f_7 = 0;
						}
						else if (unk_0xE5965CDF24F93A9F(Global_74786[iVar2 /*9*/].f_6))
						{
							if (!unk_0x55B23FE400FCEA6B(Global_74786[iVar2 /*9*/].f_6, 0))
							{
								iLocal_64 = Global_74786[iVar2 /*9*/].f_8;
								iLocal_63 = unk_0x0CF63873D754B965(Global_74786[iVar2 /*9*/].f_6);
								iLocal_65 = (iLocal_64 - iLocal_63);
								if (iLocal_65 > 0)
								{
									Global_74786[iVar2 /*9*/].f_1 = (Global_74786[iVar2 /*9*/].f_1 + iLocal_65);
									if (Global_74786[iVar2 /*9*/].f_1 < 0)
									{
										Global_74786[iVar2 /*9*/].f_1 = (Global_74786[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_74786[iVar2 /*9*/].f_8 = iLocal_63;
							}
						}
						else
						{
							Global_74786[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_74786[iVar2 /*9*/].f_1 = (Global_74786[iVar2 /*9*/].f_1 + iLocal_60);
					break;
				
				case 2:
					if (Global_62697)
					{
						Global_74786[iVar2 /*9*/].f_1 = (Global_74786[iVar2 /*9*/].f_1 + iLocal_60);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_62698)
					{
						if (Global_62700 == -1 || Global_74786[iVar2 /*9*/] == Global_62700)
						{
							if (((Global_74786[iVar2 /*9*/] == 339 || Global_74786[iVar2 /*9*/] == 179) || Global_74786[iVar2 /*9*/] == 342) || Global_74786[iVar2 /*9*/] == 234)
							{
								Global_74786[iVar2 /*9*/].f_1 = (Global_74786[iVar2 /*9*/].f_1 + round((unk_0x51109C28352EC9A3() * 1000f)));
							}
							else
							{
								Global_74786[iVar2 /*9*/].f_1 = (Global_74786[iVar2 /*9*/].f_1 + iLocal_60);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_62702 == -1 || Global_62702 == Global_74786[iVar2 /*9*/])
						{
							if (!Global_62701 == 0)
							{
								if (unk_0xE5965CDF24F93A9F(Global_62701))
								{
									if (!unk_0x55B23FE400FCEA6B(Global_62701, 0))
									{
										if (unk_0x04D9F44466CBF3CA(Global_62701))
										{
											fVar3 = unk_0x207D53F9E0190691(Global_62701);
											if (fVar3 > Global_74786[iVar2 /*9*/].f_2)
											{
												Global_74786[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_53(func_63()))
					{
						if (unk_0xA89C6F3818CC3ACB(unk_0xB6BA8B8E3D0B41C6(), 0) && unk_0x74EACB77C7688F1C(unk_0xB6BA8B8E3D0B41C6(), 0))
						{
							Global_74786[iVar2 /*9*/].f_1 = (Global_74786[iVar2 /*9*/].f_1 + iLocal_60);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_74981 == 0 && Global_74971 == 0) && Global_62849 == 0) && Global_62719 == 0) && !Global_74937)
	{
		return;
	}
	iVar10 = 0;
	if (Global_62719 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_62720[iVar0 /*2*/] != 0)
			{
				if (!unk_0xE5965CDF24F93A9F(Global_62720[iVar0 /*2*/]))
				{
					Global_62720[iVar0 /*2*/] = 0;
					Global_62719 = (Global_62719 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(0))
	{
		iVar3 = unk_0xB1D84E0EF6979085(0, iVar0);
		switch (iVar3)
		{
			case 142:
				unk_0x92039F20B184AB4D(0, iVar0, &iVar4, 1);
				if (unk_0xE5965CDF24F93A9F(iVar4))
				{
					unk_0x55B23FE400FCEA6B(iVar4, 0);
					if (Global_62849 > 0)
					{
						iVar7 = unk_0x15CAA6D7B11F1A7C(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_62849)
						{
							if (Global_62850[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_62850[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (unk_0x9044EDB8A7BF67B4(iVar4) && unk_0x28AA31872A651BC7(iVar4) != unk_0xE2D3D51028F0428A())
					{
						uVar5 = unk_0xDB73C91F09BB8060(unk_0x28AA31872A651BC7(iVar4));
						iVar14 = 0;
						if (unk_0xE5965CDF24F93A9F(uVar5))
						{
							if (unk_0x04D9F44466CBF3CA(iVar5))
							{
								if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
								{
									iVar15 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
								}
								else
								{
									iVar15 = unk_0x9993EF7FDBCDB632();
								}
								if (unk_0xE5965CDF24F93A9F(iVar15) && unk_0x31EB55FAEEE9C0F5(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((unk_0x9044EDB8A7BF67B4(iVar5) && unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()) == unk_0x28AA31872A651BC7(iVar5)) || iVar14)
						{
							if (unk_0x9044EDB8A7BF67B4(iVar5))
							{
								iVar6 = unk_0x91947ACF8B072BE2(unk_0x28AA31872A651BC7(iVar4));
								if (Global_62719 > 0)
								{
									iVar11 = func_111(iVar4);
									if (iVar11 != -1)
									{
										unk_0x7709B2482F29A1BB(unk_0x28AA31872A651BC7(Global_62720[iVar11 /*2*/]), &iLocal_67);
										if (iLocal_67 == 31086 || iLocal_67 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_110();
												Global_62720[iVar11 /*2*/] = 0;
												Global_62719 = (Global_62719 - 1);
											}
										}
									}
								}
								if (Global_74981 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_74981)
									{
										if (Global_74972[iVar1 /*2*/] == iVar6)
										{
											func_98(Global_74972[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_74937)
							{
								iVar12 = unk_0x28AA31872A651BC7(iVar4);
								iVar13 = unk_0xBE07513D5933D805(iVar12);
								if (!unk_0xA6A089369417736E(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = unk_0x2996A489F1C8E5AE(unk_0x407E03586628E458(unk_0xB6BA8B8E3D0B41C6()), unk_0x28AA31872A651BC7(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (unk_0xFD0BDFE16368A58A(unk_0x28AA31872A651BC7(iVar4)))
											{
												func_109();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_74971 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_74971;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_74938[iVar1 /*2*/] != 0)
									{
										if (unk_0xE5965CDF24F93A9F(Global_74938[iVar1 /*2*/]))
										{
											if (unk_0x55B23FE400FCEA6B(Global_74938[iVar1 /*2*/], 0))
											{
												if (Global_74938[iVar1 /*2*/] == iVar4)
												{
													func_98(Global_74938[iVar1 /*2*/].f_1, 1, 0);
													Global_74938[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_74938[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_74971 > 0)
								{
									while (Global_74938[(Global_74971 - 1) /*2*/] == 0 && Global_74971 > 1)
									{
										if (Global_74971 > 1)
										{
											Global_74971 = (Global_74971 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_108(iVar10);
	}
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		iVar1 = Global_74786[iVar0 /*9*/];
		if (Global_62915[iVar1 /*13*/] == 13)
		{
			Global_74786[iVar0 /*9*/].f_1 = (Global_74786[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_109()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_74785)
	{
		iVar1 = Global_74786[iVar0 /*9*/];
		if (Global_62915[iVar1 /*13*/] == 16)
		{
			Global_74786[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_110()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_62719 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_74785)
	{
		iVar2 = Global_74786[iVar1 /*9*/];
		if (Global_62915[iVar2 /*13*/] == 7)
		{
			Global_74786[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_111(int iParam0)
{
	int iVar0;
	
	if (Global_62719 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_62720[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x816BB3EA7EFF7AE0())
	{
		if (unk_0x9452928D5E202744() == 33)
		{
			if (unk_0x239A5A4365D45418() == 33)
			{
				iVar0 = unk_0x40B3AE143C0AD363();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = unk_0x8EE1969AB2D0232F(iVar3 * 3 + 1);
						iVar5 = unk_0x8EE1969AB2D0232F(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_89(iVar4, iVar5);
						iVar3++;
					}
					uVar6 = unk_0x8EE1969AB2D0232F(iVar2);
					iVar7 = unk_0x8EE1969AB2D0232F(iVar2 + 1);
					bVar8 = false;
					if (unk_0x8EE1969AB2D0232F(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (unk_0x8EE1969AB2D0232F(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_74935 = iVar9;
					Global_74936 = uVar6;
					if (iVar1 == -1)
					{
						func_77(to_float(iVar7), bVar8);
					}
					else
					{
						func_77(to_float(iVar1), bVar8);
					}
				}
				func_113();
			}
		}
		if (unk_0x9452928D5E202744() == 13)
		{
			if (unk_0x239A5A4365D45418() == 37)
			{
				iVar10 = unk_0x40B3AE143C0AD363();
				if (iVar10 == 3)
				{
					iVar11 = unk_0x8EE1969AB2D0232F(0);
					iVar12 = unk_0x8EE1969AB2D0232F(1);
					iVar13 = unk_0x8EE1969AB2D0232F(2);
					Global_112915.f_2352[iVar11 /*2*/] = iVar12;
					Global_112915.f_2352[iVar11 /*2*/].f_1 = iVar13;
					func_113();
				}
			}
		}
	}
}

int func_113()
{
	if (func_100(0))
	{
		return 0;
	}
	if (Global_100013.f_8)
	{
		if (Global_100013.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100013.f_10 > 1)
	{
		return 0;
	}
	Global_100013.f_10++;
	return 1;
}

void func_114()
{
	Global_78112 = 0;
	Global_78113 = 0;
	Global_62690 = 0;
	settimera(0);
	settimerb(0);
	unk_0x45227777D3EBECE5();
	iLocal_60 = 0;
	Global_62686 = 0;
	Global_62700 = -1;
	iLocal_70 = 0;
	Global_62684 = 0;
	Global_62683 = 0;
	iLocal_72 = 0;
	Global_62701 = 0;
	Global_62699 = 0;
	Global_62680 = 0;
	Global_74981 = 0;
	Global_74971 = 0;
	func_4();
	func_3();
	if (bLocal_73)
	{
		func_1(&Local_45, 0);
		bLocal_73 = false;
	}
	if (Global_3)
	{
		unk_0xAFBDF6A5E54114C1();
	}
	Global_62695 = 0;
	Global_62691 = 0;
}

