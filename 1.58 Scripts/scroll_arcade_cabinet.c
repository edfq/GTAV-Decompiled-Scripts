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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	struct<22> Local_151 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2949> Local_152 = { 0, 0, 0, 0, 225, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 14, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 35, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 14, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, -1, -1, 15, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 0, 0, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -1, -1, 0, -2147483647, -2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 0, 0, 3, 20, 0, 0, -2147483647, -2147483647, -2147483647, -2147483647, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 20, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 14, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, -2147483647, -1, 0, 0, 0, -2147483647, 0, -2147483647, 0, 0, -2147483647, 10, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1 } ;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 1073741824;
	var uLocal_159 = -1073741824;
	var uLocal_160 = 0;
	struct<17> Local_161 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_162 = 255;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 255;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 255;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 255;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 255;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 255;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 255;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 255;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 255;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 255;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 255;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 255;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 255;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 255;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 255;
	var uLocal_282 = 0;
	struct<21> Local_283 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_102 = -1;
	fLocal_104 = 0.5f;
	ScriptParam_283 = 181;
	if (unk_0x9315DBF7D972F07A())
	{
		func_395(ScriptParam_283);
	}
	while (true)
	{
		func_394();
		if (unk_0x9315DBF7D972F07A())
		{
			func_46();
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_3();
	func_2();
}

void func_2()
{
	unk_0xAFBDF6A5E54114C1();
}

void func_3()
{
	int iVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 7))
	{
		Local_151.f_16 = 1;
		Local_151.f_17 = Local_152.f_2712.f_2;
		Local_151.f_18 = Local_152.f_2712.f_6;
		Local_151.f_20 = func_45();
		Local_151.f_21 = func_41();
		func_40();
	}
	func_18();
	unk_0x861D35D42CFD2991(func_16());
	unk_0x861D35D42CFD2991("MPInvPersHud");
	unk_0x861D35D42CFD2991("MPInvPersMessages");
	unk_0x861D35D42CFD2991("MPInvPersMessages2");
	unk_0x861D35D42CFD2991("MpInvPersCommon");
	if (!unk_0xACC32B78196FBC2A(Local_152.f_2895))
	{
		unk_0x861D35D42CFD2991(Local_152.f_2895);
	}
	unk_0xC511E7C272201CF7(3, 0);
	func_15();
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Local_152.f_1801[iVar0 /*14*/].f_12 > -1)
		{
			unk_0xF889BDFCC181BA9F(Local_152.f_1801[iVar0 /*14*/].f_12);
			unk_0xCDBCC1BC1184B002(Local_152.f_1801[iVar0 /*14*/].f_12);
			Local_152.f_1801[iVar0 /*14*/].f_12 = -1;
		}
		if (Local_152.f_1801[iVar0 /*14*/].f_13 > -1)
		{
			unk_0xF889BDFCC181BA9F(Local_152.f_1801[iVar0 /*14*/].f_13);
			unk_0xCDBCC1BC1184B002(Local_152.f_1801[iVar0 /*14*/].f_13);
			Local_152.f_1801[iVar0 /*14*/].f_13 = -1;
		}
		iVar0++;
	}
	func_14(&(Local_152.f_2729));
	func_12(func_13(6));
	unk_0xE24865B69D79521B("DLC_VINEWOOD/DLC_VW_AM_IP");
	if (unk_0xA37204C64473B324("dlc_vw_am_ip_in_gameplay_scene"))
	{
		unk_0x0AF8D3A06BB92903("dlc_vw_am_ip_in_gameplay_scene");
	}
	if (unk_0xA37204C64473B324("dlc_vw_am_ip_in_menus_scene"))
	{
		unk_0x0AF8D3A06BB92903("dlc_vw_am_ip_in_menus_scene");
	}
	func_11();
	func_9();
	func_8(12);
	func_7(0);
	func_4();
	func_2();
}

void func_4()
{
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 7))
	{
		func_5(12, "CLO_VWM_U_23_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 8))
	{
		func_5(12, "CLO_VWM_U_23_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 9))
	{
		func_5(12, "CLO_VWM_D_1_10", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 10))
	{
		func_5(12, "CLO_VWM_U_23_6", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 11))
	{
		func_5(12, "CLO_VWM_D_1_9", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_6(&Global_1652537);
	Global_1652537[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1652537[iVar0 /*106*/].f_97 = iParam5;
	Global_1652537[iVar0 /*106*/].f_104 = iParam9;
	Global_1652537[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xACC32B78196FBC2A(sParam8))
	{
		StringCopy(&(Global_1652537[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_7(int iParam0)
{
	Global_1932180 = iParam0;
}

void func_8(int iParam0)
{
	Local_152.f_2870 = iParam0;
}

void func_9()
{
	Local_152.f_2947 = -1;
	if (Local_152.f_2901 != -2147483647)
	{
		Local_152.f_2901 = -2147483647;
	}
	if (!unk_0xACC32B78196FBC2A(Local_152.f_2903))
	{
		Local_152.f_2903 = func_10();
	}
	if (unk_0xF847447D4467709D())
	{
		unk_0x3410421C60BF7143(1);
	}
}

var func_10()
{
	var uVar0;
	
	return uVar0;
}

void func_11()
{
	if (Local_152.f_2879 != 0)
	{
		unk_0x58B01BEA756FA105(Local_152.f_2879);
		unk_0xF3440233F7D3E150(Local_152.f_2879);
	}
	if (Local_152.f_2880 != 0)
	{
		unk_0x58B01BEA756FA105(Local_152.f_2880);
		unk_0xF3440233F7D3E150(Local_152.f_2880);
	}
	if (Local_152.f_2881 != 0)
	{
		unk_0x58B01BEA756FA105(Local_152.f_2881);
		unk_0xF3440233F7D3E150(Local_152.f_2881);
	}
}

void func_12(var uParam0)
{
	unk_0x1CF3F44FC2EB9F99(uParam0);
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_IAP_THEME_START";
		
		case 1:
			switch (Local_152.f_2871)
			{
				case 0:
					return "CASINO_IAP_LEVEL1_BRIEF";
				
				case 1:
					return "CASINO_IAP_LEVEL2_BRIEF";
				
				case 2:
					return "CASINO_IAP_LEVEL3_BRIEF";
				
				case 3:
					return "CASINO_IAP_LEVEL4_BRIEF";
				
				case 4:
					return "CASINO_IAP_LEVEL5_BRIEF";
				
				default:
			}
			break;
		
		case 2:
			switch (Local_152.f_2871)
			{
				case 0:
					return "CASINO_IAP_LEVEL1_PLAY";
				
				case 1:
					return "CASINO_IAP_LEVEL2_PLAY";
				
				case 2:
					return "CASINO_IAP_LEVEL3_PLAY";
				
				case 3:
					return "CASINO_IAP_LEVEL4_PLAY";
				
				case 4:
					return "CASINO_IAP_LEVEL5_PLAY";
				
				default:
			}
			break;
		
		case 3:
			return "CASINO_LEVEL_END";
		
		case 4:
			return "CASINO_IAP_LEADERBOARD_START";
		
		case 5:
			return "CASINO_IAP_STAGE_CLEAR";
		
		case 6:
			return "CASINO_STOP_MUSIC";
		
		case 7:
			return "CASINO_STOP_NO_FADE";
	}
	return "INVALID MUSIC EVENT";
}

void func_14(var uParam0)
{
	if (!unk_0x78D9ADD511FEAD8B(*uParam0))
	{
		unk_0xF889BDFCC181BA9F(*uParam0);
	}
	unk_0xCDBCC1BC1184B002(*uParam0);
	*uParam0 = -1;
}

void func_15()
{
	if (Local_152.f_2368.f_338 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_338);
		unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_338);
		Local_152.f_2368.f_338 = -1;
	}
	if (Local_152.f_2368.f_339 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_339);
		unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_339);
		Local_152.f_2368.f_339 = -1;
	}
	if (Local_152.f_2368.f_340 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_340);
		unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_340);
		Local_152.f_2368.f_340 = -1;
	}
	if (Local_152.f_2368.f_341 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_341);
		unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_341);
		Local_152.f_2368.f_341 = -1;
	}
	if (Local_152.f_2368.f_342 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_342);
		unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_342);
		Local_152.f_2368.f_342 = -1;
	}
	if (Local_152.f_2368.f_343 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_343);
		unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_343);
		Local_152.f_2368.f_343 = -1;
	}
}

char* func_16()
{
	if (func_17())
	{
		return "MPInvPersPlayerGold";
	}
	return "MPInvPersPlayer";
}

bool func_17()
{
	return unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 0);
}

void func_18()
{
	Global_1637065 = 0;
	func_38();
	Global_4718592.f_132413 = 0;
	func_37();
	unk_0xB0550BC91B0159D6(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 16);
	func_36(0, 1, 1, 0);
	func_35();
	if (func_33() && !unk_0x2981C54770E1D19C())
	{
		if (unk_0x9315DBF7D972F07A())
		{
			func_20(unk_0x9E2D6C50374FCFA9(), 1, 0, 0);
		}
		else
		{
			unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), true, 0);
		}
	}
	func_19(0, 0, -1);
	func_19(1, 0, -1);
	func_19(2, 0, -1);
	func_19(3, 0, -1);
	func_19(4, 0, -1);
	func_19(6, 0, -1);
	func_19(7, 0, -1);
	func_19(8, 0, -1);
	func_19(9, 0, -1);
	func_19(10, 0, -1);
	func_19(11, 0, -1);
	func_19(12, 0, -1);
	func_19(13, 0, -1);
	func_19(14, 0, -1);
	func_19(15, 0, -1);
	func_19(16, 0, -1);
}

void func_19(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1644209.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xCED9E32812D6C7C7(&(Global_1644209.f_1046), iParam0);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_1644209.f_1046), iParam0);
			}
			break;
	}
}

void func_20(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x1088B18071ADCCBD())
		{
			unk_0x94B5910A9C945688(0);
		}
	}
	if (func_32())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x9315DBF7D972F07A())
	{
		uVar0 = iParam2;
		unk_0x64E21045781AFBC9(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x44859561F653DD4E())
		{
			bVar1 = false;
		}
		if (!func_33())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x0D01086B38EC256F(iParam0) && (unk_0x3583A42587543334(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x55B23FE400FCEA6B(unk_0x407E03586628E458(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x407E03586628E458(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x9315DBF7D972F07A())
				{
					unk_0x5C53AF694DE011E8(1);
				}
				else if (bVar14 || (!func_29(unk_0x9E2D6C50374FCFA9(), 0) && !func_28()))
				{
					unk_0x1C2ED929474DC6FE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x9315DBF7D972F07A() && !bVar19)
					{
						unk_0x5C53AF694DE011E8(0);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_25(0, 0, 0);
					if (bVar25)
					{
						unk_0x5639E771F6085BF6();
					}
				}
				if (!func_24(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, true, 0);
					}
				}
				if (!unk_0xE85F749F6D5C809E(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5C65DDDC219B3AA5(uVar27, false);
					}
					unk_0x398C962F550CF3B4(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5C65DDDC219B3AA5(uVar27, false);
				}
				unk_0xA7266A50941DBAEA(uVar27, true);
				unk_0xC099DA307DD6BC62(iParam0, 0);
				unk_0x7E9CA7389EF595E6(iParam0, 0);
				if (unk_0xA13A75665F7E0689(uVar27) && unk_0x6090FC735660B8F7(uVar27))
				{
					unk_0xAD9047296F9EA375(uVar27);
				}
				unk_0xC252F409BDE7A700(uVar27, 1);
				if (unk_0x1C7A1A7E9E4766CF(unk_0x9E2D6C50374FCFA9()) == 0)
				{
					func_23();
					func_22();
				}
				if (unk_0xBC4351060BEFB0D2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x2981C54770E1D19C())
				{
				}
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_24(uVar27) && !unk_0xE2ED785E8DB4D3FF(uVar27))
				{
					if (!bVar22)
					{
						unk_0x959E1626CBC7D38A(uVar27, !bVar15, 0);
					}
					if (!unk_0xE85F749F6D5C809E(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5C65DDDC219B3AA5(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x398C962F550CF3B4(uVar27, 1);
						}
					}
					if (func_21(Global_4718592.f_138117))
					{
						unk_0x5C65DDDC219B3AA5(uVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xC099DA307DD6BC62(iParam0, 0);
				}
				else
				{
					unk_0xC099DA307DD6BC62(iParam0, 1);
				}
				unk_0xA7266A50941DBAEA(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xFD478ECFA85A941A(uVar27) && !unk_0xD5C6B5E3B93A5EDC(uVar27, 0))
					{
						unk_0x51BB443B279E4104(uVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x64E21045781AFBC9(iParam0, bParam1, iVar28);
		}
	}
}

bool func_21(int iParam0)
{
	return iParam0 == 17;
}

void func_22()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_23()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_24(var uParam0)
{
	int iVar0;
	
	if (unk_0xD5C6B5E3B93A5EDC(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x174CED88B97C78D9(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x55B23FE400FCEA6B(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x65FAB09725E2FE75(iParam1))
			{
				if (!unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), unk_0xFF65CDB0EB7ACE71(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_27();
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 1))
			{
				if (unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x4B1C22133022D7D3(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 1);
			}
		}
		if (func_29(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0x1FD50AAF9DA2199E(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x86998D41F61B3824(iParam0, iParam1);
		}
		unk_0x6CAF65C4F61A4BBD(iParam0, iParam1);
		func_26(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41483427EFBC0047(iVar0, iParam1, 1);
	}
}

void func_27()
{
	int iVar0;
	
	if (!unk_0xD852449BF2E2BA8D())
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0x4DE6A646AFB7CF5C(iVar0);
				iVar0++;
			}
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 2);
			unk_0xCED9E32812D6C7C7(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_28()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

bool func_29(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_30(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			bVar0 = unk_0x0E40F846A70BA3EC(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_30(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_31()
{
	return Global_1574907;
}

int func_32()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (func_34() == 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	return Global_1574629.f_18;
}

void func_35()
{
	if (Global_2703656.f_847.f_10)
	{
		Global_2703656.f_847.f_10 = 0;
	}
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x131A54781ECD3789() != iParam0 && iParam2)
		{
			unk_0x10B0B2BEC7FAA911(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_37()
{
	if (Global_1932662)
	{
	}
	Global_1932662 = 0;
}

void func_38()
{
	if (!Global_1574737)
	{
		return;
	}
	func_39();
}

void func_39()
{
	Global_1574737 = 0;
	StringCopy(&(Global_1574737.f_1), "", 32);
	Global_1574737.f_9 = 0;
}

void func_40()
{
	if (!unk_0x9315DBF7D972F07A())
	{
		return;
	}
	if (unk_0xACC32B78196FBC2A(&Local_151))
	{
		return;
	}
	if (Local_151.f_19 == 0)
	{
		return;
	}
	Local_151.f_19 = (unk_0xE75390F3CA208D5E() - Local_151.f_19);
	unk_0xC9E0752C5AF51DC0(unk_0x2E87280918B16506(&Local_151), Local_151.f_16, Local_151.f_17, Local_151.f_18, Local_151.f_19, Local_151.f_20, Local_151.f_21);
}

int func_41()
{
	if (unk_0x9E2D6C50374FCFA9() != func_44())
	{
		switch (func_42())
		{
			case 17:
				return 2003554330;
				break;
			
			case 15:
				return 729976867;
				break;
			
			default:
				return 0;
				break;
			}
	}
	return 0;
}

int func_42()
{
	return func_43(Global_1946934.f_503);
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

int func_44()
{
	return -1;
}

int func_45()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + Local_152.f_2712);
	iVar0 = (iVar0 + Local_152.f_2712.f_3);
	iVar0 = (iVar0 + Local_152.f_2712.f_7);
	iVar0 = (iVar0 + Local_152.f_2712.f_10);
	iVar0 = (iVar0 + Local_152.f_2712.f_12);
	iVar0 = (iVar0 + Local_152.f_2712.f_11);
	return iVar0;
}

void func_46()
{
	func_355();
	func_49();
	func_47();
}

void func_47()
{
	if (!func_48())
	{
		unk_0x19DD1C202B338DF3();
	}
	Local_152.f_2368.f_324 = Local_152.f_2368.f_325;
}

bool func_48()
{
	return unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 2);
}

void func_49()
{
	switch (Local_152.f_2870)
	{
		case 0:
			func_336();
			break;
		
		case 1:
			func_331();
			break;
		
		case 2:
			func_329();
			break;
		
		case 3:
			func_327();
			break;
		
		case 4:
			func_319();
			break;
		
		case 5:
			func_312();
			break;
		
		case 6:
			func_309();
			break;
		
		case 7:
			func_270();
			break;
		
		case 8:
			func_268();
			break;
		
		case 9:
			func_99();
			break;
		
		case 10:
			func_50();
			break;
		
		case 11:
			func_3();
			break;
		
		case 12:
			break;
	}
}

void func_50()
{
	func_81();
	func_66();
	func_62();
	if (!func_61())
	{
		return;
	}
	if (func_60() < 10)
	{
		Local_152.f_2912[func_60() /*3*/].f_2 = 0;
		Local_152.f_2912[func_60() /*3*/] = Local_152.f_2944;
	}
	func_9();
	func_59();
	func_58();
	func_52();
	func_51("Frontend_Retry");
	func_8(4);
}

void func_51(char* sParam0)
{
	unk_0x91DFC8F68F6D9B05(-1, sParam0, "dlc_vw_am_ip_frontend_sounds", 0);
}

void func_52()
{
	Local_152.f_2871 = 0;
	func_57();
	Local_152.f_2943 = 0;
	Local_152.f_2944 = 0;
	Local_152.f_2945 = -1;
	if (func_56(&(Local_152.f_2898), 33))
	{
		func_53(&(Local_152.f_2898), 33);
	}
}

void func_53(var uParam0, int iParam1)
{
	unk_0xB0550BC91B0159D6(uParam0[func_55(iParam1)], func_54(iParam1));
}

int func_54(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_55(iParam0) * 31);
}

int func_55(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

bool func_56(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85((*uParam0)[func_55(iParam1)], func_54(iParam1));
}

void func_57()
{
	Local_152.f_2712 = 0;
	Local_152.f_2712.f_1 = 0;
	Local_152.f_2712.f_2 = 0;
	Local_152.f_2712.f_3 = 0;
	Local_152.f_2712.f_4 = 0;
	Local_152.f_2712.f_6 = 0;
	Local_152.f_2712.f_5 = 0;
	Local_152.f_2712.f_7 = 0;
	Local_152.f_2712.f_8 = 0;
	Local_152.f_2712.f_9 = 0;
	Local_152.f_2712.f_10 = 0;
	Local_152.f_2712.f_11 = 0;
	Local_152.f_2712.f_12 = 0;
}

void func_58()
{
	Local_152.f_2880 = unk_0x16CFD341BCF2F070("I&P_intro_16x9");
	unk_0xE178310643033958(Local_152.f_2880);
	unk_0x01A548D39DA6CCDB(Local_152.f_2880, 1);
}

void func_59()
{
	unk_0x58B01BEA756FA105(Local_152.f_2881);
	unk_0xF3440233F7D3E150(Local_152.f_2881);
}

int func_60()
{
	int iVar0;
	
	if (Local_152.f_2945 != -1)
	{
		return Local_152.f_2945;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_152.f_2912[iVar0 /*3*/].f_2)
		{
			Local_152.f_2945 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

int func_61()
{
	int iVar0;
	
	iVar0 = 199;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 201;
	}
	if (unk_0xF01464D7AF0B7347(2, iVar0))
	{
		return 1;
	}
	return 0;
}

void func_62()
{
	char cVar0[16];
	
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 2);
	if (func_60() == 99 || Local_152.f_2943 > 2)
	{
		StringCopy(&cVar0, "IAP_H_LBD0", 16);
		if (unk_0xA7384DAD7CF469DA())
		{
			StringConCat(&cVar0, "_PS4", 16);
		}
	}
	else if (Local_152.f_2943 == 2)
	{
		StringCopy(&cVar0, "IAP_H_LBD1", 16);
	}
	else
	{
		StringCopy(&cVar0, "IAP_H_LBD2", 16);
	}
	if (unk_0x3A76A0944BE2C291(2))
	{
		StringConCat(&cVar0, "_PC", 16);
	}
	if (func_65(&cVar0))
	{
		return;
	}
	func_9();
	func_63(&cVar0);
}

void func_63(char[4] cParam0)
{
	Local_152.f_2947 = unk_0x2E87280918B16506(cParam0);
	func_64(cParam0);
}

void func_64(var uParam0)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x89B545A74F93B1DD(0, 1, 1, -1);
}

int func_65(char[4] cParam0)
{
	if (Local_152.f_2947 == unk_0x2E87280918B16506(cParam0))
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[0];
	int iVar6;
	
	if (func_60() >= 10)
	{
		return;
	}
	if (unk_0xF4E7B156E5A4B520(Local_152.f_2946))
	{
		if (unk_0x82531DB473114086(Local_152.f_2946))
		{
			return;
		}
		if (unk_0x3B16C45D63FDB882(Local_152.f_2946))
		{
			Local_152.f_2912[func_60() /*3*/] = Local_152.f_2944;
			func_73(func_75(unk_0x9E2D6C50374FCFA9()), 1, func_60(), Local_152.f_2912[func_60() /*3*/], Local_152.f_2912[func_60() /*3*/].f_1, 0);
			Local_152.f_2946 = 0;
		}
		else
		{
			func_51("Frontend_Change_Letter");
			Local_152.f_2943 = 0;
			Local_152.f_2944 = 0;
			Local_152.f_2946 = 0;
		}
		return;
	}
	if (Local_152.f_2943 >= 3)
	{
		return;
	}
	iVar1 = 227;
	iVar2 = 226;
	iVar3 = 191;
	iVar4 = 194;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar3 = 237;
		iVar4 = 238;
		iVar1 = 188;
		iVar2 = 187;
	}
	if (unk_0xF01464D7AF0B7347(2, iVar3))
	{
		Local_152.f_2943++;
		if (Local_152.f_2943 >= 3)
		{
			Local_152.f_2943 = 3;
			func_71(Local_152.f_2944, &iVar0);
			StringCopy(&cVar5, func_70(iVar0[0]), 4);
			StringConCat(&cVar5, func_70(iVar0[1]), 4);
			StringConCat(&cVar5, func_70(iVar0[2]), 4);
			if (unk_0xCC5050A709F16570(&cVar5, &(Local_152.f_2946)))
			{
				func_51("Frontend_Entered_Score");
			}
		}
		return;
	}
	if (unk_0xF01464D7AF0B7347(2, iVar4))
	{
		if (Local_152.f_2943 > 0)
		{
			Local_152.f_2943 = (Local_152.f_2943 - 1);
		}
		return;
	}
	iVar6 = 0;
	if (unk_0xF01464D7AF0B7347(2, iVar1))
	{
		iVar6 = 1;
	}
	else if (unk_0xF01464D7AF0B7347(2, iVar2))
	{
		iVar6 = -1;
	}
	if (iVar6 == 0)
	{
		return;
	}
	func_51("Frontend_Change_Letter");
	func_71(Local_152.f_2944, &iVar0);
	iVar0[Local_152.f_2943] = (iVar0[Local_152.f_2943] + iVar6);
	if (iVar0[Local_152.f_2943] >= 36)
	{
		iVar0[Local_152.f_2943] = 0;
	}
	else if (iVar0[Local_152.f_2943] < 0)
	{
		iVar0[Local_152.f_2943] = 35;
	}
	Local_152.f_2944 = func_67(&iVar0);
}

var func_67(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_68(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_69(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || shift_left(iParam3, (iParam1 * iParam2)));
}

var func_69(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		unk_0xCED9E32812D6C7C7(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

char* func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

void func_71(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_72(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_72(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_69(iParam2, 0);
	return (shift_right(iParam0, (iParam1 * iParam2)) && uVar0);
}

void func_73(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = -1605670950;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar1 = func_74(iParam0);
	if (!iVar1 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 7, iVar1);
	}
}

var func_74(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_44())
	{
		return iParam0;
	}
	if (func_79(iParam0) != -1)
	{
		iVar0 = func_43(func_79(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_77(iParam0, 0))
			{
				return func_76(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_44();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_44();
}

int func_76(int iParam0)
{
	if (iParam0 != func_44())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_44();
}

bool func_77(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_78(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_44();
}

int func_78(int iParam0)
{
	if (iParam0 != func_44())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_44())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 != func_44())
	{
		if (func_80(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_80(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

int func_80(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x0D01086B38EC256F(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x3583A42587543334(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_81()
{
	var uVar0[4];
	float fVar1;
	int iVar2;
	int iVar3;
	
	unk_0xFC36643F7A64338F(Local_152.f_2881, 0.5f, 0.5f, (1f * fLocal_148), 1f, 0f, 255, 255, 255, 255);
	fVar1 = 0.22f;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		if (Local_152.f_2912[iVar2 /*3*/].f_2 && (Local_152.f_2943 < 3 || unk_0xF4E7B156E5A4B520(Local_152.f_2946)))
		{
			func_71(Local_152.f_2944, &uVar0);
		}
		else
		{
			func_71(Local_152.f_2912[iVar2 /*3*/], &uVar0);
		}
		iVar3 = 255;
		if (Local_152.f_2912[iVar2 /*3*/].f_2)
		{
			iVar3 = round(unk_0x48053974ED6F63CE((sin((to_float(unk_0x0A89FDFA763DCAED()) * 0.5f)) * 80f))) + 175;
		}
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		unk_0x71F4002CB1A0B451(0, 0, 0, iVar3);
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98((0.37f + 0.001041667f)));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2(func_97(iVar2));
		unk_0x1A53079994915FA6(func_98(0.5f), (fVar1 + 0.003703704f), 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		unk_0x71F4002CB1A0B451(255, 255, 255, iVar3);
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98(0.37f));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2(func_97(iVar2));
		unk_0x1A53079994915FA6(func_98(0.5f), fVar1, 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		if (Local_152.f_2912[iVar2 /*3*/].f_2 && Local_152.f_2943 == 0)
		{
			unk_0x71F4002CB1A0B451(Local_152.f_1765.f_24, Local_152.f_1765.f_24.f_1, Local_152.f_1765.f_24.f_2, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, iVar3);
		}
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98((0.4135417f + 0.001041667f)));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(func_70(uVar0[0]));
		unk_0x1A53079994915FA6(func_98(0.5f), (fVar1 + 0.003703704f), 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		if (Local_152.f_2912[iVar2 /*3*/].f_2 && Local_152.f_2943 == 0)
		{
			unk_0x71F4002CB1A0B451(Local_152.f_1765.f_28, Local_152.f_1765.f_28.f_1, Local_152.f_1765.f_28.f_2, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(255, 255, 255, iVar3);
		}
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98(0.4135417f));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(func_70(uVar0[0]));
		unk_0x1A53079994915FA6(func_98(0.5f), fVar1, 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		if (Local_152.f_2912[iVar2 /*3*/].f_2 && Local_152.f_2943 == 1)
		{
			unk_0x71F4002CB1A0B451(Local_152.f_1765.f_24, Local_152.f_1765.f_24.f_1, Local_152.f_1765.f_24.f_2, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, iVar3);
		}
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98((0.4411458f + 0.001041667f)));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(func_70(uVar0[1]));
		unk_0x1A53079994915FA6(func_98(0.5f), (fVar1 + 0.003703704f), 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		if (Local_152.f_2912[iVar2 /*3*/].f_2 && Local_152.f_2943 == 1)
		{
			unk_0x71F4002CB1A0B451(Local_152.f_1765.f_28, Local_152.f_1765.f_28.f_1, Local_152.f_1765.f_28.f_2, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(255, 255, 255, iVar3);
		}
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98(0.4411458f));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(func_70(uVar0[1]));
		unk_0x1A53079994915FA6(func_98(0.5f), fVar1, 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		if (Local_152.f_2912[iVar2 /*3*/].f_2 && Local_152.f_2943 == 2)
		{
			unk_0x71F4002CB1A0B451(Local_152.f_1765.f_24, Local_152.f_1765.f_24.f_1, Local_152.f_1765.f_24.f_2, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(0, 0, 0, iVar3);
		}
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98((0.46875f + 0.001041667f)));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(func_70(uVar0[2]));
		unk_0x1A53079994915FA6(func_98(0.5f), (fVar1 + 0.003703704f), 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		if (Local_152.f_2912[iVar2 /*3*/].f_2 && Local_152.f_2943 == 2)
		{
			unk_0x71F4002CB1A0B451(Local_152.f_1765.f_28, Local_152.f_1765.f_28.f_1, Local_152.f_1765.f_28.f_2, 255);
		}
		else
		{
			unk_0x71F4002CB1A0B451(255, 255, 255, iVar3);
		}
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98(0.46875f));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("STRING");
		unk_0x76DB21247AE4E4E2(func_70(uVar0[2]));
		unk_0x1A53079994915FA6(func_98(0.5f), fVar1, 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		unk_0x71F4002CB1A0B451(0, 0, 0, iVar3);
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98((0.695f + 0.001041667f)));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("IAP_SCR");
		unk_0x2AE954BA77A66307(Local_152.f_2912[iVar2 /*3*/].f_1);
		unk_0x1A53079994915FA6(func_98(0.5f), (fVar1 + 0.003703704f), 0);
		unk_0x3F03C2D4EFA888BC(1f, 1f);
		unk_0x71F4002CB1A0B451(255, 255, 255, iVar3);
		unk_0xB9A0CF201CF801F2(1);
		unk_0xE835F806BE49C67B(func_98(0f), func_98(0.695f));
		unk_0xF68E5437AF17EFBC(7);
		unk_0xCDDA0C58B818F6B2("IAP_SCR");
		unk_0x2AE954BA77A66307(Local_152.f_2912[iVar2 /*3*/].f_1);
		unk_0x1A53079994915FA6(func_98(0.5f), fVar1, 0);
		fVar1 = (fVar1 + 0.06f);
		iVar2++;
	}
	func_84();
	func_82();
}

void func_82()
{
	func_83("MPInvPersMessages", "facade", 0.5f, 0.5f, 1f, 1f, 0f, Local_152.f_1765);
}

void func_83(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	int iVar0;
	
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return;
	}
	iVar0 = round((fParam3 * IntToFloat(iLocal_150)));
	fParam3 = (to_float(iVar0) * (1f / IntToFloat(iLocal_150)));
	iVar0 = round(((fParam5 * IntToFloat(iLocal_150)) / 4f)) * 4;
	fParam5 = (to_float(iVar0) * (1f / IntToFloat(iLocal_150)));
	unk_0x7A86232B8D047C7B(sParam0, sParam1, func_98(fParam2), fParam3, (fParam4 * fLocal_148), fParam5, fParam6, Param7, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_85(iVar0);
		iVar0++;
	}
}

void func_85(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	float fVar4;
	
	if (!Local_161[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { func_96() };
	Var3.f_3 = 255;
	if (Local_161[iParam0 /*17*/].f_3)
	{
		Var0 = -Var0;
	}
	Var1 = { func_95() };
	if (!Local_161[iParam0 /*17*/].f_2)
	{
		if (Local_161[iParam0 /*17*/].f_4 > 0)
		{
			Var1.f_1 = (Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_161[iParam0 /*17*/].f_4) % (IntToFloat(Local_161[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_161[iParam0 /*17*/].f_6) * 1f)));
			Var2 = { Var1 };
			Var2.f_1 = (Var2.f_1 + Var0.f_1);
		}
		else if (Local_161[iParam0 /*17*/].f_7 > 0)
		{
			Local_161[iParam0 /*17*/].f_4 = unk_0x5853B15F78E1A265(0, Local_161[iParam0 /*17*/].f_7);
			Local_161[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_161[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_161[iParam0 /*17*/].f_4 = Local_161[iParam0 /*17*/].f_6;
		Local_161[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_161[iParam0 /*17*/].f_1)
	{
		fVar4 = (to_float(Local_161[iParam0 /*17*/].f_5) / to_float(Local_161[iParam0 /*17*/].f_8));
		Var3 = func_94(Local_161[iParam0 /*17*/].f_9, Local_161[iParam0 /*17*/].f_13, fVar4);
		Var3.f_1 = func_94(Local_161[iParam0 /*17*/].f_9.f_1, Local_161[iParam0 /*17*/].f_13.f_1, fVar4);
		Var3.f_2 = func_94(Local_161[iParam0 /*17*/].f_9.f_2, Local_161[iParam0 /*17*/].f_13.f_2, fVar4);
		Var3.f_3 = func_94(Local_161[iParam0 /*17*/].f_9.f_3, Local_161[iParam0 /*17*/].f_13.f_3, fVar4);
	}
	else
	{
		Var3 = { Local_161[iParam0 /*17*/].f_9 };
	}
	if (unk_0xACC32B78196FBC2A(func_93(iParam0)))
	{
		func_90(Var1, Var0, Var3);
	}
	else
	{
		func_86(func_89(iParam0), func_93(iParam0), Var1, Var0, 0f, Var3);
	}
	if (!Local_161[iParam0 /*17*/].f_2 && Local_161[iParam0 /*17*/].f_4 > 0)
	{
		if (unk_0xACC32B78196FBC2A(func_93(0)))
		{
			func_90(Var2, Var0, Var3);
		}
		else
		{
			func_86(func_89(iParam0), func_93(iParam0), Var2, Var0, 0f, Var3);
		}
	}
	Local_161[iParam0 /*17*/].f_5 = (Local_161[iParam0 /*17*/].f_5 - round((unk_0x51109C28352EC9A3() * 1000f)));
	if (Local_161[iParam0 /*17*/].f_5 < 0)
	{
		Local_161[iParam0 /*17*/].f_5 = (Local_161[iParam0 /*17*/].f_5 + Local_161[iParam0 /*17*/].f_8);
	}
	Local_161[iParam0 /*17*/].f_4 = (Local_161[iParam0 /*17*/].f_4 - round((unk_0x51109C28352EC9A3() * 1000f)));
	if (Local_161[iParam0 /*17*/].f_4 < 0)
	{
		Local_161[iParam0 /*17*/].f_4 = 0;
	}
}

void func_86(var uParam0, var uParam1, struct<2> Param2, struct<2> Param3, float fParam4, struct<4> Param5)
{
	Param2 = { func_87(Param2) };
	Param3 = { func_87(Param3) };
	func_83(uParam0, uParam1, Param2, Param2.f_1, Param3, Param3.f_1, fParam4, Param5);
}

struct<2> func_87(struct<2> Param0)
{
	return func_88((Param0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_88(float fParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_89(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_90(struct<2> Param0, struct<2> Param1, struct<4> Param2)
{
	Param0 = { func_87(Param0) };
	Param1 = { func_87(Param1) };
	func_91(Param0, Param1, Param2);
}

void func_91(struct<2> Param0, struct<2> Param1, struct<4> Param2)
{
	Param0 = { func_92(Param0) };
	Param1 = (Param1 * fLocal_148);
	unk_0xCA4C0AD3CAFF651E(Param0, Param0.f_1, Param1, Param1.f_1, Param2, Param2.f_1, Param2.f_2, Param2.f_3, 0);
}

struct<2> func_92(struct<2> Param0)
{
	Param0 = func_98(Param0);
	return Param0;
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_94(int iParam0, int iParam1, float fParam2)
{
	return round((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_95()
{
	return func_88((1920f / 2f), (1080f / 2f));
}

struct<2> func_96()
{
	return func_88(1920f, 1080f);
}

char* func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IAP_1ST";
		
		case 1:
			return "IAP_2ND";
		
		case 2:
			return "IAP_3RD";
		
		case 3:
			return "IAP_4TH";
		
		case 4:
			return "IAP_5TH";
		
		case 5:
			return "IAP_6TH";
		
		case 6:
			return "IAP_7TH";
		
		case 7:
			return "IAP_8TH";
		
		case 8:
			return "IAP_9TH";
		
		case 9:
			return "IAP_10TH";
		
		default:
	}
	return "";
}

float func_98(float fParam0)
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_147));
	return fParam0;
}

void func_99()
{
	func_232();
	func_231();
	func_227();
	func_214();
	func_213();
	func_212();
	func_211();
	func_208();
	func_205();
	func_135();
	if (func_133())
	{
		if (!func_120())
		{
			return;
		}
		if (!func_119(&(Local_152.f_2886)))
		{
			func_118(&(Local_152.f_2886), 0, 0);
		}
		else if (func_116(&(Local_152.f_2886), 7500, 0))
		{
			Local_152.f_2871++;
			if (Local_152.f_2871 == 5)
			{
				func_111();
			}
			else
			{
				func_101();
				func_7(2);
				func_12(func_13(1));
				if (unk_0xA37204C64473B324("dlc_vw_am_ip_in_gameplay_scene"))
				{
					unk_0x0AF8D3A06BB92903("dlc_vw_am_ip_in_gameplay_scene");
				}
				unk_0x66B27A59829491D3("dlc_vw_am_ip_in_menus_scene");
				func_8(5);
			}
			func_100(&(Local_152.f_2886));
		}
		else if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 8) && func_116(&(Local_152.f_2886), 5500, 0))
		{
			unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 8);
			func_12(func_13(3));
		}
	}
}

void func_100(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_101()
{
	int iVar0;
	
	Global_1932180.f_1 = Local_152.f_2871;
	func_107(Local_152.f_2871);
	if (!unk_0xACC32B78196FBC2A(Local_152.f_2895))
	{
		unk_0x861D35D42CFD2991(Local_152.f_2895);
	}
	Local_152.f_2895 = Local_152.f_723;
	Local_152.f_2712.f_1 = 0;
	Local_152.f_2712.f_8 = 0;
	Local_152.f_2712.f_4 = 0;
	Local_152.f_2214.f_124 = -1f;
	Local_152.f_2214.f_125 = -1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Local_152.f_2214.f_113[iVar0] = 0f;
		iVar0++;
	}
	Local_152.f_2211 = 0;
	Local_152.f_2210 = 0;
	Local_152.f_2213 = 0;
	Local_152.f_2212 = 0;
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		Local_152.f_1801[iVar0 /*14*/] = -1;
		Local_152.f_1801[iVar0 /*14*/].f_10 = 0;
		if (Local_152.f_1801[iVar0 /*14*/].f_12 > -1)
		{
			unk_0xF889BDFCC181BA9F(Local_152.f_1801[iVar0 /*14*/].f_12);
			unk_0xCDBCC1BC1184B002(Local_152.f_1801[iVar0 /*14*/].f_12);
			Local_152.f_1801[iVar0 /*14*/].f_12 = -1;
		}
		if (Local_152.f_1801[iVar0 /*14*/].f_13 > -1)
		{
			unk_0xF889BDFCC181BA9F(Local_152.f_1801[iVar0 /*14*/].f_13);
			unk_0xCDBCC1BC1184B002(Local_152.f_1801[iVar0 /*14*/].f_13);
			Local_152.f_1801[iVar0 /*14*/].f_13 = -1;
		}
		iVar0++;
	}
	func_14(&(Local_152.f_2729));
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Local_152.f_2730[iVar0 /*4*/].f_1 = -1;
		iVar0++;
	}
	Local_152.f_2811 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Local_152.f_1998[iVar0 /*14*/].f_11 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Local_152.f_2368.f_3[iVar0 /*14*/].f_11 = -2147483647;
		iVar0++;
	}
	Local_152.f_2872 = 0f;
	Local_152.f_2873 = Local_152.f_2;
	func_105();
	Local_152.f_2368.f_325 = 0;
	Local_152.f_2368.f_324 = 0;
	Local_152.f_2368.f_321.f_1 = (-0.061111f + Local_152.f_3);
	Local_152.f_2368.f_321 = 0f;
	if (Local_152.f_2907)
	{
		Local_152.f_2368.f_330 = 99;
	}
	else
	{
		Local_152.f_2368.f_330 = 3;
	}
	Local_152.f_2368.f_331 = 20;
	Local_152.f_2368.f_332 = 0;
	Local_152.f_2368.f_334 = -2147483647;
	Local_152.f_2368.f_335 = -2147483647;
	Local_152.f_2368.f_333 = 0;
	StringCopy(&(Local_152.f_2368.f_303), "tank_drive", 64);
	func_104(0);
	Local_152.f_2368.f_286 = -2147483647;
	Local_152.f_2368.f_320 = 0;
	func_103(0);
	func_102(0);
	func_15();
	Local_152.f_2878 = 0;
	if (func_119(&(Local_152.f_2884)))
	{
		func_100(&(Local_152.f_2884));
	}
	if (func_119(&(Local_152.f_2886)))
	{
		func_100(&(Local_152.f_2886));
	}
	if (func_119(&(Local_152.f_2888)))
	{
		func_100(&(Local_152.f_2888));
	}
}

void func_102(int iParam0)
{
	Local_152.f_2368.f_1 = iParam0;
}

void func_103(int iParam0)
{
	Local_152.f_2368 = iParam0;
}

void func_104(int iParam0)
{
	Local_152.f_2368.f_2 = iParam0;
	if (iParam0 != 0 && unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 1);
	}
}

void func_105()
{
	int iVar0;
	float fVar1;
	
	Local_152.f_2340 = (0.15625f + (Local_152.f_726 / 2f));
	Local_152.f_2340.f_3 = (0.15625f + (Local_152.f_741 / 2f));
	Local_152.f_2340.f_2 = (0.15625f + (Local_152.f_736 / 2f));
	Local_152.f_2340.f_1 = (0.15625f + (Local_152.f_731 / 2f));
	fVar1 = Local_152.f_746;
	iVar0 = 0;
	while (iVar0 <= (Local_152.f_745 - 1))
	{
		Local_152.f_2340.f_4[iVar0] = ((0.15625f + (fVar1 * IntToFloat(iVar0))) + (fVar1 / 2f));
		Local_152.f_2340.f_12[iVar0] = 0;
		iVar0++;
	}
	if (func_106())
	{
		Local_152.f_2896 = { func_88((0.15625f - (0.25f / 2f)), (1f + (0.325926f / 2f))) };
	}
}

int func_106()
{
	if (Local_152.f_2871 == 3)
	{
		return 1;
	}
	return 0;
}

void func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Local_152 = 100f;
			Local_152.f_1 = 600247221;
			Local_152.f_2 = (1f + 0f);
			Local_152.f_3 = ((0.798148f - 0.06944444f) + 0.02314815f);
			Local_152.f_723 = "MPInvPersStage0";
			Local_152.f_724 = "background";
			Local_152.f_725 = 3;
			Local_152.f_726 = { func_88(0.658333f, 1f) };
			Local_152.f_728 = (0.5f - 0.06944444f);
			Local_152.f_729 = "midground_3";
			Local_152.f_730 = 3;
			Local_152.f_731 = { func_88(0.658333f, 0.214815f) };
			Local_152.f_733 = (0.470378f - 0.06944444f);
			Local_152.f_734 = "midground_2";
			Local_152.f_735 = 3;
			Local_152.f_736 = { func_88(0.658333f, 0.4f) };
			Local_152.f_738 = (0.483333f - 0.06944444f);
			Local_152.f_739 = "midground_1";
			Local_152.f_740 = 3;
			Local_152.f_741 = { func_88(0.658333f, 0.296296f) };
			Local_152.f_743 = (0.785183f - 0.06944444f);
			Local_152.f_744 = "foreground";
			Local_152.f_745 = 6;
			Local_152.f_746 = { func_88(0.191667f, 0.211111f) };
			Local_152.f_748 = ((0.89444f - 0.06944444f) + 0.02314815f);
			func_110(&(Local_152.f_749), 220, 169, 80, 255);
			break;
		
		case 1:
			Local_152 = 150f;
			Local_152.f_1 = 1179731900;
			Local_152.f_2 = (1f + 0.08f);
			Local_152.f_3 = ((0.794444f - 0.06944444f) + 0.02314815f);
			Local_152.f_723 = "MPInvPersStage2";
			Local_152.f_724 = "background";
			Local_152.f_725 = 3;
			Local_152.f_726 = { func_88(0.658333f, 0.5f) };
			Local_152.f_728 = (0.25f - 0.06944444f);
			Local_152.f_729 = "midground_3";
			Local_152.f_730 = 3;
			Local_152.f_731 = { func_88(0.658333f, 0.437037f) };
			Local_152.f_733 = 0.2185185f;
			Local_152.f_734 = "midground_2";
			Local_152.f_735 = 3;
			Local_152.f_736 = { func_88(0.604167f, 0.466667f) };
			Local_152.f_738 = 0.290741f;
			Local_152.f_739 = "midground_1";
			Local_152.f_740 = 4;
			Local_152.f_741 = { func_88(0.333333f, 0.52963f) };
			Local_152.f_743 = ((0.735185f - 0.06944444f) + 0.02314815f);
			Local_152.f_744 = "foreground";
			Local_152.f_745 = 6;
			Local_152.f_746 = { func_88(0.216667f, 0.214815f) };
			Local_152.f_748 = ((0.892593f - 0.06944444f) + 0.02314815f);
			func_110(&(Local_152.f_749), 192, 135, 135, 255);
			break;
		
		case 2:
			Local_152 = 250f;
			Local_152.f_1 = -42177296;
			Local_152.f_2 = (1f + 0.2f);
			Local_152.f_3 = ((0.798148f - 0.06944444f) + 0.02314815f);
			Local_152.f_723 = "MPInvPersStage1";
			Local_152.f_724 = "background";
			Local_152.f_725 = 3;
			Local_152.f_726 = { func_88(0.658333f, 1f) };
			Local_152.f_728 = (0.5f - 0.06944444f);
			Local_152.f_729 = "midground_3";
			Local_152.f_730 = 3;
			Local_152.f_731 = { func_88(0.658333f, 0.396296f) };
			Local_152.f_733 = (0.471296f - 0.06944444f);
			Local_152.f_734 = "midground_2";
			Local_152.f_735 = 3;
			Local_152.f_736 = { func_88(0.658333f, 0.518519f) };
			Local_152.f_738 = (0.4101845f - 0.06944444f);
			Local_152.f_739 = "midground_1";
			Local_152.f_740 = 4;
			Local_152.f_741 = { func_88(0.229167f, 0.396296f) };
			Local_152.f_743 = ((0.801852f - 0.06944444f) + 0.02314815f);
			Local_152.f_744 = "foreground";
			Local_152.f_745 = 5;
			Local_152.f_746 = { func_88(0.3104167f, 0.2111111f) };
			Local_152.f_748 = ((0.8944445f - 0.06944444f) + 0.02314815f);
			func_110(&(Local_152.f_749), 207, 160, 154, 255);
			break;
		
		case 3:
			Local_152 = 350f;
			Local_152.f_1 = 714966858;
			Local_152.f_2 = (1f + 0.4f);
			Local_152.f_3 = ((0.794444f - 0.06944444f) + 0.02314815f);
			Local_152.f_723 = "MPInvPersStage3";
			Local_152.f_724 = "background";
			Local_152.f_725 = 3;
			Local_152.f_726 = { func_88(0.547917f, 0.444444f) };
			Local_152.f_728 = ((0.222222f - 0.06944444f) + 0.018f);
			Local_152.f_729 = "midground_3";
			Local_152.f_730 = 3;
			Local_152.f_731 = { func_88(0.533333f, 0.251852f) };
			Local_152.f_733 = ((0.515741f - 0.06944444f) + 0.018f);
			Local_152.f_734 = "midground_2";
			Local_152.f_735 = 3;
			Local_152.f_736 = { func_88(0.658333f, 0.52963f) };
			Local_152.f_738 = ((0.415741f - 0.06944444f) + 0.052f);
			Local_152.f_739 = "midground_1";
			Local_152.f_740 = 3;
			Local_152.f_741 = { func_88(0.658333f, 0.888889f) };
			Local_152.f_743 = ((0.555556f - 0.06944444f) + 0.043f);
			Local_152.f_744 = "foreground";
			Local_152.f_745 = 6;
			Local_152.f_746 = { func_88(0.172917f, 0.214815f) };
			Local_152.f_748 = ((0.89444f - 0.06944444f) + 0.02314815f);
			func_110(&(Local_152.f_749), 96, 122, 142, 255);
			break;
		
		case 4:
			Local_152 = -1f;
			Local_152.f_1 = -678704902;
			Local_152.f_2 = (1f + 0.6f);
			Local_152.f_3 = ((0.807037f - 0.06944444f) + 0.02314815f);
			Local_152.f_723 = "MPInvPersStage4";
			Local_152.f_724 = "background";
			Local_152.f_725 = 3;
			Local_152.f_726 = { func_88(0.6583334f, 0.4740741f) };
			Local_152.f_728 = 0.25f;
			Local_152.f_729 = "midground_3";
			Local_152.f_730 = 3;
			Local_152.f_731 = { func_88(0.6583334f, 0.237037f) };
			Local_152.f_733 = ((0.4712963f - 0.075f) + 0.018f);
			Local_152.f_734 = "midground_2";
			Local_152.f_735 = 3;
			Local_152.f_736 = { func_88(0.6583334f, 0.4740741f) };
			Local_152.f_738 = (0.3898148f + 0.036f);
			Local_152.f_739 = "midground_1";
			Local_152.f_740 = 3;
			Local_152.f_741 = { func_88(0.6583334f, 0.4481482f) };
			Local_152.f_743 = (0.7092593f + 0.052f);
			Local_152.f_744 = "foreground";
			Local_152.f_745 = 7;
			Local_152.f_746 = { func_88(0.16875f, (0.2222222f - 0.01111111f)) };
			Local_152.f_748 = ((0.8333324f - (0.01111111f / 2f)) + 0.02314815f);
			func_110(&(Local_152.f_749), 0, 0, 0, 255);
			break;
	}
	func_109(iParam0);
	func_108(iParam0);
}

void func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_152.f_680[0 /*3*/] = 31;
			Local_152.f_680[0 /*3*/].f_1 = 2.15f;
			Local_152.f_680[0 /*3*/].f_2 = 2;
			Local_152.f_680[1 /*3*/] = 31;
			Local_152.f_680[1 /*3*/].f_1 = 2.9f;
			Local_152.f_680[1 /*3*/].f_2 = 2;
			Local_152.f_680[2 /*3*/] = 31;
			Local_152.f_680[2 /*3*/].f_1 = 3.75f;
			Local_152.f_680[2 /*3*/].f_2 = 2;
			Local_152.f_680[3 /*3*/] = 30;
			Local_152.f_680[3 /*3*/].f_1 = 1.75f;
			Local_152.f_680[3 /*3*/].f_2 = 2;
			Local_152.f_680[4 /*3*/] = 30;
			Local_152.f_680[4 /*3*/].f_1 = 2.5f;
			Local_152.f_680[4 /*3*/].f_2 = 2;
			Local_152.f_680[5 /*3*/] = 32;
			Local_152.f_680[5 /*3*/].f_1 = 1.75f;
			Local_152.f_680[5 /*3*/].f_2 = 0;
			Local_152.f_680[6 /*3*/] = 32;
			Local_152.f_680[6 /*3*/].f_1 = 2.5f;
			Local_152.f_680[6 /*3*/].f_2 = 0;
			Local_152.f_680[7 /*3*/] = 32;
			Local_152.f_680[7 /*3*/].f_1 = 3f;
			Local_152.f_680[7 /*3*/].f_2 = 0;
			Local_152.f_680[8 /*3*/] = 32;
			Local_152.f_680[8 /*3*/].f_1 = 3.75f;
			Local_152.f_680[8 /*3*/].f_2 = 0;
			Local_152.f_680[9 /*3*/] = 30;
			Local_152.f_680[9 /*3*/].f_1 = 1.75f;
			Local_152.f_680[9 /*3*/].f_2 = 0;
			Local_152.f_680[10 /*3*/] = 30;
			Local_152.f_680[10 /*3*/].f_1 = 3.5f;
			Local_152.f_680[10 /*3*/].f_2 = 0;
			Local_152.f_680[11 /*3*/] = 29;
			Local_152.f_680[11 /*3*/].f_1 = 2f;
			Local_152.f_680[11 /*3*/].f_2 = 0;
			Local_152.f_680[12 /*3*/] = 29;
			Local_152.f_680[12 /*3*/].f_1 = 3.25f;
			Local_152.f_680[12 /*3*/].f_2 = 0;
			Local_152.f_680[13 /*3*/] = 29;
			Local_152.f_680[13 /*3*/].f_1 = 4.25f;
			Local_152.f_680[13 /*3*/].f_2 = 0;
			break;
	}
}

void func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 224)
	{
		Local_152.f_4[iVar0 /*3*/] = -1;
		Local_152.f_4[iVar0 /*3*/].f_1 = 0f;
		Local_152.f_4[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			Local_152.f_4[0 /*3*/] = 0;
			Local_152.f_4[0 /*3*/].f_1 = 3f;
			Local_152.f_4[1 /*3*/] = 5;
			Local_152.f_4[1 /*3*/].f_1 = 7f;
			Local_152.f_4[2 /*3*/] = 6;
			Local_152.f_4[2 /*3*/].f_1 = 12f;
			Local_152.f_4[3 /*3*/] = 0;
			Local_152.f_4[3 /*3*/].f_1 = 15f;
			Local_152.f_4[4 /*3*/] = 7;
			Local_152.f_4[4 /*3*/].f_1 = 18f;
			Local_152.f_4[5 /*3*/] = 5;
			Local_152.f_4[5 /*3*/].f_1 = 23f;
			Local_152.f_4[6 /*3*/] = 0;
			Local_152.f_4[6 /*3*/].f_1 = 25f;
			Local_152.f_4[7 /*3*/] = 22;
			Local_152.f_4[7 /*3*/].f_1 = 28f;
			Local_152.f_4[8 /*3*/] = 0;
			Local_152.f_4[8 /*3*/].f_1 = 30f;
			Local_152.f_4[9 /*3*/] = 5;
			Local_152.f_4[9 /*3*/].f_1 = 32f;
			Local_152.f_4[10 /*3*/] = 29;
			Local_152.f_4[10 /*3*/].f_1 = 35f;
			Local_152.f_4[11 /*3*/] = 4;
			Local_152.f_4[11 /*3*/].f_1 = 40f;
			Local_152.f_4[12 /*3*/] = 5;
			Local_152.f_4[12 /*3*/].f_1 = 42f;
			Local_152.f_4[13 /*3*/] = 5;
			Local_152.f_4[13 /*3*/].f_1 = 44f;
			Local_152.f_4[14 /*3*/] = 13;
			Local_152.f_4[14 /*3*/].f_1 = 46f;
			Local_152.f_4[15 /*3*/] = 4;
			Local_152.f_4[15 /*3*/].f_1 = 48f;
			Local_152.f_4[16 /*3*/] = 29;
			Local_152.f_4[16 /*3*/].f_1 = 50f;
			Local_152.f_4[17 /*3*/] = 0;
			Local_152.f_4[17 /*3*/].f_1 = 51.9f;
			Local_152.f_4[18 /*3*/] = 8;
			Local_152.f_4[18 /*3*/].f_1 = 52f;
			Local_152.f_4[19 /*3*/] = 4;
			Local_152.f_4[19 /*3*/].f_1 = 54f;
			Local_152.f_4[20 /*3*/] = 4;
			Local_152.f_4[20 /*3*/].f_1 = 56f;
			Local_152.f_4[21 /*3*/] = 20;
			Local_152.f_4[21 /*3*/].f_1 = 57f;
			Local_152.f_4[22 /*3*/] = 0;
			Local_152.f_4[22 /*3*/].f_1 = 58f;
			Local_152.f_4[23 /*3*/] = 0;
			Local_152.f_4[23 /*3*/].f_1 = 60f;
			Local_152.f_4[24 /*3*/] = 6;
			Local_152.f_4[24 /*3*/].f_1 = 62f;
			Local_152.f_4[25 /*3*/] = 5;
			Local_152.f_4[25 /*3*/].f_1 = 64f;
			Local_152.f_4[26 /*3*/] = 23;
			Local_152.f_4[26 /*3*/].f_1 = 65f;
			Local_152.f_4[27 /*3*/] = 0;
			Local_152.f_4[27 /*3*/].f_1 = 65.5f;
			Local_152.f_4[28 /*3*/] = 0;
			Local_152.f_4[28 /*3*/].f_1 = 67f;
			Local_152.f_4[29 /*3*/] = 13;
			Local_152.f_4[29 /*3*/].f_1 = 69f;
			Local_152.f_4[30 /*3*/] = 29;
			Local_152.f_4[30 /*3*/].f_1 = 70.5f;
			Local_152.f_4[31 /*3*/] = 4;
			Local_152.f_4[31 /*3*/].f_1 = 71f;
			Local_152.f_4[32 /*3*/] = 26;
			Local_152.f_4[32 /*3*/].f_1 = 72.2f;
			Local_152.f_4[33 /*3*/] = 5;
			Local_152.f_4[33 /*3*/].f_1 = 73f;
			Local_152.f_4[34 /*3*/] = 5;
			Local_152.f_4[34 /*3*/].f_1 = 74f;
			Local_152.f_4[35 /*3*/] = 29;
			Local_152.f_4[35 /*3*/].f_1 = 75f;
			Local_152.f_4[36 /*3*/] = 0;
			Local_152.f_4[36 /*3*/].f_1 = 76f;
			Local_152.f_4[37 /*3*/] = 22;
			Local_152.f_4[37 /*3*/].f_1 = 77f;
			Local_152.f_4[38 /*3*/] = 5;
			Local_152.f_4[38 /*3*/].f_1 = 77.5f;
			Local_152.f_4[39 /*3*/] = 5;
			Local_152.f_4[39 /*3*/].f_1 = 78f;
			Local_152.f_4[40 /*3*/] = 0;
			Local_152.f_4[40 /*3*/].f_1 = 79f;
			Local_152.f_4[41 /*3*/] = 8;
			Local_152.f_4[41 /*3*/].f_1 = 80f;
			Local_152.f_4[42 /*3*/] = 5;
			Local_152.f_4[42 /*3*/].f_1 = 83f;
			Local_152.f_4[43 /*3*/] = 0;
			Local_152.f_4[43 /*3*/].f_1 = 84.2f;
			Local_152.f_4[44 /*3*/] = 8;
			Local_152.f_4[44 /*3*/].f_1 = 84.3f;
			Local_152.f_4[45 /*3*/] = 5;
			Local_152.f_4[45 /*3*/].f_1 = 84.5f;
			Local_152.f_4[46 /*3*/] = 5;
			Local_152.f_4[46 /*3*/].f_1 = 85f;
			Local_152.f_4[47 /*3*/] = 5;
			Local_152.f_4[47 /*3*/].f_1 = 85.5f;
			break;
		
		case 1:
			Local_152.f_4[0 /*3*/] = 5;
			Local_152.f_4[0 /*3*/].f_1 = 3f;
			Local_152.f_4[1 /*3*/] = 5;
			Local_152.f_4[1 /*3*/].f_1 = 5f;
			Local_152.f_4[2 /*3*/] = 2;
			Local_152.f_4[2 /*3*/].f_1 = 7f;
			Local_152.f_4[3 /*3*/] = 9;
			Local_152.f_4[3 /*3*/].f_1 = 9f;
			Local_152.f_4[4 /*3*/] = 9;
			Local_152.f_4[4 /*3*/].f_1 = 12f;
			Local_152.f_4[5 /*3*/] = 5;
			Local_152.f_4[5 /*3*/].f_1 = 13f;
			Local_152.f_4[6 /*3*/] = 5;
			Local_152.f_4[6 /*3*/].f_1 = 18f;
			Local_152.f_4[7 /*3*/] = 9;
			Local_152.f_4[7 /*3*/].f_1 = 17f;
			Local_152.f_4[8 /*3*/] = 5;
			Local_152.f_4[8 /*3*/].f_1 = 22f;
			Local_152.f_4[9 /*3*/] = 29;
			Local_152.f_4[9 /*3*/].f_1 = 22.5f;
			Local_152.f_4[10 /*3*/] = 2;
			Local_152.f_4[10 /*3*/].f_1 = 24f;
			Local_152.f_4[11 /*3*/] = 4;
			Local_152.f_4[11 /*3*/].f_1 = 25.5f;
			Local_152.f_4[12 /*3*/] = 14;
			Local_152.f_4[12 /*3*/].f_1 = 26f;
			Local_152.f_4[13 /*3*/] = 5;
			Local_152.f_4[13 /*3*/].f_1 = 27f;
			Local_152.f_4[14 /*3*/] = 5;
			Local_152.f_4[14 /*3*/].f_1 = 29f;
			Local_152.f_4[15 /*3*/] = 7;
			Local_152.f_4[15 /*3*/].f_1 = 31f;
			Local_152.f_4[16 /*3*/] = 4;
			Local_152.f_4[16 /*3*/].f_1 = 32f;
			Local_152.f_4[17 /*3*/] = 14;
			Local_152.f_4[17 /*3*/].f_1 = 35f;
			Local_152.f_4[18 /*3*/] = 19;
			Local_152.f_4[18 /*3*/].f_1 = 37.5f;
			Local_152.f_4[19 /*3*/] = 9;
			Local_152.f_4[19 /*3*/].f_1 = 40f;
			Local_152.f_4[20 /*3*/] = 4;
			Local_152.f_4[20 /*3*/].f_1 = 43f;
			Local_152.f_4[21 /*3*/] = 24;
			Local_152.f_4[21 /*3*/].f_1 = 44f;
			Local_152.f_4[22 /*3*/] = 9;
			Local_152.f_4[22 /*3*/].f_1 = 46f;
			Local_152.f_4[23 /*3*/] = 31;
			Local_152.f_4[23 /*3*/].f_1 = 50f;
			Local_152.f_4[24 /*3*/] = 4;
			Local_152.f_4[24 /*3*/].f_1 = 50.5f;
			Local_152.f_4[25 /*3*/] = 4;
			Local_152.f_4[25 /*3*/].f_1 = 52f;
			Local_152.f_4[26 /*3*/] = 2;
			Local_152.f_4[26 /*3*/].f_1 = 55f;
			Local_152.f_4[27 /*3*/] = 5;
			Local_152.f_4[27 /*3*/].f_1 = 57f;
			Local_152.f_4[28 /*3*/] = 20;
			Local_152.f_4[28 /*3*/].f_1 = 58f;
			Local_152.f_4[29 /*3*/] = 5;
			Local_152.f_4[29 /*3*/].f_1 = 60f;
			Local_152.f_4[30 /*3*/] = 9;
			Local_152.f_4[30 /*3*/].f_1 = 62f;
			Local_152.f_4[31 /*3*/] = 5;
			Local_152.f_4[31 /*3*/].f_1 = 63f;
			Local_152.f_4[32 /*3*/] = 5;
			Local_152.f_4[32 /*3*/].f_1 = 64f;
			Local_152.f_4[33 /*3*/] = 23;
			Local_152.f_4[33 /*3*/].f_1 = 65.5f;
			Local_152.f_4[34 /*3*/] = 4;
			Local_152.f_4[34 /*3*/].f_1 = 66f;
			Local_152.f_4[35 /*3*/] = 2;
			Local_152.f_4[35 /*3*/].f_1 = 67f;
			Local_152.f_4[36 /*3*/] = 9;
			Local_152.f_4[36 /*3*/].f_1 = 70f;
			Local_152.f_4[37 /*3*/] = 5;
			Local_152.f_4[37 /*3*/].f_1 = 72f;
			Local_152.f_4[38 /*3*/] = 24;
			Local_152.f_4[38 /*3*/].f_1 = 73f;
			Local_152.f_4[39 /*3*/] = 5;
			Local_152.f_4[39 /*3*/].f_1 = 73.5f;
			Local_152.f_4[40 /*3*/] = 31;
			Local_152.f_4[40 /*3*/].f_1 = 75f;
			Local_152.f_4[41 /*3*/] = 20;
			Local_152.f_4[41 /*3*/].f_1 = 76.5f;
			Local_152.f_4[42 /*3*/] = 5;
			Local_152.f_4[42 /*3*/].f_1 = 78f;
			Local_152.f_4[43 /*3*/] = 7;
			Local_152.f_4[43 /*3*/].f_1 = 80f;
			Local_152.f_4[44 /*3*/] = 4;
			Local_152.f_4[44 /*3*/].f_1 = 81f;
			Local_152.f_4[45 /*3*/] = 2;
			Local_152.f_4[45 /*3*/].f_1 = 83f;
			Local_152.f_4[46 /*3*/] = 7;
			Local_152.f_4[46 /*3*/].f_1 = 85f;
			Local_152.f_4[47 /*3*/] = 5;
			Local_152.f_4[47 /*3*/].f_1 = 86f;
			Local_152.f_4[48 /*3*/] = 9;
			Local_152.f_4[48 /*3*/].f_1 = 88f;
			Local_152.f_4[49 /*3*/] = 2;
			Local_152.f_4[49 /*3*/].f_1 = 92f;
			Local_152.f_4[50 /*3*/] = 28;
			Local_152.f_4[50 /*3*/].f_2 = 705;
			Local_152.f_4[50 /*3*/].f_1 = 94f;
			Local_152.f_4[51 /*3*/] = 4;
			Local_152.f_4[51 /*3*/].f_1 = 96f;
			Local_152.f_4[52 /*3*/] = 4;
			Local_152.f_4[52 /*3*/].f_1 = 98f;
			Local_152.f_4[53 /*3*/] = 9;
			Local_152.f_4[53 /*3*/].f_1 = 100f;
			Local_152.f_4[54 /*3*/] = 5;
			Local_152.f_4[54 /*3*/].f_1 = 101f;
			Local_152.f_4[55 /*3*/] = 5;
			Local_152.f_4[55 /*3*/].f_1 = 102f;
			Local_152.f_4[56 /*3*/] = 2;
			Local_152.f_4[56 /*3*/].f_1 = 104f;
			Local_152.f_4[57 /*3*/] = 2;
			Local_152.f_4[57 /*3*/].f_1 = 106f;
			Local_152.f_4[58 /*3*/] = 21;
			Local_152.f_4[58 /*3*/].f_1 = 107f;
			Local_152.f_4[59 /*3*/] = 5;
			Local_152.f_4[59 /*3*/].f_1 = 108f;
			Local_152.f_4[60 /*3*/] = 5;
			Local_152.f_4[60 /*3*/].f_1 = 109f;
			Local_152.f_4[61 /*3*/] = 31;
			Local_152.f_4[61 /*3*/].f_1 = 110f;
			Local_152.f_4[62 /*3*/] = 14;
			Local_152.f_4[62 /*3*/].f_1 = 112f;
			Local_152.f_4[63 /*3*/] = 22;
			Local_152.f_4[63 /*3*/].f_1 = 114.5f;
			Local_152.f_4[64 /*3*/] = 9;
			Local_152.f_4[64 /*3*/].f_1 = 117f;
			Local_152.f_4[65 /*3*/] = 5;
			Local_152.f_4[65 /*3*/].f_1 = 118f;
			Local_152.f_4[66 /*3*/] = 5;
			Local_152.f_4[66 /*3*/].f_1 = 119f;
			Local_152.f_4[67 /*3*/] = 5;
			Local_152.f_4[67 /*3*/].f_1 = 120f;
			Local_152.f_4[68 /*3*/] = 19;
			Local_152.f_4[68 /*3*/].f_1 = 123f;
			Local_152.f_4[69 /*3*/] = 9;
			Local_152.f_4[69 /*3*/].f_1 = 125f;
			Local_152.f_4[70 /*3*/] = 5;
			Local_152.f_4[70 /*3*/].f_1 = 126f;
			Local_152.f_4[71 /*3*/] = 9;
			Local_152.f_4[71 /*3*/].f_1 = 127f;
			Local_152.f_4[72 /*3*/] = 4;
			Local_152.f_4[72 /*3*/].f_1 = 129.5f;
			Local_152.f_4[73 /*3*/] = 2;
			Local_152.f_4[73 /*3*/].f_1 = 131.9f;
			Local_152.f_4[74 /*3*/] = 9;
			Local_152.f_4[74 /*3*/].f_1 = 132f;
			Local_152.f_4[75 /*3*/] = 14;
			Local_152.f_4[75 /*3*/].f_1 = 135.4f;
			Local_152.f_4[76 /*3*/] = 7;
			Local_152.f_4[76 /*3*/].f_1 = 135.5f;
			Local_152.f_4[77 /*3*/] = 4;
			Local_152.f_4[77 /*3*/].f_1 = 136f;
			Local_152.f_4[80 /*3*/] = 22;
			Local_152.f_4[80 /*3*/].f_1 = 137.3f;
			Local_152.f_4[81 /*3*/] = 9;
			Local_152.f_4[81 /*3*/].f_1 = 137.5f;
			break;
		
		case 2:
			Local_152.f_4[0 /*3*/] = 5;
			Local_152.f_4[0 /*3*/].f_1 = 1f;
			Local_152.f_4[1 /*3*/] = 5;
			Local_152.f_4[1 /*3*/].f_1 = 3f;
			Local_152.f_4[2 /*3*/] = 10;
			Local_152.f_4[2 /*3*/].f_1 = 4f;
			Local_152.f_4[3 /*3*/] = 4;
			Local_152.f_4[3 /*3*/].f_1 = 6.5f;
			Local_152.f_4[4 /*3*/] = 18;
			Local_152.f_4[4 /*3*/].f_1 = 8.2f;
			Local_152.f_4[5 /*3*/] = 1;
			Local_152.f_4[5 /*3*/].f_1 = 10f;
			Local_152.f_4[6 /*3*/] = 5;
			Local_152.f_4[6 /*3*/].f_1 = 13f;
			Local_152.f_4[7 /*3*/] = 4;
			Local_152.f_4[7 /*3*/].f_1 = 13f;
			Local_152.f_4[8 /*3*/] = 15;
			Local_152.f_4[8 /*3*/].f_1 = 13.5f;
			Local_152.f_4[9 /*3*/] = 1;
			Local_152.f_4[9 /*3*/].f_1 = 21f;
			Local_152.f_4[10 /*3*/] = 4;
			Local_152.f_4[10 /*3*/].f_1 = 22f;
			Local_152.f_4[11 /*3*/] = 15;
			Local_152.f_4[11 /*3*/].f_1 = 23f;
			Local_152.f_4[12 /*3*/] = 30;
			Local_152.f_4[12 /*3*/].f_1 = 23.5f;
			Local_152.f_4[13 /*3*/] = 4;
			Local_152.f_4[13 /*3*/].f_1 = 27f;
			Local_152.f_4[14 /*3*/] = 1;
			Local_152.f_4[14 /*3*/].f_1 = 30f;
			Local_152.f_4[15 /*3*/] = 23;
			Local_152.f_4[15 /*3*/].f_1 = 31f;
			Local_152.f_4[16 /*3*/] = 10;
			Local_152.f_4[16 /*3*/].f_2 = 1;
			Local_152.f_4[17 /*3*/].f_1 = 35f;
			Local_152.f_4[17 /*3*/] = 5;
			Local_152.f_4[18 /*3*/].f_1 = 35.1f;
			Local_152.f_4[18 /*3*/] = 5;
			Local_152.f_4[18 /*3*/].f_1 = 35.6f;
			Local_152.f_4[19 /*3*/] = 24;
			Local_152.f_4[19 /*3*/].f_1 = 35.7f;
			Local_152.f_4[20 /*3*/] = 5;
			Local_152.f_4[20 /*3*/].f_1 = 37f;
			Local_152.f_4[21 /*3*/] = 7;
			Local_152.f_4[21 /*3*/].f_1 = 39f;
			Local_152.f_4[22 /*3*/] = 15;
			Local_152.f_4[22 /*3*/].f_1 = 40f;
			Local_152.f_4[23 /*3*/] = 5;
			Local_152.f_4[23 /*3*/].f_1 = 40.5f;
			Local_152.f_4[24 /*3*/] = 5;
			Local_152.f_4[24 /*3*/].f_1 = 41f;
			Local_152.f_4[25 /*3*/] = 22;
			Local_152.f_4[25 /*3*/].f_1 = 42.3f;
			Local_152.f_4[26 /*3*/] = 7;
			Local_152.f_4[26 /*3*/].f_1 = 43.5f;
			Local_152.f_4[27 /*3*/] = 6;
			Local_152.f_4[27 /*3*/].f_1 = 46.3f;
			Local_152.f_4[28 /*3*/] = 10;
			Local_152.f_4[28 /*3*/].f_2 = 1;
			Local_152.f_4[28 /*3*/].f_1 = 46.5f;
			Local_152.f_4[29 /*3*/] = 4;
			Local_152.f_4[29 /*3*/].f_1 = 47f;
			Local_152.f_4[30 /*3*/] = 20;
			Local_152.f_4[30 /*3*/].f_1 = 47.5f;
			Local_152.f_4[31 /*3*/] = 4;
			Local_152.f_4[31 /*3*/].f_1 = 49f;
			Local_152.f_4[32 /*3*/] = 10;
			Local_152.f_4[32 /*3*/].f_2 = 1;
			Local_152.f_4[32 /*3*/].f_1 = 50f;
			Local_152.f_4[33 /*3*/] = 5;
			Local_152.f_4[33 /*3*/].f_1 = 53f;
			Local_152.f_4[34 /*3*/] = 1;
			Local_152.f_4[34 /*3*/].f_1 = 54.5f;
			Local_152.f_4[35 /*3*/] = 29;
			Local_152.f_4[35 /*3*/].f_1 = 55.2f;
			Local_152.f_4[36 /*3*/] = 1;
			Local_152.f_4[36 /*3*/].f_1 = 55.9f;
			Local_152.f_4[37 /*3*/] = 10;
			Local_152.f_4[37 /*3*/].f_2 = 1;
			Local_152.f_4[37 /*3*/].f_1 = 56f;
			Local_152.f_4[38 /*3*/] = 7;
			Local_152.f_4[38 /*3*/].f_1 = 56.5f;
			Local_152.f_4[39 /*3*/] = 5;
			Local_152.f_4[39 /*3*/].f_1 = 57.5f;
			Local_152.f_4[40 /*3*/] = 15;
			Local_152.f_4[40 /*3*/].f_1 = 60f;
			Local_152.f_4[41 /*3*/] = 4;
			Local_152.f_4[41 /*3*/].f_1 = 63f;
			Local_152.f_4[42 /*3*/] = 5;
			Local_152.f_4[42 /*3*/].f_1 = 64f;
			Local_152.f_4[43 /*3*/] = 10;
			Local_152.f_4[43 /*3*/].f_2 = 1;
			Local_152.f_4[43 /*3*/].f_1 = 65f;
			Local_152.f_4[44 /*3*/] = 10;
			Local_152.f_4[44 /*3*/].f_2 = 1;
			Local_152.f_4[44 /*3*/].f_1 = 66f;
			Local_152.f_4[45 /*3*/] = 1;
			Local_152.f_4[45 /*3*/].f_1 = 71.5f;
			Local_152.f_4[46 /*3*/] = 23;
			Local_152.f_4[46 /*3*/].f_1 = 72f;
			Local_152.f_4[47 /*3*/] = 10;
			Local_152.f_4[47 /*3*/].f_2 = 1;
			Local_152.f_4[47 /*3*/].f_1 = 72f;
			Local_152.f_4[48 /*3*/] = 5;
			Local_152.f_4[48 /*3*/].f_1 = 74f;
			Local_152.f_4[49 /*3*/] = 32;
			Local_152.f_4[49 /*3*/].f_1 = 76f;
			Local_152.f_4[50 /*3*/] = 10;
			Local_152.f_4[50 /*3*/].f_2 = 1;
			Local_152.f_4[50 /*3*/].f_1 = 77f;
			Local_152.f_4[51 /*3*/] = 4;
			Local_152.f_4[51 /*3*/].f_1 = 78f;
			Local_152.f_4[52 /*3*/] = 10;
			Local_152.f_4[52 /*3*/].f_2 = 1;
			Local_152.f_4[52 /*3*/].f_1 = 79f;
			Local_152.f_4[53 /*3*/] = 4;
			Local_152.f_4[53 /*3*/].f_1 = 79f;
			Local_152.f_4[54 /*3*/] = 5;
			Local_152.f_4[54 /*3*/].f_1 = 80f;
			Local_152.f_4[55 /*3*/] = 10;
			Local_152.f_4[55 /*3*/].f_2 = 1;
			Local_152.f_4[55 /*3*/].f_1 = 81f;
			Local_152.f_4[56 /*3*/] = 5;
			Local_152.f_4[56 /*3*/].f_1 = 82f;
			Local_152.f_4[57 /*3*/] = 6;
			Local_152.f_4[57 /*3*/].f_1 = 83f;
			Local_152.f_4[58 /*3*/] = 15;
			Local_152.f_4[58 /*3*/].f_1 = 83.5f;
			Local_152.f_4[59 /*3*/] = 5;
			Local_152.f_4[59 /*3*/].f_1 = 84f;
			Local_152.f_4[60 /*3*/] = 10;
			Local_152.f_4[60 /*3*/].f_2 = 1;
			Local_152.f_4[60 /*3*/].f_1 = 85f;
			Local_152.f_4[61 /*3*/] = 5;
			Local_152.f_4[61 /*3*/].f_1 = 85.1f;
			Local_152.f_4[62 /*3*/] = 5;
			Local_152.f_4[62 /*3*/].f_1 = 85.8f;
			Local_152.f_4[63 /*3*/] = 10;
			Local_152.f_4[63 /*3*/].f_2 = 1;
			Local_152.f_4[63 /*3*/].f_1 = 90f;
			Local_152.f_4[64 /*3*/] = 20;
			Local_152.f_4[64 /*3*/].f_1 = 94f;
			Local_152.f_4[65 /*3*/] = 15;
			Local_152.f_4[65 /*3*/].f_1 = 95f;
			Local_152.f_4[66 /*3*/] = 4;
			Local_152.f_4[66 /*3*/].f_1 = 96f;
			Local_152.f_4[67 /*3*/] = 4;
			Local_152.f_4[67 /*3*/].f_1 = 98f;
			Local_152.f_4[68 /*3*/] = 15;
			Local_152.f_4[68 /*3*/].f_1 = 99f;
			Local_152.f_4[69 /*3*/] = 31;
			Local_152.f_4[69 /*3*/].f_1 = 99.5f;
			Local_152.f_4[70 /*3*/] = 15;
			Local_152.f_4[70 /*3*/].f_1 = 104f;
			Local_152.f_4[71 /*3*/] = 4;
			Local_152.f_4[71 /*3*/].f_1 = 106f;
			Local_152.f_4[72 /*3*/] = 22;
			Local_152.f_4[72 /*3*/].f_1 = 110f;
			Local_152.f_4[73 /*3*/] = 31;
			Local_152.f_4[73 /*3*/].f_1 = 112.5f;
			Local_152.f_4[74 /*3*/] = 5;
			Local_152.f_4[74 /*3*/].f_2 = 1;
			Local_152.f_4[74 /*3*/].f_1 = 115f;
			Local_152.f_4[75 /*3*/] = 5;
			Local_152.f_4[75 /*3*/].f_2 = 1;
			Local_152.f_4[75 /*3*/].f_1 = 117f;
			Local_152.f_4[76 /*3*/] = 7;
			Local_152.f_4[76 /*3*/].f_1 = 120f;
			Local_152.f_4[77 /*3*/] = 5;
			Local_152.f_4[77 /*3*/].f_1 = 125f;
			Local_152.f_4[78 /*3*/] = 7;
			Local_152.f_4[78 /*3*/].f_1 = 126f;
			Local_152.f_4[79 /*3*/] = 27;
			Local_152.f_4[79 /*3*/].f_1 = 126.5f;
			Local_152.f_4[80 /*3*/] = 5;
			Local_152.f_4[80 /*3*/].f_1 = 126.6f;
			Local_152.f_4[81 /*3*/] = 1;
			Local_152.f_4[81 /*3*/].f_1 = 127.5f;
			Local_152.f_4[82 /*3*/] = 1;
			Local_152.f_4[82 /*3*/].f_1 = 128.5f;
			Local_152.f_4[83 /*3*/] = 15;
			Local_152.f_4[83 /*3*/].f_1 = 129f;
			Local_152.f_4[84 /*3*/] = 4;
			Local_152.f_4[84 /*3*/].f_1 = 129.5f;
			Local_152.f_4[85 /*3*/] = 6;
			Local_152.f_4[85 /*3*/].f_1 = 130f;
			Local_152.f_4[86 /*3*/] = 4;
			Local_152.f_4[86 /*3*/].f_1 = 132f;
			Local_152.f_4[87 /*3*/] = 10;
			Local_152.f_4[87 /*3*/].f_2 = 1;
			Local_152.f_4[87 /*3*/].f_1 = 135f;
			Local_152.f_4[88 /*3*/] = 5;
			Local_152.f_4[88 /*3*/].f_2 = 1;
			Local_152.f_4[88 /*3*/].f_1 = 135.5f;
			Local_152.f_4[89 /*3*/] = 4;
			Local_152.f_4[89 /*3*/].f_1 = 136f;
			Local_152.f_4[90 /*3*/] = 5;
			Local_152.f_4[90 /*3*/].f_2 = 1;
			Local_152.f_4[90 /*3*/].f_1 = 136.5f;
			Local_152.f_4[91 /*3*/] = 5;
			Local_152.f_4[91 /*3*/].f_2 = 1;
			Local_152.f_4[91 /*3*/].f_1 = 137f;
			Local_152.f_4[92 /*3*/] = 5;
			Local_152.f_4[92 /*3*/].f_2 = 1;
			Local_152.f_4[92 /*3*/].f_1 = 137.7f;
			Local_152.f_4[93 /*3*/] = 18;
			Local_152.f_4[93 /*3*/].f_1 = 141f;
			Local_152.f_4[94 /*3*/] = 15;
			Local_152.f_4[94 /*3*/].f_1 = 142f;
			Local_152.f_4[95 /*3*/] = 1;
			Local_152.f_4[95 /*3*/].f_1 = 143f;
			Local_152.f_4[96 /*3*/] = 22;
			Local_152.f_4[96 /*3*/].f_1 = 144f;
			Local_152.f_4[97 /*3*/] = 6;
			Local_152.f_4[97 /*3*/].f_1 = 145f;
			Local_152.f_4[98 /*3*/] = 10;
			Local_152.f_4[98 /*3*/].f_2 = 1;
			Local_152.f_4[98 /*3*/].f_1 = 147f;
			Local_152.f_4[99 /*3*/] = 5;
			Local_152.f_4[99 /*3*/].f_2 = 1;
			Local_152.f_4[99 /*3*/].f_1 = 150f;
			Local_152.f_4[100 /*3*/] = 1;
			Local_152.f_4[100 /*3*/].f_1 = 143f;
			Local_152.f_4[101 /*3*/] = 15;
			Local_152.f_4[101 /*3*/].f_1 = 150f;
			Local_152.f_4[102 /*3*/] = 10;
			Local_152.f_4[102 /*3*/].f_2 = 1;
			Local_152.f_4[102 /*3*/].f_1 = 151f;
			Local_152.f_4[103 /*3*/] = 4;
			Local_152.f_4[103 /*3*/].f_1 = 153f;
			Local_152.f_4[104 /*3*/] = 21;
			Local_152.f_4[104 /*3*/].f_1 = 156f;
			Local_152.f_4[105 /*3*/] = 1;
			Local_152.f_4[105 /*3*/].f_1 = 157f;
			Local_152.f_4[106 /*3*/] = 6;
			Local_152.f_4[106 /*3*/].f_1 = 160f;
			Local_152.f_4[107 /*3*/] = 10;
			Local_152.f_4[107 /*3*/].f_2 = 1;
			Local_152.f_4[107 /*3*/].f_1 = 161f;
			Local_152.f_4[108 /*3*/] = 5;
			Local_152.f_4[108 /*3*/].f_2 = 1;
			Local_152.f_4[108 /*3*/].f_1 = 162f;
			Local_152.f_4[109 /*3*/] = 10;
			Local_152.f_4[109 /*3*/].f_2 = 1;
			Local_152.f_4[109 /*3*/].f_1 = 165f;
			Local_152.f_4[110 /*3*/] = 5;
			Local_152.f_4[110 /*3*/].f_2 = 1;
			Local_152.f_4[110 /*3*/].f_1 = 167f;
			Local_152.f_4[111 /*3*/] = 1;
			Local_152.f_4[111 /*3*/].f_1 = 170f;
			Local_152.f_4[112 /*3*/] = 15;
			Local_152.f_4[112 /*3*/].f_1 = 172f;
			Local_152.f_4[113 /*3*/] = 10;
			Local_152.f_4[113 /*3*/].f_2 = 1;
			Local_152.f_4[113 /*3*/].f_1 = 175f;
			Local_152.f_4[114 /*3*/] = 5;
			Local_152.f_4[114 /*3*/].f_2 = 1;
			Local_152.f_4[114 /*3*/].f_1 = 175.5f;
			Local_152.f_4[115 /*3*/] = 5;
			Local_152.f_4[115 /*3*/].f_2 = 1;
			Local_152.f_4[115 /*3*/].f_1 = 176f;
			Local_152.f_4[116 /*3*/] = 28;
			Local_152.f_4[116 /*3*/].f_2 = 192;
			Local_152.f_4[116 /*3*/].f_1 = 180f;
			Local_152.f_4[117 /*3*/] = 1;
			Local_152.f_4[117 /*3*/].f_1 = 183f;
			Local_152.f_4[118 /*3*/] = 10;
			Local_152.f_4[118 /*3*/].f_2 = 1;
			Local_152.f_4[118 /*3*/].f_1 = 185f;
			Local_152.f_4[119 /*3*/] = 4;
			Local_152.f_4[119 /*3*/].f_1 = 185.5f;
			Local_152.f_4[120 /*3*/] = 5;
			Local_152.f_4[120 /*3*/].f_2 = 1;
			Local_152.f_4[120 /*3*/].f_1 = 186f;
			Local_152.f_4[121 /*3*/] = 5;
			Local_152.f_4[121 /*3*/].f_2 = 1;
			Local_152.f_4[121 /*3*/].f_1 = 186.5f;
			Local_152.f_4[122 /*3*/] = 5;
			Local_152.f_4[122 /*3*/].f_2 = 1;
			Local_152.f_4[122 /*3*/].f_1 = 187f;
			Local_152.f_4[123 /*3*/] = 15;
			Local_152.f_4[123 /*3*/].f_1 = 187.2f;
			Local_152.f_4[124 /*3*/] = 19;
			Local_152.f_4[124 /*3*/].f_1 = 190f;
			Local_152.f_4[125 /*3*/] = 15;
			Local_152.f_4[125 /*3*/].f_1 = 192f;
			Local_152.f_4[126 /*3*/] = 4;
			Local_152.f_4[126 /*3*/].f_1 = 193f;
			Local_152.f_4[127 /*3*/] = 5;
			Local_152.f_4[127 /*3*/].f_2 = 1;
			Local_152.f_4[127 /*3*/].f_1 = 194f;
			Local_152.f_4[128 /*3*/] = 4;
			Local_152.f_4[128 /*3*/].f_1 = 195f;
			Local_152.f_4[129 /*3*/] = 5;
			Local_152.f_4[129 /*3*/].f_2 = 1;
			Local_152.f_4[129 /*3*/].f_1 = 196f;
			Local_152.f_4[130 /*3*/] = 5;
			Local_152.f_4[130 /*3*/].f_2 = 1;
			Local_152.f_4[130 /*3*/].f_1 = 197f;
			Local_152.f_4[131 /*3*/] = 10;
			Local_152.f_4[131 /*3*/].f_2 = 1;
			Local_152.f_4[131 /*3*/].f_1 = 197.2f;
			Local_152.f_4[132 /*3*/] = 20;
			Local_152.f_4[132 /*3*/].f_1 = 200f;
			Local_152.f_4[133 /*3*/] = 4;
			Local_152.f_4[133 /*3*/].f_1 = 202f;
			Local_152.f_4[134 /*3*/] = 31;
			Local_152.f_4[134 /*3*/].f_1 = 204f;
			Local_152.f_4[135 /*3*/] = 15;
			Local_152.f_4[135 /*3*/].f_1 = 206.5f;
			Local_152.f_4[136 /*3*/] = 5;
			Local_152.f_4[136 /*3*/].f_1 = 207f;
			Local_152.f_4[137 /*3*/] = 4;
			Local_152.f_4[137 /*3*/].f_1 = 208f;
			Local_152.f_4[138 /*3*/] = 28;
			Local_152.f_4[138 /*3*/].f_2 = 192;
			Local_152.f_4[138 /*3*/].f_1 = 208.1f;
			Local_152.f_4[139 /*3*/] = 4;
			Local_152.f_4[139 /*3*/].f_1 = 209f;
			Local_152.f_4[140 /*3*/] = 10;
			Local_152.f_4[140 /*3*/].f_2 = 1;
			Local_152.f_4[140 /*3*/].f_1 = 210f;
			Local_152.f_4[141 /*3*/] = 5;
			Local_152.f_4[141 /*3*/].f_1 = 211f;
			Local_152.f_4[142 /*3*/] = 5;
			Local_152.f_4[142 /*3*/].f_1 = 211.5f;
			Local_152.f_4[143 /*3*/] = 5;
			Local_152.f_4[143 /*3*/].f_1 = 212f;
			Local_152.f_4[144 /*3*/] = 5;
			Local_152.f_4[144 /*3*/].f_2 = 1;
			Local_152.f_4[144 /*3*/].f_1 = 213f;
			Local_152.f_4[145 /*3*/] = 22;
			Local_152.f_4[145 /*3*/].f_1 = 213.5f;
			Local_152.f_4[146 /*3*/] = 5;
			Local_152.f_4[146 /*3*/].f_1 = 214f;
			Local_152.f_4[147 /*3*/] = 10;
			Local_152.f_4[147 /*3*/].f_2 = 1;
			Local_152.f_4[147 /*3*/].f_1 = 215f;
			Local_152.f_4[148 /*3*/] = 4;
			Local_152.f_4[148 /*3*/].f_1 = 217f;
			Local_152.f_4[149 /*3*/] = 4;
			Local_152.f_4[149 /*3*/].f_1 = 218f;
			Local_152.f_4[150 /*3*/] = 1;
			Local_152.f_4[150 /*3*/].f_1 = 220f;
			Local_152.f_4[151 /*3*/] = 15;
			Local_152.f_4[151 /*3*/].f_1 = 222f;
			Local_152.f_4[152 /*3*/] = 5;
			Local_152.f_4[152 /*3*/].f_2 = 1;
			Local_152.f_4[152 /*3*/].f_1 = 223f;
			Local_152.f_4[153 /*3*/] = 10;
			Local_152.f_4[153 /*3*/].f_2 = 1;
			Local_152.f_4[153 /*3*/].f_1 = 224f;
			Local_152.f_4[154 /*3*/] = 5;
			Local_152.f_4[154 /*3*/].f_2 = 1;
			Local_152.f_4[154 /*3*/].f_1 = 225f;
			Local_152.f_4[155 /*3*/] = 5;
			Local_152.f_4[155 /*3*/].f_2 = 1;
			Local_152.f_4[155 /*3*/].f_1 = 226f;
			Local_152.f_4[156 /*3*/] = 5;
			Local_152.f_4[156 /*3*/].f_2 = 1;
			Local_152.f_4[156 /*3*/].f_1 = 227f;
			Local_152.f_4[157 /*3*/] = 15;
			Local_152.f_4[157 /*3*/].f_1 = 228f;
			Local_152.f_4[158 /*3*/] = 28;
			Local_152.f_4[158 /*3*/].f_2 = 192;
			Local_152.f_4[158 /*3*/].f_1 = 229f;
			Local_152.f_4[159 /*3*/] = 15;
			Local_152.f_4[159 /*3*/].f_1 = 232f;
			Local_152.f_4[160 /*3*/] = 5;
			Local_152.f_4[160 /*3*/].f_2 = 1;
			Local_152.f_4[160 /*3*/].f_1 = 233f;
			Local_152.f_4[161 /*3*/] = 4;
			Local_152.f_4[161 /*3*/].f_1 = 234f;
			Local_152.f_4[162 /*3*/] = 4;
			Local_152.f_4[162 /*3*/].f_1 = 235f;
			Local_152.f_4[163 /*3*/] = 1;
			Local_152.f_4[163 /*3*/].f_1 = 235.1f;
			Local_152.f_4[164 /*3*/] = 10;
			Local_152.f_4[164 /*3*/].f_2 = 1;
			Local_152.f_4[164 /*3*/].f_1 = 235.2f;
			Local_152.f_4[165 /*3*/] = 4;
			Local_152.f_4[165 /*3*/].f_1 = 236.1f;
			Local_152.f_4[166 /*3*/] = 22;
			Local_152.f_4[166 /*3*/].f_1 = 237.8f;
			Local_152.f_4[167 /*3*/] = 7;
			Local_152.f_4[167 /*3*/].f_1 = 239.3f;
			break;
		
		case 3:
			Local_152.f_4[0 /*3*/] = 5;
			Local_152.f_4[0 /*3*/].f_1 = 1f;
			Local_152.f_4[1 /*3*/] = 11;
			Local_152.f_4[1 /*3*/].f_1 = 6f;
			Local_152.f_4[2 /*3*/] = 4;
			Local_152.f_4[2 /*3*/].f_1 = 7f;
			Local_152.f_4[3 /*3*/] = 7;
			Local_152.f_4[3 /*3*/].f_1 = 9f;
			Local_152.f_4[4 /*3*/] = 5;
			Local_152.f_4[4 /*3*/].f_1 = 10f;
			Local_152.f_4[5 /*3*/] = 11;
			Local_152.f_4[5 /*3*/].f_1 = 12f;
			Local_152.f_4[6 /*3*/] = 5;
			Local_152.f_4[6 /*3*/].f_1 = 13f;
			Local_152.f_4[7 /*3*/] = 7;
			Local_152.f_4[7 /*3*/].f_1 = 14.5f;
			Local_152.f_4[8 /*3*/] = 11;
			Local_152.f_4[8 /*3*/].f_1 = 15f;
			Local_152.f_4[9 /*3*/] = 5;
			Local_152.f_4[9 /*3*/].f_1 = 16f;
			Local_152.f_4[10 /*3*/] = 3;
			Local_152.f_4[10 /*3*/].f_1 = 19f;
			Local_152.f_4[11 /*3*/] = 7;
			Local_152.f_4[11 /*3*/].f_1 = 21f;
			Local_152.f_4[12 /*3*/] = 6;
			Local_152.f_4[12 /*3*/].f_1 = 22f;
			Local_152.f_4[13 /*3*/] = 11;
			Local_152.f_4[13 /*3*/].f_1 = 23f;
			Local_152.f_4[14 /*3*/] = 5;
			Local_152.f_4[14 /*3*/].f_1 = 24f;
			Local_152.f_4[15 /*3*/] = 11;
			Local_152.f_4[15 /*3*/].f_1 = 25f;
			Local_152.f_4[16 /*3*/] = 5;
			Local_152.f_4[16 /*3*/].f_1 = 26f;
			Local_152.f_4[17 /*3*/] = 11;
			Local_152.f_4[17 /*3*/].f_1 = 27f;
			Local_152.f_4[18 /*3*/] = 5;
			Local_152.f_4[18 /*3*/].f_1 = 28f;
			Local_152.f_4[19 /*3*/] = 29;
			Local_152.f_4[19 /*3*/].f_1 = 31f;
			Local_152.f_4[20 /*3*/] = 4;
			Local_152.f_4[20 /*3*/].f_1 = 32f;
			Local_152.f_4[21 /*3*/] = 3;
			Local_152.f_4[21 /*3*/].f_1 = 33f;
			Local_152.f_4[22 /*3*/] = 7;
			Local_152.f_4[22 /*3*/].f_1 = 35f;
			Local_152.f_4[23 /*3*/] = 5;
			Local_152.f_4[23 /*3*/].f_1 = 36f;
			Local_152.f_4[24 /*3*/] = 5;
			Local_152.f_4[24 /*3*/].f_1 = 37f;
			Local_152.f_4[25 /*3*/] = 23;
			Local_152.f_4[25 /*3*/].f_1 = 37.5f;
			Local_152.f_4[26 /*3*/] = 7;
			Local_152.f_4[26 /*3*/].f_1 = 38f;
			Local_152.f_4[27 /*3*/] = 16;
			Local_152.f_4[27 /*3*/].f_1 = 40f;
			Local_152.f_4[28 /*3*/] = 5;
			Local_152.f_4[28 /*3*/].f_1 = 41f;
			Local_152.f_4[29 /*3*/] = 5;
			Local_152.f_4[29 /*3*/].f_1 = 42f;
			Local_152.f_4[30 /*3*/] = 11;
			Local_152.f_4[30 /*3*/].f_1 = 45f;
			Local_152.f_4[31 /*3*/] = 3;
			Local_152.f_4[31 /*3*/].f_1 = 46.5f;
			Local_152.f_4[32 /*3*/] = 7;
			Local_152.f_4[32 /*3*/].f_1 = 47.2f;
			Local_152.f_4[33 /*3*/] = 7;
			Local_152.f_4[33 /*3*/].f_1 = 48.5f;
			Local_152.f_4[34 /*3*/] = 22;
			Local_152.f_4[34 /*3*/].f_1 = 49.5f;
			Local_152.f_4[35 /*3*/] = 11;
			Local_152.f_4[35 /*3*/].f_1 = 50f;
			Local_152.f_4[36 /*3*/] = 5;
			Local_152.f_4[36 /*3*/].f_1 = 51f;
			Local_152.f_4[37 /*3*/] = 7;
			Local_152.f_4[37 /*3*/].f_1 = 52.2f;
			Local_152.f_4[38 /*3*/] = 4;
			Local_152.f_4[38 /*3*/].f_1 = 53f;
			Local_152.f_4[39 /*3*/] = 6;
			Local_152.f_4[39 /*3*/].f_1 = 54f;
			Local_152.f_4[40 /*3*/] = 5;
			Local_152.f_4[40 /*3*/].f_1 = 55f;
			Local_152.f_4[41 /*3*/] = 4;
			Local_152.f_4[41 /*3*/].f_1 = 56f;
			Local_152.f_4[42 /*3*/] = 11;
			Local_152.f_4[42 /*3*/].f_1 = 57f;
			Local_152.f_4[43 /*3*/] = 16;
			Local_152.f_4[43 /*3*/].f_1 = 58f;
			Local_152.f_4[44 /*3*/] = 5;
			Local_152.f_4[44 /*3*/].f_1 = 60f;
			Local_152.f_4[45 /*3*/] = 5;
			Local_152.f_4[45 /*3*/].f_1 = 61f;
			Local_152.f_4[46 /*3*/] = 5;
			Local_152.f_4[46 /*3*/].f_1 = 63f;
			Local_152.f_4[47 /*3*/] = 25;
			Local_152.f_4[47 /*3*/].f_1 = 63.7f;
			Local_152.f_4[48 /*3*/] = 11;
			Local_152.f_4[48 /*3*/].f_1 = 64f;
			Local_152.f_4[49 /*3*/] = 5;
			Local_152.f_4[49 /*3*/].f_1 = 65f;
			Local_152.f_4[50 /*3*/] = 11;
			Local_152.f_4[50 /*3*/].f_1 = 66f;
			Local_152.f_4[51 /*3*/] = 5;
			Local_152.f_4[51 /*3*/].f_1 = 67f;
			Local_152.f_4[52 /*3*/] = 5;
			Local_152.f_4[52 /*3*/].f_1 = 69f;
			Local_152.f_4[53 /*3*/] = 7;
			Local_152.f_4[53 /*3*/].f_1 = 70f;
			Local_152.f_4[54 /*3*/] = 11;
			Local_152.f_4[54 /*3*/].f_1 = 70.1f;
			Local_152.f_4[55 /*3*/] = 4;
			Local_152.f_4[55 /*3*/].f_1 = 72f;
			Local_152.f_4[56 /*3*/] = 29;
			Local_152.f_4[56 /*3*/].f_1 = 74.5f;
			Local_152.f_4[57 /*3*/] = 23;
			Local_152.f_4[57 /*3*/].f_1 = 75f;
			Local_152.f_4[58 /*3*/] = 5;
			Local_152.f_4[58 /*3*/].f_1 = 75.5f;
			Local_152.f_4[59 /*3*/] = 7;
			Local_152.f_4[59 /*3*/].f_1 = 76f;
			Local_152.f_4[60 /*3*/] = 5;
			Local_152.f_4[60 /*3*/].f_1 = 76.5f;
			Local_152.f_4[61 /*3*/] = 4;
			Local_152.f_4[61 /*3*/].f_1 = 78.5f;
			Local_152.f_4[62 /*3*/] = 28;
			Local_152.f_4[62 /*3*/].f_2 = 451;
			Local_152.f_4[62 /*3*/].f_1 = 79f;
			Local_152.f_4[63 /*3*/] = 16;
			Local_152.f_4[63 /*3*/].f_1 = 80f;
			Local_152.f_4[64 /*3*/] = 4;
			Local_152.f_4[64 /*3*/].f_1 = 80.5f;
			Local_152.f_4[65 /*3*/] = 11;
			Local_152.f_4[65 /*3*/].f_1 = 81f;
			Local_152.f_4[66 /*3*/] = 6;
			Local_152.f_4[66 /*3*/].f_1 = 82f;
			Local_152.f_4[67 /*3*/] = 5;
			Local_152.f_4[67 /*3*/].f_1 = 83f;
			Local_152.f_4[68 /*3*/] = 11;
			Local_152.f_4[68 /*3*/].f_1 = 83.5f;
			Local_152.f_4[69 /*3*/] = 11;
			Local_152.f_4[69 /*3*/].f_1 = 85f;
			Local_152.f_4[70 /*3*/] = 5;
			Local_152.f_4[70 /*3*/].f_1 = 86f;
			Local_152.f_4[71 /*3*/] = 29;
			Local_152.f_4[71 /*3*/].f_1 = 89.3f;
			Local_152.f_4[72 /*3*/] = 20;
			Local_152.f_4[72 /*3*/].f_1 = 89.8f;
			Local_152.f_4[73 /*3*/] = 3;
			Local_152.f_4[73 /*3*/].f_1 = 90.5f;
			Local_152.f_4[74 /*3*/] = 3;
			Local_152.f_4[74 /*3*/].f_1 = 92f;
			Local_152.f_4[75 /*3*/] = 16;
			Local_152.f_4[75 /*3*/].f_1 = 92.1f;
			Local_152.f_4[76 /*3*/] = 5;
			Local_152.f_4[76 /*3*/].f_1 = 93f;
			Local_152.f_4[77 /*3*/] = 5;
			Local_152.f_4[77 /*3*/].f_1 = 93.6f;
			Local_152.f_4[78 /*3*/] = 11;
			Local_152.f_4[78 /*3*/].f_1 = 93.7f;
			Local_152.f_4[79 /*3*/] = 5;
			Local_152.f_4[79 /*3*/].f_1 = 94.5f;
			Local_152.f_4[80 /*3*/] = 7;
			Local_152.f_4[80 /*3*/].f_1 = 95f;
			Local_152.f_4[81 /*3*/] = 5;
			Local_152.f_4[81 /*3*/].f_1 = 96f;
			Local_152.f_4[82 /*3*/] = 11;
			Local_152.f_4[82 /*3*/].f_1 = 98f;
			Local_152.f_4[83 /*3*/] = 4;
			Local_152.f_4[83 /*3*/].f_1 = 99f;
			Local_152.f_4[84 /*3*/] = 4;
			Local_152.f_4[84 /*3*/].f_1 = 100f;
			Local_152.f_4[85 /*3*/] = 22;
			Local_152.f_4[85 /*3*/].f_1 = 102f;
			Local_152.f_4[86 /*3*/] = 7;
			Local_152.f_4[86 /*3*/].f_1 = 104f;
			Local_152.f_4[87 /*3*/] = 11;
			Local_152.f_4[87 /*3*/].f_1 = 106f;
			Local_152.f_4[88 /*3*/] = 3;
			Local_152.f_4[88 /*3*/].f_1 = 110f;
			Local_152.f_4[89 /*3*/] = 3;
			Local_152.f_4[89 /*3*/].f_1 = 112f;
			Local_152.f_4[90 /*3*/] = 24;
			Local_152.f_4[90 /*3*/].f_1 = 114f;
			Local_152.f_4[91 /*3*/] = 16;
			Local_152.f_4[91 /*3*/].f_1 = 115f;
			Local_152.f_4[92 /*3*/] = 4;
			Local_152.f_4[92 /*3*/].f_1 = 116f;
			Local_152.f_4[93 /*3*/] = 6;
			Local_152.f_4[93 /*3*/].f_1 = 119f;
			Local_152.f_4[94 /*3*/] = 4;
			Local_152.f_4[94 /*3*/].f_1 = 122f;
			Local_152.f_4[95 /*3*/] = 7;
			Local_152.f_4[95 /*3*/].f_1 = 124f;
			Local_152.f_4[96 /*3*/] = 6;
			Local_152.f_4[96 /*3*/].f_1 = 126f;
			Local_152.f_4[97 /*3*/] = 5;
			Local_152.f_4[97 /*3*/].f_1 = 129f;
			Local_152.f_4[98 /*3*/] = 5;
			Local_152.f_4[98 /*3*/].f_1 = 130f;
			Local_152.f_4[99 /*3*/] = 11;
			Local_152.f_4[99 /*3*/].f_1 = 132f;
			Local_152.f_4[100 /*3*/] = 4;
			Local_152.f_4[100 /*3*/].f_1 = 133f;
			Local_152.f_4[101 /*3*/] = 4;
			Local_152.f_4[101 /*3*/].f_1 = 134f;
			Local_152.f_4[102 /*3*/] = 21;
			Local_152.f_4[102 /*3*/].f_1 = 136f;
			Local_152.f_4[103 /*3*/] = 29;
			Local_152.f_4[103 /*3*/].f_1 = 138f;
			Local_152.f_4[104 /*3*/] = 11;
			Local_152.f_4[104 /*3*/].f_1 = 140f;
			Local_152.f_4[105 /*3*/] = 5;
			Local_152.f_4[105 /*3*/].f_1 = 141f;
			Local_152.f_4[106 /*3*/] = 5;
			Local_152.f_4[106 /*3*/].f_1 = 142f;
			Local_152.f_4[107 /*3*/] = 5;
			Local_152.f_4[107 /*3*/].f_1 = 143f;
			Local_152.f_4[108 /*3*/] = 16;
			Local_152.f_4[108 /*3*/].f_1 = 147f;
			Local_152.f_4[109 /*3*/] = 4;
			Local_152.f_4[109 /*3*/].f_1 = 148f;
			Local_152.f_4[110 /*3*/] = 3;
			Local_152.f_4[110 /*3*/].f_1 = 150f;
			Local_152.f_4[111 /*3*/] = 4;
			Local_152.f_4[111 /*3*/].f_1 = 152f;
			Local_152.f_4[112 /*3*/] = 24;
			Local_152.f_4[112 /*3*/].f_1 = 154f;
			Local_152.f_4[113 /*3*/] = 6;
			Local_152.f_4[113 /*3*/].f_1 = 155f;
			Local_152.f_4[114 /*3*/] = 11;
			Local_152.f_4[114 /*3*/].f_1 = 156f;
			Local_152.f_4[115 /*3*/] = 5;
			Local_152.f_4[115 /*3*/].f_1 = 157f;
			Local_152.f_4[116 /*3*/] = 4;
			Local_152.f_4[116 /*3*/].f_1 = 160f;
			Local_152.f_4[117 /*3*/] = 6;
			Local_152.f_4[117 /*3*/].f_1 = 163f;
			Local_152.f_4[118 /*3*/] = 5;
			Local_152.f_4[118 /*3*/].f_1 = 165f;
			Local_152.f_4[119 /*3*/] = 11;
			Local_152.f_4[119 /*3*/].f_1 = 167f;
			Local_152.f_4[120 /*3*/] = 5;
			Local_152.f_4[120 /*3*/].f_1 = 170f;
			Local_152.f_4[121 /*3*/] = 5;
			Local_152.f_4[121 /*3*/].f_1 = 171f;
			Local_152.f_4[122 /*3*/] = 16;
			Local_152.f_4[122 /*3*/].f_1 = 172f;
			Local_152.f_4[123 /*3*/] = 4;
			Local_152.f_4[123 /*3*/].f_1 = 173f;
			Local_152.f_4[124 /*3*/] = 7;
			Local_152.f_4[124 /*3*/].f_1 = 176f;
			Local_152.f_4[125 /*3*/] = 29;
			Local_152.f_4[125 /*3*/].f_1 = 182f;
			Local_152.f_4[126 /*3*/] = 5;
			Local_152.f_4[126 /*3*/].f_1 = 184f;
			Local_152.f_4[127 /*3*/] = 5;
			Local_152.f_4[127 /*3*/].f_1 = 185f;
			Local_152.f_4[128 /*3*/] = 11;
			Local_152.f_4[128 /*3*/].f_1 = 186f;
			Local_152.f_4[129 /*3*/] = 4;
			Local_152.f_4[129 /*3*/].f_1 = 187f;
			Local_152.f_4[130 /*3*/] = 4;
			Local_152.f_4[130 /*3*/].f_1 = 188f;
			Local_152.f_4[131 /*3*/] = 20;
			Local_152.f_4[131 /*3*/].f_1 = 190f;
			Local_152.f_4[132 /*3*/] = 5;
			Local_152.f_4[132 /*3*/].f_1 = 192f;
			Local_152.f_4[133 /*3*/] = 11;
			Local_152.f_4[133 /*3*/].f_1 = 193f;
			Local_152.f_4[134 /*3*/] = 30;
			Local_152.f_4[134 /*3*/].f_1 = 196f;
			Local_152.f_4[135 /*3*/] = 11;
			Local_152.f_4[135 /*3*/].f_1 = 198f;
			Local_152.f_4[136 /*3*/] = 3;
			Local_152.f_4[136 /*3*/].f_1 = 201f;
			Local_152.f_4[137 /*3*/] = 5;
			Local_152.f_4[137 /*3*/].f_1 = 202f;
			Local_152.f_4[138 /*3*/] = 3;
			Local_152.f_4[138 /*3*/].f_1 = 203f;
			Local_152.f_4[139 /*3*/] = 3;
			Local_152.f_4[139 /*3*/].f_1 = 205f;
			Local_152.f_4[140 /*3*/] = 6;
			Local_152.f_4[140 /*3*/].f_1 = 207f;
			Local_152.f_4[141 /*3*/] = 22;
			Local_152.f_4[141 /*3*/].f_1 = 209f;
			Local_152.f_4[142 /*3*/] = 7;
			Local_152.f_4[142 /*3*/].f_1 = 210f;
			Local_152.f_4[143 /*3*/] = 4;
			Local_152.f_4[143 /*3*/].f_1 = 211f;
			Local_152.f_4[144 /*3*/] = 4;
			Local_152.f_4[144 /*3*/].f_1 = 212f;
			Local_152.f_4[145 /*3*/] = 7;
			Local_152.f_4[145 /*3*/].f_1 = 213f;
			Local_152.f_4[146 /*3*/] = 16;
			Local_152.f_4[146 /*3*/].f_1 = 214f;
			Local_152.f_4[147 /*3*/] = 3;
			Local_152.f_4[147 /*3*/].f_1 = 215f;
			Local_152.f_4[148 /*3*/] = 5;
			Local_152.f_4[148 /*3*/].f_1 = 216f;
			Local_152.f_4[149 /*3*/] = 5;
			Local_152.f_4[149 /*3*/].f_1 = 217f;
			Local_152.f_4[150 /*3*/] = 5;
			Local_152.f_4[150 /*3*/].f_1 = 218f;
			Local_152.f_4[151 /*3*/] = 3;
			Local_152.f_4[151 /*3*/].f_1 = 219.5f;
			Local_152.f_4[152 /*3*/] = 11;
			Local_152.f_4[152 /*3*/].f_1 = 220f;
			Local_152.f_4[153 /*3*/] = 11;
			Local_152.f_4[153 /*3*/].f_1 = 223f;
			Local_152.f_4[154 /*3*/] = 5;
			Local_152.f_4[154 /*3*/].f_1 = 224f;
			Local_152.f_4[155 /*3*/] = 29;
			Local_152.f_4[155 /*3*/].f_1 = 226f;
			Local_152.f_4[156 /*3*/] = 4;
			Local_152.f_4[156 /*3*/].f_1 = 228f;
			Local_152.f_4[157 /*3*/] = 3;
			Local_152.f_4[157 /*3*/].f_1 = 230f;
			Local_152.f_4[158 /*3*/] = 7;
			Local_152.f_4[158 /*3*/].f_1 = 230.5f;
			Local_152.f_4[159 /*3*/] = 16;
			Local_152.f_4[159 /*3*/].f_1 = 233f;
			Local_152.f_4[160 /*3*/] = 5;
			Local_152.f_4[160 /*3*/].f_1 = 234f;
			Local_152.f_4[161 /*3*/] = 5;
			Local_152.f_4[161 /*3*/].f_1 = 235f;
			Local_152.f_4[162 /*3*/] = 7;
			Local_152.f_4[162 /*3*/].f_1 = 236f;
			Local_152.f_4[163 /*3*/] = 24;
			Local_152.f_4[163 /*3*/].f_1 = 238f;
			Local_152.f_4[164 /*3*/] = 3;
			Local_152.f_4[164 /*3*/].f_1 = 242f;
			Local_152.f_4[165 /*3*/] = 5;
			Local_152.f_4[165 /*3*/].f_1 = 243f;
			Local_152.f_4[166 /*3*/] = 5;
			Local_152.f_4[166 /*3*/].f_1 = 244f;
			Local_152.f_4[167 /*3*/] = 11;
			Local_152.f_4[167 /*3*/].f_1 = 248f;
			Local_152.f_4[168 /*3*/] = 3;
			Local_152.f_4[168 /*3*/].f_1 = 251f;
			Local_152.f_4[169 /*3*/] = 5;
			Local_152.f_4[169 /*3*/].f_1 = 252f;
			Local_152.f_4[170 /*3*/] = 3;
			Local_152.f_4[170 /*3*/].f_1 = 253f;
			Local_152.f_4[171 /*3*/] = 7;
			Local_152.f_4[171 /*3*/].f_1 = 254f;
			Local_152.f_4[172 /*3*/] = 16;
			Local_152.f_4[172 /*3*/].f_1 = 255f;
			Local_152.f_4[173 /*3*/] = 29;
			Local_152.f_4[173 /*3*/].f_1 = 256f;
			Local_152.f_4[174 /*3*/] = 20;
			Local_152.f_4[174 /*3*/].f_1 = 259f;
			Local_152.f_4[175 /*3*/] = 11;
			Local_152.f_4[175 /*3*/].f_1 = 261f;
			Local_152.f_4[176 /*3*/] = 5;
			Local_152.f_4[176 /*3*/].f_1 = 263f;
			Local_152.f_4[177 /*3*/] = 7;
			Local_152.f_4[177 /*3*/].f_1 = 264f;
			Local_152.f_4[178 /*3*/] = 4;
			Local_152.f_4[178 /*3*/].f_1 = 265f;
			Local_152.f_4[179 /*3*/] = 6;
			Local_152.f_4[179 /*3*/].f_1 = 267f;
			Local_152.f_4[180 /*3*/] = 7;
			Local_152.f_4[180 /*3*/].f_1 = 269f;
			Local_152.f_4[181 /*3*/] = 5;
			Local_152.f_4[181 /*3*/].f_1 = 270f;
			Local_152.f_4[182 /*3*/] = 23;
			Local_152.f_4[182 /*3*/].f_1 = 272f;
			Local_152.f_4[183 /*3*/] = 11;
			Local_152.f_4[183 /*3*/].f_1 = 274f;
			Local_152.f_4[184 /*3*/] = 5;
			Local_152.f_4[184 /*3*/].f_1 = 275f;
			Local_152.f_4[185 /*3*/] = 7;
			Local_152.f_4[185 /*3*/].f_1 = 277f;
			Local_152.f_4[186 /*3*/] = 5;
			Local_152.f_4[186 /*3*/].f_1 = 280f;
			Local_152.f_4[187 /*3*/] = 4;
			Local_152.f_4[187 /*3*/].f_1 = 283f;
			Local_152.f_4[188 /*3*/] = 5;
			Local_152.f_4[188 /*3*/].f_1 = 286f;
			Local_152.f_4[189 /*3*/] = 29;
			Local_152.f_4[189 /*3*/].f_1 = 288f;
			Local_152.f_4[190 /*3*/] = 5;
			Local_152.f_4[190 /*3*/].f_1 = 289f;
			Local_152.f_4[191 /*3*/] = 16;
			Local_152.f_4[191 /*3*/].f_1 = 292f;
			Local_152.f_4[192 /*3*/] = 5;
			Local_152.f_4[192 /*3*/].f_1 = 294f;
			Local_152.f_4[193 /*3*/] = 7;
			Local_152.f_4[193 /*3*/].f_1 = 296f;
			Local_152.f_4[194 /*3*/] = 5;
			Local_152.f_4[194 /*3*/].f_1 = 299f;
			Local_152.f_4[195 /*3*/] = 18;
			Local_152.f_4[195 /*3*/].f_1 = 302f;
			Local_152.f_4[196 /*3*/] = 6;
			Local_152.f_4[196 /*3*/].f_1 = 303f;
			Local_152.f_4[197 /*3*/] = 5;
			Local_152.f_4[197 /*3*/].f_1 = 305f;
			Local_152.f_4[198 /*3*/] = 16;
			Local_152.f_4[198 /*3*/].f_1 = 306f;
			Local_152.f_4[199 /*3*/] = 24;
			Local_152.f_4[199 /*3*/].f_1 = 307f;
			Local_152.f_4[200 /*3*/] = 5;
			Local_152.f_4[200 /*3*/].f_2 = 1;
			Local_152.f_4[200 /*3*/].f_1 = 308f;
			Local_152.f_4[201 /*3*/] = 11;
			Local_152.f_4[201 /*3*/].f_1 = 309f;
			Local_152.f_4[202 /*3*/] = 4;
			Local_152.f_4[202 /*3*/].f_1 = 310f;
			Local_152.f_4[203 /*3*/] = 6;
			Local_152.f_4[203 /*3*/].f_1 = 314f;
			Local_152.f_4[204 /*3*/] = 7;
			Local_152.f_4[204 /*3*/].f_1 = 314.7f;
			Local_152.f_4[205 /*3*/] = 4;
			Local_152.f_4[205 /*3*/].f_1 = 315.5f;
			Local_152.f_4[206 /*3*/] = 16;
			Local_152.f_4[206 /*3*/].f_1 = 316f;
			Local_152.f_4[207 /*3*/] = 4;
			Local_152.f_4[207 /*3*/].f_1 = 317f;
			Local_152.f_4[208 /*3*/] = 3;
			Local_152.f_4[208 /*3*/].f_1 = 320f;
			Local_152.f_4[209 /*3*/] = 4;
			Local_152.f_4[209 /*3*/].f_1 = 321f;
			Local_152.f_4[210 /*3*/] = 11;
			Local_152.f_4[210 /*3*/].f_1 = 322f;
			Local_152.f_4[211 /*3*/] = 5;
			Local_152.f_4[211 /*3*/].f_2 = 1;
			Local_152.f_4[211 /*3*/].f_1 = 322.5f;
			Local_152.f_4[212 /*3*/] = 11;
			Local_152.f_4[212 /*3*/].f_1 = 324f;
			Local_152.f_4[213 /*3*/] = 11;
			Local_152.f_4[213 /*3*/].f_1 = 325f;
			Local_152.f_4[214 /*3*/] = 27;
			Local_152.f_4[214 /*3*/].f_1 = 328.5f;
			Local_152.f_4[215 /*3*/] = 3;
			Local_152.f_4[215 /*3*/].f_1 = 329.5f;
			Local_152.f_4[216 /*3*/] = 4;
			Local_152.f_4[216 /*3*/].f_1 = 330f;
			Local_152.f_4[217 /*3*/] = 4;
			Local_152.f_4[217 /*3*/].f_1 = 331f;
			Local_152.f_4[218 /*3*/] = 4;
			Local_152.f_4[218 /*3*/].f_1 = 332f;
			Local_152.f_4[219 /*3*/] = 6;
			Local_152.f_4[219 /*3*/].f_1 = 333f;
			Local_152.f_4[220 /*3*/] = 16;
			Local_152.f_4[220 /*3*/].f_1 = 334f;
			Local_152.f_4[221 /*3*/] = 4;
			Local_152.f_4[221 /*3*/].f_1 = 335f;
			Local_152.f_4[222 /*3*/] = 3;
			Local_152.f_4[222 /*3*/].f_1 = 336f;
			Local_152.f_4[223 /*3*/] = 11;
			Local_152.f_4[223 /*3*/].f_1 = 337f;
			Local_152.f_4[224 /*3*/] = 4;
			Local_152.f_4[224 /*3*/].f_1 = 338f;
			break;
		
		case 4:
			Local_152.f_4[0 /*3*/] = 34;
			Local_152.f_4[0 /*3*/].f_1 = 0f;
			break;
	}
}

void func_110(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_111()
{
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 7))
	{
		Local_151.f_16 = 1;
		Local_151.f_17 = Local_152.f_2712.f_2;
		Local_151.f_18 = Local_152.f_2712.f_6;
		Local_151.f_20 = func_45();
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 7);
		Local_151.f_21 = func_41();
		func_40();
	}
	unk_0x0AF8D3A06BB92903("dlc_vw_am_ip_in_gameplay_scene");
	unk_0x66B27A59829491D3("dlc_vw_am_ip_in_menus_scene");
	if (func_115())
	{
		func_114();
		func_12(func_13(4));
		func_112();
		func_8(10);
	}
	else
	{
		func_9();
		func_58();
		func_52();
		func_51("Frontend_Retry");
		func_8(4);
	}
}

void func_112()
{
	struct<3> Var0;
	int iVar1;
	
	Var0 = 11;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Var0[iVar1 /*3*/] = Local_152.f_2912[iVar1 /*3*/];
		Var0[iVar1 /*3*/].f_2 = 0;
		Var0[iVar1 /*3*/].f_1 = Local_152.f_2912[iVar1 /*3*/].f_1;
		iVar1++;
	}
	if (!Local_152.f_2907)
	{
		Var0[10 /*3*/].f_2 = 1;
		Var0[10 /*3*/].f_1 = func_45();
		Var0[10 /*3*/] = 0;
	}
	func_113(&Var0, 0, 10);
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Local_152.f_2912[iVar1 /*3*/] = Var0[iVar1 /*3*/];
		Local_152.f_2912[iVar1 /*3*/].f_2 = Var0[iVar1 /*3*/].f_2;
		Local_152.f_2912[iVar1 /*3*/].f_1 = Var0[iVar1 /*3*/].f_1;
		func_73(func_75(unk_0x9E2D6C50374FCFA9()), 1, iVar1, Local_152.f_2912[iVar1 /*3*/], Local_152.f_2912[iVar1 /*3*/].f_1, 0);
		iVar1++;
	}
}

void func_113(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar2 = (iParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((iParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (iParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.x = (*iParam0)[iVar0 /*3*/];
			Var3.f_2 = (iParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (iParam0[iVar0 /*3*/])->f_1;
			(*iParam0)[iVar0 /*3*/] = (*iParam0)[iVar1 /*3*/];
			(iParam0[iVar0 /*3*/])->f_2 = (iParam0[iVar1 /*3*/])->f_2;
			(iParam0[iVar0 /*3*/])->f_1 = (iParam0[iVar1 /*3*/])->f_1;
			(*iParam0)[iVar1 /*3*/] = Var3.x;
			(iParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(iParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_113(iParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_113(iParam0, iParam1, iVar1);
	}
}

void func_114()
{
	Local_152.f_2881 = unk_0x16CFD341BCF2F070("I&P_Leaderboard_loop_16x9");
	unk_0xE178310643033958(Local_152.f_2881);
}

int func_115()
{
	if (unk_0xF1AB1E47A12AA2E6() == 0)
	{
		return 0;
	}
	if (unk_0x527312C0DF85960A())
	{
		if (unk_0x1A1B1F5DC3F2D868(1, -1))
		{
			if (unk_0x17C7C36F1FCE1AC2())
			{
				return 1;
			}
		}
	}
	if (unk_0xA7384DAD7CF469DA())
	{
		if (unk_0x818F829545200020(1))
		{
			if (unk_0x17C7C36F1FCE1AC2())
			{
				return 1;
			}
		}
	}
	if (unk_0xDFC67688F9088B45() || unk_0x3EBD3AF4E5D7A08C())
	{
		if (unk_0x3EE42535A14BA719(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (unk_0x1A1B1F5DC3F2D868(0, -1))
		{
			if (unk_0x17C7C36F1FCE1AC2())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_116(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_117(uParam0, bParam2, 0);
	if (unk_0x9315DBF7D972F07A() && !bParam2)
	{
		if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x07141611FD632B59(unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x9315DBF7D972F07A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x0A89FDFA763DCAED();
			}
			else
			{
				*uParam0 = unk_0xE75390F3CA208D5E();
			}
		}
		else
		{
			*uParam0 = unk_0x320D1840B6DAA1CC();
		}
		uParam0->f_1 = 1;
	}
}

void func_118(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x0A89FDFA763DCAED();
		}
		else
		{
			*uParam0 = unk_0xE75390F3CA208D5E();
		}
	}
	else
	{
		*uParam0 = unk_0x320D1840B6DAA1CC();
	}
	uParam0->f_1 = 1;
}

bool func_119(var uParam0)
{
	return uParam0->f_1;
}

int func_120()
{
	int iVar0;
	bool bVar1;
	
	if (Local_152.f_2878 < func_132(3) + 60 + 10)
	{
		return 0;
	}
	iVar0 = 223;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 237;
	}
	bVar1 = unk_0xF01464D7AF0B7347(2, iVar0);
	if (bVar1)
	{
		Local_152.f_2725 = func_45();
	}
	if (func_45() > Local_152.f_2725)
	{
		return 0;
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 6))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 6);
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 4))
	{
		if (Local_152.f_2727 == 0)
		{
			unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 4);
			func_51("Frontend_Score_Tick_Total");
			func_14(&(Local_152.f_2729));
		}
		else
		{
			if (bVar1)
			{
				func_122((500 * Local_152.f_2727), 4, func_88(-1f, -1f));
				func_51("Frontend_Score_Tick_Large");
				Local_152.f_2727 = 0;
				Local_152.f_2725 = func_45();
				return 0;
			}
			Local_152.f_2727 = (Local_152.f_2727 - 1);
			func_121("Frontend_Score_Tick_Loop_Small", &(Local_152.f_2729));
			func_122(500, 5, func_88(-1f, -1f));
		}
		return 0;
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 5))
	{
		if (Local_152.f_2726 <= 0)
		{
			unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 5);
			func_51("Frontend_Score_Tick_Total");
			return 0;
		}
		else
		{
			if (bVar1)
			{
				func_122((10000 * Local_152.f_2726), 4, func_88(-1f, -1f));
				func_51("Frontend_Score_Tick_Large");
				Local_152.f_2726 = 0;
				Local_152.f_2725 = func_45();
				return 0;
			}
			Local_152.f_2726 = (Local_152.f_2726 - 1);
			func_51("Frontend_Score_Tick_Large");
			func_122(10000, 4, func_88(-1f, -1f));
		}
		return 0;
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 3))
	{
		if (Local_152.f_2728 == 0)
		{
			unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 3);
			func_51("Frontend_Score_Tick_Total");
			func_14(&(Local_152.f_2729));
		}
		else
		{
			if (bVar1)
			{
				func_122((round((0.164583f * 151.899f)) * Local_152.f_2728), 4, func_88(-1f, -1f));
				func_51("Frontend_Score_Tick_Large");
				Local_152.f_2728 = 0;
				Local_152.f_2725 = func_45();
				return 0;
			}
			Local_152.f_2728 = (Local_152.f_2728 - 1);
			func_121("Frontend_Score_Tick_Loop_Small", &(Local_152.f_2729));
			func_122(round((0.164583f * 151.899f)), 3, func_88(-1f, -1f));
		}
		return 0;
	}
	return 1;
}

void func_121(char* sParam0, var uParam1)
{
	if (*uParam1 == -1)
	{
		*uParam1 = unk_0xA9ADCC8D104AA552();
	}
	if (unk_0x78D9ADD511FEAD8B(*uParam1))
	{
		unk_0x91DFC8F68F6D9B05(*uParam1, sParam0, "dlc_vw_am_ip_frontend_sounds", 0);
	}
}

void func_122(int iParam0, int iParam1, struct<2> Param2)
{
	switch (iParam1)
	{
		case 0:
			Local_152.f_2712.f_3 = (Local_152.f_2712.f_3 + iParam0);
			Local_152.f_2712.f_4++;
			Local_152.f_2712.f_6++;
			func_131(iParam0, Param2);
			func_130();
			break;
		
		case 1:
			Local_152.f_2712 = (Local_152.f_2712 + iParam0);
			break;
		
		case 2:
			Local_152.f_2712.f_7 = (Local_152.f_2712.f_7 + iParam0);
			Local_152.f_2712.f_8++;
			Local_152.f_2712.f_9++;
			func_131(iParam0, Param2);
			func_123();
			break;
		
		case 3:
			Local_152.f_2712.f_10 = (Local_152.f_2712.f_10 + iParam0);
			break;
		
		case 5:
			Local_152.f_2712.f_12 = (Local_152.f_2712.f_12 + iParam0);
			break;
		
		case 4:
			Local_152.f_2712.f_11 = (Local_152.f_2712.f_11 + iParam0);
			break;
	}
}

void func_123()
{
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 2))
	{
		return;
	}
	if (Local_152.f_2712.f_9 < Global_262145.f_26908)
	{
		return;
	}
	func_127(249, 1, -1, 1);
	func_126(27185, 1, -1);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 2);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 8);
	func_125();
	func_124("IAP_CH_1", Global_262145.f_26908, 7500);
}

void func_124(char* sParam0, var uParam1, int iParam2)
{
	func_9();
	Local_152.f_2901 = (unk_0x0A89FDFA763DCAED() + iParam2);
	Local_152.f_2903 = sParam0;
	Local_152.f_2902 = uParam1;
}

void func_125()
{
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 0))
	{
		return;
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 6))
	{
		return;
	}
	if (Global_262145.f_26912 && !unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 1))
	{
		return;
	}
	if (Global_262145.f_26913 && !unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 2))
	{
		return;
	}
	if (Global_262145.f_26914 && !unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 3))
	{
		return;
	}
	if (Global_262145.f_26915 && !unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 4))
	{
		return;
	}
	if (Global_262145.f_26916 && !unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 5))
	{
		return;
	}
	func_127(253, 1, -1, 1);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 6);
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_31();
	}
	unk_0xDB8A58AEAA67CD07(iParam0, iParam1, iParam2);
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_129())
	{
		iVar0 = Global_2860375[iParam0 /*3*/][func_128(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41483427EFBC0047(iVar0, iParam1, iParam3);
		}
	}
}

int func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_129()
{
	return 1;
	return 0;
}

void func_130()
{
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 1))
	{
		return;
	}
	if (Local_152.f_2712.f_5 < Global_262145.f_26907)
	{
		return;
	}
	func_127(248, 1, -1, 1);
	func_126(27184, 1, -1);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 1);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 7);
	func_125();
	func_124("IAP_CH_0", Global_262145.f_26907, 7500);
}

void func_131(int iParam0, struct<2> Param1)
{
	Local_152.f_2812[Local_152.f_2869 /*4*/] = unk_0x0A89FDFA763DCAED();
	Local_152.f_2812[Local_152.f_2869 /*4*/].f_1 = iParam0;
	Local_152.f_2812[Local_152.f_2869 /*4*/].f_2 = { Param1 };
	Local_152.f_2869++;
	if (Local_152.f_2869 >= 14)
	{
		Local_152.f_2869 = 0;
	}
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 21;
		
		case 1:
			return 11;
		
		case 2:
			return 21;
		
		case 3:
			return 25;
		
		default:
	}
	return -1;
}

int func_133()
{
	Local_152.f_2368.f_321 = func_134(Local_152.f_2368.f_321, 0.15f);
	if (Local_152.f_2368.f_321 < 1f)
	{
		return 0;
	}
	Local_152.f_2368.f_321 = 1f;
	return 1;
}

float func_134(float fParam0, float fParam1)
{
	return (fParam0 + ((fParam1 * Local_152.f_2873) * timestep()));
}

void func_135()
{
	func_203();
	func_190();
	func_184();
	func_172();
	func_171();
	func_170();
	func_158();
	func_153();
	func_146();
	func_141();
	func_136(3);
	func_84();
	func_82();
}

void func_136(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var2;
	float fVar3;
	
	iVar0 = func_132(iParam0);
	if (Local_152.f_2878 > -1 && Local_152.f_2878 < func_132(iParam0))
	{
		iVar0 = Local_152.f_2878 + 1;
	}
	Var1 = { func_140(iParam0) };
	StringCopy(&Var2, func_139(iParam0), 64);
	StringIntConCat(&Var2, iVar0, 64);
	fVar3 = 0f;
	if ((iParam0 == 3 || iParam0 == 2) && Local_152.f_2878 >= func_132(iParam0) + 60 + 10)
	{
		fVar3 = -0.118519f;
	}
	func_83(func_138(iParam0), &Var2, 0.5f, (0.5f + fVar3), Var1, Var1.f_1, 0f, Local_152.f_1765);
	func_137();
}

void func_137()
{
	Local_152.f_2878 = (Local_152.f_2878 + Local_152.f_2877);
}

char* func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "MPInvPersMessages";
		
		case 2:
		case 3:
			return "MPInvPersMessages2";
		
		default:
	}
	return "INVALID SEQUENCE";
}

char* func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "get ready_";
		
		case 1:
			return "go_";
		
		case 2:
			return "gameover_";
		
		case 3:
			return "stageclear_";
		
		default:
	}
	return "INVALID SEQUENCE";
}

struct<2> func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_88(0.266667f, 0.118519f);
		
		case 1:
			return func_88(0.104167f, 0.118519f);
		
		case 2:
			return func_88(0.266667f, 0.118519f);
		
		case 3:
			return func_88(0.3125f, 0.118519f);
		
		default:
	}
	return func_88(-1f, -1f);
}

void func_141()
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	Var0 = { func_88(1f, 0.01851852f) };
	iVar1 = func_132(3);
	bVar2 = false;
	if (Local_152.f_2878 < iVar1)
	{
		Var0.f_1 = (Var0.f_1 + (((0.1157407f - 0.01851852f) / IntToFloat(iVar1)) * IntToFloat(Local_152.f_2878)));
	}
	else if (Local_152.f_2878 < iVar1 + 60)
	{
		Var0.f_1 = 0.1157407f;
	}
	else if (Local_152.f_2878 < iVar1 + 60 + 10)
	{
		Var0.f_1 = (0.1157407f + (((0.3472222f - 0.1157407f) / 10f) * IntToFloat(((Local_152.f_2878 - iVar1) - 60))));
	}
	else
	{
		Var0.f_1 = 0.3472222f;
		bVar2 = true;
	}
	func_91(func_88(0.5f, 0.5f), func_145(Var0, func_88(0f, 0.003703704f)), Local_152.f_1765.f_24);
	func_91(func_88(0.5f, 0.5f), Var0, Local_152.f_1765.f_20);
	if (!bVar2)
	{
		return;
	}
	fVar3 = 0.4675926f;
	func_83("MpInvPersHud", "title_armour", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_152.f_1765.f_28);
	func_142(Local_152.f_2727, fVar3, 0, 99);
	fVar3 = (fVar3 + 0.03703704f);
	func_83("MpInvPersHud", "title_lives", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_152.f_1765.f_28);
	func_142(Local_152.f_2726, fVar3, 0, 99);
	fVar3 = (fVar3 + 0.03703704f);
	func_83("MpInvPersHud", "title_distance", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_152.f_1765.f_28);
	func_142(Local_152.f_2728 * 1000, fVar3, 0, 99);
	fVar3 = (fVar3 + (0.03703704f / 2f));
	func_91(func_88((0.5f + 0.022f), (fVar3 + 0.0095f)), func_88(0.175f, 0.005555556f), Local_152.f_1765.f_28);
	fVar3 = (fVar3 + 0.03703704f);
	func_83("MpInvPersHud", "title_total", (0.4947917f - (0.09583333f / 2f)), fVar3, 0.09583333f, 0.02962963f, 0f, Local_152.f_1765.f_28);
	func_142(Local_152.f_2725, fVar3, 1, 99);
}

void func_142(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	func_143(iParam0, func_88(0.503f, fParam1), Local_152.f_1765, 0, bParam2, 0, iParam3);
}

void func_143(int iParam0, struct<2> Param1, struct<4> Param2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<4> Var0[10];
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var5;
	bool bVar6;
	float fVar7;
	
	iVar2 = iParam0;
	Var4 = { func_88(func_144(bParam5, 0.005208333f, 0.01041667f), func_144(bParam5, 0.01481481f, 0.02962963f)) };
	Var5 = { func_88(func_144(bParam5, 0.004166667f, 0.008333333f), func_144(bParam5, 0.01481481f, 0.02962963f)) };
	bVar6 = iParam6 == 99;
	if (bVar6)
	{
		iParam6 = 10;
	}
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		StringCopy(&(Var0[iVar1 /*4*/]), "number_", 16);
		StringIntConCat(&(Var0[iVar1 /*4*/]), (iVar2 % 10), 16);
		iVar2 = (iVar2 / 10);
		if (iVar2 > 0 && (iVar1 + 1 % 3) == 0)
		{
			unk_0xCED9E32812D6C7C7(&iVar3, iVar1);
		}
		if (bVar6 && iVar2 == 0)
		{
			iParam6 = iVar1 + 1;
		}
		else
		{
			iVar1++;
		}
	}
	fVar7 = Param1;
	if (bParam3)
	{
		fVar7 = (fVar7 - (Var4 / 2f));
		iVar1 = 0;
		while (iVar1 <= (iParam6 - 1))
		{
			func_83("MPInvPersHud", &(Var0[iVar1 /*4*/]), fVar7, Param1.f_1, Var4, Var4.f_1, 0f, Param2);
			if (unk_0xE2D0C323A1AE5D85(iVar3, iVar1))
			{
				fVar7 = (fVar7 - Var5);
				func_83("MPInvPersHud", "comma", fVar7, Param1.f_1, Var5, Var5.f_1, 0f, Param2);
			}
			fVar7 = (fVar7 - Var4);
			iVar1++;
		}
		if (bParam4)
		{
			func_83("MPInvPersHud", "dollar", fVar7, Param1.f_1, Var4, Var4.f_1, 0f, Param2);
		}
	}
	else
	{
		fVar7 = (fVar7 + (Var4 / 2f));
		if (bParam4)
		{
			func_83("MPInvPersHud", "dollar", fVar7, Param1.f_1, Var4, Var4.f_1, 0f, Param2);
			fVar7 = (fVar7 + Var4);
		}
		iVar1 = (iParam6 - 1);
		while (iVar1 >= 0)
		{
			if (unk_0xE2D0C323A1AE5D85(iVar3, iVar1))
			{
				func_83("MPInvPersHud", "comma", fVar7, Param1.f_1, Var5, Var5.f_1, 0f, Param2);
				fVar7 = (fVar7 + Var5);
			}
			func_83("MPInvPersHud", &(Var0[iVar1 /*4*/]), fVar7, Param1.f_1, Var4, Var4.f_1, 0f, Param2);
			fVar7 = (fVar7 + Var4);
			iVar1 = (iVar1 + -1);
		}
	}
}

float func_144(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

struct<2> func_145(struct<2> Param0, struct<2> Param1)
{
	struct<2> Var0;
	
	Var0 = (Param0 + Param1);
	Var0.f_1 = (Param0.f_1 + Param1.f_1);
	return Var0;
}

void func_146()
{
	func_152();
	func_150();
	func_149();
	func_147();
}

void func_147()
{
	struct<2> Var0;
	struct<2> Var1;
	struct<8> Var2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<4> Var7;
	
	Var0 = { func_88(0.228125f, 0.059259f) };
	Var1 = { func_88(0.7026035f, 0.139444f) };
	StringCopy(&Var2, "distance", 64);
	if (Local_152 == -1f)
	{
		StringConCat(&Var2, "_inf", 64);
	}
	func_83("MPInvPersHud", &Var2, Var1, Var1.f_1, Var0, Var0.f_1, 0f, Local_152.f_1765);
	iVar3 = floor((Local_152.f_2872 / 0.164583f));
	if (Local_152.f_2871 == 4)
	{
		func_143(iVar3 * 1000, func_88((Var1 + 0.026f), (Var1.f_1 + 0.0085f)), Local_152.f_1765.f_32, 1, 0, 1, 99);
		func_143(Local_152.f_2905 * 1000, func_88((Var1 + 0.098f), (Var1.f_1 + 0.0085f)), Local_152.f_1765.f_32, 1, 0, 1, 99);
	}
	else
	{
		func_143(iVar3 * 1000, func_88((Var1 + 0.098f), (Var1.f_1 + 0.0085f)), Local_152.f_1765.f_32, 1, 0, 1, 99);
	}
	if (Local_152 != -1f)
	{
		fVar4 = ((Local_152.f_2872 / 0.164583f) / Local_152);
		if (fVar4 > 1f)
		{
			fVar4 = 1f;
		}
		fVar5 = func_148(((Var1 + -0.01945f) - (0.117708f / 2f)), (Var1 + -0.01945f), fVar4);
		fVar6 = func_148(0f, 0.117708f, fVar4);
		func_83("MPInvPersHud", "distancearrow", (fVar5 + (fVar6 / 2f)), Var1.f_1, 0.00625f, 0.007407f, 0f, Local_152.f_1765);
		Var7.f_3 = 255;
		func_110(&Var7, 154, 255, 0, 125);
		func_91(func_88(fVar5, (Var1.f_1 + 0.0095f)), func_88(fVar6, 0.011111f), Var7);
	}
}

float func_148(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_149()
{
	struct<2> Var0;
	struct<2> Var1;
	
	Var0 = { func_88(0.161458f, 0.059259f) };
	Var1 = { func_88(0.498437f, 0.139444f) };
	func_83("MPInvPersHud", "score", Var1, Var1.f_1, Var0, Var0.f_1, 0f, Local_152.f_1765);
	func_143(Local_152.f_2725, func_88(0.571f, (Var1.f_1 + 0f)), Local_152.f_1765.f_32, 1, 0, 0, 99);
}

void func_150()
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	struct<4> Var3;
	float fVar4;
	
	Var0 = { func_88(0.15f, 0.059259f) };
	Var1 = { func_88(0.333854f, 0.139444f) };
	func_83("MPInvPersHud", "health", Var1, Var1.f_1, Var0, Var0.f_1, 0f, Local_152.f_1765);
	if (Local_152.f_2368.f_332 < Local_152.f_2368.f_331)
	{
		Local_152.f_2368.f_332 = func_151((Local_152.f_2368.f_332 + Local_152.f_2877), 0, Local_152.f_2368.f_331);
	}
	else if (Local_152.f_2368.f_332 > Local_152.f_2368.f_331)
	{
		Local_152.f_2368.f_332 = func_151((Local_152.f_2368.f_332 - Local_152.f_2877), Local_152.f_2368.f_331, 20);
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 0))
	{
		Var3.f_3 = 255;
		if (Local_152.f_2368.f_332 > 1)
		{
			func_110(&Var3, 154, 255, 0, 255);
		}
		else
		{
			func_110(&Var3, 246, 8, 21, 255);
		}
		Var1 = 0.295312f;
		Var0 = { func_88(0.00625f, 0.02963f) };
		iVar2 = 0;
		while (iVar2 <= (Local_152.f_2368.f_332 - 1))
		{
			fVar4 = ((Var1 + (IntToFloat(iVar2) * 0.005208f)) + (Var0 / 2f));
			func_83("MPInvPersHud", "healthsegment", fVar4, Var1.f_1, Var0, Var0.f_1, 0f, Var3);
			iVar2++;
		}
	}
	else
	{
		func_83("MPInvPersHud", "shield_ui", 0.346875f, Var1.f_1, 0.1125f, 0.044444f, 0f, Local_152.f_1765);
	}
}

int func_151(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_152()
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	
	Var0 = { func_88(0.066667f, 0.059259f) };
	Var1 = { func_88(0.2166665f, 0.139444f) };
	func_83("MPInvPersHud", "lives", Var1, Var1.f_1, Var0, Var0.f_1, 0f, Local_152.f_1765);
	iVar2 = Local_152.f_2368.f_330;
	if (Local_152.f_2368.f_330 < 0)
	{
		iVar2 = 0;
	}
	func_143(iVar2, func_88((Var1 + 0.003f), (Var1.f_1 + 0f)), Local_152.f_1765.f_32, 0, 0, 0, 2);
}

void func_153()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (unk_0x0A89FDFA763DCAED() > Local_152.f_2812[iVar0 /*4*/] + 1000)
		{
		}
		else
		{
			fVar1 = (to_float((unk_0x0A89FDFA763DCAED() - Local_152.f_2812[iVar0 /*4*/])) / 1000f);
			fVar2 = Local_152.f_2812[iVar0 /*4*/].f_2;
			if (fVar2 < (0.15625f * 1.1f))
			{
			}
			else
			{
				func_154("IAP_SCORE", fVar2, func_156((Local_152.f_2812[iVar0 /*4*/].f_2.f_1 + 0f), (Local_152.f_2812[iVar0 /*4*/].f_2.f_1 + -0.05f), fVar1, 4), Local_152.f_2812[iVar0 /*4*/].f_1);
			}
		}
		iVar0++;
	}
}

void func_154(char* sParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_155();
	unk_0x3F03C2D4EFA888BC(0.5f, 0.5f);
	unk_0x71F4002CB1A0B451(255, 255, 255, iVar0);
	unk_0x21FC15AE6B6188C4(1);
	unk_0xF68E5437AF17EFBC(7);
	if (iVar0 > 200)
	{
		unk_0xB4143D1DF367EC1B();
	}
	unk_0xCDDA0C58B818F6B2(sParam0);
	if (iParam3 != 2147483647)
	{
		unk_0x2AE954BA77A66307(iParam3);
	}
	unk_0x1A53079994915FA6(fParam1, fParam2, 0);
}

int func_155()
{
	return round((unk_0x48053974ED6F63CE(unk_0x06A2016215B8E171(to_float(unk_0x320D1840B6DAA1CC()))) * 255f));
}

float func_156(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_157((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_156(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_156(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_157(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_158()
{
	float fVar0;
	struct<4> Var1;
	
	if (!func_169())
	{
		return;
	}
	Var1.f_3 = 255;
	if (!func_116(&(Local_152.f_2892), 650, 0))
	{
		fVar0 = (to_float(func_168(&(Local_152.f_2892), 0, 0)) / 650f);
		Var1 = { func_167(Local_152.f_1765.f_12, Local_152.f_1765, fVar0) };
		Var1.f_3 = round(func_156(0f, 255f, fVar0, 1));
		func_166(&Var1);
		func_159(fVar0);
	}
	else
	{
		fVar0 = (to_float((func_168(&(Local_152.f_2892), 0, 0) - 650)) / 4000f);
		Var1 = { func_167(Local_152.f_1765, Local_152.f_1765.f_12, fVar0) };
		Var1.f_3 = round(func_156(255f, 0f, fVar0, 2));
		func_166(&Var1);
		func_159(1f);
	}
}

void func_159(float fParam0)
{
	struct<2> Var0;
	struct<8> Var1;
	struct<2> Var2[10];
	struct<2> Var3;
	int iVar4;
	struct<2> Var5;
	
	if (fParam0 < 0.8f)
	{
		Local_152.f_2894 = 0;
	}
	else if (Local_152.f_2894 >= func_165(0))
	{
		return;
	}
	Var0 = { func_163(func_164(0), 2f) };
	Var0 = func_156(0f, Var0, fParam0, 1);
	Var0.f_1 = func_156(0f, Var0.f_1, fParam0, 1);
	StringCopy(&Var1, func_162(0), 64);
	StringIntConCat(&Var1, Local_152.f_2894 + 1, 64);
	Var2[0 /*2*/] = { func_88((0.5f + (0f * (1f / 1920f))), (0.5f + (-460f * (1f / 1080f)))) };
	Var2[1 /*2*/] = { func_88((0.5f + (120f * (1f / 1920f))), (0.5f + (-120f * (1f / 1080f)))) };
	Var2[2 /*2*/] = { func_88((0.5f + (480f * (1f / 1920f))), (0.5f + (-110f * (1f / 1080f)))) };
	Var2[3 /*2*/] = { func_88((0.5f + (195f * (1f / 1920f))), (0.5f + (90f * (1f / 1080f)))) };
	Var2[4 /*2*/] = { func_88((0.5f + (300f * (1f / 1920f))), (0.5f + (460f * (1f / 1080f)))) };
	Var2[5 /*2*/] = { func_88((0.5f + (0f * (1f / 1920f))), (0.5f + (255f * (1f / 1080f)))) };
	Var2[6 /*2*/] = { func_88((0.5f + (-300f * (1f / 1920f))), (0.5f + (460f * (1f / 1080f)))) };
	Var2[7 /*2*/] = { func_88((0.5f + (-195f * (1f / 1920f))), (0.5f + (90f * (1f / 1080f)))) };
	Var2[8 /*2*/] = { func_88((0.5f + (-480f * (1f / 1920f))), (0.5f + (-110f * (1f / 1080f)))) };
	Var2[9 /*2*/] = { func_88((0.5f + (-120f * (1f / 1920f))), (0.5f + (-120f * (1f / 1080f)))) };
	Var3 = { func_88(0.5f, 0.5f) };
	iVar4 = 0;
	while (iVar4 <= (Var2 - 1))
	{
		Var5 = { func_161(Var3, Var2[iVar4 /*2*/], fParam0) };
		Var5 = func_156(Var3, Var2[iVar4 /*2*/], func_160(fParam0, 0f, 0.75f), 2);
		Var5.f_1 = func_156(Var3.f_1, Var2[iVar4 /*2*/].f_1, func_160(fParam0, 0f, 0.75f), 2);
		func_83("MPInvPersCommon", &Var1, Var5, Var5.f_1, Var0, Var0.f_1, 0f, Local_152.f_1765);
		iVar4++;
	}
	if (fParam0 >= 0.8f)
	{
		Local_152.f_2894 = (Local_152.f_2894 + Local_152.f_2875);
	}
}

float func_160(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

struct<2> func_161(struct<2> Param0, struct<2> Param1, float fParam2)
{
	return func_145(func_163(Param0, (1f - fParam2)), func_163(Param1, fParam2));
}

char* func_162(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "explosion_med";
		
		case 1:
			return "tank_smoke";
		
		default:
	}
	return "INVALID EXPLOSION";
}

struct<2> func_163(struct<2> Param0, float fParam1)
{
	struct<2> Var0;
	
	Var0 = (Param0 * fParam1);
	Var0.f_1 = (Param0.f_1 * fParam1);
	return Var0;
}

struct<2> func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_88((0.066667f / 2f), (0.118519f / 2f));
		
		case 1:
			return func_88(0.020833f, 0.037037f);
		
		default:
	}
	return func_88(-1f, -1f);
}

int func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 1:
			return 7;
		
		default:
	}
	return 0;
}

void func_166(var uParam0)
{
	unk_0xCA4C0AD3CAFF651E(0.5f, 0.5f, 1f, 1f, *uParam0, uParam0->f_1, uParam0->f_2, uParam0->f_3, 0);
}

struct<4> func_167(struct<4> Param0, struct<4> Param1, float fParam2)
{
	Param0 = round(((to_float((Param1 - Param0)) * fParam2) + IntToFloat(Param0)));
	Param0.f_1 = round(((to_float((Param1.f_1 - Param0.f_1)) * fParam2) + IntToFloat(Param0.f_1)));
	Param0.f_2 = round(((to_float((Param1.f_2 - Param0.f_2)) * fParam2) + IntToFloat(Param0.f_2)));
	Param0.f_3 = round(((to_float((Param1.f_3 - Param0.f_3)) * fParam2) + IntToFloat(Param0.f_3)));
	return Param0;
}

int func_168(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x9315DBF7D972F07A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), *uParam0);
		}
		else
		{
			return unk_0x780A854E3A976A66(unk_0xE75390F3CA208D5E(), *uParam0);
		}
	}
	return unk_0x780A854E3A976A66(unk_0x320D1840B6DAA1CC(), *uParam0);
}

int func_169()
{
	if (func_119(&(Local_152.f_2892)))
	{
		if (!func_116(&(Local_152.f_2892), 4000, 0))
		{
			return 1;
		}
		func_100(&(Local_152.f_2892));
	}
	return 0;
}

void func_170()
{
	int iVar0;
	int iVar1;
	
	if (!func_106())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			func_83(Local_152.f_2895, "blizzard", ((Local_152.f_2896 + (IntToFloat(iVar0) * 0.25f)) + (0.25f / 2f)), ((Local_152.f_2896.f_1 - (IntToFloat(iVar1) * 0.325926f)) - (0.325926f / 2f)), 0.25f, 0.325926f, 0f, Local_152.f_1765);
			iVar1++;
		}
		iVar0++;
	}
}

void func_171()
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_152.f_2730[iVar0 /*4*/].f_1 <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, func_162(Local_152.f_2730[iVar0 /*4*/]), 64);
			Var2 = { func_164(Local_152.f_2730[iVar0 /*4*/]) };
			iVar3 = func_165(Local_152.f_2730[iVar0 /*4*/]);
			StringIntConCat(&Var1, Local_152.f_2730[iVar0 /*4*/].f_1 + 1, 64);
			func_83("MPInvPersCommon", &Var1, Local_152.f_2730[iVar0 /*4*/].f_2, Local_152.f_2730[iVar0 /*4*/].f_2.f_1, Var2, Var2.f_1, 0f, Local_152.f_1765);
			Local_152.f_2730[iVar0 /*4*/].f_1 = (Local_152.f_2730[iVar0 /*4*/].f_1 + Local_152.f_2875);
			if (Local_152.f_2730[iVar0 /*4*/].f_1 >= iVar3)
			{
				Local_152.f_2730[iVar0 /*4*/].f_1 = -1;
			}
		}
		iVar0++;
	}
}

void func_172()
{
	struct<4> Var0;
	struct<2> Var1;
	struct<8> Var2;
	
	if (Local_152.f_2368 == 3)
	{
		func_183();
		return;
	}
	Var0 = { Local_152.f_1765 };
	if (Local_152.f_2368.f_334 + 750 > unk_0x0A89FDFA763DCAED())
	{
		func_182(Local_152.f_1765.f_12);
		Var0 = { Local_152.f_1765.f_12 };
	}
	else if (Local_152.f_2368.f_335 + 500 > unk_0x0A89FDFA763DCAED())
	{
		func_182(Local_152.f_1765.f_8);
		Var0 = { Local_152.f_1765.f_8 };
	}
	if (func_181())
	{
		Var0.f_3 = func_155();
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 0))
	{
		func_180(Var0);
	}
	func_175(Var0);
	Var1 = { func_173() };
	Var2 = { Local_152.f_2368.f_303 };
	StringIntConCat(&Var2, Local_152.f_2368.f_319 + 1, 64);
	func_83(func_16(), &Var2, Local_152.f_2368.f_321, Local_152.f_2368.f_321.f_1, Var1, Var1.f_1, 0f, Var0);
}

struct<2> func_173()
{
	if (func_174())
	{
		return func_88(0.104167f, 0.144444f);
	}
	return func_88(0.104167f, 0.12963f);
}

bool func_174()
{
	return ((Local_152.f_2368 == 1 || Local_152.f_2368 == 2) || Local_152.f_2368 == 4);
}

void func_175(struct<4> Param0)
{
	float fVar0;
	struct<2> Var1;
	struct<2> Var2;
	struct<16> Var3;
	
	fVar0 = func_144(func_174(), -0.007407f, 0f);
	Var1 = { func_88((Local_152.f_2368.f_321 + 0.0075f), ((Local_152.f_2368.f_321.f_1 + -0.055f) + fVar0)) };
	Var1 = (((Var1 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	Var2 = { func_179(Var1, func_145(Var1, func_88(0.061f, 0f)), (IntToFloat(Local_152.f_2368.f_325) * -15f)) };
	Var3 = { func_178() };
	func_176(func_16(), &Var3, Var2, Var2.f_1, 0.104167f, 0.059259f, (IntToFloat(Local_152.f_2368.f_325) * -15f), Param0);
}

void func_176(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	unk_0x7A86232B8D047C7B(sParam0, sParam1, func_177(fParam2), fParam3, (fParam4 * fLocal_148), fParam5, fParam6, Param7, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}

float func_177(float fParam0)
{
	fParam0 = (0.5f - ((0.5f - fParam0) / fLocal_147));
	return fParam0;
}

struct<16> func_178()
{
	struct<16> Var0;
	
	switch (Local_152.f_2368.f_2)
	{
		case 0:
			StringCopy(&Var0, "turret_fire", 64);
			StringIntConCat(&Var0, Local_152.f_2368.f_320 + 1, 64);
			break;
		
		case 1:
			StringCopy(&Var0, "turret_flame", 64);
			if (Local_152.f_2368.f_1 == 1)
			{
				StringConCat(&Var0, "2", 64);
			}
			else
			{
				StringConCat(&Var0, "1", 64);
			}
			break;
		
		case 2:
			StringCopy(&Var0, "turret_rocket", 64);
			StringIntConCat(&Var0, Local_152.f_2368.f_320 + 1, 64);
			break;
		
		case 3:
			StringConCat(&Var0, "turret_beam", 64);
			if (Local_152.f_2368.f_1 == 1)
			{
				StringConCat(&Var0, "_fire", 64);
				StringIntConCat(&Var0, Local_152.f_2368.f_320 + 1, 64);
			}
			break;
	}
	return Var0;
}

struct<2> func_179(struct<2> Param0, struct<2> Param1, float fParam2)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar1 = sin(fParam2);
	fVar2 = cos(fParam2);
	Var0 = (Param1 - Param0);
	Var0.f_1 = (Param1.f_1 - Param0.f_1);
	fVar3 = ((Var0 * fVar2) - (Var0.f_1 * fVar1));
	fVar4 = ((Var0 * fVar1) + (Var0.f_1 * fVar2));
	Var0 = (fVar3 + Param0);
	Var0.f_1 = (fVar4 + Param0.f_1);
	return Var0;
}

void func_180(struct<4> Param0)
{
	struct<8> Var0;
	float fVar1;
	
	StringCopy(&Var0, "tank_shield", 64);
	StringIntConCat(&Var0, Local_152.f_2368.f_319 + 1, 64);
	fVar1 = func_144(func_174(), -0.03575f, -0.025222f);
	func_83("MPInvPersCommon", &Var0, (Local_152.f_2368.f_321 + 0f), (Local_152.f_2368.f_321.f_1 + fVar1), 0.110417f, 0.125926f, 0f, Param0);
}

bool func_181()
{
	return ((Local_152.f_2368.f_334 + 750 > unk_0x0A89FDFA763DCAED() || Local_152.f_2368.f_335 + 500 > unk_0x0A89FDFA763DCAED()) || Local_152.f_2368.f_337 + 2000 > unk_0x0A89FDFA763DCAED());
}

void func_182(struct<4> Param0)
{
	Param0.f_3 = round((unk_0x48053974ED6F63CE(unk_0x06A2016215B8E171(to_float(unk_0x320D1840B6DAA1CC()))) * 50f)) + 150;
	func_83("MpInvPersHud", "border", (0.5f + 0.002604167f), 0.5f, 1f, 1f, 0f, Param0);
}

void func_183()
{
	struct<8> Var0;
	
	if (Local_152.f_2368.f_319 >= 16)
	{
		return;
	}
	func_182(Local_152.f_1765.f_12);
	StringCopy(&Var0, "tank_death", 64);
	StringIntConCat(&Var0, Local_152.f_2368.f_319 + 1, 64);
	func_83(func_16(), &Var0, Local_152.f_2368.f_321, (Local_152.f_2368.f_321.f_1 + -0.035185f), 0.166667f, 0.2f, 0f, Local_152.f_1765);
}

void func_184()
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_152.f_2368.f_3[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_2368.f_3[iVar0 /*14*/].f_11 + Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2))
		{
		}
		else if (Local_152.f_2368.f_3[iVar0 /*14*/] == 5)
		{
			func_185(iVar0);
		}
		else
		{
			StringCopy(&Var1, Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/], 64);
			if (Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				StringIntConCat(&Var1, Local_152.f_2368.f_3[iVar0 /*14*/].f_12 + 1, 64);
			}
			Var2 = { Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_3 };
			fVar3 = Local_152.f_2368.f_3[iVar0 /*14*/].f_9;
			if (Local_152.f_2368.f_3[iVar0 /*14*/] == 3)
			{
				fVar4 = (to_float((unk_0x0A89FDFA763DCAED() - Local_152.f_2368.f_3[iVar0 /*14*/].f_11)) / (IntToFloat(Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2) * 0.75f));
				if (fVar4 > 1f)
				{
					fVar4 = 1f;
				}
				Var2 = func_156((Var2 / 2f), Var2, fVar4, 1);
				Var2.f_1 = func_156((Var2.f_1 / 2f), Var2.f_1, fVar4, 1);
			}
			func_83("MPInvPersCommon", &Var1, Local_152.f_2368.f_3[iVar0 /*14*/].f_5, Local_152.f_2368.f_3[iVar0 /*14*/].f_5.f_1, Var2, Var2.f_1, fVar3, Local_152.f_1765);
		}
		iVar0++;
	}
}

void func_185(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	float fVar4;
	float fVar5;
	struct<2> Var6;
	float fVar7;
	float fVar8;
	struct<4> Var9;
	struct<8> Var10;
	
	Var0 = { Local_152.f_1734[Local_152.f_2368.f_3[iParam0 /*14*/] /*5*/].f_3 };
	Var1 = { func_189(Local_152.f_2368.f_3[iParam0 /*14*/].f_1) };
	Var2 = { func_189(Local_152.f_2368.f_3[iParam0 /*14*/].f_3) };
	Var3 = { func_87(func_188(func_145(Var1, Var2), 2f)) };
	if (!func_187(Local_152.f_2368.f_3[iParam0 /*14*/].f_9, -0.0001f, 0.0001f))
	{
		fVar4 = sin(Local_152.f_2368.f_3[iParam0 /*14*/].f_9);
		fVar5 = cos(Local_152.f_2368.f_3[iParam0 /*14*/].f_9);
		Var6 = { func_186(Var1, Var2, -fVar4, fVar5) };
	}
	else
	{
		Var6 = { Var2 };
	}
	Var6 = { func_87(Var6) };
	Var3 = (((Var3 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	Var6 = (((Var6 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fVar7 = (((Local_152.f_2368.f_3[iParam0 /*14*/].f_1 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fVar8 = unk_0x48053974ED6F63CE((Var6 - fVar7));
	Var9 = { Local_152.f_1765.f_16 };
	Var9.f_3 = round((unk_0x48053974ED6F63CE(((to_float(unk_0x320D1840B6DAA1CC()) * 0.1f) % 1f)) * 100f)) + 155;
	func_176("MPInvPersCommon", "Beam_Glow_Tapered", Var3, Var3.f_1, (Var0.f_1 / 2f), fVar8, (Local_152.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var9);
	Var9.f_3 = round((unk_0x48053974ED6F63CE(unk_0x06A2016215B8E171((to_float((unk_0x0A89FDFA763DCAED() + Local_152.f_2368.f_3[iParam0 /*14*/].f_11)) * 0.5f))) * 180f)) + 75;
	func_176("MPInvPersCommon", "beam_middle", Var3, Var3.f_1, Var0.f_1, fVar8, (Local_152.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var9);
	Var9 = { Local_152.f_1765 };
	func_110(&Var9, 255, 255, 255, 255);
	Var9.f_3 = round((unk_0x48053974ED6F63CE(sin(to_float((unk_0x0A89FDFA763DCAED() + Local_152.f_2368.f_3[iParam0 /*14*/].f_11)))) * 155f)) + 100;
	func_176("MPInvPersCommon", "beam_top", Var3, Var3.f_1, Var0.f_1, fVar8, (Local_152.f_2368.f_3[iParam0 /*14*/].f_9 + 90f), Var9);
	Var9 = { Local_152.f_1765 };
	if ((Local_152.f_2368.f_3[iParam0 /*14*/].f_3 > 0.15625f && Local_152.f_2368.f_3[iParam0 /*14*/].f_3 < (1f - 0.15625f)) && Local_152.f_2368.f_3[iParam0 /*14*/].f_3.f_1 > 0f)
	{
		StringCopy(&Var10, Local_152.f_1734[Local_152.f_2368.f_3[iParam0 /*14*/] /*5*/], 64);
		if (Local_152.f_1734[Local_152.f_2368.f_3[iParam0 /*14*/] /*5*/].f_1 > 0)
		{
			StringIntConCat(&Var10, Local_152.f_2368.f_3[iParam0 /*14*/].f_12 + 1, 64);
		}
		func_83("MPInvPersCommon", &Var10, Local_152.f_2368.f_3[iParam0 /*14*/].f_3, Local_152.f_2368.f_3[iParam0 /*14*/].f_3.f_1, Var0, Var0.f_1, 0f, Var9);
	}
}

struct<2> func_186(struct<2> Param0, struct<2> Param1, float fParam2, float fParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	
	Var0 = (Param1 - Param0);
	Var0.f_1 = (Param1.f_1 - Param0.f_1);
	fVar1 = ((Var0 * fParam3) - (Var0.f_1 * fParam2));
	fVar2 = ((Var0 * fParam2) + (Var0.f_1 * fParam3));
	Var0 = (fVar1 + Param0);
	Var0.f_1 = (fVar2 + Param0.f_1);
	return Var0;
}

bool func_187(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

struct<2> func_188(struct<2> Param0, float fParam1)
{
	struct<2> Var0;
	
	Var0 = (Param0 / fParam1);
	Var0.f_1 = (Param0.f_1 / fParam1);
	return Var0;
}

struct<2> func_189(struct<2> Param0)
{
	return func_88((Param0 * 1920f), (Param0.f_1 * 1080f));
}

void func_190()
{
	float fVar0;
	int iVar1;
	char* sVar2;
	struct<2> Var3;
	struct<4> Var4;
	struct<8> Var5;
	float fVar6;
	struct<2> Var7;
	struct<2> Var8;
	
	fVar0 = sin((to_float(unk_0x320D1840B6DAA1CC()) * 0.5f));
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		if (Local_152.f_1801[iVar1 /*14*/] == -1)
		{
		}
		else if (Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 4)
		{
		}
		else if (Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 3)
		{
			if (Local_152.f_1801[iVar1 /*14*/].f_11 & 1 == 0)
			{
			}
			else if (Local_152.f_1801[iVar1 /*14*/].f_1 >= func_202(iVar1))
			{
			}
			else if (!func_200(iVar1))
			{
			}
			else
			{
				sVar2 = func_199(iVar1);
				Var3 = { func_197(iVar1) };
				Var4 = { func_195(iVar1) };
				StringCopy(&Var5, func_194(iVar1), 64);
				if (Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 6)
				{
					func_193(iVar1);
				}
				else if (func_202(iVar1) > 0)
				{
					StringIntConCat(&Var5, Local_152.f_1801[iVar1 /*14*/].f_1 + 1, 64);
				}
				fVar6 = 0f;
				Var7 = { Local_152.f_1801[iVar1 /*14*/].f_3 };
				if (Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 5 && Local_152.f_1801[iVar1 /*14*/].f_10 == 2)
				{
					fVar6 = (fVar0 * 20f);
					Var8 = { Var7 };
					Var8.f_1 = (Var8.f_1 - ((Var3.f_1 / 2f) + (0.037037f / 2f)));
					Var8 = { func_189(Var8) };
					Var8 = { func_179(func_189(Var7), Var8, fVar6) };
					Var8 = { func_87(Var8) };
					func_83(sVar2, "parachute", Var8, Var8.f_1, 0.020833f, 0.037037f, fVar6, Var4);
				}
				if (Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 3 && Local_152.f_1801[iVar1 /*14*/].f_11 & 1 != 0)
				{
					Var7 = { func_145(Var7, func_191()) };
				}
				func_83(sVar2, &Var5, Var7, Var7.f_1, Var3, Var3.f_1, fVar6, Var4);
			}
			iVar1++;
		}

struct<2> func_191()
{
	switch (func_192())
	{
		case 8:
			return func_88(0f, 0f);
		
		case 9:
			return func_88(0f, 0f);
		
		case 10:
			return func_88(-0.011979f, 0f);
		
		case 11:
			return func_88(0f, 0f);
		
		case 12:
			return func_88(0f, 0f);
		
		default:
	}
	return func_88(0f, 0f);
}

int func_192()
{
	return (8 + Local_152.f_2871);
}

void func_193(int iParam0)
{
	struct<8> Var0;
	struct<2> Var1;
	
	if (Local_152.f_1801[iParam0 /*14*/].f_8 == -2147483647)
	{
		return;
	}
	StringCopy(&Var0, "capture_flag", 64);
	if (func_202(iParam0) > 0)
	{
		StringIntConCat(&Var0, Local_152.f_1801[iParam0 /*14*/].f_1 + 1, 64);
	}
	Var1 = { func_197(iParam0) };
	func_83("MpInvPersCommon", &Var0, (Local_152.f_1801[iParam0 /*14*/].f_3 + (0.045833f / 2f)), ((Local_152.f_1801[iParam0 /*14*/].f_3.f_1 - (Var1.f_1 / 2f)) - Local_152.f_1801[iParam0 /*14*/].f_5.f_1), 0.045833f, 0.088889f, 0f, Local_152.f_1765);
}

char* func_194(int iParam0)
{
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_152.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return "pit_collapse";
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return "crate_open";
		}
		return "explosion_med";
	}
	switch (Local_152.f_1801[iParam0 /*14*/].f_10)
	{
		case 1:
			return Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_26;
		
		case 0:
		case 2:
			return Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_24;
		
		default:
	}
	return "INVALID STATE";
}

struct<4> func_195(int iParam0)
{
	struct<4> Var0;
	
	if (Local_152.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return func_196(Local_152.f_1801[iParam0 /*14*/]);
		}
		return Local_152.f_1765;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_8 + 500 > unk_0x0A89FDFA763DCAED())
	{
		Var0.f_3 = 255;
		if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 6)
		{
			func_110(&Var0, 0, func_155(), 0, 255);
		}
		else
		{
			func_110(&Var0, 255, 0, 0, func_155());
		}
		return Var0;
	}
	return Local_152.f_1765;
}

struct<4> func_196(int iParam0)
{
	struct<4> Var0;
	
	Var0.f_3 = 255;
	switch (iParam0)
	{
		case 18:
			func_110(&Var0, 255, 139, 63, 255);
			break;
		
		case 19:
			func_110(&Var0, 139, 0, 255, 255);
			break;
		
		case 20:
		case 21:
		case 22:
			func_110(&Var0, 154, 255, 0, 255);
			break;
		
		case 25:
			func_110(&Var0, 24, 203, 247, 255);
			break;
		
		case 24:
			func_110(&Var0, 205, 0, 0, 255);
			break;
		
		case 28:
			func_110(&Var0, 244, 11, 225, 255);
			break;
		
		case 23:
			func_110(&Var0, 94, 250, 255, 255);
			break;
		
		case 26:
			func_110(&Var0, 205, 0, 0, 255);
			break;
		
		case 27:
			func_110(&Var0, 107, 150, 255, 255);
			break;
	}
	return Var0;
}

struct<2> func_197(int iParam0)
{
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_152.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return func_198();
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return func_88(0.085417f, 0.092593f);
		}
		return func_88(0.066667f, 0.118519f);
	}
	return func_88(Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_22, Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_22.f_1);
}

struct<2> func_198()
{
	switch (func_192())
	{
		case 8:
			return func_88(0f, 0f);
		
		case 9:
			return func_88(0f, 0f);
		
		case 10:
			return func_88(0.177083f, 0.211111f);
		
		case 11:
			return func_88(0f, 0f);
		
		case 12:
			return func_88(0f, 0f);
		
		default:
	}
	return func_88(0f, 0f);
}

var func_199(int iParam0)
{
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_152.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return Local_152.f_2895;
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5 || Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 6)
	{
		return "MpInvPersCommon";
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		return "MPInvPersCommon";
	}
	return Local_152.f_2895;
}

int func_200(int iParam0)
{
	if (Local_152.f_1801[iParam0 /*14*/].f_7 == 0 && Local_152.f_1801[iParam0 /*14*/].f_1 > func_202(iParam0))
	{
		return 0;
	}
	if (func_201(Local_152.f_1801[iParam0 /*14*/].f_3, func_197(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_201(struct<2> Param0, struct<2> Param1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = (Param0 - (Param1 / 2f));
	if (fVar0 > (1f - 0.15625f))
	{
		return 1;
	}
	fVar1 = (Param0 + (Param1 / 2f));
	if (fVar1 < 0.15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param1.f_1 / 2f));
	if (fVar2 > (1f - 0.06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param1.f_1 / 2f));
	if (fVar3 < (0f + 0.06944444f))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	if (Local_152.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			return 3;
		}
		return 6;
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_152.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		return 4;
	}
	switch (Local_152.f_1801[iParam0 /*14*/].f_10)
	{
		case 1:
			return Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_27;
		
		case 0:
		case 2:
			return Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_25;
		
		default:
	}
	return 0;
}

void func_203()
{
	int iVar0;
	float fVar1;
	struct<2> Var2;
	struct<2> Var3;
	
	func_166(&(Local_152.f_749));
	iVar0 = 0;
	while (iVar0 <= (Local_152.f_725 - 1))
	{
		fVar1 = (Local_152.f_726 * IntToFloat(iVar0));
		func_83(Local_152.f_2895, Local_152.f_724, (Local_152.f_2340 + fVar1), (Local_152.f_728 + 0f), Local_152.f_726, Local_152.f_726.f_1, 0f, Local_152.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_152.f_730 - 1))
	{
		fVar1 = (Local_152.f_731 * IntToFloat(iVar0));
		func_83(Local_152.f_2895, Local_152.f_729, (Local_152.f_2340.f_1 + fVar1), (Local_152.f_733 + 0f), Local_152.f_731, Local_152.f_731.f_1, 0f, Local_152.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_152.f_735 - 1))
	{
		fVar1 = (Local_152.f_736 * IntToFloat(iVar0));
		func_83(Local_152.f_2895, Local_152.f_734, (Local_152.f_2340.f_2 + fVar1), (Local_152.f_738 + 0f), Local_152.f_736, Local_152.f_736.f_1, 0f, Local_152.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_152.f_740 - 1))
	{
		fVar1 = (Local_152.f_741 * IntToFloat(iVar0));
		func_83(Local_152.f_2895, Local_152.f_739, (Local_152.f_2340.f_3 + fVar1), (Local_152.f_743 + 0f), Local_152.f_741, Local_152.f_741.f_1, 0f, Local_152.f_1765);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_152.f_745 - 1))
	{
		if (Local_152.f_2340.f_12[iVar0] == 1)
		{
			Var2 = { Local_152.f_753[func_192() /*28*/].f_22 };
			if (func_201(func_88(Local_152.f_2340.f_4[iVar0], Local_152.f_748), Var2))
			{
			}
			else
			{
				func_83(Local_152.f_2895, Local_152.f_753[func_192() /*28*/].f_24, Local_152.f_2340.f_4[iVar0], Local_152.f_753[func_192() /*28*/].f_2, Var2, Var2.f_1, 0f, Local_152.f_1765);
				Jump @720; //curOff = 499
				if (Local_152.f_2340.f_12[iVar0] == 2)
				{
					Var3 = { Local_152.f_753[func_204() /*28*/].f_22 };
					if (func_201(func_88(Local_152.f_2340.f_4[iVar0], Local_152.f_748), Var3))
					{
					}
					else
					{
						func_83(Local_152.f_2895, Local_152.f_753[func_204() /*28*/].f_24, Local_152.f_2340.f_4[iVar0], Local_152.f_753[func_204() /*28*/].f_2, Var3, Var3.f_1, 0f, Local_152.f_1765);
						Jump @720; //curOff = 630
						if (func_201(func_88(Local_152.f_2340.f_4[iVar0], Local_152.f_748), Local_152.f_746))
						{
						}
						else
						{
							func_83(Local_152.f_2895, Local_152.f_744, Local_152.f_2340.f_4[iVar0], Local_152.f_748, Local_152.f_746, Local_152.f_746.f_1, 0f, Local_152.f_1765);
						}
					}
					iVar0++;
				}

int func_204()
{
	return (13 + Local_152.f_2871);
}

void func_205()
{
	char cVar0[16];
	
	if (Local_152.f_2901 == -2147483647)
	{
		return;
	}
	if (unk_0xACC32B78196FBC2A(Local_152.f_2903))
	{
		return;
	}
	if (unk_0x0A89FDFA763DCAED() > Local_152.f_2901)
	{
		func_9();
		return;
	}
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 2);
	StringCopy(&cVar0, Local_152.f_2903, 16);
	if (Local_152.f_2902 == -1)
	{
		if (unk_0x3A76A0944BE2C291(2))
		{
			StringConCat(&cVar0, "_PC", 16);
		}
	}
	else
	{
		if (func_65(&cVar0))
		{
			return;
		}
		func_206(&cVar0, Local_152.f_2902);
		return;
	}
	if (func_65(&cVar0))
	{
		return;
	}
	func_63(&cVar0);
}

void func_206(char[4] cParam0, var uParam1)
{
	Local_152.f_2947 = unk_0x2E87280918B16506(cParam0);
	func_207(cParam0, uParam1, -1);
}

void func_207(var uParam0, int iParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(uParam0);
	unk_0x2AE954BA77A66307(uParam1);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam2);
}

void func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_45();
	iVar1 = (iVar0 - Local_152.f_2725);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = round((unk_0x51109C28352EC9A3() * 1000f));
	iVar3 = (iVar2 * func_210(Local_152.f_2870 == 9, 12, 4));
	if (Local_152.f_2870 == 9 && !unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 6))
	{
		iVar3 *= 5;
	}
	if (iVar3 > iVar1)
	{
		iVar3 = iVar1;
	}
	Local_152.f_2725 = (Local_152.f_2725 + iVar3);
	func_209();
}

void func_209()
{
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 5))
	{
		return;
	}
	if (Local_152.f_2725 < Global_262145.f_26911)
	{
		return;
	}
	func_127(252, 1, -1, 1);
	func_126(27188, 1, -1);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 5);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 11);
	func_125();
	func_124("IAP_CH_4", Global_262145.f_26911, 7500);
}

int func_210(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_211()
{
	if (!func_106())
	{
		return;
	}
	Local_152.f_2896 = (Local_152.f_2896 + ((-0.25f / 4f) * timestep()));
	Local_152.f_2896.f_1 = (Local_152.f_2896.f_1 + ((0.325926f / 4f) * timestep()));
	if (Local_152.f_2896 < (0.15625f - 0.25f) || Local_152.f_2896.f_1 > (1f + 0.325926f))
	{
		Local_152.f_2896 = (Local_152.f_2896 + 0.25f);
		Local_152.f_2896.f_1 = (Local_152.f_2896.f_1 - 0.325926f);
	}
}

void func_212()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (unk_0x0A89FDFA763DCAED() > Local_152.f_2812[iVar0 /*4*/] + 1000)
		{
		}
		else if (Local_152.f_2870 == 7)
		{
			Local_152.f_2812[iVar0 /*4*/].f_2 = func_134(Local_152.f_2812[iVar0 /*4*/].f_2, -0.15f);
		}
		iVar0++;
	}
}

void func_213()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_152.f_2730[iVar0 /*4*/].f_1 <= -1)
		{
		}
		else
		{
			Local_152.f_2730[iVar0 /*4*/].f_2 = func_134(Local_152.f_2730[iVar0 /*4*/].f_2, -0.15f);
		}
		iVar0++;
	}
}

void func_214()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var3;
	struct<4> Var4;
	float fVar5;
	struct<2> Var6;
	float fVar7;
	
	Var4.f_3 = 255;
	func_110(&Var4, 255, 255, 255, 255);
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_152.f_2368.f_3[iVar0 /*14*/] == 5)
		{
			if (Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				Local_152.f_2368.f_3[iVar0 /*14*/].f_12 = (Local_152.f_2368.f_3[iVar0 /*14*/].f_12 + Local_152.f_2875);
				if (Local_152.f_2368.f_3[iVar0 /*14*/].f_12 >= Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1)
				{
					Local_152.f_2368.f_3[iVar0 /*14*/].f_12 = 0;
				}
			}
		}
		else if (Local_152.f_2368.f_3[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_2368.f_3[iVar0 /*14*/].f_11 + Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2))
		{
			if (Local_152.f_2368.f_3[iVar0 /*14*/] == 4)
			{
				Local_152.f_2368.f_3[iVar0 /*14*/].f_11 = -2147483647;
				if (!func_201(Local_152.f_2368.f_3[iVar0 /*14*/].f_5, func_88(0.0001f, 0.0001f)))
				{
					func_224(func_226(Local_152.f_2368.f_3[iVar0 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_152.f_2368.f_3[iVar0 /*14*/].f_5);
					func_223(Local_152.f_2368.f_3[iVar0 /*14*/].f_5, 0);
				}
			}
		}
		else
		{
			fVar5 = (to_float((unk_0x0A89FDFA763DCAED() - Local_152.f_2368.f_3[iVar0 /*14*/].f_11)) / IntToFloat(Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_2));
			Local_152.f_2368.f_3[iVar0 /*14*/].f_7 = { Local_152.f_2368.f_3[iVar0 /*14*/].f_5 };
			if (Local_152.f_2368.f_3[iVar0 /*14*/] == 4)
			{
				iVar1 = 0;
				while (iVar1 <= 13)
				{
					if (Local_152.f_1801[iVar1 /*14*/] == -1)
					{
					}
					else if ((((Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 5 || Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 3) || Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 4) || Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 6) || Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/] == 8)
					{
					}
					else if (Local_152.f_1801[iVar1 /*14*/].f_7 == 0)
					{
					}
					else if (func_201(Local_152.f_1801[iVar1 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iVar1 /*14*/] /*28*/].f_22))
					{
					}
					else
					{
						Var6 = { Local_152.f_1801[iVar1 /*14*/].f_3 };
						if (func_222(Var6, Local_152.f_2368.f_3[iVar0 /*14*/].f_5) < pow(0.35f, 2f))
						{
							Local_152.f_2368.f_3[iVar0 /*14*/].f_3 = { Var6 };
						}
						else
						{
							iVar1++;
						}
						Var3 = { func_189(Local_152.f_2368.f_3[iVar0 /*14*/].f_3) };
						Var2 = { func_189(Local_152.f_2368.f_3[iVar0 /*14*/].f_5) };
						Local_152.f_2368.f_3[iVar0 /*14*/].f_10 = unk_0xC529D13129C03CF4((Var3.f_1 - Var2.f_1), (Var3 - Var2));
						Local_152.f_2368.f_3[iVar0 /*14*/].f_10 = (Local_152.f_2368.f_3[iVar0 /*14*/].f_10 + (sin(to_float((unk_0x0A89FDFA763DCAED() - Local_152.f_2368.f_3[iVar0 /*14*/].f_11))) * 30f));
						if (Local_152.f_2368.f_3[iVar0 /*14*/].f_9 > Local_152.f_2368.f_3[iVar0 /*14*/].f_10)
						{
							Local_152.f_2368.f_3[iVar0 /*14*/].f_9 = func_160((Local_152.f_2368.f_3[iVar0 /*14*/].f_9 - (180f * timestep())), Local_152.f_2368.f_3[iVar0 /*14*/].f_10, Local_152.f_2368.f_3[iVar0 /*14*/].f_9);
						}
						else if (Local_152.f_2368.f_3[iVar0 /*14*/].f_10 > Local_152.f_2368.f_3[iVar0 /*14*/].f_9)
						{
							Local_152.f_2368.f_3[iVar0 /*14*/].f_9 = func_160((Local_152.f_2368.f_3[iVar0 /*14*/].f_9 + (180f * timestep())), Local_152.f_2368.f_3[iVar0 /*14*/].f_9, Local_152.f_2368.f_3[iVar0 /*14*/].f_10);
						}
						Var2 = { func_87(func_179(Var2, func_145(Var2, func_88(1920f, 0f)), Local_152.f_2368.f_3[iVar0 /*14*/].f_9)) };
						Local_152.f_2368.f_3[iVar0 /*14*/].f_5 = { func_221(Local_152.f_2368.f_3[iVar0 /*14*/].f_5, Var2, 0.375f) };
						Jump @1218; //curOff = 1164
						Local_152.f_2368.f_3[iVar0 /*14*/].f_5 = { func_161(Local_152.f_2368.f_3[iVar0 /*14*/].f_1, Local_152.f_2368.f_3[iVar0 /*14*/].f_3, fVar5) };
						if (Local_152.f_2368.f_3[iVar0 /*14*/].f_3.f_1 >= Local_152.f_2368.f_3[iVar0 /*14*/].f_1.f_1)
						{
							fVar7 = func_215(Local_152.f_2368.f_3[iVar0 /*14*/].f_5, 0);
							if (Local_152.f_2368.f_3[iVar0 /*14*/].f_5.f_1 > fVar7)
							{
								Local_152.f_2368.f_3[iVar0 /*14*/].f_11 = -2147483647;
								if (!func_201(Local_152.f_2368.f_3[iVar0 /*14*/].f_5, func_88(0.0001f, 0.0001f)))
								{
									func_224(func_226(Local_152.f_2368.f_3[iVar0 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_152.f_2368.f_3[iVar0 /*14*/].f_5);
									func_223(Local_152.f_2368.f_3[iVar0 /*14*/].f_5, 0);
								}
							}
						}
						if (Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1 > 0)
						{
							Local_152.f_2368.f_3[iVar0 /*14*/].f_12 = (Local_152.f_2368.f_3[iVar0 /*14*/].f_12 + Local_152.f_2875);
							if (Local_152.f_2368.f_3[iVar0 /*14*/].f_12 >= Local_152.f_1734[Local_152.f_2368.f_3[iVar0 /*14*/] /*5*/].f_1)
							{
								Local_152.f_2368.f_3[iVar0 /*14*/].f_12 = 0;
							}
						}
						iVar0++;
					}

float func_215(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	
	fVar0 = (Local_152.f_2340.f_4[0] - (func_219(0) / 2f));
	iVar1 = 0;
	while (iVar1 <= (Local_152.f_745 - 1))
	{
		fVar0 = (fVar0 + func_219(iVar1));
		if (fParam0 < fVar0)
		{
			if (Local_152.f_2340.f_12[iVar1] == 1 && (iParam1 || Local_152.f_1801[Local_152.f_2340.f_20[iVar1] /*14*/].f_11 & 1 == 0))
			{
				if (fParam0 > ((fVar0 - func_218()) + func_217()) && fParam0 < (fVar0 - func_216()))
				{
					return 1.2f;
				}
			}
			if (Local_152.f_2340.f_12[iVar1] == 2)
			{
				return (((1f - 0.06944444f) - Local_152.f_753[func_204() /*28*/].f_22.f_1) + 0.03240715f);
			}
			return Local_152.f_3;
		}
		iVar1++;
	}
	return Local_152.f_3;
}

float func_216()
{
	switch (func_192())
	{
		case 8:
			return 0.09635416f;
		
		case 9:
			return 0.0390625f;
		
		case 10:
			return 0.0765625f;
		
		case 11:
			return 0.05833333f;
		
		case 12:
			return 0.053125f;
		
		default:
	}
	return 0f;
}

float func_217()
{
	switch (func_192())
	{
		case 8:
			return 0.109375f;
		
		case 9:
			return 0.03645833f;
		
		case 10:
			return 0.06822917f;
		
		case 11:
			return 0.03072917f;
		
		case 12:
			return 0.04322917f;
		
		default:
	}
	return 0f;
}

float func_218()
{
	return Local_152.f_753[func_192() /*28*/].f_22;
}

float func_219(int iParam0)
{
	if (Local_152.f_2340.f_12[iParam0] == 1)
	{
		return func_218();
	}
	if (Local_152.f_2340.f_12[iParam0] == 2)
	{
		return func_220();
	}
	return Local_152.f_746;
}

var func_220()
{
	return Local_152.f_753[func_204() /*28*/].f_22;
}

struct<2> func_221(struct<2> Param0, struct<2> Param1, float fParam2)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = (fParam2 * 1920f);
	fVar1 = (0f + (fVar1 * timestep()));
	fVar2 = (fParam2 * 1080f);
	fVar2 = (0f + (fVar2 * timestep()));
	Param0 = { func_189(Param0) };
	Param1 = { func_189(Param1) };
	fVar3 = sqrt((pow((Param1 - Param0), 2f) + pow((Param1.f_1 - Param0.f_1), 2f)));
	fVar4 = (Param1 - Param0);
	fVar5 = (Param1.f_1 - Param0.f_1);
	if (fVar3 != 0f)
	{
		fVar4 = (fVar4 / fVar3);
		fVar5 = (fVar5 / fVar3);
	}
	Var0 = (Param0 + (fVar1 * fVar4));
	Var0.f_1 = (Param0.f_1 + (fVar2 * fVar5));
	return func_87(Var0);
}

float func_222(struct<2> Param0, struct<2> Param1)
{
	return (pow((Param1 - Param0), 2f) + pow((Param1.f_1 - Param0.f_1), 2f));
}

void func_223(struct<2> Param0, int iParam1)
{
	Local_152.f_2730[Local_152.f_2811 /*4*/].f_1 = 0;
	Local_152.f_2730[Local_152.f_2811 /*4*/].f_2 = { Param0 };
	Local_152.f_2730[Local_152.f_2811 /*4*/] = iParam1;
	Local_152.f_2811++;
	if (Local_152.f_2811 >= 20)
	{
		Local_152.f_2811 = 0;
	}
}

void func_224(char* sParam0, char* sParam1, struct<2> Param2)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_225(Param2);
	if (fVar0 > 1f || fVar0 < 0f)
	{
	}
	iVar1 = unk_0xA9ADCC8D104AA552();
	unk_0x91DFC8F68F6D9B05(iVar1, sParam0, sParam1, 0);
	unk_0x57973ADDF2BFAA90(iVar1, "Screen_Position", fVar0);
	unk_0xCDBCC1BC1184B002(iVar1);
}

float func_225(float fParam0, var uParam1)
{
	return func_160(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

char* func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Tank_Weapon_Main_Cannon_Hit";
		
		case 3:
			return "Tank_Weapon_Flamethrower_Fire_Hit";
		
		case 4:
			return "Tank_Weapon_Rocket_Hit";
		
		default:
	}
	return "";
}

void func_227()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<2> Var4;
	float fVar5;
	
	iVar0 = unk_0x0A89FDFA763DCAED();
	Var4 = { Local_152.f_2368.f_321 };
	fVar5 = func_215((Local_152.f_2368.f_321 + 0.011458f), 0);
	func_230();
	switch (Local_152.f_2368)
	{
		case 0:
			StringCopy(&(Local_152.f_2368.f_303), "tank_drive", 64);
			Local_152.f_2368.f_319 = (Local_152.f_2368.f_319 + Local_152.f_2875);
			if (Local_152.f_2368.f_319 >= 4)
			{
				Local_152.f_2368.f_319 = 0;
			}
			if (Local_152.f_2368.f_321.f_1 < (-0.061111f + fVar5) && (Local_152.f_2368.f_337 == -2147483647 || (iVar0 - Local_152.f_2368.f_337) > round((500f * 1.5f))))
			{
				func_103(2);
				Local_152.f_2368.f_327 = iVar0;
			}
			else if ((Local_152.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar5)
			{
				func_229("Tank_Collision", &(Local_152.f_2368.f_343));
				Local_152.f_2368.f_330 = (Local_152.f_2368.f_330 - 1);
				Local_152.f_2368.f_331 = 0;
				if (Local_152.f_2368.f_2 != 0)
				{
					func_104(0);
				}
				Local_152.f_2368.f_319 = 0;
				func_103(3);
				func_229("Tank_Destroyed", &(Local_152.f_2368.f_343));
				if (Local_152.f_2368.f_330 >= 0)
				{
					func_51("Frontend_Player_Death");
				}
				Local_152.f_2368.f_327 = iVar0;
				return;
			}
			break;
		
		case 1:
			StringCopy(&(Local_152.f_2368.f_303), "tank_jump", 64);
			Local_152.f_2368.f_319 = (Local_152.f_2368.f_319 + Local_152.f_2875);
			if (Local_152.f_2368.f_319 >= 4)
			{
				Local_152.f_2368.f_319 = 0;
			}
			fVar1 = (to_float((iVar0 - Local_152.f_2368.f_327)) / 600f);
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
				func_103(2);
				Local_152.f_2368.f_327 = iVar0;
			}
			Local_152.f_2368.f_321.f_1 = func_156(Local_152.f_2368.f_328, Local_152.f_2368.f_329, fVar1, 2);
			if ((Local_152.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar5)
			{
				func_229("Tank_Collision", &(Local_152.f_2368.f_343));
				Local_152.f_2368.f_330 = (Local_152.f_2368.f_330 - 1);
				Local_152.f_2368.f_331 = 0;
				if (Local_152.f_2368.f_2 != 0)
				{
					func_104(0);
				}
				Local_152.f_2368.f_319 = 0;
				func_103(3);
				func_229("Tank_Destroyed", &(Local_152.f_2368.f_343));
				if (Local_152.f_2368.f_330 >= 0)
				{
					func_51("Frontend_Player_Death");
				}
				Local_152.f_2368.f_327 = iVar0;
				return;
			}
			break;
		
		case 2:
			StringCopy(&(Local_152.f_2368.f_303), "tank_jump", 64);
			Local_152.f_2368.f_319 = (Local_152.f_2368.f_319 + Local_152.f_2875);
			if (Local_152.f_2368.f_319 >= 4)
			{
				Local_152.f_2368.f_319 = 0;
			}
			if ((Local_152.f_2368.f_321.f_1 - (-0.061111f / 2f)) > fVar5)
			{
				func_229("Tank_Collision", &(Local_152.f_2368.f_343));
				Local_152.f_2368.f_330 = (Local_152.f_2368.f_330 - 1);
				Local_152.f_2368.f_331 = 0;
				if (Local_152.f_2368.f_2 != 0)
				{
					func_104(0);
				}
				Local_152.f_2368.f_319 = 0;
				func_103(3);
				func_229("Tank_Destroyed", &(Local_152.f_2368.f_343));
				if (Local_152.f_2368.f_330 >= 0)
				{
					func_51("Frontend_Player_Death");
				}
				Local_152.f_2368.f_327 = iVar0;
				return;
			}
			if (Local_152.f_2368.f_321.f_1 > Local_152.f_3)
			{
				Local_152.f_2368.f_321 = func_134(Local_152.f_2368.f_321, -0.15f);
			}
			Local_152.f_2368.f_321.f_1 = (Local_152.f_2368.f_321.f_1 + (func_156(0f, 0.5f, (to_float((iVar0 - Local_152.f_2368.f_327)) / 500f), 1) * timestep()));
			if (Local_152.f_2368.f_321.f_1 > (-0.061111f + fVar5))
			{
				Local_152.f_2368.f_321.f_1 = (-0.061111f + fVar5);
				if (Local_152.f_2368.f_321.f_1 > Local_152.f_3)
				{
					func_229("Tank_Collision", &(Local_152.f_2368.f_343));
					Local_152.f_2368.f_330 = (Local_152.f_2368.f_330 - 1);
					Local_152.f_2368.f_331 = 0;
					if (Local_152.f_2368.f_2 != 0)
					{
						func_104(0);
					}
					Local_152.f_2368.f_319 = 0;
					func_103(3);
					func_229("Tank_Destroyed", &(Local_152.f_2368.f_343));
					if (Local_152.f_2368.f_330 >= 0)
					{
						func_51("Frontend_Player_Death");
					}
					Local_152.f_2368.f_327 = iVar0;
					return;
				}
				else
				{
					func_103(0);
					func_229("Tank_Jump_Land", &(Local_152.f_2368.f_343));
					Local_152.f_2368.f_327 = iVar0;
				}
			}
			break;
		
		case 3:
			Local_152.f_2368.f_319 = (Local_152.f_2368.f_319 + Local_152.f_2875);
			if (Local_152.f_2870 == 7)
			{
				Local_152.f_2368.f_321 = func_134(Local_152.f_2368.f_321, -0.15f);
			}
			if (Local_152.f_2368.f_321.f_1 < (-0.061111f + fVar5))
			{
				Local_152.f_2368.f_321.f_1 = (Local_152.f_2368.f_321.f_1 + (func_156(0f, 0.5f, (to_float((iVar0 - Local_152.f_2368.f_327)) / 500f), 1) * timestep()));
				if (Local_152.f_2368.f_321.f_1 >= (-0.061111f + fVar5))
				{
					Local_152.f_2368.f_321.f_1 = (-0.061111f + fVar5);
				}
			}
			if (Local_152.f_2368.f_319 > 16 && Local_152.f_2870 == 7)
			{
				func_228();
			}
			break;
		
		case 4:
			fVar1 = (to_float((iVar0 - Local_152.f_2368.f_337)) / 500f);
			fVar2 = func_215(((Local_152.f_2368.f_321 + 0.011458f) + (((0.15f * Local_152.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
			if (Local_152.f_2368.f_321.f_1 < 0f)
			{
				if (fVar2 > Local_152.f_3)
				{
					Local_152.f_2368.f_337 = iVar0;
					Local_152.f_2368.f_321.f_1 = -0.2f;
					return;
				}
				else
				{
					fVar3 = func_215(((Local_152.f_2368.f_321 + 0.104167f) + (((0.15f * Local_152.f_2873) / 1000f) * (500f * (1f - fVar1)))), 1);
					if (!func_187((fVar3 - fVar2), -0.0001f, 0.0001f))
					{
						Local_152.f_2368.f_337 = iVar0;
						Local_152.f_2368.f_321.f_1 = -0.2f;
						return;
					}
				}
			}
			StringCopy(&(Local_152.f_2368.f_303), "tank_jump", 64);
			Local_152.f_2368.f_319 = (Local_152.f_2368.f_319 + Local_152.f_2875);
			if (Local_152.f_2368.f_319 >= 4)
			{
				Local_152.f_2368.f_319 = 0;
			}
			if (fVar1 >= 1f)
			{
				fVar1 = 1f;
				Local_152.f_2368.f_319 = 0;
				func_229("Tank_Jump_Land", &(Local_152.f_2368.f_343));
				func_103(0);
				Local_152.f_2368.f_321.f_1 = (-0.061111f + fVar5);
			}
			else
			{
				Local_152.f_2368.f_321.f_1 = func_156(-0.2f, (-0.061111f + fVar2), fVar1, 1);
			}
			break;
	}
	if (Local_152.f_2368.f_331 == 1)
	{
		if (iVar0 > Local_152.f_2368.f_336 + 150)
		{
			Var4 = (Var4 + unk_0xC4EAB25A108C2429((-0.104167f / 2f), (0.104167f / 2f)));
			Var4.f_1 = (Var4.f_1 + unk_0xC4EAB25A108C2429((-0.12963f / 2f), (0.12963f / 2f)));
			func_223(Var4, 1);
			Local_152.f_2368.f_336 = iVar0;
		}
	}
}

void func_228()
{
	if (Local_152.f_2368.f_330 < 0)
	{
		return;
	}
	Local_152.f_2368.f_321 = 0.3f;
	Local_152.f_2368.f_321.f_1 = -0.2f;
	Local_152.f_2368.f_337 = unk_0x0A89FDFA763DCAED();
	Local_152.f_2368.f_331 = 20;
	Local_152.f_2368.f_332 = 0;
	Local_152.f_2368.f_333 = 0;
	Local_152.f_2368.f_325 = 0;
	Local_152.f_2368.f_319 = 0;
	func_103(4);
}

void func_229(char* sParam0, var uParam1)
{
	float fVar0;
	
	if (*uParam1 == -1)
	{
		*uParam1 = unk_0xA9ADCC8D104AA552();
	}
	fVar0 = func_225(Local_152.f_2368.f_321);
	unk_0x91DFC8F68F6D9B05(*uParam1, sParam0, "dlc_vw_am_ip_tank_sounds", 0);
	unk_0x57973ADDF2BFAA90(*uParam1, "Screen_Position", fVar0);
}

void func_230()
{
	var uVar0;
	bool bVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Local_152.f_2368.f_339 == -1)
	{
		Local_152.f_2368.f_339 = unk_0xA9ADCC8D104AA552();
	}
	uVar0 = func_201(Local_152.f_2368.f_321, func_88(0.166667f, 0.2f));
	bVar1 = Local_152.f_2368 == 3;
	if (!unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_339) && (uVar0 || bVar1))
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_339);
		if (Local_152.f_2368.f_340 > -1 && !unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_340))
		{
			unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_340);
		}
		return;
	}
	if (uVar0 || bVar1)
	{
		return;
	}
	if (unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_339))
	{
		unk_0x91DFC8F68F6D9B05(Local_152.f_2368.f_339, "Tank_Engine_Loop", "dlc_vw_am_ip_tank_sounds", 0);
	}
	fVar2 = func_225(Local_152.f_2368.f_321);
	unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_339, "Screen_Position", fVar2);
	uVar3 = func_144(func_174(), 1f, 0f);
	unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_339, "IsJumping", uVar3);
	fVar4 = (to_float(Local_152.f_2368.f_331) / to_float(20));
	unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_339, "DamageLevel", fVar4);
	if (Local_152.f_2368.f_331 == 1)
	{
		if (Local_152.f_2368.f_340 == -1)
		{
			Local_152.f_2368.f_340 = unk_0xA9ADCC8D104AA552();
		}
		if (unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_340))
		{
			unk_0x91DFC8F68F6D9B05(Local_152.f_2368.f_340, "Tank_Critical_Damage_Loop", "dlc_vw_am_ip_tank_sounds", 0);
		}
		unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_340, "Screen_Position", fVar2);
	}
	else if (Local_152.f_2368.f_340 > -1 && !unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_340))
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_340);
	}
}

void func_231()
{
	switch (Local_152.f_2368.f_1)
	{
		case 0:
			if (Local_152.f_2368.f_320 != 0)
			{
				Local_152.f_2368.f_320 = 0;
			}
			break;
		
		case 1:
			Local_152.f_2368.f_320 = (Local_152.f_2368.f_320 + Local_152.f_2875);
			if (Local_152.f_2368.f_320 >= 4)
			{
				Local_152.f_2368.f_320 = 0;
				func_102(0);
			}
			break;
	}
}

void func_232()
{
	int iVar0;
	
	func_259();
	iVar0 = 0;
	while (iVar0 <= 13)
	{
		if (Local_152.f_1801[iVar0 /*14*/] == -1)
		{
		}
		else
		{
			func_250(iVar0);
			if (Local_152.f_1801[iVar0 /*14*/] == -1)
			{
			}
			else if (func_169())
			{
				func_244(iVar0);
			}
			else
			{
				func_233(iVar0);
			}
		}
		iVar0++;
	}
}

void func_233(int iParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	if (Local_152.f_2870 != 7)
	{
		return;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_7 <= 0)
	{
		return;
	}
	if (func_201(Local_152.f_1801[iParam0 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_22))
	{
		return;
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_14 == 0)
	{
		return;
	}
	if (unk_0x0A89FDFA763DCAED() < (Local_152.f_1801[iParam0 /*14*/].f_9 + func_243(iParam0)))
	{
		return;
	}
	func_242(iParam0, &Var0, &Var1);
	if (func_201(Var0, func_88(0.0001f, 0.0001f)))
	{
		Local_152.f_1801[iParam0 /*14*/].f_9 = unk_0x0A89FDFA763DCAED();
		return;
	}
	Local_152.f_1998[Local_152.f_2209 /*14*/] = func_241(iParam0);
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_1 = { Var0 };
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_3 = { Var1 };
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_5 = { Var0 };
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_7 = { Var0 };
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_9 = func_240(iParam0);
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_11 = unk_0x0A89FDFA763DCAED();
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_13 = func_239(iParam0);
	Local_152.f_1998[Local_152.f_2209 /*14*/].f_12 = func_238(iParam0);
	Local_152.f_2209++;
	if (Local_152.f_2209 >= 15)
	{
		Local_152.f_2209 = 0;
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_27 > 0 && Local_152.f_2870 == 7)
	{
		Local_152.f_1801[iParam0 /*14*/].f_10 = 1;
		Local_152.f_1801[iParam0 /*14*/].f_1 = 0;
	}
	Local_152.f_1801[iParam0 /*14*/].f_9 = unk_0x0A89FDFA763DCAED();
	if (func_237(iParam0) && Local_152.f_1801[iParam0 /*14*/].f_12 > -1)
	{
		func_234(func_236(iParam0), func_235(iParam0), iParam0);
	}
}

void func_234(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	
	iVar0 = Local_152.f_1801[iParam2 /*14*/].f_12;
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = func_225(Local_152.f_1801[iParam2 /*14*/].f_3);
	unk_0x91DFC8F68F6D9B05(iVar0, sParam0, sParam1, 0);
	unk_0x57973ADDF2BFAA90(iVar0, "Screen_Position", fVar1);
}

char* func_235(int iParam0)
{
	switch (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 1:
		case 2:
		case 7:
			return "dlc_vw_am_ip_enemy_sounds";
		
		case 5:
			return "dlc_vw_am_ip_powerup_sounds";
		
		default:
	}
	return "";
}

char* func_236(int iParam0)
{
	switch (Local_152.f_1801[iParam0 /*14*/])
	{
		case 2:
			return "Enemy_Bear_Fire";
		
		case 0:
			return "Enemy_Camel_Fire";
		
		case 3:
			return "Enemy_Moose_Fire";
		
		case 1:
			return "Enemy_Panda_Fire";
		
		case 5:
			return "Enemy_Drone_Fire";
		
		case 4:
			return "Enemy_Jet_Bomb_Barrel_Drop";
		
		default:
	}
	return "";
}

int func_237(int iParam0)
{
	if (((((Local_152.f_1801[iParam0 /*14*/] == 2 || Local_152.f_1801[iParam0 /*14*/] == 0) || Local_152.f_1801[iParam0 /*14*/] == 3) || Local_152.f_1801[iParam0 /*14*/] == 1) || Local_152.f_1801[iParam0 /*14*/] == 5) || Local_152.f_1801[iParam0 /*14*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	switch (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 2:
			return -1;
		
		case 1:
			return 0;
		
		default:
	}
	return 2147483647;
}

var func_239(int iParam0)
{
	return Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_15;
}

float func_240(int iParam0)
{
	switch (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 1:
			return 0f;
		
		case 2:
			return -45f;
		
		default:
	}
	return 0f;
}

int func_241(int iParam0)
{
	switch (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 2:
			return 2;
		
		case 1:
			return 1;
		
		default:
	}
	return -1;
}

void func_242(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { func_189(func_88((Local_152.f_1801[iParam0 /*14*/].f_3 + Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_3), (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 + Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_3.f_1))) };
	switch (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
			*uParam2 = { func_179(*uParam1, func_145(*uParam1, func_189(func_88(1f, 0f))), -180f) };
			break;
		
		case 2:
			*uParam2 = { func_179(*uParam1, func_145(*uParam1, func_189(func_88(1f, 0f))), 135f) };
			break;
		
		case 1:
			*uParam2 = { func_179(*uParam1, func_145(*uParam1, func_189(func_88(1f, 0f))), 85f) };
			break;
	}
	*uParam1 = { func_87(*uParam1) };
	*uParam2 = { func_87(*uParam2) };
}

int func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_14;
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 1)
	{
		iVar0 = round((IntToFloat(iVar0) / Local_152.f_2873));
	}
	return iVar0;
}

void func_244(int iParam0)
{
	if (func_249(Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/]))
	{
		return;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_7 <= 0)
	{
		return;
	}
	if (!func_116(&(Local_152.f_2892), 650, 0))
	{
		Local_152.f_1801[iParam0 /*14*/].f_8 = unk_0x0A89FDFA763DCAED();
	}
	else
	{
		func_245(iParam0, -Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_17);
	}
}

void func_245(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_7 <= 0)
	{
		return;
	}
	Local_152.f_1801[iParam0 /*14*/].f_7 = func_151((Local_152.f_1801[iParam0 /*14*/].f_7 + iParam1), 0, Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_17);
	Local_152.f_1801[iParam0 /*14*/].f_8 = unk_0x0A89FDFA763DCAED();
	if (Local_152.f_1801[iParam0 /*14*/].f_7 > 0)
	{
		return;
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_16 > 0)
	{
		func_122(Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_16, 0, Local_152.f_1801[iParam0 /*14*/].f_3);
		if (func_248(iParam0))
		{
			Local_152.f_2712.f_5++;
		}
	}
	if (func_247(iParam0) && Local_152.f_1801[iParam0 /*14*/].f_12 != -1)
	{
		func_234(func_246(iParam0), func_235(iParam0), iParam0);
	}
}

char* func_246(int iParam0)
{
	switch (Local_152.f_1801[iParam0 /*14*/])
	{
		case 2:
			return "Enemy_Bear_Die";
		
		case 0:
			return "Enemy_Camel_Die";
		
		case 3:
			return "Enemy_Moose_Die";
		
		case 1:
			return "Enemy_Panda_Die";
		
		case 5:
			return "Enemy_Drone_Destroyed";
		
		case 4:
			return "Enemy_Jet_Explode";
		
		default:
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 7)
	{
		return "Enemy_Drone_Destroyed";
	}
	return "";
}

int func_247(int iParam0)
{
	if (((((Local_152.f_1801[iParam0 /*14*/] == 2 || Local_152.f_1801[iParam0 /*14*/] == 0) || Local_152.f_1801[iParam0 /*14*/] == 3) || Local_152.f_1801[iParam0 /*14*/] == 1) || Local_152.f_1801[iParam0 /*14*/] == 5) || Local_152.f_1801[iParam0 /*14*/] == 4)
	{
		return 1;
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 7)
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	if (((Local_152.f_1801[iParam0 /*14*/] == 0 || Local_152.f_1801[iParam0 /*14*/] == 2) || Local_152.f_1801[iParam0 /*14*/] == 1) || Local_152.f_1801[iParam0 /*14*/] == 3)
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)
{
	if ((((iParam0 == 8 || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_250(int iParam0)
{
	float fVar0;
	struct<2> Var1;
	float fVar2;
	struct<2> Var3;
	float fVar4;
	float fVar5;
	struct<2> Var6;
	float fVar7;
	
	if (Local_152.f_1801[iParam0 /*14*/].f_3 < (0.15625f - (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_22 / 2f)))
	{
		func_258(iParam0);
		return;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_12 == -1 || Local_152.f_1801[iParam0 /*14*/].f_13 == -1)
	{
		if (!func_201(Local_152.f_1801[iParam0 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_22))
		{
			Local_152.f_1801[iParam0 /*14*/].f_12 = unk_0xA9ADCC8D104AA552();
			Local_152.f_1801[iParam0 /*14*/].f_13 = unk_0xA9ADCC8D104AA552();
			if (func_257(iParam0))
			{
				func_234(func_256(iParam0), func_235(iParam0), iParam0);
			}
		}
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 3 && Local_152.f_1801[iParam0 /*14*/].f_11 & 1 != 0)
	{
		func_255(iParam0);
	}
	else
	{
		Local_152.f_1801[iParam0 /*14*/].f_1 = (Local_152.f_1801[iParam0 /*14*/].f_1 + Local_152.f_2875);
		if (Local_152.f_1801[iParam0 /*14*/].f_7 > 0)
		{
			switch (Local_152.f_1801[iParam0 /*14*/].f_10)
			{
				case 0:
				case 2:
					if (Local_152.f_1801[iParam0 /*14*/].f_1 >= Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_25)
					{
						Local_152.f_1801[iParam0 /*14*/].f_1 = 0;
					}
					break;
				
				case 1:
					if (Local_152.f_1801[iParam0 /*14*/].f_1 >= Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_27)
					{
						Local_152.f_1801[iParam0 /*14*/].f_1 = 0;
						Local_152.f_1801[iParam0 /*14*/].f_10 = 0;
					}
					break;
			}
		}
		else if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5)
		{
			if (Local_152.f_1801[iParam0 /*14*/].f_1 > 3)
			{
				func_258(iParam0);
				return;
			}
		}
		else if (Local_152.f_1801[iParam0 /*14*/].f_1 > 6)
		{
			func_258(iParam0);
			return;
		}
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 6)
	{
		func_252(iParam0);
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 2)
	{
		fVar2 = Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_1;
		if ((unk_0x0A89FDFA763DCAED() - Local_152.f_1801[iParam0 /*14*/].f_2) > 6500 || Local_152.f_2870 > 7)
		{
			if (Local_152.f_1801[iParam0 /*14*/].f_11 & 1 != 0 && Local_152.f_2870 == 7)
			{
				Var1 = { Local_152.f_2368.f_321 };
			}
			else
			{
				Var1 = -1f;
				Var1.f_1 = 0f;
			}
			fVar2 = (fVar2 * 1.25f);
		}
		else
		{
			Var1 = { func_88((Local_152.f_2368.f_321 + 0.125f), (Local_152.f_2368.f_321.f_1 + -0.225f)) };
			if (Var1.f_1 > (Local_152.f_3 + -0.225f))
			{
				Var1.f_1 = (Local_152.f_3 + -0.225f);
			}
		}
		Var3 = { func_189(func_145(Var1, func_88(0.15f, 0f))) };
		Var1 = { func_189(Var1) };
		fVar4 = sin(((Local_152.f_2872 * 2000f) + IntToFloat(iParam0 * 100)));
		fVar5 = (30f + (fVar4 * 15f));
		Var6 = { func_87(func_179(Var1, Var3, (180f + fVar5))) };
		Local_152.f_1801[iParam0 /*14*/].f_5 = { func_161(func_87(Var1), Var6, sin(((Local_152.f_2872 * 650f) + IntToFloat(iParam0 * 100)))) };
		Local_152.f_1801[iParam0 /*14*/].f_3 = { func_221(Local_152.f_1801[iParam0 /*14*/].f_3, Local_152.f_1801[iParam0 /*14*/].f_5, fVar2) };
		if (Local_152.f_1801[iParam0 /*14*/].f_13 > -1)
		{
			if (Local_152.f_1801[iParam0 /*14*/].f_7 > 0)
			{
				func_251("Enemy_Drone_Loop", iParam0);
			}
		}
		return;
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5 && Local_152.f_1801[iParam0 /*14*/].f_10 == 2)
	{
		fVar0 = func_215(Local_152.f_1801[iParam0 /*14*/].f_3, 0);
		if (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 < (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0))
		{
			Local_152.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 + (0.45f * timestep()));
			if (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 >= (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0))
			{
				Local_152.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_2 + fVar0);
				Local_152.f_1801[iParam0 /*14*/].f_10 = 0;
				if (Local_152.f_1801[iParam0 /*14*/].f_12 != -1)
				{
					func_234("Powerup_Crate_Land", func_235(iParam0), iParam0);
				}
			}
		}
	}
	if (Local_152.f_2870 != 7 && Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] != 1)
	{
		return;
	}
	if (Local_152.f_1801[iParam0 /*14*/] == 33)
	{
		fVar0 = func_215((Local_152.f_1801[iParam0 /*14*/].f_3 - (Local_152.f_753[33 /*28*/].f_22 / 2f)), 0);
		fVar7 = func_215((Local_152.f_1801[iParam0 /*14*/].f_3 + (Local_152.f_753[33 /*28*/].f_22 / 2f)), 0);
		if ((fVar0 > Local_152.f_3 || !func_187(fVar0, (fVar7 - 0.0001f), (fVar7 + 0.0001f))) || !func_187((fVar0 + Local_152.f_753[33 /*28*/].f_2), (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 - 0.0001f), (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 + 0.0001f)))
		{
			Local_152.f_1801[iParam0 /*14*/].f_3 = func_134(Local_152.f_1801[iParam0 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_1);
			return;
		}
	}
	Local_152.f_1801[iParam0 /*14*/].f_3 = func_134(Local_152.f_1801[iParam0 /*14*/].f_3, -Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_1);
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 1)
	{
		if (Local_152.f_1801[iParam0 /*14*/].f_7 > 0)
		{
			if (Local_152.f_1801[iParam0 /*14*/].f_13 > -1)
			{
				func_251("Enemy_Jet_Flyover", iParam0);
			}
		}
	}
}

void func_251(char* sParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	
	iVar0 = Local_152.f_1801[iParam1 /*14*/].f_13;
	if (iVar0 == -1)
	{
		return;
	}
	fVar1 = func_225(Local_152.f_1801[iParam1 /*14*/].f_3);
	if (unk_0x78D9ADD511FEAD8B(iVar0))
	{
		unk_0x91DFC8F68F6D9B05(iVar0, sParam0, "dlc_vw_am_ip_enemy_sounds", 0);
	}
	unk_0x57973ADDF2BFAA90(iVar0, "Screen_Position", fVar1);
}

void func_252(int iParam0)
{
	if (Local_152.f_1801[iParam0 /*14*/].f_8 != -2147483647)
	{
		Local_152.f_1801[iParam0 /*14*/].f_5.f_1 = (Local_152.f_1801[iParam0 /*14*/].f_5.f_1 + (0.177778f * timestep()));
		if (Local_152.f_1801[iParam0 /*14*/].f_5.f_1 > 0.040404f)
		{
			Local_152.f_1801[iParam0 /*14*/].f_5.f_1 = 0.040404f;
		}
		return;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_3 < Local_152.f_2368.f_321)
	{
		Local_152.f_1801[iParam0 /*14*/].f_8 = unk_0x0A89FDFA763DCAED();
		Local_152.f_1801[iParam0 /*14*/].f_5.f_1 = 0f;
		func_122(Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/].f_16, 2, Local_152.f_1801[iParam0 /*14*/].f_3);
		if (Local_152.f_1801[iParam0 /*14*/].f_11 & 1 == 0)
		{
			func_234("Tank_Raise_Flag", "dlc_vw_am_ip_tank_sounds", iParam0);
		}
		if (Local_152.f_2870 == 7 && Local_152.f_2212 < 1)
		{
			if (Local_152.f_2873 < 2f)
			{
				func_254("IAP_SPD_UP");
			}
			func_51("Frontend_Player_Oil_Collect");
			Local_152.f_2873 = (Local_152.f_2873 + func_253(Local_152.f_1801[iParam0 /*14*/]));
			if (Local_152.f_2873 > 2f)
			{
				Local_152.f_2873 = 2f;
			}
		}
	}
}

float func_253(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 0.02f;
		
		case 31:
		case 30:
			return 0.04f;
		
		case 32:
			return 0.06f;
		
		default:
	}
	return 0f;
}

void func_254(char* sParam0)
{
	Local_152.f_2368.f_286 = unk_0x0A89FDFA763DCAED();
	StringCopy(&(Local_152.f_2368.f_286.f_1), sParam0, 64);
}

void func_255(int iParam0)
{
	if (Local_152.f_1801[iParam0 /*14*/].f_7 == 0)
	{
		Local_152.f_1801[iParam0 /*14*/].f_1 = (Local_152.f_1801[iParam0 /*14*/].f_1 + round((IntToFloat(Local_152.f_2875) / 1.25f)));
		if (Local_152.f_1801[iParam0 /*14*/].f_1 >= 4)
		{
			Local_152.f_1801[iParam0 /*14*/].f_11 &= -2;
			Local_152.f_1801[iParam0 /*14*/].f_7 = 1;
		}
	}
	else if (Local_152.f_1801[iParam0 /*14*/].f_3 < (Local_152.f_2368.f_321 + func_218()))
	{
		Local_152.f_1801[iParam0 /*14*/].f_7 = 0;
		Local_152.f_1801[iParam0 /*14*/].f_1 = 0;
		if (Local_152.f_1801[iParam0 /*14*/].f_12 != -1)
		{
			func_234("Enemy_Hazard_Wall_Collapse", "dlc_vw_am_ip_enemy_sounds", iParam0);
		}
	}
}

char* func_256(int iParam0)
{
	switch (Local_152.f_1801[iParam0 /*14*/])
	{
		case 2:
			return "Enemy_Bear_Spawn";
		
		case 0:
			return "Enemy_Camel_Spawn";
		
		case 3:
			return "Enemy_Moose_Spawn";
		
		case 1:
			return "Enemy_Panda_Spawn";
		
		default:
	}
	if (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/] == 5)
	{
		return "Powerup_Crate_Parachute_Open";
	}
	return "";
}

int func_257(int iParam0)
{
	switch (Local_152.f_753[Local_152.f_1801[iParam0 /*14*/] /*28*/])
	{
		case 0:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_258(int iParam0)
{
	if (Local_152.f_1801[iParam0 /*14*/].f_12 > -1)
	{
		unk_0xCDBCC1BC1184B002(Local_152.f_1801[iParam0 /*14*/].f_12);
		Local_152.f_1801[iParam0 /*14*/].f_12 = -1;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_13 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_1801[iParam0 /*14*/].f_13);
		unk_0xCDBCC1BC1184B002(Local_152.f_1801[iParam0 /*14*/].f_13);
		Local_152.f_1801[iParam0 /*14*/].f_13 = -1;
	}
	Local_152.f_1801[iParam0 /*14*/] = -1;
}

void func_259()
{
	float fVar0;
	int iVar1;
	
	if (Local_152.f_2870 != 7)
	{
		return;
	}
	if (Local_152.f_2871 == 4 && !func_56(&(Local_152.f_2898), 33))
	{
		if (Local_152.f_2905 < 1)
		{
			func_267(&(Local_152.f_2898), 33);
		}
		else if (Local_152.f_2872 / 0.164583f) >= IntToFloat((Local_152.f_2905 - 1))
		{
			func_264(33, to_float(Local_152.f_2905));
		}
	}
	if (Local_152.f_2210 >= 225 || Local_152.f_4[Local_152.f_2210 /*3*/] == -1)
	{
		if (Local_152 == -1f)
		{
			return;
		}
		if (Local_152.f_2212 >= 14)
		{
			return;
		}
		iVar1 = Local_152.f_680[Local_152.f_2212 /*3*/];
		fVar0 = (Local_152 - Local_152.f_680[Local_152.f_2212 /*3*/].f_1);
		if (Local_152.f_2872 / 0.164583f) >= (Local_152 - 5f)
		{
			func_263(Local_152.f_2213, iVar1, Local_152.f_680[Local_152.f_2212 /*3*/].f_2, fVar0);
			Local_152.f_2212++;
			Local_152.f_2213++;
			if (Local_152.f_2213 >= 14)
			{
				Local_152.f_2213 = 0;
			}
		}
		return;
	}
	if (Local_152.f_2870 != 7)
	{
		return;
	}
	if (Local_152.f_4[Local_152.f_2210 /*3*/] == 34)
	{
		func_260();
		return;
	}
	iVar1 = Local_152.f_4[Local_152.f_2210 /*3*/];
	fVar0 = Local_152.f_4[Local_152.f_2210 /*3*/].f_1;
	if ((Local_152.f_2872 / 0.164583f) >= fVar0)
	{
		if (func_264(iVar1, fVar0))
		{
			Local_152.f_2210++;
		}
	}
}

void func_260()
{
	float fVar0;
	int iVar1;
	
	if (Local_152 != -1f && (Local_152.f_2872 / 0.164583f) >= (Local_152 - 12.5f))
	{
		Local_152.f_2210++;
		return;
	}
	fVar0 = ((Local_152.f_2872 / 0.164583f) / 1250f);
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	Local_152.f_2214 = func_156(0.25f, 0f, fVar0, 2);
	Local_152.f_2214.f_1 = func_156(3f, 1.75f, fVar0, 2);
	if ((Local_152.f_2872 / 0.164583f) > Local_152.f_2214.f_124)
	{
		iVar1 = Local_152.f_2214.f_125;
		if (iVar1 == -1)
		{
			if (Local_152.f_2214.f_124 < 0f)
			{
				unk_0xAB6792DA769477EF(Local_152.f_1);
			}
			else
			{
				unk_0xAB6792DA769477EF(floor((sin(Local_152.f_2214.f_124) * Local_152.f_2214.f_124)));
			}
			Local_152.f_2214.f_124 = (Local_152.f_2214.f_124 + func_262());
			Local_152.f_2214.f_125 = func_261();
			return;
		}
		if ((Local_152.f_2872 / 0.164583f) >= Local_152.f_2214.f_124)
		{
			if (func_264(Local_152.f_2214.f_125, Local_152.f_2214.f_124))
			{
				Local_152.f_2214.f_125 = -1;
			}
		}
	}
}

int func_261()
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		iVar2 = 0;
		while (iVar2 <= 9)
		{
			if ((Local_152.f_2214.f_124 - Local_152.f_2214.f_113[iVar1]) < Local_152.f_2214.f_2[iVar1 /*11*/][iVar2])
			{
				unk_0xCED9E32812D6C7C7(&uVar4, iVar2);
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 34)
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_152.f_753[iVar1 /*28*/].f_19, Local_152.f_2871))
		{
		}
		else if (!unk_0xE2D0C323A1AE5D85(uVar4, Local_152.f_753[iVar1 /*28*/].f_18))
		{
			iVar0[iVar3] = iVar1;
			iVar3++;
		}
		iVar1++;
	}
	if (iVar3 == 0)
	{
		Local_152.f_2214.f_124 = (Local_152.f_2214.f_124 + func_262());
		return -1;
	}
	iVar5 = iVar0[unk_0x5853B15F78E1A265(0, iVar3)];
	Local_152.f_2214.f_113[Local_152.f_753[iVar5 /*28*/].f_18] = Local_152.f_2214.f_124;
	return iVar5;
}

float func_262()
{
	return unk_0xC4EAB25A108C2429(Local_152.f_2214, Local_152.f_2214.f_1);
}

void func_263(int iParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	Local_152.f_1801[iParam0 /*14*/] = iParam1;
	Local_152.f_1801[iParam0 /*14*/].f_11 = iParam2;
	Local_152.f_1801[iParam0 /*14*/].f_1 = 0;
	if (Local_152.f_1801[iParam0 /*14*/].f_12 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_1801[iParam0 /*14*/].f_12);
		unk_0xCDBCC1BC1184B002(Local_152.f_1801[iParam0 /*14*/].f_12);
		Local_152.f_1801[iParam0 /*14*/].f_12 = -1;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_13 > -1)
	{
		unk_0xF889BDFCC181BA9F(Local_152.f_1801[iParam0 /*14*/].f_13);
		unk_0xCDBCC1BC1184B002(Local_152.f_1801[iParam0 /*14*/].f_13);
		Local_152.f_1801[iParam0 /*14*/].f_13 = -1;
	}
	Local_152.f_1801[iParam0 /*14*/].f_8 = -2147483647;
	Local_152.f_1801[iParam0 /*14*/].f_7 = Local_152.f_753[iParam1 /*28*/].f_17;
	fVar0 = ((fParam3 * 0.164583f) - Local_152.f_2872);
	fVar1 = (fVar0 * ((-0.15f * Local_152.f_2873) / (Local_152.f_753[iParam1 /*28*/].f_1 * Local_152.f_2873)));
	Local_152.f_1801[iParam0 /*14*/].f_3 = { func_88((1f - fVar1), Local_152.f_753[iParam1 /*28*/].f_2) };
	if (((Local_152.f_753[iParam1 /*28*/] != 3 && Local_152.f_753[iParam1 /*28*/] != 4) && Local_152.f_753[iParam1 /*28*/] != 1) && Local_152.f_753[iParam1 /*28*/] != 2)
	{
		Local_152.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 + func_215(Local_152.f_1801[iParam0 /*14*/].f_3, 0));
	}
	if (Local_152.f_753[iParam1 /*28*/] == 5)
	{
		fVar2 = (fVar0 * 0.45f);
		Local_152.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 - (0.9f - fVar2));
		Local_152.f_1801[iParam0 /*14*/].f_10 = 2;
	}
	if (Local_152.f_753[iParam1 /*28*/] == 3)
	{
		Local_152.f_2340.f_12[(Local_152.f_745 - 1)] = 1;
		Local_152.f_2340.f_20[(Local_152.f_745 - 1)] = iParam0;
		Local_152.f_1801[iParam0 /*14*/].f_3 = func_134((Local_152.f_2340.f_4[(Local_152.f_745 - 1)] + ((func_218() - Local_152.f_746) / 2f)), 0.15f);
	}
	else if (Local_152.f_753[iParam1 /*28*/] == 4)
	{
		Local_152.f_2340.f_12[(Local_152.f_745 - 1)] = 2;
		Local_152.f_2340.f_20[(Local_152.f_745 - 1)] = iParam0;
		Local_152.f_1801[iParam0 /*14*/].f_3 = func_134((Local_152.f_2340.f_4[(Local_152.f_745 - 1)] + ((func_218() - Local_152.f_746) / 2f)), 0.15f);
	}
	if (Local_152.f_753[iParam1 /*28*/] == 6)
	{
		if (iParam2 & 2 != 0)
		{
			Local_152.f_1801[iParam0 /*14*/].f_3.f_1 = (Local_152.f_1801[iParam0 /*14*/].f_3.f_1 - (Local_152.f_753[iParam1 /*28*/].f_22.f_1 / 2f));
		}
	}
	Local_152.f_1801[iParam0 /*14*/].f_2 = unk_0xE75390F3CA208D5E();
}

int func_264(int iParam0, float fParam1)
{
	int iVar0;
	
	if (Local_152.f_753[iParam0 /*28*/] == 3 || Local_152.f_753[iParam0 /*28*/] == 4)
	{
		if ((Local_152.f_2340.f_12[(Local_152.f_745 - 1)] == 1 || Local_152.f_2340.f_12[(Local_152.f_745 - 1)] == 2) || !func_201(func_88((Local_152.f_2340.f_4[(Local_152.f_745 - 1)] + ((func_218() - Local_152.f_746) / 2f)), Local_152.f_753[iParam0 /*28*/].f_2), Local_152.f_753[iParam0 /*28*/].f_22))
		{
			return 0;
		}
		else if (Local_152.f_2214.f_124 > -1f && iParam0 != 33)
		{
			Local_152.f_2214.f_124 = (Local_152.f_2214.f_124 + ((((Local_152.f_2872 / 0.164583f) - Local_152.f_2214.f_124) + ((Local_152.f_753[iParam0 /*28*/].f_22 / 2f) / 0.164583f)) + (((1f - Local_152.f_2340.f_4[(Local_152.f_745 - 1)]) + ((func_218() - Local_152.f_746) / 2f)) / -0.164583f)));
			Local_152.f_2214.f_113[Local_152.f_753[iParam0 /*28*/].f_18] = Local_152.f_2214.f_124;
		}
	}
	if (!func_169() || func_249(Local_152.f_753[iParam0 /*28*/]))
	{
		func_266(&iParam0);
		iVar0 = 0;
		if (Local_152.f_4[Local_152.f_2210 /*3*/] != 34)
		{
			iVar0 = Local_152.f_4[Local_152.f_2210 /*3*/].f_2;
		}
		func_263(Local_152.f_2211, iParam0, iVar0, fParam1);
		Local_152.f_2211++;
		if (Local_152.f_2211 >= 14)
		{
			Local_152.f_2211 = 0;
		}
	}
	if (!func_56(&(Local_152.f_2898), iParam0))
	{
		func_267(&(Local_152.f_2898), iParam0);
		if (!unk_0xACC32B78196FBC2A(Local_152.f_753[iParam0 /*28*/].f_20))
		{
			func_265(Local_152.f_753[iParam0 /*28*/].f_20, Local_152.f_753[iParam0 /*28*/].f_21);
		}
	}
	return 1;
}

void func_265(var uParam0, int iParam1)
{
	func_9();
	Local_152.f_2901 = (unk_0x0A89FDFA763DCAED() + iParam1);
	Local_152.f_2903 = uParam0;
	Local_152.f_2902 = -1;
}

void func_266(int iParam0)
{
	if (*iParam0 == 26 && Local_152.f_2368.f_2 != 0)
	{
		*iParam0 = 22;
	}
}

void func_267(var uParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(uParam0[func_55(iParam1)], func_54(iParam1));
}

void func_268()
{
	if (!func_119(&(Local_152.f_2888)))
	{
		func_118(&(Local_152.f_2888), 0, 0);
	}
	func_232();
	func_231();
	func_227();
	func_211();
	func_213();
	func_212();
	func_208();
	func_205();
	func_269();
	if (!func_120())
	{
		return;
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 8) && func_116(&(Local_152.f_2888), 5500, 0))
	{
		func_12(func_13(3));
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 8);
	}
	if (!func_116(&(Local_152.f_2888), 7500, 0))
	{
		return;
	}
	func_7(5);
	func_111();
}

void func_269()
{
	func_203();
	func_190();
	func_172();
	func_153();
	func_170();
	func_158();
	func_153();
	func_146();
	func_141();
	func_136(2);
	func_84();
	func_82();
}

void func_270()
{
	if (!func_119(&(Local_152.f_2884)))
	{
		func_118(&(Local_152.f_2884), 0, 0);
		Local_152.f_2878 = 0;
	}
	func_307();
	func_303();
	func_232();
	func_227();
	func_231();
	func_292();
	func_214();
	func_291();
	func_213();
	func_212();
	func_211();
	func_277();
	func_208();
	func_205();
	func_274();
	if (Local_152.f_2368.f_331 == 0 && Local_152.f_2368.f_330 < 0)
	{
		func_273();
		Local_152.f_2878 = 0;
		func_272(8358, Local_152.f_2905, -1, 1, 0);
		func_8(8);
		Local_152.f_2368.f_319 = 0;
		func_100(&(Local_152.f_2884));
		Local_152.f_2726 = 0;
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 5);
		Local_152.f_2727 = 0;
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 4);
		Local_152.f_2728 = floor((Local_152.f_2872 / 0.164583f));
		func_7(4);
		func_51("Frontend_Game_Over");
		func_12(func_13(5));
		return;
	}
	if (Local_152 != -1f && (Local_152.f_2872 / 0.164583f) >= Local_152)
	{
		func_273();
		func_7(6);
		Local_152.f_2878 = 0;
		func_102(0);
		func_272(8358, Local_152.f_2905, -1, 1, 0);
		func_271();
		Local_152.f_2726 = Local_152.f_2368.f_330;
		Local_152.f_2727 = Local_152.f_2368.f_331;
		Local_152.f_2728 = floor((Local_152.f_2872 / 0.164583f));
		func_8(9);
		func_51("Frontend_Stage_Clear");
		func_12(func_13(5));
		func_100(&(Local_152.f_2884));
	}
}

void func_271()
{
	if (Local_152.f_2907)
	{
		return;
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 4))
	{
		return;
	}
	if (Local_152.f_2368.f_330 < Global_262145.f_26910)
	{
		return;
	}
	func_127(251, 1, -1, 1);
	func_126(27187, 1, -1);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 4);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 10);
	func_125();
	func_124("IAP_CH_3", Global_262145.f_26910, 7500);
}

void func_272(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_128(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, iParam3);
	}
}

void func_273()
{
	if (Local_152.f_2368.f_338 > -1)
	{
		if (!unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_338))
		{
			unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_338);
			unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_338);
			Local_152.f_2368.f_338 = -1;
		}
	}
}

void func_274()
{
	func_203();
	func_190();
	func_276();
	func_184();
	func_172();
	func_171();
	func_170();
	func_158();
	func_275();
	func_153();
	func_146();
	if (func_119(&(Local_152.f_2884)) && !func_116(&(Local_152.f_2884), 1750, 0))
	{
		func_136(1);
	}
	func_84();
	func_82();
}

void func_275()
{
	float fVar0;
	
	if (unk_0x0A89FDFA763DCAED() > Local_152.f_2368.f_286 + 1000)
	{
		return;
	}
	fVar0 = (to_float((unk_0x0A89FDFA763DCAED() - Local_152.f_2368.f_286)) / 1000f);
	func_154(&(Local_152.f_2368.f_286.f_1), (Local_152.f_2368.f_321 + 0.0075f), func_156((Local_152.f_2368.f_321.f_1 + -0.125f), (Local_152.f_2368.f_321.f_1 + -0.2f), fVar0, 4), 2147483647);
}

void func_276()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_152.f_1998[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_1998[iVar0 /*14*/].f_11 + Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_2))
		{
		}
		else
		{
			StringCopy(&Var1, Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/], 64);
			if (Local_152.f_2871 == 4 && Local_152.f_1998[iVar0 /*14*/] == 1)
			{
				StringConCat(&Var1, "_moon", 64);
			}
			if (Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				StringIntConCat(&Var1, Local_152.f_1998[iVar0 /*14*/].f_12 + 1, 64);
			}
			func_83("MPInvPersCommon", &Var1, Local_152.f_1998[iVar0 /*14*/].f_5, Local_152.f_1998[iVar0 /*14*/].f_5.f_1, Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_3, Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_3.f_1, Local_152.f_1998[iVar0 /*14*/].f_9, Local_152.f_1765);
		}
		iVar0++;
	}
}

void func_277()
{
	float fVar0;
	float fVar1;
	struct<2> Var2[4];
	float fVar3;
	struct<2> Var4[3];
	struct<2> Var5;
	struct<9> Var6;
	struct<2> Var7;
	struct<2> Var8;
	int iVar9;
	struct<2> Var10;
	struct<2> Var11;
	struct<2> Var12;
	struct<2> Var13;
	struct<9> Var14;
	struct<2> Var15;
	struct<2> Var16;
	struct<2> Var17;
	struct<2> Var18;
	struct<2> Var19[4];
	struct<2> Var20;
	int iVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	struct<2> Var26;
	bool bVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	struct<2> Var36;
	struct<2> Var37;
	int iVar38;
	float fVar39;
	struct<2> Var40;
	struct<2> Var41;
	bool bVar42;
	struct<2> Var43;
	float fVar44;
	struct<2> Var45;
	struct<2> Var46;
	int iVar47;
	float fVar48;
	bool bVar49;
	int iVar50;
	bool bVar51;
	int iVar52;
	int iVar53;
	struct<2> Var54;
	struct<2> Var55;
	
	Var2[0 /*2*/] = { func_88((Local_152.f_2368.f_321 + -0.056f), (Local_152.f_2368.f_321.f_1 + 0.047f)) };
	Var2[1 /*2*/] = { func_88((Local_152.f_2368.f_321 + -0.034f), (Local_152.f_2368.f_321.f_1 + -0.036f)) };
	Var2[2 /*2*/] = { func_88((Local_152.f_2368.f_321 + 0.046f), (Local_152.f_2368.f_321.f_1 + -0.026f)) };
	Var2[3 /*2*/] = { func_88((Local_152.f_2368.f_321 + 0.039f), (Local_152.f_2368.f_321.f_1 + 0.047f)) };
	fVar3 = 0f;
	if ((Local_152.f_2368 == 1 || Local_152.f_2368 == 2) || Local_152.f_2368 == 4)
	{
		fVar3 = -((0.144444f - 0.12963f) / 2f);
	}
	Var5 = { func_189(func_88((Local_152.f_2368.f_321 + 0.0075f), ((Local_152.f_2368.f_321.f_1 + -0.055f) + fVar3))) };
	Var4[0 /*2*/] = { func_145(Var5, func_189(func_88(-0.01f, 0.032f))) };
	Var4[1 /*2*/] = { func_145(Var5, func_189(func_88(-0.01f, -0.032f))) };
	Var4[2 /*2*/] = { func_145(Var5, func_189(func_88(0.059f, 0f))) };
	if (Local_152.f_2368.f_325 != 0)
	{
		fVar1 = sin((IntToFloat(Local_152.f_2368.f_325) * -15f));
		fVar0 = cos((IntToFloat(Local_152.f_2368.f_325) * -15f));
		Var4[0 /*2*/] = { func_186(Var5, Var4[0 /*2*/], fVar1, fVar0) };
		Var4[1 /*2*/] = { func_186(Var5, Var4[1 /*2*/], fVar1, fVar0) };
		Var4[2 /*2*/] = { func_186(Var5, Var4[2 /*2*/], fVar1, fVar0) };
	}
	Var4[0 /*2*/] = { func_87(Var4[0 /*2*/]) };
	Var4[1 /*2*/] = { func_87(Var4[1 /*2*/]) };
	Var4[2 /*2*/] = { func_87(Var4[2 /*2*/]) };
	Var6 = 20;
	Var6.f_1 = 4;
	Var6.f_1.f_9 = 4;
	Var6.f_1.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var6.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 <= 19)
	{
		if (Local_152.f_2368.f_3[iVar9 /*14*/].f_11 == -2147483647)
		{
		}
		else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_2368.f_3[iVar9 /*14*/].f_11 + Local_152.f_1734[Local_152.f_2368.f_3[iVar9 /*14*/] /*5*/].f_2))
		{
		}
		else if (func_201(Local_152.f_2368.f_3[iVar9 /*14*/].f_5, func_88(0.0001f, 0.0001f)))
		{
		}
		else if (Local_152.f_2368.f_3[iVar9 /*14*/] == 5)
		{
		}
		else
		{
			Var10 = { func_189(Local_152.f_2368.f_3[iVar9 /*14*/].f_5) };
			Var11 = { func_189(Local_152.f_2368.f_3[iVar9 /*14*/].f_7) };
			Var12 = { func_188(func_145(Var10, Var11), 2f) };
			if (!func_187(Local_152.f_2368.f_3[iVar9 /*14*/].f_9, -0.0001f, 0.0001f))
			{
				fVar1 = sin(Local_152.f_2368.f_3[iVar9 /*14*/].f_9);
				fVar0 = cos(Local_152.f_2368.f_3[iVar9 /*14*/].f_9);
				Var7 = { func_186(Var12, Var10, -fVar1, fVar0) };
				Var8 = { func_186(Var12, Var11, -fVar1, fVar0) };
			}
			else
			{
				Var7 = { Var10 };
				Var8 = { Var11 };
			}
			Var13 = { func_189(func_188(Local_152.f_1734[Local_152.f_2368.f_3[iVar9 /*14*/] /*5*/].f_3, 2f)) };
			Var6[iVar9 /*9*/][0 /*2*/] = (Var8 - Var13);
			Var6[iVar9 /*9*/][1 /*2*/] = Var6[iVar9 /*9*/][0 /*2*/];
			Var6[iVar9 /*9*/][2 /*2*/] = (Var7 + Var13);
			Var6[iVar9 /*9*/][3 /*2*/] = Var6[iVar9 /*9*/][2 /*2*/];
			Var6[iVar9 /*9*/][0 /*2*/].f_1 = (Var8.f_1 + Var13.f_1);
			Var6[iVar9 /*9*/][1 /*2*/].f_1 = (Var7.f_1 - Var13.f_1);
			Var6[iVar9 /*9*/][2 /*2*/].f_1 = Var6[iVar9 /*9*/][1 /*2*/].f_1;
			Var6[iVar9 /*9*/][3 /*2*/].f_1 = Var6[iVar9 /*9*/][0 /*2*/].f_1;
			if (!func_187(Local_152.f_2368.f_3[iVar9 /*14*/].f_9, -0.0001f, 0.0001f))
			{
				Var6[iVar9 /*9*/][0 /*2*/] = { func_186(Var12, Var6[iVar9 /*9*/][0 /*2*/], fVar1, fVar0) };
				Var6[iVar9 /*9*/][1 /*2*/] = { func_186(Var12, Var6[iVar9 /*9*/][1 /*2*/], fVar1, fVar0) };
				Var6[iVar9 /*9*/][2 /*2*/] = { func_186(Var12, Var6[iVar9 /*9*/][2 /*2*/], fVar1, fVar0) };
				Var6[iVar9 /*9*/][3 /*2*/] = { func_186(Var12, Var6[iVar9 /*9*/][3 /*2*/], fVar1, fVar0) };
			}
			Var6[iVar9 /*9*/][0 /*2*/] = { func_87(Var6[iVar9 /*9*/][0 /*2*/]) };
			Var6[iVar9 /*9*/][1 /*2*/] = { func_87(Var6[iVar9 /*9*/][1 /*2*/]) };
			Var6[iVar9 /*9*/][2 /*2*/] = { func_87(Var6[iVar9 /*9*/][2 /*2*/]) };
			Var6[iVar9 /*9*/][3 /*2*/] = { func_87(Var6[iVar9 /*9*/][3 /*2*/]) };
		}
		iVar9++;
	}
	Var14 = 15;
	Var14.f_1 = 4;
	Var14.f_1.f_9 = 4;
	Var14.f_1.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	Var14.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9 = 4;
	iVar9 = 0;
	while (iVar9 <= 14)
	{
		if (Local_152.f_1998[iVar9 /*14*/].f_11 == -2147483647)
		{
		}
		else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_1998[iVar9 /*14*/].f_11 + Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_2))
		{
		}
		else if (func_201(Local_152.f_1998[iVar9 /*14*/].f_5, func_88(0.0001f, 0.0001f)))
		{
		}
		else
		{
			Var15 = { func_189(Local_152.f_1998[iVar9 /*14*/].f_5) };
			Var16 = { func_189(Local_152.f_1998[iVar9 /*14*/].f_7) };
			Var17 = { func_188(func_145(Var15, Var16), 2f) };
			if (!func_187(Local_152.f_1998[iVar9 /*14*/].f_9, -0.0001f, 0.0001f))
			{
				fVar1 = sin(Local_152.f_1998[iVar9 /*14*/].f_9);
				fVar0 = cos(Local_152.f_1998[iVar9 /*14*/].f_9);
				Var7 = { func_186(Var17, Var15, -fVar1, fVar0) };
				Var8 = { func_186(Var17, Var16, -fVar1, fVar0) };
			}
			else
			{
				Var7 = { Var15 };
				Var8 = { Var16 };
			}
			Var18 = { func_189(func_188(Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_3, 2f)) };
			Var14[iVar9 /*9*/][0 /*2*/] = (Var7 - Var18);
			Var14[iVar9 /*9*/][1 /*2*/] = Var14[iVar9 /*9*/][0 /*2*/];
			Var14[iVar9 /*9*/][2 /*2*/] = (Var8 + Var18);
			Var14[iVar9 /*9*/][3 /*2*/] = Var14[iVar9 /*9*/][2 /*2*/];
			Var14[iVar9 /*9*/][0 /*2*/].f_1 = (Var8.f_1 + Var18.f_1);
			Var14[iVar9 /*9*/][1 /*2*/].f_1 = (Var7.f_1 - Var18.f_1);
			Var14[iVar9 /*9*/][2 /*2*/].f_1 = Var14[iVar9 /*9*/][1 /*2*/].f_1;
			Var14[iVar9 /*9*/][3 /*2*/].f_1 = Var14[iVar9 /*9*/][0 /*2*/].f_1;
			if (!func_187(Local_152.f_1998[iVar9 /*14*/].f_9, -0.0001f, 0.0001f))
			{
				Var14[iVar9 /*9*/][0 /*2*/] = { func_186(Var17, Var14[iVar9 /*9*/][0 /*2*/], fVar1, fVar0) };
				Var14[iVar9 /*9*/][1 /*2*/] = { func_186(Var17, Var14[iVar9 /*9*/][1 /*2*/], fVar1, fVar0) };
				Var14[iVar9 /*9*/][2 /*2*/] = { func_186(Var17, Var14[iVar9 /*9*/][2 /*2*/], fVar1, fVar0) };
				Var14[iVar9 /*9*/][3 /*2*/] = { func_186(Var17, Var14[iVar9 /*9*/][3 /*2*/], fVar1, fVar0) };
			}
			Var14[iVar9 /*9*/][0 /*2*/] = { func_87(Var14[iVar9 /*9*/][0 /*2*/]) };
			Var14[iVar9 /*9*/][1 /*2*/] = { func_87(Var14[iVar9 /*9*/][1 /*2*/]) };
			Var14[iVar9 /*9*/][2 /*2*/] = { func_87(Var14[iVar9 /*9*/][2 /*2*/]) };
			Var14[iVar9 /*9*/][3 /*2*/] = { func_87(Var14[iVar9 /*9*/][3 /*2*/]) };
		}
		iVar9++;
	}
	Var20 = { func_88(-1f, -1f) };
	iVar21 = 0;
	while (iVar21 <= 13)
	{
		if (Local_152.f_1801[iVar21 /*14*/] == -1)
		{
		}
		else if (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 6)
		{
		}
		else if (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 3)
		{
		}
		else if (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 4)
		{
		}
		else if (Local_152.f_1801[iVar21 /*14*/].f_7 == 0)
		{
		}
		else if (Local_152.f_1801[iVar21 /*14*/].f_3 - (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22 / 2f)) > (1f - 0.15625f)
		{
		}
		else if (func_201(Local_152.f_1801[iVar21 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22))
		{
		}
		else
		{
			Var26 = { Local_152.f_1801[iVar21 /*14*/].f_3 };
			iVar22 = 0;
			while (iVar22 <= 3)
			{
				Var19[iVar22 /*2*/] = { func_145(Var26, Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_5[iVar22 /*2*/]) };
				iVar22++;
			}
			if (Local_152.f_2368.f_331 > 0 && Local_152.f_2368 != 3)
			{
				fVar24 = unk_0x48053974ED6F63CE((Var26 - Local_152.f_2368.f_321));
				fVar25 = unk_0x48053974ED6F63CE((Var26.f_1 - Local_152.f_2368.f_321.f_1));
				if (fVar24 <= func_290(Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22, 0.104167f) && fVar25 <= func_290(Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22.f_1, 0.12963f))
				{
					bVar27 = false;
					iVar22 = 0;
					while (iVar22 <= 3)
					{
						iVar28 = iVar22 + 1;
						if (iVar28 >= 4)
						{
							iVar28 = 0;
						}
						iVar23 = 0;
						while (iVar23 <= 3)
						{
							iVar29 = iVar23 + 1;
							if (iVar29 >= 4)
							{
								iVar29 = 0;
							}
							if (func_288(Var2[iVar22 /*2*/], Var2[iVar28 /*2*/], Var19[iVar23 /*2*/], Var19[iVar29 /*2*/], &Var20))
							{
								if (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 5)
								{
									func_283(iVar21, 0);
									Local_152.f_1801[iVar21 /*14*/].f_7 = 0;
								}
								else
								{
									if (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] != 8)
									{
										func_245(iVar21, -Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_17);
									}
									if (Local_152.f_2368.f_334 + 750 < unk_0x0A89FDFA763DCAED() && Local_152.f_2368.f_337 + 2000 < unk_0x0A89FDFA763DCAED())
									{
										func_229("Tank_Collision", &(Local_152.f_2368.f_343));
									}
									func_282(-4);
								}
								bVar27 = true;
							}
							else
							{
								iVar23++;
							}
						}
						if (bVar27)
						{
						}
						else
						{
							iVar22++;
						}
					}
					if (bVar27)
					{
					}
					else if ((Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 5 || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 3) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 4)
					{
					}
					else
					{
						iVar9 = 0;
						while (iVar9 <= 19)
						{
							if (Local_152.f_2368.f_3[iVar9 /*14*/].f_11 == -2147483647)
							{
							}
							else if (Local_152.f_2368.f_3[iVar9 /*14*/] == 5)
							{
							}
							else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_2368.f_3[iVar9 /*14*/].f_11 + Local_152.f_1734[Local_152.f_2368.f_3[iVar9 /*14*/] /*5*/].f_2))
							{
							}
							else if (func_201(Local_152.f_2368.f_3[iVar9 /*14*/].f_5, func_88(0.0001f, 0.0001f)))
							{
							}
							else
							{
								fVar24 = unk_0x48053974ED6F63CE((Var26 - Local_152.f_2368.f_3[iVar9 /*14*/].f_5));
								fVar25 = unk_0x48053974ED6F63CE((Var26.f_1 - Local_152.f_2368.f_3[iVar9 /*14*/].f_5.f_1));
								if (fVar24 <= (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22 + Local_152.f_1734[Local_152.f_2368.f_3[iVar9 /*14*/] /*5*/].f_3) && fVar25 <= (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22.f_1 + Local_152.f_1734[Local_152.f_2368.f_3[iVar9 /*14*/] /*5*/].f_3.f_1))
								{
									bVar30 = false;
									iVar22 = 0;
									while (iVar22 <= 3)
									{
										iVar31 = iVar22 + 1;
										if (iVar31 >= 4)
										{
											iVar31 = 0;
										}
										if (func_288(Var6[iVar9 /*9*/][0 /*2*/], Var6[iVar9 /*9*/][2 /*2*/], Var19[iVar22 /*2*/], Var19[iVar31 /*2*/], &Var20) || func_288(Var6[iVar9 /*9*/][1 /*2*/], Var6[iVar9 /*9*/][3 /*2*/], Var19[iVar22 /*2*/], Var19[iVar31 /*2*/], &Var20))
										{
											if (Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] != 8)
											{
												func_245(iVar21, -Local_152.f_2368.f_3[iVar9 /*14*/].f_13);
											}
											func_224(func_226(Local_152.f_2368.f_3[iVar9 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_152.f_2368.f_3[iVar22 /*14*/].f_5);
											func_223(Var20, 0);
											Local_152.f_2368.f_3[iVar9 /*14*/].f_11 = -2147483647;
											bVar30 = true;
										}
										else
										{
											iVar22++;
										}
									}
									if (bVar30)
									{
									}
								}
							}
							iVar9++;
						}
					}
					iVar21++;
					if (((Local_152.f_2368.f_2 == 3 && Local_152.f_2368.f_3[0 /*14*/].f_11 != -2147483647) && Local_152.f_2368.f_3[0 /*14*/] == 5) && unk_0x0A89FDFA763DCAED() <= (Local_152.f_2368.f_3[0 /*14*/].f_11 + Local_152.f_1734[Local_152.f_2368.f_3[0 /*14*/] /*5*/].f_2))
					{
						iVar32 = 0;
						iVar33 = -1;
						iVar34 = 0;
						fVar35 = 3.402823E+38f;
						Var36 = { func_88(-1f, -1f) };
						iVar21 = 0;
						while (iVar21 <= 13)
						{
							if (Local_152.f_1801[iVar21 /*14*/] == -1)
							{
							}
							else if (((Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 5 || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 3) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 4) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 6)
							{
							}
							else if (Local_152.f_1801[iVar21 /*14*/].f_7 == 0)
							{
							}
							else if (func_201(Local_152.f_1801[iVar21 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22))
							{
							}
							else
							{
								Var37 = { Local_152.f_1801[iVar21 /*14*/].f_3 };
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									Var19[iVar22 /*2*/] = { func_145(Var37, Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_5[iVar22 /*2*/]) };
									iVar22++;
								}
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									iVar38 = iVar22 + 1;
									if (iVar38 >= 4)
									{
										iVar38 = 0;
									}
									if (func_288(Local_152.f_2368.f_3[0 /*14*/].f_1, Local_152.f_2368.f_3[0 /*14*/].f_3, Var19[iVar22 /*2*/], Var19[iVar38 /*2*/], &Var20))
									{
										fVar39 = func_222(Local_152.f_2368.f_3[0 /*14*/].f_1, Var20);
										if (fVar39 < fVar35)
										{
											fVar35 = fVar39;
											iVar33 = iVar21;
											Var36 = { Var20 };
										}
									}
									iVar22++;
								}
							}
							iVar21++;
						}
						if (iVar33 != -1)
						{
							iVar34++;
							unk_0xCED9E32812D6C7C7(&iVar32, iVar33);
							Local_152.f_2368.f_3[0 /*14*/].f_3 = { Var36 };
							if (Local_152.f_753[Local_152.f_1801[iVar33 /*14*/] /*28*/] != 8)
							{
								if (IntToFloat(unk_0x0A89FDFA763DCAED()) > (IntToFloat(Local_152.f_1801[iVar33 /*14*/].f_8) + (62f * func_281())))
								{
									func_245(iVar33, -Local_152.f_2368.f_3[0 /*14*/].f_13);
								}
								iVar22 = 0;
								while (iVar22 <= 2)
								{
									bVar42 = false;
									iVar21 = 0;
									while (iVar21 <= 13)
									{
										if (unk_0xE2D0C323A1AE5D85(iVar32, iVar21))
										{
										}
										else if (Local_152.f_1801[iVar21 /*14*/] == -1)
										{
										}
										else if ((((Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 5 || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 3) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 4) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 6) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 8)
										{
										}
										else if (Local_152.f_1801[iVar21 /*14*/].f_7 == 0)
										{
										}
										else if (func_201(Local_152.f_1801[iVar21 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22))
										{
										}
										else
										{
											Var43 = { Local_152.f_1801[iVar21 /*14*/].f_3 };
											if (func_222(Local_152.f_2368.f_3[iVar22 /*14*/].f_3, Var43) < pow(0.35f, 2f))
											{
												unk_0xCED9E32812D6C7C7(&iVar32, iVar21);
												bVar42 = true;
												iVar34++;
												Var40 = { func_189(Local_152.f_2368.f_3[iVar22 /*14*/].f_3) };
												Var41 = { func_189(Var43) };
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/] = 5;
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_1 = { Local_152.f_2368.f_3[iVar22 /*14*/].f_3 };
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_3 = { Var43 };
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_5 = { Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_1 };
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_9 = unk_0xC529D13129C03CF4((Var41.f_1 - Var40.f_1), (Var41 - Var40));
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_11 = unk_0x0A89FDFA763DCAED();
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_13 = 2;
												Local_152.f_2368.f_3[iVar22 + 1 /*14*/].f_12 = func_280();
												if (IntToFloat(unk_0x0A89FDFA763DCAED()) > (IntToFloat(Local_152.f_1801[iVar21 /*14*/].f_8) + (62f * func_281())))
												{
													func_245(iVar21, -Local_152.f_2368.f_3[0 /*14*/].f_13);
												}
											}
											else
											{
												iVar21++;
											}
											if (!bVar42)
											{
											}
											else
											{
												iVar22++;
											}
											func_279(Local_152.f_2368.f_3[0 /*14*/].f_3, iVar34);
											if (Local_152.f_2368.f_324 != Local_152.f_2368.f_325)
											{
												fVar44 = 0f;
												if (Local_152.f_2368.f_324 > Local_152.f_2368.f_325)
												{
													fVar44 = (-15f / 2f);
												}
												else
												{
													fVar44 = (15f / 2f);
												}
												Var45 = { func_87(func_179(func_189(Local_152.f_2368.f_3[0 /*14*/].f_1), func_189(Local_152.f_2368.f_3[0 /*14*/].f_3), fVar44)) };
												iVar33 = -1;
												fVar35 = 3.402823E+38f;
												iVar21 = 0;
												while (iVar21 <= 13)
												{
													if (unk_0xE2D0C323A1AE5D85(iVar32, iVar21))
													{
													}
													else if (Local_152.f_1801[iVar21 /*14*/] == -1)
													{
													}
													else if (((Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 5 || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 3) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 4) || Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/] == 6)
													{
													}
													else if (Local_152.f_1801[iVar21 /*14*/].f_7 == 0)
													{
													}
													else if (func_201(Local_152.f_1801[iVar21 /*14*/].f_3, Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_22))
													{
													}
													else
													{
														Var46 = { Local_152.f_1801[iVar21 /*14*/].f_3 };
														iVar22 = 0;
														while (iVar22 <= 3)
														{
															Var19[iVar22 /*2*/] = { func_145(Var46, Local_152.f_753[Local_152.f_1801[iVar21 /*14*/] /*28*/].f_5[iVar22 /*2*/]) };
															iVar22++;
														}
														iVar22 = 0;
														while (iVar22 <= 3)
														{
															iVar47 = iVar22 + 1;
															if (iVar47 >= 4)
															{
																iVar47 = 0;
															}
															if (func_288(Local_152.f_2368.f_3[0 /*14*/].f_1, Var45, Var19[iVar22 /*2*/], Var19[iVar47 /*2*/], &Var20))
															{
																fVar48 = func_222(Local_152.f_2368.f_3[0 /*14*/].f_1, Var20);
																if (fVar48 < fVar35)
																{
																	fVar35 = fVar48;
																	iVar33 = iVar21;
																	Var36 = { Var20 };
																}
															}
															iVar22++;
														}
													}
													iVar21++;
												}
												if (iVar33 != -1)
												{
													Var45 = { Var36 };
													if (Local_152.f_753[Local_152.f_1801[iVar33 /*14*/] /*28*/] != 8)
													{
														if (IntToFloat(unk_0x0A89FDFA763DCAED()) > (IntToFloat(Local_152.f_1801[iVar33 /*14*/].f_8) + (62f * func_281())))
														{
															func_245(iVar33, -Local_152.f_2368.f_3[0 /*14*/].f_13);
														}
													}
												}
											}
											iVar9 = 0;
											while (iVar9 <= 14)
											{
												if (Local_152.f_1998[iVar9 /*14*/].f_11 == -2147483647)
												{
												}
												else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_1998[iVar9 /*14*/].f_11 + Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_2))
												{
												}
												else if (func_201(Local_152.f_1998[iVar9 /*14*/].f_5, func_88(0.0001f, 0.0001f)))
												{
												}
												else
												{
													fVar24 = unk_0x48053974ED6F63CE((Local_152.f_2368.f_321 - Local_152.f_1998[iVar9 /*14*/].f_5));
													fVar25 = unk_0x48053974ED6F63CE((Local_152.f_2368.f_321.f_1 - Local_152.f_1998[iVar9 /*14*/].f_5.f_1));
													if (fVar24 <= (0.104167f + Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_3) && fVar25 <= (0.12963f + Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_3.f_1))
													{
														bVar49 = false;
														iVar22 = 0;
														while (iVar22 <= 3)
														{
															iVar50 = iVar22 + 1;
															if (iVar50 >= 4)
															{
																iVar50 = 0;
															}
															if (func_288(Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], Var2[iVar22 /*2*/], Var2[iVar50 /*2*/], &Var20) || func_288(Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], Var2[iVar22 /*2*/], Var2[iVar50 /*2*/], &Var20))
															{
																func_282(-Local_152.f_1998[iVar9 /*14*/].f_13);
																func_223(Var20, 0);
																Local_152.f_1998[iVar9 /*14*/].f_11 = -2147483647;
																if (Local_152.f_1998[iVar9 /*14*/] == 1)
																{
																	func_224("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																}
																else
																{
																	func_224("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																}
																bVar49 = true;
															}
															else
															{
																iVar22++;
															}
														}
														if (bVar49)
														{
														}
														else
														{
															fVar24 = unk_0x48053974ED6F63CE(((Local_152.f_2368.f_321 + 0.0075f) - Local_152.f_1998[iVar9 /*14*/].f_5));
															fVar25 = unk_0x48053974ED6F63CE(((Local_152.f_2368.f_321.f_1 + -0.055f) - Local_152.f_1998[iVar9 /*14*/].f_5.f_1));
															if (fVar24 <= (0.104167f + Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_3) && fVar25 <= (0.059259f + Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_3.f_1))
															{
																bVar51 = false;
																iVar22 = 0;
																while (iVar22 <= 2)
																{
																	iVar52 = iVar22 + 1;
																	if (iVar52 > 2)
																	{
																		iVar52 = 0;
																	}
																	if (func_288(Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], Var4[iVar22 /*2*/], Var4[iVar52 /*2*/], &Var20) || func_288(Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], Var4[iVar22 /*2*/], Var4[iVar52 /*2*/], &Var20))
																	{
																		func_282(-Local_152.f_1998[iVar9 /*14*/].f_13);
																		func_223(Var20, 0);
																		Local_152.f_1998[iVar9 /*14*/].f_11 = -2147483647;
																		if (Local_152.f_1998[iVar9 /*14*/] == 1)
																		{
																			func_224("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																		}
																		else
																		{
																			func_224("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																		}
																		bVar51 = true;
																	}
																	else
																	{
																		iVar22++;
																	}
																}
																if (bVar51)
																{
																}
																else
																{
																	iVar53 = 0;
																	iVar53 = 0;
																	while (iVar53 <= 19)
																	{
																		if (Local_152.f_2368.f_3[iVar53 /*14*/].f_11 == -2147483647)
																		{
																		}
																		else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_2368.f_3[iVar53 /*14*/].f_11 + Local_152.f_1734[Local_152.f_2368.f_3[iVar53 /*14*/] /*5*/].f_2))
																		{
																		}
																		else if (Local_152.f_2368.f_3[iVar53 /*14*/] == 5)
																		{
																			if (func_288(Local_152.f_2368.f_3[iVar53 /*14*/].f_1, Local_152.f_2368.f_3[iVar53 /*14*/].f_3, Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], &Var20) || func_288(Local_152.f_2368.f_3[iVar53 /*14*/].f_1, Local_152.f_2368.f_3[iVar53 /*14*/].f_3, Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], &Var20))
																			{
																				Local_152.f_1998[iVar9 /*14*/].f_11 = -2147483647;
																				func_223(Var20, 0);
																				if (Local_152.f_1998[iVar9 /*14*/] == 1)
																				{
																					func_224("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																				}
																				else
																				{
																					func_224("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																				}
																			}
																			else
																			{
																				Jump @7684; //curOff = 7015
																				if (func_201(Local_152.f_2368.f_3[iVar53 /*14*/].f_5, func_88(0.0001f, 0.0001f)))
																				{
																				}
																				else
																				{
																					fVar24 = unk_0x48053974ED6F63CE((Local_152.f_1998[iVar9 /*14*/].f_5 - Local_152.f_2368.f_3[iVar53 /*14*/].f_5));
																					fVar25 = unk_0x48053974ED6F63CE((Local_152.f_1998[iVar9 /*14*/].f_5.f_1 - Local_152.f_2368.f_3[iVar53 /*14*/].f_5.f_1));
																					Var54 = { func_278(Local_152.f_2368.f_3[iVar53 /*14*/].f_5, Local_152.f_2368.f_3[iVar53 /*14*/].f_7, Local_152.f_1734[Local_152.f_2368.f_3[iVar53 /*14*/] /*5*/].f_3) };
																					Var55 = { func_278(Local_152.f_1998[iVar9 /*14*/].f_5, Local_152.f_1998[iVar9 /*14*/].f_7, Local_152.f_1734[Local_152.f_1998[iVar9 /*14*/] /*5*/].f_3) };
																					if (((fVar24 <= Var54 && fVar25 <= Var54.f_1) && fVar24 <= Var55) && fVar25 <= Var55.f_1)
																					{
																						if (((func_288(Var6[iVar53 /*9*/][0 /*2*/], Var6[iVar53 /*9*/][2 /*2*/], Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], &Var20) || func_288(Var6[iVar53 /*9*/][1 /*2*/], Var6[iVar53 /*9*/][3 /*2*/], Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], &Var20)) || func_288(Var6[iVar53 /*9*/][0 /*2*/], Var6[iVar53 /*9*/][2 /*2*/], Var14[iVar9 /*9*/][1 /*2*/], Var14[iVar9 /*9*/][3 /*2*/], &Var20)) || func_288(Var6[iVar53 /*9*/][1 /*2*/], Var6[iVar53 /*9*/][3 /*2*/], Var14[iVar9 /*9*/][0 /*2*/], Var14[iVar9 /*9*/][2 /*2*/], &Var20))
																						{
																							Local_152.f_2368.f_3[iVar53 /*14*/].f_11 = -2147483647;
																							Local_152.f_1998[iVar9 /*14*/].f_11 = -2147483647;
																							func_223(Var20, 0);
																							if (Local_152.f_1998[iVar9 /*14*/] == 1)
																							{
																								func_224("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																							}
																							else
																							{
																								func_224("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar9 /*14*/].f_5);
																							}
																							func_224(func_226(Local_152.f_2368.f_3[iVar53 /*14*/]), "dlc_vw_am_ip_tank_sounds", Local_152.f_2368.f_3[iVar53 /*14*/].f_5);
																						}
																						else
																						{
																							iVar53++;
																						}
																						iVar9++;
																					}

struct<2> func_278(struct<2> Param0, struct<2> Param1, struct<2> Param2)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0x48053974ED6F63CE((Param0 - Param1));
	fVar2 = unk_0x48053974ED6F63CE((Param0.f_1 - Param1.f_1));
	Var0 = { func_88((fVar1 + Param2), (fVar2 + Param2.f_1)) };
	return Var0;
}

void func_279(struct<2> Param0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_225(Param0);
	if (unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_341))
	{
		unk_0x91DFC8F68F6D9B05(Local_152.f_2368.f_341, "Tank_Weapon_Lightning_Gun_Fire_Hit", "dlc_vw_am_ip_tank_sounds", 0);
	}
	unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_341, "Screen_Position", fVar0);
	unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_341, "TargetsHit", to_float(iParam1));
}

int func_280()
{
	switch (Local_152.f_2368.f_2)
	{
		case 0:
			return -1;
		
		case 1:
			return unk_0x5853B15F78E1A265(0, 2);
		
		case 2:
			return 0;
		
		case 3:
			if (Local_152.f_2368.f_3[0 /*14*/].f_12 >= Local_152.f_1734[Local_152.f_2368.f_3[0 /*14*/] /*5*/].f_1 || Local_152.f_2368.f_3[0 /*14*/].f_12 < 0)
			{
				Local_152.f_2368.f_3[0 /*14*/].f_12 = 0;
			}
			return Local_152.f_2368.f_3[0 /*14*/].f_12;
		
		default:
	}
	return 2147483647;
}

float func_281()
{
	if (Local_152.f_2871 == 4)
	{
		return 0.75f;
	}
	return 1f;
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Local_152.f_2368 == 3 || Local_152.f_2368 == 4)
	{
		return;
	}
	if (iParam0 < 0)
	{
		if (Local_152.f_2368.f_334 + 750 > unk_0x0A89FDFA763DCAED() || Local_152.f_2368.f_337 + 2000 > unk_0x0A89FDFA763DCAED())
		{
			return;
		}
		if (unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 0))
		{
			unk_0xB0550BC91B0159D6(&(Local_152.f_2368.f_333), 0);
			return;
		}
	}
	iVar0 = func_210(Local_152.f_2368.f_331 > 1, 1, 0);
	iVar1 = func_151((Local_152.f_2368.f_331 + iParam0), iVar0, 20);
	Local_152.f_2368.f_332 = Local_152.f_2368.f_331;
	Local_152.f_2368.f_331 = iVar1;
	if (iParam0 < 0)
	{
		Local_152.f_2368.f_321 = (Local_152.f_2368.f_321 - 0.004166667f);
		if (Local_152.f_2368.f_321 < 0.225f)
		{
			Local_152.f_2368.f_321 = 0.225f;
		}
		Local_152.f_2368.f_334 = unk_0x0A89FDFA763DCAED();
	}
	else if (iParam0 > 0)
	{
		Local_152.f_2368.f_335 = unk_0x0A89FDFA763DCAED();
	}
	if (iVar1 == 0)
	{
		Local_152.f_2368.f_330 = (Local_152.f_2368.f_330 - 1);
		Local_152.f_2368.f_319 = 0;
		func_103(3);
		func_229("Tank_Destroyed", &(Local_152.f_2368.f_343));
		if (Local_152.f_2368.f_330 >= 0)
		{
			func_51("Frontend_Player_Death");
		}
		Local_152.f_2368.f_327 = unk_0x0A89FDFA763DCAED();
		func_104(0);
	}
}

void func_283(int iParam0, bool bParam1)
{
	switch (Local_152.f_1801[iParam0 /*14*/])
	{
		case 18:
			if (Local_152.f_2368.f_2 != 1)
			{
				func_254("IAP_PU_FLAME");
				func_104(1);
				func_229("Tank_Weapon_Change", &(Local_152.f_2368.f_343));
			}
			else
			{
				func_254("IAP_PU_WAO");
				func_122(1000, 1, func_88(-1f, -1f));
			}
			break;
		
		case 19:
			if (Local_152.f_2368.f_2 != 2)
			{
				func_254("IAP_PU_ROCKETS");
				func_104(2);
				func_229("Tank_Weapon_Change", &(Local_152.f_2368.f_343));
			}
			else
			{
				func_254("IAP_PU_WAO");
				func_122(1000, 1, func_88(-1f, -1f));
			}
			break;
		
		case 25:
			if (Local_152.f_2368.f_2 != 3)
			{
				func_254("IAP_PU_PLASMA");
				func_104(3);
				func_229("Tank_Weapon_Change", &(Local_152.f_2368.f_343));
			}
			else
			{
				func_254("IAP_PU_WAO");
				func_122(1000, 1, func_88(-1f, -1f));
			}
			break;
		
		case 20:
			if (Local_152.f_2368.f_331 == 20)
			{
				func_254("IAP_PU_HPO");
				Local_152.f_2368.f_330++;
			}
			else
			{
				func_254("IAP_PU_HP");
				func_282(4);
			}
			break;
		
		case 21:
			func_254("IAP_PU_1UP");
			Local_152.f_2368.f_330++;
			break;
		
		case 24:
			func_254("IAP_PU_ARMOR");
			func_282(-4);
			break;
		
		case 22:
			func_254("IAP_PU_SCORE");
			func_122(10000, 1, func_88(-1f, -1f));
			break;
		
		case 28:
			func_224(func_287(Local_152.f_1801[iParam0 /*14*/]), "dlc_vw_am_ip_powerup_sounds", Local_152.f_1801[iParam0 /*14*/].f_3);
			Local_152.f_1801[iParam0 /*14*/] = func_286(iParam0);
			func_283(iParam0, 1);
			return;
		
		case 23:
			func_254("IAP_PU_SHIELD");
			if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 0);
			}
			else
			{
				func_254("IAP_PU_SAO");
				func_122(1000, 1, func_88(-1f, -1f));
			}
			break;
		
		case 26:
			if (Local_152.f_2368.f_2 == 0 && !func_285())
			{
				func_254("IAP_PU_TRIPLE");
				unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 1);
				func_229("Tank_Weapon_Change", &(Local_152.f_2368.f_343));
			}
			else
			{
				func_254("IAP_PU_WAO");
				func_122(1000, 1, func_88(-1f, -1f));
			}
			break;
		
		case 27:
			func_254("IAP_PU_NUKE");
			func_284();
			break;
	}
	Local_152.f_2712.f_1++;
	Local_152.f_2712.f_2++;
	if (Local_152.f_2368.f_330 > 99)
	{
		Local_152.f_2368.f_330 = 99;
	}
	if (!bParam1)
	{
		func_224(func_287(Local_152.f_1801[iParam0 /*14*/]), "dlc_vw_am_ip_powerup_sounds", Local_152.f_1801[iParam0 /*14*/].f_3);
	}
}

void func_284()
{
	func_224("Tank_Weapon_Nuke_Blast", "dlc_vw_am_ip_tank_sounds", func_88(0.5f, 0.5f));
	func_118(&(Local_152.f_2892), 0, 0);
}

bool func_285()
{
	if (func_17())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 1);
}

var func_286(int iParam0)
{
	int iVar0[11];
	int iVar1;
	var uVar2;
	
	iVar1 = 0;
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 1 == 0 && Local_152.f_2368.f_2 != 1)
	{
		iVar0[iVar1] = 18;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 2 == 0 && Local_152.f_2368.f_2 != 2)
	{
		iVar0[iVar1] = 19;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 4 == 0 && Local_152.f_2368.f_331 < 20)
	{
		iVar0[iVar1] = 20;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 8 == 0)
	{
		iVar0[iVar1] = 21;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 16 == 0)
	{
		iVar0[iVar1] = 22;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 32 == 0 && !unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 0))
	{
		iVar0[iVar1] = 23;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 64 == 0)
	{
		iVar0[iVar1] = 24;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 128 == 0 && Local_152.f_2368.f_2 != 3)
	{
		iVar0[iVar1] = 25;
		iVar1++;
	}
	if ((Local_152.f_1801[iParam0 /*14*/].f_11 & 256 == 0 && Local_152.f_2368.f_2 == 0) && !func_285())
	{
		iVar0[iVar1] = 26;
		iVar1++;
	}
	if (Local_152.f_1801[iParam0 /*14*/].f_11 & 512 == 0 && !func_169())
	{
		iVar0[iVar1] = 27;
		iVar1++;
	}
	uVar2 = iVar0[unk_0x5853B15F78E1A265(0, iVar1)];
	return uVar2;
}

char* func_287(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return "Powerup_Crate_Collect_Flamethrower";
		
		case 19:
			return "Powerup_Crate_Collect_Rockets";
		
		case 25:
			return "Powerup_Crate_Collect_Beam";
		
		case 26:
			return "Powerup_Crate_Collect_Triple_Shot";
		
		case 20:
		case 21:
			return "Powerup_Crate_Collect_Armour";
		
		case 24:
			return "Powerup_Crate_Collect_Negative";
		
		case 27:
			return "Powerup_Crate_Collect_Nuke";
		
		case 23:
			return "Powerup_Crate_Collect_Shield";
		
		case 22:
		case 28:
			return "Powerup_Crate_Collect_Other";
		
		default:
	}
	return "";
}

int func_288(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<2> Var9;
	
	fVar0 = (Param1.f_1 - Param0.f_1);
	fVar1 = (Param0 - Param1);
	fVar2 = ((fVar0 * Param0) + (fVar1 * Param0.f_1));
	fVar3 = (Param3.f_1 - Param2.f_1);
	fVar4 = (Param2 - Param3);
	fVar5 = ((fVar3 * Param2) + (fVar4 * Param2.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_187(fVar6, (0f - 0.0001f), (0f + 0.0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_88(fVar7, fVar8) };
		if (((((((func_289((Param0 - 0.001f), (Param1 - 0.001f)) <= Var9 && Var9 <= func_290((Param0 + 0.001f), (Param1 + 0.001f))) && func_289((Param0.f_1 - 0.001f), (Param1.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_290((Param0.f_1 + 0.001f), (Param1.f_1 + 0.001f))) && func_289((Param2 - 0.001f), (Param3 - 0.001f)) <= Var9) && Var9 <= func_290((Param2 + 0.001f), (Param3 + 0.001f))) && func_289((Param2.f_1 - 0.001f), (Param3.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= func_290((Param2.f_1 + 0.001f), (Param3.f_1 + 0.001f)))
		{
			*uParam4 = { Var9 };
			return 1;
		}
	}
	*uParam4 = { func_88(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

float func_289(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_290(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_291()
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (Local_152.f_1998[iVar0 /*14*/].f_11 == -2147483647)
		{
		}
		else if (unk_0x0A89FDFA763DCAED() > (Local_152.f_1998[iVar0 /*14*/].f_11 + Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_2))
		{
		}
		else
		{
			if (func_169())
			{
				func_223(Local_152.f_1998[iVar0 /*14*/].f_5, 0);
				if (Local_152.f_1998[iVar0 /*14*/] == 1)
				{
					func_224("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar0 /*14*/].f_5);
				}
				else
				{
					func_224("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar0 /*14*/].f_5);
				}
				Local_152.f_1998[iVar0 /*14*/].f_11 = -2147483647;
			}
			if (Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_1 > 0)
			{
				Local_152.f_1998[iVar0 /*14*/].f_12 = (Local_152.f_1998[iVar0 /*14*/].f_12 + Local_152.f_2875);
				if (Local_152.f_1998[iVar0 /*14*/].f_12 >= Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_1)
				{
					Local_152.f_1998[iVar0 /*14*/].f_12 = 0;
				}
			}
			fVar1 = (to_float((unk_0x0A89FDFA763DCAED() - Local_152.f_1998[iVar0 /*14*/].f_11)) / IntToFloat(Local_152.f_1734[Local_152.f_1998[iVar0 /*14*/] /*5*/].f_2));
			Local_152.f_1998[iVar0 /*14*/].f_7 = { Local_152.f_1998[iVar0 /*14*/].f_5 };
			Local_152.f_1998[iVar0 /*14*/].f_5 = { func_161(Local_152.f_1998[iVar0 /*14*/].f_1, Local_152.f_1998[iVar0 /*14*/].f_3, fVar1) };
			if (Local_152.f_1998[iVar0 /*14*/].f_3.f_1 >= Local_152.f_1998[iVar0 /*14*/].f_1.f_1)
			{
				fVar2 = func_215(Local_152.f_1998[iVar0 /*14*/].f_5, 0);
				if (Local_152.f_1998[iVar0 /*14*/].f_5.f_1 > fVar2)
				{
					func_223(Local_152.f_1998[iVar0 /*14*/].f_5, 0);
					if (Local_152.f_1998[iVar0 /*14*/] == 1)
					{
						func_224("Enemy_Jet_Bomb_Barrel_Explode", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar0 /*14*/].f_5);
					}
					else
					{
						func_224("Enemy_Blaster_Fire_Hit", "dlc_vw_am_ip_enemy_sounds", Local_152.f_1998[iVar0 /*14*/].f_5);
					}
					Local_152.f_1998[iVar0 /*14*/].f_11 = -2147483647;
				}
			}
		}
		iVar0++;
	}
}

void func_292()
{
	int iVar0;
	int iVar1;
	
	if (func_302())
	{
		func_273();
		return;
	}
	iVar0 = 223;
	iVar1 = 229;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 237;
		iVar1 = 70;
	}
	if (unk_0xF01464D7AF0B7347(2, iVar0) || (iVar1 != 361 && unk_0xF01464D7AF0B7347(2, iVar1)))
	{
		func_293(Local_152.f_2368.f_2 == 0);
	}
	else if (unk_0x0DBA73788F6E3C5F(2, iVar0) || (iVar1 != 361 && unk_0x0DBA73788F6E3C5F(2, iVar1)))
	{
		func_293(0);
	}
	else if (Local_152.f_2368.f_338 > -1)
	{
		func_273();
	}
}

void func_293(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var1;
	
	if (func_301())
	{
		func_300();
	}
	if (!bParam0 && unk_0x0A89FDFA763DCAED() < (Local_152.f_2368.f_285 + func_299()))
	{
		return;
	}
	if (Local_152.f_2368.f_2 == 3)
	{
		Local_152.f_2368.f_284 = 0;
	}
	func_297(&Var0, &Var1);
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/] = func_296();
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/].f_1 = { Var0 };
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/].f_3 = { Var1 };
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/].f_5 = { Var0 };
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/].f_9 = (IntToFloat(Local_152.f_2368.f_325) * -15f);
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/].f_13 = func_295();
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/].f_12 = func_280();
	Local_152.f_2368.f_3[Local_152.f_2368.f_284 /*14*/].f_11 = unk_0x0A89FDFA763DCAED();
	Local_152.f_2368.f_285 = unk_0x0A89FDFA763DCAED();
	if (Local_152.f_2368.f_2 == 1)
	{
		Local_152.f_2368.f_285 = (Local_152.f_2368.f_285 + unk_0x5853B15F78E1A265(-10, 10));
	}
	func_102(1);
	if (!func_301())
	{
		func_229(func_294(), &(Local_152.f_2368.f_341));
	}
	Local_152.f_2368.f_284++;
	if (Local_152.f_2368.f_284 >= 20)
	{
		Local_152.f_2368.f_284 = 0;
	}
}

char* func_294()
{
	switch (Local_152.f_2368.f_2)
	{
		case 0:
			return "Tank_Weapon_Main_Cannon_Fire";
		
		case 1:
			return "Tank_Weapon_Flamethrower_Fire_Loop";
		
		case 2:
			return "Tank_Weapon_Rocket_Fire";
		
		case 3:
			return "Tank_Weapon_Lightning_Gun_Fire_Loop";
		
		default:
	}
	return "";
}

int func_295()
{
	switch (Local_152.f_2368.f_2)
	{
		case 0:
			return 4;
		
		case 1:
			return 1;
		
		case 2:
			return 8;
		
		case 3:
			return 2;
		
		default:
	}
	return 0;
}

int func_296()
{
	switch (Local_152.f_2368.f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_297(var uParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = func_144(func_174(), -0.007407f, 0f);
	switch (Local_152.f_2368.f_2)
	{
		case 0:
		case 2:
			*uParam0 = { func_189(func_88((Local_152.f_2368.f_321 + 0.0075f), ((Local_152.f_2368.f_321.f_1 + -0.055f) + fVar0))) };
			*uParam0 = { func_179(*uParam0, func_145(*uParam0, func_189(func_88(0.061f, 0f))), (IntToFloat(Local_152.f_2368.f_325) * -15f)) };
			*uParam1 = { func_179(*uParam0, func_145(*uParam0, func_189(func_88(1f, 0f))), (IntToFloat(Local_152.f_2368.f_325) * -15f)) };
			break;
		
		case 1:
			*uParam0 = { func_189(func_88(((Local_152.f_2368.f_321 + 0.0075f) + unk_0xC4EAB25A108C2429(-0.0005f, 0.0005f)), (((Local_152.f_2368.f_321.f_1 + -0.055f) + fVar0) + unk_0xC4EAB25A108C2429(-0.0005f, 0.0005f)))) };
			*uParam0 = { func_179(*uParam0, func_145(*uParam0, func_189(func_88(0.061f, 0f))), ((IntToFloat(Local_152.f_2368.f_325) * -15f) + IntToFloat(unk_0x5853B15F78E1A265(-5, 5)))) };
			*uParam1 = { func_179(*uParam0, func_145(*uParam0, func_189(func_88((0.15f + unk_0xC4EAB25A108C2429(0f, 0.1f)), 0f))), (IntToFloat(Local_152.f_2368.f_325) * -15f)) };
			break;
		
		case 3:
			*uParam0 = { func_189(func_88((Local_152.f_2368.f_321 + 0.0075f), ((Local_152.f_2368.f_321.f_1 + -0.055f) + fVar0))) };
			*uParam0 = { func_179(*uParam0, func_145(*uParam0, func_189(func_88((0.061f / 1.5f), 0f))), (IntToFloat(Local_152.f_2368.f_325) * -15f)) };
			*uParam1 = { func_179(*uParam0, func_145(*uParam0, func_189(func_88(1f, 0f))), (IntToFloat(Local_152.f_2368.f_325) * -15f)) };
			break;
	}
	*uParam0 = { func_87(*uParam0) };
	*uParam1 = { func_87(*uParam1) };
	if (Local_152.f_2368.f_2 == 3)
	{
		func_298(*uParam0, uParam1);
	}
}

void func_298(struct<2> Param0, var uParam1)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	int iVar3;
	float fVar4;
	
	if (Local_152.f_2368.f_325 > 0)
	{
		return;
	}
	if (Param0.f_1 > func_215(Param0, 0))
	{
		*uParam1 = { Param0 };
		func_279(*uParam1, 1);
		return;
	}
	Var0 = (Local_152.f_2340.f_4[0] - (func_219(0) / 2f));
	Var0.f_1 = Local_152.f_3;
	Var1 = { Var0 };
	iVar3 = 0;
	while (iVar3 <= (Local_152.f_745 - 1))
	{
		if (Local_152.f_2340.f_12[iVar3] == 1 && Local_152.f_1801[Local_152.f_2340.f_20[iVar3] /*14*/].f_11 & 1 == 0)
		{
			fVar4 = Var1;
			Var1 = (Var1 + func_217());
			if (func_288(Param0, *uParam1, Var0, Var1, &Var2))
			{
				*uParam1 = { Var2 };
				func_279(*uParam1, 1);
				return;
			}
			Var0.f_1 = 1f;
			Var1 = (Var1 + ((func_218() - func_217()) - func_216()));
			Var0 = Var1;
			Var1.f_1 = Local_152.f_3;
			if (func_288(Param0, *uParam1, Var0, Var1, &Var2))
			{
				*uParam1 = { Var2 };
				func_279(*uParam1, 1);
				return;
			}
			Var0 = { Var1 };
			Var1 = (fVar4 + func_218());
			Var0 = (Var1 - func_216());
		}
		else if (Local_152.f_2340.f_12[iVar3] == 2)
		{
			if (func_288(Param0, *uParam1, Var0, Var1, &Var2))
			{
				*uParam1 = { Var2 };
				func_279(*uParam1, 1);
				return;
			}
			Var0 = { Var1 };
			Var1.f_1 = (((1f - 0.06944444f) - Local_152.f_753[func_204() /*28*/].f_22.f_1) + 0.03240715f);
			if (func_288(Param0, *uParam1, Var0, Var1, &Var2))
			{
				*uParam1 = { Var2 };
				func_279(*uParam1, 1);
				return;
			}
			Var0 = { Var1 };
			Var1 = (Var1 + func_219(iVar3));
			if (func_288(Param0, *uParam1, Var0, Var1, &Var2))
			{
				*uParam1 = { Var2 };
				func_279(*uParam1, 1);
				return;
			}
			Var1.f_1 = Local_152.f_3;
			Var0 = { Var1 };
		}
		else
		{
			Var1 = (Var1 + func_219(iVar3));
		}
		iVar3++;
	}
	if (func_288(Param0, *uParam1, Var0, Var1, &Var2))
	{
		*uParam1 = { Var2 };
		func_279(*uParam1, 1);
	}
}

int func_299()
{
	switch (Local_152.f_2368.f_2)
	{
		case 0:
			if (func_285())
			{
				return 83;
			}
			return round((250f * func_281()));
		
		case 1:
			return round((50f * func_281()));
		
		case 2:
			return round((500f * func_281()));
		
		case 3:
			return 0;
		
		default:
	}
	return 2147483647;
}

void func_300()
{
	float fVar0;
	
	if (!func_301())
	{
		if (!unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_338))
		{
			unk_0xF889BDFCC181BA9F(Local_152.f_2368.f_338);
			unk_0xCDBCC1BC1184B002(Local_152.f_2368.f_338);
			Local_152.f_2368.f_338 = -1;
		}
		return;
	}
	if (Local_152.f_2368.f_338 == -1)
	{
		Local_152.f_2368.f_338 = unk_0xA9ADCC8D104AA552();
	}
	if (unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_338))
	{
		unk_0x91DFC8F68F6D9B05(Local_152.f_2368.f_338, func_294(), "dlc_vw_am_ip_tank_sounds", 0);
	}
	fVar0 = func_225(Local_152.f_2368.f_321);
	unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_338, "Screen_Position", fVar0);
}

int func_301()
{
	switch (Local_152.f_2368.f_2)
	{
		case 1:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_302()
{
	if (Local_152 != -1f && (Local_152.f_2872 / 0.164583f) >= Local_152)
	{
		return 1;
	}
	if (Local_152.f_2368.f_331 <= 0)
	{
		return 1;
	}
	if (Local_152.f_2368 == 3)
	{
		return 1;
	}
	if (Local_152.f_2368 == 4)
	{
		return 1;
	}
	return 0;
}

void func_303()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (func_302())
	{
		return;
	}
	iVar0 = 234;
	iVar1 = 235;
	iVar2 = 224;
	iVar3 = 226;
	iVar4 = 227;
	iVar5 = 228;
	iVar6 = 361;
	fVar7 = 1f;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 234;
		iVar1 = 235;
		iVar5 = 238;
		iVar6 = 187;
		iVar3 = 189;
		iVar4 = 190;
		iVar2 = 203;
		fVar7 = 0.3f;
	}
	fVar8 = unk_0x159F9B5A2920DF4E(2, 218);
	if (fVar8 < (-0.65f * fVar7) || (iVar0 != 361 && unk_0x0DBA73788F6E3C5F(2, iVar0)))
	{
		func_306(0);
	}
	else if (fVar8 > (0.65f * fVar7) || (iVar1 != 361 && unk_0x0DBA73788F6E3C5F(2, iVar1)))
	{
		func_306(1);
	}
	else if (Local_152.f_2368.f_323 > 0)
	{
		Local_152.f_2368.f_323 = 0;
		fVar9 = (Local_152.f_2873 / 10f);
		if (Local_152.f_2368.f_339 > -1 && !unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_339))
		{
			unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_339, "TankSpeed", fVar9);
		}
	}
	if (unk_0x0DBA73788F6E3C5F(2, iVar2))
	{
		func_305();
	}
	fVar10 = unk_0x159F9B5A2920DF4E(2, 220);
	if (iVar3 != 361 && unk_0xF01464D7AF0B7347(2, iVar3))
	{
		func_304(1, 1, 0);
	}
	else if (iVar4 != 361 && unk_0xF01464D7AF0B7347(2, iVar4))
	{
		func_304(-1, 1, 0);
	}
	else if ((iVar3 != 361 && unk_0x0DBA73788F6E3C5F(2, iVar3)) || fVar10 < (-0.65f * fVar7))
	{
		func_304(1, 0, fVar10);
	}
	else if ((iVar4 != 361 && unk_0x0DBA73788F6E3C5F(2, iVar4)) || fVar10 > (0.65f * fVar7))
	{
		func_304(-1, 0, fVar10);
	}
	if (unk_0xF01464D7AF0B7347(2, iVar5) || (iVar6 != 361 && unk_0xF01464D7AF0B7347(2, iVar6)))
	{
		if (Local_152.f_2368.f_325 != 0)
		{
			func_229("Tank_Turret_Move", &(Local_152.f_2368.f_342));
		}
		Local_152.f_2368.f_325 = 0;
		Local_152.f_2368.f_324 = 0;
	}
}

void func_304(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 100;
	if (unk_0x3A76A0944BE2C291(2) && (fParam2 > (0.65f * 0.3f) || fParam2 < (-0.65f * 0.3f)))
	{
		iVar0 = 50;
	}
	if (!bParam1)
	{
		if (unk_0x0A89FDFA763DCAED() < (Local_152.f_2368.f_326 + iVar0))
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	Local_152.f_2368.f_324 = Local_152.f_2368.f_325;
	Local_152.f_2368.f_325 = (Local_152.f_2368.f_325 + iParam0);
	if (Local_152.f_2368.f_325 > 9)
	{
		Local_152.f_2368.f_325 = 9;
	}
	else if (Local_152.f_2368.f_325 < -1)
	{
		Local_152.f_2368.f_325 = -1;
	}
	else
	{
		func_229("Tank_Turret_Move", &(Local_152.f_2368.f_342));
	}
	Local_152.f_2368.f_326 = unk_0x0A89FDFA763DCAED();
}

void func_305()
{
	if (Local_152.f_2368 != 0)
	{
		return;
	}
	if (unk_0x0A89FDFA763DCAED() < Local_152.f_2368.f_327 + 100)
	{
		return;
	}
	func_103(1);
	func_229("Tank_Jump", &(Local_152.f_2368.f_343));
	Local_152.f_2368.f_327 = unk_0x0A89FDFA763DCAED();
	Local_152.f_2368.f_328 = Local_152.f_2368.f_321.f_1;
	Local_152.f_2368.f_329 = (Local_152.f_2368.f_321.f_1 + -0.25f);
}

void func_306(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (Local_152.f_2368 == 2 && Local_152.f_2368.f_321.f_1 > Local_152.f_3)
	{
		return;
	}
	Local_152.f_2368.f_323 = (Local_152.f_2368.f_323 + round((unk_0x51109C28352EC9A3() * 1000f)));
	fVar0 = (to_float(Local_152.f_2368.f_323) / 250f);
	if (fVar0 > 1f)
	{
		fVar0 = 1f;
	}
	if (func_174())
	{
		fVar0 = 1f;
	}
	fVar1 = (0.15f * func_156(0f, 1f, fVar0, 1));
	if (!bParam0)
	{
		fVar1 = (fVar1 * -1f);
	}
	Local_152.f_2368.f_321 = func_134(Local_152.f_2368.f_321, fVar1);
	if (Local_152.f_2368.f_321 > 0.775f)
	{
		Local_152.f_2368.f_321 = 0.775f;
	}
	else if (Local_152.f_2368.f_321 < 0.225f)
	{
		Local_152.f_2368.f_321 = 0.225f;
	}
	fVar2 = (Local_152.f_2873 / 10f);
	if (bParam0)
	{
		fVar2 = (fVar2 + func_160(fVar0, fVar2, 0.9f));
	}
	else
	{
		fVar2 = (fVar2 - func_160(fVar0, fVar2, 0.9f));
	}
	if (Local_152.f_2368.f_339 > -1 && !unk_0x78D9ADD511FEAD8B(Local_152.f_2368.f_339))
	{
		unk_0x57973ADDF2BFAA90(Local_152.f_2368.f_339, "TankSpeed", fVar2);
	}
}

void func_307()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Local_152.f_2871 != 4)
	{
		Local_152.f_2340 = func_134(Local_152.f_2340, -0.005f);
		if (Local_152.f_2340 < (0.15625f - (Local_152.f_726 / 2f)))
		{
			Local_152.f_2340 = (Local_152.f_2340 + Local_152.f_726);
		}
	}
	Local_152.f_2340.f_1 = func_134(Local_152.f_2340.f_1, -0.01f);
	if (Local_152.f_2340.f_1 < (0.15625f - (Local_152.f_731 / 2f)))
	{
		Local_152.f_2340.f_1 = (Local_152.f_2340.f_1 + Local_152.f_731);
	}
	Local_152.f_2340.f_2 = func_134(Local_152.f_2340.f_2, -0.02f);
	if (Local_152.f_2340.f_2 < (0.15625f - (Local_152.f_736 / 2f)))
	{
		Local_152.f_2340.f_2 = (Local_152.f_2340.f_2 + Local_152.f_736);
	}
	Local_152.f_2340.f_3 = func_134(Local_152.f_2340.f_3, -0.04f);
	if (Local_152.f_2340.f_3 < (0.15625f - (Local_152.f_741 / 2f)))
	{
		Local_152.f_2340.f_3 = (Local_152.f_2340.f_3 + Local_152.f_741);
	}
	Local_152.f_2340.f_4[0] = func_134(Local_152.f_2340.f_4[0], -0.15f);
	fVar1 = func_219(0);
	if (Local_152.f_2340.f_4[0] < (0.15625f - (fVar1 / 2f)))
	{
		Local_152.f_2340.f_4[0] = (Local_152.f_2340.f_4[0] + fVar1);
		iVar0 = 0;
		while (iVar0 <= (Local_152.f_745 - 1))
		{
			if (iVar0 < (Local_152.f_745 - 1))
			{
				if (Local_152.f_2340.f_12[iVar0] != 0 && Local_152.f_2340.f_12[iVar0 + 1] == 0)
				{
					Local_152.f_2340.f_4[iVar0] = (Local_152.f_2340.f_4[iVar0] - ((func_218() - Local_152.f_746) / 2f));
				}
				else if (Local_152.f_2340.f_12[iVar0] == 0 && Local_152.f_2340.f_12[iVar0 + 1] != 0)
				{
					Local_152.f_2340.f_4[iVar0] = (Local_152.f_2340.f_4[iVar0] + ((func_218() - Local_152.f_746) / 2f));
				}
				Local_152.f_2340.f_12[iVar0] = Local_152.f_2340.f_12[iVar0 + 1];
				Local_152.f_2340.f_20[iVar0] = Local_152.f_2340.f_20[iVar0 + 1];
			}
			else
			{
				if (Local_152.f_2340.f_12[iVar0] != 0)
				{
					Local_152.f_2340.f_4[iVar0] = (Local_152.f_2340.f_4[iVar0] - ((func_218() - Local_152.f_746) / 2f));
				}
				Local_152.f_2340.f_12[iVar0] = 0;
				Local_152.f_2340.f_20[iVar0] = -1;
			}
			iVar0++;
		}
	}
	iVar0 = 1;
	while (iVar0 <= (Local_152.f_745 - 1))
	{
		fVar2 = func_219(iVar0);
		fVar3 = func_219((iVar0 - 1));
		Local_152.f_2340.f_4[iVar0] = ((Local_152.f_2340.f_4[(iVar0 - 1)] + (fVar3 / 2f)) + (fVar2 / 2f));
		iVar0++;
	}
	if (Local_152.f_2870 != 7)
	{
		return;
	}
	Local_152.f_2872 = func_134(Local_152.f_2872, 0.15f);
	func_308();
}

void func_308()
{
	int iVar0;
	
	if (Local_152.f_2871 != 4)
	{
		return;
	}
	iVar0 = floor((Local_152.f_2872 / 0.164583f));
	if (iVar0 > Local_152.f_2905)
	{
		Local_152.f_2905 = iVar0;
	}
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2904, 3))
	{
		return;
	}
	if (iVar0 < Global_262145.f_26909)
	{
		return;
	}
	func_126(27186, 1, -1);
	func_127(250, 1, -1, 1);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 3);
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 9);
	func_125();
	func_124("IAP_CH_2", Global_262145.f_26909, 7500);
}

void func_309()
{
	func_227();
	func_211();
	func_205();
	func_311();
	if (!func_310())
	{
		return;
	}
	func_7(3);
	func_8(7);
	func_51("Frontend_Go");
}

int func_310()
{
	Local_152.f_2368.f_321 = func_134(Local_152.f_2368.f_321, 0.15f);
	if (Local_152.f_2368.f_321 < 0.3f)
	{
		return 0;
	}
	Local_152.f_2368.f_321 = 0.3f;
	return 1;
}

void func_311()
{
	func_203();
	func_172();
	func_170();
	func_136(0);
	func_84();
	func_82();
}

void func_312()
{
	if (!func_119(&(Local_152.f_2882)))
	{
		func_118(&(Local_152.f_2882), 0, 0);
	}
	func_205();
	func_314();
	if (!func_313())
	{
		return;
	}
	if (!func_116(&(Local_152.f_2882), 10000, 0))
	{
		return;
	}
	func_100(&(Local_152.f_2882));
	func_12(func_13(2));
	func_8(6);
	unk_0x0AF8D3A06BB92903("dlc_vw_am_ip_in_menus_scene");
	unk_0x66B27A59829491D3("dlc_vw_am_ip_in_gameplay_scene");
	func_51("Frontend_Get_Ready");
}

int func_313()
{
	unk_0xA9911C122B3210B5(Local_152.f_2895, 0);
	if (!unk_0x9D4AFED2949F7082(Local_152.f_2895))
	{
		return 0;
	}
	return 1;
}

void func_314()
{
	func_166(&(Local_152.f_1765.f_4));
	func_83(func_318(), func_317(), 0.5f, 0.5f, 0.6875f, 0.9481481f, 0f, Local_152.f_1765);
	func_315();
	func_84();
	func_82();
}

void func_315()
{
	struct<2> Var0;
	struct<2> Var1;
	struct<4> Var2;
	char cVar3[16];
	
	switch (Local_152.f_2871)
	{
		case 0:
			Var0 = { func_88(0.016667f, 0.02963f) };
			Var1 = { func_88(0.542708f, 0.32963f) };
			break;
		
		case 1:
			Var0 = { func_88(0.158333f, 0.088889f) };
			Var1 = { func_88(0.602083f, 0.266667f) };
			break;
		
		case 2:
			Var0 = { func_88(0.075f, 0.088889f) };
			Var1 = { func_88(0.617708f, 0.322222f) };
			break;
		
		case 3:
			Var0 = { func_88(0.1f, 0.096296f) };
			Var1 = { func_88(0.384375f, 0.257407f) };
			break;
		
		case 4:
			Var0 = { func_88(0.208333f, 0.37037f) };
			Var1 = { func_88((0.504167f + (0.000520833f * 2f)), 0.416667f) };
			break;
	}
	Var1 = { func_145(Var1, func_88(-0.004166667f, 0.005555556f)) };
	Var2 = { Local_152.f_1765 };
	Var2.f_3 = round(func_156(25f, 255f, unk_0x48053974ED6F63CE(sin((to_float(unk_0x320D1840B6DAA1CC()) * 0.4f))), 4));
	func_83(func_318(), func_316(), Var1, Var1.f_1, Var0, Var0.f_1, 0f, Var2);
	if (unk_0xE2F2D76A4AA269FF() != 0)
	{
		StringCopy(&cVar3, "IAP_STAGE_D_", 16);
		StringIntConCat(&cVar3, Local_152.f_2871, 16);
		unk_0x38BD019DECCC5482(&cVar3);
		unk_0x23D3EE043DE19C4B(1, 1);
	}
}

char* func_316()
{
	switch (Local_152.f_2871)
	{
		case 0:
			return "country_1";
		
		case 1:
			return "country_2";
		
		case 2:
			return "country_3";
		
		case 3:
			return "country_4";
		
		case 4:
			return "country_5";
		
		default:
	}
	return "INVALID STAGE";
}

char* func_317()
{
	switch (Local_152.f_2871)
	{
		case 0:
			return "mission_select_screen1";
		
		case 1:
			return "mission_select_screen2";
		
		case 2:
			return "mission_select_screen3";
		
		case 3:
			return "mission_select_screen4";
		
		case 4:
			return "mission_select_screen5";
		
		default:
	}
	return "INVALID STAGE";
}

char* func_318()
{
	switch (Local_152.f_2871)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return "MpInvPersHud";
		
		case 4:
			return "MPInvPersCommon";
		
		default:
	}
	return "INVALID STAGE";
}

void func_319()
{
	func_326();
	func_325();
	func_324();
	func_322();
	if (!func_61())
	{
		return;
	}
	unk_0xB0550BC91B0159D6(&(Local_152.f_2368.f_333), 9);
	unk_0xB0550BC91B0159D6(&(Local_152.f_2368.f_333), 10);
	func_101();
	func_12(func_13(6));
	func_51("Frontend_Start");
	func_7(2);
	func_12(func_13(1));
	func_321();
	func_320(0);
	func_8(5);
}

void func_320(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Local_151, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_151, "Invade and Persuade II.", 64);
	}
	Local_151.f_16 = 0;
	Local_151.f_17 = 0;
	Local_151.f_18 = 0;
	Local_151.f_19 = unk_0xE75390F3CA208D5E();
	Local_151.f_20 = 0;
	Local_151.f_21 = 0;
}

void func_321()
{
	unk_0x58B01BEA756FA105(Local_152.f_2880);
	unk_0xF3440233F7D3E150(Local_152.f_2880);
}

void func_322()
{
	int iVar0;
	
	if (Local_152.f_2908 != -2147483647 && unk_0x0A89FDFA763DCAED() > Local_152.f_2908)
	{
		Local_152.f_2908 = -2147483647;
		Local_152.f_2909 = 0;
	}
	iVar0 = func_323();
	if (iVar0 == 361)
	{
		return;
	}
	if (unk_0xF01464D7AF0B7347(2, iVar0))
	{
		Local_152.f_2908 = unk_0x0A89FDFA763DCAED() + 600;
		Local_152.f_2909++;
	}
	if (Local_152.f_2909 >= 10)
	{
		Local_152.f_2907 = 1;
		Local_152.f_2368.f_330 = 99;
		func_51("Frontend_Retry");
		Local_152.f_2908 = -2147483647;
		Local_152.f_2909 = 0;
	}
}

int func_323()
{
	switch (Local_152.f_2909)
	{
		case 0:
		case 1:
			if (unk_0x3A76A0944BE2C291(2))
			{
				return 188;
			}
			else
			{
				return 232;
			}
			break;
		
		case 2:
		case 3:
			if (unk_0x3A76A0944BE2C291(2))
			{
				return 187;
			}
			else
			{
				return 233;
			}
			break;
		
		case 4:
		case 6:
			if (unk_0x3A76A0944BE2C291(2))
			{
				return 189;
			}
			else
			{
				return 234;
			}
			break;
		
		case 5:
		case 7:
			if (unk_0x3A76A0944BE2C291(2))
			{
				return 190;
			}
			else
			{
				return 235;
			}
			break;
		
		case 8:
			if (unk_0x3A76A0944BE2C291(2))
			{
				return 238;
			}
			else
			{
				return 225;
			}
			break;
		
		case 9:
			if (unk_0x3A76A0944BE2C291(2))
			{
				return 237;
			}
			else
			{
				return 223;
			}
			break;
	}
	return 361;
}

void func_324()
{
	if (unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 9))
	{
		if (unk_0x9612D31E71756FBE(Local_152.f_2880) >= 95f)
		{
			func_12(func_13(6));
			unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 10);
			unk_0xB0550BC91B0159D6(&(Local_152.f_2368.f_333), 9);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Local_152.f_2368.f_333), 10);
		}
	}
	if (!unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 9) && unk_0xE2D0C323A1AE5D85(Local_152.f_2368.f_333, 10))
	{
		if (unk_0x9612D31E71756FBE(Local_152.f_2880) >= 99f || unk_0x9612D31E71756FBE(Local_152.f_2880) <= 1f)
		{
			func_12(func_13(0));
			unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 9);
		}
	}
}

void func_325()
{
	char cVar0[16];
	
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 2);
	StringCopy(&cVar0, "IAP_H_TITLE", 16);
	if (unk_0xA7384DAD7CF469DA())
	{
		StringConCat(&cVar0, "_PS4", 16);
	}
	else if (unk_0x3A76A0944BE2C291(2))
	{
		StringConCat(&cVar0, "_PC", 16);
	}
	if (func_65(&cVar0))
	{
		return;
	}
	func_9();
	func_63(&cVar0);
}

void func_326()
{
	unk_0xFC36643F7A64338F(Local_152.f_2880, 0.5f, 0.5f, (1f * fLocal_148), 1f, 0f, 255, 255, 255, 255);
	if (unk_0xE2F2D76A4AA269FF() != 0)
	{
		if (unk_0x9612D31E71756FBE(Local_152.f_2880) < 30f)
		{
			unk_0x38BD019DECCC5482("IAP_INTRO");
			unk_0x23D3EE043DE19C4B(1, 1);
		}
	}
	func_84();
	func_82();
}

void func_327()
{
	float fVar0;
	int iVar1;
	
	if (!func_119(&(Local_152.f_2890)))
	{
		func_118(&(Local_152.f_2890), 0, 0);
	}
	if (!func_116(&(Local_152.f_2890), 3000, 0))
	{
		fVar0 = (to_float(func_168(&(Local_152.f_2890), 0, 0)) / 3000f);
		iVar1 = round(func_156(0f, 255f, fVar0, 4));
		func_328(iVar1);
	}
	else
	{
		func_328(255);
	}
	if (!func_116(&(Local_152.f_2890), 4000, 0))
	{
		return;
	}
	func_12(func_13(0));
	unk_0xCED9E32812D6C7C7(&(Local_152.f_2368.f_333), 9);
	func_58();
	func_8(4);
}

void func_328(int iParam0)
{
	struct<4> Var0;
	
	Var0.f_3 = 255;
	func_166(&(Local_152.f_1765.f_4));
	func_110(&Var0, 236, 109, 0, iParam0);
	func_166(&Var0);
	func_91(func_88(0.5f, 0.5f), func_88(0.658333f, 1f), Local_152.f_1765.f_4);
	Var0 = { Local_152.f_1765 };
	Var0.f_3 = iParam0;
	func_83("MpInvPersCommon", "ron_splash", 0.5f, 0.5f, 0.658333f, 1f, 0f, Var0);
	func_84();
	func_82();
}

void func_329()
{
	if (!func_330())
	{
		return;
	}
	func_8(3);
}

int func_330()
{
	unk_0xFC36643F7A64338F(Local_152.f_2879, 0.5f, 0.5f, (1f * fLocal_148), 1f, 0f, 255, 255, 255, 255);
	func_84();
	func_82();
	if (unk_0x9612D31E71756FBE(Local_152.f_2879) >= 99f)
	{
		unk_0x58B01BEA756FA105(Local_152.f_2879);
		unk_0xF3440233F7D3E150(Local_152.f_2879);
		return 1;
	}
	return 0;
}

void func_331()
{
	if (!func_333())
	{
		return;
	}
	func_332();
	unk_0x66B27A59829491D3("dlc_vw_am_ip_in_menus_scene");
	func_8(2);
}

void func_332()
{
	Local_152.f_2879 = unk_0x16CFD341BCF2F070("_1992_DegenatronLogo_720_auto");
	unk_0xE178310643033958(Local_152.f_2879);
	unk_0x01A548D39DA6CCDB(Local_152.f_2879, 1);
	func_51("Frontend_Degenatron_Screen");
}

int func_333()
{
	if (!func_334())
	{
		return 0;
	}
	unk_0xA9911C122B3210B5(func_16(), 0);
	if (!unk_0x9D4AFED2949F7082(func_16()))
	{
		return 0;
	}
	unk_0xA9911C122B3210B5("MPInvPersHud", 0);
	if (!unk_0x9D4AFED2949F7082("MPInvPersHud"))
	{
		return 0;
	}
	unk_0xA9911C122B3210B5("MPInvPersMessages", 0);
	if (!unk_0x9D4AFED2949F7082("MPInvPersMessages"))
	{
		return 0;
	}
	unk_0xA9911C122B3210B5("MPInvPersMessages2", 0);
	if (!unk_0x9D4AFED2949F7082("MPInvPersMessages2"))
	{
		return 0;
	}
	unk_0xA9911C122B3210B5("MpInvPersCommon", 0);
	if (!unk_0x9D4AFED2949F7082("MpInvPersCommon"))
	{
		return 0;
	}
	unk_0x249A0D3C5714BCF4("IAP", 3);
	if (!unk_0x5FABFB823FD821D4("IAP", 3))
	{
		return 0;
	}
	if (!unk_0x70F555A7CCF10659("DLC_VINEWOOD/DLC_VW_AM_IP", 0, -1))
	{
		return 0;
	}
	return 1;
}

bool func_334()
{
	return ((((((func_335(0) && func_335(6)) && func_335(1)) && func_335(3)) && func_335(4)) && func_335(5)) && func_335(7));
}

int func_335(int iParam0)
{
	unk_0xA9911C122B3210B5(func_89(iParam0), 0);
	if (!unk_0x9D4AFED2949F7082(func_89(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_336()
{
	func_346();
	func_345(1);
	func_343();
	func_342();
	func_341();
	func_340();
	func_337();
	func_7(1);
	func_8(1);
}

void func_337()
{
	if (func_339(253, -1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 0);
	}
	if (func_339(248, -1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 1);
	}
	if (func_339(249, -1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 2);
	}
	if (func_339(250, -1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 3);
	}
	if (func_339(251, -1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 4);
	}
	if (func_339(252, -1))
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_2904), 5);
	}
	Local_152.f_2905 = func_338(8358, -1, 0);
}

int func_338(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_128(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_339(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_128(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_340()
{
	func_110(&(Local_152.f_1765), 255, 255, 255, 255);
	func_110(&(Local_152.f_1765.f_4), 0, 0, 0, 255);
	func_110(&(Local_152.f_1765.f_8), 0, 255, 0, 255);
	func_110(&(Local_152.f_1765.f_12), 255, 0, 0, 255);
	func_110(&(Local_152.f_1765.f_16), 24, 203, 247, 255);
	func_110(&(Local_152.f_1765.f_20), 27, 37, 27, 255);
	func_110(&(Local_152.f_1765.f_24), 255, 240, 127, 255);
	func_110(&(Local_152.f_1765.f_28), 103, 115, 87, 255);
	func_110(&(Local_152.f_1765.f_32), 154, 255, 0, 255);
}

void func_341()
{
	Local_152.f_2214.f_2[0 /*11*/][0] = 1.5f;
	Local_152.f_2214.f_2[0 /*11*/][1] = 1f;
	Local_152.f_2214.f_2[0 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[0 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[0 /*11*/][4] = 1f;
	Local_152.f_2214.f_2[0 /*11*/][5] = 1f;
	Local_152.f_2214.f_2[0 /*11*/][6] = 1.5f;
	Local_152.f_2214.f_2[0 /*11*/][7] = 2f;
	Local_152.f_2214.f_2[0 /*11*/][8] = 2.5f;
	Local_152.f_2214.f_2[0 /*11*/][9] = 0.5f;
	Local_152.f_2214.f_2[1 /*11*/][0] = 1f;
	Local_152.f_2214.f_2[1 /*11*/][1] = 1.5f;
	Local_152.f_2214.f_2[1 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[1 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[1 /*11*/][4] = 0f;
	Local_152.f_2214.f_2[1 /*11*/][5] = 0f;
	Local_152.f_2214.f_2[1 /*11*/][6] = 0.75f;
	Local_152.f_2214.f_2[1 /*11*/][7] = 1.5f;
	Local_152.f_2214.f_2[1 /*11*/][8] = 2f;
	Local_152.f_2214.f_2[1 /*11*/][9] = 1f;
	Local_152.f_2214.f_2[2 /*11*/][0] = 0f;
	Local_152.f_2214.f_2[2 /*11*/][1] = 0.25f;
	Local_152.f_2214.f_2[2 /*11*/][2] = 0.75f;
	Local_152.f_2214.f_2[2 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[2 /*11*/][4] = 0f;
	Local_152.f_2214.f_2[2 /*11*/][5] = 0f;
	Local_152.f_2214.f_2[2 /*11*/][6] = 0f;
	Local_152.f_2214.f_2[2 /*11*/][7] = 0f;
	Local_152.f_2214.f_2[2 /*11*/][8] = 0f;
	Local_152.f_2214.f_2[2 /*11*/][9] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][0] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][1] = 0.75f;
	Local_152.f_2214.f_2[3 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][3] = 0.6f;
	Local_152.f_2214.f_2[3 /*11*/][4] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][5] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][6] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][7] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][8] = 0f;
	Local_152.f_2214.f_2[3 /*11*/][9] = 0f;
	Local_152.f_2214.f_2[4 /*11*/][0] = 0f;
	Local_152.f_2214.f_2[4 /*11*/][1] = 1f;
	Local_152.f_2214.f_2[4 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[4 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[4 /*11*/][4] = 40f;
	Local_152.f_2214.f_2[4 /*11*/][5] = 20f;
	Local_152.f_2214.f_2[4 /*11*/][6] = 1f;
	Local_152.f_2214.f_2[4 /*11*/][7] = 1.5f;
	Local_152.f_2214.f_2[4 /*11*/][8] = 2f;
	Local_152.f_2214.f_2[4 /*11*/][9] = 0f;
	Local_152.f_2214.f_2[5 /*11*/][0] = 0f;
	Local_152.f_2214.f_2[5 /*11*/][1] = 1f;
	Local_152.f_2214.f_2[5 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[5 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[5 /*11*/][4] = 20f;
	Local_152.f_2214.f_2[5 /*11*/][5] = 20f;
	Local_152.f_2214.f_2[5 /*11*/][6] = 1f;
	Local_152.f_2214.f_2[5 /*11*/][7] = 1.5f;
	Local_152.f_2214.f_2[5 /*11*/][8] = 2f;
	Local_152.f_2214.f_2[5 /*11*/][9] = 0f;
	Local_152.f_2214.f_2[6 /*11*/][0] = 1f;
	Local_152.f_2214.f_2[6 /*11*/][1] = 1f;
	Local_152.f_2214.f_2[6 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[6 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[6 /*11*/][4] = 2.5f;
	Local_152.f_2214.f_2[6 /*11*/][5] = 2.5f;
	Local_152.f_2214.f_2[6 /*11*/][6] = 50f;
	Local_152.f_2214.f_2[6 /*11*/][7] = 50f;
	Local_152.f_2214.f_2[6 /*11*/][8] = 50f;
	Local_152.f_2214.f_2[6 /*11*/][9] = 0.5f;
	Local_152.f_2214.f_2[7 /*11*/][0] = 1f;
	Local_152.f_2214.f_2[7 /*11*/][1] = 2f;
	Local_152.f_2214.f_2[7 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[7 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[7 /*11*/][4] = 2.5f;
	Local_152.f_2214.f_2[7 /*11*/][5] = 2.5f;
	Local_152.f_2214.f_2[7 /*11*/][6] = 50f;
	Local_152.f_2214.f_2[7 /*11*/][7] = 50f;
	Local_152.f_2214.f_2[7 /*11*/][8] = 50f;
	Local_152.f_2214.f_2[7 /*11*/][9] = 1f;
	Local_152.f_2214.f_2[8 /*11*/][0] = 1.5f;
	Local_152.f_2214.f_2[8 /*11*/][1] = 2f;
	Local_152.f_2214.f_2[8 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[8 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[8 /*11*/][4] = 2.5f;
	Local_152.f_2214.f_2[8 /*11*/][5] = 2.5f;
	Local_152.f_2214.f_2[8 /*11*/][6] = 40f;
	Local_152.f_2214.f_2[8 /*11*/][7] = 50f;
	Local_152.f_2214.f_2[8 /*11*/][8] = 60f;
	Local_152.f_2214.f_2[8 /*11*/][9] = 1.5f;
	Local_152.f_2214.f_2[9 /*11*/][0] = 0.5f;
	Local_152.f_2214.f_2[9 /*11*/][1] = 1.5f;
	Local_152.f_2214.f_2[9 /*11*/][2] = 0f;
	Local_152.f_2214.f_2[9 /*11*/][3] = 0f;
	Local_152.f_2214.f_2[9 /*11*/][4] = 0f;
	Local_152.f_2214.f_2[9 /*11*/][5] = 0f;
	Local_152.f_2214.f_2[9 /*11*/][6] = 1f;
	Local_152.f_2214.f_2[9 /*11*/][7] = 1.5f;
	Local_152.f_2214.f_2[9 /*11*/][8] = 2f;
	Local_152.f_2214.f_2[9 /*11*/][9] = 1.5f;
}

void func_342()
{
	Local_152.f_1734[0 /*5*/].f_1 = 0;
	Local_152.f_1734[0 /*5*/].f_2 = 2000;
	Local_152.f_1734[0 /*5*/] = "tank_fire_blast";
	Local_152.f_1734[0 /*5*/].f_3 = { func_88(0.020833f, 0.011111f) };
	Local_152.f_1734[1 /*5*/].f_1 = 8;
	Local_152.f_1734[1 /*5*/].f_2 = 5000;
	Local_152.f_1734[1 /*5*/] = "oil_drum";
	Local_152.f_1734[1 /*5*/].f_3 = { func_88(0.054167f, 0.092593f) };
	Local_152.f_1734[2 /*5*/].f_1 = 0;
	Local_152.f_1734[2 /*5*/].f_2 = 2000;
	Local_152.f_1734[2 /*5*/] = "enemy_blast";
	Local_152.f_1734[2 /*5*/].f_3 = { func_88(0.027083f, 0.022222f) };
	Local_152.f_1734[3 /*5*/].f_1 = 9;
	Local_152.f_1734[3 /*5*/].f_2 = 800;
	Local_152.f_1734[3 /*5*/] = "fire_ball";
	Local_152.f_1734[3 /*5*/].f_3 = { func_88(0.035417f, 0.062963f) };
	Local_152.f_1734[4 /*5*/].f_1 = 2;
	Local_152.f_1734[4 /*5*/].f_2 = 6000;
	Local_152.f_1734[4 /*5*/] = "homing_rocket";
	Local_152.f_1734[4 /*5*/].f_3 = { func_88(0.0375f, 0.018519f) };
	Local_152.f_1734[5 /*5*/].f_1 = 4;
	Local_152.f_1734[5 /*5*/].f_2 = 0;
	Local_152.f_1734[5 /*5*/] = "plasma";
	Local_152.f_1734[5 /*5*/].f_3 = { func_88(0.025f, 0.044444f) };
}

void func_343()
{
	Local_152.f_753[0 /*28*/] = 0;
	Local_152.f_753[0 /*28*/].f_24 = "camel_idle";
	Local_152.f_753[0 /*28*/].f_25 = 4;
	Local_152.f_753[0 /*28*/].f_1 = 0.15f;
	Local_152.f_753[0 /*28*/].f_2 = -0.075926f;
	Local_152.f_753[0 /*28*/].f_22 = { func_88(0.108333f, 0.151852f) };
	Local_152.f_753[0 /*28*/].f_3 = { func_88(-0.017708f, -0.043f) };
	Local_152.f_753[0 /*28*/].f_14 = 950;
	Local_152.f_753[0 /*28*/].f_15 = 4;
	Local_152.f_753[0 /*28*/].f_17 = 16;
	Local_152.f_753[0 /*28*/].f_16 = 2000;
	Local_152.f_753[0 /*28*/].f_5[0 /*2*/] = { func_88(-0.003f, 0.069f) };
	Local_152.f_753[0 /*28*/].f_5[1 /*2*/] = { func_88(-0.054f, -0.019f) };
	Local_152.f_753[0 /*28*/].f_5[2 /*2*/] = { func_88(0.027f, -0.074f) };
	Local_152.f_753[0 /*28*/].f_5[3 /*2*/] = { func_88(0.051f, 0.047f) };
	Local_152.f_753[0 /*28*/].f_27 = 2;
	Local_152.f_753[0 /*28*/].f_26 = "camel_fire";
	Local_152.f_753[0 /*28*/].f_18 = 1;
	func_344(0, 1, 0, 0, 0, 1);
	Local_152.f_753[0 /*28*/].f_20 = "IAP_H_SHOOT";
	Local_152.f_753[0 /*28*/].f_21 = 7500;
	Local_152.f_753[1 /*28*/] = 0;
	Local_152.f_753[1 /*28*/].f_24 = "panda_idle";
	Local_152.f_753[1 /*28*/].f_25 = 4;
	Local_152.f_753[1 /*28*/].f_1 = 0.15f;
	Local_152.f_753[1 /*28*/].f_2 = -0.094444f;
	Local_152.f_753[1 /*28*/].f_22 = { func_88(0.089583f, 0.185185f) };
	Local_152.f_753[1 /*28*/].f_3 = { func_88(-0.026042f, -0.02037f) };
	Local_152.f_753[1 /*28*/].f_14 = 950;
	Local_152.f_753[1 /*28*/].f_15 = 4;
	Local_152.f_753[1 /*28*/].f_17 = 16;
	Local_152.f_753[1 /*28*/].f_16 = 2000;
	Local_152.f_753[1 /*28*/].f_5[0 /*2*/] = { func_88(-0.03125f, 0.080556f) };
	Local_152.f_753[1 /*28*/].f_5[1 /*2*/] = { func_88(0f, -0.08f) };
	Local_152.f_753[1 /*28*/].f_5[2 /*2*/] = { func_88(0.035938f, -0.08f) };
	Local_152.f_753[1 /*28*/].f_5[3 /*2*/] = { func_88(0.035938f, 0.080556f) };
	Local_152.f_753[1 /*28*/].f_27 = 2;
	Local_152.f_753[1 /*28*/].f_26 = "panda_fire";
	Local_152.f_753[1 /*28*/].f_18 = 1;
	func_344(1, 0, 0, 1, 0, 1);
	Local_152.f_753[1 /*28*/].f_20 = func_10();
	Local_152.f_753[1 /*28*/].f_21 = 7500;
	Local_152.f_753[2 /*28*/] = 0;
	Local_152.f_753[2 /*28*/].f_24 = "bear_idle";
	Local_152.f_753[2 /*28*/].f_25 = 4;
	Local_152.f_753[2 /*28*/].f_1 = 0.15f;
	Local_152.f_753[2 /*28*/].f_2 = -0.07037f;
	Local_152.f_753[2 /*28*/].f_22 = { func_88(0.104167f, 0.144444f) };
	Local_152.f_753[2 /*28*/].f_3 = { func_88(-0.032813f, -0.050926f) };
	Local_152.f_753[2 /*28*/].f_14 = 950;
	Local_152.f_753[2 /*28*/].f_15 = 4;
	Local_152.f_753[2 /*28*/].f_17 = 16;
	Local_152.f_753[2 /*28*/].f_16 = 2000;
	Local_152.f_753[2 /*28*/].f_5[0 /*2*/] = { func_88(-0.046875f, 0.003704f) };
	Local_152.f_753[2 /*28*/].f_5[1 /*2*/] = { func_88(0.005208f, -0.072222f) };
	Local_152.f_753[2 /*28*/].f_5[2 /*2*/] = { func_88(0.05625f, 0.02037f) };
	Local_152.f_753[2 /*28*/].f_5[3 /*2*/] = { func_88(-0.029167f, 0.07037f) };
	Local_152.f_753[2 /*28*/].f_27 = 2;
	Local_152.f_753[2 /*28*/].f_26 = "bear_fire";
	Local_152.f_753[2 /*28*/].f_18 = 1;
	func_344(2, 0, 1, 0, 0, 1);
	Local_152.f_753[2 /*28*/].f_20 = func_10();
	Local_152.f_753[2 /*28*/].f_21 = 7500;
	Local_152.f_753[3 /*28*/] = 0;
	Local_152.f_753[3 /*28*/].f_24 = "moose_idle";
	Local_152.f_753[3 /*28*/].f_25 = 3;
	Local_152.f_753[3 /*28*/].f_1 = 0.15f;
	Local_152.f_753[3 /*28*/].f_2 = -0.092593f;
	Local_152.f_753[3 /*28*/].f_22 = { func_88(0.108333f, 0.185185f) };
	Local_152.f_753[3 /*28*/].f_3 = { func_88(-0.025521f, -0.02037f) };
	Local_152.f_753[3 /*28*/].f_14 = 950;
	Local_152.f_753[3 /*28*/].f_15 = 4;
	Local_152.f_753[3 /*28*/].f_17 = 16;
	Local_152.f_753[3 /*28*/].f_16 = 2000;
	Local_152.f_753[3 /*28*/].f_5[0 /*2*/] = { func_88(-0.053646f, -0.017593f) };
	Local_152.f_753[3 /*28*/].f_5[1 /*2*/] = { func_88(-0.020313f, -0.092593f) };
	Local_152.f_753[3 /*28*/].f_5[2 /*2*/] = { func_88(0.053646f, 0.013889f) };
	Local_152.f_753[3 /*28*/].f_5[3 /*2*/] = { func_88(-0.020313f, 0.092593f) };
	Local_152.f_753[3 /*28*/].f_27 = 2;
	Local_152.f_753[3 /*28*/].f_26 = "moose_fire";
	Local_152.f_753[3 /*28*/].f_18 = 1;
	func_344(3, 0, 0, 0, 1, 1);
	Local_152.f_753[3 /*28*/].f_20 = func_10();
	Local_152.f_753[3 /*28*/].f_21 = 7500;
	Local_152.f_753[4 /*28*/] = 1;
	Local_152.f_753[4 /*28*/].f_24 = "jet_idle";
	Local_152.f_753[4 /*28*/].f_25 = 4;
	Local_152.f_753[4 /*28*/].f_1 = 0.25f;
	Local_152.f_753[4 /*28*/].f_2 = (0.15f + 0.06944444f);
	Local_152.f_753[4 /*28*/].f_22 = { func_88(0.16875f, 0.111111f) };
	Local_152.f_753[4 /*28*/].f_3 = { func_88(0.05f, 0.05f) };
	Local_152.f_753[4 /*28*/].f_14 = 350;
	Local_152.f_753[4 /*28*/].f_15 = 4;
	Local_152.f_753[4 /*28*/].f_17 = 8;
	Local_152.f_753[4 /*28*/].f_16 = 2500;
	Local_152.f_753[4 /*28*/].f_5[0 /*2*/] = { func_88(-0.082f, 0.021f) };
	Local_152.f_753[4 /*28*/].f_5[1 /*2*/] = { func_88(-0.04f, -0.022f) };
	Local_152.f_753[4 /*28*/].f_5[2 /*2*/] = { func_88(0.089f, 0.003f) };
	Local_152.f_753[4 /*28*/].f_5[3 /*2*/] = { func_88(0.038f, 0.049f) };
	Local_152.f_753[4 /*28*/].f_18 = 2;
	func_344(4, 1, 1, 1, 1, 1);
	Local_152.f_753[4 /*28*/].f_20 = func_10();
	Local_152.f_753[4 /*28*/].f_21 = 7500;
	Local_152.f_753[5 /*28*/] = 2;
	Local_152.f_753[5 /*28*/].f_24 = "pod_idle";
	Local_152.f_753[5 /*28*/].f_25 = 4;
	Local_152.f_753[5 /*28*/].f_1 = 0.175f;
	Local_152.f_753[5 /*28*/].f_2 = (0f + 0.06944444f);
	Local_152.f_753[5 /*28*/].f_22 = { func_88(0.089583f, 0.1f) };
	Local_152.f_753[5 /*28*/].f_3 = { func_88(-0.025f, 0.035185f) };
	Local_152.f_753[5 /*28*/].f_14 = 700;
	Local_152.f_753[5 /*28*/].f_15 = 4;
	Local_152.f_753[5 /*28*/].f_17 = 4;
	Local_152.f_753[5 /*28*/].f_16 = 1250;
	Local_152.f_753[5 /*28*/].f_5[0 /*2*/] = { func_88((-0.16875f / 5f), (0.111111f / 4f)) };
	Local_152.f_753[5 /*28*/].f_5[1 /*2*/] = { func_88((-0.16875f / 5f), (-0.111111f / 3f)) };
	Local_152.f_753[5 /*28*/].f_5[2 /*2*/] = { func_88((0.16875f / 6f), (-0.111111f / 3f)) };
	Local_152.f_753[5 /*28*/].f_5[3 /*2*/] = { func_88((0.16875f / 6f), (0.111111f / 4f)) };
	Local_152.f_753[5 /*28*/].f_27 = 4;
	Local_152.f_753[5 /*28*/].f_26 = "pod_fire";
	Local_152.f_753[5 /*28*/].f_18 = 3;
	func_344(5, 1, 1, 1, 1, 1);
	Local_152.f_753[5 /*28*/].f_20 = "IAP_H_ROT";
	Local_152.f_753[5 /*28*/].f_21 = 7500;
	Local_152.f_753[18 /*28*/] = 5;
	Local_152.f_753[18 /*28*/].f_24 = "pickup_flame";
	Local_152.f_753[18 /*28*/].f_25 = 0;
	Local_152.f_753[18 /*28*/].f_1 = 0.15f;
	Local_152.f_753[18 /*28*/].f_2 = -0.031f;
	Local_152.f_753[18 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[18 /*28*/].f_17 = 1;
	Local_152.f_753[18 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[18 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[18 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[18 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[18 /*28*/].f_18 = 4;
	func_344(18, 1, 1, 1, 1, 1);
	Local_152.f_753[18 /*28*/].f_20 = func_10();
	Local_152.f_753[18 /*28*/].f_21 = 7500;
	Local_152.f_753[19 /*28*/] = 5;
	Local_152.f_753[19 /*28*/].f_24 = "pickup_rocket";
	Local_152.f_753[19 /*28*/].f_25 = 0;
	Local_152.f_753[19 /*28*/].f_1 = 0.15f;
	Local_152.f_753[19 /*28*/].f_2 = -0.031f;
	Local_152.f_753[19 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[19 /*28*/].f_17 = 1;
	Local_152.f_753[19 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[19 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[19 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[19 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[19 /*28*/].f_18 = 4;
	func_344(19, 1, 1, 1, 1, 1);
	Local_152.f_753[19 /*28*/].f_20 = func_10();
	Local_152.f_753[19 /*28*/].f_21 = 7500;
	Local_152.f_753[20 /*28*/] = 5;
	Local_152.f_753[20 /*28*/].f_24 = "pickup_health";
	Local_152.f_753[20 /*28*/].f_25 = 0;
	Local_152.f_753[20 /*28*/].f_1 = 0.15f;
	Local_152.f_753[20 /*28*/].f_2 = -0.031f;
	Local_152.f_753[20 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[20 /*28*/].f_17 = 1;
	Local_152.f_753[20 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[20 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[20 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[20 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[20 /*28*/].f_18 = 5;
	func_344(20, 1, 1, 1, 1, 1);
	Local_152.f_753[20 /*28*/].f_20 = func_10();
	Local_152.f_753[20 /*28*/].f_21 = 7500;
	Local_152.f_753[21 /*28*/] = 5;
	Local_152.f_753[21 /*28*/].f_24 = "pickup_life";
	Local_152.f_753[21 /*28*/].f_25 = 0;
	Local_152.f_753[21 /*28*/].f_1 = 0.15f;
	Local_152.f_753[21 /*28*/].f_2 = -0.031f;
	Local_152.f_753[21 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[21 /*28*/].f_17 = 1;
	Local_152.f_753[21 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[21 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[21 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[21 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[21 /*28*/].f_18 = 4;
	func_344(21, 1, 1, 1, 1, 1);
	Local_152.f_753[21 /*28*/].f_20 = func_10();
	Local_152.f_753[21 /*28*/].f_21 = 7500;
	Local_152.f_753[22 /*28*/] = 5;
	Local_152.f_753[22 /*28*/].f_24 = "pickup_score";
	Local_152.f_753[22 /*28*/].f_25 = 0;
	Local_152.f_753[22 /*28*/].f_1 = 0.15f;
	Local_152.f_753[22 /*28*/].f_2 = -0.031f;
	Local_152.f_753[22 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[22 /*28*/].f_17 = 1;
	Local_152.f_753[22 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[22 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[22 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[22 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[22 /*28*/].f_18 = 5;
	func_344(22, 1, 1, 1, 1, 1);
	Local_152.f_753[22 /*28*/].f_20 = "IAP_H_PICKUP";
	Local_152.f_753[22 /*28*/].f_21 = 7500;
	Local_152.f_753[23 /*28*/] = 5;
	Local_152.f_753[23 /*28*/].f_24 = "pickup_shield";
	Local_152.f_753[23 /*28*/].f_25 = 0;
	Local_152.f_753[23 /*28*/].f_1 = 0.15f;
	Local_152.f_753[23 /*28*/].f_2 = -0.031f;
	Local_152.f_753[23 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[23 /*28*/].f_17 = 1;
	Local_152.f_753[23 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[23 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[23 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[23 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[23 /*28*/].f_18 = 5;
	func_344(23, 1, 1, 1, 1, 1);
	Local_152.f_753[23 /*28*/].f_20 = func_10();
	Local_152.f_753[23 /*28*/].f_21 = 7500;
	Local_152.f_753[24 /*28*/] = 5;
	Local_152.f_753[24 /*28*/].f_24 = "pickup_enemy";
	Local_152.f_753[24 /*28*/].f_25 = 0;
	Local_152.f_753[24 /*28*/].f_1 = 0.15f;
	Local_152.f_753[24 /*28*/].f_2 = -0.031f;
	Local_152.f_753[24 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[24 /*28*/].f_17 = 1;
	Local_152.f_753[24 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[24 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[24 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[24 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[24 /*28*/].f_18 = 5;
	func_344(24, 1, 1, 1, 1, 1);
	Local_152.f_753[24 /*28*/].f_20 = func_10();
	Local_152.f_753[24 /*28*/].f_21 = 7500;
	Local_152.f_753[25 /*28*/] = 5;
	Local_152.f_753[25 /*28*/].f_24 = "pickup_plasma";
	Local_152.f_753[25 /*28*/].f_25 = 0;
	Local_152.f_753[25 /*28*/].f_1 = 0.15f;
	Local_152.f_753[25 /*28*/].f_2 = -0.031f;
	Local_152.f_753[25 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[25 /*28*/].f_17 = 1;
	Local_152.f_753[25 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[25 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[25 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[25 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[25 /*28*/].f_18 = 4;
	func_344(25, 1, 1, 1, 1, 1);
	Local_152.f_753[25 /*28*/].f_20 = func_10();
	Local_152.f_753[25 /*28*/].f_21 = 7500;
	Local_152.f_753[26 /*28*/] = 5;
	Local_152.f_753[26 /*28*/].f_24 = "pickup_triple";
	Local_152.f_753[26 /*28*/].f_25 = 0;
	Local_152.f_753[26 /*28*/].f_1 = 0.15f;
	Local_152.f_753[26 /*28*/].f_2 = -0.031f;
	Local_152.f_753[26 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[26 /*28*/].f_17 = 1;
	Local_152.f_753[26 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[26 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[26 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[26 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[26 /*28*/].f_18 = 4;
	func_344(26, 1, 1, 1, 1, 1);
	Local_152.f_753[26 /*28*/].f_20 = func_10();
	Local_152.f_753[26 /*28*/].f_21 = 7500;
	Local_152.f_753[27 /*28*/] = 5;
	Local_152.f_753[27 /*28*/].f_24 = "pickup_nuke";
	Local_152.f_753[27 /*28*/].f_25 = 0;
	Local_152.f_753[27 /*28*/].f_1 = 0.15f;
	Local_152.f_753[27 /*28*/].f_2 = -0.031f;
	Local_152.f_753[27 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[27 /*28*/].f_17 = 1;
	Local_152.f_753[27 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[27 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[27 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[27 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[27 /*28*/].f_18 = 4;
	func_344(27, 1, 1, 1, 1, 1);
	Local_152.f_753[27 /*28*/].f_20 = func_10();
	Local_152.f_753[27 /*28*/].f_21 = 7500;
	Local_152.f_753[28 /*28*/] = 5;
	Local_152.f_753[28 /*28*/].f_24 = "pickup_random";
	Local_152.f_753[28 /*28*/].f_25 = 0;
	Local_152.f_753[28 /*28*/].f_1 = 0.15f;
	Local_152.f_753[28 /*28*/].f_2 = -0.031f;
	Local_152.f_753[28 /*28*/].f_22 = { func_88(0.04375f, 0.066667f) };
	Local_152.f_753[28 /*28*/].f_17 = 1;
	Local_152.f_753[28 /*28*/].f_5[0 /*2*/] = { func_88(-0.0238f, 0.035f) };
	Local_152.f_753[28 /*28*/].f_5[1 /*2*/] = { func_88(-0.0238f, -0.035f) };
	Local_152.f_753[28 /*28*/].f_5[2 /*2*/] = { func_88(0.0238f, -0.035f) };
	Local_152.f_753[28 /*28*/].f_5[3 /*2*/] = { func_88(0.0238f, 0.035f) };
	Local_152.f_753[28 /*28*/].f_18 = 4;
	func_344(28, 1, 1, 1, 1, 1);
	Local_152.f_753[28 /*28*/].f_20 = func_10();
	Local_152.f_753[28 /*28*/].f_21 = 7500;
	Local_152.f_753[6 /*28*/] = 7;
	Local_152.f_753[6 /*28*/].f_24 = "jet_crash";
	Local_152.f_753[6 /*28*/].f_25 = 0;
	Local_152.f_753[6 /*28*/].f_1 = 0.15f;
	Local_152.f_753[6 /*28*/].f_2 = -0.1f;
	Local_152.f_753[6 /*28*/].f_22 = { func_88(0.13125f, 0.207407f) };
	Local_152.f_753[6 /*28*/].f_17 = 12;
	Local_152.f_753[6 /*28*/].f_16 = 1000;
	Local_152.f_753[6 /*28*/].f_5[0 /*2*/] = { func_88(-0.0625f, 0.097222f) };
	Local_152.f_753[6 /*28*/].f_5[1 /*2*/] = { func_88(-0.005208f, -0.014815f) };
	Local_152.f_753[6 /*28*/].f_5[2 /*2*/] = { func_88(0.028646f, -0.101852f) };
	Local_152.f_753[6 /*28*/].f_5[3 /*2*/] = { func_88(0.056771f, 0.037037f) };
	Local_152.f_753[6 /*28*/].f_18 = 1;
	func_344(6, 1, 1, 1, 1, 1);
	Local_152.f_753[6 /*28*/].f_20 = func_10();
	Local_152.f_753[6 /*28*/].f_21 = 7500;
	Local_152.f_753[33 /*28*/] = 7;
	Local_152.f_753[33 /*28*/].f_24 = "crashed_tank";
	Local_152.f_753[33 /*28*/].f_25 = 0;
	Local_152.f_753[33 /*28*/].f_1 = 0.15f;
	Local_152.f_753[33 /*28*/].f_2 = -0.07f;
	Local_152.f_753[33 /*28*/].f_22 = { func_88(0.10625f, 0.1444445f) };
	Local_152.f_753[33 /*28*/].f_17 = 12;
	Local_152.f_753[33 /*28*/].f_16 = 1000;
	Local_152.f_753[33 /*28*/].f_5[0 /*2*/] = { func_88(-0.053125f, 0.07222223f) };
	Local_152.f_753[33 /*28*/].f_5[1 /*2*/] = { func_88(0f, -0.07222223f) };
	Local_152.f_753[33 /*28*/].f_5[2 /*2*/] = { func_88(0.03802083f, -0.07222223f) };
	Local_152.f_753[33 /*28*/].f_5[3 /*2*/] = { func_88(0.053125f, 0.07222223f) };
	Local_152.f_753[33 /*28*/].f_18 = 1;
	func_344(33, 0, 0, 0, 0, 0);
	Local_152.f_753[33 /*28*/].f_20 = func_10();
	Local_152.f_753[33 /*28*/].f_21 = 7500;
	Local_152.f_753[7 /*28*/] = 8;
	Local_152.f_753[7 /*28*/].f_24 = "anti_tank_barrier";
	Local_152.f_753[7 /*28*/].f_25 = 0;
	Local_152.f_753[7 /*28*/].f_1 = 0.15f;
	Local_152.f_753[7 /*28*/].f_2 = -0.055556f;
	Local_152.f_753[7 /*28*/].f_22 = { func_88(0.066667f, 0.122222f) };
	Local_152.f_753[7 /*28*/].f_17 = 1;
	Local_152.f_753[7 /*28*/].f_5[0 /*2*/] = { func_88(-0.03f, 0.055f) };
	Local_152.f_753[7 /*28*/].f_5[1 /*2*/] = { func_88(-0.03f, -0.05f) };
	Local_152.f_753[7 /*28*/].f_5[2 /*2*/] = { func_88(0.03f, -0.05f) };
	Local_152.f_753[7 /*28*/].f_5[3 /*2*/] = { func_88(0.03f, 0.055f) };
	Local_152.f_753[7 /*28*/].f_18 = 1;
	func_344(7, 1, 1, 1, 1, 1);
	Local_152.f_753[7 /*28*/].f_20 = "IAP_H_JUMP";
	Local_152.f_753[7 /*28*/].f_21 = 7500;
	Local_152.f_753[8 /*28*/] = 3;
	Local_152.f_753[8 /*28*/].f_24 = "pitfall";
	Local_152.f_753[8 /*28*/].f_25 = 0;
	Local_152.f_753[8 /*28*/].f_1 = 0.15f;
	Local_152.f_753[8 /*28*/].f_2 = ((0.89444f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[8 /*28*/].f_22 = { func_88(0.422917f, 0.211111f) };
	Local_152.f_753[8 /*28*/].f_17 = 1;
	Local_152.f_753[8 /*28*/].f_5[0 /*2*/] = { func_88(-0.015f, -0.075f) };
	Local_152.f_753[8 /*28*/].f_5[1 /*2*/] = { func_88(-0.015f, -0.14f) };
	Local_152.f_753[8 /*28*/].f_5[2 /*2*/] = { func_88(0.015f, -0.14f) };
	Local_152.f_753[8 /*28*/].f_5[3 /*2*/] = { func_88(0.015f, -0.075f) };
	Local_152.f_753[8 /*28*/].f_18 = 0;
	func_344(8, 1, 0, 0, 0, 0);
	Local_152.f_753[8 /*28*/].f_20 = func_10();
	Local_152.f_753[8 /*28*/].f_21 = 7500;
	Local_152.f_753[9 /*28*/] = 3;
	Local_152.f_753[9 /*28*/].f_24 = "pitfall";
	Local_152.f_753[9 /*28*/].f_25 = 0;
	Local_152.f_753[9 /*28*/].f_1 = 0.15f;
	Local_152.f_753[9 /*28*/].f_2 = ((0.892592f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[9 /*28*/].f_22 = { func_88(0.308333f, 0.214815f) };
	Local_152.f_753[9 /*28*/].f_17 = 1;
	Local_152.f_753[9 /*28*/].f_5[0 /*2*/] = { func_88(-0.015f, -0.075f) };
	Local_152.f_753[9 /*28*/].f_5[1 /*2*/] = { func_88(-0.015f, -0.14f) };
	Local_152.f_753[9 /*28*/].f_5[2 /*2*/] = { func_88(0.015f, -0.14f) };
	Local_152.f_753[9 /*28*/].f_5[3 /*2*/] = { func_88(0.015f, -0.075f) };
	Local_152.f_753[9 /*28*/].f_18 = 0;
	func_344(9, 0, 1, 0, 0, 0);
	Local_152.f_753[9 /*28*/].f_20 = func_10();
	Local_152.f_753[9 /*28*/].f_21 = 7500;
	Local_152.f_753[10 /*28*/] = 3;
	Local_152.f_753[10 /*28*/].f_24 = "pitfall";
	Local_152.f_753[10 /*28*/].f_25 = 0;
	Local_152.f_753[10 /*28*/].f_1 = 0.15f;
	Local_152.f_753[10 /*28*/].f_2 = ((0.89444f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[10 /*28*/].f_22 = { func_88(0.308333f, 0.211111f) };
	Local_152.f_753[10 /*28*/].f_17 = 1;
	Local_152.f_753[10 /*28*/].f_5[0 /*2*/] = { func_88(-0.015f, -0.075f) };
	Local_152.f_753[10 /*28*/].f_5[1 /*2*/] = { func_88(-0.015f, -0.14f) };
	Local_152.f_753[10 /*28*/].f_5[2 /*2*/] = { func_88(0.015f, -0.14f) };
	Local_152.f_753[10 /*28*/].f_5[3 /*2*/] = { func_88(0.015f, -0.075f) };
	Local_152.f_753[10 /*28*/].f_18 = 0;
	func_344(10, 0, 0, 1, 0, 0);
	Local_152.f_753[10 /*28*/].f_20 = func_10();
	Local_152.f_753[10 /*28*/].f_21 = 7500;
	Local_152.f_753[11 /*28*/] = 3;
	Local_152.f_753[11 /*28*/].f_24 = "pitfall";
	Local_152.f_753[11 /*28*/].f_25 = 0;
	Local_152.f_753[11 /*28*/].f_1 = 0.15f;
	Local_152.f_753[11 /*28*/].f_2 = ((0.892592f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[11 /*28*/].f_22 = { func_88(0.30625f, 0.214815f) };
	Local_152.f_753[11 /*28*/].f_17 = 1;
	Local_152.f_753[11 /*28*/].f_5[0 /*2*/] = { func_88(-0.015f, -0.075f) };
	Local_152.f_753[11 /*28*/].f_5[1 /*2*/] = { func_88(-0.015f, -0.14f) };
	Local_152.f_753[11 /*28*/].f_5[2 /*2*/] = { func_88(0.015f, -0.14f) };
	Local_152.f_753[11 /*28*/].f_5[3 /*2*/] = { func_88(0.015f, -0.075f) };
	Local_152.f_753[11 /*28*/].f_18 = 0;
	func_344(11, 0, 0, 0, 1, 0);
	Local_152.f_753[11 /*28*/].f_20 = func_10();
	Local_152.f_753[11 /*28*/].f_21 = 7500;
	Local_152.f_753[12 /*28*/] = 3;
	Local_152.f_753[12 /*28*/].f_24 = "pitfall";
	Local_152.f_753[12 /*28*/].f_25 = 0;
	Local_152.f_753[12 /*28*/].f_1 = 0.15f;
	Local_152.f_753[12 /*28*/].f_2 = ((0.8333324f - (0.01111111f / 2f)) + 0.02314815f);
	Local_152.f_753[12 /*28*/].f_22 = { func_88(0.30625f, (0.2222222f - 0.01111111f)) };
	Local_152.f_753[12 /*28*/].f_17 = 1;
	Local_152.f_753[12 /*28*/].f_5[0 /*2*/] = { func_88(-0.015f, -0.075f) };
	Local_152.f_753[12 /*28*/].f_5[1 /*2*/] = { func_88(-0.015f, -0.14f) };
	Local_152.f_753[12 /*28*/].f_5[2 /*2*/] = { func_88(0.015f, -0.14f) };
	Local_152.f_753[12 /*28*/].f_5[3 /*2*/] = { func_88(0.015f, -0.075f) };
	Local_152.f_753[12 /*28*/].f_18 = 0;
	func_344(12, 0, 0, 0, 0, 1);
	Local_152.f_753[12 /*28*/].f_20 = func_10();
	Local_152.f_753[12 /*28*/].f_21 = 7500;
	Local_152.f_753[13 /*28*/] = 4;
	Local_152.f_753[13 /*28*/].f_24 = "ledge";
	Local_152.f_753[13 /*28*/].f_25 = 0;
	Local_152.f_753[13 /*28*/].f_1 = 0.15f;
	Local_152.f_753[13 /*28*/].f_2 = ((0.8129629f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[13 /*28*/].f_22 = { func_88(0.422917f, 0.374074f) };
	Local_152.f_753[13 /*28*/].f_17 = 1;
	Local_152.f_753[13 /*28*/].f_18 = 9;
	func_344(13, 1, 0, 0, 0, 0);
	Local_152.f_753[13 /*28*/].f_20 = func_10();
	Local_152.f_753[13 /*28*/].f_21 = 7500;
	Local_152.f_753[14 /*28*/] = 4;
	Local_152.f_753[14 /*28*/].f_24 = "ledge";
	Local_152.f_753[14 /*28*/].f_25 = 0;
	Local_152.f_753[14 /*28*/].f_1 = 0.15f;
	Local_152.f_753[14 /*28*/].f_2 = ((0.8129629f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[14 /*28*/].f_22 = { func_88(0.308333f, 0.374074f) };
	Local_152.f_753[14 /*28*/].f_17 = 1;
	Local_152.f_753[14 /*28*/].f_18 = 9;
	func_344(14, 0, 1, 0, 0, 0);
	Local_152.f_753[14 /*28*/].f_20 = func_10();
	Local_152.f_753[14 /*28*/].f_21 = 7500;
	Local_152.f_753[15 /*28*/] = 4;
	Local_152.f_753[15 /*28*/].f_24 = "ledge";
	Local_152.f_753[15 /*28*/].f_25 = 0;
	Local_152.f_753[15 /*28*/].f_1 = 0.15f;
	Local_152.f_753[15 /*28*/].f_2 = ((0.8129629f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[15 /*28*/].f_22 = { func_88(0.308333f, 0.374074f) };
	Local_152.f_753[15 /*28*/].f_17 = 1;
	Local_152.f_753[15 /*28*/].f_18 = 9;
	func_344(15, 0, 0, 1, 0, 0);
	Local_152.f_753[15 /*28*/].f_20 = func_10();
	Local_152.f_753[15 /*28*/].f_21 = 7500;
	Local_152.f_753[16 /*28*/] = 4;
	Local_152.f_753[16 /*28*/].f_24 = "ledge";
	Local_152.f_753[16 /*28*/].f_25 = 0;
	Local_152.f_753[16 /*28*/].f_1 = 0.15f;
	Local_152.f_753[16 /*28*/].f_2 = ((0.8129629f - 0.06944444f) + 0.02314815f);
	Local_152.f_753[16 /*28*/].f_22 = { func_88(0.30625f, 0.374074f) };
	Local_152.f_753[16 /*28*/].f_17 = 1;
	Local_152.f_753[16 /*28*/].f_18 = 9;
	func_344(16, 0, 0, 0, 1, 0);
	Local_152.f_753[16 /*28*/].f_20 = func_10();
	Local_152.f_753[16 /*28*/].f_21 = 7500;
	Local_152.f_753[17 /*28*/] = 4;
	Local_152.f_753[17 /*28*/].f_24 = "ledge";
	Local_152.f_753[17 /*28*/].f_25 = 0;
	Local_152.f_753[17 /*28*/].f_1 = 0.15f;
	Local_152.f_753[17 /*28*/].f_2 = ((0.7574074f - (0.01111111f / 2f)) + 0.02314815f);
	Local_152.f_753[17 /*28*/].f_22 = { func_88(0.30625f, (0.3740741f - 0.01111111f)) };
	Local_152.f_753[17 /*28*/].f_17 = 1;
	Local_152.f_753[17 /*28*/].f_18 = 9;
	func_344(17, 0, 0, 0, 0, 1);
	Local_152.f_753[17 /*28*/].f_20 = func_10();
	Local_152.f_753[17 /*28*/].f_21 = 7500;
	Local_152.f_753[29 /*28*/] = 6;
	Local_152.f_753[29 /*28*/].f_24 = "oil_drum_1";
	Local_152.f_753[29 /*28*/].f_25 = 4;
	Local_152.f_753[29 /*28*/].f_1 = 0.15f;
	Local_152.f_753[29 /*28*/].f_2 = -0.075926f;
	Local_152.f_753[29 /*28*/].f_22 = { func_88(0.054167f, 0.151852f) };
	Local_152.f_753[29 /*28*/].f_17 = 1;
	Local_152.f_753[29 /*28*/].f_16 = 5000;
	Local_152.f_753[29 /*28*/].f_5[0 /*2*/] = { func_88((-0.054167f / 2f), (0.151852f / 2f)) };
	Local_152.f_753[29 /*28*/].f_5[1 /*2*/] = { func_88((-0.054167f / 2f), (-0.151852f / 2f)) };
	Local_152.f_753[29 /*28*/].f_5[2 /*2*/] = { func_88((0.054167f / 2f), (-0.151852f / 2f)) };
	Local_152.f_753[29 /*28*/].f_5[3 /*2*/] = { func_88((0.054167f / 2f), (0.151852f / 2f)) };
	Local_152.f_753[29 /*28*/].f_18 = 6;
	func_344(29, 1, 1, 1, 1, 1);
	Local_152.f_753[29 /*28*/].f_20 = "IAP_H_OIL";
	Local_152.f_753[29 /*28*/].f_21 = 7500;
	Local_152.f_753[30 /*28*/] = 6;
	Local_152.f_753[30 /*28*/].f_24 = "stock_pile1";
	Local_152.f_753[30 /*28*/].f_25 = 4;
	Local_152.f_753[30 /*28*/].f_1 = 0.15f;
	Local_152.f_753[30 /*28*/].f_2 = -0.122222f;
	Local_152.f_753[30 /*28*/].f_22 = { func_88(0.116667f, 0.244444f) };
	Local_152.f_753[30 /*28*/].f_17 = 1;
	Local_152.f_753[30 /*28*/].f_16 = 12500;
	Local_152.f_753[30 /*28*/].f_5[0 /*2*/] = { func_88((-0.116667f / 2f), (0.244444f / 2f)) };
	Local_152.f_753[30 /*28*/].f_5[1 /*2*/] = { func_88((-0.116667f / 2f), (-0.244444f / 2f)) };
	Local_152.f_753[30 /*28*/].f_5[2 /*2*/] = { func_88((0.116667f / 2f), (-0.244444f / 2f)) };
	Local_152.f_753[30 /*28*/].f_5[3 /*2*/] = { func_88((0.116667f / 2f), (0.244444f / 2f)) };
	Local_152.f_753[30 /*28*/].f_18 = 7;
	func_344(30, 1, 1, 1, 1, 1);
	Local_152.f_753[30 /*28*/].f_20 = func_10();
	Local_152.f_753[30 /*28*/].f_21 = 7500;
	Local_152.f_753[31 /*28*/] = 6;
	Local_152.f_753[31 /*28*/].f_24 = "stock_pile2";
	Local_152.f_753[31 /*28*/].f_25 = 4;
	Local_152.f_753[31 /*28*/].f_1 = 0.15f;
	Local_152.f_753[31 /*28*/].f_2 = -0.122222f;
	Local_152.f_753[31 /*28*/].f_22 = { func_88(0.116667f, 0.244444f) };
	Local_152.f_753[31 /*28*/].f_17 = 1;
	Local_152.f_753[31 /*28*/].f_16 = 12500;
	Local_152.f_753[31 /*28*/].f_5[0 /*2*/] = { func_88((-0.116667f / 2f), (0.244444f / 2f)) };
	Local_152.f_753[31 /*28*/].f_5[1 /*2*/] = { func_88((-0.116667f / 2f), (-0.244444f / 2f)) };
	Local_152.f_753[31 /*28*/].f_5[2 /*2*/] = { func_88((0.116667f / 2f), (-0.244444f / 2f)) };
	Local_152.f_753[31 /*28*/].f_5[3 /*2*/] = { func_88((0.116667f / 2f), (0.244444f / 2f)) };
	Local_152.f_753[31 /*28*/].f_18 = 7;
	func_344(31, 0, 0, 0, 0, 0);
	Local_152.f_753[31 /*28*/].f_20 = func_10();
	Local_152.f_753[31 /*28*/].f_21 = 7500;
	Local_152.f_753[32 /*28*/] = 6;
	Local_152.f_753[32 /*28*/].f_24 = "stock_pile3";
	Local_152.f_753[32 /*28*/].f_25 = 4;
	Local_152.f_753[32 /*28*/].f_1 = 0.15f;
	Local_152.f_753[32 /*28*/].f_2 = -0.087037f;
	Local_152.f_753[32 /*28*/].f_22 = { func_88(0.160417f, 0.174074f) };
	Local_152.f_753[32 /*28*/].f_17 = 1;
	Local_152.f_753[32 /*28*/].f_16 = 25000;
	Local_152.f_753[32 /*28*/].f_5[0 /*2*/] = { func_88((-0.160417f / 2f), (0.174074f / 2f)) };
	Local_152.f_753[32 /*28*/].f_5[1 /*2*/] = { func_88((-0.160417f / 2f), (-0.174074f / 2f)) };
	Local_152.f_753[32 /*28*/].f_5[2 /*2*/] = { func_88((0.160417f / 2f), (-0.174074f / 2f)) };
	Local_152.f_753[32 /*28*/].f_5[3 /*2*/] = { func_88((0.160417f / 2f), (0.174074f / 2f)) };
	Local_152.f_753[32 /*28*/].f_18 = 8;
	func_344(32, 1, 1, 1, 1, 1);
	Local_152.f_753[32 /*28*/].f_20 = func_10();
	Local_152.f_753[32 /*28*/].f_21 = 7500;
}

void func_344(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam1)
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_753[iParam0 /*28*/].f_19), 0);
	}
	if (bParam2)
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_753[iParam0 /*28*/].f_19), 1);
	}
	if (bParam3)
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_753[iParam0 /*28*/].f_19), 2);
	}
	if (bParam4)
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_753[iParam0 /*28*/].f_19), 3);
	}
	if (bParam5)
	{
		unk_0xCED9E32812D6C7C7(&(Local_152.f_753[iParam0 /*28*/].f_19), 4);
	}
}

void func_345(int iParam0)
{
	Local_161.f_137 = iParam0;
	func_110(&(Local_161[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_161[1 /*17*/].f_6 = 1000;
	Local_161[1 /*17*/].f_7 = 10000;
	Local_161[2 /*17*/].f_1 = 1;
	Local_161[2 /*17*/].f_8 = 40;
	func_110(&(Local_161[2 /*17*/].f_9), 0, 0, 0, 0);
	func_110(&(Local_161[3 /*17*/].f_9), 255, 255, 255, 127);
	func_110(&(Local_161[4 /*17*/].f_9), 255, 255, 255, 127);
	func_110(&(Local_161[5 /*17*/].f_9), 255, 255, 255, 127);
	func_110(&(Local_161[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_161.f_137)
	{
		case 2:
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 30);
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 20);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 30);
			func_110(&(Local_161[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 1;
			Local_161[3 /*17*/] = 1;
			break;
		
		case 3:
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 30);
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 20);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 30);
			func_110(&(Local_161[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 1;
			Local_161[4 /*17*/] = 1;
			break;
		
		case 4:
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 30);
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 20);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 30);
			func_110(&(Local_161[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 1;
			Local_161[5 /*17*/] = 1;
			break;
		
		case 1:
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 30);
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 20);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 1;
			Local_161[3 /*17*/] = 1;
			break;
		
		case 0:
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 30);
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 20);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 10);
			func_110(&(Local_161[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 1;
			Local_161[5 /*17*/] = 1;
			break;
		
		case 6:
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 10);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 8);
			func_110(&(Local_161[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_161[0 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 1;
			Local_161[7 /*17*/] = 1;
			break;
		
		case 7:
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_161[2 /*17*/] = 1;
			Local_161[0 /*17*/] = 1;
			func_110(&(Local_161[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_161[3 /*17*/] = 1;
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_161[6 /*17*/] = 1;
			break;
		
		case 5:
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 30);
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 20);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 1;
			Local_161[3 /*17*/] = 1;
			break;
		
		case 8:
			Local_161[1 /*17*/] = 0;
			Local_161[2 /*17*/] = 0;
			Local_161[0 /*17*/] = 1;
			func_110(&(Local_161[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_161[6 /*17*/] = 1;
			func_110(&(Local_161[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_161[7 /*17*/] = 1;
			func_110(&(Local_161[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_161[1 /*17*/] = 0;
			Local_161[2 /*17*/] = 0;
			Local_161[0 /*17*/] = 1;
			func_110(&(Local_161[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_161[6 /*17*/] = 1;
			func_110(&(Local_161[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_161[7 /*17*/] = 1;
			func_110(&(Local_161[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_161[1 /*17*/] = 0;
			Local_161[2 /*17*/] = 0;
			Local_161[0 /*17*/] = 1;
			func_110(&(Local_161[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_161[6 /*17*/] = 1;
			func_110(&(Local_161[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_161[7 /*17*/] = 1;
			func_110(&(Local_161[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 15);
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 10);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			Local_161[1 /*17*/] = 1;
			Local_161[3 /*17*/] = 1;
			break;
		
		case 12:
			func_110(&(Local_161[1 /*17*/].f_9), 255, 255, 255, 3);
			func_110(&(Local_161[2 /*17*/].f_13), 0, 0, 0, 15);
			func_110(&(Local_161[0 /*17*/].f_9), 0, 0, 255, 90);
			func_110(&(Local_161[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_161[1 /*17*/] = 1;
			Local_161[2 /*17*/] = 0;
			Local_161[0 /*17*/] = 1;
			Local_161[6 /*17*/] = 1;
			break;
	}
}

void func_346()
{
	unk_0xCED9E32812D6C7C7(&(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887), 16);
	Global_4718592.f_132413 = 1;
	Global_1637065 = 1;
	func_348();
	if (unk_0x9315DBF7D972F07A())
	{
		func_20(unk_0x9E2D6C50374FCFA9(), 0, 0, 0);
		func_347();
	}
	else
	{
		unk_0x64E21045781AFBC9(unk_0x9E2D6C50374FCFA9(), false, 0);
	}
	func_36(1, 0, 1, 0);
	func_19(0, 1, -1);
	func_19(1, 1, -1);
	func_19(2, 1, -1);
	func_19(3, 1, -1);
	func_19(4, 1, -1);
	func_19(6, 1, -1);
	func_19(7, 1, -1);
	func_19(8, 1, -1);
	func_19(9, 1, -1);
	func_19(10, 1, -1);
	func_19(11, 1, -1);
	func_19(12, 1, -1);
	func_19(13, 1, -1);
	func_19(14, 1, -1);
	func_19(15, 1, -1);
	func_19(16, 1, -1);
}

void func_347()
{
	if (!Global_2703656.f_847.f_10)
	{
		Global_2703656.f_847.f_10 = 1;
	}
}

void func_348()
{
	if (func_354() || func_353())
	{
		func_352();
		func_349();
	}
}

void func_349()
{
	if ((!func_351() && !func_350()) && Global_2715541)
	{
		Global_4718592.f_86750 = 0;
	}
}

bool func_350()
{
	return Global_2714627.f_691;
}

bool func_351()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

void func_352()
{
	Global_2714627.f_756 = 1;
}

var func_353()
{
	return Global_2714627.f_735;
}

bool func_354()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 11);
}

void func_355()
{
	bool bVar0;
	
	if (Local_152.f_2870 >= 11)
	{
		return;
	}
	if (!func_33())
	{
		func_8(11);
		return;
	}
	if (func_380())
	{
		if (func_379(unk_0x9E2D6C50374FCFA9()))
		{
			Local_152.f_2948.f_4 = 0;
			Local_152.f_2948.f_3 = 0;
			func_378(&(Local_152.f_2948), 11);
		}
		func_8(11);
		return;
	}
	func_374();
	if (!Local_152.f_2910 && (Local_152.f_2911 == -2147483647 || (unk_0x0A89FDFA763DCAED() - Local_152.f_2911) > 5000))
	{
		func_373(func_75(unk_0x9E2D6C50374FCFA9()), 1);
		Local_152.f_2911 = unk_0x0A89FDFA763DCAED();
	}
	func_372();
	unk_0xB0550BC91B0159D6(&(Local_152.f_2368.f_333), 2);
	bVar0 = Local_152.f_2870 >= 2;
	func_356(bVar0);
}

void func_356(bool bParam0)
{
	func_369();
	unk_0x7BC5E5A5FF7F278F(0);
	unk_0x7BC5E5A5FF7F278F(2);
	if (unk_0x8FE9914D4872D601())
	{
		unk_0x7653D561C9574763(2, 200, 1);
	}
	unk_0x7653D561C9574763(2, 199, 1);
	unk_0xE53134ABB42F336F(0);
	func_368(1);
	func_367(4, -1);
	unk_0x6EC26FC7C9EC0D16(19);
	func_366();
	func_365();
	unk_0xF43060DF31ACEA55();
	if (bParam0)
	{
		func_358(0);
		if (!unk_0xF1EC2C71FD1371B8())
		{
			unk_0xC43E67C9BA871ECB();
			unk_0x2E04B7B46A3670E5(1);
		}
	}
	func_357();
	unk_0x16E09CCC0BD508DA();
}

void func_357()
{
	Global_22691.f_134 = 1;
}

void func_358(int iParam0)
{
	if (func_364())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_363(0))
		{
			func_359(iParam0);
		}
		unk_0xCED9E32812D6C7C7(&Global_7825, 2);
	}
}

void func_359(int iParam0)
{
	if (func_364())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_362())
		{
			func_361(1, 1);
		}
		else
		{
			func_361(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		unk_0xCED9E32812D6C7C7(&Global_7825, 16);
	}
	if (unk_0xA3329B7A7520670E())
	{
		unk_0xD681CC2BC1084DB6(0);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		unk_0xCED9E32812D6C7C7(&Global_7824, 30);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&Global_7824, 30);
	}
	if (!func_360())
	{
		Global_19954.f_1 = 3;
	}
}

int func_360()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_361(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_363(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				unk_0xC81489026785778A(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			unk_0x31636F0193379566(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			unk_0x31636F0193379566(Global_19891);
		}
		else
		{
			unk_0x31636F0193379566(Global_19882);
		}
	}
}

bool func_362()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

int func_363(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_7824, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB4C854DD86E40FDA(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_364()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 19);
}

void func_365()
{
	Global_22691.f_6 = 1;
}

void func_366()
{
	Global_1574737 = 1;
	StringCopy(&(Global_1574737.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574737.f_9 = unk_0x2E87280918B16506(&(Global_1574737.f_1));
}

void func_367(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1644209.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1644209.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_368(int iParam0)
{
	Global_1645739.f_1121 = iParam0;
}

void func_369()
{
	fLocal_147 = func_371();
	fLocal_148 = func_370();
}

float func_370()
{
	return (1.778f / fLocal_147);
}

float func_371()
{
	unk_0x604161EB05F29E6D(&uLocal_149, &iLocal_150);
	fLocal_147 = unk_0xF4CC509EEB975296(0);
	if (unk_0x8FE9914D4872D601())
	{
		if (fLocal_147 >= 4f)
		{
			fLocal_147 = (fLocal_147 / 3f);
		}
	}
	return fLocal_147;
}

void func_372()
{
	Local_152.f_2874 = (Local_152.f_2874 + round((unk_0x51109C28352EC9A3() * 1000f)));
	Local_152.f_2875 = floor((IntToFloat(Local_152.f_2874) / 66f));
	Local_152.f_2874 = (Local_152.f_2874 - round((66f * IntToFloat(Local_152.f_2875))));
	Local_152.f_2876 = (Local_152.f_2876 + round((unk_0x51109C28352EC9A3() * 1000f)));
	Local_152.f_2877 = floor((IntToFloat(Local_152.f_2876) / 33f));
	Local_152.f_2876 = (Local_152.f_2876 - round((33f * IntToFloat(Local_152.f_2877))));
}

void func_373(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = 1000228518;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	iVar1 = func_74(iParam0);
	if (!iVar1 == 0 && func_80(iParam0, 0, 1))
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 3, iVar1);
	}
}

void func_374()
{
	int iVar0;
	struct<15> Var1;
	
	if (Local_152.f_2910)
	{
		return;
	}
	Var1.f_3 = 10;
	Var1.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		if (unk_0xB1D84E0EF6979085(1, iVar0) != 174)
		{
		}
		else if (unk_0x92039F20B184AB4D(1, iVar0, &Var1, 25))
		{
			if (Var1 == 549044096)
			{
				if (Var1.f_2 != 1)
				{
				}
				else
				{
					func_375(&(Var1.f_3), &(Var1.f_14));
				}
			}
		}
		iVar0++;
	}
}

void func_375(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_152.f_2912[iVar0 /*3*/].f_1 = func_377(iVar0);
			Local_152.f_2912[iVar0 /*3*/] = func_376(iVar0);
			func_73(func_75(unk_0x9E2D6C50374FCFA9()), 1, iVar0, Local_152.f_2912[iVar0 /*3*/], Local_152.f_2912[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_152.f_2912[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_152.f_2912[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_152.f_2910 = 1;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 54161;
		
		case 1:
			return 1172;
		
		case 2:
			return 45582;
		
		case 3:
			return 70801;
		
		case 4:
			return 5199;
		
		case 5:
			return 12994;
		
		case 6:
			return 4613;
		
		case 7:
			return 73734;
		
		case 8:
			return 8256;
		
		case 9:
			return 13078;
		
		default:
	}
	return 0;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2273775;
		
		case 1:
			return 2000000;
		
		case 2:
			return 1900000;
		
		case 3:
			return 1800000;
		
		case 4:
			return 1700000;
		
		case 5:
			return 1600000;
		
		case 6:
			return 1500000;
		
		case 7:
			return 1400000;
		
		case 8:
			return 1200000;
		
		case 9:
			return 1000000;
		
		default:
	}
	return 0;
}

void func_378(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = 988620539;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_429, 1))
		{
			unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_429), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_119(&(uParam0->f_1)))
	{
		func_117(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_119(&(uParam0->f_1)) && !func_116(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_100(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_100(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_74(unk_0x9E2D6C50374FCFA9());
		if (iVar3 != -1)
		{
			unk_0x2700C00F82C16BF0(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

int func_379(int iParam0)
{
	if (iParam0 != func_44())
	{
		if (func_80(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_43(Global_2689156[iParam0 /*453*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_380()
{
	int iVar0;
	
	if (Global_1932184)
	{
		return 1;
	}
	if (func_393())
	{
		return 1;
	}
	if (func_392(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 1;
	}
	if (!func_390())
	{
		return 1;
	}
	if (func_384())
	{
		return 1;
	}
	if (Local_152.f_2870 < 2)
	{
		return 0;
	}
	iVar0 = 202;
	if (unk_0x3A76A0944BE2C291(2))
	{
		iVar0 = 214;
	}
	if (unk_0x4C1B8C5717647539(2, iVar0) || unk_0x0DBA73788F6E3C5F(2, iVar0))
	{
		func_381((1000 - unk_0x07141611FD632B59((unk_0x0A89FDFA763DCAED() - Local_152.f_2906))), 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		func_381(0, 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (unk_0x0DBA73788F6E3C5F(2, iVar0))
	{
		if (Local_152.f_2906 == -2147483647)
		{
			Local_152.f_2906 = unk_0x0A89FDFA763DCAED() + 1000;
		}
		if (unk_0x0A89FDFA763DCAED() > Local_152.f_2906)
		{
			return 1;
		}
	}
	else if (Local_152.f_2906 != -2147483647)
	{
		Local_152.f_2906 = -2147483647;
	}
	if (func_379(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_384())
		{
			return 1;
		}
	}
	return 0;
}

void func_381(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_383(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_382(0, iVar0);
		Global_1645739.f_1135[iVar0] = iParam0;
		Global_1645739.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1645739.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1645739.f_1135.f_194[iVar0] = iParam3;
		Global_1645739.f_1135.f_183[iVar0] = iParam4;
		Global_1645739.f_1135.f_216[iVar0] = iParam5;
		Global_1645739.f_1135.f_227[iVar0 /*3*/] = iParam6;
		Global_1645739.f_1135.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1645739.f_1135.f_258[iVar0] = iParam8;
		Global_1645739.f_1135.f_269[iVar0] = iParam9;
		Global_1645739.f_1135.f_312[iVar0] = iParam10;
		Global_1645739.f_1135.f_323[iVar0] = iParam11;
		Global_1645739.f_1135.f_334[iVar0] = iParam12;
		Global_1645739.f_1135.f_345[iVar0] = iParam13;
		Global_1645739.f_1130 = 1;
		Global_1645739.f_1135.f_356[iVar0] = iParam14;
		Global_1645739.f_1135.f_367[iVar0] = iParam15;
		Global_1645739.f_1135.f_378[iVar0] = iParam16;
		Global_1645739.f_1135.f_389[iVar0] = iParam17;
		Global_1645739.f_1135.f_400[iVar0] = iParam18;
		Global_1645739.f_1135.f_411[iVar0] = iParam19;
		Global_1645739.f_1135.f_422[iVar0] = iParam20;
		Global_1645739.f_1135.f_433[iVar0] = iParam21;
		Global_1645739.f_1135.f_444[iVar0] = iParam22;
		Global_1645739.f_1135.f_455[iVar0] = iParam23;
		Global_1645739.f_1135.f_466[iVar0] = iParam24;
		Global_1645739.f_1135.f_205[iVar0] = iParam25;
		Global_1645739.f_1135.f_477[iVar0] = iParam26;
		Global_1645739.f_1135.f_488[iVar0] = iParam27;
		Global_1645739.f_1135.f_499[iVar0] = iParam28;
		Global_1645739.f_1135.f_510[iVar0] = iParam29;
		Global_1645739.f_1135.f_521[iVar0] = iParam30;
		Global_1645739.f_1135.f_532[iVar0] = iParam31;
		Global_1645739.f_1135.f_543[iVar0] = iParam32;
		Global_1645739.f_1135.f_554[iVar0] = iParam33;
		Global_1645739.f_1135.f_565[iVar0] = iParam34;
		Global_1645739.f_1135.f_576[iVar0] = iParam35;
		Global_1645739.f_1135.f_587[iVar0] = iParam36;
	}
}

void func_382(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1645739.f_6736[iParam0]), iParam1);
}

bool func_383(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1645739.f_6736[iParam0], iParam1);
}

int func_384()
{
	if (func_379(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_389(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
		if (func_388(unk_0x9E2D6C50374FCFA9(), 0) && func_386(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	if (func_385())
	{
		return 1;
	}
	if (Global_1578985.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_385()
{
	return unk_0xE2D0C323A1AE5D85(Global_1973263, 14);
}

bool func_386(int iParam0)
{
	return func_387(iParam0, 20);
}

bool func_387(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_388(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == unk_0x9E2D6C50374FCFA9())
		{
			return 1;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

int func_390()
{
	if (func_391(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 1;
	}
	if (func_379(unk_0xB6BA8B8E3D0B41C6()))
	{
		return 1;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 != func_44())
	{
		if (func_80(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_43(Global_2689156[iParam0 /*453*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_392(int iParam0)
{
	if (iParam0 != func_44())
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_514, 3);
	}
	return 0;
}

bool func_393()
{
	return Global_1946934.f_4703.f_1 != -1;
}

void func_394()
{
	wait(0);
}

void func_395(struct<21> Param0)
{
	Param0 = { Param0 };
	unk_0x3F57BEDBC381CBC7();
}

