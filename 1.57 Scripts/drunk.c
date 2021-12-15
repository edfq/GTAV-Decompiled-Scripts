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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (unk_0x4210287E2833D44B(2))
	{
		func_178();
	}
	Local_43 = { ScriptParam_55 };
	func_177();
	func_176();
	func_171(iLocal_44, 0, 0);
	settimera(0);
	func_170();
	func_166();
	while (true)
	{
		wait(0);
		func_165(iLocal_44);
		func_164();
		func_162();
		func_155();
		func_171(iLocal_44, 0, 0);
		func_177();
		func_9();
		if ((unk_0x02BFF15CAA701972() && !unk_0xE45310E861787FC2()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2453902)
	{
		Global_4456448.f_85535 = 0;
	}
}

bool func_3()
{
	return Global_2453009.f_691;
}

bool func_4()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

void func_5()
{
	Global_2453009.f_756 = 1;
}

var func_6()
{
	return Global_2453009.f_735;
}

bool func_7()
{
	return unk_0x234B68AC2E35ED5A(Global_2453009.f_2, 11);
}

bool func_8()
{
	return unk_0x234B68AC2E35ED5A(Global_2453903.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0xE50EB54E0F21BED0(Local_43.f_1, 0))
	{
		func_178();
	}
	if (bLocal_46)
	{
		if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			func_178();
		}
	}
	func_154();
	bVar0 = true;
	switch (Local_52.x)
	{
		case 4:
			func_153();
			return;
		
		case 5:
			func_150();
			return;
		
		case 6:
			func_148();
			return;
		
		case 7:
			func_147();
			return;
		
		case 8:
			func_146();
			return;
		
		case 9:
			func_144();
			return;
		
		case 10:
			func_143();
			func_140();
			func_139();
			return;
		
		case 11:
			func_138();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_52.x == 12)
	{
		return;
	}
	switch (Local_52.f_1)
	{
		case 1:
			if (!func_137())
			{
				func_121();
				func_140();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!unk_0x234B68AC2E35ED5A(Global_1683970.f_3, 27))
	{
		unk_0x451AB475C3CD97F2(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1678516 = 1;
	if (!unk_0x8B6A925F148E0E94())
	{
		unk_0x8BA9BCDD56AA7115(2500);
		while (unk_0x4E38E404B98F3D9A())
		{
			wait(0);
		}
	}
	if (unk_0x02BFF15CAA701972())
	{
		func_105(&uVar0, 0, 0);
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			unk_0x407B7FBB86B988B9(unk_0x7D2B9E6A64637269(), 0, 1);
		}
		while ((unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0)) && unk_0x2B9CE4B85D669BA3(unk_0x7D2B9E6A64637269()))
		{
			wait(0);
		}
		unk_0xC664C0067EEAB8D1(&(Global_1683970.f_3), 27);
		func_91(unk_0x1146A9AE09CE2B14(), 0, 57344, 0);
		Global_2405077.f_2679 = 1;
		if (unk_0x234B68AC2E35ED5A(Global_1683970, 15))
		{
			unk_0xC664C0067EEAB8D1(&Global_1683970, 15);
		}
		if (unk_0x234B68AC2E35ED5A(Global_1683970.f_2, 6))
		{
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_2), 6);
		}
		if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
		{
			Global_2405077.f_2680 = 1;
		}
		else
		{
			Global_2405077.f_2680 = 0;
		}
		if (unk_0x3141A840BD2418CD())
		{
			unk_0xA085ACB00B1A8A1D(0);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_178();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar3 = 4;
				}
				if (func_64(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_62())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = -1871534317;
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = -1871534317;
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = -1871534317;
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = -1871534317;
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
	}
	if (!unk_0xE50EB54E0F21BED0(Local_43.f_1, 0))
	{
		unk_0x78CDDD1E6367978D(Local_43.f_1, Var2.f_5, 1, 0, 0, 1);
	}
	wait(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_178();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		return;
	}
	if (Global_57840[iParam0 /*7*/])
	{
		unk_0xD885BEFA31A18D47(Global_57840[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xAC4FD27671081628(Global_57840[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	var uVar28;
	float fVar29;
	float fVar30;
	struct<3> Var31;
	struct<3> Var32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	var uVar38;
	float fVar39;
	float fVar40;
	struct<3> Var41;
	struct<3> Var42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), false, 0);
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 1);
	}
	unk_0xF22CC2CA28E44D4F(uParam1->f_5, 4500f);
	unk_0x86328A349E5CFC0B(uParam1->f_5, 4500f);
	unk_0x6AF7EE4DD9F8B944(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), true);
	wait(0);
	unk_0x543F5B2D3F90CA6D(1);
	unk_0x068BDE31F7D112BB(*uParam1);
	if (unk_0xAB6A270F84A8781E(uParam1->f_16))
	{
	}
	else
	{
		unk_0x068BDE31F7D112BB(uParam1->f_16);
	}
	if (!unk_0x8B6A925F148E0E94())
	{
		unk_0x8BA9BCDD56AA7115(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x8B6A925F148E0E94())
	{
		unk_0x8BA9BCDD56AA7115(0);
	}
	iVar1 = unk_0xDFB7BFA6482FEE1E() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0xDFB7BFA6482FEE1E())
	{
		bVar2 = true;
		unk_0x068BDE31F7D112BB(*uParam1);
		if (!unk_0x0EC2B29D4172D225(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xAB6A270F84A8781E(uParam1->f_16))
		{
			unk_0x068BDE31F7D112BB(uParam1->f_16);
			if (!unk_0x0EC2B29D4172D225(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x8B6A925F148E0E94())
		{
			unk_0x8BA9BCDD56AA7115(0);
		}
		wait(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x6F21DC8C6FD88FCF(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0xB7D390F8F682127B(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0);
		unk_0x6AF7EE4DD9F8B944(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x1CA32AD653DA7B78(unk_0x1146A9AE09CE2B14());
		unk_0x2FF622571073AA69(unk_0x7D2B9E6A64637269(), joaat("weapon_unarmed"), 1);
		unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
	}
	unk_0xA2C015B68CE01357(unk_0x7D2B9E6A64637269(), false);
	unk_0x543F5B2D3F90CA6D(0);
	unk_0x6AF7EE4DD9F8B944(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x824F1CA67B3DE4E6();
	unk_0x100BDBF4D9AD9C8C();
	func_51();
	while (func_50())
	{
		wait(0);
	}
	if (!unk_0xE0A6F16F546C8274() && !unk_0x07BE48DF95787FCB())
	{
		unk_0x6E1E3A5B1F9AB95B(250);
	}
	unk_0x79B648063E94A67F(1);
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar4 = unk_0xD955F1CC0BCABC78(uParam1->f_5, uParam1->f_8, 2);
		unk_0xB9314D20143CEED3(iVar4, 0);
		unk_0x1C6FA6A93BF99EA4(iVar4, 0);
		uVar5 = unk_0xE862092047FB4664("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_48(unk_0x7D2B9E6A64637269(), uParam1->f_18);
		unk_0xAD844C8843FC405C(unk_0x7D2B9E6A64637269(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x9328727FD6F1A390(unk_0x7D2B9E6A64637269(), 1);
		unk_0xB5B1E1F68FEC43D0(unk_0x1146A9AE09CE2B14(), 1);
		iVar3 = unk_0xAAA0836970CF02BE(unk_0x7D2B9E6A64637269(), 77);
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 77, 1);
		unk_0x47554D1FFAB68B45(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
		if (!unk_0xAB6A270F84A8781E(uParam1->f_16) && !unk_0xAB6A270F84A8781E(uParam1->f_17))
		{
			unk_0x4261814A9A26E86F(unk_0x7D2B9E6A64637269(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xAB6A270F84A8781E(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xAB6A270F84A8781E(&(uParam1->f_11)))
	{
		iVar10 = func_67();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, unk_0x7D2B9E6A64637269(), sVar12, 0, 1);
	}
	if (unk_0xEEC203A73BC92E7E(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (unk_0xEEC203A73BC92E7E(iVar4) && !unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x8B6A925F148E0E94())
				{
					if (!unk_0xAB6A270F84A8781E(uParam1->f_26))
					{
						unk_0x9673FB069F90F6B9(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xAB6A270F84A8781E(uParam1->f_27))
					{
						if (!unk_0xAB6A270F84A8781E(uParam1->f_28))
						{
							unk_0x9B0169E27978C1A2(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xAB6A270F84A8781E(uParam1->f_29))
						{
							unk_0x9B0169E27978C1A2(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xAF98B1BA240CE3DB();
			unk_0xEFD424FDD55A6EC7(18);
			unk_0x601B0DFD9B0102A6();
			func_40(0);
			iVar15 = unk_0xDFB7BFA6482FEE1E();
			if (iVar15 >= (Global_42560 - 500))
			{
				func_39(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = unk_0x0BC8768247440B3A(iVar4);
			if (!unk_0xAB6A270F84A8781E(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (unk_0x0E497F28E1A4E3F6(unk_0x7D2B9E6A64637269(), unk_0x15173FB88ABC94F9(sVar13)))
			{
				iVar19 = (unk_0x49721683C2EB0132(2, 195) - 128);
				iVar20 = (unk_0x49721683C2EB0132(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (unk_0xC7E4E71866B09979() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						Var22 = { unk_0x684B55BC7BEF0475() };
						Var23 = { unk_0x885F3A431ECE75E3(unk_0x7D2B9E6A64637269(), 31086, 0f, 0f, 0f) };
						fVar24 = unk_0x0BABEFEA577FCFA4(Var22, Var23, 1);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0x7D2B9E6A64637269(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xDFB7BFA6482FEE1E();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var27 = { unk_0x2EBAAC7478326ECC(2) };
							uVar28 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
							fVar29 = Var27.f_2;
							fVar30 = uVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						unk_0x3A13FD2813C8251F(fVar25, 1065353216);
						unk_0xDF23DCD7A3E1B7A5(fVar26);
						unk_0xCDB8372251D2B328(fVar25);
						unk_0x628E78E73686A5A9(fVar26);
						Var31 = { unk_0x684B55BC7BEF0475() };
						Var32 = { unk_0xEE77BC5A16EEF2B4() };
						fVar33 = unk_0x0BABEFEA577FCFA4(Var31, Var32, 1);
						iVar34 = round((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xBB88E75343D3F9ED();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x0E497F28E1A4E3F6(unk_0x7D2B9E6A64637269(), unk_0x15173FB88ABC94F9(sVar14)) || iVar18)
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
				{
					unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
					switch (uParam1->f_4)
					{
						case -1871534317:
							unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -1871534317, 1, 0, 0);
							unk_0xE5AC37B329B31F82(0, 0, 3, 0);
							break;
						
						case -668482597:
							unk_0xEE90D1369E1800A2(unk_0x7D2B9E6A64637269(), -668482597, 1, 0, 0);
							unk_0x8F00E6BF3D6A18D3(unk_0x1146A9AE09CE2B14(), 1f, 500, 0, 1, 0);
							if (unk_0xC7E4E71866B09979() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var37 = { unk_0x2EBAAC7478326ECC(2) };
									uVar38 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
									fVar39 = Var37.f_2;
									fVar40 = uVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								unk_0x3A13FD2813C8251F(fVar35, 1065353216);
								unk_0xDF23DCD7A3E1B7A5(fVar36);
								Var41 = { unk_0x684B55BC7BEF0475() };
								Var42 = { unk_0xEE77BC5A16EEF2B4() };
								fVar43 = unk_0x0BABEFEA577FCFA4(Var41, Var42, 1);
								iVar44 = round((fVar43 * 1000f));
								unk_0x09F9466B03D29D2D(0, 1, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xEEC203A73BC92E7E(iVar4))
					{
						unk_0xFD1CE2B6AA9C0F57(iVar4);
						iVar4 = -1;
					}
				}
			}
			wait(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xE99504CC51D09E54(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), true, 0);
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0xCA089CD1A17D76DF(unk_0x7D2B9E6A64637269());
	}
	bVar45 = unk_0x718EFCF2AD11E241();
	bVar46 = false;
	if (uParam1->f_32)
	{
		unk_0xBB88E75343D3F9ED();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !unk_0xF471787D45ADC2C1())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			wait(0);
			bVar45 = unk_0x718EFCF2AD11E241();
			bVar46 = false;
			if (uParam1->f_32)
			{
				unk_0xBB88E75343D3F9ED();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!unk_0xAB6A270F84A8781E(uParam1->f_16))
	{
		unk_0xF9135F131C423364(uParam1->f_16);
	}
	unk_0xF9135F131C423364(*uParam1);
	unk_0xFE1DEC9C5734D0C0(uVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 77, iVar3);
		unk_0x8F160110753EB17B(unk_0x7D2B9E6A64637269(), 0);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0x0E8572B08CEB6A11(uParam0->f_1))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_1, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uParam0->f_2))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_2, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uParam0->f_3))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_3, 0);
	}
	if (unk_0x0E8572B08CEB6A11(uParam0->f_4))
	{
		unk_0xFE1DEC9C5734D0C0(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0x366E7F593105797F(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	var uVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!unk_0xE50EB54E0F21BED0(uParam0->f_5, 0))
			{
				func_14(uParam0);
				Var0 = { unk_0x684B55BC7BEF0475() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x9F2928DF31D785C7(uParam0->f_5) * FtoV(unk_0x7FF6ACE380ED166C()) };
				}
				Var1 = { unk_0x8EB57098C563AB39(uParam0->f_5, Var0) };
				Var2 = { unk_0x2EBAAC7478326ECC(2) };
				Var3 = { Var2 + uParam0->f_9 };
				Var4 = { Var3 - unk_0x4BB6BF4A85268A22(uParam0->f_5, 2) };
				Var5 = { (-sin(Var3.f_2) * cos(Var3.x)), (cos(Var3.f_2) * cos(Var3.x)), sin(Var3.x) };
				Var6 = { (-sin(Var4.f_2) * cos(Var4.x)), (cos(Var4.f_2) * cos(Var4.x)), sin(Var4.x) };
				uVar7 = unk_0x64C5FDABD2C1ACA3();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x84F073038B557438(1775630800, 0);
				}
				uParam0->f_1 = unk_0x84F073038B557438(26379945, 1);
				if (bParam1)
				{
					unk_0x612434A5544F5847(uParam0->f_1, uParam0->f_5, Var1, 1);
				}
				else
				{
					unk_0x7508AE96782B0441(uParam0->f_1, Var0);
				}
				unk_0xBD833AA6EB59C81B(uParam0->f_1, Var2, 2);
				unk_0xEF20E9A7B745D17A(uParam0->f_1, uVar7);
				uParam0->f_2 = unk_0x84F073038B557438(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x612434A5544F5847(uParam0->f_2, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x7508AE96782B0441(uParam0->f_2, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xBD833AA6EB59C81B(uParam0->f_2, Var2, 2);
				unk_0xEF20E9A7B745D17A(uParam0->f_2, uVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x84F073038B557438(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x612434A5544F5847(uParam0->f_4, uParam0->f_5, Var1 + Var6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x7508AE96782B0441(uParam0->f_4, Var0 + Var5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xBD833AA6EB59C81B(uParam0->f_4, Var2, 2);
					unk_0xEF20E9A7B745D17A(uParam0->f_4, uVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x97862ED5AE1B8593(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x97862ED5AE1B8593(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x97862ED5AE1B8593(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xAB0596591A2DEF66(uParam0->f_3, iParam6);
					unk_0x6FA8221C9D2ECB46(uParam0->f_3, 1);
				}
				else
				{
					unk_0x32279DAB93C9A9FA(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xDFB7BFA6482FEE1E();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x9673FB069F90F6B9("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x9673FB069F90F6B9("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x9673FB069F90F6B9("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x9673FB069F90F6B9("CamPushInNeutral", 0, 0);
						}
						unk_0x9B0169E27978C1A2(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xDFB7BFA6482FEE1E() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	unk_0xDA81FB7770247CC0();
	func_18();
}

void func_18()
{
	Global_22531.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21132 = 0;
	Global_21134 = 0;
	Global_21139 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6C2F471E0CF8D4CF())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_35();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam2)
			{
				func_33();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xF6AD8282F4B81331(unk_0x7D2B9E6A64637269(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
				{
					if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
					{
						return 0;
					}
					if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

int func_25()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

void func_30()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7669, 16);
}

int func_31()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC1DFA5E3535B69F6() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_33()
{
	if (func_34(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_67();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

bool func_34(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

void func_37()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if ((unk_0x8820F6FCD373F9F7() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = iParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = uParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

void func_39(int iParam0)
{
	Global_42560 = (unk_0xDFB7BFA6482FEE1E() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_19798.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		unk_0xB23F15E7A120BB50(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_99370 == 13 || Global_99370 == 10) || Global_99370 == 11) || Global_99370 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_96303[iVar0 /*17*/] && !Global_96303[iVar0 /*17*/].f_1)
		{
			if (Global_96303[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_96303[iVar0 /*17*/].f_5 != 88 && Global_96303[iVar0 /*17*/].f_5 != 89) && Global_96303[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_96303[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_93355[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_93355[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_42969[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_171(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_42943[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42943[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42943[iParam0 /*5*/].f_1 == unk_0x7D2B9E6A64637269())
		{
			Global_43180 = 0;
		}
	}
	Global_42943[iParam0 /*5*/] = 13;
	Global_42943[iParam0 /*5*/].f_1 = 0;
	Global_42943[iParam0 /*5*/].f_2 = 0;
	Global_42943[iParam0 /*5*/].f_3 = 0;
	Global_42943[iParam0 /*5*/].f_4 = 0;
	Global_42941 = (Global_42941 - 1);
	if (Global_42941 < 0)
	{
		Global_42941 = 0;
	}
}

int func_57(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		func_61(0);
		unk_0x6AF7EE4DD9F8B944(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 1, 0, 0, 1);
				unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), uParam1);
				unk_0x3A13FD2813C8251F(0f, 1065353216);
				unk_0xDF23DCD7A3E1B7A5(0f);
			}
		}
		unk_0x22C43B6780E8FE5B(Param0, 4500f, 0);
		wait(0);
		unk_0x6AF7EE4DD9F8B944(Param0, 5000f, 1, 0, 0, 0);
		unk_0xBA7E979B202649F9(Param0, 5000f, 0);
		unk_0xF22CC2CA28E44D4F(Param0, 5000f);
		unk_0x86328A349E5CFC0B(Param0, 5000f);
		func_60();
		func_59();
		settimera(0);
		func_61(1);
		if (!unk_0xCE84F8AB9BD41C13())
		{
			while (!unk_0x22C43B6780E8FE5B(Param0, 4500f, 0))
			{
				wait(0);
				if (timera() > 2000)
				{
					unk_0x543F5B2D3F90CA6D(0);
					return 0;
				}
			}
		}
		settimera(0);
		while (!unk_0xABE4F4FD4329B037())
		{
			wait(0);
			if (timera() > 20000)
			{
				unk_0x543F5B2D3F90CA6D(0);
				if (unk_0xCE84F8AB9BD41C13())
				{
					unk_0xED93DAC36CA89AF2();
				}
				return 0;
			}
		}
		if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
		{
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xCE84F8AB9BD41C13())
				{
					unk_0xED93DAC36CA89AF2();
				}
				unk_0x543F5B2D3F90CA6D(0);
				settimera(0);
				unk_0x824F1CA67B3DE4E6();
				if (iParam3 == 1)
				{
					unk_0x100BDBF4D9AD9C8C();
				}
				else
				{
					settimera(5000);
				}
				unk_0xCAE17D0341C314BC();
			}
		}
		while ((!unk_0xCF371493BAEB8860() && !func_58()) && timera() < 1500)
		{
			wait(0);
		}
		if (timera() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			unk_0x7956E831D8C0C17C(Param0, &(Param0.f_2), 0, 0);
			unk_0x6AF7EE4DD9F8B944(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
			{
				if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
				{
					unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 1, 0, 0, 1);
					unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), uParam1);
				}
			}
		}
		unk_0x3A13FD2813C8251F(0f, 1065353216);
		unk_0xDF23DCD7A3E1B7A5(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_76066.f_553;
}

void func_59()
{
	Global_76066.f_553 = 1;
	Global_76066.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_76066[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x234B68AC2E35ED5A(Global_99370.f_20, 2))
			{
				unk_0x543F5B2D3F90CA6D(1);
				unk_0x191DDA30577F440A(&(Global_99370.f_20), 2);
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Global_99370.f_20, 2))
		{
			unk_0x543F5B2D3F90CA6D(0);
			unk_0xC664C0067EEAB8D1(&(Global_99370.f_20), 2);
		}
	}
}

int func_62()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_112293.f_7227[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_39374[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_71(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_70(unk_0x7D2B9E6A64637269());
			if (func_69(iVar0) && (!func_34(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_69(Global_112293.f_2361.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	unk_0x791FA2C27A7A2BC5(0f);
	unk_0x4D96A42366D2FBE1(0f);
	unk_0xE3CDBC717F3A17ED(0f);
	unk_0x27D1524D8F8AB27C(1);
	unk_0x10A0C871D59F8003(0f);
	unk_0xFB0F840BB90F1EB6(1);
	unk_0x547724EA136B58B9(0);
	if (unk_0xB30CD10E2CD1B67D("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xC0BBE340BE2AA02D("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xAB6A270F84A8781E(&Global_43160))
	{
		if (unk_0xB30CD10E2CD1B67D(&Global_43160))
		{
			unk_0xC0BBE340BE2AA02D(&Global_43160);
		}
	}
	if (unk_0x0E8572B08CEB6A11(Global_43149))
	{
		if (unk_0x92685F7745983649(Global_43149))
		{
			unk_0xD3693FDC4A25CD24(Global_43149, 0f);
			unk_0x111FCF62A4BA857D(Global_43149, 1);
		}
	}
	if (unk_0x3141A840BD2418CD())
	{
		unk_0xA085ACB00B1A8A1D(0);
	}
	if (bParam0)
	{
		if (unk_0xE7C79E1B8D592E06() != -1 || unk_0xBC240866AA8ED57C() != -1)
		{
			unk_0x53DE24D8A6C88A9A();
		}
		else if (unk_0xF471787D45ADC2C1())
		{
			unk_0x53DE24D8A6C88A9A();
		}
	}
	Global_43155 = 0f;
	StringCopy(&Global_43156, "", 16);
	StringCopy(&Global_43160, "", 64);
	StringCopy(&Global_43176, "", 16);
	func_74();
}

void func_74()
{
	Global_43148 = 0;
	Global_43149 = 0;
	Global_43150 = 0;
	Global_43151 = 30000;
	Global_43152 = 0f;
	Global_43154 = 0f;
	Global_43153 = 0f;
	Global_43155 = 0f;
	StringCopy(&Global_43156, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17871;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17861;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17872;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17864;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17860;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17875;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17876;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17879;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17880;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17873;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18762;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18761;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x271E26F00E8A6125(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(3970, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_465 = iVar0;
	func_77(3970, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312763;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_78(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	Global_1630816[iVar0 /*597*/].f_11.f_464 = (Global_1630816[iVar0 /*597*/].f_11.f_464 + iParam0);
	if (Global_1630816[iVar0 /*597*/].f_11.f_464 < -9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
	else if (Global_1630816[iVar0 /*597*/].f_11.f_464 > 9999)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_464 = 9999;
	}
}

int func_82()
{
	if (Global_1681722.f_3 != 0)
	{
		return Global_1681722.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1681722.f_2 != 0)
	{
		return Global_1681722.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[0];
}

int func_86()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

bool func_87(bool bParam0)
{
	return func_88(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_28() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_28())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xFDC069EFB77AEBE9())
		{
			unk_0xA82C5CF50055A1B4(0);
		}
	}
	if (func_104())
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
		if (!func_102())
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
			iVar27 = unk_0xD56332194D622ECE(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x02BFF15CAA701972())
				{
					unk_0x387A0B2797EBDE5F(1);
				}
				else if (bVar14 || (!func_100(unk_0x1146A9AE09CE2B14(), 0) && !func_99()))
				{
					unk_0x4603196EEEA2355C(iVar27, !bVar14, 0);
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
					func_96(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_95(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, true, 0);
					}
				}
				if (!unk_0x5976053523EA16C8(iVar27))
				{
					if (!bVar21)
					{
						unk_0xA2C015B68CE01357(iVar27, false);
					}
					unk_0x8B58E7AC53EED9F1(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0xA2C015B68CE01357(iVar27, false);
				}
				unk_0x1D7A4E9E23D306D6(iVar27, true);
				unk_0x03903A362E41A74F(iParam0, 0);
				unk_0x480217AACC9C34FB(iParam0, 0);
				if (unk_0x313CC23B5525839F(iVar27) && unk_0x9038A2103B9BFD38(iVar27))
				{
					unk_0x9C4430B10B361917(iVar27);
				}
				unk_0xF5143FB7B9EC876D(iVar27, 1);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
				{
					func_94();
					func_93();
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
				if (!func_95(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, !bVar15, 0);
					}
					if (!unk_0x5976053523EA16C8(iVar27))
					{
						if (!bVar21)
						{
							unk_0xA2C015B68CE01357(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x8B58E7AC53EED9F1(iVar27, 1);
						}
					}
					if (func_92(Global_4456448.f_133963))
					{
						unk_0xA2C015B68CE01357(iVar27, true);
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
				unk_0x1D7A4E9E23D306D6(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x02E166B5C96465D2(iVar27) && !unk_0xC49311A2A500FF09(iVar27, 0))
					{
						unk_0x16D66F11FE644901(iVar27);
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

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

void func_94()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x4E8DA737B686529A(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0, int iParam1, int iParam2)
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
				func_98();
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
		if (func_100(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_98()
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

bool func_99()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_101(-1, 0) == 8;
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

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1312485.f_18;
}

int func_104()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

void func_106()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_42969[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0xB36B8558948EA7A8(500, 3000);
	Local_52.x = 5;
	Local_51.f_2 = (timera() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0xECEC7528A52B4EE8(Local_43.f_1))
	{
		if (unk_0xC49311A2A500FF09(Local_43.f_1, 0) || unk_0x195733224245A760(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x97AC07AE39E43022(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_42969[iLocal_54 /*5*/].f_3 < 3 && Global_42969[iLocal_54 /*5*/].f_3 != 0) && Global_42969[iLocal_54 /*5*/].f_3 > Global_42969[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_42969[iLocal_54 /*5*/].f_4 < 9 && Global_42969[iLocal_54 /*5*/].f_4 != 0) && Global_42969[iLocal_54 /*5*/].f_4 > Global_42969[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	uVar1 = func_113(iParam0);
	if (unk_0xAB6A270F84A8781E(uVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	unk_0x5590FBCD51709DFE(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0xAB6A270F84A8781E(sVar2) && !unk_0xAB6A270F84A8781E(sVar3))
		{
			unk_0x068BDE31F7D112BB(sVar2);
			while (!unk_0x0EC2B29D4172D225(sVar2))
			{
				wait(0);
			}
			if (!unk_0xECEC7528A52B4EE8(Local_43.f_1))
			{
				unk_0x4261814A9A26E86F(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!unk_0x472AC3055A188881(sVar1))
	{
		return 0;
	}
	if (unk_0xECEC7528A52B4EE8(Local_43.f_1))
	{
		return 0;
	}
	unk_0xC63C967EC1D348E4(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xC7E4E71866B09979() == 4)
	{
		unk_0x70593F5B4BDBCBCD(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x5D19BDCFD0320F11(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_52.f_2 = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0x72D30262CF8C8603(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x9B9082138A642C14(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xB6E26A0DD88BE958(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0xD991F7672CE8EAD3(Local_43.f_1, 200, 1);
	unk_0xD991F7672CE8EAD3(Local_43.f_1, 46, 1);
	unk_0x9CF2691831C7455F(Local_43.f_1, 0);
	unk_0x82D2BB48A39F1E88(Local_43.f_1, 262144, 1);
	unk_0x055724FF317B4B7A(Local_43.f_1, 1);
	return 1;
}

bool func_108()
{
	return func_109(unk_0x1146A9AE09CE2B14());
}

int func_109(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xC49311A2A500FF09(iParam0, 1) || unk_0x195733224245A760(iParam0))
	{
		return 0;
	}
	if (unk_0x4E8DA737B686529A(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x4E8DA737B686529A(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x7F716EA884E75E49(iParam0))
	{
		return 0;
	}
	if (unk_0x397C98A5552886EB(iParam0))
	{
		return 0;
	}
	if (unk_0x6B9E71121F5B8154(iParam0))
	{
		return 0;
	}
	if (unk_0xC9A943CD366A1769(iParam0))
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == unk_0x7D2B9E6A64637269())
	{
		if (!unk_0xC94CED3B37BC6B1E(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
		if (unk_0xB590A8673D04F7DA(unk_0x1146A9AE09CE2B14()) || unk_0xAE07F5C5D7B878C1(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	Var0 = { unk_0x9F2928DF31D785C7(iParam0) };
	if (vmag2(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_99422.f_364 > 0;
}

bool func_112()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

int func_114(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_115(iParam0);
	uVar1 = func_113(iVar0);
	if (unk_0xAB6A270F84A8781E(Local_52.f_2))
	{
		if (unk_0xAB6A270F84A8781E(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xDA654EB115F9FF7D(Local_52.f_2, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42969[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42969[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42969[iVar0 /*5*/].f_1)
		{
			return Global_42969[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;
	
	if (Local_51 == -2)
	{
		return -2;
	}
	if (Local_51 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51 - timera());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		Local_52.x = 5;
		Local_51.f_2 = timera() + 5000;
		return;
	}
	Local_52.x = 6;
}

bool func_120()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0xE50EB54E0F21BED0(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xD6E677FAD7521410(Local_43.f_1, 1) };
	Var1 = { unk_0xD6E677FAD7521410(Local_43.f_4, 1) };
	fVar2 = unk_0x0BABEFEA577FCFA4(Var0, Var1, 1);
	return fVar2 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x7D2B9E6A64637269())
	{
		unk_0x366E7F593105797F(0, 36, 1);
		if (unk_0xB9B9B15BD0EA06BE(Local_43.f_1))
		{
			if (Global_42969[iLocal_54 /*5*/].f_2 == 0 || Global_42969[iLocal_54 /*5*/].f_2 == 2)
			{
				unk_0x6C59944A0530A574(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xCD9DF646977DACD7(Local_43.f_1))
		{
			unk_0xB0008BCA992FE670(Local_43.f_1, 0);
		}
	}
	if (Local_51 != -2)
	{
		if (Local_51 == -1)
		{
			if (Global_42969[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_42969[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51 - timera());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_42969[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_42969[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_42969[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_42969[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_42969[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_42969[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_42969[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xAB6A270F84A8781E(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x698F51FB33ADAF7B(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				unk_0x066FC15C60D0E579(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if ((Global_42969[iLocal_54 /*5*/].f_3 >= 10 || Global_42969[iLocal_54 /*5*/].f_4 >= 15) || unk_0x234B68AC2E35ED5A(Global_43185, 9))
	{
		if (unk_0x4E8DA737B686529A(Local_43.f_1, 1785177548) == 1 && !unk_0x234B68AC2E35ED5A(Global_1683970.f_3, 27))
		{
			return;
		}
		if (unk_0xC25830F0A5BDB298(Local_43.f_1))
		{
			return;
		}
		if (unk_0xC49311A2A500FF09(Local_43.f_1, 1))
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x02BFF15CAA701972() && Local_43.f_1 == unk_0x7D2B9E6A64637269()) && func_136(unk_0x1146A9AE09CE2B14())) && Global_262145.f_24031)
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x02BFF15CAA701972() && Local_43.f_1 == unk_0x7D2B9E6A64637269()) && func_135())
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x02BFF15CAA701972() && unk_0xE45310E861787FC2()) && func_134())
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x02BFF15CAA701972() && unk_0xE45310E861787FC2()) && func_133())
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (func_130(unk_0x1146A9AE09CE2B14()))
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x02BFF15CAA701972() && Local_43.f_1 == unk_0x7D2B9E6A64637269()) && func_129(unk_0x1146A9AE09CE2B14())) && Global_262145.f_26532)
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x02BFF15CAA701972() && Local_43.f_1 == unk_0x7D2B9E6A64637269()) && func_126(unk_0x1146A9AE09CE2B14())) && Global_262145.f_26565)
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x02BFF15CAA701972() && Local_43.f_1 == unk_0x7D2B9E6A64637269()) && func_122(unk_0x1146A9AE09CE2B14()) == 15)
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x02BFF15CAA701972() && Local_43.f_1 == unk_0x7D2B9E6A64637269()) && Global_74428) && !Global_42942)
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_52.f_1 = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_127(Global_2426865[iParam0 /*449*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_127(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

bool func_130(int iParam0)
{
	return func_131(func_132(iParam0));
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	if (func_125(iParam0) == 256)
	{
		return func_123(iParam0);
	}
	return -1;
}

var func_133()
{
	return Global_2453009.f_24;
}

var func_134()
{
	return Global_2453009.f_21;
}

var func_135()
{
	return Global_2518646;
}

int func_136(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_127(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	
	if (!unk_0x530FB711AE9CF518(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x75B58B38E45C6F9A(Local_43.f_1, 0);
	if (!unk_0xBFCE58B2B3249999(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x27FC1B0077581B37(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_52.x = 7;
	return 1;
}

void func_138()
{
	if (!unk_0xC49311A2A500FF09(Local_43.f_1, 0))
	{
		Local_52.x = 4;
		return;
	}
}

void func_139()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		return;
	}
	if (!unk_0x530FB711AE9CF518(unk_0x7D2B9E6A64637269()))
	{
		return;
	}
	if (unk_0xA12BCF836724905A(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
	fVar1 = unk_0x4DDAC4C80BACF92C(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) };
	Var3 = { Var2 - Vector(3f, 30f, 30f) };
	Var4 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0xDDC360B77B1C1AE6(Var3, Var4) && !unk_0xD4C5E892E2E71D05(Var3, Var4))
	{
		return;
	}
	unk_0x272ACC75FC69F0B5(unk_0x1146A9AE09CE2B14(), 1, 0);
	unk_0x87524F5C1E0857AB(unk_0x1146A9AE09CE2B14(), 0);
	func_11(73, 1);
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0xC49311A2A500FF09(Local_43.f_1, 0))
	{
		iVar1 = unk_0x75B58B38E45C6F9A(Local_43.f_1, 0);
		iVar2 = unk_0x27FC1B0077581B37(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x02BFF15CAA701972() && !unk_0xA6BE8F025C6B653F(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x7D2B9E6A64637269() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xC7E4E71866B09979() == 4)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (timera() < Local_51.f_4)
	{
		func_142(iVar0, fLocal_49);
		return;
	}
	if (unk_0xA2CCAAC7F5CA3F49(iVar0))
	{
		Local_51.f_4 = timera() + 2000;
	}
	else
	{
		Local_51.f_4 = timera() + 1000;
	}
	fVar3 = unk_0x4DDAC4C80BACF92C(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_142(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - timera());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_141(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_141(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_141(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_141(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_141(iVar0, 0.13f, 0.06f);
		}
	}
	func_142(iVar0, fLocal_49);
}

float func_141(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x644B8DBA4F69BB73(-fParam1, fParam1);
	fVar1 = unk_0x644B8DBA4F69BB73(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		if (unk_0xB800560AF60FDD2E(unk_0xFAA5505029C4B5A6(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x6471F4759775FCA4(iParam0);
		if (unk_0x69AF387D1A91914C(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_142(int iParam0, float fParam1)
{
	if (unk_0x02BFF15CAA701972() && !unk_0xA6BE8F025C6B653F(iParam0))
	{
		return;
	}
	if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		unk_0x1E5A10B714F0CF57(unk_0xFAA5505029C4B5A6(iParam0), fParam1);
	}
	else if (unk_0x55F5BD4ABD80B211(iParam0))
	{
		unk_0x9D6C38C1CE8E7A02(unk_0x611CD1312FD3CA66(iParam0), fParam1);
	}
}

void func_143()
{
	int iVar0;
	
	if (!unk_0xC49311A2A500FF09(Local_43.f_1, 0))
	{
		Local_52.x = 4;
		return;
	}
	if (unk_0x02BFF15CAA701972())
	{
		if (Global_42969[iLocal_54 /*5*/].f_3 >= 10 || Global_42969[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_42969[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42969[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42969[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42969[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(Local_43.f_1, 0);
	if (!unk_0xBFCE58B2B3249999(iVar0, 0))
	{
		unk_0xCC5ED49CF9C9215F(Local_43.f_1, 0, 0);
		Local_52.x = 11;
		return;
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (timera() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!unk_0xC49311A2A500FF09(Local_43.f_1, 0))
	{
		Local_52.x = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = unk_0x75B58B38E45C6F9A(Local_43.f_1, 0);
	iVar2 = unk_0x27FC1B0077581B37(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_145();
		Local_51.f_3 = -2;
		return;
	}
	unk_0x0AA1D616883C0FC5(Local_43.f_1, iVar1, 0);
	Local_52.x = 9;
	Local_51.f_3 = timera() + 1000;
}

void func_145()
{
	if (Local_52.x == 10)
	{
		return;
	}
	Local_52.x = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_171(iLocal_44, 2, 5);
	Local_51.f_4 = timera();
	fLocal_49 = 0f;
}

void func_146()
{
	if (unk_0x530FB711AE9CF518(Local_43.f_1))
	{
		Local_52.x = 10;
		return;
	}
	if (timera() < Local_51.f_3)
	{
		return;
	}
	Local_52.x = 4;
	Local_51.f_3 = -2;
}

void func_147()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x530FB711AE9CF518(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = unk_0x75B58B38E45C6F9A(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				unk_0xCC5ED49CF9C9215F(Local_43.f_1, 0, 0);
				Local_52.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_145();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = unk_0x27FC1B0077581B37(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_145();
			return;
		}
		unk_0x0AA1D616883C0FC5(Local_43.f_1, iVar0, 0);
		Local_52.x = 9;
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!func_120())
	{
		unk_0xCA089CD1A17D76DF(Local_43.f_1);
		Local_52.x = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = unk_0x4E8DA737B686529A(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0xC49311A2A500FF09(Local_43.f_1, 0))
			{
				unk_0xCA089CD1A17D76DF(Local_43.f_1);
				Local_52.x = 4;
				return;
			}
		}
	}
}

void func_148()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_52.x = 4;
		return;
	}
	if (!unk_0xBFCE58B2B3249999(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_52.x = 4;
		return;
	}
	Var0 = { unk_0xD6E677FAD7521410(Local_43.f_1, 1) };
	Var1 = { unk_0xD6E677FAD7521410(Local_43.f_4, 1) };
	fVar2 = unk_0x0BABEFEA577FCFA4(Var0, Var1, 1);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_42969[iLocal_54 /*5*/].f_2))
		{
			Local_52.x = 12;
			return;
		}
		Local_52.x = 5;
		Local_51.f_2 = timera() + 2000;
		return;
	}
	iVar3 = unk_0x3CF5ADE443D18312(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (unk_0x9B73EB6255D4AE81(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			Local_52.x = 4;
			return;
		}
	}
	func_149();
	unk_0x95CA4545D0C61309(Local_43.f_1, Local_43.f_4, -1, iVar4, 1073741824, 1, 0);
	Local_52.x = 7;
}

void func_149()
{
	if (!unk_0x419E13582192CFEA(Local_43.f_1))
	{
		return;
	}
	if (!unk_0xECEC7528A52B4EE8(Local_43.f_1))
	{
		unk_0x87FB9C4434EDF1A5(Local_43.f_1, 1048576000);
		unk_0xAEB6074141B6B98E(Local_43.f_1);
		unk_0x461AA308E0671334(Local_43.f_1, 0, -1056964608);
		Local_52.f_2 = "";
		unk_0xB3099507583713CA(Local_43.f_1);
		unk_0xD991F7672CE8EAD3(Local_43.f_1, 200, 0);
		unk_0xD991F7672CE8EAD3(Local_43.f_1, 46, 0);
		unk_0x9CF2691831C7455F(Local_43.f_1, 1);
		unk_0x82D2BB48A39F1E88(Local_43.f_1, 262144, 0);
		unk_0x055724FF317B4B7A(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_150()
{
	if (timera() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_151();
	Local_51.f_2 = -2;
	Local_52.x = 12;
}

int func_151()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_152(Local_43.f_1);
	Local_52.f_2 = "";
	Global_2544210.f_4606 = 1;
	return 1;
}

void func_152(int iParam0)
{
	unk_0x87FB9C4434EDF1A5(uParam0, 1048576000);
	unk_0x461AA308E0671334(uParam0, 0, -1056964608);
	unk_0xD991F7672CE8EAD3(uParam0, 200, 0);
	unk_0x9CF2691831C7455F(iParam0, 1);
	unk_0x82D2BB48A39F1E88(iParam0, 262144, 0);
	unk_0x055724FF317B4B7A(iParam0, 0);
}

void func_153()
{
	int iVar0;
	
	if (Local_51 == -1)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42969[iLocal_54 /*5*/].f_3 < 3 && Global_42969[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (unk_0xC49311A2A500FF09(Local_43.f_1, 0))
	{
		Local_52.x = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_52.x = 12;
		return;
	}
	if (Local_51 == -2)
	{
		return;
	}
	if (!func_107(Global_42969[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	Local_52.x = 12;
}

void func_154()
{
}

void func_155()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_43050[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_43050[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_157(iVar1);
				func_156(iVar1);
			}
			else if (Global_43050[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_43050[iVar1 /*6*/])
					{
						func_157(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_43050[iParam0 /*6*/] = -1;
	Global_43050[iParam0 /*6*/].f_1 = -1;
	Global_43050[iParam0 /*6*/].f_2 = 6;
	Global_43050[iParam0 /*6*/].f_3 = 0;
	Global_43050[iParam0 /*6*/].f_4 = 0;
}

void func_157(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_43050[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_178();
			break;
		
		case 2:
			func_161(Global_43050[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_160(Global_43050[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_159();
			break;
		
		case 5:
			func_158();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_158()
{
	Local_52.f_1 = 2;
}

void func_159()
{
	int iVar0;
	
	Global_42969[iLocal_54 /*5*/].f_4++;
	if (Local_51 == -1)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42969[iLocal_54 /*5*/].f_4 < 9 && Global_42969[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42969[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	Global_42969[iLocal_54 /*5*/].f_3 = (Global_42969[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == -1)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42969[iLocal_54 /*5*/].f_3 < 3 && Global_42969[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42969[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_161(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_162()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14());
		return;
	}
	iVar0 = unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_163();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_163()
{
}

void func_164()
{
	if (!Local_51 == -1)
	{
		if (!Local_51 == -2)
		{
			if (timera() >= Local_51)
			{
				func_149();
				Local_51 = -2;
				Local_52.x = 12;
			}
		}
		if (timera() > Local_51.f_1)
		{
			func_178();
		}
	}
}

void func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_43050[iVar0 /*6*/])
		{
			func_156(iVar0);
		}
		iVar0++;
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_52.x = 4;
	if (!unk_0xE50EB54E0F21BED0(Local_43.f_1, 0))
	{
		if (unk_0x530FB711AE9CF518(Local_43.f_1))
		{
			Local_52.x = 10;
		}
	}
	if (bLocal_46)
	{
		func_169();
		func_11(71, 1);
		if (unk_0x02BFF15CAA701972())
		{
			iVar0 = func_80(2059, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_167(iVar1);
			}
			func_77(2059, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0xD885BEFA31A18D47(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0xD885BEFA31A18D47(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0xD885BEFA31A18D47(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_167(iVar6);
			}
			switch (func_67())
			{
				case 0:
					unk_0xAC4FD27671081628(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0xAC4FD27671081628(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0xAC4FD27671081628(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_52.f_1 = 1;
		return;
	}
	Local_52.f_1 = 12;
	if (Local_51 == -1)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42969[iLocal_54 /*5*/].f_3 < 3 && Global_42969[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42969[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51 - timera());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_42969[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_42969[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = func_168(81);
	Global_2414501[iVar0 /*83*/] = 81;
	Global_2414501[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414501[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414501[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414501[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_169()
{
}

void func_170()
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_171(int iParam0, int iParam1, int iParam2)
{
	func_172(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_174(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_173();
	if (iVar0 == -1)
	{
		return;
	}
	Global_43050[iVar0 /*6*/] = iParam0;
	Global_43050[iVar0 /*6*/].f_1 = iParam1;
	Global_43050[iVar0 /*6*/].f_2 = iParam2;
	Global_43050[iVar0 /*6*/].f_3 = iParam3;
	Global_43050[iVar0 /*6*/].f_4 = iParam4;
	Global_43050[iVar0 /*6*/].f_5 = iParam5;
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_43050[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_174(int iParam0, int iParam1, int iParam2)
{
	if (func_175(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_43050[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_43050[iVar0 /*6*/])
			{
				if (iParam1 == Global_43050[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_176()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == unk_0x7D2B9E6A64637269())
	{
		bLocal_46 = true;
		Global_43181 = 1;
		Global_43183++;
	}
	if (!unk_0xE50EB54E0F21BED0(Local_43.f_1, 0))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x90517F1BF9113FB8(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x90517F1BF9113FB8(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_177()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_178()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0xE50EB54E0F21BED0(Local_43.f_1, 0))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_42969[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_180(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x90517F1BF9113FB8(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x90517F1BF9113FB8(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_149();
	if (bLocal_46)
	{
		Global_43181 = 0;
	}
	func_179();
	unk_0xF9135F131C423364(func_113(0));
	unk_0xF9135F131C423364(func_113(2));
	unk_0xF9135F131C423364(func_113(1));
	Global_1678516 = 0;
	if (unk_0x636F1F53CC61D2C9(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	unk_0x4BFE89D21F9885DC();
}

void func_179()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xE50EB54E0F21BED0(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0xC49311A2A500FF09(Local_43.f_1, 0))
	{
		uVar1 = unk_0x75B58B38E45C6F9A(Local_43.f_1, 0);
		iVar2 = unk_0x27FC1B0077581B37(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0xC7E4E71866B09979() == 4 || !unk_0x7D2B9E6A64637269() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_142(uVar0, 0f);
}

void func_180(var uParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(uParam0, sParam1, func_181(iParam2), 1);
}

int func_181(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

