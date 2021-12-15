#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x4210287E2833D44B(2))
	{
		func_1();
	}
	if (unk_0x419E13582192CFEA(uScriptParam_3))
	{
		unk_0xA2C015B68CE01357(uScriptParam_3, 1);
	}
	while (true)
	{
		wait(0);
		if (unk_0x419E13582192CFEA(uScriptParam_3))
		{
			if (unk_0xF03E9E22B505CC07(uScriptParam_3) && unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0x1861D54BAC877B58(uScriptParam_3))
						{
							unk_0x068BDE31F7D112BB("MISSMIC2");
							if (unk_0x0EC2B29D4172D225("MISSMIC2"))
							{
								unk_0xFFE2CF1579FA5C68(uScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
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
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xF9135F131C423364("MISSMIC2");
	unk_0x4BFE89D21F9885DC();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0xDA654EB115F9FF7D(uParam0, uParam0))
	{
	}
}

