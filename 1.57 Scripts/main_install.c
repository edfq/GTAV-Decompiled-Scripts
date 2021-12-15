#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0x5B2BDC877F7E8802();
	unk_0xD0051FAE2E1BB4C8("prologue06_int");
	unk_0xD0051FAE2E1BB4C8("prologue01");
	unk_0xD0051FAE2E1BB4C8("prologue02");
	unk_0xD0051FAE2E1BB4C8("prologue03");
	unk_0xD0051FAE2E1BB4C8("prologue04");
	unk_0xD0051FAE2E1BB4C8("prologue05");
	unk_0xD0051FAE2E1BB4C8("prologue06");
	unk_0xD0051FAE2E1BB4C8("prologuerd");
	unk_0xD0051FAE2E1BB4C8("Prologue01c");
	unk_0xD0051FAE2E1BB4C8("Prologue01d");
	unk_0xD0051FAE2E1BB4C8("Prologue01e");
	unk_0xD0051FAE2E1BB4C8("Prologue01f");
	unk_0xD0051FAE2E1BB4C8("Prologue01g");
	unk_0xD0051FAE2E1BB4C8("prologue01h");
	unk_0xD0051FAE2E1BB4C8("prologue01i");
	unk_0xD0051FAE2E1BB4C8("prologue01j");
	unk_0xD0051FAE2E1BB4C8("prologue01k");
	unk_0xD0051FAE2E1BB4C8("prologue01z");
	unk_0xD0051FAE2E1BB4C8("prologue03b");
	unk_0xD0051FAE2E1BB4C8("prologue04b");
	unk_0xD0051FAE2E1BB4C8("prologue05b");
	unk_0xD0051FAE2E1BB4C8("prologue06b");
	unk_0xD0051FAE2E1BB4C8("prologuerdb");
	unk_0xD0051FAE2E1BB4C8("prologue_occl");
	unk_0xD0051FAE2E1BB4C8("DES_ProTree_start");
	unk_0xD0051FAE2E1BB4C8("DES_ProTree_start_lod");
	unk_0xD0051FAE2E1BB4C8("prologue04_cover");
	unk_0xD0051FAE2E1BB4C8("prologue03_grv_fun");
	unk_0x43D3344EE0A5162E("prologue03_grv_dug");
	unk_0x43D3344EE0A5162E("prologue_grv_torch");
	unk_0x87D30E8961D60915("prologue", 1);
	unk_0x16E516CA9C88FF48(joaat("csb_prolsec"));
	while (!unk_0xA9C0BBFB9CBB66F1(joaat("csb_prolsec")))
	{
		wait(0);
	}
	unk_0x950D9BA67C3302DA(unk_0x1146A9AE09CE2B14(), joaat("csb_prolsec"));
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), 5313.8f, -5207.2f, 83.5f, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), 169.2f);
	}
	unk_0xDD7C2F9844E745B1(0);
	unk_0xF99B8860747709DD(unk_0x1146A9AE09CE2B14(), 0, 0);
	unk_0x22C43B6780E8FE5B(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = unk_0xDFB7BFA6482FEE1E() + 10000;
	while (!unk_0xABE4F4FD4329B037() && unk_0xDFB7BFA6482FEE1E() < iVar0)
	{
		wait(0);
	}
	unk_0x55A70F08F08A3A71();
	unk_0xB84B43B766630B5C("MISSION_FAILED_SCENE");
	unk_0x6E1E3A5B1F9AB95B(2500);
	unk_0xED93DAC36CA89AF2();
	unk_0xBB3CDAB62C8773C8("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0xE0A6F16F546C8274())
		{
			unk_0x6E1E3A5B1F9AB95B(0);
		}
		unk_0x80B2E30CC8B794C0(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0x80B2E30CC8B794C0(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		unk_0x9E8B548C035F223D(0.5f, 0.5f);
		unk_0x7160B751D113C8C6(1);
		if (timera() > 10000 && unk_0x080D38ACEC5DC1A2(0))
		{
			iLocal_0 = unk_0xB36B8558948EA7A8(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0x2EA77AAC984722FF();
		if (unk_0x16798E70F6DC79A4())
		{
			unk_0xEB9046E5F59B1DB8();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xE5A80C83FA218963(sParam2);
	unk_0xBC68FBDA73BBB4A6(fParam0, fParam1, iParam3);
}

