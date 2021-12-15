void __EntryFunction__()
{
	unk_0x5B2BDC877F7E8802();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0xA7988ABD4140D469(sParam0);
	while (!unk_0x79CDCC8ABB331B8C(sParam0))
	{
		wait(0);
		unk_0xA7988ABD4140D469(sParam0);
	}
	start_new_script(sParam0, iParam1);
}

