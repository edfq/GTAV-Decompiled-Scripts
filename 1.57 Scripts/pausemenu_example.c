#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0)
	{
		case 3:
			while (true)
			{
				wait(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0x4BFE89D21F9885DC();
}

void func_1(int iParam0)
{
	if (unk_0x4FC4B4B6AA7B8FEB("DISPLAY_DATA_SLOT"))
	{
		unk_0x9E3D03981E2E9AD9(iParam0);
		unk_0x392841D58D2EED1D();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0x4FC4B4B6AA7B8FEB("SET_DATA_SLOT"))
	{
		unk_0x9E3D03981E2E9AD9(iParam0);
		unk_0x9E3D03981E2E9AD9(iParam1);
		unk_0x9E3D03981E2E9AD9(iParam2);
		unk_0x9E3D03981E2E9AD9(iParam3);
		unk_0x9E3D03981E2E9AD9(iParam7);
		unk_0x9E3D03981E2E9AD9(0);
		if (bParam4)
		{
			unk_0x9E3D03981E2E9AD9(1);
		}
		else
		{
			unk_0x9E3D03981E2E9AD9(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0x5FEAD10623875182(sParam5);
		}
		unk_0x392841D58D2EED1D();
	}
}

void func_3(var uParam0)
{
	unk_0x35CA0C119E6A2A27(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

