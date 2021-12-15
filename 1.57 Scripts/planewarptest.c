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
	struct<3> Local_19[2];
	float fLocal_20[2] = { 0f, 0f };
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
	if (unk_0x4210287E2833D44B(3))
	{
		func_1();
	}
	unk_0xC189FA1CE4E3B2A5(1);
	unk_0x16E516CA9C88FF48(joaat("cuban800"));
	while (!unk_0xA9C0BBFB9CBB66F1(joaat("cuban800")))
	{
		wait(0);
	}
	Local_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	Local_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), 1220.202f, 3596.281f, 33.259f, 1, 0, 0, 1);
	}
	unk_0xEC173D75B3C8E9EC(1220.202f, 3596.281f, 33.259f);
	uLocal_18 = unk_0x170478CC84C8AE2F(joaat("cuban800"), Local_19[0 /*3*/], fLocal_20[0], 1, 1, 0);
	unk_0x47D0DDD8833C5E5F(uLocal_18, 1084227584);
	unk_0x824F744352C8BC82(joaat("cuban800"));
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0xB1D85A6C23F2F945(unk_0x7D2B9E6A64637269(), uLocal_18, -1);
	}
	while (true)
	{
		func_1();
		wait(0);
	}
}

void func_1()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
	}
	if (unk_0x419E13582192CFEA(uLocal_18))
	{
		unk_0x5420D0D520CF44D0(&uLocal_18);
	}
	unk_0x824F744352C8BC82(joaat("cuban800"));
	unk_0x4BFE89D21F9885DC();
}

