#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x636F1F53CC61D2C9(joaat("wp_partyboombox")) > 1)
	{
		unk_0x4BFE89D21F9885DC();
	}
	if (unk_0x4210287E2833D44B(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (!unk_0xCC7E6EA219FD8BAC())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0xCA86FAB7FADC8353() >= 22 || unk_0xCA86FAB7FADC8353() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0xD17A6DB35E21C90C("ID2_21_G_Night"))
				{
					unk_0xD0051FAE2E1BB4C8("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0xCE84F8AB9BD41C13() && !unk_0xF471787D45ADC2C1())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0xD17A6DB35E21C90C("ID2_21_G_Night"))
	{
		unk_0x43D3344EE0A5162E("ID2_21_G_Night");
	}
	unk_0x4BFE89D21F9885DC();
}

