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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_94[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98[4] = { 0, 0, 0, 0 };
	var uLocal_99[4] = { 0, 0, 0, 0 };
	int iLocal_100[4] = { 0, 0, 0, 0 };
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<3> Local_110[130];
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_122 = 0;
	var uLocal_123[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<2> Local_126 = { -1, -1 } ;
	struct<730> Local_127 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_147 = 0;
	struct<535> Local_148 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_149 = -1;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = -1082130432;
	var uLocal_172 = 3;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = -1;
	var uLocal_189 = 0;
	var uLocal_190 = -1;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
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
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = -1082130432;
	var uLocal_214 = 3;
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
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = -1;
	var uLocal_231 = 0;
	var uLocal_232 = -1;
	var uLocal_233 = -1;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1082130432;
	var uLocal_256 = 3;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = -1;
	var uLocal_273 = 0;
	var uLocal_274 = -1;
	var uLocal_275 = -1;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = -1082130432;
	var uLocal_298 = 3;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = -1;
	var uLocal_315 = 0;
	var uLocal_316 = -1;
	var uLocal_317 = -1;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = -1082130432;
	var uLocal_340 = 3;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = -1;
	var uLocal_357 = 0;
	var uLocal_358 = -1;
	var uLocal_359 = -1;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = -1082130432;
	var uLocal_382 = 3;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = -1;
	var uLocal_399 = 0;
	var uLocal_400 = -1;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = -1082130432;
	var uLocal_424 = 3;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = -1;
	var uLocal_441 = 0;
	var uLocal_442 = -1;
	var uLocal_443 = -1;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = -1082130432;
	var uLocal_466 = 3;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = -1;
	var uLocal_483 = 0;
	var uLocal_484 = -1;
	var uLocal_485 = -1;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = -1082130432;
	var uLocal_508 = 3;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = -1;
	var uLocal_525 = 0;
	var uLocal_526 = -1;
	var uLocal_527 = -1;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = -1082130432;
	var uLocal_550 = 3;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = -1;
	var uLocal_567 = 0;
	var uLocal_568 = -1;
	var uLocal_569 = -1;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = -1082130432;
	var uLocal_592 = 3;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = -1;
	var uLocal_609 = 0;
	var uLocal_610 = -1;
	var uLocal_611 = -1;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = -1082130432;
	var uLocal_634 = 3;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = -1;
	var uLocal_651 = 0;
	var uLocal_652 = -1;
	var uLocal_653 = -1;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = -1082130432;
	var uLocal_676 = 3;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = -1;
	var uLocal_693 = 0;
	var uLocal_694 = -1;
	var uLocal_695 = -1;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = -1082130432;
	var uLocal_718 = 3;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = -1;
	var uLocal_735 = 0;
	var uLocal_736 = -1;
	var uLocal_737 = -1;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = -1082130432;
	var uLocal_760 = 3;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = -1;
	var uLocal_777 = 0;
	var uLocal_778 = -1;
	var uLocal_779 = -1;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = -1082130432;
	var uLocal_802 = 3;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = -1;
	var uLocal_819 = 0;
	var uLocal_820 = -1;
	var uLocal_821 = -1;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = -1082130432;
	var uLocal_844 = 3;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = -1;
	var uLocal_861 = 0;
	var uLocal_862 = -1;
	var uLocal_863 = -1;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = -1082130432;
	var uLocal_886 = 3;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = -1;
	var uLocal_903 = 0;
	var uLocal_904 = -1;
	var uLocal_905 = -1;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = -1082130432;
	var uLocal_928 = 3;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = -1;
	var uLocal_945 = 0;
	var uLocal_946 = -1;
	var uLocal_947 = -1;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = -1082130432;
	var uLocal_970 = 3;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = -1;
	var uLocal_987 = 0;
	var uLocal_988 = -1;
	var uLocal_989 = -1;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = -1082130432;
	var uLocal_1012 = 3;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = -1;
	var uLocal_1029 = 0;
	var uLocal_1030 = -1;
	var uLocal_1031 = -1;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1082130432;
	var uLocal_1054 = 3;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = -1;
	var uLocal_1071 = 0;
	var uLocal_1072 = -1;
	var uLocal_1073 = -1;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = -1082130432;
	var uLocal_1096 = 3;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = -1;
	var uLocal_1113 = 0;
	var uLocal_1114 = -1;
	var uLocal_1115 = -1;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1082130432;
	var uLocal_1138 = 3;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = -1;
	var uLocal_1155 = 0;
	var uLocal_1156 = -1;
	var uLocal_1157 = -1;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1082130432;
	var uLocal_1180 = 3;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = -1;
	var uLocal_1197 = 0;
	var uLocal_1198 = -1;
	var uLocal_1199 = -1;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = -1082130432;
	var uLocal_1222 = 3;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = -1;
	var uLocal_1239 = 0;
	var uLocal_1240 = -1;
	var uLocal_1241 = -1;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = -1082130432;
	var uLocal_1264 = 3;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = -1;
	var uLocal_1281 = 0;
	var uLocal_1282 = -1;
	var uLocal_1283 = -1;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = -1082130432;
	var uLocal_1306 = 3;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = -1;
	var uLocal_1323 = 0;
	var uLocal_1324 = -1;
	var uLocal_1325 = -1;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = -1082130432;
	var uLocal_1348 = 3;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = -1;
	var uLocal_1365 = 0;
	var uLocal_1366 = -1;
	var uLocal_1367 = -1;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = -1082130432;
	var uLocal_1390 = 3;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = -1;
	var uLocal_1407 = 0;
	var uLocal_1408 = -1;
	var uLocal_1409 = -1;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = -1082130432;
	var uLocal_1432 = 3;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = -1;
	var uLocal_1449 = 0;
	var uLocal_1450 = -1;
	var uLocal_1451 = -1;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = -1082130432;
	var uLocal_1474 = 3;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = -1;
	var uLocal_1491 = 0;
	var uLocal_1492 = -1;
	struct<12> Local_1493 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1494[32];
	struct<21> Local_1495 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_732(ScriptParam_1495))
		{
			func_694();
		}
	}
	while (true)
	{
		func_693();
		if (func_686() || func_684())
		{
			func_694();
		}
		func_656();
		switch (func_655(unk_0xA52C4F51ECAB7E02()))
		{
			case 0:
				if (func_654() == 1)
				{
					if (func_652())
					{
						func_651(unk_0xA52C4F51ECAB7E02(), 1);
					}
				}
				break;
			
			case 1:
				if (func_654() == 1)
				{
					func_143();
					func_131();
				}
				else if (func_654() == 3)
				{
					func_651(unk_0xA52C4F51ECAB7E02(), 3);
				}
				break;
			
			case 3:
				func_694();
				break;
		}
		if (unk_0x54E30A65F4FA4962())
		{
			switch (func_654())
			{
				case 0:
					if (func_113())
					{
						func_112(1);
					}
					break;
				
				case 1:
					if (Local_127.f_8 == 6)
					{
						func_112(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_108, 1000, 0))
					{
						func_112(3);
					}
					break;
				
				case 3:
					func_694();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)
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

void func_3()
{
	if (func_35(2, 0, 0, 0, 0))
	{
		if (!unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2))
		{
			Local_127.f_1 = unk_0x0A89FDFA763DCAED();
			unk_0xCED9E32812D6C7C7(&(Local_127.f_2), 2);
		}
	}
	switch (Local_127.f_8)
	{
		case 0:
			if (func_34())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_127.f_667), Global_262145.f_11378, 0) || unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_127.f_9 = unk_0x0A89FDFA763DCAED();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_127.f_661), Global_262145.f_11377, 0)) || unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2))
			{
				if (!unk_0xE2D0C323A1AE5D85(Local_127.f_2, 1) && func_21())
				{
					func_20(&(Local_127.f_661), 0, 0);
					unk_0xCED9E32812D6C7C7(&(Local_127.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_127.f_1 = unk_0x0A89FDFA763DCAED();
				}
			}
			func_8();
			iLocal_89++;
			if (iLocal_89 >= Local_127.f_709)
			{
				iLocal_89 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_127.f_663), 20000, 0) || func_5())
			{
				if (func_34())
				{
					func_20(&(Local_127.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x90F6E2F6488B98BA(Local_127.f_729[iVar0 /*2*/].f_1) && !unk_0x55B23FE400FCEA6B(unk_0xF2D8DACFAEBD9629(Local_127.f_729[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			iVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
			if (!func_6(iVar1))
			{
				if ((!unk_0xE2D0C323A1AE5D85(Local_1494[iVar0 /*5*/].f_2, 0) || Local_1494[iVar0 /*5*/].f_3 != 6) || (unk_0xE2D0C323A1AE5D85(Local_127.f_2, 0) && !unk_0xE2D0C323A1AE5D85(Local_1494[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8);
}

bool func_7(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 2);
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar2)))
		{
			unk_0xCED9E32812D6C7C7(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0xE2D0C323A1AE5D85(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			unk_0xCED9E32812D6C7C7(&(Local_127.f_673), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_127.f_727)
	{
		Local_127.f_727 = iVar0;
	}
	else
	{
		Local_127.f_726 = (Local_127.f_727 - iVar0);
	}
	if (iVar1 > Local_127.f_728)
	{
		Local_127.f_728 = iVar1;
	}
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_1494[iParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_127.f_674[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_127.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_127.f_674[iVar1] < 0 || iVar0 > Local_1494[Local_127.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_127.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_127.f_674[iVar1], iParam0, iVar1);
			}
			Local_127.f_674[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_127.f_674[iVar3] == iParam0)
				{
					Local_127.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	struct<14> Var0;
	int iVar1;
	
	iVar1 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = -1267886285;
		Var0.f_10 = iVar1;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 677240627;
	Param0.f_1 = unk_0x9E2D6C50374FCFA9();
	if (!iParam13 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Param0, 14, iParam13);
	}
}

int func_12(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar1)))
		{
			iVar2 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar1));
			if (func_13(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
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

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iParam0));
	iVar0 = iVar3;
	if (Global_2810287.f_5041.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2810287.f_5041.f_38[iVar0];
		iVar1 = Global_2810287.f_5041.f_5[iVar0];
		if (!unk_0xE2D0C323A1AE5D85(Local_127.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5041[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_106, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_127.f_10[iVar4 /*5*/].f_3 = iParam0;
							Global_2810287.f_5041.f_38[iVar0] = -1;
							unk_0xCED9E32812D6C7C7(&(Local_127.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_127.f_708 = (Local_127.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)
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

int func_18(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_1494[iParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE2D0C323A1AE5D85(Local_127.f_673, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_127.f_674[iVar0] == iParam0)
			{
				Local_127.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_127.f_709)
		{
			if (Local_127.f_10[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_127.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		unk_0xB0550BC91B0159D6(&(Local_127.f_673), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21()
{
	return 0;
}

int func_22()
{
	if (Local_127.f_708 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_127.f_671), 750, 0))
	{
		unk_0xCED9E32812D6C7C7(&(Local_127.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	Local_127.f_8 = iParam0;
}

int func_24()
{
	struct<2> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	if (func_34())
	{
		Var0 = { Local_127.f_729[iLocal_91 /*2*/] };
		if (func_33(Var0))
		{
			if (!unk_0xCCDCD6672DAE6835(Var0.f_1))
			{
				if (func_32(iLocal_91, &Var1, &uVar2))
				{
					Local_127.f_713[iLocal_91] = func_29(iLocal_91);
					if (unk_0xE2D0C323A1AE5D85(Local_1494[Local_127.f_713[iLocal_91] /*5*/].f_1, iLocal_91))
					{
						if (func_26(&(Local_127.f_729[iLocal_91 /*2*/].f_1), Var0, Var1, uVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x3B2646B62E7BBE11(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), 1);
							unk_0x398C962F550CF3B4(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), 1);
							unk_0x67E2C3DCB85CCED2(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), 0);
							func_25(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), 1);
							if (unk_0x6BD06F4780EAC5DD("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
							{
								if (unk_0xF2549FF74D64B720(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0xC3B76795ECBDEF41(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), "MPBitset");
								}
								unk_0xCED9E32812D6C7C7(&iVar3, 10);
								unk_0xCED9E32812D6C7C7(&iVar3, 11);
								unk_0x05B874E9ABFF72B4(unk_0xA5677134B9672173(Local_127.f_729[iLocal_91 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_127.f_713[iLocal_91] = -1;
						}
					}
				}
			}
			iLocal_91++;
			if (iLocal_91 >= 10)
			{
				iLocal_91 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (unk_0x6BD06F4780EAC5DD("MPBitset", 3))
	{
		if (unk_0xF2549FF74D64B720(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xC3B76795ECBDEF41(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xCED9E32812D6C7C7(&uVar0, 13);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&uVar0, 13);
		}
		unk_0x05B874E9ABFF72B4(iParam0, "MPBitset", uVar0);
	}
}

int func_26(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x61ADF697DF551DA6(iParam1))
	{
		return 0;
	}
	if (!unk_0x993E56B8150C834F(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x02B222EADC9DC566(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xBA715A7BEBA5A1F9(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
	if (unk_0xE5965CDF24F93A9F(iVar1))
	{
		*uParam0 = unk_0xA08CC064DAC564A5(iVar1);
		Global_2810287.f_6635 = iVar1;
		if (unk_0xCCDCD6672DAE6835(*uParam0))
		{
			if (bParam13)
			{
				unk_0x229DD509EDB2FBD4(iVar1, 1);
			}
			unk_0x398C962F550CF3B4(iVar1, iParam8);
			if (unk_0xD64C90C3F536F963(iVar1))
			{
				if (bParam6)
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 1);
				}
				else
				{
					unk_0x4C6E9D70687FCDCE(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xAEBA172874A3DEFC(*uParam0, unk_0x9E2D6C50374FCFA9(), 1);
				}
			}
			unk_0x4FA753674D81BF2E(iVar1, iParam7);
			unk_0x41EC6688527C1C31(iVar1, 1);
			if (bParam10)
			{
				unk_0xA4FCB26551D216B8(iVar1);
				unk_0x59492C1B3DB11BDE(iVar1, 5, 5, 1f);
			}
			func_27(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_27(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_28(unk_0x9E2D6C50374FCFA9(), Param0, iParam2) > -1)
	{
		if ((Global_2667222.f_2919[1 /*6*/].f_5 == iParam3 && Global_2667222.f_2919[1 /*6*/].f_4 == iParam2) && vdist(Global_2667222.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667222.f_2919[iVar0 /*6*/] = { Global_2667222.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667222.f_2919[1 /*6*/] = { Param0 };
		Global_2667222.f_2919[1 /*6*/].f_3 = uParam1;
		Global_2667222.f_2919[1 /*6*/].f_4 = iParam2;
		Global_2667222.f_2919[1 /*6*/].f_5 = iParam3;
	}
}

int func_28(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x48053974ED6F63CE((Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_32(iParam0, &Var4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0x5D79167FED95F0B0() - 1))
		{
			if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
			{
				iVar6 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
				if (func_13(iVar6, 1, 1))
				{
					fVar3 = func_30(func_31(iVar6), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_30(struct<3> Param0, struct<3> Param1)
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return vdist(Param0, Param1);
}

Vector3 func_31(int iParam0)
{
	return unk_0x6B62510F212526DC(unk_0x407E03586628E458(iParam0), 0);
}

int func_32(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xD69A0C3662175E68(iParam0);
	return unk_0x0152AA00FA3130F1(iParam0);
}

bool func_34()
{
	return Local_127.f_707;
}

int func_35(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_111(unk_0x9E2D6C50374FCFA9(), 0) || func_108(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (func_107(unk_0x9E2D6C50374FCFA9()) || func_105(unk_0x9E2D6C50374FCFA9()))
		{
			bParam2 = false;
		}
	}
	if (unk_0x21E2C39591974468() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (func_38(&(Global_1836830.f_18)))
	{
		if (!func_1(&(Global_1836830.f_18), 7500, 0))
		{
			return 0;
		}
		func_37(&(Global_1836830.f_18));
	}
	if (func_36())
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xD4538F501EDCD96C() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_36()
{
	return unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 0);
}

void func_37(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_38(var uParam0)
{
	return uParam0->f_1;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	switch (iParam0)
	{
		case 0:
			unk_0x3B6C41B60543C47E(0, iParam1);
			break;
		
		default:
			uVar1 = func_40(iParam1);
			iVar0 = unk_0x5D851A9195129CE9(uVar1);
			if (unk_0xE2D0C323A1AE5D85(iVar0, iParam0))
			{
				unk_0xB0550BC91B0159D6(&iVar0, iParam0);
				unk_0x3B6C41B60543C47E(iVar0, iParam1);
			}
			break;
	}
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_41();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_41()
{
	return Global_1574907;
}

bool func_42(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	uVar0 = func_40(iParam1);
	uVar1 = unk_0x5D851A9195129CE9(uVar0);
	return unk_0xE2D0C323A1AE5D85(uVar1, iParam0);
}

void func_43(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 2) && !func_7(unk_0x9E2D6C50374FCFA9())) && !func_6(unk_0x9E2D6C50374FCFA9()))
	{
		if (unk_0xACC32B78196FBC2A(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xACC32B78196FBC2A(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_44(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 2);
	}
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_104(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_102(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703656.f_2736)
		{
			return 0;
		}
	}
	func_60(uParam0, uParam0->f_17);
	func_57(uParam0);
	if (func_56())
	{
		func_57(uParam0);
	}
	if (func_55(uParam0->f_1))
	{
		func_48();
		if (Global_2703656.f_2414[0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[0 /*80*/] = { *uParam0 };
			if (func_47(uParam0->f_69, 8192))
			{
				Global_1932198 = 1;
			}
			return 1;
		}
		if (((Global_2703656.f_2414[0 /*80*/].f_1 == 13 || Global_2703656.f_2414[0 /*80*/].f_1 == 53) || Global_2703656.f_2414[0 /*80*/].f_1 == 54) || Global_2703656.f_2414[0 /*80*/].f_1 == 58)
		{
			Global_2703656.f_2414[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703656.f_2414[iVar0 + 1 /*80*/] = { Global_2703656.f_2414[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703656.f_2414[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_48();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_102(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 2);
				Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2703656.f_2414[iVar0 /*80*/].f_1))
				{
					Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
					func_102(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48()
{
	bool bVar0;
	
	if (Global_2703656.f_2737)
	{
		return;
	}
	if (!Global_78120)
	{
		Global_78120 = 1;
		bVar0 = true;
	}
	func_49();
	if (bVar0)
	{
		Global_78120 = 0;
	}
}

void func_49()
{
	Global_2703656.f_2738 = 0;
	Global_2703656.f_2738.f_582 = 0;
	func_53(&(Global_2703656.f_2738.f_1));
	Global_2703656.f_2738.f_1.f_1 = 0;
	func_50(&(Global_2703656.f_2738.f_1), 1);
}

void func_50(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x705B098546DEB18A(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x8FE9914D4872D601())
		{
			unk_0xEA5DEA46C3EE64D3(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD7D6BA6E36AEC182(0);
			unk_0x6F06CF0E9AB02847();
		}
		unk_0x705B098546DEB18A(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		unk_0x94B5910A9C945688(0);
		uParam0->f_568 = 0;
	}
	if (!Global_78120)
	{
		if (!unk_0xE08D4560995E7946(unk_0xB6BA8B8E3D0B41C6()))
		{
			if (!Global_78121)
			{
				if (unk_0xA829C9A2767AC8EF() && !func_52(0))
				{
					unk_0x5A7ACD1CDF509B0D(800);
				}
			}
		}
	}
	func_51(0);
}

void func_51(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0xB4C854DD86E40FDA(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_78100, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_54(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_55(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return Global_2714627.f_19;
}

void func_57(var uParam0)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_72 = func_58();
	}
}

int func_58()
{
	return 21;
}

int func_59(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_60(var uParam0, int iParam1)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_101() || !func_13(iParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_61(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_61(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_97(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81475[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_97(unk_0x9E2D6C50374FCFA9()) || (func_96() && func_95())) && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 31)) && !bParam4)
	{
		uVar1 = func_94();
		if (unk_0xE5965CDF24F93A9F(uVar1))
		{
			if (unk_0x65FAB09725E2FE75(iVar1))
			{
				if (unk_0xFF65CDB0EB7ACE71(iVar1) != -1)
				{
					if (func_13(unk_0xFF65CDB0EB7ACE71(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_92(iParam1, iParam0, 0);
							}
							else
							{
								return func_74(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(iParam0, unk_0xFF65CDB0EB7ACE71(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_92(iParam1, iParam0, 0);
				}
				else
				{
					return func_62(0, -1, 0);
				}
			}
			else
			{
				return func_62(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x44859561F653DD4E()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_92(iParam1, iParam0, 0);
		}
		else
		{
			return func_74(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(iParam0, unk_0x9E2D6C50374FCFA9(), iParam1, bParam2, bParam3);
}

int func_62(bool bParam0, int iParam1, bool bParam2)
{
	return func_63(unk_0x9E2D6C50374FCFA9(), bParam0, iParam1, bParam2);
}

int func_63(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0D01086B38EC256F(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	if ((func_73() || (func_72() && func_70())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_69(iParam2, iVar0);
		}
		else
		{
			return func_69(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_68(iVar0, iParam2, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_67(1);
				}
				else
				{
					return func_67(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 20))
			{
				return func_64(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_64(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_67(1);
	}
	return func_67(0);
}

int func_64(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_66(iParam0, iParam1, iParam3);
	if (func_65(Global_4718592.f_86750, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_65(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138117 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9277[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_68(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 0);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 1);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 2);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 4);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 5);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 6);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 8);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 9);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 10);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 12);
				
				case 1:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 13);
				
				case 2:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 14);
				
				case 3:
					return unk_0xE2D0C323A1AE5D85(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_66(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_70()
{
	if (func_71())
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 4);
}

bool func_71()
{
	return unk_0xE2D0C323A1AE5D85(Global_4718592.f_131903, 12);
}

bool func_72()
{
	if (unk_0x44859561F653DD4E())
	{
		return unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0);
	}
	return ((unk_0xE2D0C323A1AE5D85(Global_4718592.f_142301, 0) || Global_1923663) && unk_0xB4C854DD86E40FDA(joaat("fm_deathmatch_creator")) > 0);
}

int func_73()
{
	if (func_71() && unk_0x44859561F653DD4E())
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x0E40F846A70BA3EC(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853128[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_83())
			{
				iVar3 = func_79(iParam0);
				if (!iVar3 == -1)
				{
					return func_77(iVar3);
				}
			}
			if ((func_76(iParam1, iParam0, iVar0, 0) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)) || ((func_68(unk_0x0E40F846A70BA3EC(iParam1), unk_0x0E40F846A70BA3EC(iParam0), 0) && unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 23)) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 18)))
			{
				return func_67(1);
			}
			else if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26))
			{
				return func_75(1);
			}
			else
			{
				return func_63(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_67(1);
			}
			else
			{
				return func_63(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_79(iParam0);
	if (!iVar4 == -1)
	{
		return func_77(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && unk_0x0E40F846A70BA3EC(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == unk_0x0E40F846A70BA3EC(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x0E40F846A70BA3EC(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
	}
	return unk_0x0E40F846A70BA3EC(iParam0) == iParam2;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_78(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_101())
	{
		if (func_81(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_80(iParam0)];
		}
	}
	return -1;
}

int func_80(int iParam0)
{
	if (iParam0 != func_101())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_101();
}

bool func_81(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_101();
}

int func_82(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_101())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_83()
{
	if ((((((func_91() || func_90()) || func_56()) || func_89()) || func_88()) || func_86()) || func_84())
	{
		return 1;
	}
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	return func_85(Global_4718592.f_86750);
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_86()
{
	return func_87(Global_4718592.f_86750);
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_88()
{
	return Global_2714627.f_24;
}

bool func_89()
{
	return Global_2714627.f_21;
}

var func_90()
{
	return Global_2714627.f_18;
}

var func_91()
{
	return Global_2714627.f_17;
}

int func_92(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_83())
	{
		iVar2 = func_79(iParam1);
		if (!iVar2 == -1)
		{
			return func_77(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_101())
	{
		if (Global_4718592.f_81475[iParam0] != -1 && Global_4718592.f_81475[iParam0] <= 4)
		{
			if (Global_4718592.f_81475[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81475[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81475[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81475[iParam0] == 4)
			{
				if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81475[iParam0];
			}
		}
		else
		{
			iVar0 = func_63(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_21, 13))
		{
			iVar0 = func_93(iParam0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xE2D0C323A1AE5D85(Global_4718592.f_15, 26) && !func_68(iParam0, unk_0x0E40F846A70BA3EC(iParam1), 0))
		{
			iVar0 = func_75(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_93(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138274;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138275;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138276;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138277;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_94()
{
	return Global_2621446.f_2;
}

bool func_95()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 4);
}

bool func_96()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 14);
}

int func_97(int iParam0)
{
	if (func_99(iParam0, 0))
	{
		return 1;
	}
	if (func_98())
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

bool func_98()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 3);
}

bool func_99(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		bVar0 = func_100(-1, 0) == 8;
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

int func_100(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

int func_101()
{
	return -1;
}

void func_102(var uParam0, int iParam1)
{
	func_103(uParam0, iParam1);
}

void func_103(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_104(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_101();
	uParam1->f_18 = func_101();
	uParam1->f_19 = func_101();
	uParam1->f_20 = func_101();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_105(int iParam0)
{
	return func_106(iParam0, 20);
}

bool func_106(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_106(iParam0, 9);
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 && func_109(Global_1893548[iParam0 /*600*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1)
	{
		if (func_109(Global_1893548[iParam0 /*600*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_110(iParam0, 0);
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_111(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0)
{
	Local_127 = iParam0;
}

int func_113()
{
	int iVar0;
	
	if (func_1(&(Local_127.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_127.f_674[iVar0] = -1;
			iVar0++;
		}
		func_37(&(Local_127.f_661));
		func_116();
		if (func_34())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_127.f_713[iVar0] = func_29(iVar0);
				iVar0++;
			}
			func_114();
		}
		return 1;
	}
	return 0;
}

void func_114()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_127.f_729[iVar0 /*2*/] = func_115();
		iVar0++;
	}
}

int func_115()
{
	int iVar0;
	
	iVar0 = unk_0x5853B15F78E1A265(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

void func_116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_127.f_709 = func_130();
	Local_127.f_708 = Local_127.f_709;
	Local_127.f_712 = func_126();
	Local_127.f_707 = func_123();
	iVar0 = func_122();
	if (Local_127.f_707)
	{
		iVar1 = 1;
	}
	func_118(func_120(132, Local_127.f_712, iVar1, 0));
	if (Local_127.f_712 == 1 && !Local_127.f_707)
	{
		Local_127.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_127.f_709)
	{
		Local_127.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_127.f_10[iVar2 /*5*/] = { func_117(Local_127.f_712, Local_127.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_117(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.651f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.099f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.295f, 350.0934f;
							
							case 3:
								return 1779.28f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.214f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.943f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.536f, -1594.874f, 262.0831f;
							
							case 7:
								return 2139.424f, -2613.58f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.901f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.645f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.801f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.419f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.675f, 60.143f;
							
							case 13:
								return 872.454f, -1929.237f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.19f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.832f, 1113.675f, 134.9644f;
							
							case 21:
								return 1539.314f, 1716.172f, 125.0574f;
							
							case 22:
								return 1875.192f, 1698.918f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.402f, 86.7663f;
							
							case 24:
								return 2337.891f, 1358.536f, 100.8737f;
							
							case 25:
								return 2727.786f, 1558.729f, 83.66f;
							
							case 26:
								return 3112.177f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.817f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.206f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.294f, -1652.948f, 154.2478f;
							
							case 31:
								return 1096.793f, -1141.693f, 96.1055f;
							
							case 32:
								return 3042.9f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.351f, -1492.043f, 30.646f;
							
							case 34:
								return 1214.374f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.616f, -2497.971f, 101.8039f;
							
							case 36:
								return 1872.035f, -761.149f, 105f;
							
							case 37:
								return 1657.665f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.229f, -1981.901f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.064f, 60.0276f;
							
							case 40:
								return 2609.912f, -2096.358f, 35.0044f;
							
							case 41:
								return 1121.19f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.085f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.964f, -3285.54f, 19.5936f;
							
							case 45:
								return 1499.883f, -1276.207f, 131.5493f;
							
							case 46:
								return 3381.442f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.689f, 120f;
							
							case 49:
								return 757.5558f, -1196.363f, 232.0553f;
							
							case 50:
								return 1887.774f, -3474.97f, 77.8727f;
							
							case 51:
								return 1083.224f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.821f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.541f, -1883.809f, 50f;
							
							case 55:
								return 847.74f, 1781.903f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.346f, 52f;
							
							case 57:
								return 2648.131f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.117f, 1337.446f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.908f, 136.1568f;
							
							case 61:
								return 2099.732f, -1212.728f, 178.3343f;
							
							case 62:
								return 1945.16f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.81f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.392f, -1571.629f, 90.566f;
							
							case 65:
								return 1818.023f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.051f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.646f, -2126.072f, 60.6975f;
							
							case 68:
								return 1088.679f, -1982.82f, 84.1204f;
							
							case 69:
								return 1597.218f, -2817.042f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.226f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.583f, 60.7022f;
							
							case 72:
								return 1070.4f, -1835.148f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.318f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.32f, 46.5743f;
							
							case 75:
								return 2651.639f, -1230.85f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.173f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case joaat("mpsv_lp0_31"):
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.666f, 1222.327f, 202.4859f;
							
							case 81:
								return 1978.543f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.993f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.02f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.012f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.318f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.402f, -2179.396f, 105.5733f;
							
							case 90:
								return 1131.183f, -2929.769f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.736f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.969f, 73.6448f;
							
							case 94:
								return 638.4819f, -1021f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.985f, -2243.761f, 136f;
							
							case 97:
								return 2947.746f, 792.9475f, 45f;
							
							case 98:
								return 2608.733f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.208f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.513f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.219f, -2129.611f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.042f, 145.6704f;
							
							case 104:
								return 2052.692f, -252.931f, 228.334f;
							
							case 105:
								return 2394.902f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.049f, 1472.569f, 179.2061f;
							
							case 108:
								return 1898.354f, 1020.671f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.579f, -685.6392f, 126f;
							
							case 111:
								return 2734.234f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.806f, 86.3959f;
							
							case 113:
								return 3033.16f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.323f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.262f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.696f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.777f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.475f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.429f, 1273.094f, 63.9814f;
							
							case 1:
								return 2545.422f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.171f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.835f, -1005.532f, 50.5682f;
							
							case 4:
								return 1078.853f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.858f, 8.6817f;
							
							case 6:
								return 1216.266f, -2907.278f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.094f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.235f, 4.7518f;
							
							case 9:
								return 1130.214f, -2082.811f, 30.0089f;
							
							case 10:
								return 1506.701f, -2135.637f, 75.4567f;
							
							case 11:
								return 1759.277f, -1579.97f, 117.9f;
							
							case 12:
								return 2510.45f, -1219.332f, 1.89f;
							
							case 13:
								return 2855.604f, -1339.602f, 14.7183f;
							
							case 14:
								return 2826.41f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.599f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.534f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.608f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.003f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.737f, 1111.848f, 113.334f;
							
							case 20:
								return 1135.62f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.686f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.942f, -1918.75f, 30.1432f;
							
							case 28:
								return 1183.313f, -1550.946f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.059f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.09f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.725f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1f, 23.5193f;
							
							case 34:
								return 1405.691f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.367f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.392f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.38f, 1711.949f, 67.0413f;
							
							case 38:
								return 2307.003f, -1750.421f, 133.7737f;
							
							case 39:
								return 2172.226f, -1069.367f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.797f, 27.2597f;
							
							case 43:
								return 1289.908f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.171f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.186f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.77f, 30.3237f;
							
							case 47:
								return 1874.741f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.76f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.907f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.09f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.824f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.104f, -1759.198f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.081f, 108.769f;
							
							case 61:
								return 1188.11f, 1556.979f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.484f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.027f, 1152.222f, 64.0942f;
							
							case 67:
								return 2474.09f, 1484.103f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.106f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.729f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.433f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.219f, 29.5831f;
							
							case 73:
								return 1434.707f, -2315.042f, 65.927f;
							
							case 74:
								return 1882.254f, -1873.208f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.406f, 249.303f;
							
							case 76:
								return 1969.748f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.432f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.465f, 336.8802f, 80.9909f;
							
							case joaat("mpsv_lp0_31"):
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.293f, 7.9233f;
							
							case 82:
								return 1223.13f, -2338.621f, 59.8673f;
							
							case 83:
								return 1747.151f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.646f, -1476.472f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.075f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.579f, 1073.328f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.589f, 20.7017f;
							
							case 90:
								return 1360.928f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.373f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.51f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.361f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.831f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.471f, 98.4293f;
							
							case 99:
								return 1071.843f, -1841.304f, 36.3069f;
							
							case 100:
								return 1133.087f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.912f, -2385.55f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.606f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.213f, 17.7764f;
							
							case 107:
								return 2638.077f, 1346.641f, 25.4338f;
							
							case 108:
								return 1910.663f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.967f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.12f, 1471.532f, 0f;
							
							case 111:
								return 2348.98f, -2281.005f, 0.1697f;
							
							case 112:
								return 2681.416f, -1560.354f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.423f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.192f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.46f, -1073.702f, 0.6712f;
							
							case 119:
								return 1423.506f, -2790.912f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.007f, 58f;
							
							case 1:
								return -1343.719f, -3336.795f, 30.5601f;
							
							case 2:
								return -1336.239f, -3044.059f, 300.803f;
							
							case 3:
								return -1833.852f, -1191.057f, 41.1411f;
							
							case 4:
								return -1955.78f, 1776.57f, 195.8577f;
							
							case 5:
								return -2166.629f, 1607.567f, 260f;
							
							case 6:
								return -417.0685f, 1153.347f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.127f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.804f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.038f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.368f, 50f;
							
							case 18:
								return -1357.973f, -1476.396f, 40.9274f;
							
							case 19:
								return -2004.334f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.381f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.563f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.694f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.082f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.057f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.589f, 1428.968f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.526f, 500.0109f;
							
							case 34:
								return -1621.841f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.143f, 92.8559f;
							
							case 37:
								return -1879.575f, -2634.001f, 11.491f;
							
							case 38:
								return -1459.734f, -2141.965f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.013f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.222f, 1543.227f, 33.8091f;
							
							case 44:
								return -2753.087f, 1229.005f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.24f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.199f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.071f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.983f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.293f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.813f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.443f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.535f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.055f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.421f, 1110.18f, 37.6606f;
							
							case 61:
								return -2256.718f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.094f, 1330.48f, 236.7105f;
							
							case 63:
								return -1030.221f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.428f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.994f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.505f, -1070.038f, 21.0905f;
							
							case 72:
								return -1013.909f, -1763.924f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.061f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.269f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.068f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.674f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.649f, 33.5782f;
							
							case 78:
								return -1100.793f, -2846.705f, 53.132f;
							
							case joaat("mpsv_lp0_31"):
								return -1274.324f, -2448.849f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.318f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9f, 23.1103f;
							
							case 82:
								return -1907.151f, -3034.577f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.834f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.491f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.746f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.156f, 76.1713f;
							
							case 88:
								return -1106.939f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.83f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.448f, -1043.763f, 29.6876f;
							
							case 91:
								return -1618.367f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.512f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.798f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.458f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.359f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.786f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.621f, 168.2627f;
							
							case 100:
								return -3029.234f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.207f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.748f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.995f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.348f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.239f, 50f;
							
							case 112:
								return 397.6461f, -1929.781f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.396f, 20.0582f;
							
							case 115:
								return -2440.527f, -1654.13f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.026f, 26.3869f;
							
							case 117:
								return -1374.637f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.177f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.09f, 1324.141f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.138f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.96f, 1209.59f, 13.7743f;
							
							case 4:
								return -2502.529f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.546f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.21f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4f, -1054.226f, 12.1522f;
							
							case 8:
								return -1268.607f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.615f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.798f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.279f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.258f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.489f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.918f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.786f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.885f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.435f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.53f, 1493.765f, 110.5947f;
							
							case 26:
								return -1173.264f, -2037.82f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.738f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.8f, 4.8963f;
							
							case 29:
								return -1177.272f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.934f, -1447.037f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.162f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.664f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.078f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.535f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.464f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.605f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.068f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.547f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.686f, 23.8153f;
							
							case 47:
								return -1024.89f, 1012.239f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.29f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.372f, 12.06f;
							
							case 53:
								return -2971.731f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.137f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.912f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.256f, 6.6082f;
							
							case 58:
								return -1213.121f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.807f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.19f, 1185.782f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.992f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.788f, -1435.002f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.355f, 302.9701f;
							
							case 71:
								return -1284.425f, -3403.299f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.779f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.062f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.526f, 12.9452f;
							
							case 75:
								return -1336.274f, -3044.103f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.519f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.881f, 5.0014f;
							
							case joaat("mpsv_lp0_31"):
								return 109.4531f, -2816.037f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.894f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.437f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.052f, -1759.302f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.591f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.504f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.386f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.432f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.708f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.613f, 6.5852f;
							
							case 93:
								return -1730.83f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.005f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.816f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.777f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.688f, 1551.647f, 272.9088f;
							
							case 98:
								return -2780.149f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.936f, 1930.876f, 166.0052f;
							
							case 100:
								return -3017.571f, 1860.058f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.097f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.86f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.919f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.225f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.831f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.292f, 0.1193f;
							
							case 112:
								return -3046.133f, 1570.539f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.231f, -2724.314f, -0.3275f;
							
							case 116:
								return -1029.441f, -1778.107f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.997f, 0.4963f;
							
							case 118:
								return -1546.054f, -1509.913f, 0.409f;
							
							case 119:
								return -1678.194f, -2238.986f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.242f, 164.0655f;
							
							case 1:
								return -2398.244f, 2197.323f, 103.0324f;
							
							case 2:
								return -2470.967f, 2693.007f, 16.093f;
							
							case 3:
								return -1417.126f, 2634.235f, 3.8116f;
							
							case 4:
								return -1617.519f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.536f, 3851.927f, 510.4073f;
							
							case 6:
								return -1243.21f, 4536.333f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.334f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.549f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.962f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.58f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.227f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.457f, 238.4183f;
							
							case 14:
								return -1185.328f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.416f, 3363.437f, 44.4458f;
							
							case 16:
								return -2188.789f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.268f, 5204.997f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.022f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.369f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.51f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.624f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.141f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.202f, 317.838f;
							
							case 27:
								return -1179.401f, 4926.922f, 230.3542f;
							
							case 28:
								return -1801.77f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.721f, 3964.171f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.414f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.475f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.96f, 35.4066f;
							
							case 34:
								return -2597.654f, 1922.071f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.946f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.763f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.72f, 53f;
							
							case 41:
								return -1599.971f, 2104.185f, 80.8163f;
							
							case 42:
								return -1626.487f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.916f, 117.4892f;
							
							case 45:
								return -2684.946f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.552f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.876f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.562f, 221.1006f;
							
							case 50:
								return -1235.554f, 1879.036f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.314f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.468f, 5984.955f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.437f, 55.2519f;
							
							case 57:
								return -1096.963f, 3225.607f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.252f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case joaat("mpsv_lp0_31"):
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.26f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.76f, 2011.211f, 153.3448f;
							
							case 82:
								return -2254.314f, 1680.506f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.408f, 201.629f;
							
							case 84:
								return -1751.763f, 1998.548f, 129.1121f;
							
							case 85:
								return -1453.889f, 2069.22f, 65.2848f;
							
							case 86:
								return -1479.386f, 2405.98f, 37.5402f;
							
							case 87:
								return -1041.601f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.23f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.523f, 4386.938f, 1000f;
							
							case 92:
								return -1508.03f, 4446.546f, 59.4166f;
							
							case 93:
								return -1449.331f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.183f, 5440.63f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.363f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.435f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.436f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.459f, 256.6769f;
							
							case 102:
								return -2092.081f, 2518.016f, 800f;
							
							case 103:
								return -2536.684f, 1678.45f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.64f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.232f, 5711.063f, 333.8782f;
							
							case 108:
								return -1786.052f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.189f, 3295.095f, 245.8079f;
							
							case 110:
								return -2149.145f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.092f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.989f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.636f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.675f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.398f, 2886.044f, 1000f;
							
							case 118:
								return -3004.988f, 2333.1f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.62f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.786f, 3429.213f, 31.6018f;
							
							case 1:
								return -1873.915f, 2090.595f, 139.9944f;
							
							case 2:
								return -1674.252f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.938f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.517f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.927f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.86f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.358f, 28.941f;
							
							case 11:
								return -288.922f, 2524.722f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.983f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.129f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.846f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.444f, 6.3939f;
							
							case 16:
								return -1444.47f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.041f, 5258.685f, 2.9791f;
							
							case 18:
								return -1823.203f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.111f, 2740.839f, 1.8909f;
							
							case 20:
								return -1626.549f, 2587.924f, 1.6362f;
							
							case 21:
								return -1575.299f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.64f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.194f, 33.1315f;
							
							case 26:
								return -2584.923f, 1931.11f, 166.3129f;
							
							case 27:
								return -1618.161f, 3184.126f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.923f, 2408.993f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.03f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.75f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.558f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.125f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.014f, 172.9345f;
							
							case 35:
								return -1347.726f, 4127.416f, 61.6295f;
							
							case 36:
								return -1364.709f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.336f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.115f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.831f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.458f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.861f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.296f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.758f, 238.1628f;
							
							case 47:
								return -2228.817f, 4218.248f, 45.7951f;
							
							case 48:
								return -2493.361f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.088f, 3200.413f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.925f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.798f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.097f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.785f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.716f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.076f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.479f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.007f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.086f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.71f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.673f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.173f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.984f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.997f, 271.9911f;
							
							case 71:
								return -2432.337f, 3535.94f, 33.3233f;
							
							case 72:
								return -1440.526f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.759f, 118.1093f;
							
							case 74:
								return -1577.494f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.334f, 4525.601f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case joaat("mpsv_lp0_31"):
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.449f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.738f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.989f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.175f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.594f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.75f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.49f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.471f, 63.3434f;
							
							case 90:
								return -1474.287f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.146f, 4927.809f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.183f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.778f, 73.9626f;
							
							case 96:
								return -2077.635f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.114f, 29.7812f;
							
							case 98:
								return -2686.153f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.387f, 4649.492f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.846f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.231f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.794f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.421f, 30.6801f;
							
							case 108:
								return -1804.935f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.058f, 29.4f;
							
							case 110:
								return -1191.056f, 4389.15f, 4.3f;
							
							case 111:
								return -2188.334f, 2590.943f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.091f, 0.5703f;
							
							case 113:
								return -2047.696f, 4852.304f, 0.6241f;
							
							case 114:
								return -2664.615f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.604f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.176f, 4848.075f, 247.0701f;
							
							case 2:
								return 1676.777f, 5140.256f, 160.2494f;
							
							case 3:
								return 1995.339f, 5021.67f, 68.695f;
							
							case 4:
								return 2599.952f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.309f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.992f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.904f, 6144.417f, 10.0202f;
							
							case 8:
								return 3431.106f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.091f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.801f, 4619.894f, 65f;
							
							case 11:
								return 3378.036f, 4079.524f, 229.1767f;
							
							case 12:
								return 3944.403f, 3729.657f, 19.5046f;
							
							case 13:
								return 3556.383f, 3684.987f, 67.2346f;
							
							case 14:
								return 3296.121f, 3365.198f, 125f;
							
							case 15:
								return 3290f, 3140.437f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.171f, 95f;
							
							case 18:
								return 1397.009f, 2116.503f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.695f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.414f, 161f;
							
							case 21:
								return 564.4257f, 3392.354f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.265f, 78.9779f;
							
							case 23:
								return 1279.739f, 3100.26f, 53.8507f;
							
							case 24:
								return 1415.487f, 3833.477f, 52.6619f;
							
							case 25:
								return 1488.657f, 3946.224f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.615f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.792f, 171f;
							
							case 28:
								return 1502.546f, 6159.08f, 230.8224f;
							
							case 29:
								return 1163.891f, 5965.097f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.598f;
							
							case 32:
								return 1002.141f, 4786.271f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.87f, 6384.963f, 52.4688f;
							
							case 35:
								return 754.4042f, 6466f, 49f;
							
							case 36:
								return 1042.216f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.115f, 5662.172f, 274f;
							
							case 38:
								return 2898.098f, 4327.457f, 107.9208f;
							
							case 39:
								return 2634.35f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.524f, 56.3868f;
							
							case 41:
								return 1563.065f, 3572.822f, 41f;
							
							case 42:
								return 2276.492f, 1955.542f, 146.9525f;
							
							case 43:
								return 2379.747f, 2604.982f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.709f, 63f;
							
							case 45:
								return 2264.604f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.187f, 2908.336f, 373.9144f;
							
							case 47:
								return 3510.479f, 2569.052f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.079f, 30f;
							
							case 49:
								return 3319.34f, 2272.217f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.335f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.62f, 3760.053f, 53f;
							
							case 54:
								return 1824.499f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.765f, 2384.4f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.617f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.194f, 84.9932f;
							
							case 58:
								return 2767.542f, 2047.162f, 126.1494f;
							
							case 59:
								return 2061.36f, 3941.451f, 200f;
							
							case 60:
								return 873.5367f, 2867.737f, 73.5925f;
							
							case 61:
								return 1752.141f, 3052.542f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.885f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.466f, 81.564f;
							
							case 64:
								return 2285.089f, 3289.129f, 86.2814f;
							
							case 65:
								return 1745.899f, 3756.127f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.758f, 55f;
							
							case 67:
								return 1552.003f, 2186.406f, 96f;
							
							case 68:
								return 2716.376f, 4132.656f, 63.7827f;
							
							case 69:
								return 3809.813f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.82f, 4308.541f, 140f;
							
							case 71:
								return 2268.876f, 5381.432f, 328.4639f;
							
							case 72:
								return 2236.389f, 5604.683f, 71.034f;
							
							case 73:
								return 1986.657f, 6201.739f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.263f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.983f, 6702.233f, 14.7976f;
							
							case 77:
								return 2149.811f, 3844.999f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case joaat("mpsv_lp0_31"):
								return 1791.897f, 4595.955f, 48.6224f;
							
							case 80:
								return 1181.133f, 5151.417f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.536f, 665.041f;
							
							case 82:
								return 1410.651f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.466f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.738f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.152f, 618.67f;
							
							case 87:
								return 3941.761f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.581f, 4262.104f, 887.18f;
							
							case 89:
								return 3535.166f, 3778.242f, 46.4187f;
							
							case 90:
								return 3638.854f, 3108.953f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.375f, 59f;
							
							case 92:
								return 1052.214f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.822f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.519f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.744f, 4745.392f, 370.3547f;
							
							case 98:
								return 2721.061f, 1556.416f, 101.1161f;
							
							case 99:
								return 1855.284f, 1600.665f, 116.8989f;
							
							case 100:
								return 1623.469f, 1518.122f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.348f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.871f, 135.5203f;
							
							case 103:
								return 1294.051f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.637f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.4f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.65f, 4160.215f, 883.122f;
							
							case 108:
								return 2191.156f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.64f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.207f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.114f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.709f, 1000f;
							
							case 114:
								return 469.5136f, 6745.105f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.793f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.231f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.254f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.324f, 6196.489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.963f, 2200.244f, 78.0226f;
							
							case 1:
								return 1104.104f, 2399.396f, 53.529f;
							
							case 2:
								return 1089.489f, 2132.943f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.264f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.313f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.285f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.117f, 35.1053f;
							
							case 7:
								return 1528.585f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.4f, 3468.064f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.54f, 40.6483f;
							
							case 10:
								return 2722.307f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.258f, 2881.75f, 85.959f;
							
							case 12:
								return 2096.643f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.657f, 3485.959f, 70.4429f;
							
							case 14:
								return 3390.08f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.214f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.101f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.81f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.263f, 49.634f;
							
							case 19:
								return 1601.463f, 6624.76f, 14.7707f;
							
							case 20:
								return 1406.928f, 6568.621f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.866f, 34.8699f;
							
							case 22:
								return 1503.687f, 6360.855f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.359f, 17.4152f;
							
							case 24:
								return 3632.89f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.659f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.534f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.015f, 15.6116f;
							
							case 28:
								return 3859.284f, 4226.905f, 2.7151f;
							
							case 29:
								return 3692.684f, 4570.595f, 24.1191f;
							
							case 30:
								return 1830.916f, 2542.005f, 44.8856f;
							
							case 31:
								return 2424.308f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.934f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.468f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.984f, 58.1331f;
							
							case 35:
								return 2041.713f, 2002.479f, 84.9881f;
							
							case 36:
								return 2431.854f, 1986.869f, 82.1812f;
							
							case 37:
								return 1190.872f, 3401.189f, 67.3338f;
							
							case 38:
								return 1943.983f, 3817.853f, 31.0619f;
							
							case 39:
								return 1977.679f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.868f, 5804.83f, 414.5815f;
							
							case 43:
								return 1412.016f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.173f, 4997.547f, 41.5868f;
							
							case 46:
								return 2391.918f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.943f, 4385.975f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.5f, 41.1966f;
							
							case 52:
								return 1219.444f, 2744.531f, 37.0054f;
							
							case 53:
								return 2564.32f, 2578.493f, 36.9367f;
							
							case 54:
								return 2827.744f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.397f, 5326.474f, 100.269f;
							
							case 56:
								return 2211.154f, 3593.324f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.145f, 129.2854f;
							
							case 58:
								return 3345.3f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.785f, 39.4652f;
							
							case 60:
								return 2184.891f, 3724.368f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.996f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.558f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.75f, 3281.402f, 54.2127f;
							
							case 65:
								return 2210.976f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.328f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.292f, 95.3074f;
							
							case 68:
								return 1844.478f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.128f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.294f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.009f, 3591.066f, 34.3615f;
							
							case 72:
								return 2008.265f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.059f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.895f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.756f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.292f, 4784.674f, 33.6784f;
							
							case 77:
								return 2005.109f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.677f, 3692.743f, 33.513f;
							
							case joaat("mpsv_lp0_31"):
								return 1530.711f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.366f, 3301.007f, 40.1368f;
							
							case 81:
								return 3481.603f, 3740.488f, 35.6427f;
							
							case 82:
								return 2392.425f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.154f, 3168.942f, 50.5572f;
							
							case 84:
								return 2354.496f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.938f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.819f, 23.6943f;
							
							case 87:
								return 3239.663f, 3501.223f, 67.723f;
							
							case 88:
								return 2672.952f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.962f, 3661.864f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.23f, 37.0001f;
							
							case 91:
								return 1685.598f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.653f, 3818.394f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.647f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.564f, 55.9249f;
							
							case 95:
								return 1352.413f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.858f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.847f, 6219.958f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.969f, 15.0641f;
							
							case 99:
								return 2625.796f, 2809.979f, 32.439f;
							
							case 100:
								return 1302.932f, 4234.541f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.311f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.487f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.249f, 6219.229f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.088f, 67.6632f;
							
							case 107:
								return 2537.341f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.73f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.232f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.624f, 5135.376f, -0.3837f;
							
							case 111:
								return 4054.226f, 4518.386f, 0.4f;
							
							case 112:
								return 1074.313f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.275f, 6151.57f, 161.1609f;
							
							case 115:
								return 3646.335f, 2977.049f, 0.6928f;
							
							case 116:
								return 1938.372f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.841f, 1.2201f;
							
							case 118:
								return 1582.613f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.52f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_118(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = 470437478;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = uParam0;
	iVar1 = func_119(1, 1);
	if (!iVar1 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 3, iVar1);
	}
}

var func_119(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9E2D6C50374FCFA9() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
				else if (!func_99(iVar2, 0))
				{
					unk_0xCED9E32812D6C7C7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_121(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_122()
{
	return unk_0x5853B15F78E1A265(0, 1);
}

bool func_123()
{
	if (func_125(Local_127.f_712))
	{
		return 0;
	}
	else if (func_124(Local_127.f_712))
	{
		return 1;
	}
	return unk_0x5853B15F78E1A265(0, 2) == 1;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11389 || Global_262145.f_11381);
		
		case 1:
			return (Global_262145.f_11388 || Global_262145.f_11381);
		
		case 2:
			return (Global_262145.f_11386 || Global_262145.f_11381);
		
		case 3:
			return (Global_262145.f_11387 || Global_262145.f_11381);
		
		default:
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11385 || Global_262145.f_11380);
		
		case 1:
			return (Global_262145.f_11384 || Global_262145.f_11380);
		
		case 2:
			return (Global_262145.f_11382 || Global_262145.f_11380);
		
		case 3:
			return (Global_262145.f_11383 || Global_262145.f_11380);
		
		default:
	}
	return 0;
}

int func_126()
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iLocal_102 = 1;
	switch (iLocal_102)
	{
		case 0:
			return unk_0x5853B15F78E1A265(0, 4);
			break;
		
		case 1:
			iVar1 = func_127(&uVar0);
			iVar2 = unk_0x5853B15F78E1A265(0, iVar1);
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return unk_0x5853B15F78E1A265(0, 4);
}

int func_127(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iVar0)))
		{
			iVar6 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iVar0));
			if (func_13(iVar6, 1, 1))
			{
				uVar7 = unk_0x407E03586628E458(iVar6);
				if (!unk_0xF68107C40359970C(uVar7))
				{
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (!func_129(iVar5))
						{
							if (func_128(iVar5, &Var2, &Var3))
							{
								if (unk_0xB950B5D01E8A4868(uVar7, Var2, Var3, 0, 0, 0))
								{
									bVar4 = false;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!func_129(iVar5))
			{
				(*uParam0)[iVar5] = 1;
			}
			iVar5++;
		}
	}
	return iVar1;
}

int func_128(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_129(int iParam0)
{
	return (func_125(iParam0) && func_124(iParam0));
}

var func_130()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar2 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_11394)
	{
		return Global_262145.f_11280;
	}
	if (iVar1 >= Global_262145.f_11393)
	{
		return Global_262145.f_11279;
	}
	if (iVar1 >= Global_262145.f_11392)
	{
		return Global_262145.f_10453;
	}
	return Global_262145.f_10453;
}

void func_131()
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_127.f_713[iVar0] == unk_0xF1354995C6159A78())
			{
				if (func_132(iVar0))
				{
					if (!unk_0xE2D0C323A1AE5D85(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_1, iVar0))
					{
						unk_0xCED9E32812D6C7C7(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_1), iVar0);
					}
				}
				else if (unk_0xE2D0C323A1AE5D85(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_1, iVar0))
				{
					unk_0xB0550BC91B0159D6(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_1), iVar0);
				}
			}
			else if (unk_0xE2D0C323A1AE5D85(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_1, iVar0))
			{
				unk_0xB0550BC91B0159D6(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

int func_132(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (func_32(iParam0, &Var0, &uVar1))
	{
		if (func_133(Var0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_133(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2667222.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x34FAA537D539192C(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0xAC48FF26FAAA8DD0(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0xAC48FF26FAAA8DD0(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x2D3CDDF3FE35FCA6(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam11)
	{
		if (unk_0x3FDE5764A07BA515(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (fParam12 > 0f)
	{
		if (func_138(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_134(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667222.f_2++;
	return 1;
}

int func_134(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_13(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			if (!unk_0xA829C9A2767AC8EF())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x987A5F1E1A67E3C0(func_136(unk_0x9E2D6C50374FCFA9()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x0318E2EE6FB4563F(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_13(iVar1, 1, 1))
		{
			if (!func_99(iVar1, 0) && unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x9E2D6C50374FCFA9()))
				{
					if ((func_135(iVar1) || !bParam8) && !Global_2689156[iVar1 /*453*/].f_268)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x0E40F846A70BA3EC(iVar1) != unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()))) || unk_0x0E40F846A70BA3EC(iVar1) == -1)
							{
								if (unk_0x987A5F1E1A67E3C0(func_136(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x0E40F846A70BA3EC(iVar1) != iParam6 || unk_0x0E40F846A70BA3EC(iVar1) == -1)
						{
							if (unk_0x987A5F1E1A67E3C0(func_136(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x0809D748691DCA79(iVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (unk_0x4A1EA713628C49D4(unk_0x407E03586628E458(iParam0)) || Global_2689156[iParam0 /*453*/].f_254)
	{
		return 1;
	}
	return 0;
}

Vector3 func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_56() && Global_1853128[iVar0 /*888*/].f_858) && !func_137(Global_1853128[iVar0 /*888*/].f_859))
	{
		return Global_1853128[iVar0 /*888*/].f_859;
	}
	return func_31(iParam0);
}

int func_137(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_138(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x9E2D6C50374FCFA9() != iVar1) || iParam6 == 0)
		{
			if (func_13(iVar1, bParam2, bParam3))
			{
				if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iVar1))
				{
					if (!bParam5 || (!unk_0xF68107C40359970C(unk_0x407E03586628E458(iVar1)) && func_135(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) != unk_0x0E40F846A70BA3EC(iVar1))) || unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1)
						{
							if (((unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9()) == -1 && uParam7) && bParam4) && func_139(iVar1))
							{
							}
							else if (unk_0xE5965CDF24F93A9F(unk_0x407E03586628E458(iVar1)))
							{
								if (unk_0x987A5F1E1A67E3C0(func_31(iVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0)
{
	if (func_142(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	Global_2783300 = { func_141(iParam0) };
	if (unk_0x106C9EE9D83F20DF(&Global_2783300))
	{
		return 1;
	}
	if (func_140(unk_0x9E2D6C50374FCFA9(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_80(iParam0);
	if (!iVar0 == func_101())
	{
		if (iVar0 == func_80(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_141(int iParam0)
{
	struct<13> Var0;
	
	unk_0x460FFCEC183339C6(iParam0, &Var0, 13);
	return Var0;
}

int func_142(int iParam0, int iParam1)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		Global_2783300 = { func_141(iParam0) };
		Global_2783313 = { func_141(iParam1) };
		if (unk_0x8C992447292D600F(&Global_2783300))
		{
			if (unk_0x8C992447292D600F(&Global_2783313))
			{
				unk_0x4FFBF2C0D8249E45(&Global_2783230, 35, &Global_2783300);
				unk_0x4FFBF2C0D8249E45(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_143()
{
	int iVar0;
	int iVar1;
	
	func_648();
	if (func_646())
	{
		func_526();
	}
	if (func_525(unk_0x9E2D6C50374FCFA9()) || func_524(unk_0x9E2D6C50374FCFA9()))
	{
		func_523();
	}
	if ((!func_6(unk_0x9E2D6C50374FCFA9()) && !func_522(0)) && !func_522(func_521(132)))
	{
		if (func_494(0, 1, 1))
		{
			if (unk_0xE2D0C323A1AE5D85(iLocal_92, 3))
			{
				unk_0xB0550BC91B0159D6(&iLocal_92, 3);
			}
			switch (Local_1494[unk_0xF1354995C6159A78() /*5*/].f_3)
			{
				case 0:
					if (Local_127.f_8 == 1)
					{
						func_493(1);
						func_492(1);
					}
					else if (Local_127.f_8 >= 2)
					{
						func_492(1);
					}
					break;
				
				case 1:
					func_488(6);
					if (Local_127.f_8 >= 2)
					{
						func_492(2);
					}
					func_488(2);
					func_486(0);
					func_484((Global_262145.f_11378 - func_485(&(Local_127.f_667), 0, 0)));
					func_481(func_483((Global_262145.f_11378 - func_485(&(Local_127.f_667), 0, 0)), 0), func_482(-1));
					func_463();
					break;
				
				case 2:
					if (Local_127.f_8 > 2)
					{
						func_493(0);
						func_444(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!func_6(unk_0x9E2D6C50374FCFA9()))
						{
							func_443();
						}
						else
						{
							unk_0xCED9E32812D6C7C7(&iLocal_92, 5);
						}
						if (Local_127.f_710)
						{
							func_442();
						}
						if (Local_127.f_707)
						{
							Global_2810287.f_5112 = 1;
						}
						else
						{
							Global_2810287.f_5112 = 0;
						}
						func_441();
						if (!func_6(unk_0x9E2D6C50374FCFA9()))
						{
							if (func_34())
							{
								func_426(678f, 794f, 206f, 8f, 0);
								func_426(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_426(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_492(3);
					}
					break;
				
				case 3:
					if (Local_127.f_8 > 3)
					{
						func_492(4);
					}
					else
					{
						if (!iLocal_112)
						{
							if (func_425())
							{
								iLocal_112 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_127.f_709)
						{
							if (uLocal_94[iVar1] || iLocal_112)
							{
								func_324(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_94[iLocal_88] = func_323(iLocal_88);
							uLocal_93[iLocal_88] = func_321(iLocal_88);
							if (!uLocal_93[iLocal_88])
							{
								func_324(iLocal_88);
							}
							iLocal_88++;
							if (iLocal_88 >= Local_127.f_709)
							{
								iLocal_88 = 0;
							}
							iVar0++;
						}
						func_486(0);
						func_488(4);
						func_488(5);
						if (func_319(0) && !func_318(0))
						{
							func_317();
						}
						if ((!func_316(unk_0x9E2D6C50374FCFA9()) && !unk_0xF1EC2C71FD1371B8()) && !unk_0x2D3AAABB780ED9B6())
						{
							func_315();
						}
						func_314();
					}
					func_311();
					func_310();
					func_443();
					func_290();
					func_463();
					break;
				
				case 4:
					func_197();
					func_181();
					func_180();
					func_486(1);
					func_179();
					func_290();
					if (func_168(&uLocal_114, !unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2)) || unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2))
					{
						if (func_34())
						{
							func_492(5);
						}
						else
						{
							func_492(6);
						}
					}
					break;
				
				case 5:
					if (Local_127.f_8 > 5)
					{
						func_492(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_163();
		}
	}
	else
	{
		func_523();
		func_163();
	}
	func_150();
	func_145();
	func_144();
}

void func_144()
{
	struct<2> Var0;
	int iVar1;
	
	if (func_34())
	{
		Var0 = { Local_127.f_729[iLocal_103 /*2*/] };
		if (unk_0xCCDCD6672DAE6835(Var0.f_1))
		{
			iVar1 = unk_0xA5677134B9672173(Var0.f_1);
			if (unk_0x3A8B0F5B0E3DE13A(iVar1))
			{
				if (!unk_0x55A0C756C4A8220C(iVar1, 0))
				{
					unk_0x3D81769BEC61BFF8(&iVar1);
				}
			}
		}
		iLocal_103++;
		if (iLocal_103 >= 10)
		{
			iLocal_103 = 0;
			iLocal_125 = iLocal_124;
			iLocal_124 = 0;
		}
	}
}

void func_145()
{
	if (Local_127.f_8 == 5)
	{
		if (func_38(&(Local_127.f_669)))
		{
			if (unk_0xCCDCD6672DAE6835(Local_127.f_729[iLocal_103 /*2*/].f_1))
			{
				if (!unk_0x55B23FE400FCEA6B(unk_0xA5677134B9672173(Local_127.f_729[iLocal_103 /*2*/].f_1), 0))
				{
					if (!unk_0xE2D0C323A1AE5D85(iLocal_122, iLocal_103))
					{
						unk_0xCED9E32812D6C7C7(&iLocal_122, iLocal_103);
						uLocal_123[iLocal_103] = unk_0xA9ADCC8D104AA552();
						unk_0x979FC7400A5D0CD2(uLocal_123[iLocal_103], "Explosion_Countdown", unk_0xA5677134B9672173(Local_127.f_729[iLocal_103 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0x57973ADDF2BFAA90(uLocal_123[iLocal_103], "Time", 30f);
					}
					if ((30000 - func_485(&(Local_127.f_669), 0, 0)) >= 0)
					{
						if (unk_0xF6F5D18EF8EAB859(unk_0xE2D3D51028F0428A(), unk_0xA5677134B9672173(Local_127.f_729[iLocal_103 /*2*/].f_1), 0))
						{
							func_488(3);
							iLocal_124 = 1;
						}
					}
					else if (unk_0x07B2F8356DC13CF4(Local_127.f_729[iLocal_103 /*2*/].f_1))
					{
						unk_0xE68645525D451A8B(unk_0xA5677134B9672173(Local_127.f_729[iLocal_103 /*2*/].f_1));
						unk_0x04375AABE1BE38AE(unk_0xA5677134B9672173(Local_127.f_729[iLocal_103 /*2*/].f_1), 1, 0, -1);
					}
				}
				else if (unk_0xE2D0C323A1AE5D85(iLocal_122, iLocal_103) && !unk_0x78D9ADD511FEAD8B(uLocal_123[iLocal_103]))
				{
					unk_0xF889BDFCC181BA9F(uLocal_123[iLocal_103]);
				}
			}
			if (iLocal_125)
			{
				if (!func_97(unk_0x9E2D6C50374FCFA9()))
				{
					func_147(func_483((30000 - func_485(&(Local_127.f_669), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					func_146();
				}
			}
		}
	}
}

void func_146()
{
	Global_1645739.f_1130 = 1;
}

void func_147(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_149(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_148(7, iVar0);
		Global_1645739.f_4617[iVar0] = uParam0;
		StringCopy(&(Global_1645739.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1645739.f_4617.f_172[iVar0] = iParam2;
		Global_1645739.f_4617.f_216[iVar0] = iParam3;
		Global_1645739.f_4617.f_183[iVar0] = iParam4;
		Global_1645739.f_4617.f_194[iVar0] = iParam5;
		Global_1645739.f_4617.f_249[iVar0] = iParam6;
		Global_1645739.f_4617.f_260[iVar0] = iParam7;
		Global_1645739.f_4617.f_205[iVar0] = iParam8;
		Global_1645739.f_4617.f_314[iVar0] = iParam9;
		Global_1645739.f_4617.f_325[iVar0] = iParam10;
		Global_1645739.f_4617.f_357[iVar0] = iParam11;
		Global_1645739.f_4617.f_238[iVar0] = iParam12;
		Global_1645739.f_4617.f_271[iVar0] = iParam13;
		Global_1645739.f_4617.f_368[iVar0] = iParam14;
		Global_1645739.f_4617.f_379[iVar0] = iParam15;
		Global_1645739.f_4617.f_390[iVar0] = iParam16;
		Global_1645739.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_148(int iParam0, int iParam1)
{
	unk_0xCED9E32812D6C7C7(&(Global_1645739.f_6736[iParam0]), iParam1);
}

bool func_149(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1645739.f_6736[iParam0], iParam1);
}

void func_150()
{
	char* sVar0;
	
	if (((func_13(unk_0x9E2D6C50374FCFA9(), 1, 1) && !func_6(unk_0x9E2D6C50374FCFA9())) && !func_524(unk_0x9E2D6C50374FCFA9())) && func_494(0, 1, 1))
	{
		if (Local_1494[unk_0xF1354995C6159A78() /*5*/].f_3 == 1)
		{
			if (Local_127.f_707)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_34() && !unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
			{
				func_151("CPC_PREPAIR", sVar0, func_162(), 0);
			}
			else
			{
				func_151("CPC_PREP", sVar0, func_162(), 0);
			}
		}
		else
		{
			func_441();
		}
	}
	else
	{
		func_441();
	}
}

int func_151(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam1) > 23)
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		return 0;
	}
	if (unk_0x4B83FFC4B00987D9(sParam2) > 23)
	{
		return 0;
	}
	if (func_161(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_155();
	Global_1574747 = 4;
	StringCopy(&(Global_1574747.f_1), unk_0x05CBA41180F5D521(), 32);
	Global_1574747.f_9 = unk_0x2E87280918B16506(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	StringCopy(&(Global_1574747.f_16), sParam1, 64);
	StringCopy(&(Global_1574747.f_32), sParam2, 64);
	func_154();
	func_153(bParam3);
	func_152();
	return 1;
}

void func_152()
{
	unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 1);
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1574747.f_59), 0);
		return;
	}
	unk_0xB0550BC91B0159D6(&(Global_1574747.f_59), 0);
}

void func_154()
{
	Global_1574747.f_10 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), 86400000);
	Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
}

void func_155()
{
	func_157();
	func_156(0);
}

void func_156(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x9315DBF7D972F07A();
	Global_1574747 = 20;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
	if (bVar0)
	{
		Global_1574747.f_10 = unk_0x0A89FDFA763DCAED();
		Global_1574747.f_11 = unk_0x0A89FDFA763DCAED();
	}
	StringCopy(&(Global_1574747.f_12), "", 16);
	StringCopy(&(Global_1574747.f_16), "", 64);
	StringCopy(&(Global_1574747.f_32), "", 64);
	Global_1574747.f_52 = 0;
	Global_1574747.f_53 = 0;
	Global_1574747.f_54 = 0;
	Global_1574747.f_55 = -1;
	Global_1574747.f_56 = 0;
	Global_1574747.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_157()
{
	if (!func_160())
	{
	}
	if (func_159())
	{
		unk_0x1419D7B938CBFF2E(&(Global_1574747.f_12));
		func_158();
		unk_0xF4666BA5B36DBCB2();
	}
}

void func_158()
{
	switch (Global_1574747)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			return;
		
		case 2:
			unk_0x2AE954BA77A66307(Global_1574747.f_52);
			unk_0x2AE954BA77A66307(Global_1574747.f_53);
			return;
		
		case 3:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 4:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 5:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 6:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 7:
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 8:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 9:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 10:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		case 12:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 13:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 11:
			unk_0x702B349761F63A9E(&(Global_1574747.f_16));
			return;
		
		case 14:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 15:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_57);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_32));
			return;
		
		case 17:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			return;
		
		case 16:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			return;
		
		case 19:
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_16));
			return;
		
		case 18:
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_16));
			unk_0x138506D6C7564EF1(Global_1574747.f_56);
			unk_0x26C23BE14F66F202(&(Global_1574747.f_48));
			unk_0x76DB21247AE4E4E2(&(Global_1574747.f_32));
			return;
		
		default:
	}
}

int func_159()
{
	if (Global_1574747 == 20)
	{
		return 0;
	}
	return 1;
}

int func_160()
{
	if (!func_159())
	{
		return 0;
	}
	unk_0x09684FD679B0E474(&(Global_1574747.f_12));
	func_158();
	return unk_0xD7AA4C82B5D00977();
}

bool func_161(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_159())
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam0))
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam1))
	{
		return 0;
	}
	if (unk_0xACC32B78196FBC2A(sParam2))
	{
		return 0;
	}
	if (!unk_0x2E87280918B16506(sParam0) == unk_0x2E87280918B16506(&(Global_1574747.f_12)))
	{
		return 0;
	}
	if (!unk_0x2E87280918B16506(sParam1) == unk_0x2E87280918B16506(&(Global_1574747.f_16)))
	{
		return 0;
	}
	return unk_0x2E87280918B16506(sParam2) == unk_0x2E87280918B16506(&(Global_1574747.f_32));
}

char* func_162()
{
	switch (Local_127.f_712)
	{
		case 0:
			return "CPC_WARN0";
			break;
		
		case 1:
			return "CPC_WARN1";
			break;
		
		case 2:
			return "CPC_WARN2";
			break;
		
		case 3:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_163()
{
	if (!unk_0xE2D0C323A1AE5D85(iLocal_92, 3))
	{
		iLocal_112 = 1;
		func_180();
		unk_0x687E1AFE919B49BD();
		func_486(1);
		func_167();
		func_165();
		unk_0xCED9E32812D6C7C7(&iLocal_92, 3);
		func_164();
	}
}

void func_164()
{
	Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_7 = 0;
}

void func_165()
{
	if (Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
	{
		func_166();
	}
}

void func_166()
{
	struct<28> Var0;
	
	if (unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		if (!Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2676143 = { Var0 };
	Global_2676143.f_6 = -1;
}

void func_167()
{
	struct<6> Var0;
	
	if (Global_2667222.f_489.f_1 == unk_0x69CE66B03B2184EB())
	{
		Global_2667222.f_489 = { Var0 };
	}
}

int func_168(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_178()) && !(func_111(unk_0x9E2D6C50374FCFA9(), 0) && (func_107(unk_0x9E2D6C50374FCFA9()) || func_177(unk_0x9E2D6C50374FCFA9())))) && !func_175(unk_0x9E2D6C50374FCFA9()))
	{
		func_174();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_38(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 25);
				if (bParam1)
				{
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_173(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_38(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_170();
				func_173(uParam0, 2);
			}
			break;
		
		case 2:
			func_170();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_169("AMEV_LBD_HELP"))
				{
					unk_0x3410421C60BF7143(1);
				}
				func_173(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
				func_173(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 1);
			return 1;
	}
	return 0;
}

bool func_169(char* sParam0)
{
	unk_0xB65782D82090BB33(sParam0);
	return unk_0x73CB3406A86A3A02(0);
}

void func_170()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0))
	{
		if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2)) && func_13(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !Global_75021) && !Global_59871) && !unk_0xA829C9A2767AC8EF())
		{
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4656), 1);
			func_172("AMEV_LBD_HELP", -1);
			func_171(1);
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4656), 0);
		}
	}
}

void func_171(int iParam0)
{
	unk_0xAD8BF87DDDACF427(3, 21, 200, 0, 0);
	if (iParam0 && !func_178())
	{
		unk_0x91DFC8F68F6D9B05(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_172(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam1);
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_174()
{
	Global_2726776 = 1;
}

int func_175(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)
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

bool func_177(int iParam0)
{
	return func_106(iParam0, 19);
}

bool func_178()
{
	return Global_2703656.f_2414[0 /*80*/].f_1 != 0;
}

void func_179()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 1))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 1);
	}
	if (Global_2810287.f_5030 > 0)
	{
		unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_KILL");
		unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_FIRA");
		unk_0x0AF8D3A06BB92903("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0xB68BD12B3A8C52FD(1);
		Global_2810287.f_5030 = 0;
		unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
		unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
		unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
		if (!unk_0x3C57C2F07FEE34D2(unk_0x05CBA41180F5D521(), "am_pi_menu"))
		{
			if (Global_2810287.f_5040 > -1)
			{
				unk_0xCDBCC1BC1184B002(Global_2810287.f_5040);
				Global_2810287.f_5040 = -1;
			}
		}
	}
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_127.f_709)
	{
		if (unk_0x12DD4A0B247D9B4D(Local_110[iVar0 /*3*/]))
		{
			unk_0xFFD8EB5462B07B59(&(Local_110[iVar0 /*3*/]));
			unk_0xB9ACD8A27BCDC3E2(Local_110[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_100[iVar0] = 0;
		iVar0++;
	}
}

void func_181()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2, 0) && (func_196() || unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2)))
	{
		if (func_59(func_195()))
		{
			func_194();
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2))
		{
			if (func_319(0))
			{
				if (func_318(0))
				{
					if (!unk_0xE2D0C323A1AE5D85(Local_127.f_2, 0))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_193(64, Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					iVar1 = unk_0x54F800F95142C750(Local_127.f_674[0]);
					if (unk_0x81F82FFBED0CACCA(iVar1))
					{
						iVar2 = unk_0x6B01934FA503547F(iVar1);
						if (func_318(1))
						{
							if (!unk_0xE2D0C323A1AE5D85(Local_127.f_2, 0))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_193(67, Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_318(2))
						{
							if (!unk_0xE2D0C323A1AE5D85(Local_127.f_2, 0))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_193(67, Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							if (unk_0xE2D0C323A1AE5D85(Local_127.f_2, 0) && Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 >= Global_262145.f_11538)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = unk_0x61042CA2A97BBB69(iVar2);
							if (func_81(iVar2, 1))
							{
								sVar3 = func_184(iVar2);
							}
							func_183(66, Local_1494[Local_127.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_44(66, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2, 1, 0);
			}
		}
		else
		{
			func_43("", "", 1);
		}
		unk_0xCED9E32812D6C7C7(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2), 0);
		func_182(132);
	}
}

void func_182(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_183(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_104(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

char* func_184(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		sVar0 = func_192(&(Global_1893548[iParam0 /*600*/].f_11.f_105));
		return sVar0;
	}
	if (Global_1893548[iParam0 /*600*/].f_11.f_121 != Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_121)
	{
		sVar0 = func_187(iParam0, 0);
		return sVar0;
	}
	if (((func_106(iParam0, 28) || func_106(unk_0x9E2D6C50374FCFA9(), 28)) || func_186(iParam0)) && !func_185(iParam0))
	{
		return func_187(iParam0, 0);
	}
	iVar1 = func_80(iParam0);
	if (iVar1 != func_101())
	{
		if (iVar1 != unk_0x9E2D6C50374FCFA9())
		{
			if (!unk_0x3EBD3AF4E5D7A08C() && !unk_0x3EE42535A14BA719(0, -1, 1))
			{
				return func_187(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_101())
	{
		sVar0 = func_192(&(Global_1893548[iVar1 /*600*/].f_11.f_105));
		if (unk_0xACC32B78196FBC2A(sVar0))
		{
			return func_187(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_185(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_141(iParam0) };
	if (unk_0x3EBD3AF4E5D7A08C())
	{
		if (unk_0x818F829545200020(0))
		{
			if (unk_0x3984FBEFE07835D4(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_101())
	{
		Var0 = { func_141(iParam0) };
		if (unk_0xA7384DAD7CF469DA() || unk_0x8FE9914D4872D601())
		{
			if (unk_0x818F829545200020(0))
			{
				return 0;
			}
		}
		else if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (unk_0x818F829545200020(0))
			{
				if (unk_0x3984FBEFE07835D4(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_187(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_189(iParam0, 1))
		{
			return func_188();
		}
	}
	return unk_0xAEF70623D03F7B02("GB_REST_ACC");
}

char* func_188()
{
	return unk_0xAEF70623D03F7B02("GB_REST_ACCM");
}

bool func_189(int iParam0, bool bParam1)
{
	return func_190(iParam0, bParam1, 1);
}

int func_190(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_101())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_191(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_101() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, int iParam1)
{
	if (iParam0 != func_101())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_101())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_192(var uParam0)
{
	return uParam0;
}

int func_193(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_104(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

void func_194()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			func_102(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_195()
{
	return Global_2703656.f_2414[0 /*80*/].f_1;
}

bool func_196()
{
	return unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 25);
}

void func_197()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2, 1))
	{
		if (func_6(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xCED9E32812D6C7C7(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2), 1);
			return;
		}
		if (func_524(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xCED9E32812D6C7C7(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2), 1);
			return;
		}
		if (Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 >= Global_262145.f_11538)
		{
			iVar3 = floor(((to_float((Local_127.f_1 - iLocal_90)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_11699)
			{
				iVar3 = Global_262145.f_11699;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_289() * iVar3);
			iVar1 = (func_288() * iVar3);
		}
		else
		{
			func_286(0);
		}
		if (!unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2))
		{
			if (Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 >= Global_262145.f_11538)
			{
				if (unk_0xE2D0C323A1AE5D85(Local_127.f_2, 0))
				{
					iVar0 = (iVar0 + round((IntToFloat(func_285()) * Global_262145.f_11710)));
				}
			}
			if (func_318(0))
			{
				Local_1493.f_5 = 1;
				iVar1 = (iVar1 + round((IntToFloat(func_284()) * Global_262145.f_11711)));
			}
			if ((Local_127.f_674[0] != unk_0xF1354995C6159A78() && Local_127.f_674[1] != unk_0xF1354995C6159A78()) && Local_127.f_674[2] != unk_0xF1354995C6159A78())
			{
				if (Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 >= Global_262145.f_11538)
				{
					func_286(1);
				}
			}
		}
		func_265(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_264())
			{
				func_252(-59668082, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				unk_0xC1F6879B97D260F3(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1493.f_6 = iVar0;
		if (!Global_262145.f_11763)
		{
			if (Local_1493.f_6 > 0)
			{
				func_251(8, Local_1493.f_6);
			}
		}
		Global_2727434 = iVar0;
		func_250();
		func_198(0, unk_0xE2D3D51028F0428A(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		Local_1493.f_7 = (Local_1493.f_7 + iVar1);
		unk_0xCED9E32812D6C7C7(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2), 1);
	}
}

int func_198(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_199(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_199(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_209(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (unk_0x44859561F653DD4E() && unk_0xE2D0C323A1AE5D85(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xE5965CDF24F93A9F(iParam1))
		{
			if (unk_0x9044EDB8A7BF67B4(iParam1))
			{
				uVar1 = unk_0x28AA31872A651BC7(iParam1);
				func_205(unk_0x6EA486FF6D815B4B(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_200(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_200(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { func_203(iParam0, 1) };
	if (iParam0 == func_202(unk_0xE2D3D51028F0428A()))
	{
		func_201(1);
	}
	func_205(Var0, iParam1, 0, sParam2, uParam3);
}

void func_201(int iParam0)
{
	Global_2703656.f_1582 = iParam0;
}

int func_202(int iParam0)
{
	return iParam0;
}

Vector3 func_203(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0x66DEF7450747437A())
	{
		Var1 = { unk_0x9C0ED16B4F524508(2) };
	}
	if (iParam0 == func_204(unk_0xE2D3D51028F0428A()) && unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
	{
		Var0 = { unk_0xCACAD935C0BEE14F(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		fVar2 = unk_0x82FE2343F8BDFF0B(iParam0);
		if (unk_0x4DE6A646AFB7CF5C(unk_0x47E529DA87615548()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0xB38EF75835FAF667(unk_0x15CAA6D7B11F1A7C(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x6DB7FBD602C51670(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_204(int iParam0)
{
	return iParam0;
}

void func_205(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703656.f_981[iVar0 /*30*/].f_6 == 0 || Global_2703656.f_981[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703656.f_981[iVar1 /*30*/] = { Param0 };
			Global_2703656.f_981[iVar1 /*30*/].f_6 = 1;
			Global_2703656.f_981[iVar1 /*30*/].f_4 = func_208(Global_2703656.f_981[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703656.f_981[iVar1 /*30*/].f_7 = unk_0x0A89FDFA763DCAED();
			Global_2703656.f_981[iVar1 /*30*/].f_3 = iParam1;
			Global_2703656.f_981[iVar1 /*30*/].f_8 = iParam2;
			Global_2703656.f_981[iVar1 /*30*/].f_9 = func_207();
			Global_2703656.f_981[iVar1 /*30*/].f_10 = func_206();
			StringCopy(&(Global_2703656.f_981[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703656.f_981[iVar1 /*30*/].f_26 = unk_0x35DE445E5254AFED(unk_0x0A89FDFA763DCAED(), uParam4);
		}
	}
}

int func_206()
{
	if (Global_2703656.f_1582)
	{
		Global_2703656.f_1582 = 0;
		return 1;
	}
	Global_2703656.f_1582 = 0;
	return 0;
}

var func_207()
{
	var uVar0;
	
	uVar0 = Global_2703656.f_1584;
	Global_2703656.f_1584 = 1;
	return uVar0;
}

float func_208(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x987A5F1E1A67E3C0(unk_0xCB284F809B594322(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_209(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_210(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_210(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_249(unk_0x9E2D6C50374FCFA9()) || func_248(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_9893 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9893;
		}
	}
	else if (func_246() || func_243(unk_0x9E2D6C50374FCFA9()))
	{
		if (Global_262145.f_23050 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23050;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_242(uParam2))
	{
	}
	if (func_241())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_239(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_238(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_236(0, &iVar1);
					break;
				
				case 3:
					func_236(1, &iVar1);
					break;
				
				case 1:
					func_234(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957924)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_231(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_220((func_230(unk_0x9E2D6C50374FCFA9()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x5842EA5D6A4620E2(iVar1, iParam8, iParam9);
				if (Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_2 != -1)
				{
					func_231(1166, iVar1, -1);
				}
				func_215(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_211((func_213(unk_0x9E2D6C50374FCFA9()) + iVar1));
			}
			else
			{
				func_211((func_213(unk_0x9E2D6C50374FCFA9()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_211(int iParam0)
{
	if (func_241())
	{
		Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_5 = iParam0;
		func_212(joaat("mpply_globalxp"), iParam0);
	}
}

void func_212(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
}

int func_213(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_13(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return func_214(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_214(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_215(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_141(unk_0x9E2D6C50374FCFA9()) };
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(&Var0))
		{
			iVar1 = func_218(func_219(&Var0));
			if (iVar1 == 0)
			{
				func_217(&Global_1655483, iParam0);
				func_216(joaat("mpply_crew_local_xp_0"), Global_1655483);
			}
			else if (iVar1 == 1)
			{
				func_217(&Global_1655484, iParam0);
				func_216(joaat("mpply_crew_local_xp_1"), Global_1655484);
			}
			else if (iVar1 == 2)
			{
				func_217(&Global_1655485, iParam0);
				func_216(joaat("mpply_crew_local_xp_2"), Global_1655485);
			}
			else if (iVar1 == 3)
			{
				func_217(&Global_1655486, iParam0);
				func_216(joaat("mpply_crew_local_xp_3"), Global_1655486);
			}
			else if (iVar1 == 4)
			{
				func_217(&Global_1655487, iParam0);
				func_216(joaat("mpply_crew_local_xp_4"), Global_1655487);
			}
		}
	}
}

void func_216(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655478 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655480 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655480 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655481 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655482 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655483 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655484 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655485 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655486 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655487 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655488 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655489 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655490 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655491 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655492 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655493 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655494 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_218(int iParam0)
{
	if (iParam0 == Global_1655478)
	{
		return 0;
	}
	else if (iParam0 == Global_1655479)
	{
		return 1;
	}
	else if (iParam0 == Global_1655480)
	{
		return 2;
	}
	else if (iParam0 == Global_1655481)
	{
		return 3;
	}
	else if (iParam0 == Global_1655482)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_219(var uParam0)
{
	if (unk_0xF453DE81BDFDAE6F())
	{
		if (unk_0x8C992447292D600F(uParam0))
		{
			return Global_2725166;
		}
	}
	return Global_2725166;
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	if (func_241())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9861 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655628[func_229(-1)])
				{
					unk_0x5842EA5D6A4620E2(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655628[func_229(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x5842EA5D6A4620E2(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_228(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_1 = iParam0;
			Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_205.f_6 = func_226(iParam0, 1);
		}
		func_225(640, iParam0, -1, 1);
		func_224(641, func_226(iParam0, 1), -1, 1, 0);
		Global_1655628[func_229(-1)] = iParam0;
		func_221(-1109644434, 7, 0);
	}
}

void func_221(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_223(iParam1, iParam2))
	{
		iVar0 = func_222();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_222()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725118[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_223(int iParam0, var uParam1)
{
	if (Global_1575034)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575046) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_224(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_229(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_229(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x076A5661EF5ABEE4(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_229(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_229(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_229(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_229(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_229(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_229(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_229(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_229(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_229(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_229(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_229(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_229(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_229(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_229(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_229(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_229(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_229(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_229(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_229(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_229(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_229(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_229(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_229(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_229(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_229(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_229(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_229(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_229(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_229(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_229(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_229(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_229(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_229(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_229(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_229(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_229(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_229(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_229(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_229(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_229(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_229(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_229(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_229(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_229(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_229(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_229(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_229(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_229(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_229(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_229(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_229(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_229(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_229(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_226(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_227(iParam0, 0);
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_294328[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294328[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_228(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xE2D0C323A1AE5D85(Global_2703656.f_1, iParam0);
	}
	return 1;
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_230(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x9E2D6C50374FCFA9())
			{
				return Global_1655628[func_229(-1)];
			}
			else if (func_228(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_229(-1)];
	}
	return 0;
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_233(iParam0, func_229(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_232(iParam0))
	{
		func_224(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_225(iParam0, iVar0, iParam2, 1);
	}
}

int func_232(int iParam0)
{
	if (Global_1655477)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10890:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

int func_233(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2821895[iParam0 /*3*/][func_229(iParam1)];
		if (unk_0x61481F9FBB1C7EDD(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x0E40F846A70BA3EC(unk_0x9E2D6C50374FCFA9());
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		iVar4 = unk_0x54F800F95142C750(iVar0);
		if (unk_0x81F82FFBED0CACCA(iVar4))
		{
			iVar5 = unk_0x6B01934FA503547F(iVar4);
			if (unk_0x0E40F846A70BA3EC(iVar5) != -1)
			{
				if (unk_0x0E40F846A70BA3EC(iVar5) == iVar1 || func_68(unk_0x0E40F846A70BA3EC(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x9E2D6C50374FCFA9())
					{
						if (func_142(unk_0x9E2D6C50374FCFA9(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_235(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_235(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_235(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_236(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x5D79167FED95F0B0())
		{
			iVar3 = iVar0;
			if (unk_0x81F82FFBED0CACCA(iVar3))
			{
				iVar4 = unk_0x6B01934FA503547F(iVar3);
				if (func_13(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x9E2D6C50374FCFA9())
					{
						iVar1++;
						if (func_142(unk_0x9E2D6C50374FCFA9(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_13(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x9E2D6C50374FCFA9())
				{
					if (func_237(unk_0x9E2D6C50374FCFA9(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_142(unk_0x9E2D6C50374FCFA9(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_235(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_235(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_237(int iParam0, int iParam1)
{
	return vdist(func_31(iParam0), func_31(iParam1));
	return 0f;
}

int func_238(int iParam0)
{
	int iVar0;
	
	if (unk_0x6F8BA9EF200E4310() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_235(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_239(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x07141611FD632B59(iParam0) > func_230(unk_0x9E2D6C50374FCFA9()))
		{
			iParam0 = -func_230(unk_0x9E2D6C50374FCFA9());
		}
	}
	if (func_240(8000, 0, 0) > 0)
	{
		if (func_240(8000, 0, 0) < (iParam0 + func_230(unk_0x9E2D6C50374FCFA9())))
		{
			iParam0 = (func_240(8000, 0, 0) - func_230(unk_0x9E2D6C50374FCFA9()));
		}
	}
	return iParam0;
}

int func_240(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294328[iParam0];
}

int func_241()
{
	return 1;
}

int func_242(char* sParam0)
{
	if (unk_0xE8F6C1F695B25B91(uParam0))
	{
		return 1;
	}
	else if (unk_0x3C57C2F07FEE34D2(uParam0, "") || unk_0x3C57C2F07FEE34D2(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0)
{
	return func_244(func_245(iParam0));
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_245(int iParam0)
{
	if (func_111(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

bool func_246()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_56();
	}
	return func_247(Global_4718592.f_86750);
}

int func_247(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_248(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_249(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

void func_250()
{
	Global_2726775 = 1;
}

void func_251(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23765 == 0 || Global_262145.f_23765 == 1)
		{
			if (!unk_0x8FE9914D4872D601() || Global_262145.f_23765 == 1)
			{
				Global_2810287.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810287.f_284 = iParam1;
				Global_2810287.f_285 = 0;
			}
		}
	}
}

void func_252(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_264())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_253(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_253(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_253(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_253(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_253(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_264())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xD487B8E9C523DEFD(func_41()) || unk_0xBA5B5030B7954DAA())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x651232F0FBBD6C7F(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE894C3F21E583743(iVar4))
		{
			*uParam0 = func_260(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_259(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_254(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_254(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_255(iParam0);
	}
}

void func_255(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_264())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_258(iParam0))
		{
			if (!bVar0)
			{
				unk_0x349E25EA131C0E2A();
			}
		}
		else if (!bVar0)
		{
			unk_0x5ACE3DE15EF4A616(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_256(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_256(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_257(&(uParam0->f_14));
	func_257(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_257(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_258(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_259(int iParam0, var uParam1)
{
	Global_2727573 = uParam1;
	Global_2727572 = iParam0;
}

int func_260(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_264())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = unk_0x8142A6539DDC180F();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_261(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_261(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -1141953949;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_263(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_262();
		unk_0x2700C00F82C16BF0(1, &Var0, 36, iVar1);
	}
}

void func_262()
{
	unk_0xAF76A37C80EFD1D8("AM_ARENA_SHP");
}

int func_263(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xCED9E32812D6C7C7(&uVar0, iParam0);
	}
	return uVar0;
}

int func_264()
{
	if (unk_0x8FE9914D4872D601())
	{
		return unk_0xA50CED7FB6E38751();
	}
	return 0;
}

void func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_283())
		{
			if (func_282(0))
			{
				if (!func_281(0))
				{
					if (unk_0x0D01086B38EC256F(func_280()))
					{
						if (func_279() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_279());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_277(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_270("GB_BCUT_TICK1", func_280(), iVar0, 0, 0, 1);
						}
						func_269(20);
						func_266(func_280(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_266(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Var0 = 657959395;
		Var0.f_1 = unk_0x9E2D6C50374FCFA9();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_268(iParam0);
		func_267(&(Var0.f_6), &(Var0.f_7));
		unk_0x2700C00F82C16BF0(1, &Var0, 8, func_263(iParam0));
	}
}

void func_267(var uParam0, var uParam1)
{
	*uParam0 = Global_1921036.f_9;
	*uParam1 = Global_1921036.f_10;
}

var func_268(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_511;
}

void func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5193.f_7[iVar0]), iVar1);
}

int func_270(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xA9E699D3DC7C0B15(unk_0x9E2D6C50374FCFA9(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x61042CA2A97BBB69(iParam1), 64);
		}
		if (unk_0xACC32B78196FBC2A(&Var1))
		{
		}
		unk_0x150D8F58B26E9F70(sParam0);
		unk_0x138506D6C7564EF1(func_61(iParam1, -2, 1, 0, 0));
		unk_0x76DB21247AE4E4E2(func_275(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x138506D6C7564EF1(iParam3);
		}
		unk_0x2AE954BA77A66307(iParam2);
		iVar0 = unk_0x187DF98ED95E5557(0, 1);
		func_271(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_271(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_274() || !unk_0x44859561F653DD4E()) || !func_99(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return;
	}
	iVar0 = func_272(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941032.f_5[iVar0 /*53*/] = iParam0;
		Global_1941032.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941032.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941032.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941032.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941032.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941032.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941032.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941032 - 1))
	{
		if (iParam0 > Global_1941032.f_5[iVar0 /*53*/].f_1)
		{
			func_273(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941032++;
	if (Global_1941032 > 5)
	{
		Global_1941032 = 5;
		return Global_1941032;
	}
	return (Global_1941032 - 1);
}

void func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941032.f_5[iVar0 /*53*/] = { Global_1941032.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_274()
{
	return unk_0x014D8C5910A5B01B(-1762644250);
}

var func_275(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_276(&cVar0);
}

var func_276(char[4] cParam0)
{
	return cParam0;
}

void func_277(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_278(1);
	}
	else
	{
		iVar1 = func_278(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_278(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12654;
}

int func_279()
{
	return Global_262145.f_12653;
}

int func_280()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11;
}

bool func_281(bool bParam0)
{
	return func_189(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_282(bool bParam0)
{
	return func_81(unk_0x9E2D6C50374FCFA9(), bParam0);
}

bool func_283()
{
	return func_82(unk_0x9E2D6C50374FCFA9());
}

int func_284()
{
	return Global_262145.f_11521;
}

int func_285()
{
	return Global_262145.f_11520;
}

void func_286(bool bParam0)
{
	if (bParam0)
	{
		if (func_287(1))
		{
			unk_0xCED9E32812D6C7C7(&Global_1836855, 1);
		}
	}
	else if (func_287(2))
	{
		unk_0xCED9E32812D6C7C7(&Global_1836855, 2);
	}
}

int func_287(int iParam0)
{
	var uVar0;
	
	uVar0 = func_233(2536, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xE2D0C323A1AE5D85(uVar0, 0) && unk_0xE2D0C323A1AE5D85(iVar0, 1)) && unk_0xE2D0C323A1AE5D85(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xE2D0C323A1AE5D85(iVar0, 3) && unk_0xE2D0C323A1AE5D85(iVar0, 4)) && unk_0xE2D0C323A1AE5D85(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xE2D0C323A1AE5D85(iVar0, 6) && unk_0xE2D0C323A1AE5D85(iVar0, 7)) && unk_0xE2D0C323A1AE5D85(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xE2D0C323A1AE5D85(iVar0, 9) && unk_0xE2D0C323A1AE5D85(iVar0, 10)) && unk_0xE2D0C323A1AE5D85(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_288()
{
	return Global_262145.f_11540;
}

int func_289()
{
	return Global_262145.f_11539;
}

void func_290()
{
	if (unk_0xE2D0C323A1AE5D85(iLocal_92, 5))
	{
		func_291();
	}
	func_526();
}

void func_291()
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	
	if (Local_127.f_674[0] > -1)
	{
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_101();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_127.f_674[iVar7] > -1)
			{
				iVar12 = unk_0x54F800F95142C750(Local_127.f_674[iVar7]);
				if (unk_0x81F82FFBED0CACCA(iVar12))
				{
					iVar1 = unk_0x6B01934FA503547F(iVar12);
					if (func_13(iVar1, 0, 1))
					{
						if (!func_99(iVar1, 0))
						{
							iVar0[iVar7] = iVar1;
							uVar2[iVar7] = Local_1494[Local_127.f_674[iVar7] /*5*/].f_4;
							if (func_282(1))
							{
								if (func_81(iVar1, 1))
								{
									uVar11[iVar7] = func_61(iVar1, -2, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0xF1354995C6159A78();
		if (func_97(unk_0x9E2D6C50374FCFA9()))
		{
			uVar13 = func_308();
			iVar14 = unk_0xFF65CDB0EB7ACE71(uVar13);
			if (unk_0x0D01086B38EC256F(iVar14))
			{
				iVar15 = unk_0x32F47FD509BB6D38(iVar14);
				if (unk_0x81F82FFBED0CACCA(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = func_483(0, Local_127.f_708);
		iVar4 = Local_127.f_709;
		iVar5 = func_483(0, Local_1494[iVar8 /*5*/].f_4);
		iVar6 = func_483(0, (Global_262145.f_11377 - func_485(&(Local_127.f_661), 0, 0)));
		func_305(iVar6);
		if (iVar6 > 30000)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 6;
		}
		func_292(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_302(), uVar11[0], uVar11[1], uVar11[2]);
	}
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_299(0) == 0)
	{
		return;
	}
	func_298();
	iVar1 = 0;
	if (((Global_2726296[0] != iParam0 || Global_2726296[1] != iParam1) || Global_2726296[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726296[0] = iParam0;
	Global_2726296[1] = iParam1;
	Global_2726296[2] = iParam2;
	Global_2726296[3] = 0;
	Global_2726296[4] = 0;
	if (Global_2726296[0] != func_101())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[0]);
			Global_2726302[0 /*16*/] = { func_297(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_294(iParam3, &(Global_2726302[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726296[1] != func_101())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[1]);
			Global_2726302[1 /*16*/] = { func_297(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_294(iParam4, &(Global_2726302[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726296[2] != func_101())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x61042CA2A97BBB69(Global_2726296[2]);
			Global_2726302[2 /*16*/] = { func_297(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_294(iParam5, &(Global_2726302[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	func_293(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_524(unk_0x9E2D6C50374FCFA9()) == 0)
	{
		func_294(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_242(sParam12))
	{
		sVar2 = sParam12;
	}
	func_147(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_146();
}

void func_293(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_149(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_148(4, iVar0);
		Global_1645739.f_3305[iVar0] = iParam0;
		Global_1645739.f_3305.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1645739.f_3305.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1645739.f_3305.f_183[iVar0] = iParam3;
		Global_1645739.f_3305.f_216[iVar0] = iParam5;
		Global_1645739.f_3305.f_194[iVar0] = iParam4;
		Global_1645739.f_3305.f_227[iVar0] = iParam6;
		Global_1645739.f_3305.f_270[iVar0] = iParam7;
		Global_1645739.f_3305.f_281[iVar0] = iParam8;
		Global_1645739.f_3305.f_292[iVar0] = iParam9;
		Global_1645739.f_3305.f_303[iVar0] = iParam10;
		Global_1645739.f_3305.f_314[iVar0] = iParam11;
		Global_1645739.f_3305.f_325[iVar0] = iParam13;
		Global_1645739.f_3305.f_336[iVar0] = iParam14;
		Global_1645739.f_3305.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x8FE9914D4872D601()) && iParam12)
		{
			Global_1645739.f_1130 = 1;
		}
	}
}

void func_294(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_149(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_148(6, iVar0);
		Global_1645739.f_3999[iVar0] = iParam0;
		StringCopy(&(Global_1645739.f_3999.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1645739.f_3999.f_183[iVar0] = iParam3;
		Global_1645739.f_3999.f_172[iVar0] = iParam2;
		Global_1645739.f_3999.f_260[iVar0] = iParam4;
		Global_1645739.f_3999.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1645739.f_3999.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1645739.f_3999.f_443[iVar0] = iParam7;
		Global_1645739.f_3999.f_454[iVar0] = iParam8;
		Global_1645739.f_3999.f_497[iVar0] = iParam9;
		Global_1645739.f_3999.f_508[iVar0] = iParam10;
		Global_1645739.f_3999.f_205[iVar0] = iParam11;
		Global_1645739.f_3999.f_216[iVar0] = iParam12;
		Global_1645739.f_3999.f_227[iVar0] = iParam13;
		Global_1645739.f_3999.f_238[iVar0] = iParam14;
		Global_1645739.f_3999.f_249[iVar0] = iParam15;
		Global_1645739.f_3999.f_519[iVar0] = iParam16;
		Global_1645739.f_3999.f_530[iVar0] = iParam17;
		Global_1645739.f_3999.f_541[iVar0] = iParam18;
		Global_1645739.f_3999.f_552[iVar0] = iParam19;
		Global_1645739.f_3999.f_563[iVar0] = iParam20;
		Global_1645739.f_3999.f_574[iVar0] = iParam21;
		Global_1645739.f_3999.f_585[iVar0] = iParam22;
		Global_1645739.f_3999.f_596[iVar0] = iParam23;
		Global_1645739.f_3999.f_607[iVar0] = iParam24;
		Global_1645739.f_3999.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_296())
		{
			Global_1645739.f_1130 = 1;
		}
		if (unk_0x8FE9914D4872D601())
		{
			iVar2 = 0;
			unk_0x604161EB05F29E6D(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1645739.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1645739.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1645739.f_1130 = 1;
			}
			if (func_295())
			{
				Global_1645739.f_1134 = 1;
			}
		}
	}
}

int func_295()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x8FE9914D4872D601())
	{
		unk_0x604161EB05F29E6D(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_296()
{
	if (((unk_0xE2F2D76A4AA269FF() == 8 || unk_0xE2F2D76A4AA269FF() == 9) || unk_0xE2F2D76A4AA269FF() == 10) || unk_0xE2F2D76A4AA269FF() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_297(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0xAEF70623D03F7B02("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_298()
{
	unk_0xAC765EF46E85A446(8);
	unk_0xAC765EF46E85A446(9);
	unk_0xAC765EF46E85A446(6);
	unk_0xAC765EF46E85A446(7);
	Global_2726779 = 1;
}

int func_299(bool bParam0)
{
	if (func_301())
	{
		return 0;
	}
	if (func_300())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(unk_0x9E2D6C50374FCFA9(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_300()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_192 != 0;
}

bool func_301()
{
	return unk_0xE2D0C323A1AE5D85(Global_2621446, 12);
}

char* func_302()
{
	return "HUD_COUNTDOWN";
	switch (func_304(unk_0x9E2D6C50374FCFA9()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_303())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_303()
{
	if (func_304(unk_0x9E2D6C50374FCFA9()) == 133)
	{
		return Global_2810287.f_5114;
	}
	return -1;
}

int func_304(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/];
	}
	return -1;
}

void func_305(int iParam0)
{
	if (func_307(unk_0x9E2D6C50374FCFA9()) || func_306(unk_0x9E2D6C50374FCFA9()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < unk_0x51109C28352EC9A3())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
		{
			if (!unk_0xACC32B78196FBC2A(&(Global_2810287.f_5032)))
			{
				unk_0x65C31D05DD70B2CC(&(Global_2810287.f_5032));
			}
			unk_0xB68BD12B3A8C52FD(1);
			unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_FIRA");
			unk_0x0AF8D3A06BB92903("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
			unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
			unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
			if (Global_2810287.f_5040 > -1)
			{
				unk_0xCDBCC1BC1184B002(Global_2810287.f_5040);
				Global_2810287.f_5040 = -1;
			}
			Global_2810287.f_5030 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 4))
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 2))
				{
					if (unk_0x678069837EAE492B())
					{
						if ((!unk_0x3C57C2F07FEE34D2(unk_0x8ECF4849E085E658(unk_0x763A39AC8944F8BA()), "OFF") && unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0)) && !unk_0xACC32B78196FBC2A(&(Global_2810287.f_5032)))
						{
							StringCopy(&(Global_2810287.f_5032), "", 32);
							unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S_FIRA");
							unk_0x0AF8D3A06BB92903("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
							unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
							unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 0);
							unk_0xB68BD12B3A8C52FD(1);
							unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 2);
						}
					}
				}
				else if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 5))
				{
					unk_0x65C31D05DD70B2CC("OFF");
				}
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x1CF3F44FC2EB9F99("FM_COUNTDOWN_30S");
				}
				unk_0x66B27A59829491D3("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 1);
			}
			else if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x3AF345AA5885DF2B() != 0)
					{
						if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) && !unk_0xAB0BB8AA7AB39616())
						{
							StringCopy(&(Global_2810287.f_5032), unk_0x3EFC185839D591DB(), 32);
							unk_0x65C31D05DD70B2CC("OFF");
						}
						unk_0xB68BD12B3A8C52FD(1);
						unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 3))
				{
					Global_2810287.f_5040 = unk_0xA9ADCC8D104AA552();
					unk_0x91DFC8F68F6D9B05(Global_2810287.f_5040, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
			{
				Global_2810287.f_5030 = 0;
				Global_2810287.f_5040 = -1;
				unk_0x63B063064DC08617("FM_COUNTDOWN_30S_KILL");
				unk_0xB68BD12B3A8C52FD(0);
				unk_0x1CF3F44FC2EB9F99("FM_PRE_COUNTDOWN_30S");
				unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
				unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
				unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 1);
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 0);
				if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 2))
				{
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 2);
					unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 5);
				}
				else
				{
					unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 5);
					unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 0))
		{
			Global_2810287.f_5030 = 0;
			Global_2810287.f_5040 = -1;
			unk_0x63B063064DC08617("FM_COUNTDOWN_30S_KILL");
			unk_0xB68BD12B3A8C52FD(0);
			unk_0x1CF3F44FC2EB9F99("FM_PRE_COUNTDOWN_30S");
			unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
			unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
			unk_0x6CE6C3A402C3E20C("AllowScoreAndRadio", 1);
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 0);
			if (!unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 2);
				unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 5);
			}
			else
			{
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 2);
				unk_0xB0550BC91B0159D6(&(Global_2810287.f_5030), 5);
			}
		}
	}
}

int func_306(int iParam0)
{
	if (iParam0 != func_101() && func_13(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

int func_307(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 19;
			}
		}
	}
	return 0;
}

var func_308()
{
	if (unk_0xE5965CDF24F93A9F(func_309()))
	{
		return func_309();
	}
	return func_94();
}

var func_309()
{
	return Global_2621446.f_3;
}

void func_310()
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x5D79167FED95F0B0())
	{
		Local_148.f_534[iVar0 /*42*/] = { Var1 };
		Local_148.f_534[iVar0 /*42*/].f_1 = func_101();
		if (Local_127.f_674[iVar0] > -1)
		{
			iVar3 = unk_0x54F800F95142C750(Local_127.f_674[iVar0]);
			if (unk_0x81F82FFBED0CACCA(iVar3))
			{
				iVar2 = unk_0x6B01934FA503547F(iVar3);
				if (!func_99(iVar2, 0))
				{
					Local_148.f_534[iVar0 /*42*/] = Local_127.f_674[iVar0];
					Local_148.f_534[iVar0 /*42*/].f_1 = iVar2;
					uVar4 = Local_1494[Local_127.f_674[iVar0] /*5*/].f_4;
					Local_148.f_534[iVar0 /*42*/].f_9 = uVar4;
					Local_148.f_534[iVar0 /*42*/].f_31 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_311()
{
	if (Local_126 != -1 && Local_126.f_1 != -1)
	{
		if (unk_0x10490C0971778A41() != func_313() && unk_0x81F82FFBED0CACCA(unk_0x10490C0971778A41()))
		{
			func_312(Local_126.f_1, Local_126, func_263(unk_0x6B01934FA503547F(unk_0x10490C0971778A41())));
			Local_126 = -1;
			Local_126.f_1 = -1;
		}
	}
}

void func_312(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = -368423380;
	Var0.f_1 = unk_0x9E2D6C50374FCFA9();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0x2700C00F82C16BF0(1, &Var0, 4, iParam2);
	}
}

int func_313()
{
	return -1;
}

void func_314()
{
	if (func_318(0))
	{
		if (!unk_0xE2D0C323A1AE5D85(iLocal_92, 4))
		{
			if (func_281(1))
			{
				unk_0x91DFC8F68F6D9B05(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0x91DFC8F68F6D9B05(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xCED9E32812D6C7C7(&iLocal_92, 4);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(iLocal_92, 4))
	{
		if (func_281(1))
		{
			unk_0x91DFC8F68F6D9B05(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0x91DFC8F68F6D9B05(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0xB0550BC91B0159D6(&iLocal_92, 4);
	}
}

void func_315()
{
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_1797), 26);
}

int func_316(int iParam0)
{
	if ((unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 9) && !(unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 7))) || ((unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && !unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 7)) && !unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_317()
{
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_1797), 19);
}

int func_318(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_127.f_674[iParam0] == unk_0xF1354995C6159A78() && Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_127.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_320(Local_1494[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_320(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

bool func_321(int iParam0)
{
	return func_322(unk_0xE2D3D51028F0428A(), Local_127.f_10[iParam0 /*5*/], 1) < 500f;
}

float func_322(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x55B23FE400FCEA6B(iParam0, 0))
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x6B62510F212526DC(iParam0, 0) };
	}
	return unk_0x987A5F1E1A67E3C0(Var0, Param1, iParam2);
}

bool func_323(int iParam0)
{
	return func_322(unk_0xE2D3D51028F0428A(), Local_127.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_324(int iParam0)
{
	func_357(&(Local_110[iParam0 /*3*/]), Local_127.f_10[iParam0 /*5*/], iParam0);
	if (uLocal_93[iParam0])
	{
		func_352(Local_127.f_10[iParam0 /*5*/], iParam0);
		func_325(Local_127.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_325(struct<4> Param0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == unk_0xF1354995C6159A78() && !unk_0xE2D0C323A1AE5D85(uLocal_99[func_17(iParam2)], func_16(iParam2)))
	{
		Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4++;
		if (iLocal_90 == 0)
		{
			iLocal_90 = unk_0x0A89FDFA763DCAED();
		}
		iVar0 = func_350(ceil((IntToFloat(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4) / func_351())));
		iVar1 = func_348(ceil((IntToFloat(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4) / func_349())));
		iVar0 = round((IntToFloat(iVar0) * Global_262145.f_11710));
		iVar1 = round((IntToFloat(iVar1) * Global_262145.f_11711));
		if (func_34())
		{
			iVar0 = round((IntToFloat(iVar0) * func_347()));
			iVar1 = round((IntToFloat(iVar1) * func_346()));
		}
		if (func_264())
		{
			func_252(-59668082, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			unk_0xC1F6879B97D260F3(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_250();
		func_198(0, unk_0xE2D3D51028F0428A(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
		iLocal_101 = (iLocal_101 + iVar0);
		Global_2727434 = iVar0;
		Local_1493.f_7 = (Local_1493.f_7 + iVar1);
		unk_0xCED9E32812D6C7C7(&(uLocal_99[func_17(iParam2)]), func_16(iParam2));
		if (Local_1493.f_11 == 0)
		{
			Local_1493.f_11 = unk_0x48352343BC5A41AE();
		}
		func_326();
		unk_0x91DFC8F68F6D9B05(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_326()
{
	if (!unk_0xE2D0C323A1AE5D85(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2, 2))
	{
		unk_0xCED9E32812D6C7C7(&(Local_1494[unk_0xF1354995C6159A78() /*5*/].f_2), 2);
		func_327(1);
	}
}

void func_327(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
		{
			if (((!func_105(unk_0x9E2D6C50374FCFA9()) && !func_6(unk_0x9E2D6C50374FCFA9())) && !func_524(unk_0x9E2D6C50374FCFA9())) && !func_345(unk_0x9E2D6C50374FCFA9()))
			{
				if (func_344())
				{
					func_337(2, 0, 1);
					func_336();
				}
				if (func_522(0))
				{
					uVar0 = func_233(2482, -1, 0);
					unk_0xB0550BC91B0159D6(&uVar0, 0);
					func_336();
				}
				if (func_522(func_521(func_304(unk_0x9E2D6C50374FCFA9()))))
				{
					uVar0 = func_233(2482, -1, 0);
					unk_0xB0550BC91B0159D6(&uVar0, func_521(func_304(unk_0x9E2D6C50374FCFA9())));
					func_336();
				}
				if (func_335())
				{
					func_336();
				}
				if (func_304(unk_0x9E2D6C50374FCFA9()) > -1)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 7);
					if (func_334(unk_0x9E2D6C50374FCFA9()))
					{
						func_333();
					}
					func_330(func_332(func_304(unk_0x9E2D6C50374FCFA9())));
				}
			}
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 7))
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 7);
		func_328();
	}
}

void func_328()
{
	if (func_329())
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 17);
	}
}

bool func_329()
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 17);
}

void func_330(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_331() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574732.f_1[iVar0] == -1)
			{
				Global_1574732.f_1[iVar0] = iParam0;
				Global_1574732 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_331()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_333()
{
	if (!func_329())
	{
		Global_2810287.f_6705 = unk_0x0A89FDFA763DCAED();
		unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 17);
	}
}

int func_334(int iParam0)
{
	if (func_304(iParam0) == 236 || func_304(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_335()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_336()
{
	if (func_335())
	{
		Global_2703656.f_847.f_16 = 1;
	}
}

void func_337(int iParam0, int iParam1, bool bParam2)
{
	if (func_344())
	{
		if (iParam1 == 1)
		{
			if (Global_2810287.f_4462 == -1)
			{
				Global_2810287.f_4462 = Global_262145.f_26832;
			}
			func_20(&(Global_2810287.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810287.f_4465 == -1)
				{
					Global_2810287.f_4465 = Global_262145.f_26833;
				}
				func_20(&(Global_2810287.f_4463), 0, 0);
			}
			else
			{
				Global_1574580 = 0;
				Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_8 = 0;
				func_343(1);
			}
		}
		else
		{
			Global_1574580 = 0;
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_8 = 0;
			func_343(1);
		}
		if ((!unk_0x44859561F653DD4E() && !func_342()) && !func_338(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1057404 = 0;
		}
		unk_0x5106CAAF87C49A90(0, -1, -1, iParam0);
	}
}

int func_338(int iParam0)
{
	if (func_339(iParam0, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_339(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_340(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_340(int iParam0)
{
	return func_341(iParam0);
}

bool func_341(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_342()
{
	return Global_2714627.f_840;
}

void func_343(bool bParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (!func_344())
		{
			if (func_13(unk_0x9E2D6C50374FCFA9(), 1, 0))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 0);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 0);
			}
			unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 1f);
			unk_0x00F11F13DB7B0557(0);
			unk_0xAE3C2157FD741193(1);
			if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
			{
				Global_1574580.f_2 = 0;
				if (bParam0)
				{
					unk_0x6CA6298E3E0086F4(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0x027BDA95C9BD0667(unk_0xE2D3D51028F0428A(), 0);
				unk_0x202B28FEABEC4034(unk_0xE2D3D51028F0428A(), joaat("weapon_unarmed"), 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 342, 1);
				unk_0xD6A76BAB45A4B460(unk_0xE2D3D51028F0428A(), 122, 1);
				unk_0x0ACD4D4123D79892(unk_0x9E2D6C50374FCFA9(), 0.5f);
				if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
				{
					unk_0x6CA6298E3E0086F4(1, 0);
				}
			}
			unk_0x00F11F13DB7B0557(1);
			unk_0xAE3C2157FD741193(0);
		}
	}
}

bool func_344()
{
	return Global_1574580;
}

int func_345(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x9315DBF7D972F07A())
	{
		return 0;
	}
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return Global_2783989;
	}
	else
	{
		uVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			iVar1 = unk_0x15CAA6D7B11F1A7C(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_346()
{
	return Global_262145.f_11523;
}

float func_347()
{
	return Global_262145.f_11522;
}

var func_348(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11534;
		
		case 2:
			return Global_262145.f_11535;
		
		case 3:
			return Global_262145.f_11536;
		
		case 4:
			return Global_262145.f_11537;
		
		default:
	}
	return Global_262145.f_11537;
}

float func_349()
{
	return Global_262145.f_11282;
}

var func_350(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11524;
		
		case 2:
			return Global_262145.f_11525;
		
		case 3:
			return Global_262145.f_11526;
		
		case 4:
			return Global_262145.f_11527;
		
		case 5:
			return Global_262145.f_11528;
		
		case 6:
			return Global_262145.f_11529;
		
		case 7:
			return Global_262145.f_11530;
		
		case 8:
			return Global_262145.f_11531;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_11532;
		
		default:
	}
	return Global_262145.f_11533;
}

float func_351()
{
	return Global_262145.f_11281;
}

void func_352(struct<3> Param0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xE2D0C323A1AE5D85(Local_127.f_3[func_17(iParam3)], func_16(iParam3)))
	{
		if (!unk_0xE2D0C323A1AE5D85(uLocal_98[func_17(iParam3)], func_16(iParam3)))
		{
			if (func_34())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (unk_0x8F41785F110B0DA0(unk_0xE2D3D51028F0428A(), Param0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0, 1, 0))
			{
				if (func_353())
				{
					uLocal_97 = unk_0x780A854E3A976A66(unk_0x0A89FDFA763DCAED(), Local_127.f_9);
					if (unk_0x10490C0971778A41() != func_313() && unk_0x81F82FFBED0CACCA(unk_0x10490C0971778A41()))
					{
						func_312(uLocal_97, iParam3, func_263(unk_0x6B01934FA503547F(unk_0x10490C0971778A41())));
						Local_126 = -1;
						Local_126.f_1 = -1;
					}
					else
					{
						Local_126 = iParam3;
						Local_126.f_1 = uLocal_97;
					}
					unk_0xCED9E32812D6C7C7(&(uLocal_98[func_17(iParam3)]), func_16(iParam3));
				}
			}
		}
		else if (func_1(&uLocal_104, 250, 0))
		{
			if (unk_0x10490C0971778A41() != func_313() && unk_0x81F82FFBED0CACCA(unk_0x10490C0971778A41()))
			{
				func_312(uLocal_97, iParam3, func_263(unk_0x6B01934FA503547F(unk_0x10490C0971778A41())));
				Local_126.f_1 = -1;
				Local_126 = -1;
			}
			else
			{
				Local_126 = iParam3;
				Local_126.f_1 = uLocal_97;
			}
			func_37(&uLocal_104);
		}
	}
}

int func_353()
{
	if (!func_13(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		return 0;
	}
	if (func_524(unk_0x9E2D6C50374FCFA9()))
	{
		if (((func_344() && !func_356()) || func_355(unk_0x9E2D6C50374FCFA9(), 21)) || func_355(unk_0x9E2D6C50374FCFA9(), 25))
		{
			func_488(0);
		}
		else
		{
			func_488(7);
		}
		return 0;
	}
	if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
	{
		if (func_354(unk_0xE2D3D51028F0428A(), 0) != -1)
		{
			return 0;
		}
	}
	if (func_99(unk_0x9E2D6C50374FCFA9(), 0))
	{
		return 0;
	}
	if (!func_34())
	{
		if (unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()))
		{
			func_488(1);
			return 0;
		}
	}
	return 1;
}

int func_354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xF68107C40359970C(iParam0))
	{
		if (unk_0xD5C6B5E3B93A5EDC(iParam0, iParam1))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(iParam0, iParam1);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				iVar1 = unk_0xD664875C4BDB14B0(unk_0x15CAA6D7B11F1A7C(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x7158135695FAE89D(iVar0, iVar3, 0))
					{
						if (unk_0xAB793EA186AB8DAA(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_355(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

bool func_356()
{
	return Global_1574580.f_1;
}

void func_357(var uParam0, struct<3> Param1, var uParam2, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Var0 = { Param1 };
	unk_0x2F046C9381D8E91B(12, &uVar1, &uVar2, &uVar3, &uVar4);
	if (!unk_0xE2D0C323A1AE5D85(uLocal_98[func_17(iParam4)], func_16(iParam4)) && !unk_0xE2D0C323A1AE5D85(Local_127.f_3[func_17(iParam4)], func_16(iParam4)))
	{
		if (!unk_0x12DD4A0B247D9B4D(*uParam0))
		{
			if (!func_424(Var0, 0f, 0f, 0f, 0) && !func_424(Var0, 0f, 0f, -2000f, 0))
			{
				*uParam0 = unk_0xC5B823372B67998A(Var0);
				unk_0x1A5B5BA56167D412(*uParam0, 431);
				unk_0x7A610B2EC5DA34E7(*uParam0, 9);
				unk_0xAF62582F3EA39095(*uParam0, "CPC_BLIP");
				func_364(*uParam0, 25, 1152319488, 1137180672);
				func_362(uParam0, 12);
				unk_0x3430966AC4550BB9(*uParam0, 1);
			}
		}
		else if (unk_0xF1EC2C71FD1371B8())
		{
			unk_0xFBBD8F124403B0F5(*uParam0, 255);
		}
		else
		{
			func_364(*uParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_94[iParam4])
		{
			if (!unk_0xE2D0C323A1AE5D85(iLocal_100[func_17(iParam4)], func_16(iParam4)))
			{
				iVar5 = 54;
				if (func_34())
				{
					uParam0->f_1 = unk_0x89EE105C4F81A182(iVar5, Var0 + Vector(4f, 0f, 0f), Var0, 10f, uVar1, uVar2, uVar3, uParam0->f_2, 0);
					unk_0x7FF96ACF7A4CD4ED(uParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					uParam0->f_1 = unk_0x89EE105C4F81A182(iVar5, Var0 + Vector(2.8f, 0f, 0f), Var0, 5f, uVar1, uVar2, uVar3, uParam0->f_2, 0);
					unk_0x7FF96ACF7A4CD4ED(uParam0->f_1, 5f, 5f, 100f);
				}
				unk_0xCED9E32812D6C7C7(&(iLocal_100[func_17(iParam4)]), func_16(iParam4));
			}
			else
			{
				func_361(&(uParam0->f_1), &(uParam0->f_2));
			}
			func_360(&Param1);
		}
		else if (unk_0xE2D0C323A1AE5D85(iLocal_100[func_17(iParam4)], func_16(iParam4)))
		{
			if (func_359(&(uParam0->f_1), &(uParam0->f_2)))
			{
				unk_0xB9ACD8A27BCDC3E2(uParam0->f_1);
				unk_0xB0550BC91B0159D6(&(iLocal_100[func_17(iParam4)]), func_16(iParam4));
			}
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(iLocal_100[func_17(iParam4)], func_16(iParam4)))
	{
		func_358(&(uParam0->f_1), &(uParam0->f_2), uParam0, iParam4);
	}
	else if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		unk_0xFFD8EB5462B07B59(uParam0);
	}
}

void func_358(var uParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			unk_0x2F046C9381D8E91B(1, &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0x64983DDD3D05B1B7(*uParam0, uVar0, uVar1, uVar2, *uParam1);
			unk_0x5AA4072AEB6E6A0E(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		}
		else
		{
			if (unk_0x12DD4A0B247D9B4D(*uParam2))
			{
				unk_0xFFD8EB5462B07B59(uParam2);
			}
			unk_0xB9ACD8A27BCDC3E2(*uParam0);
			*uParam0 = 0;
			unk_0xB0550BC91B0159D6(&(iLocal_100[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_359(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		unk_0x2F046C9381D8E91B(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x64983DDD3D05B1B7(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0x5AA4072AEB6E6A0E(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_360(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_34())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_137(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		unk_0xB0EBAD32769EF0E8(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_361(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		unk_0x2F046C9381D8E91B(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x64983DDD3D05B1B7(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0x5AA4072AEB6E6A0E(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_362(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x12DD4A0B247D9B4D(*uParam0))
	{
		uVar0 = func_363(iParam1);
		unk_0xA582EE8380437B1B(*uParam0, uVar0);
	}
}

int func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0x2F046C9381D8E91B(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_364(var uParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xFBBD8F124403B0F5(uParam0, func_365(uParam0, iParam1, fParam2, fParam3));
}

int func_365(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_316(Global_2703656) && !func_73())
	{
		fVar0 = func_370(uParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_366();
		}
		return (round((to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_366()
{
	if (func_367(Global_2703656, 1))
	{
		return 50;
	}
	return 0;
}

bool func_367(int iParam0, bool bParam1)
{
	if (func_369() != 0)
	{
		return func_368(iParam0) != 0;
	}
	return func_339(iParam0, bParam1, 0);
}

int func_368(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_369()
{
	return Global_31505;
}

float func_370(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	iVar0 = Global_2703656;
	Var2 = { func_423(uParam0) };
	Var2.f_2 = 0f;
	if (Global_1581338 || func_419())
	{
		if (func_418(iVar0))
		{
			Var3 = { func_373(iVar0) };
		}
		else if (func_372(iVar0))
		{
			Var3 = { func_371(iVar0) };
		}
	}
	else
	{
		Var3 = { unk_0x6B62510F212526DC(unk_0x407E03586628E458(iVar0), 0) };
	}
	Var3.f_2 = 0f;
	fVar1 = vmag(Var3 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_371(int iParam0)
{
	var uVar0;
	
	if (func_372(iParam0))
	{
		uVar0 = unk_0x407E03586628E458(iParam0);
		if (unk_0xE5965CDF24F93A9F(uVar0))
		{
			return unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_372(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			uVar0 = unk_0x407E03586628E458(iParam0);
			if (unk_0xE5965CDF24F93A9F(uVar0))
			{
				if (unk_0x8F41785F110B0DA0(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_373(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (iParam0 == func_101())
	{
	}
	if (func_417(iParam0))
	{
		iVar0 = func_416(iParam0);
		if (iVar0 != func_101())
		{
			if (!func_415(iVar0))
			{
				if (unk_0xE5965CDF24F93A9F(Global_2703656.f_253[iVar0 /*3*/][1]))
				{
					return unk_0x6B62510F212526DC(Global_2703656.f_253[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2689156[func_416(iParam0) /*453*/].f_319.f_11;
				}
			}
			else
			{
				iVar1 = func_412(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946934.f_532[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_411(iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_2810287.f_307))
		{
			return unk_0x6B62510F212526DC(Global_2810287.f_307, 0);
		}
	}
	else if (func_410(iParam0) && !func_409(iParam0))
	{
		iVar2 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar2 != func_101())
		{
			iVar3 = func_412(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946934.f_532[iVar3 /*3*/];
			}
		}
	}
	else if (func_408(iParam0) && !func_407(iParam0))
	{
		if (func_418(iParam0) && func_406())
		{
			return Global_1946934.f_532[Global_2689156[iParam0 /*453*/].f_319.f_6 /*3*/];
		}
		iVar4 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar4 != func_101())
		{
			if (func_405(iVar4))
			{
				iVar5 = func_402(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946934.f_532[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_401(iParam0))
	{
		iVar6 = func_400(iParam0);
		if (iVar6 != func_101())
		{
			if (!func_399(iVar6))
			{
				if (unk_0xE5965CDF24F93A9F(Global_2703656.f_350[iVar6]))
				{
					return unk_0x6B62510F212526DC(Global_2703656.f_350[iVar6], 0);
				}
				else
				{
					return Global_2689156[func_400(iParam0) /*453*/].f_319.f_18;
				}
			}
			else
			{
				iVar7 = func_402(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946934.f_532[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_398(iParam0))
	{
		if (unk_0xE5965CDF24F93A9F(Global_2810287.f_309))
		{
			return unk_0x6B62510F212526DC(Global_2810287.f_309, 0);
		}
	}
	else if (func_397(iParam0) && !func_396(iParam0))
	{
		iVar8 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar8 != func_101())
		{
			if (func_395(iVar8))
			{
				iVar9 = func_392(iVar8);
				if (iVar9 != -1)
				{
					return func_391(iVar9);
				}
			}
		}
	}
	else if (func_390(iParam0) && !func_389(iParam0))
	{
		iVar10 = Global_2689156[iParam0 /*453*/].f_319.f_9;
		if (iVar10 != func_101())
		{
			if (func_388(iVar10))
			{
				iVar11 = func_385(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946934.f_532[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_384(iParam0, 0))
	{
		iVar12 = func_383(iParam0);
		if (iVar12 != func_101())
		{
			if (!func_382(iVar12))
			{
				if (unk_0xE5965CDF24F93A9F(Global_2703656.f_383[iVar12]))
				{
					return unk_0x6B62510F212526DC(Global_2703656.f_383[iVar12], 0);
				}
				else
				{
					return Global_1893548[func_383(iParam0) /*600*/].f_585;
				}
			}
			else
			{
				iVar13 = func_385(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946934.f_532[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_381(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_380(iParam0))
	{
		iVar14 = func_378(iParam0);
		if (iVar14 != func_101())
		{
			if (unk_0xE5965CDF24F93A9F(Global_2703656.f_416[iVar14]))
			{
				return unk_0x6B62510F212526DC(Global_2703656.f_416[iVar14], 0);
			}
			else
			{
				return Global_1912810[iVar14 /*257*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_397(iParam0))
	{
		return func_391(Global_2689156[iParam0 /*453*/].f_319.f_6);
	}
	if (func_374(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946934.f_532[Global_2689156[iParam0 /*453*/].f_319.f_6 /*3*/];
}

int func_374(int iParam0)
{
	if (((func_377(iParam0) || func_376(iParam0)) || func_375(iParam0)) || func_307(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_375(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_376(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_378(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_101())
	{
		return iParam0;
	}
	if (func_379(iParam0) != -1)
	{
		iVar0 = func_176(func_379(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_81(iParam0, 0))
			{
				return func_80(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_101();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_101();
}

int func_379(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_13(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

int func_380(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
			}
		}
		else if (((Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_1575046) && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_13(iParam0, 1, 0))
		{
			return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != func_101())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_3, 4);
	}
	return 0;
}

int func_383(int iParam0)
{
	if (iParam0 == func_101())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_384(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0))
		{
			iVar0 = unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0);
			if (unk_0x15CAA6D7B11F1A7C(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_101())
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_385(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_101())
	{
		iVar0 = func_387(iParam0);
		if (iVar0 != 0)
		{
			return func_386(iVar0);
		}
	}
	return -1;
}

int func_386(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_387(int iParam0)
{
	if (iParam0 != func_101())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_291;
	}
	return 0;
}

int func_388(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (Global_1853128[iParam0 /*888*/].f_267.f_291 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_390(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_390(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_391(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1946934.f_532[iParam0 /*3*/];
}

int func_392(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_101())
	{
		iVar0 = func_394(iParam0);
		if (iVar0 != 0)
		{
			return func_393(iVar0);
		}
	}
	return -1;
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 102;
		
		case 2:
			return 103;
		
		case 3:
			return 104;
		
		case 4:
			return 105;
		
		case 5:
			return 106;
		
		case 6:
			return 107;
		
		case 7:
			return 108;
		
		case 8:
			return 109;
		
		case 9:
			return 110;
		
		case 10:
			return 111;
		
		default:
	}
	return -1;
}

int func_394(int iParam0)
{
	if (iParam0 != func_101())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_332;
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 != func_101())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_332 != 0;
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_397(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_398(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_399(int iParam0)
{
	if (iParam0 != func_101())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_2, 6);
	}
	return 0;
}

int func_400(int iParam0)
{
	if (iParam0 == func_101())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_401(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_101())
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_101())
	{
		return -1;
	}
	iVar0 = func_404(iParam0);
	if (!iVar0 == 0)
	{
		return func_403(iVar0);
	}
	return -1;
}

int func_403(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		
		case 2:
			return 90;
			break;
		
		case 3:
			return 91;
			break;
		
		case 4:
			return 92;
			break;
		
		case 5:
			return 93;
			break;
		
		case 6:
			return 94;
			break;
		
		case 7:
			return 95;
			break;
		
		case 8:
			return 96;
			break;
		
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_404(int iParam0)
{
	if (iParam0 == func_101())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_281;
}

int func_405(int iParam0)
{
	if (iParam0 != func_101())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_281 != 0;
	}
	return 0;
}

int func_406()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1946934.f_2, 13) || Global_1946934.f_3280)
	{
		return 1;
	}
	return 0;
}

int func_407(int iParam0)
{
	if (iParam0 == func_101())
	{
		return 0;
	}
	if (func_408(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (iParam0 == func_101())
	{
		return 0;
	}
	if (func_410(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_411(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_101())
	{
		return -1;
	}
	iVar0 = func_414(iParam0);
	if (!iVar0 == 0)
	{
		return func_413(iVar0);
	}
	return -1;
}

int func_413(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		
		case 2:
			return 23;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 25;
			break;
		
		case 5:
			return 26;
			break;
		
		case 6:
			return 27;
			break;
		
		case 7:
			return 28;
			break;
		
		case 8:
			return 29;
			break;
		
		case 9:
			return 30;
			break;
		
		case 10:
			return 31;
			break;
		
		case 11:
			return 32;
			break;
		
		case 12:
			return 33;
			break;
		
		case 13:
			return 34;
			break;
		
		case 14:
			return 35;
			break;
		
		case 15:
			return 36;
			break;
		
		case 16:
			return 37;
			break;
		
		case 17:
			return 38;
			break;
		
		case 18:
			return 39;
			break;
		
		case 19:
			return 40;
			break;
		
		case 20:
			return 41;
			break;
		
		case 21:
			return 70;
			break;
		
		case 22:
			return 71;
			break;
		
		case 23:
			return 72;
			break;
		
		case 24:
			return 73;
			break;
		
		case 25:
			return 74;
			break;
		
		case 26:
			return 75;
			break;
		
		case 27:
			return 76;
			break;
		
		case 28:
			return 77;
			break;
		
		case 29:
			return 78;
			break;
		
		case 30:
			return 79;
			break;
		
		case 31:
			return 80;
			break;
	}
	return -1;
}

int func_414(int iParam0)
{
	if (iParam0 == func_101())
	{
		return 0;
	}
	return Global_1853128[iParam0 /*888*/].f_267.f_187[5 /*13*/];
}

int func_415(int iParam0)
{
	if (iParam0 != func_101())
	{
		return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319, 6);
	}
	return 0;
}

int func_416(int iParam0)
{
	if (iParam0 == func_101())
	{
		return iParam0;
	}
	return Global_2689156[iParam0 /*453*/].f_319.f_9;
}

int func_417(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_101())
			{
				return func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == unk_0x9E2D6C50374FCFA9()) && func_13(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_419()
{
	if ((func_422() || func_421()) || func_420(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

bool func_420(int iParam0)
{
	if (iParam0 == func_101())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1890187[iParam0 /*105*/].f_29, 20);
}

bool func_421()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958899, 1);
}

bool func_422()
{
	return unk_0xE2D0C323A1AE5D85(Global_1958920, 5);
}

Vector3 func_423(var uParam0)
{
	int iVar0;
	
	switch (unk_0x0096542092B7C49B(uParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0xD806A0199657B31F(uParam0);
			if (unk_0xE5965CDF24F93A9F(iVar0))
			{
				return unk_0x6B62510F212526DC(iVar0, 0);
			}
			break;
	}
	return unk_0x1A3931A61B3223A2(uParam0);
}

bool func_424(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_425()
{
	if (func_316(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0xE2D0C323A1AE5D85(iLocal_92, 2))
		{
			unk_0xCED9E32812D6C7C7(&iLocal_92, 2);
			return 1;
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(iLocal_92, 2))
	{
		unk_0xB0550BC91B0159D6(&iLocal_92, 2);
		return 1;
	}
	return 0;
}

int func_426(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_440() < 10)
	{
		iVar0 = func_439();
		func_427(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_427(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	func_428(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_428(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_436(unk_0x9E2D6C50374FCFA9()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_435(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_430(Var0))
		{
			Global_2667222.f_45.f_64 = func_368(unk_0x9E2D6C50374FCFA9());
			func_429(Var0, iParam4);
		}
	}
}

void func_429(struct<12> Param0, int iParam1)
{
	Global_2667222.f_367[iParam1 /*12*/] = { Param0 };
	Global_2667222.f_367[iParam1 /*12*/].f_9 = 1;
}

int func_430(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2667222.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_431(Global_2667222.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_431(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_434(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_432(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_434(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_432(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_432(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_433(Param0, Param1, Var0, Var1);
}

int func_433(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	if (((((Param0.x >= Param2.x && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.x <= Param3.x) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_434(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((vmag(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_435(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.x = *uParam0;
		Var1.x = *uParam1;
	}
	else
	{
		Var0.x = *uParam1;
		Var1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_436(int iParam0)
{
	if (((func_367(iParam0, 1) || func_438(iParam0)) || func_111(iParam0, 0)) || func_437(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_437(int iParam0)
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_887, 2);
}

int func_438(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/] != -1;
	}
	return 0;
}

int func_439()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2667222.f_367[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_440()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_441()
{
	if (!func_159())
	{
		return;
	}
	if (!unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == Global_1574747.f_9)
	{
		return;
	}
	func_155();
}

void func_442()
{
	Global_1941981 = 1;
	if (!unk_0xE2D0C323A1AE5D85(Global_2819530, 0))
	{
		unk_0xCED9E32812D6C7C7(&Global_2819530, 0);
		unk_0xCED9E32812D6C7C7(&Global_1941982, 0);
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_2819530, 1))
	{
		unk_0xCED9E32812D6C7C7(&Global_2819530, 1);
		unk_0xCED9E32812D6C7C7(&Global_1941982, 1);
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_2819530, 5))
	{
		unk_0xCED9E32812D6C7C7(&Global_2819530, 5);
		unk_0xCED9E32812D6C7C7(&Global_1941982, 5);
	}
	if (unk_0xEC32121F2E3875C8(-355737150))
	{
		unk_0x7E15597AA5F53F9A(-355737150, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-580979506))
	{
		unk_0x7E15597AA5F53F9A(-580979506, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-1426452475))
	{
		unk_0x7E15597AA5F53F9A(-1426452475, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(745417724))
	{
		unk_0x7E15597AA5F53F9A(745417724, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-1305304906))
	{
		unk_0x7E15597AA5F53F9A(-1305304906, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-1543175077))
	{
		unk_0x7E15597AA5F53F9A(-1543175077, 0, 0, 0);
	}
	if (unk_0xEC32121F2E3875C8(-811770997))
	{
		unk_0x7E15597AA5F53F9A(-811770997, 0, 0, 0);
	}
}

void func_443()
{
	char* sVar0;
	
	if (!unk_0xE2D0C323A1AE5D85(iLocal_92, 5) && !unk_0xB7B9FCC926422B4B())
	{
		if (Local_127.f_707)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_44(63, sVar0, "CPC_START", func_58(), -1, func_58(), 1, 0);
		unk_0xC70E97154CC5B243();
		unk_0xCED9E32812D6C7C7(&iLocal_92, 5);
	}
}

void func_444(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 1);
	}
	Global_2810287.f_5040 = -1;
	bVar0 = (func_111(unk_0x9E2D6C50374FCFA9(), 0) && func_107(unk_0x9E2D6C50374FCFA9()));
	if (bParam6)
	{
		func_461(func_462(iParam0), 1);
	}
	else
	{
		func_460(iParam0, -1);
		if (func_7(unk_0x9E2D6C50374FCFA9()))
		{
			Global_1836830.f_3 = iParam0;
		}
		else
		{
			func_459(iParam0);
		}
		Global_1836830.f_4 = -1;
		if (func_7(unk_0x9E2D6C50374FCFA9()))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 5);
		}
		if (((func_344() && !func_356()) || func_355(unk_0x9E2D6C50374FCFA9(), 21)) || func_355(unk_0x9E2D6C50374FCFA9(), 25))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 4);
		}
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 17);
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 20);
		if (func_458(iParam0))
		{
			func_457();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_454(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x8576657A629C4B0A(fParam2);
			if (iParam0 == 146)
			{
				unk_0xC0F70A3CDEC87ECE(0);
				unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
				unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
			}
		}
		if (func_452(iParam0))
		{
			unk_0xC0F70A3CDEC87ECE(0);
			unk_0xBCD99B4EDAE55BE6(unk_0x9E2D6C50374FCFA9(), 0, 0);
			unk_0xB78CBE6C9550E5EF(unk_0x9E2D6C50374FCFA9(), 0);
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2653189)
			{
				func_450(1);
				if (func_287(0))
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_448(1);
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 12);
		}
		if (bParam5)
		{
			func_447();
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_445(iParam0))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 21);
			}
		}
	}
	Global_2783191 = 1;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_121(iParam0) == 1)
	{
		return 1;
	}
	if (func_446())
	{
		return 1;
	}
	return 0;
}

int func_446()
{
	switch (func_303())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_447()
{
	unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5031), 0);
}

void func_448(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100026.f_8 = 1;
	}
	else
	{
		Global_100026.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_449(iVar0);
		iVar0++;
	}
}

void func_449(int iParam0)
{
	Global_100026.f_196[iParam0] = 1;
	Global_100026.f_195 = 1;
}

void func_450(int iParam0)
{
	if (func_451() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_451()
{
	if ((((Global_1057405 != -1 && Global_1057405 != 33) && Global_1057405 != 35) && Global_1057405 != 37) && Global_1057405 != 21)
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_453(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

void func_454(float fParam0)
{
	float fVar0;
	
	if (unk_0x2E87280918B16506(unk_0x05CBA41180F5D521()) == func_455())
	{
		return;
	}
	fVar0 = (Global_2810287.f_5188 - fParam0);
	if (unk_0x87C0DA419F19FF57(Global_2810287.f_5189))
	{
		if (!Global_2810287.f_5189 == unk_0x69CE66B03B2184EB() && unk_0x48053974ED6F63CE(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2810287.f_5188 = fParam0;
	Global_2810287.f_5189 = unk_0x69CE66B03B2184EB();
}

int func_455()
{
	switch (func_369())
	{
		case 0:
			return func_456();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_456()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_457()
{
	Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_209 = 0;
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_4629), 1);
}

int func_458(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_459(int iParam0)
{
	Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/] = iParam0;
}

void func_460(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_522(0) || func_522(func_521(iVar0)))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 2);
		}
		else
		{
			unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 2);
		}
	}
}

void func_461(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217, iParam0))
		{
			unk_0xCED9E32812D6C7C7(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217), iParam0);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217, iParam0))
	{
		unk_0xB0550BC91B0159D6(&(Global_2689156[unk_0x9E2D6C50374FCFA9() /*453*/].f_217), iParam0);
	}
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

void func_463()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	struct<3> Var10;
	float fVar11;
	
	if (func_13(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if ((!func_300() && !func_480(unk_0x9E2D6C50374FCFA9(), 0, -1)) && !func_479(unk_0x9E2D6C50374FCFA9()))
		{
			fVar3 = 2.147484E+09f;
			iVar4 = -1;
			Var6 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
			bVar7 = unk_0xD5C6B5E3B93A5EDC(unk_0xE2D3D51028F0428A(), 0);
			bVar8 = func_478();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				uVar9 = Local_127.f_729[iVar2 /*2*/].f_1;
				if (unk_0x90F6E2F6488B98BA(uVar9) && unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(uVar9), 0))
				{
					if (!bVar8)
					{
						if (bVar7 && unk_0xB3FF0049C1FD38EC(unk_0xE2D3D51028F0428A(), 0) == unk_0xA5677134B9672173(uVar9))
						{
							func_327(1);
						}
					}
					if (func_32(iVar2, &Var0, &uVar1))
					{
						Var10 = { unk_0x6B62510F212526DC(unk_0xA5677134B9672173(uVar9), 1) };
						if (vdist(Var10, Var0) <= 10f)
						{
							if (func_477(Var10))
							{
								unk_0xCED9E32812D6C7C7(&uVar5, iVar2);
							}
							if (func_475(Var10, Var6))
							{
								if (!func_473(Var0, 100f))
								{
									fVar11 = vdist(Var10, Var6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_7 = uVar5;
			if ((unk_0x17FE501894ED2713(unk_0xE2D3D51028F0428A()) || (unk_0xCE282187B0A6217E(unk_0xE2D3D51028F0428A()) && !unk_0x32DCDA1B2F8A0694(unk_0xE2D3D51028F0428A()))) || Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 > 0)
			{
				if ((fVar3 < 2.147484E+09f && iVar4 >= 0) && iVar4 < 10)
				{
					if (func_32(iVar4, &Var0, &uVar1))
					{
						iLocal_113 = 1;
						func_472(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
						func_471(Var0, 1, 0);
						func_465(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_464();
			}
		}
		else
		{
			func_464();
		}
	}
}

void func_464()
{
	if (iLocal_113)
	{
		func_167();
		func_165();
		iLocal_113 = 0;
	}
}

void func_465(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703656.f_1585.f_703.f_16 != func_101())
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2689156[Global_2703656.f_1585.f_703.f_16 /*453*/].f_417, 0) && func_466())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674884 = 0;
	}
	Global_2667222.f_489 = iParam0;
	Global_2667222.f_489.f_1 = unk_0x69CE66B03B2184EB();
	Global_2667222.f_489.f_2 = iParam1;
	Global_2667222.f_489.f_3 = iParam2;
	Global_2667222.f_489.f_4 = iParam3;
	Global_2667222.f_489.f_5 = iParam4;
}

int func_466()
{
	if ((((((func_245(unk_0x9E2D6C50374FCFA9()) == 229 || func_245(unk_0x9E2D6C50374FCFA9()) == 191) || func_470()) || func_469()) || func_345(unk_0x9E2D6C50374FCFA9())) || Global_2783990.f_227 == 1) || (Global_2667222.f_1752 && func_467(unk_0x9E2D6C50374FCFA9())))
	{
		return 0;
	}
	return 1;
}

int func_467(int iParam0)
{
	if (func_468(iParam0))
	{
		return 1;
	}
	if (func_105(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_468(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xE2D0C323A1AE5D85(Global_1893548[iVar0 /*600*/].f_1, 7);
	}
	return 0;
}

bool func_469()
{
	return Global_1836575;
}

int func_470()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_471(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2667222.f_45.f_49 = { Param0 };
	Global_2667222.f_45.f_52 = iParam1;
	Global_2667222.f_45.f_53 = iParam2;
}

void func_472(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		if (!Global_2676143.f_6 == unk_0x69CE66B03B2184EB())
		{
			return;
		}
	}
	if (vmag(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x87C0DA419F19FF57(Global_2676143.f_6))
	{
		Global_2676143.f_6 = unk_0x69CE66B03B2184EB();
	}
	Var0.f_6 = Global_2676143.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_436(unk_0x9E2D6C50374FCFA9()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2676143 = { Var0 };
}

bool func_473(struct<3> Param0, float fParam1)
{
	return func_474(Param0, fParam1, unk_0x9E2D6C50374FCFA9(), 0, 0);
}

int func_474(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (unk_0x0E40F846A70BA3EC(iVar1) == unk_0x0E40F846A70BA3EC(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (Global_2680195.f_261[iVar0])
					{
						if (vdist(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_31(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680195.f_261[iVar0])
				{
					if (vdist(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_13(iVar1, 0, 1))
				{
					if (vdist(func_31(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_475(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	
	if (Local_127.f_8 == 3)
	{
		Var0 = { func_476(Local_127.f_712) };
		if (vdist(Param1, Var0) < 3500f)
		{
			if (vdist(Param0, Var0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1710.367f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.06f, 4123.072f, 62.2841f;
		
		case 3:
			return 1941.779f, 3847.167f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_477(struct<3> Param0)
{
	struct<3> Var0;
	
	if (Local_127.f_8 == 3)
	{
		Var0 = { func_476(Local_127.f_712) };
		if (vdist(Param0, Var0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_478()
{
	if ((((((func_468(unk_0x9E2D6C50374FCFA9()) || func_344()) || func_356()) || func_355(unk_0x9E2D6C50374FCFA9(), 21)) || func_355(unk_0x9E2D6C50374FCFA9(), 25)) || func_7(unk_0x9E2D6C50374FCFA9())) || func_6(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

int func_479(int iParam0)
{
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

int func_480(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853128[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_176(Global_2689156[iParam0 /*453*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_378(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

void func_481(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_299(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_242(sParam1))
	{
		sVar0 = sParam1;
	}
	func_147(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_482(int iParam0)
{
	var uVar0;
	
	uVar0 = unk_0x05CBA41180F5D521();
	return "HUD_STARTING";
	if (unk_0x3C57C2F07FEE34D2(uVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_483(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_484(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x51109C28352EC9A3())
	{
		Global_2810287.f_5030 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_2810287.f_5030, 1))
		{
			unk_0x91DFC8F68F6D9B05(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2810287.f_5030 = 0;
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_5030), 1);
		}
	}
}

int func_485(var uParam0, bool bParam1, bool bParam2)
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

void func_486(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (func_34())
	{
		if (func_13(unk_0x9E2D6C50374FCFA9(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && unk_0x90F6E2F6488B98BA(Local_127.f_729[iVar0 /*2*/].f_1)) && unk_0x55A0C756C4A8220C(unk_0xA5677134B9672173(Local_127.f_729[iVar0 /*2*/].f_1), 0)) && unk_0x7158135695FAE89D(unk_0xA5677134B9672173(Local_127.f_729[iVar0 /*2*/].f_1), -1, 0))
				{
					if (!unk_0x12DD4A0B247D9B4D(uLocal_121[iVar0]))
					{
						uLocal_121[iVar0] = unk_0xEFD6451BF0F3352F(unk_0xF2D8DACFAEBD9629(Local_127.f_729[iVar0 /*2*/].f_1));
						unk_0x7A610B2EC5DA34E7(uLocal_121[iVar0], 9);
						unk_0xAF62582F3EA39095(uLocal_121[iVar0], "AMCH_AC");
						unk_0x1A5B5BA56167D412(uLocal_121[iVar0], func_487(iVar0));
						func_362(&(uLocal_121[iVar0]), 9);
					}
					else
					{
						Var1 = { unk_0x6B62510F212526DC(unk_0xE2D3D51028F0428A(), 1) };
						if (vdist(Var1, unk_0x6B62510F212526DC(unk_0xA5677134B9672173(Local_127.f_729[iVar0 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x3430966AC4550BB9(uLocal_121[iVar0], 1);
						}
						else
						{
							unk_0x3430966AC4550BB9(uLocal_121[iVar0], 0);
						}
					}
				}
				else if (unk_0x12DD4A0B247D9B4D(uLocal_121[iVar0]))
				{
					unk_0xFFD8EB5462B07B59(&(uLocal_121[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_487(int iParam0)
{
	switch (Local_127.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_488(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!unk_0xB7B9FCC926422B4B())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8())
					{
						func_491("CPC_PASSIVE", 30000);
						func_171(1);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8())
					{
						func_491("CPC_NOAIR", 30000);
						func_171(1);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if ((!unk_0xF1EC2C71FD1371B8() && !unk_0xF847447D4467709D()) && func_34())
					{
						func_491("AMCH_AIRAV", 30000);
						func_171(1);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			
			case 3:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8())
					{
						func_491("AMCH_BLOW", 30000);
						func_171(1);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			
			case 4:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8() && !func_490(63))
					{
						if (Local_127.f_707)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_491(sVar0, 30000);
						func_171(1);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			
			case 5:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if (((!unk_0xF1EC2C71FD1371B8() && !func_490(63)) && !unk_0xF847447D4467709D()) && unk_0xE2D0C323A1AE5D85(iLocal_111, 4))
					{
						if (Local_127.f_707)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_491(sVar1, 30000);
						func_171(1);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			
			case 6:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if (((!unk_0xF1EC2C71FD1371B8() && !func_490(63)) && !unk_0xF847447D4467709D()) && unk_0xE2D0C323A1AE5D85(iLocal_111, 5))
					{
						if (Local_127.f_707)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_489(sVar2, func_162(), 30000);
						func_171(1);
						unk_0x91DFC8F68F6D9B05(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			
			case 7:
				if (!unk_0xE2D0C323A1AE5D85(iLocal_111, iParam0))
				{
					if (!unk_0xF1EC2C71FD1371B8())
					{
						func_491("CPC_PASSIV1", 30000);
						func_171(1);
						unk_0xCED9E32812D6C7C7(&iLocal_111, iParam0);
					}
				}
				break;
			}
	}
}

void func_489(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x26C23BE14F66F202(sParam1);
	unk_0x89B545A74F93B1DD(0, 0, 0, iParam2);
}

bool func_490(int iParam0)
{
	return Global_2703656.f_2414[0 /*80*/].f_1 == iParam0;
}

void func_491(char* sParam0, int iParam1)
{
	unk_0xA83426F7CEDED182(sParam0);
	unk_0x89B545A74F93B1DD(0, 0, 1, iParam1);
}

void func_492(int iParam0)
{
	Local_1494[unk_0xF1354995C6159A78() /*5*/].f_3 = iParam0;
}

void func_493(bool bParam0)
{
	if (bParam0)
	{
		unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 4);
	}
	else
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 4);
	}
}

int func_494(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_520(unk_0x9E2D6C50374FCFA9(), 29))
	{
		return 0;
	}
	if (func_355(unk_0x9E2D6C50374FCFA9(), 21))
	{
		return 0;
	}
	if (func_355(unk_0x9E2D6C50374FCFA9(), 25))
	{
		return 0;
	}
	if (unk_0x0843570206F71F38())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xC96A605CF3E9295B())
		{
			return 0;
		}
	}
	if (func_338(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_519())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_518(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	if (func_517())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_105(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	else if (func_510(unk_0x9E2D6C50374FCFA9()) == 3)
	{
		return 0;
	}
	if (func_509(unk_0x9E2D6C50374FCFA9()) != func_101() && func_509(unk_0x9E2D6C50374FCFA9()) == func_80(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_507(unk_0x9E2D6C50374FCFA9(), 3))
	{
		return 0;
	}
	if (func_506(func_195()) && !func_334(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_505())
	{
		return 0;
	}
	if (func_300())
	{
		return 0;
	}
	if (unk_0x44859561F653DD4E())
	{
		return 0;
	}
	if (func_340(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (!func_503())
	{
		return 0;
	}
	if (func_355(unk_0x9E2D6C50374FCFA9(), 0) || func_355(unk_0x9E2D6C50374FCFA9(), 3))
	{
		return 0;
	}
	if ((func_355(unk_0x9E2D6C50374FCFA9(), 12) || func_355(unk_0x9E2D6C50374FCFA9(), 14)) || func_355(unk_0x9E2D6C50374FCFA9(), 13))
	{
		return 0;
	}
	if (func_502(unk_0x9E2D6C50374FCFA9(), 1, 1))
	{
		if (!func_422() && !Global_2783575)
		{
			return 0;
		}
	}
	if (func_501(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (func_437(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_499())
	{
		return 0;
	}
	if (func_497(unk_0x9E2D6C50374FCFA9()) && Global_1852774.f_172)
	{
		return 0;
	}
	if (func_496())
	{
		return 0;
	}
	if (func_345(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (Global_2809346)
	{
		return 0;
	}
	if (Global_1964189)
	{
		return 0;
	}
	if (!func_468(unk_0x9E2D6C50374FCFA9()))
	{
		if (func_495(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	return 1;
}

int func_495(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890187[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

bool func_496()
{
	return Global_1946934.f_518;
}

int func_497(int iParam0)
{
	if (func_498(Global_1853128[iParam0 /*888*/].f_267.f_30))
	{
		return 1;
	}
	return 0;
}

int func_498(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_499()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_500()
{
	return Global_100026.f_376 > 0;
}

bool func_501(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 11);
}

int func_502(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_101())
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_503()
{
	if (func_504() == 0)
	{
		return 1;
	}
	return 0;
}

int func_504()
{
	return Global_1574629.f_18;
}

bool func_505()
{
	return Global_1575046;
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_507(int iParam0, int iParam1)
{
	if (func_111(iParam0, 0))
	{
		return func_508(Global_1893548[iParam0 /*600*/].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_508(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_509(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_35;
}

int func_510(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_438(iParam0) && !func_7(iParam0)) && !unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 8));
	bVar2 = func_105(iParam0);
	uVar3 = func_344();
	uVar4 = func_511();
	if ((bVar1 && (func_468(iParam0) || func_453(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_107(iParam0)) && !func_177(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2810287.f_5193.f_220 != iVar0)
	{
		Global_2810287.f_5193.f_220 = iVar0;
	}
	return iVar0;
}

int func_511()
{
	if ((func_106(unk_0x9E2D6C50374FCFA9(), 21) || func_106(unk_0x9E2D6C50374FCFA9(), 22)) || func_515())
	{
		return 1;
	}
	if (func_513())
	{
		func_512(22);
		return 1;
	}
	return 0;
}

void func_512(int iParam0)
{
	unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

int func_513()
{
	if (func_111(unk_0x9E2D6C50374FCFA9(), 0))
	{
		if (((func_344() && !func_356()) || func_355(unk_0x9E2D6C50374FCFA9(), 21)) || func_355(unk_0x9E2D6C50374FCFA9(), 25))
		{
			return 1;
		}
		else
		{
			func_514(27);
		}
	}
	return 0;
}

void func_514(int iParam0)
{
	unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_4), iParam0);
}

int func_515()
{
	return func_516(424, -1);
}

int func_516(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2860375[iParam0 /*3*/][func_229(iParam1)];
	if (unk_0x1BB27397611554CE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_517()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 5;
}

int func_518(int iParam0)
{
	if (Global_2689156[iParam0 /*453*/].f_270.f_4 != 0 || Global_2689156[iParam0 /*453*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_519()
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_36.f_18, 0);
}

bool func_520(int iParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_11.f_5, iParam1);
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23910;
}

bool func_522(int iParam0)
{
	var uVar0;
	
	uVar0 = func_233(2482, -1, 0);
	return unk_0xE2D0C323A1AE5D85(uVar0, iParam0);
}

void func_523()
{
	if (Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 != 0)
	{
		Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4 = 0;
	}
}

bool func_524(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		if (((func_344() && !func_356()) || func_355(unk_0x9E2D6C50374FCFA9(), 21)) || func_355(unk_0x9E2D6C50374FCFA9(), 25))
		{
			return 1;
		}
		if (func_38(&(Global_1836830.f_13)))
		{
			if (!func_1(&(Global_1836830.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_37(&(Global_1836830.f_13));
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 9);
}

bool func_525(int iParam0)
{
	return func_99(iParam0, 0);
}

void func_526()
{
	func_527(&(Local_148.f_534), &Local_148, 27, &(Local_148.f_1), &(Local_148.f_117), -1, 0, 0);
}

void func_527(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_645(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_643() || iParam2 == 28)
	{
		if (func_597(uParam1, iParam2, uParam3, Global_1836353, 0, func_646(), iParam7))
		{
			func_596(1);
			if ((!func_595() && !func_594()) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
			{
				if (func_593())
				{
					func_592();
				}
				else
				{
					unk_0xA5AAB00FA8C570A4(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_591(1);
						Global_1836353 = 0;
						iVar19 = -1;
						if (Global_1836576 != 1)
						{
							func_590(uParam1, 0, 0);
							if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
							{
								unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_13(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
									if (!func_99(iVar3, 0))
									{
										if ((func_586(iVar3) || Global_2689156[iVar3 /*453*/].f_245 != -1) || func_585(iVar3))
										{
											iVar9 = iVar3;
											if (func_82(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_582(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_108(unk_0x9E2D6C50374FCFA9(), 0) && func_245(unk_0x9E2D6C50374FCFA9()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_581())
							{
								if (func_13(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar3 = unk_0xA1087A6350CD9244(iVar17);
								}
								else
								{
									iVar3 = func_101();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_580(iVar3) && func_577(iVar3, iParam2)) && func_13(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
								Var6 = { func_572(iVar3) };
								if (iVar3 == unk_0x9E2D6C50374FCFA9())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x61042CA2A97BBB69(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_141(iVar3) };
								iVar5 = func_566(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
								}
								Global_1836353++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_581())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_561(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_560(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_559(iVar3, 0);
								if (bVar2)
								{
									if (func_81(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_558(iParam5))
								{
									func_557(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_557(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xCED9E32812D6C7C7(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xA1087A6350CD9244(iVar17);
							if (func_13(iVar3, 0, 1) && !unk_0xE2D0C323A1AE5D85(iVar14, iVar3))
							{
								iVar3 = unk_0xA1087A6350CD9244(iVar17);
							}
							else
							{
								iVar3 = func_101();
							}
							if (func_580(iVar3))
							{
								if (func_13(unk_0xA1087A6350CD9244(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1853128[iVar9 /*888*/].f_205.f_6;
									Var6 = { func_572(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_141(iVar3) };
									iVar5 = func_566(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0xE1AFE5E1E834BBF0(iVar5);
									}
									Global_1836353++;
									iVar16 = func_559(iVar3, 1);
									if (bVar2)
									{
										if (func_81(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_540(iVar3, unk_0x61042CA2A97BBB69(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							func_537(uParam3, uParam1, iParam2);
						}
						func_37(&(uParam3->f_21));
						func_536();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
						{
							func_535(uParam3, uParam1);
							func_534(uParam1, 0, 1);
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 7);
						}
						func_535(uParam3, uParam1);
						if (!unk_0xE2D0C323A1AE5D85(uParam3->f_33, 11))
						{
							unk_0xCED9E32812D6C7C7(&(uParam3->f_33), 11);
						}
						if (func_530(uParam3))
						{
							Global_1836576 = 1;
						}
						func_528(uParam3);
						if (Global_1836576 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836576 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x0347CCBD719C8ADC(*uParam1))
					{
						unk_0x2E04B7B46A3670E5(7);
						unk_0x694170BB080C08FF(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x2E04B7B46A3670E5(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_536();
			func_591(0);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 7))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 7);
			}
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 10))
			{
				unk_0xB0550BC91B0159D6(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0xB5A50A903B9AB61B();
}

void func_528(var uParam0)
{
	if (!func_38(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_37(&(uParam0->f_21));
		func_529(0);
	}
}

void func_529(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836576 != 2)
		{
			Global_1836576 = 2;
		}
	}
	else
	{
		switch (Global_1836576)
		{
			case 0:
				Global_1836576 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_530(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xA1087A6350CD9244(uParam0->f_37);
	if (iVar3 != func_101() && func_13(iVar3, 0, 1))
	{
		Var2 = { func_141(iVar3) };
		iVar1 = func_533(uParam0, uParam0->f_37);
		if (func_532(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_531(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_531(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x073CB74794BA9B10(&Var2))
						{
							iVar4 = 1;
							func_531(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_531(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x5B54656F67F47385(&Var2))
					{
						if (!unk_0x5AC8E3AF6B0E9458(&Var2))
						{
							iVar4 = 1;
							func_531(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x5AC8E3AF6B0E9458(&Var2))
					{
						iVar4 = 1;
						func_531(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_531(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_532(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x66237ABAFDF8615A(&uParam0, 13);
}

var func_533(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_534(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEA5DEA46C3EE64D3(*uParam0, "COLLAPSE"))
	{
		unk_0xD7D6BA6E36AEC182(iParam1);
		unk_0x6F06CF0E9AB02847();
	}
	if (iParam2 == 1)
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0x6F06CF0E9AB02847();
		}
	}
}

void func_535(var uParam0, var uParam1)
{
	if (!unk_0xE2D0C323A1AE5D85(uParam0->f_33, 10))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam1, "SET_HIGHLIGHT");
		unk_0x4F47E317C74C543B(uParam0->f_35);
		unk_0x6F06CF0E9AB02847();
		unk_0xCED9E32812D6C7C7(&(uParam0->f_33), 10);
	}
}

void func_536()
{
	if (Global_1836576 != 0)
	{
		Global_1836576 = 0;
	}
}

void func_537(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xA1087A6350CD9244(iVar0);
		if (iVar2 != func_101())
		{
			if (func_13(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_539(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_538(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853128[iVar0 /*888*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_538(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		if (unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_ICON"))
		{
			unk_0x4F47E317C74C543B(iParam1);
			unk_0x4F47E317C74C543B(iParam2);
			if (iParam2 == 65)
			{
				unk_0x4F47E317C74C543B(iParam3);
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

int func_539(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_540(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_556() && iParam4 < func_555())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xEA5DEA46C3EE64D3(*uParam2, sVar1))
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (unk_0xE2D0C323A1AE5D85(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_554("");
			}
			else
			{
				unk_0x4F47E317C74C543B(iParam10);
			}
			func_554(sParam1);
			unk_0x4F47E317C74C543B(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_554("");
			}
			else
			{
				unk_0x4F47E317C74C543B(65);
			}
			unk_0x4F47E317C74C543B(-1);
			func_554("");
			if (uParam3->f_108 == 6)
			{
				func_554("");
			}
			else
			{
				func_554(&sParam5);
			}
			func_545(uParam3, iParam0);
			unk_0x35395E05C7DB18D0(sParam9);
			unk_0x35395E05C7DB18D0(sParam9);
			if (func_544(uParam3))
			{
				func_543("DPAD_FRIEND");
			}
			else if (func_542(uParam3))
			{
				func_543("DPAD_FRIEND");
			}
			else if (func_541(uParam3))
			{
				func_543("DPAD_CREW");
			}
			else
			{
				func_543("");
			}
			unk_0x6F06CF0E9AB02847();
		}
	}
}

bool func_541(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 6);
}

bool func_542(var uParam0)
{
	return unk_0xE2D0C323A1AE5D85(uParam0->f_33, 5);
}

void func_543(char* sParam0)
{
	unk_0x4ADC8B166E139423(sParam0);
	unk_0xD1D4F8D5470AFA4C();
}

int func_544(var uParam0)
{
	if (func_542(uParam0) && func_541(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_545(var uParam0, int iParam1)
{
	if (func_553(iParam1))
	{
		unk_0x4F47E317C74C543B(121);
	}
	else if (func_549(iParam1))
	{
		unk_0x4F47E317C74C543B(122);
	}
	else if (((unk_0xE2D0C323A1AE5D85(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xE2D0C323A1AE5D85(Global_2689156[iParam1 /*453*/].f_426, 0))
	{
		unk_0x4F47E317C74C543B(123);
	}
	else
	{
		if (func_546())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD7D6BA6E36AEC182(uParam0->f_36);
	}
}

int func_546()
{
	if (unk_0x44859561F653DD4E())
	{
		if (func_547() || func_91())
		{
			return 1;
		}
	}
	return 0;
}

int func_547()
{
	if (unk_0x44859561F653DD4E())
	{
		return func_91();
	}
	return func_548(Global_4718592.f_86750);
}

int func_548(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_549(int iParam0)
{
	if ((func_13(iParam0, 0, 1) && func_550()) && func_189(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_550()
{
	if (func_438(unk_0x9E2D6C50374FCFA9()) || func_552())
	{
		if (!func_551(unk_0x9E2D6C50374FCFA9()))
		{
			return 0;
		}
	}
	return 1;
}

int func_551(int iParam0)
{
	if (func_304(iParam0) == 236 || func_304(iParam0) == 150)
	{
		return func_468(iParam0);
	}
	return 0;
}

int func_552()
{
	switch (func_245(unk_0x9E2D6C50374FCFA9()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_553(int iParam0)
{
	if (func_546())
	{
		if (func_13(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_13(iParam0, 0, 1) && func_550()) && func_191(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_554(char* sParam0)
{
	unk_0x341872E4D54CD053(sParam0);
}

int func_555()
{
	int iVar0;
	
	if (Global_1836355)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_556()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836355)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_557(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_556() && iParam3 < func_555())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x0347CCBD719C8ADC(*uParam1))
		{
			if (unk_0xEA5DEA46C3EE64D3(*uParam1, sVar1))
			{
				unk_0x4F47E317C74C543B(iParam3);
				if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_554("");
				}
				else
				{
					unk_0x4F47E317C74C543B(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					func_543(sParam16);
				}
				else
				{
					func_554(&(uParam2->f_1));
				}
				unk_0x4F47E317C74C543B(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_554("");
				}
				else
				{
					unk_0x4F47E317C74C543B(65);
				}
				if (iParam12 == 1)
				{
					unk_0x4F47E317C74C543B(iVar0);
				}
				else
				{
					unk_0x4F47E317C74C543B(-1);
				}
				if (func_581())
				{
					func_554("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 5 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_ONE_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 7 && !unk_0xACC32B78196FBC2A(sParam16))
				{
					unk_0x4ADC8B166E139423("FM_AE_TWO_INT");
					unk_0x26C23BE14F66F202(sParam16);
					unk_0x2AE954BA77A66307(iParam17);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 8 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
				{
					unk_0x4ADC8B166E139423("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x957E514A6E999374(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x2AE954BA77A66307(iParam10);
					}
					unk_0x26C23BE14F66F202(&(uParam2->f_104));
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x4ADC8B166E139423("FM_AE_CASH");
					unk_0x3788872A07BA04B3(iParam10, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x4ADC8B166E139423("FM_AE_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
					else
					{
						unk_0x4ADC8B166E139423("FM_NG_CASH");
						unk_0x3788872A07BA04B3(iParam10, 1);
						unk_0xD1D4F8D5470AFA4C();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xACC32B78196FBC2A(&(uParam2->f_104)))
					{
						func_543(&(uParam2->f_104));
					}
					else
					{
						func_554("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x4ADC8B166E139423("STRING");
					unk_0x28594D0D61DB1278(iParam14, 6);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (fParam13 != -1f)
				{
					unk_0x4ADC8B166E139423("NUMBER");
					unk_0x957E514A6E999374(fParam13, 1);
					unk_0xD1D4F8D5470AFA4C();
				}
				else if (iParam10 != -1)
				{
					unk_0x4F47E317C74C543B(iParam10);
				}
				else
				{
					func_554("");
				}
				if (uParam2->f_108 == 6)
				{
					func_554("");
				}
				else
				{
					func_554(&sParam4);
				}
				func_545(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xACC32B78196FBC2A(sParam8))
				{
					func_554("");
					func_554("");
				}
				else
				{
					unk_0x35395E05C7DB18D0(sParam8);
					unk_0x35395E05C7DB18D0(sParam8);
				}
				if (func_544(uParam2))
				{
					func_543("DPAD_FRIEND");
				}
				else if (func_542(uParam2))
				{
					func_543("DPAD_FRIEND");
				}
				else if (func_541(uParam2))
				{
					func_543("DPAD_CREW");
				}
				else
				{
					func_543("");
				}
				unk_0x6F06CF0E9AB02847();
			}
		}
	}
}

int func_558(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_559(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_438(iParam0)) && !func_105(iParam0))
	{
		iVar0 = func_58();
	}
	iVar1 = func_79(iParam0);
	if (!iVar1 == -1)
	{
		return func_77(iVar1);
	}
	return iVar0;
}

char* func_560(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x70350E94345B6F7B())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x70350E94345B6F7B())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_561(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_565(iParam3))
	{
		*fParam1 = (func_562(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_558(iParam3))
	{
		*fParam1 = (func_562(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_562(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_564(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x70350E94345B6F7B())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_563(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_563(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_564(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_565(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_566(int iParam0)
{
	int iVar0;
	
	iVar0 = func_569(iParam0);
	if (iVar0 == -1)
	{
		func_567(iParam0, 1);
		return 0;
	}
	Global_1656652[iVar0 /*5*/].f_4 = 1;
	return Global_1656652[iVar0 /*5*/].f_2;
}

void func_567(int iParam0, bool bParam1)
{
	if (!func_13(iParam0, 0, 1))
	{
		return;
	}
	if (func_569(iParam0) != -1)
	{
		return;
	}
	if (Global_1656815)
	{
		if (iParam0 == Global_1656815.f_1)
		{
			return;
		}
	}
	if (func_568(iParam0))
	{
		return;
	}
	if (Global_1656853 >= 32)
	{
		return;
	}
	Global_1656820[Global_1656853] = iParam0;
	Global_1656853++;
	if (bParam1)
	{
	}
}

int func_568(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656853)
	{
		if (Global_1656820[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_569(int iParam0)
{
	int iVar0;
	
	if (!func_13(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656813 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656813)
	{
		if (Global_1656652[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x87AF9112820EEC25(Global_1656652[iVar0 /*5*/].f_2) && unk_0x1B28B340344BA310(Global_1656652[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_570(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_570(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1656813)
	{
		return;
	}
	if (unk_0x87AF9112820EEC25(Global_1656652[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656652[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0xE1AFE5E1E834BBF0(Global_1656652[iParam0 /*5*/].f_2), 64);
			unk_0x8BC4D76163FA9E13(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x326ED9DD64134D76(Global_1656652[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1656813)
	{
		Global_1656652[iVar2 /*5*/] = { Global_1656652[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_571(&(Global_1656652[iVar2 /*5*/]));
	Global_1656813 = (Global_1656813 - 1);
}

void func_571(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_101();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x9315DBF7D972F07A())
	{
		uParam0->f_3 = unk_0x0A89FDFA763DCAED();
	}
}

struct<4> func_572(int iParam0)
{
	struct<4> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Global_2783300 = { func_141(iParam0) };
		if (unk_0x3EBD3AF4E5D7A08C())
		{
			if (func_532(Global_2783300))
			{
				if (!unk_0x3984FBEFE07835D4(&Global_2783300))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x818F829545200020(0))
		{
			return Var0;
		}
		if (func_576(&Global_2783300))
		{
			Global_2783230 = { func_574(iParam0) };
			func_573(&Global_2783230, &Var0);
		}
	}
	return Var0;
}

void func_573(var uParam0, var uParam1)
{
	unk_0xAF42AF0C81B996D0(uParam0, 35, uParam1);
}

struct<35> func_574(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_575(iParam0))
	{
		return Global_1575078[unk_0x9E2D6C50374FCFA9() /*35*/];
	}
	Var0 = { func_141(iParam0) };
	unk_0x4FFBF2C0D8249E45(&Var1, 35, &Var0);
	return Var1;
}

int func_575(int iParam0)
{
	if (iParam0 == unk_0x9E2D6C50374FCFA9())
	{
		return 1;
	}
	return 0;
}

int func_576(var uParam0)
{
	if (unk_0xC65B603E7942D0DB())
	{
		if (unk_0xF453DE81BDFDAE6F() && unk_0x8C992447292D600F(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_577(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_7(iParam0) || func_579(iParam0)) || func_6(iParam0))
		{
			return 0;
		}
	}
	if (!func_578(iParam0))
	{
		return 0;
	}
	if ((!func_586(iParam0) && Global_2689156[iParam0 /*453*/].f_245 == -1) && !func_585(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_578(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1853128[iParam0 /*888*/].f_139, 22);
}

int func_579(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10) || unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 9));
	}
	return 0;
}

int func_580(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_101())
	{
		return 0;
	}
	if (func_99(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1853128[iVar0 /*888*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_581()
{
	switch (func_245(unk_0x9E2D6C50374FCFA9()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_304(unk_0x9E2D6C50374FCFA9()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_105(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_245(unk_0x9E2D6C50374FCFA9()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_551(unk_0x9E2D6C50374FCFA9()))
	{
		return 1;
	}
	return 0;
}

void func_582(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(unk_0xA1087A6350CD9244(iVar0), 0, 1))
		{
			iVar1 = unk_0xA1087A6350CD9244(iVar0);
			if (!func_99(iVar1, 0))
			{
				if ((func_586(iVar1) || Global_2689156[iVar1 /*453*/].f_245 != -1) || func_585(iVar1))
				{
					if (func_583(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_583(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_101())
	{
		if (!bParam2)
		{
			if (func_584(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893548[iParam0 /*600*/].f_11 != func_101())
		{
			return iParam1 == Global_1893548[iParam0 /*600*/].f_11;
		}
	}
	return 0;
}

int func_584(int iParam0, int iParam1)
{
	if (iParam1 != func_101())
	{
		if (iParam0 != func_101())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 != func_101())
			{
				if (Global_1893548[iParam0 /*600*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_585(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_192 != 0;
}

int func_586(int iParam0)
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_13(unk_0x9E2D6C50374FCFA9(), 0, 1))
	{
		return 0;
	}
	if (!func_587(iParam0))
	{
		return 0;
	}
	if ((unk_0xA9E699D3DC7C0B15(iParam0, unk_0x9E2D6C50374FCFA9()) || func_245(iParam0) == 233) || func_245(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_588(unk_0x9E2D6C50374FCFA9());
	bVar1 = func_588(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_588(int iParam0)
{
	return func_589(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_589(var uParam0, int iParam1)
{
	return unk_0xE2D0C323A1AE5D85(*uParam0, iParam1);
}

void func_590(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x4F47E317C74C543B(iParam1);
		unk_0x4F47E317C74C543B(iParam2);
		unk_0x6F06CF0E9AB02847();
	}
}

void func_591(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1644206.f_2 == 0)
		{
			Global_1644206.f_2 = 1;
		}
	}
	else if (Global_1644206.f_2 == 1)
	{
		Global_1644206.f_2 = 0;
	}
}

void func_592()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1))
	{
		if (func_178())
		{
			func_194();
		}
	}
}

int func_593()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 0) && func_178())
	{
		return 1;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4656, 1) && func_178())
	{
		return 1;
	}
	return 0;
}

int func_594()
{
	if (func_178())
	{
		if (func_46(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_595()
{
	if (func_178())
	{
		if (func_59(Global_2703656.f_2414[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_596(int iParam0)
{
	if (Global_1644206.f_1 != Global_1644206)
	{
		Global_1644206.f_1 = Global_1644206;
	}
	if (Global_1644206 != iParam0)
	{
		Global_1644206 = iParam0;
	}
}

int func_597(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_642(iParam1);
	fVar4 = func_641();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_640())
		{
			if (func_639() > 0 && Global_1836355)
			{
				unk_0xF43060DF31ACEA55();
				unk_0x7ED668FC4CB0F4C4(fVar4);
				unk_0xAC765EF46E85A446(18);
				if (unk_0xF847447D4467709D())
				{
					unk_0x19DD1C202B338DF3();
				}
				unk_0xAC765EF46E85A446(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_628())
		{
			func_627(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_4659, 26))
	{
		func_627(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_38(&(uParam2->f_19)))
	{
		if (func_639() == 1)
		{
			func_626(bVar3, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_627(uParam0, uParam2, 0);
			unk_0xCED9E32812D6C7C7(&(Global_2810287.f_4660), 5);
		}
	}
	if (func_38(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xF847447D4467709D())
		{
			unk_0x19DD1C202B338DF3();
		}
		unk_0xAC765EF46E85A446(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_639() == 0 && !bParam5))
		{
			func_627(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_625();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xF43060DF31ACEA55();
				}
				unk_0xAC765EF46E85A446(18);
			}
			if (!unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_625();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xF43060DF31ACEA55();
					}
					unk_0xAC765EF46E85A446(18);
				}
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (func_626(bVar3, uParam0, 0))
				{
					func_590(uParam0, 0, 0);
					uVar1 = func_623(iParam1, &(Global_4718592.f_86757), bParam4);
					Var0 = { func_621(iParam1) };
					if (bParam4)
					{
						func_618(uParam0, uVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_612(uParam0, func_615(uParam2), func_613(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_606(uParam2);
						if (!unk_0xACC32B78196FBC2A(uParam6))
						{
							sVar6 = sParam6;
						}
						func_604(uParam0, sVar6, func_605(), -1);
					}
					else if (func_546())
					{
						uParam2->f_34 = Global_1836354;
						func_618(uParam0, uVar1, &Var0, 1, -1, Global_1836354, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_599(iParam1);
						uParam2->f_34 = Global_1836354;
						func_618(uParam0, uVar1, "", 0, iVar5, func_598(), 1);
					}
					else
					{
						iVar5 = func_599(iParam1);
						func_618(uParam0, uVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xCED9E32812D6C7C7(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xE2D0C323A1AE5D85(uParam2->f_33, 0))
			{
				Global_1836353 = uParam3;
				Global_1836352 = 1;
				unk_0x7ED668FC4CB0F4C4(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836354)
					{
						unk_0xB0550BC91B0159D6(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_598()
{
	return Global_1836354;
}

int func_599(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_603())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_602(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 20;
			}
			if (func_601(unk_0x9E2D6C50374FCFA9()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_600(unk_0x9E2D6C50374FCFA9()))
	{
		iVar0 = 2;
	}
	if (func_246())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_600(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 4;
}

bool func_601(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

bool func_602(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_603()
{
	return Global_4718592.f_1 == 0;
}

void func_604(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(sParam2))
		{
			func_543(sParam1);
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_543("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_605()
{
	switch (func_245(unk_0x9E2D6C50374FCFA9()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_606(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_245(unk_0x9E2D6C50374FCFA9()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_608())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_281(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_281(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_607(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_608()
{
	return (func_611() && func_609(func_610()));
}

int func_609(int iParam0)
{
	return func_191(iParam0, 1);
}

int func_610()
{
	return Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_11.f_35;
}

bool func_611()
{
	return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/] == 148;
}

void func_612(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (unk_0xACC32B78196FBC2A(uParam2))
		{
			func_543(uParam1);
		}
		else if (func_304(unk_0x9E2D6C50374FCFA9()) == 133)
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT_C");
			unk_0x26C23BE14F66F202(uParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			unk_0x4ADC8B166E139423("FM_AE_BRACKT");
			unk_0x26C23BE14F66F202(sParam1);
			unk_0x26C23BE14F66F202(sParam2);
			unk_0xD1D4F8D5470AFA4C();
		}
		func_543("");
		if (iParam3 != -1)
		{
			unk_0x4F47E317C74C543B(iParam3);
		}
		unk_0x6F06CF0E9AB02847();
	}
}

char* func_613(var uParam0)
{
	int iVar0;
	
	iVar0 = func_304(unk_0x9E2D6C50374FCFA9());
	if (func_614())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_303())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_614()
{
	return Global_1853001;
}

char* func_615(var uParam0)
{
	int iVar0;
	
	iVar0 = func_304(unk_0x9E2D6C50374FCFA9());
	if (func_614())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_617() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_617() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_303())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_616() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_616()
{
	return Global_2810287.f_5117;
}

int func_617()
{
	if (func_304(unk_0x9E2D6C50374FCFA9()) == 132)
	{
		return Global_2810287.f_5112;
	}
	return -1;
}

void func_618(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0xEA5DEA46C3EE64D3(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_554(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x4ADC8B166E139423(uParam1);
			unk_0x2AE954BA77A66307(iParam5);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_543(sParam1);
		}
		if (func_640() && iParam6)
		{
			if (func_620())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x4ADC8B166E139423("LBD_DPD_CNT");
			unk_0x2AE954BA77A66307(iVar0);
			unk_0x2AE954BA77A66307(iVar1);
			unk_0xD1D4F8D5470AFA4C();
		}
		else
		{
			func_543(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x4F47E317C74C543B(iParam4);
			if (func_619(unk_0x9E2D6C50374FCFA9()))
			{
				unk_0x4F47E317C74C543B(166);
			}
			else if (func_56())
			{
				unk_0x4F47E317C74C543B(166);
			}
		}
		unk_0x6F06CF0E9AB02847();
	}
}

int func_619(int iParam0)
{
	if (func_602(iParam0) || func_601(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_620()
{
	return Global_1836355;
}

struct<4> func_621(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_622(unk_0x9E2D6C50374FCFA9()) || func_600(unk_0x9E2D6C50374FCFA9()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_527, 16);
			break;
	}
	if (func_546() && unk_0x44859561F653DD4E())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_527, 16);
	}
	return Var0;
}

bool func_622(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 5;
}

char* func_623(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_546() || unk_0xACC32B78196FBC2A(uParam1)))
	{
		uVar0 = func_624();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xACC32B78196FBC2A(sParam1))
	{
		if (Global_1836595 == 1)
		{
			Global_1836595 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_624()
{
	if (unk_0x475BC8E76EB32BCF())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x71BE58F878F44990())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x759D0DAF85D68E42())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xAE3D31B16CA16E36())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_625()
{
	Global_43528 = 1;
}

bool func_626(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x528279F3F1EEF869("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x528279F3F1EEF869("mp_matchmaking_card");
	}
	return unk_0x0347CCBD719C8ADC(*uParam1);
}

void func_627(var uParam0, var uParam1, bool bParam2)
{
	unk_0xB0550BC91B0159D6(&(uParam1->f_33), 7);
	Global_1836353 = 0;
	func_536();
	Global_1836352 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_38(&(uParam1->f_19)))
		{
			func_37(&(uParam1->f_19));
			unk_0xB0550BC91B0159D6(&(Global_2810287.f_4660), 5);
		}
	}
	if (unk_0x0347CCBD719C8ADC(*uParam0))
	{
		unk_0x705B098546DEB18A(uParam0);
	}
	if (unk_0xE2D0C323A1AE5D85(uParam1->f_33, 0))
	{
		unk_0xB0550BC91B0159D6(&(uParam1->f_33), 0);
	}
	unk_0x7ED668FC4CB0F4C4(0f);
}

int func_628()
{
	if (func_638())
	{
		return 0;
	}
	if (func_517())
	{
		return 0;
	}
	if (!func_636())
	{
		return 0;
	}
	if (!func_503())
	{
		return 0;
	}
	if (func_635(8, -1))
	{
		return 0;
	}
	if (func_639() == 2)
	{
		return 0;
	}
	if (Global_2810287.f_4611)
	{
		return 0;
	}
	if (func_300())
	{
		return 0;
	}
	else if (!func_339(unk_0x9E2D6C50374FCFA9(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_634(1) || func_632(1)) || Global_22691.f_124) || Global_22691)
	{
		return 0;
	}
	if (unk_0xF1EC2C71FD1371B8())
	{
		return 0;
	}
	if (func_631() && Global_1965714 == 2)
	{
		return 0;
	}
	if (func_97(unk_0x9E2D6C50374FCFA9()) && !func_631())
	{
		return 0;
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (Global_1932197)
	{
		return 0;
	}
	if (func_630(0))
	{
		return 0;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (Global_1637027)
	{
		return 0;
	}
	if ((Global_1959929.f_718.f_5 || Global_1962755.f_718.f_5) || Global_1958957.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966718.f_724.f_5 || Global_1966718.f_744.f_724.f_5) || Global_1966718.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973496.f_726.f_5)
	{
		return 0;
	}
	if (func_629(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if ((Global_1637063 || Global_1637064) || Global_1637065)
	{
		return 0;
	}
	return 1;
}

bool func_629(int iParam0)
{
	if (iParam0 == func_101())
	{
		return 0;
	}
	return unk_0xE2D0C323A1AE5D85(Global_2689156[iParam0 /*453*/].f_319.f_4, 6);
}

bool func_630(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_2810287.f_5193.f_47, iParam0);
}

bool func_631()
{
	return (unk_0xE2D0C323A1AE5D85(Global_4718592.f_30, 12) && unk_0xE2D0C323A1AE5D85(Global_1965715, 0));
}

int func_632(bool bParam0)
{
	if (unk_0x78711A80544B2439())
	{
		if (!unk_0xF68107C40359970C(unk_0xE2D3D51028F0428A()))
		{
			if (func_633(unk_0xE2D3D51028F0428A()))
			{
				if (unk_0x4C1B8C5717647539(0, 25) || unk_0x4C1B8C5717647539(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (unk_0x4C1B8C5717647539(0, 19) || (!bParam0 && unk_0x0DBA73788F6E3C5F(0, 19)))
	{
		return 1;
	}
	if (unk_0x8FE9914D4872D601())
	{
		if (((unk_0x4C1B8C5717647539(0, 166) || unk_0x4C1B8C5717647539(0, 167)) || unk_0x4C1B8C5717647539(0, 168)) || unk_0x4C1B8C5717647539(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0DBA73788F6E3C5F(0, 166) || unk_0x0DBA73788F6E3C5F(0, 167)) || unk_0x0DBA73788F6E3C5F(0, 168)) || unk_0x0DBA73788F6E3C5F(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_633(int iParam0)
{
	int iVar0;
	
	if (unk_0x28FF2C2261B6CBA1())
	{
		if (!unk_0xF68107C40359970C(uParam0))
		{
			unk_0xA7E29842FA438ED6(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_634(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

bool func_635(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644209.f_203[iParam1];
			}
			break;
	}
	return unk_0xE2D0C323A1AE5D85(Global_1644209.f_1048, iParam0);
}

int func_636()
{
	if (func_637())
	{
		return 1;
	}
	if (unk_0xA829C9A2767AC8EF())
	{
		return 0;
	}
	if (unk_0xCB1EF1E7B77ADF4C() || unk_0xECD40FEF3CF43BDB())
	{
		return 0;
	}
	if (unk_0x6304243969F5A11A())
	{
		return 0;
	}
	return 1;
}

bool func_637()
{
	return Global_1574602;
}

bool func_638()
{
	return unk_0x320D1840B6DAA1CC() <= Global_22830.f_6135 + 100;
}

int func_639()
{
	return Global_1644209.f_68;
}

int func_640()
{
	if (Global_1836354 > 16)
	{
		return 1;
	}
	return 0;
}

float func_641()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x36E90400DA266164()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_643()
{
	if (func_646())
	{
		return 1;
	}
	if (func_6(unk_0x9E2D6C50374FCFA9()))
	{
		return 0;
	}
	if (func_614())
	{
		return 1;
	}
	if (func_438(unk_0x9E2D6C50374FCFA9()))
	{
		switch (func_304(unk_0x9E2D6C50374FCFA9()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_644(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_644(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_644(unk_0x9E2D6C50374FCFA9()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_644(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 4);
}

int func_645(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_438(unk_0x9E2D6C50374FCFA9()) && !func_105(unk_0x9E2D6C50374FCFA9())) && !func_551(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_111(unk_0x9E2D6C50374FCFA9(), 0) && func_105(unk_0x9E2D6C50374FCFA9()))
		{
			return 1;
		}
		if (func_510(unk_0x9E2D6C50374FCFA9()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_646()
{
	if (func_647(unk_0x9E2D6C50374FCFA9()))
	{
		return Global_1581327;
	}
	return 0;
}

int func_647(int iParam0)
{
	if (unk_0x9315DBF7D972F07A())
	{
		if (func_99(iParam0, 0))
		{
			return unk_0x62360EE837E523DC(iParam0);
		}
	}
	return 0;
}

void func_648()
{
	int iVar0;
	
	if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(iLocal_96)))
	{
		iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(iLocal_96));
		if (unk_0x0D01086B38EC256F(iVar0))
		{
			func_649(iVar0, 2);
		}
	}
	iLocal_96++;
	if (iLocal_96 >= unk_0x5D79167FED95F0B0())
	{
		iLocal_96 = 0;
	}
}

void func_649(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 0))
	{
		return;
	}
	if (func_38(&(Global_1836830.f_18)))
	{
		return;
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_2, iParam0))
	{
		if (Global_1836830 < iParam1 && unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 1))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 0);
			return;
		}
		if (Global_1836830 != 0)
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 1);
		}
		Global_1836830 = 0;
		Global_1836830.f_2 = 0;
	}
	unk_0xCED9E32812D6C7C7(&(Global_1836830.f_2), iParam0);
	bVar0 = true;
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (func_650(iParam0))
	{
		bVar0 = false;
	}
	if (func_99(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1836830++;
	}
}

bool func_650(int iParam0)
{
	return unk_0xE2D0C323A1AE5D85(Global_1893548[iParam0 /*600*/].f_1, 10);
}

void func_651(int iParam0, int iParam1)
{
	Local_1494[iParam0 /*5*/] = iParam1;
}

int func_652()
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2810287.f_5041 = { Var0 };
	iVar1 = 0;
	while (iVar1 < func_653())
	{
		Global_2810287.f_5041.f_38[iVar1] = -1;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		Local_148.f_534[iVar2 /*42*/].f_1 = func_101();
		iVar2++;
	}
	return 1;
}

int func_653()
{
	if (Global_2722494)
	{
		return 32;
	}
	return (32 - Global_2722495);
}

int func_654()
{
	return Local_127;
}

int func_655(int iParam0)
{
	return Local_1494[iParam0 /*5*/];
}

void func_656()
{
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 6))
	{
		func_681();
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 6);
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 7))
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 4) || unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 16))
		{
			if (((!unk_0xB7B9FCC926422B4B() && !unk_0xF847447D4467709D()) && !func_178()) && func_13(unk_0x9E2D6C50374FCFA9(), 1, 1))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 7);
				func_172("FME_PASINT", 30000);
				func_171(1);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 17))
		{
			if (func_344() && !func_356())
			{
				unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 17);
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 16);
			}
		}
	}
	if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 23))
	{
		if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xE2D0C323A1AE5D85(Global_2810287.f_836, 2)) && func_13(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !Global_75021) && !Global_59871) && !unk_0xF847447D4467709D())
		{
			if (func_679())
			{
				func_172("AMEV_GA_RP", -1);
				if (func_245(unk_0x9E2D6C50374FCFA9()) != 200)
				{
					func_171(1);
				}
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 23);
			}
		}
	}
	if (unk_0xF1EC2C71FD1371B8() && unk_0x1A76A9A82BD6228C() == 15)
	{
		if (func_453(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0xFE728873CE709085(1344549371))
			{
				unk_0x324093E167766493(1344549371);
			}
		}
		else if (unk_0xFE728873CE709085(1344549371))
		{
			unk_0x24DB748BF8E6BF86(1344549371);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 9))
	{
		if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xF847447D4467709D()) && !func_178()) && func_13(unk_0x9E2D6C50374FCFA9(), 1, 1)) && !func_355(unk_0x9E2D6C50374FCFA9(), 21)) && !func_355(unk_0x9E2D6C50374FCFA9(), 25))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 9);
			func_678(0);
			func_172("FME_TBL00", -1);
			func_171(1);
		}
	}
	if (func_438(unk_0x9E2D6C50374FCFA9()))
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 18))
		{
			if ((func_355(unk_0x9E2D6C50374FCFA9(), 21) && unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 20)) && !unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 19))
			{
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 18);
			}
		}
		else if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 18))
		{
			if (((((!unk_0xB7B9FCC926422B4B() && !unk_0xF847447D4467709D()) && !func_178()) && func_13(unk_0x9E2D6C50374FCFA9(), 1, 1)) && unk_0xE9E8955A780DDA01()) && !func_677())
			{
				unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 18);
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 19);
				func_172("AMTT_RPAS", -1);
				func_171(1);
			}
		}
	}
	if (((((func_438(unk_0x9E2D6C50374FCFA9()) && !func_7(unk_0x9E2D6C50374FCFA9())) && func_304(unk_0x9E2D6C50374FCFA9()) != 146) && !func_6(unk_0x9E2D6C50374FCFA9())) && !func_524(unk_0x9E2D6C50374FCFA9())) && !func_667())
	{
		if (func_452(func_304(unk_0x9E2D6C50374FCFA9())))
		{
			unk_0xEF2C918F9B332BFD(unk_0x9E2D6C50374FCFA9());
		}
		if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 22))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 22);
		}
		if (func_468(unk_0x9E2D6C50374FCFA9()) || func_446())
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 10))
			{
				if (func_665(func_304(unk_0x9E2D6C50374FCFA9())))
				{
					if (func_287(0) && !Global_2653189)
					{
						unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 9);
					}
					if (!Global_2653189)
					{
						func_450(1);
						unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 14);
					}
				}
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 10);
			}
		}
		if (func_453(unk_0x9E2D6C50374FCFA9()))
		{
			if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 11))
			{
				if (!Global_100026.f_8)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 12);
					func_448(1);
				}
				if (!func_664())
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 13);
					func_447();
				}
				if (!Global_2653189)
				{
					unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 14);
					if (func_287(0) && !Global_2653189)
					{
						unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 9);
					}
					func_450(1);
				}
				unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 11);
			}
		}
		else
		{
			func_662(0);
		}
	}
	else
	{
		func_662(1);
	}
	func_657();
	if (func_445(func_304(unk_0x9E2D6C50374FCFA9())) && !unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 21))
	{
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 21);
	}
	if (((func_344() && !func_356()) || func_355(unk_0x9E2D6C50374FCFA9(), 21)) || func_355(unk_0x9E2D6C50374FCFA9(), 25))
	{
		if (!unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 10))
		{
			unk_0xCED9E32812D6C7C7(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 10);
		}
	}
	else if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 10))
	{
		unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 10);
	}
}

void func_657()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_178())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_490(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 26))
				{
					unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 26);
				}
				func_658(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 26))
	{
		func_37(&(Global_1836830.f_22));
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 26);
	}
}

void func_658(int iParam0, int iParam1)
{
	if (!func_38(&(Global_1836830.f_22)))
	{
		func_2(&(Global_1836830.f_22), 0, 0);
	}
	else if (func_1(&(Global_1836830.f_22), iParam1, 0))
	{
		if (func_639() > 0)
		{
			func_661(iParam0);
			if (func_169("AMEV_LBD_HELP"))
			{
				unk_0x3410421C60BF7143(1);
			}
			func_37(&(Global_1836830.f_22));
		}
	}
	else
	{
		func_660(0);
		func_659();
	}
}

void func_659()
{
	Global_2810287.f_4599 = 0;
}

void func_660(int iParam0)
{
	Global_1644209.f_68 = iParam0;
}

void func_661(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			func_102(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_662(int iParam0)
{
	if ((unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 11) || (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 10) && iParam0)) || (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 22) && iParam0))
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 12))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 12);
			func_448(0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 13))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 13);
			func_663();
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 14) && !func_111(unk_0x9E2D6C50374FCFA9(), 0))
		{
			unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 14);
			func_450(0);
		}
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 11);
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 10);
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 22);
	}
}

void func_663()
{
	unk_0xB0550BC91B0159D6(&(Global_2810287.f_5031), 0);
}

bool func_664()
{
	return unk_0xE2D0C323A1AE5D85(Global_2810287.f_5031, 0);
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_453(unk_0x9E2D6C50374FCFA9());
		
		case 133:
			return (func_446() || func_666(func_303()));
		
		default:
	}
	return 0;
}

int func_666(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_667()
{
	if (((((((((func_676() || func_675()) || func_674()) || func_300()) || (func_673() && !unk_0x44859561F653DD4E())) || (func_670() && !func_669())) || Global_2656877) || Global_2656877.f_1 != 0) || Global_2656951 != 0) || (func_668() == 2 && !unk_0x44859561F653DD4E()))
	{
		return 1;
	}
	return 0;
}

int func_668()
{
	return Global_1057405;
}

bool func_669()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 27);
}

int func_670()
{
	if (func_672() || func_671())
	{
		return Global_1853128[unk_0x9E2D6C50374FCFA9() /*888*/].f_95 == 8;
	}
	return 0;
}

var func_671()
{
	return Global_2714627.f_735;
}

bool func_672()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627.f_2, 11);
}

bool func_673()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 5);
}

bool func_674()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 2);
}

bool func_675()
{
	return unk_0xE2D0C323A1AE5D85(Global_2714627, 20);
}

bool func_676()
{
	return Global_2714627.f_698;
}

bool func_677()
{
	return Global_2810287.f_5126 != -1;
}

void func_678(int iParam0)
{
	int iVar0;
	
	iVar0 = func_233(2536, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 0))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 0);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 1))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 1);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 2))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 3))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 3);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 4))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 4);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 5))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 6))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 6);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 7))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 7);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 8))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xE2D0C323A1AE5D85(iVar0, 9))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 9);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 10))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 10);
		}
		else if (!unk_0xE2D0C323A1AE5D85(iVar0, 11))
		{
			unk_0xCED9E32812D6C7C7(&iVar0, 11);
		}
	}
	func_224(2536, iVar0, -1, 1, 0);
}

int func_679()
{
	int iVar0;
	
	if (!func_38(&(Global_1836830.f_15)))
	{
		func_2(&(Global_1836830.f_15), 0, 0);
		Global_1836830.f_17 = 0;
	}
	else if (func_1(&(Global_1836830.f_15), 1000, 0))
	{
		if (unk_0x81F82FFBED0CACCA(unk_0x54F800F95142C750(Global_1836830.f_17)))
		{
			iVar0 = unk_0x6B01934FA503547F(unk_0x54F800F95142C750(Global_1836830.f_17));
			if (unk_0x0D01086B38EC256F(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_680(iVar0, 6))
				{
					if (vdist(func_31(unk_0x9E2D6C50374FCFA9()), func_31(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836830.f_17++;
		if (Global_1836830.f_17 >= 32)
		{
			Global_1836830.f_17 = 0;
			func_37(&(Global_1836830.f_15));
		}
	}
	return 0;
}

int func_680(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_369() != 0)
	{
		return 0;
	}
	if (!func_228(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853128[iVar0 /*888*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_681()
{
	unk_0xC0F70A3CDEC87ECE(5);
	func_683();
	unk_0x8576657A629C4B0A(1f);
	unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 8);
	func_682();
}

void func_682()
{
	if (Global_1941981)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1941982, 0))
		{
			unk_0xB0550BC91B0159D6(&Global_2819530, 0);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1941982, 1))
		{
			unk_0xB0550BC91B0159D6(&Global_2819530, 1);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1941982, 5))
		{
			unk_0xB0550BC91B0159D6(&Global_2819530, 5);
		}
		if (unk_0xEC32121F2E3875C8(-355737150))
		{
			unk_0x7E15597AA5F53F9A(-355737150, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-580979506))
		{
			unk_0x7E15597AA5F53F9A(-580979506, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-1426452475))
		{
			unk_0x7E15597AA5F53F9A(-1426452475, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(745417724))
		{
			unk_0x7E15597AA5F53F9A(745417724, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-1305304906))
		{
			unk_0x7E15597AA5F53F9A(-1305304906, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-1543175077))
		{
			unk_0x7E15597AA5F53F9A(-1543175077, 1, 0, 0);
		}
		if (unk_0xEC32121F2E3875C8(-811770997))
		{
			unk_0x7E15597AA5F53F9A(-811770997, 1, 0, 0);
		}
		Global_1941982 = 0;
	}
	Global_1941981 = 0;
}

void func_683()
{
	if (unk_0x87C0DA419F19FF57(Global_2810287.f_5189))
	{
		if (!Global_2810287.f_5189 == unk_0x69CE66B03B2184EB() && Global_2810287.f_5188 < 1f)
		{
			return;
		}
	}
	Global_2810287.f_5189 = -1;
	Global_2810287.f_5188 = 1f;
}

int func_684()
{
	if (func_685())
	{
		return 1;
	}
	return 0;
}

bool func_685()
{
	return Global_1836830.f_24;
}

int func_686()
{
	var uVar0;
	
	func_690(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			return 1;
		}
	}
	if (func_689())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_688())
	{
		return 1;
	}
	if (func_687(159))
	{
		if (!func_676())
		{
			return 1;
		}
	}
	if (func_687(157))
	{
		return 1;
	}
	if (!unk_0x20E4972CBF3DBE1B())
	{
		return 1;
	}
	if (func_455() != 0)
	{
		if (unk_0xB4C854DD86E40FDA(func_455()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_687(int iParam0)
{
	if (unk_0x32C089FAFDA9BA2F(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_688()
{
	return Global_2725224;
}

bool func_689()
{
	return Global_2714627.f_693;
}

void func_690(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x9418088815C89D59(1))
	{
		iVar1 = unk_0xB1D84E0EF6979085(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x92039F20B184AB4D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_691(iVar0);
					break;
				
				case 801199324:
					unk_0x92039F20B184AB4D(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_691(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	bool bVar3;
	
	if (unk_0x92039F20B184AB4D(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			uVar1 = unk_0x407E03586628E458(Var0.f_1);
			if (unk_0xE5965CDF24F93A9F(uVar1))
			{
				if (unk_0xD5C6B5E3B93A5EDC(iVar1, 0))
				{
					uVar2 = unk_0xB3FF0049C1FD38EC(iVar1, 0);
					if (unk_0x49E701A18D345B0E(uVar2, Var0.f_2) && unk_0xDD50B5A22807BAD4())
					{
						if (func_692(uVar2, &bVar3))
						{
							unk_0xF6FBA55B09506B23(uVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0x3D81769BEC61BFF8(&uVar2);
						}
					}
				}
			}
		}
	}
}

int func_692(int iParam0, var uParam1)
{
	if (unk_0xE5965CDF24F93A9F(uParam0))
	{
		if (!unk_0xA6A089369417736E(iParam0))
		{
			if (unk_0x58FDF0B505AA2260(iParam0))
			{
				if (!unk_0xF4AD75B2D964D8AB(unk_0x15CAA6D7B11F1A7C(iParam0)))
				{
					unk_0x2D58A6131679D82C(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x930E64CB0285CAEC(iParam0, 0))
		{
			if (unk_0x3A8B0F5B0E3DE13A(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_693()
{
	wait(0);
}

void func_694()
{
	var uVar0[4];
	int iVar1;
	var uVar2;
	
	func_180();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (unk_0xE2D0C323A1AE5D85(iLocal_122, iVar1) && !unk_0x78D9ADD511FEAD8B(uLocal_123[iVar1]))
		{
			unk_0xF889BDFCC181BA9F(uLocal_123[iVar1]);
			unk_0xCDBCC1BC1184B002(uLocal_123[iVar1]);
		}
		iVar1++;
	}
	func_441();
	func_493(0);
	func_698(132, 0, Local_127.f_8 == 6);
	func_461(22, 0);
	Global_2810287.f_5112 = -1;
	uVar0[0] = Local_127.f_3[0];
	uVar0[1] = Local_127.f_3[1];
	uVar0[2] = Local_127.f_3[2];
	uVar0[3] = Local_127.f_3[3];
	func_697(&(uVar0[0]));
	func_697(&(uVar0[1]));
	func_697(&(uVar0[2]));
	func_697(&(uVar0[3]));
	if (func_686())
	{
		Local_1493.f_5 = 5;
	}
	else if (unk_0xE2D0C323A1AE5D85(Local_127.f_2, 2))
	{
		Local_1493.f_5 = 6;
	}
	else if (Local_1493.f_5 != 1)
	{
		Local_1493.f_5 = 2;
	}
	Local_1493 = Local_127.f_724;
	Local_1493.f_1 = Local_127.f_725;
	Local_1493.f_4 = Local_127.f_726;
	Local_1493.f_3 = Local_127.f_728;
	Local_1493.f_10 = (unk_0x48352343BC5A41AE() - Local_1493.f_9);
	uVar2 = Local_127.f_712;
	if (Local_127.f_707)
	{
		uVar2 = Local_127.f_712 + 4;
	}
	if (!Global_262145.f_11763)
	{
		if (Local_1493.f_6 > 0)
		{
		}
	}
	Local_1493.f_6 = (Local_1493.f_6 + iLocal_101);
	if (unk_0xF1354995C6159A78() != -1)
	{
		func_695(Local_1493, uVar2, Local_1494[unk_0xF1354995C6159A78() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_486(1);
	unk_0xAFBDF6A5E54114C1();
}

void func_695(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	struct<13> Var1;
	struct<15> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	uVar0 = unk_0x05CBA41180F5D521();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_77852)
	{
		if (unk_0x3C57C2F07FEE34D2(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0xD36A8190BFC150EB(&Var1);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, func_696()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			Var2.f_14 = iParam3;
			unk_0xF8DA4028CD22E160(&Var2);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = uParam4;
			Var3.f_16 = uParam5;
			Var3.f_17 = uParam6;
			unk_0xA0462F398AA286DF(&Var3);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0xB6AA2AB935F596EA(&Var4);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_penned_in"))
		{
			unk_0x5C348C9363CD3372(&Param0);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0x7236B5A5338DA076(&Var5);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0x036357A803423CFF(&Var6);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0xBAF4C2BAD0B0EA1A(&Var7);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = uParam4;
			unk_0xBFC873F8C77D376A(&Var8);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0xA4ACC498BF04BBD2(&Var9);
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x0F8B888069FABC4B(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0xA68BA8226372EB99(&Var11);
			}
		}
		else if (unk_0x3C57C2F07FEE34D2(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0x1A6091D59D217DD9(&Var12);
		}
	}
}

char* func_696()
{
	switch (Global_2727578)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_697(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xE2D0C323A1AE5D85(*uParam0, iVar0))
		{
			unk_0xB0550BC91B0159D6(uParam0, iVar0);
		}
		else
		{
			unk_0xCED9E32812D6C7C7(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_698(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x9E2D6C50374FCFA9() != -1)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 13))
		{
			unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 13);
		}
		if (unk_0xE2D0C323A1AE5D85(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1, 14))
		{
			unk_0xB0550BC91B0159D6(&(Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1), 14);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_1836830.f_1, 21))
	{
		unk_0xB0550BC91B0159D6(&(Global_1836830.f_1), 21);
	}
	func_728();
	unk_0x6CE6C3A402C3E20C("DisableFlightMusic", 0);
	unk_0x6CE6C3A402C3E20C("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_727(func_304(unk_0x9E2D6C50374FCFA9()));
		func_461(func_462(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x9E2D6C50374FCFA9() != -1) && func_726(unk_0x9E2D6C50374FCFA9()) >= 12)
		{
			func_725(2548, -1);
			iVar1 = func_233(2548, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xCED9E32812D6C7C7(&Global_1836856, 5);
			}
		}
		func_724();
		func_723();
		func_722();
		if ((!func_107(unk_0x9E2D6C50374FCFA9()) && !func_177(unk_0x9E2D6C50374FCFA9())) && !func_469())
		{
			func_706();
		}
		func_705();
		if (!unk_0xE2D0C323A1AE5D85(Global_1944611.f_3, 0) && !unk_0xE2D0C323A1AE5D85(Global_1944611.f_3, 1))
		{
			func_681();
		}
		func_704();
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1811), 2);
		func_179();
		func_164();
	}
	if (unk_0xFE728873CE709085(1344549371))
	{
		unk_0x24DB748BF8E6BF86(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x9E2D6C50374FCFA9() != -1 && !func_355(unk_0x9E2D6C50374FCFA9(), 21)) && !func_355(unk_0x9E2D6C50374FCFA9(), 25)) && !func_111(unk_0x9E2D6C50374FCFA9(), 0))
		{
			func_450(0);
			func_448(0);
			if (!bParam1)
			{
				func_703();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_42(26, -1))
		{
			Global_2727408 = -1;
			func_39(26, -1);
		}
	}
	if (!func_699())
	{
		Global_2783191 = 1;
	}
}

int func_699()
{
	if (((((((!func_619(unk_0x9E2D6C50374FCFA9()) && !func_600(unk_0x9E2D6C50374FCFA9())) && func_304(unk_0x9E2D6C50374FCFA9()) != 146) && !func_702()) && !func_701()) && !func_700(Global_4718592.f_138117)) && !func_89()) && !unk_0xE2D0C323A1AE5D85(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_700(int iParam0)
{
	return iParam0 == 57;
}

int func_701()
{
	if (Global_4718592.f_86750 == Global_262145.f_9854)
	{
		return 1;
	}
	return 0;
}

int func_702()
{
	if ((Global_4718592 == 0 && unk_0x44859561F653DD4E()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_138117 > 0) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 15)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 18)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 19)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 29)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_4, 28)) || unk_0xE2D0C323A1AE5D85(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_703()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (unk_0xE2D0C323A1AE5D85(Global_2621865[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xE2D0C323A1AE5D85(Global_2621865[iVar0 /*26*/].f_13, 26))
			{
				unk_0xB0550BC91B0159D6(&(Global_2621865[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_704()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836830 = { Var0 };
}

void func_705()
{
	var uVar0;
	
	Global_1581327 = uVar0;
}

void func_706()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_24), &Global_2671504, 2);
	unk_0x049557638ADE4DF8(&(Global_2667222.f_26), &Global_2671506, 19);
	func_720();
	func_709(1, 1, 0);
	func_707();
}

void func_707()
{
	func_708(0, 0);
}

void func_708(int iParam0, int iParam1)
{
	Global_2667222.f_22 = iParam0;
	Global_2667222.f_23 = iParam1;
}

void func_709(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x049557638ADE4DF8(&(Global_2667222.f_45), &Global_2671525, 322);
	}
	else
	{
		Global_2667222.f_45 = { Global_2671525 };
		Global_2667222.f_45.f_49 = { Global_2671525.f_49 };
		Global_2667222.f_45.f_52 = Global_2671525.f_52;
		Global_2667222.f_45.f_53 = Global_2671525.f_53;
	}
	if (bParam0)
	{
		func_719();
	}
	if (!bParam2)
	{
		func_711(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_710(0);
	func_167();
}

void func_710(bool bParam0)
{
	if (bParam0)
	{
		Global_2667222.f_712 = 0;
	}
	else
	{
		Global_2667222.f_712 = 1;
	}
}

void func_711(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_718())
		{
			func_717();
		}
		Global_2667222.f_713.f_518 = unk_0x69CE66B03B2184EB();
		Global_2667222.f_713.f_504 = iParam1;
		Global_2667222.f_713.f_505 = iParam2;
		Global_2667222.f_713.f_506 = iParam10;
		func_715();
		func_465(8, 0, 0, 0, 0);
		Global_2667222.f_713.f_507 = iParam11;
		Global_2667222.f_713.f_512 = iParam3;
		Global_2667222.f_713.f_513 = iParam4;
		Global_2667222.f_713.f_510 = iParam5;
		Global_2667222.f_713.f_511 = iParam6;
		Global_2667222.f_713.f_514 = iParam7;
		Global_2667222.f_713.f_515 = iParam8;
		Global_2667222.f_713.f_516 = iParam9;
		Global_2667222.f_713.f_517 = iParam14;
		Global_2667222.f_713.f_508 = iParam12;
		Global_2667222.f_713.f_509 = iParam13;
		Global_2667222.f_1752 = 1;
	}
	else
	{
		func_712();
	}
}

void func_712()
{
	if (func_718() && !func_714())
	{
		func_717();
	}
	if (func_714())
	{
		func_713();
	}
	else
	{
		func_715();
		func_465(0, 0, 0, 0, 0);
		Global_2667222.f_1752 = 0;
		Global_2667222.f_1751 = 0;
	}
}

void func_713()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_713), &(Global_2667222.f_1232), 519);
	Global_2667222.f_489 = { Global_2667222.f_495 };
	if (unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		Global_2667222.f_1751 = 0;
	}
}

int func_714()
{
	if ((Global_2667222.f_1751 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_1232.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_715()
{
	if (func_718() && !func_714())
	{
		func_717();
	}
	func_716();
	Global_2667222.f_713 = 0;
}

void func_716()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667222.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_717()
{
	if (func_714())
	{
		if (Global_2667222.f_713.f_518 == Global_2667222.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518)
	{
		unk_0x049557638ADE4DF8(&(Global_2667222.f_1232), &(Global_2667222.f_713), 519);
		Global_2667222.f_495 = { Global_2667222.f_489 };
		Global_2667222.f_1751 = 1;
	}
}

int func_718()
{
	if ((Global_2667222.f_1752 && !unk_0x69CE66B03B2184EB() == Global_2667222.f_713.f_518) && unk_0x87C0DA419F19FF57(Global_2667222.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_719()
{
	unk_0x049557638ADE4DF8(&(Global_2667222.f_367), &Global_2671847, 121);
}

void func_720()
{
	func_721();
}

void func_721()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667222.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667222.f_2261 = 0;
}

void func_722()
{
	Global_2810287.f_5031 = 0;
}

void func_723()
{
	if (unk_0x9E2D6C50374FCFA9() != -1)
	{
		Global_1893548[unk_0x9E2D6C50374FCFA9() /*600*/].f_1 = 0;
	}
}

void func_724()
{
	int iVar0;
	
	iVar0 = unk_0x9E2D6C50374FCFA9();
	if (iVar0 != -1)
	{
		Global_1893548[iVar0 /*600*/] = -1;
	}
}

void func_725(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_233(iParam0, func_229(iParam1), 0);
	iVar0++;
	if (!func_232(iParam0))
	{
		func_224(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_225(iParam0, iVar0, iParam1, 1);
	}
}

int func_726(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_205.f_6;
}

int func_727(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_453(unk_0x9E2D6C50374FCFA9()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_728()
{
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 3) || unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 4))
	{
		if (unk_0xA829C9A2767AC8EF() || unk_0xCB1EF1E7B77ADF4C())
		{
			unk_0x5A7ACD1CDF509B0D(800);
		}
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 5))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1798), 5);
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 3))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1798), 3);
	}
	if (unk_0xE2D0C323A1AE5D85(Global_2810287.f_1798, 4))
	{
		unk_0xB0550BC91B0159D6(&(Global_2810287.f_1798), 4);
	}
	func_731(0);
	func_730(0);
	func_729(0);
}

void func_729(int iParam0)
{
	if (Global_2810287.f_4587 != iParam0)
	{
		Global_2810287.f_4587 = iParam0;
	}
}

void func_730(bool bParam0)
{
	if (Global_2810287.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2810287.f_4586 = bParam0;
	}
}

void func_731(int iParam0)
{
	if (Global_2810287.f_4584 != iParam0)
	{
		Global_2810287.f_4584 = iParam0;
	}
}

int func_732(struct<21> Param0)
{
	func_740(func_741(Param0), Param0);
	unk_0x6F2E4667A6039155(0);
	unk_0xC1F83F3B5F8E7D3B(func_739(8));
	func_736(0, -1, 0);
	func_734(132);
	unk_0x21F2B09183F31D02(&Local_127, 750, 0);
	unk_0x7157B1051528D729(&Local_1494, 161, 0);
	unk_0x2C07CBAFAC54A645(0);
	if (!func_733())
	{
		func_694();
	}
	if (unk_0x54E30A65F4FA4962())
	{
		unk_0x034E89ED97681AC2(&(Local_127.f_724), &(Local_127.f_725));
	}
	Local_1493.f_2 = unk_0x21E2C39591974468();
	Local_1493.f_9 = unk_0x48352343BC5A41AE();
	Local_1493.f_8 = unk_0x48352343BC5A41AE();
	func_461(22, 1);
	return 1;
}

int func_733()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x9315DBF7D972F07A())
		{
			return 0;
		}
		if (unk_0x72FEF2581032D369())
		{
			return 1;
		}
		if (func_689())
		{
			return 0;
		}
		if (func_687(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

void func_734(int iParam0)
{
	func_704();
	func_735();
	func_722();
	Global_1836830.f_4 = iParam0;
	Global_1836830.f_5 = iParam0;
	func_460(iParam0, -1);
	func_20(&(Global_1836830.f_18), 0, 0);
	Global_2810287.f_4656 = 0;
	Global_2726296[0] = func_101();
	Global_2726296[1] = func_101();
	Global_2726296[2] = func_101();
	Global_2726296[3] = func_101();
	Global_2726296[4] = func_101();
	func_164();
	if (!func_506(func_195()))
	{
		func_194();
	}
	if (func_344() && !func_356())
	{
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 16);
	}
	else
	{
		unk_0xCED9E32812D6C7C7(&(Global_1836830.f_1), 17);
	}
}

void func_735()
{
	var uVar0;
	
	Global_1836855 = uVar0;
}

int func_736(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x0EEB2C2CA48FB650();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_738();
			}
			else
			{
				return 0;
			}
		}
		if (!func_737())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x9315DBF7D972F07A())
				{
					if (!bParam2)
					{
						func_738();
					}
					else
					{
						return 0;
					}
				}
				if (func_689())
				{
					if (!bParam2)
					{
						func_738();
					}
					else
					{
						return 0;
					}
				}
				if (func_687(157))
				{
					if (!bParam2)
					{
						func_738();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xDB51AF48ABE62D4D())
			{
				if (!bParam2)
				{
					func_738();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x0EEB2C2CA48FB650();
	}
	if (iParam1 > -1)
	{
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x9315DBF7D972F07A())
		{
			if (!bParam2)
			{
				func_738();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xDB51AF48ABE62D4D())
	{
		if (!bParam2)
		{
			func_738();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_737()
{
	return Global_1575022;
}

void func_738()
{
	unk_0xAFBDF6A5E54114C1();
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_740(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x9315DBF7D972F07A())
	{
		func_738();
	}
	unk_0xD9B114A8D3A8319F(uParam0, 0, Param1.f_16);
}

int func_741(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_121(func_742(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_742(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

