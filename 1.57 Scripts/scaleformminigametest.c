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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = 0;
	bool bLocal_24 = 0;
	float fLocal_25 = 0f;
	bool bLocal_26 = 0;
	bool bLocal_27 = 0;
	float fLocal_28 = 0f;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	float fLocal_31 = 0f;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	float fLocal_34 = 0f;
	bool bLocal_35 = 0;
	bool bLocal_36 = 0;
	float fLocal_37 = 0f;
	bool bLocal_38 = 0;
	bool bLocal_39 = 0;
	float fLocal_40 = 0f;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	float fLocal_43 = 0f;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	float fLocal_46 = 0f;
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
	uLocal_20 = unk_0x27E44C95E1D1461C(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (unk_0x8B6A925F148E0E94())
	{
		unk_0x6E1E3A5B1F9AB95B(500);
	}
	if (unk_0x4210287E2833D44B(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x42AA2CCF0B61DCD8("p_bubblegum");
	while (!unk_0xDAE4BC89A198A6AF(uLocal_18))
	{
		wait(0);
	}
	while (true)
	{
		if (iLocal_21 == 1)
		{
		}
		if (iLocal_22 == 1)
		{
			iLocal_22 = 0;
			uLocal_19 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 1);
			if (unk_0x0E8572B08CEB6A11(uLocal_19))
			{
				unk_0xFD866EC0672D68D5(uLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f, 0, 1, 1, 2);
				unk_0xCD29B8E8A95DC63C(uLocal_19, 0.01f);
				unk_0x64B711F5179A0CEC(uLocal_19, 0.02f);
				unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
			}
			unk_0x252BE56DB93DF816(uLocal_20, 66);
		}
		iLocal_21 = 1;
		unk_0x43D93129BD1AD792(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		wait(0);
	}
}

void func_1(var uParam0)
{
	if (Global_19777 == 0)
	{
		if (unk_0x5C6675393464A814(2, 189) || unk_0x5C6675393464A814(2, 190))
		{
			Global_19777 = 1;
			settimera(0);
		}
	}
	else if (timera() > 50)
	{
		Global_19777 = 0;
	}
	if (Global_19777 == 0)
	{
		if (unk_0x86AF801D34E482FF(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 189))
		{
			bLocal_23 = true;
			fLocal_25 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 189))
		{
			bLocal_23 = false;
			fLocal_25 = 0f;
		}
		if (!bLocal_23 == bLocal_24)
		{
			bLocal_24 = bLocal_23;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(10);
			unk_0x82D42F43BE26EB72(fLocal_25);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x86AF801D34E482FF(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 190))
		{
			bLocal_26 = true;
			fLocal_28 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 190))
		{
			bLocal_26 = false;
			fLocal_28 = 0f;
		}
		if (!bLocal_26 == bLocal_27)
		{
			bLocal_27 = bLocal_26;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(11);
			unk_0x82D42F43BE26EB72(fLocal_28);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x86AF801D34E482FF(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 188))
		{
			bLocal_29 = true;
			fLocal_31 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 188))
		{
			bLocal_29 = false;
			fLocal_31 = 0f;
		}
		if (!bLocal_29 == bLocal_30)
		{
			bLocal_30 = bLocal_29;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(8);
			unk_0x82D42F43BE26EB72(fLocal_31);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x86AF801D34E482FF(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 187))
		{
			bLocal_32 = true;
			fLocal_34 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 187))
		{
			bLocal_32 = false;
			fLocal_34 = 0f;
		}
		if (!bLocal_32 == bLocal_33)
		{
			bLocal_33 = bLocal_32;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(9);
			unk_0x82D42F43BE26EB72(fLocal_34);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x86AF801D34E482FF(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 202))
		{
			bLocal_35 = true;
			fLocal_37 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 202))
		{
			bLocal_35 = false;
			fLocal_37 = 0f;
		}
		if (!bLocal_35 == bLocal_36)
		{
			bLocal_36 = bLocal_35;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(17);
			unk_0x82D42F43BE26EB72(fLocal_37);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x86AF801D34E482FF(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 204))
		{
			bLocal_38 = true;
			fLocal_40 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 204))
		{
			bLocal_38 = false;
			fLocal_40 = 0f;
		}
		if (!bLocal_38 == bLocal_39)
		{
			bLocal_39 = bLocal_38;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(15);
			unk_0x82D42F43BE26EB72(fLocal_40);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x86AF801D34E482FF(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 201))
		{
			bLocal_41 = true;
			fLocal_43 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 201))
		{
			bLocal_41 = false;
			fLocal_43 = 0f;
		}
		if (!bLocal_41 == bLocal_42)
		{
			bLocal_42 = bLocal_41;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(16);
			unk_0x82D42F43BE26EB72(fLocal_43);
			unk_0x392841D58D2EED1D();
		}
		if (unk_0x86AF801D34E482FF(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (unk_0x5C6675393464A814(2, 203))
		{
			bLocal_44 = true;
			fLocal_46 = 1f;
		}
		if (!unk_0x5C6675393464A814(2, 203))
		{
			bLocal_44 = false;
			fLocal_46 = 0f;
		}
		if (!bLocal_44 == bLocal_45)
		{
			bLocal_45 = bLocal_44;
			unk_0x704F8697BB515627(uParam0, "SET_INPUT_EVENT");
			unk_0x9E3D03981E2E9AD9(14);
			unk_0x82D42F43BE26EB72(fLocal_46);
			unk_0x392841D58D2EED1D();
		}
	}
}

void func_2()
{
	if (unk_0x0E8572B08CEB6A11(uLocal_19))
	{
		unk_0xFE1DEC9C5734D0C0(uLocal_19, 0);
	}
	unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
	func_3(0);
	unk_0x543F5B2D3F90CA6D(0);
	unk_0x66AE54CE92457FEE(1);
	unk_0x3D9BC07C93913E04(&uLocal_18);
	unk_0x4BFE89D21F9885DC();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			unk_0x191DDA30577F440A(&Global_7669, 16);
		}
		Global_19798.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19798.f_1 == 1)
	{
		if (!Global_19798.f_1 == 0)
		{
			Global_19798.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19798.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_8()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_19798.f_1 == 9 || Global_19798.f_1 == 10)
	{
		Global_21178 = 0;
		Global_21174 = 1;
	}
}

