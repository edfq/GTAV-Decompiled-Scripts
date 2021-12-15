#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	struct<3> Local_4 = { 0, 0, 0 } ;
	struct<3> Local_5 = { 0, 0, 0 } ;
	var uLocal_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (unk_0x4210287E2833D44B(2))
	{
		func_4();
	}
	if (unk_0x419E13582192CFEA(uScriptParam_6))
	{
		unk_0xA2C015B68CE01357(uScriptParam_6, 1);
		Local_4 = { unk_0xD6E677FAD7521410(uScriptParam_6, 1) };
		Local_5 = { unk_0x4BB6BF4A85268A22(uScriptParam_6, 2) };
	}
	while (true)
	{
		wait(0);
		if (unk_0x419E13582192CFEA(uScriptParam_6))
		{
			if (unk_0xF03E9E22B505CC07(uScriptParam_6))
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1861D54BAC877B58(uScriptParam_6))
						{
							unk_0x16E516CA9C88FF48(joaat("p_abat_roller_1_col"));
							if (unk_0xA9C0BBFB9CBB66F1(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(Local_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = unk_0x795434E153F90E41(joaat("p_abat_roller_1_col"), Local_4, 1, 1, 0);
									unk_0xBDDCDEC7B6205897(uLocal_3, Local_5, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x1861D54BAC877B58(uScriptParam_6))
						{
							if (unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
							{
								unk_0x068BDE31F7D112BB("map_objects");
								if (unk_0x0EC2B29D4172D225("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (unk_0x1861D54BAC877B58(uScriptParam_6))
						{
							if (unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
							{
								if (Global_95801)
								{
									if (unk_0x0EC2B29D4172D225("map_objects"))
									{
										unk_0xFFE2CF1579FA5C68(uScriptParam_6, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar3 = 0.35f;
						Var0 = { Local_4 + Vector(3.45f, 0f, 0f) };
						if (unk_0x419E13582192CFEA(uLocal_3))
						{
							Var1 = { unk_0xD6E677FAD7521410(uLocal_3, 1) };
							if (!func_2(Var1, Var0, 0.1f, 0))
							{
								Var2 = { Var0 - Var1 };
								unk_0x78CDDD1E6367978D(uLocal_3, Var1 + func_1(Var2) * FtoV(unk_0x7FF6ACE380ED166C()) * Vector(fVar3, fVar3, fVar3), 1, 0, 0, 1);
							}
							else
							{
								Global_95802 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_2(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0BCA9ADE67DF9DD8((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0BCA9ADE67DF9DD8((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0BCA9ADE67DF9DD8((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_4()
{
	if (unk_0x419E13582192CFEA(uLocal_3))
	{
		unk_0x04F4D55F2C0C756D(&uLocal_3);
	}
	unk_0x824F744352C8BC82(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x4BFE89D21F9885DC();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (unk_0xDA654EB115F9FF7D(uParam0, uParam0))
	{
	}
}

