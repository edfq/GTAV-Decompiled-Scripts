#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (unk_0x4210287E2833D44B(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_3;
	uLocal_1 = ScriptParam_3.f_1;
	while (!unk_0x234B68AC2E35ED5A(uLocal_2, 1))
	{
		if (!unk_0x234B68AC2E35ED5A(uLocal_2, 0))
		{
			if (unk_0x419E13582192CFEA(uLocal_0))
			{
				if (unk_0xBFCE58B2B3249999(uLocal_0, 0))
				{
					unk_0x4985CD0720AFD468(uLocal_0, 0, 1);
					unk_0xA2C015B68CE01357(uLocal_0, 1);
					unk_0x3A653D4F5FA4B665(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (unk_0x419E13582192CFEA(uLocal_1))
					{
						unk_0x4985CD0720AFD468(uLocal_1, 0, 1);
						unk_0xA2C015B68CE01357(uLocal_1, 1);
						unk_0x3A653D4F5FA4B665(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					unk_0x191DDA30577F440A(&uLocal_2, 0);
				}
			}
		}
		else if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xBFCE58B2B3249999(uLocal_0, 0))
			{
				fVar0 = vdist2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), unk_0xD6E677FAD7521410(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					unk_0x191DDA30577F440A(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !unk_0xB4E725A8915BDF60(uLocal_0))
				{
					unk_0x191DDA30577F440A(&uLocal_2, 1);
				}
			}
			else
			{
				unk_0x191DDA30577F440A(&uLocal_2, 1);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	unk_0x795957CD3A0042C8(&uLocal_0);
	unk_0x75E3AAA7D01DEDC8(&uLocal_1);
	unk_0x4BFE89D21F9885DC();
}

