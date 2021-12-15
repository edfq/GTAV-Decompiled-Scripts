#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x4210287E2833D44B(2))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
		if (unk_0x419E13582192CFEA(uScriptParam_5))
		{
			if (unk_0xF03E9E22B505CC07(uScriptParam_5) && unk_0x636F1F53CC61D2C9(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							uVar0 = unk_0xB71084333B418824(unk_0x7D2B9E6A64637269());
							if (unk_0xE75EE67F14EAAE37(uVar0))
							{
								if (unk_0xC4EACCE45DBAA313(uVar0))
								{
									if (unk_0xDC2776C9C8195355())
									{
										unk_0x7C0019321F1FC821();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xB4C12EFC62A8536A())
						{
							if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
							{
								if (!unk_0x419E13582192CFEA(uLocal_4))
								{
									uLocal_4 = unk_0xB219A5BFF547852F(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x176066ACB1B41C48(uLocal_3))
								{
									if (unk_0x419E13582192CFEA(uLocal_4))
									{
										uVar0 = unk_0xB71084333B418824(unk_0x7D2B9E6A64637269());
										if (unk_0xE75EE67F14EAAE37(uVar0))
										{
											if (unk_0xC4EACCE45DBAA313(uVar0))
											{
												if (unk_0xDC2776C9C8195355())
												{
													uLocal_3 = unk_0x48558536A19BA88A("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
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
	if (unk_0x176066ACB1B41C48(uLocal_3))
	{
		unk_0x39448B5909AEB658(uLocal_3, 0);
	}
	if (unk_0x419E13582192CFEA(uLocal_4))
	{
		unk_0x39E572BDDBA714A2(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
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

