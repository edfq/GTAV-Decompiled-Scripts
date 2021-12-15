#region Local Var
	var uLocal_0 = 0;
	struct<3> Local_1 = { 0, 0, 0 } ;
	var uLocal_2 = 0;
	float fLocal_3 = 0f;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	bool bLocal_6 = 0;
	int iLocal_7 = 0;
#endregion

void __EntryFunction__()
{
	Local_1 = { 613f, 6438f, 31f };
	fLocal_3 = 5f;
	iLocal_4 = 1;
	unk_0xC189FA1CE4E3B2A5(1);
	if (unk_0x4210287E2833D44B(3))
	{
		func_1();
	}
	unk_0xB2B2B460EE75764E(0);
	unk_0x62C1E89BAB0A90DB();
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), -177f);
		unk_0xDF23DCD7A3E1B7A5(0);
	}
	unk_0x16E516CA9C88FF48(joaat("freight"));
	unk_0x16E516CA9C88FF48(joaat("freightcar"));
	unk_0x16E516CA9C88FF48(joaat("freightgrain"));
	unk_0x16E516CA9C88FF48(joaat("freightcont1"));
	unk_0x16E516CA9C88FF48(joaat("freightcont2"));
	unk_0x16E516CA9C88FF48(joaat("tankercar"));
	unk_0x16E516CA9C88FF48(joaat("metrotrain"));
	while ((((((!unk_0xA9C0BBFB9CBB66F1(joaat("freight")) || !unk_0xA9C0BBFB9CBB66F1(joaat("freightcar"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("freightgrain"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("freightcont1"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("freightcont2"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("tankercar"))) || !unk_0xA9C0BBFB9CBB66F1(joaat("metrotrain")))
	{
		wait(0);
	}
	while (true)
	{
		wait(0);
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (iLocal_5)
			{
				if (unk_0x419E13582192CFEA(uLocal_0))
				{
					unk_0x1993C816F91DE0CB(&uLocal_0);
				}
				uLocal_0 = unk_0x12CE1CDBAD8161A5(uLocal_2, Local_1, iLocal_4, 0, 0);
				iLocal_5 = 0;
			}
			if (iLocal_7)
			{
				Local_1 = { unk_0x684B55BC7BEF0475() };
				iLocal_7 = 0;
			}
			if (unk_0xBFCE58B2B3249999(uLocal_0, 0) && !unk_0xE50EB54E0F21BED0(uLocal_0, 0))
			{
				unk_0x05524C2A43660E7F(uLocal_0, fLocal_3);
				unk_0xF706462DA6137097(uLocal_0, fLocal_3);
			}
			if (bLocal_6)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	unk_0xB2B2B460EE75764E(1);
	unk_0x4BFE89D21F9885DC();
}

