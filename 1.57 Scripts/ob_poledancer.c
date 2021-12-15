#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	struct<3> Local_2 = { 0, 0, 0 } ;
	var uLocal_3 = 0;
	char* sLocal_4 = NULL;
	int iLocal_5 = 0;
	char* sLocal_6 = NULL;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
#endregion

void __EntryFunction__()
{
	sLocal_4 = "Poledance_01";
	iLocal_5 = joaat("a_f_y_beach_01");
	sLocal_6 = "MISSSTRIP_CLUB";
	if (unk_0x419E13582192CFEA(uScriptParam_8))
	{
		unk_0xA2C015B68CE01357(uScriptParam_8, 1);
		Local_2 = { unk_0x9E695CE384C77EF0(uScriptParam_8, 0f, 0f, 0f) };
		uLocal_3 = unk_0xA8D713A937F31250(uScriptParam_8);
		unk_0x3CBE9F07524C242D(uScriptParam_8, 0, 0);
	}
	while (true)
	{
		wait(0);
		if (unk_0x419E13582192CFEA(uScriptParam_8))
		{
			if (unk_0xF03E9E22B505CC07(uScriptParam_8))
			{
				switch (iLocal_0)
				{
					case 0:
						if (func_5())
						{
							func_4();
							iLocal_0 = 2;
						}
						break;
					
					case 2:
						func_3();
						if (func_2())
						{
							unk_0x3CBE9F07524C242D(uScriptParam_8, 1, 0);
							iLocal_0 = 3;
						}
						break;
					
					case 3:
						if (!unk_0xECEC7528A52B4EE8(uLocal_1))
						{
							unk_0x37DE87D06B5C195D(uLocal_1, -1);
							unk_0x76E35164CB4968C4(unk_0x1146A9AE09CE2B14(), 1);
							unk_0x504B26425DFF773C(uLocal_1, 1);
							unk_0x4BFE89D21F9885DC();
						}
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (!unk_0xE50EB54E0F21BED0(uLocal_1, 0))
	{
		if (!unk_0xB4E725A8915BDF60(uLocal_1))
		{
			unk_0xC606AE2A3209945E(&uLocal_1);
		}
		else
		{
			unk_0x504B26425DFF773C(uLocal_1, 1);
		}
	}
	unk_0x4BFE89D21F9885DC();
}

int func_2()
{
	struct<3> Var0;
	
	Var0 = { 2f, 2f, 0.5f };
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xECEC7528A52B4EE8(uLocal_1))
		{
			if (unk_0xD406352E21A7E1D0(unk_0x7D2B9E6A64637269(), uLocal_1, Var0, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xA6E8FBD68548675F(uLocal_1, unk_0x7D2B9E6A64637269(), 1))
			{
				return 1;
			}
			if (unk_0x83B12E293561B796(unk_0x7D2B9E6A64637269(), uLocal_1))
			{
				return 1;
			}
		}
		if (unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269()))
		{
			return 1;
		}
	}
	return 0;
}

void func_3()
{
	if (!unk_0xECEC7528A52B4EE8(uLocal_1))
	{
		if (unk_0x4E8DA737B686529A(uLocal_1, -2017877118) == 7)
		{
			unk_0x4261814A9A26E86F(uLocal_1, sLocal_6, sLocal_4, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (unk_0xA6060ABCEB1A894C(uLocal_1, sLocal_6, sLocal_4, 3))
		{
			unk_0x4261814A9A26E86F(uLocal_1, sLocal_6, sLocal_4, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_7)
		{
			if (unk_0x698F51FB33ADAF7B(uLocal_1, sLocal_6, sLocal_4, 3))
			{
				unk_0x3778FB1E5EA800F9(uLocal_1, sLocal_6, sLocal_4, unk_0x644B8DBA4F69BB73(0, 1065353216));
				iLocal_7 = 1;
			}
		}
	}
}

void func_4()
{
	if (unk_0xE50EB54E0F21BED0(uLocal_1, 0))
	{
		uLocal_1 = unk_0x0FDCFECB2EF2BC1C(5, iLocal_5, Local_2.x, Local_2.f_1, Local_2.f_2, uLocal_3, 1, 1);
		unk_0xD30B1DC5605A4D93(uLocal_1, 0);
		unk_0x1D7A4E9E23D306D6(uLocal_1, 0);
		unk_0xBE91B077ADADE97F(uLocal_1, 1);
	}
}

int func_5()
{
	unk_0x16E516CA9C88FF48(iLocal_5);
	unk_0x068BDE31F7D112BB(sLocal_6);
	if (unk_0xA9C0BBFB9CBB66F1(iLocal_5) && unk_0x0EC2B29D4172D225(sLocal_6))
	{
		return 1;
	}
	else
	{
		unk_0x16E516CA9C88FF48(iLocal_5);
		unk_0x068BDE31F7D112BB(sLocal_6);
	}
	return 0;
}

