void __EntryFunction__()
{
	unk_0x3F57BEDBC381CBC7();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0xAF76A37C80EFD1D8(sParam0);
	while (!unk_0xF79F112CE5999680(sParam0))
	{
		wait(0);
		unk_0xAF76A37C80EFD1D8(sParam0);
	}
	start_new_script(sParam0, iParam1);
}

