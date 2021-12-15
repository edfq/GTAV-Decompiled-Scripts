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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
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
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82[1] = { 0 };
	char cLocal_83[16] = "";
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	char cLocal_107[16] = "";
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 16;
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
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
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
	var uLocal_171 = 0;
	var uLocal_172 = 0;
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
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
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
	var uLocal_213 = 0;
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
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
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
	var uLocal_255 = 0;
	var uLocal_256 = 0;
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
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	char cLocal_279[16] = "";
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_287 = 0;
	bool bLocal_288 = 0;
	bool bLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	struct<3000> Local_293 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_294 = { 0, 0, 0 } ;
	char cLocal_295[64] = "";
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
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
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_71 = 9999;
	iLocal_72 = 9999;
	fLocal_95 = 0.82f;
	fLocal_96 = 0.42f;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	unk_0x5B2BDC877F7E8802();
	unk_0x191DDA30577F440A(&Global_7668, 17);
	unk_0xC664C0067EEAB8D1(&Global_7669, 18);
	unk_0xC664C0067EEAB8D1(&Global_7669, 20);
	iLocal_275 = func_305(12);
	iLocal_276 = func_305(2);
	iLocal_277 = func_305(0);
	iLocal_79 = unk_0x5AD02BBC63E31E46();
	if (Global_77248)
	{
		func_302();
	}
	else
	{
		func_291();
	}
	if (!Global_19798.f_1 == 10)
	{
		if (Global_19798.f_1 > 3)
		{
			if (Global_19798.f_1 != 9)
			{
				Global_19798.f_1 = 7;
			}
		}
	}
	iLocal_104 = unk_0xDFB7BFA6482FEE1E();
	func_290(147, 1320);
	func_290(74, 180);
	func_290(75, 190);
	while (true)
	{
		wait(0);
		if (unk_0x234B68AC2E35ED5A(Global_7669, 18))
		{
			func_289();
			if (Global_19798.f_1 > 3)
			{
				Global_19798.f_1 = 8;
			}
			unk_0xC664C0067EEAB8D1(&Global_7669, 18);
			func_288();
		}
		if ((iLocal_89 == 1 && Global_19798.f_1 == 10) && Local_293.f_2999 == 1)
		{
			func_188();
		}
		if (Global_19798.f_1 != 9)
		{
			switch (Global_19798.f_1)
			{
				case 7:
					if (unk_0x234B68AC2E35ED5A(Global_7668, 16))
					{
						func_187();
					}
					else
					{
						func_184();
						if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
						{
							iLocal_105 = unk_0xDFB7BFA6482FEE1E();
							if ((iLocal_105 - iLocal_104) > 1000)
							{
								if (iLocal_106)
								{
									func_183();
								}
								else
								{
									func_165();
								}
							}
							if (iLocal_106)
							{
								func_164();
							}
						}
						else
						{
							func_165();
						}
					}
					if (!unk_0x234B68AC2E35ED5A(Global_7668, 9))
					{
						if (func_163(2, Global_19770, 0))
						{
							if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
							{
							}
							else if (Global_19741 == 0)
							{
								if (!unk_0x234B68AC2E35ED5A(Global_7669, 19))
								{
									func_161();
									func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_81 = 0;
									StringCopy(&cLocal_83, "", 16);
									func_159();
									Global_19778 = 0;
									iLocal_89 = 0;
									func_160(Global_19779, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_158(Global_19779, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_19786)
									{
										func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0x191DDA30577F440A(&Global_7668, 17);
										func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0x191DDA30577F440A(&Global_7668, 17);
										func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_19798.f_1 > 3)
									{
										Global_19798.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_89 == 1)
					{
						func_184();
						func_188();
					}
					else if (iLocal_87 == 0)
					{
						func_147();
						func_136();
					}
					else
					{
						if (timera() > 1500)
						{
							iLocal_291 = 0;
							while (iLocal_291 < 4)
							{
								if (unk_0xDA654EB115F9FF7D(&(Global_1878[Global_6983 /*29*/].f_3), &(Global_7506[iLocal_291 /*16*/])))
								{
									if (!unk_0xDA654EB115F9FF7D(&(Global_7506[iLocal_291 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_288 = true;
										iLocal_290 = iLocal_291;
									}
									else
									{
										bLocal_288 = false;
									}
								}
								iLocal_291++;
							}
							if (iLocal_88 == 0)
							{
								unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
								uLocal_74 = unk_0x4E45F52E0261CADA();
								while (!unk_0xCCBB1074CAAE000A(uLocal_74))
								{
									wait(0);
								}
								iLocal_75 = unk_0x399B6D3F817B71F1(uLocal_74);
								func_134();
							}
						}
						func_184();
						if (bLocal_289 == 1)
						{
							if (!Global_112293.f_18101.f_396)
							{
								if (!func_130(Global_19798, Global_6983))
								{
									Global_112293.f_18101.f_396 = 1;
								}
							}
						}
						if (func_130(Global_19798, Global_6983))
						{
							if (!Global_112293.f_18101.f_397)
							{
								if (bLocal_288 == 1)
								{
									if (func_129(Global_95217))
									{
										switch (func_127("AM_H_BBUDDY"))
										{
											case 2:
												func_125("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_112293.f_18101.f_397 = 1;
												break;
										}
										if (func_127("AM_H_BBUDDY1") == 0)
										{
											func_120("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (func_127("AM_H_BBUDDY1"))
										{
											case 2:
												func_125("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_112293.f_18101.f_397 = 1;
												break;
										}
										if (func_127("AM_H_BBUDDY") == 0)
										{
											func_120("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_88)
						{
							func_119();
						}
						else
						{
							func_85();
						}
					}
					if (func_163(2, Global_19766, 0))
					{
						func_84();
						Global_19776 = 1;
						if (Global_77248)
						{
							func_302();
						}
						else
						{
							func_291();
						}
						wait(0);
						if (Global_19798.f_1 > 3)
						{
							Global_19798.f_1 = 7;
						}
						StringCopy(&cLocal_83, "", 16);
						if (iLocal_87 == 1)
						{
							iLocal_87 = 0;
						}
						if (iLocal_88 == 1)
						{
							iLocal_88 = 0;
						}
						iLocal_89 = 0;
					}
					break;
				
				case 10:
					if (iLocal_100 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_288();
					break;
				
				default:
					break;
			}
			if (!Global_19798.f_1 == 8)
			{
				if ((Global_8276 - Global_8275) > Global_8277)
				{
					if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
					{
						if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
						{
							if (func_163(2, Global_19766, 0))
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
								{
									func_84();
								}
								else
								{
									func_84();
									if (!Global_19798.f_1 == 10)
									{
										func_288();
									}
									else if (Global_6983 == 132)
									{
										if (Global_2550920.f_1 || unk_0x234B68AC2E35ED5A(Global_7669, 20))
										{
											Global_19798.f_1 = 7;
											func_160(Global_19779, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
											{
												func_158(Global_19779, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_158(Global_19779, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x791B4C3811D53DFA(iLocal_79);
											iLocal_100 = 0;
										}
									}
									else
									{
										func_289();
										Global_19798.f_1 = 7;
										func_2();
										func_160(Global_19779, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
										{
											func_158(Global_19779, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_158(Global_19779, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x791B4C3811D53DFA(iLocal_79);
										iLocal_100 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			Global_19800 = 6;
			func_288();
		}
		if (func_1())
		{
			func_288();
		}
	}
}

int func_1()
{
	if (((Global_19798.f_1 == 1 || Global_19798.f_1 == 3) || Global_19798.f_1 == 0) || Global_19742 == 1)
	{
		Global_19785 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_19798.f_1 == 10 && !Global_19798.f_1 == 9)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
		{
			wait(750);
		}
		if (Global_19798.f_1 > 6)
		{
			func_160(Global_19779, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
			{
				func_158(Global_19779, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_158(Global_19779, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_7671 = 99;
			if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
			{
				if (Global_19786)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
			{
				if (Global_19786)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_19741 == 0)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x191DDA30577F440A(&Global_7668, 17);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x191DDA30577F440A(&Global_7668, 17);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x191DDA30577F440A(&Global_7668, 17);
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	switch (iLocal_100)
	{
		case 0:
			if (Global_6983 == 81)
			{
				if (Global_1573352 == 0)
				{
					Global_1573352 = 1;
				}
				if (unk_0xB743E5764FA5B809("LOWCAAU"))
				{
					unk_0x5C1A8A424CBD7EC6("LOWCAAU", 15);
					while (!unk_0x080D38ACEC5DC1A2(15))
					{
						wait(0);
					}
				}
				StringCopy(&cLocal_107, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0xB743E5764FA5B809(&Global_22148))
				{
					unk_0xBB3CDAB62C8773C8(&Global_22148, 1);
					while (!unk_0x080D38ACEC5DC1A2(1))
					{
						wait(0);
					}
				}
				cLocal_107 = { Global_117[Global_6983 /*10*/] };
				StringConCat(&cLocal_107, "_1", 16);
			}
			if (unk_0x49875FC4498CDA9A(&cLocal_107) || iLocal_278 == 1)
			{
				iLocal_101 = Global_22145;
				if (func_83(129))
				{
					iLocal_101 = Global_95798;
				}
			}
			else
			{
				iLocal_101 = Global_22144;
			}
			if ((iLocal_278 == 1 && unk_0xDA654EB115F9FF7D(&cLocal_279, "CELLPHONE_CHEAT")) && Global_77248 == 0)
			{
				if ((unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_SEAPLANE") || unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_DUELC")) || unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_BUBBLE"))
				{
					bLocal_93 = true;
				}
				if (bLocal_93)
				{
					if (func_82())
					{
						iLocal_94 = 0;
					}
					else
					{
						iLocal_94 = 1;
					}
				}
				if (iLocal_94 == 0)
				{
					iLocal_102 = unk_0xDFB7BFA6482FEE1E();
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(3);
					unk_0x35CA0C119E6A2A27("STRING");
					unk_0xC90B0312846BCF7A(&cLocal_83, -1);
					unk_0xD4B2C39F7AD5A6A6();
					func_81("CELL_300");
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_MONOC"))
					{
						func_81("CELL_MONOSIGNAL");
					}
					else if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_DIRECTOR"))
					{
						func_81("CELL_DRCT");
					}
					else
					{
						func_81("CELL_CHEAT");
					}
					func_81("CELL_195");
					unk_0x392841D58D2EED1D();
					func_160(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_100 = 1;
				}
				else
				{
					iLocal_100 = 2;
					iLocal_102 = unk_0xDFB7BFA6482FEE1E();
				}
			}
			else
			{
				iLocal_100 = 2;
				iLocal_102 = unk_0xDFB7BFA6482FEE1E();
			}
			break;
		
		case 1:
			iLocal_103 = unk_0xDFB7BFA6482FEE1E();
			if ((iLocal_103 - iLocal_102) > 1500)
			{
				iLocal_100 = 3;
			}
			break;
		
		case 2:
			iLocal_103 = unk_0xDFB7BFA6482FEE1E();
			if (iLocal_101 != Global_22144)
			{
				if (unk_0x964C4D363AF812CB(iLocal_79))
				{
					if (Global_2550920.f_37 == 0)
					{
						if (Global_19741)
						{
							unk_0x9B0169E27978C1A2(iLocal_79, "Dial_and_Remote_Ring", &Global_19787, 1);
						}
						else if ((iLocal_103 - iLocal_102) > 1700)
						{
							unk_0x9B0169E27978C1A2(iLocal_79, "Remote_Ring", &Global_19787, 1);
						}
					}
				}
			}
			else if ((func_83(130) || func_83(132)) || func_83(128))
			{
				if (unk_0x964C4D363AF812CB(iLocal_79))
				{
					if (Global_2550920.f_37 == 0)
					{
						if (Global_19741)
						{
							unk_0x9B0169E27978C1A2(iLocal_79, "Dial_and_Remote_Ring", &Global_19787, 1);
						}
						else if ((iLocal_103 - iLocal_102) > 1700)
						{
							unk_0x9B0169E27978C1A2(iLocal_79, "Remote_Ring", &Global_19787, 1);
						}
					}
				}
			}
			if ((iLocal_103 - iLocal_102) > iLocal_101)
			{
				if (iLocal_101 == Global_22144)
				{
					bLocal_90 = false;
					if ((Global_6983 == 130 || Global_6983 == 132) || Global_6983 == 128)
					{
						if (!unk_0x234B68AC2E35ED5A(Global_7669, 20))
						{
							bLocal_90 = true;
							if ((iLocal_103 - iLocal_102) > iLocal_101 + 10000)
							{
								if (Global_19798.f_1 == 10)
								{
									if (Global_6983 == 130)
									{
										Global_19798.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_90)
					{
						iLocal_100 = 4;
						unk_0x791B4C3811D53DFA(iLocal_79);
						iLocal_91 = 0;
						settimerb(0);
						if (func_80(Global_6983, Global_19798) == 0)
						{
							if (Global_6983 == 132)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(4);
								unk_0x9E3D03981E2E9AD9(0);
								unk_0x9E3D03981E2E9AD9(2);
								unk_0x35CA0C119E6A2A27("CELL_CONDFON");
								unk_0xA91D83F2CC1345A6(&Global_21140);
								unk_0xD4B2C39F7AD5A6A6();
								func_81("CELL_300");
								func_81("CELL_220");
								func_81("CELL_219");
								unk_0x392841D58D2EED1D();
							}
							else
							{
								func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(5), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(5), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_220", &(Global_1878[Global_6983 /*29*/].f_3), 0);
						}
						func_160(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_100 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_278 == 1)
			{
				if (unk_0xDA654EB115F9FF7D(&cLocal_279, "CELLPHONE_CHEAT") && Global_77248 == 0)
				{
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_MONOC"))
					{
						if (Global_8472 == 0)
						{
							Global_8472 = 1;
							Global_112293.f_14049[0 /*20*/].f_6 = 5;
							Global_112293.f_14049[2 /*20*/].f_6 = 5;
							Global_112293.f_14049[1 /*20*/].f_6 = 5;
							if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
							{
								if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
								{
									if (!unk_0x16B4C536089C3CAD(4, unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), 40f))
									{
										unk_0x8B84CFCA87CEA22E(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1) + Vector(2f, 0f, 0f), 4, 0.1f, 1, 0, 1065353216, 0);
									}
								}
							}
						}
						else
						{
							Global_8472 = 0;
						}
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_SUPJUM"))
					{
						func_79(0, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_HEALA"))
					{
						func_79(6, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_SLIDEYC"))
					{
						func_79(1, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_FASTR"))
					{
						func_79(2, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_WANTDN"))
					{
						func_79(9, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_WANTUP"))
					{
						func_79(8, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_WEATHER"))
					{
						func_79(5, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_FASTS"))
					{
						func_79(3, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_POWER"))
					{
						func_79(7, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_CHUTE"))
					{
						func_79(10, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_BANG"))
					{
						func_79(11, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_FLAMB"))
					{
						func_79(12, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_EXPMEL"))
					{
						func_79(13, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_ZEROG"))
					{
						func_79(14, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_INVINC"))
					{
						func_79(15, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_SLOWMO"))
					{
						func_79(16, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_SKYFA"))
					{
						func_79(17, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_DRUNK"))
					{
						func_79(18, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_DEADEYE"))
					{
						func_79(19, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_WEAPONS"))
					{
						func_79(4, 0);
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_BUZZARD"))
					{
						func_79(20, joaat("buzzard"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_COMET2"))
					{
						func_79(20, joaat("comet2"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_BMX"))
					{
						func_79(20, joaat("bmx"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_CADDY"))
					{
						func_79(20, joaat("caddy"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_DUSTER"))
					{
						func_79(20, joaat("duster"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_PCJ"))
					{
						func_79(20, joaat("pcj"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_RAPIDGT"))
					{
						func_79(20, joaat("rapidgt"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_STRETCH"))
					{
						func_79(20, joaat("stretch"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_STUNT"))
					{
						func_79(20, joaat("stunt"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_TRASH"))
					{
						func_79(20, joaat("trash"));
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_SANCHEZ"))
					{
						func_79(20, joaat("sanchez"));
					}
					if (func_82())
					{
						if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_SEAPLANE"))
						{
							func_79(20, joaat("dodo"));
						}
						if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_DUELC"))
						{
							func_79(20, joaat("dukes2"));
						}
						if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_BUBBLE"))
						{
							func_79(20, joaat("submersible2"));
						}
					}
					if (unk_0xDA654EB115F9FF7D(&Local_282, "CHEAT_DIRECTOR"))
					{
						iVar0 = func_44(0, 0, 119);
						if (iVar0 != 0)
						{
							func_42(iVar0);
						}
						else
						{
							func_41();
						}
					}
					func_36(0);
				}
				else if (unk_0xDA654EB115F9FF7D(&cLocal_279, "CELLPHONE_CHEAT"))
				{
					func_36(0);
				}
				else
				{
					func_35(&uLocal_110, 1, 0, &Local_282, 0, 1);
					Global_22146 = 0;
					func_34(&uLocal_110, Global_6983, &Global_22148, &cLocal_279, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_6983)
				{
					case 81:
						StringCopy(&Var1, "BENNY", 24);
						break;
					
					case 0:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&Var1, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&Var1, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&Var1, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&Var1, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&Var1, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&Var1, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&Var1, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&Var1, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&Var1, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&Var1, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&Var1, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&Var1, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&Var1, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&Var1, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&Var1, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&Var1, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&Var1, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&Var1, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&Var1, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&Var1, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&Var1, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&Var1, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&Var1, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&Var1, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&Var1, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&Var1, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&Var1, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&Var1, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&Var1, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&Var1, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&Var1, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&Var1, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&Var1, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&Var1, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&Var1, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&Var1, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&Var1, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&Var1, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&Var1, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&Var1, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&Var1, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&Var1, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&Var1, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&Var1, "GERALD", 24);
						break;
					
					default:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
				}
				func_35(&uLocal_110, 1, 0, &Var1, 0, 1);
				Global_22146 = 0;
				switch (Global_6983)
				{
					case 81:
						func_9(&uLocal_110, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_110, 12, &Global_22148, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar2 = unk_0xCA86FAB7FADC8353();
						if (iVar2 > 17 || iVar2 < 9)
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar2 > 8 && iVar2 < 13)
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar2 > 12 && iVar2 < 18)
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, &(Global_117[Global_6983 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_77248)
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, &(Global_117[Global_6983 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, &(Global_117[Global_6983 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_292 = unk_0xB36B8558948EA7A8(0, 100);
						if (iLocal_292 <= 50)
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_292 = unk_0xB36B8558948EA7A8(0, 100);
						if (iLocal_292 <= 50)
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_292 = unk_0xB36B8558948EA7A8(0, 100);
						if (iLocal_292 <= 50)
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_110, Global_6983, &Global_22148, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_110, Global_6983, &Global_22148, &(Global_117[Global_6983 /*10*/]), 2, 0, 0, 0, 0);
				}
				unk_0x191DDA30577F440A(&Global_7669, 31);
			}
			break;
		
		case 4:
			if (unk_0x964C4D363AF812CB(iLocal_79))
			{
				unk_0x9B0169E27978C1A2(iLocal_79, "Remote_Engaged", &Global_19787, 1);
			}
			if (timerb() > 1500)
			{
				if (iLocal_91 == 0)
				{
					if (Global_19798 == 2)
					{
						if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
						{
							func_4(unk_0x7D2B9E6A64637269(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_91 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(var uParam0, char* sParam1, int iParam2)
{
	unk_0x676B3404DACBD7C7(uParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_6(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_18572[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_112293.f_9083.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_77248 || func_33())
	{
		if (Global_6983 == 81)
		{
			if (Global_1573352 == 0)
			{
				Global_1573352 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1573352 == 1)
		{
			func_34(uParam0, iParam1, &Global_22148, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_22148, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_22148, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	if (iParam5 == 1)
	{
		Global_21137 = 1;
	}
	else
	{
		Global_21137 = 0;
	}
	Global_2621441 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_21126 = 0;
	if (Global_21125 == 0 || Global_21127 == 2)
	{
		if (Global_21125 != 0)
		{
			if (iParam1 > Global_21127)
			{
				if (Global_21132 == 0)
				{
					unk_0x75B41F5020877259(0);
					Global_19798.f_1 = 3;
					Global_21125 = 0;
					Global_21126 = 1;
					Global_21178 = 0;
					Global_21121 = 0;
					Global_21122 = 0;
					Global_21136 = 0;
					Global_21135 = 0;
					Global_19797 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6C2F471E0CF8D4CF())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_21201 = { Global_21195 };
		func_29();
		Global_20414 = { Global_20579 };
		Global_21131 = Global_21132;
		Global_21138 = Global_21139;
		Global_2621442 = Global_2621441;
		Global_21140 = { Global_21156 };
		Global_21133 = Global_21134;
		Global_22115 = Global_22116;
		Global_22123 = { Global_22129 };
		Global_22117 = Global_22118;
		Global_22119 = Global_22120;
		Global_22121 = Global_22122;
		Global_20744.f_370 = Global_22114;
		Global_20744.f_368 = Global_22112;
		Global_20744.f_369 = Global_22113;
		Global_21121 = Global_21122;
		if (Global_21131)
		{
			unk_0xC664C0067EEAB8D1(&Global_7668, 20);
			unk_0xC664C0067EEAB8D1(&Global_7669, 17);
			unk_0xC664C0067EEAB8D1(&Global_7670, 0);
			if (bParam2)
			{
				func_21();
				if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19798.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19764 == 1)
			{
				return 0;
			}
			if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
			{
				if (unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (func_20())
				{
					return 0;
				}
				if (unk_0xB800560AF60FDD2E(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()))
				{
					return 0;
				}
				if (unk_0xF6AD8282F4B81331(unk_0x7D2B9E6A64637269(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_77248)
				{
					if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
					{
						return 0;
					}
					if (unk_0x8A92595B8AA1D4E9(unk_0x7D2B9E6A64637269()))
					{
						return 0;
					}
					if (unk_0x3C4ADC6B88FA8A08(unk_0x1146A9AE09CE2B14(), 0))
					{
						return 0;
					}
				}
			}
			if (func_19())
			{
				return 0;
			}
			else
			{
				switch (Global_19798.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
				{
					return 0;
				}
			}
			func_18();
			Global_21135 = bParam2;
		}
		Global_21127 = iParam1;
		StringCopy(&Global_20744, sParam0, 24);
		Global_19991 = 0;
		func_17();
		func_12();
		return 1;
	}
	if (Global_21125 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21127 || iParam1 == Global_21127)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
	{
		return;
	}
	if (Global_21131)
	{
		MemCopy(&(Global_1710127.f_1), {Global_20744}, 4);
		Global_1710127 = Global_6983;
		Global_1710127.f_6 = Global_21135;
	}
}

int func_13()
{
	if (!Global_262145.f_28376)
	{
		return 0;
	}
	if (!Global_77248)
	{
		return 0;
	}
	if (unk_0x1146A9AE09CE2B14() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	return 1;
}

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

bool func_15(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19993[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x75B41F5020877259(0);
	Global_21125 = 1;
}

void func_18()
{
	Global_21178 = Global_21177;
	Global_21172 = Global_21173;
	Global_21219 = { Global_21207 };
	Global_21225 = { Global_21213 };
	Global_21180 = Global_21179;
	Global_21249 = { Global_21231 };
	Global_21255 = { Global_21237 };
	Global_21261 = { Global_21243 };
	Global_21267 = { Global_21273 };
	Global_6983 = Global_6984;
	Global_6985 = Global_6986;
	Global_21136 = Global_21137;
	Global_21138 = Global_21139;
	Global_21140 = { Global_21156 };
	Global_21129 = Global_21130;
	Global_22141 = 0;
	Global_21174 = 0;
	Global_21175 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7669, 16);
}

int func_19()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	int iVar0;
	int iVar1;
	
	if (Global_77248)
	{
		iVar0 = 0;
		unk_0xBDC364B886846D11(unk_0x7D2B9E6A64637269(), &iVar1, 1);
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC1DFA5E3535B69F6() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xC4D136140D260163(unk_0x7D2B9E6A64637269(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_21()
{
	if (func_28(14))
	{
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_22();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_22()
{
	func_23();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (func_26(Global_112293.f_2361.f_539.f_4321) != unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_25(unk_0x7D2B9E6A64637269());
			if (func_24(iVar0) && (!func_28(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_24(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(uParam0))
	{
		iVar1 = unk_0x6471F4759775FCA4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20414[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20414[iVar0 /*10*/].f_1), "", 24);
		Global_20414[iVar0 /*10*/].f_7 = 0;
		Global_20414[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20414.f_161 = -99;
	Global_20414.f_162 = { 0f, 0f, 0f };
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return unk_0x234B68AC2E35ED5A(Global_1379108.f_1048, iParam0);
}

void func_31()
{
	unk_0xBA3738C78262143F();
	Global_22136 = 0;
	if ((unk_0x8820F6FCD373F9F7() || Global_19798.f_1 == 9) || Global_19797 == 1)
	{
		unk_0x75B41F5020877259(0);
		Global_21125 = 6;
		Global_19798.f_1 = 3;
		return;
	}
	if (unk_0x6C2F471E0CF8D4CF())
	{
		unk_0x75B41F5020877259(1);
		Global_21125 = 6;
		return;
	}
}

void func_32(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20579 = { *uParam0 };
	Global_6984 = uParam1;
	StringCopy(&Global_21195, sParam2, 24);
	Global_22114 = iParam5;
	if (iParam3 == 0)
	{
		Global_22112 = 1;
		Global_22110 = 0;
	}
	else
	{
		Global_22112 = 0;
		Global_22110 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22113 = 1;
		Global_22111 = 0;
	}
	else
	{
		Global_22113 = 0;
		Global_22111 = 1;
	}
}

var func_33()
{
	return Global_1312878;
}

int func_34(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_21173 = 0;
	Global_21132 = 1;
	Global_21139 = 0;
	Global_21134 = 0;
	Global_22116 = 0;
	Global_22118 = 0;
	Global_22122 = 0;
	Global_21130 = 0;
	Global_21177 = 0;
	Global_21179 = 0;
	if (iParam5 == 1)
	{
		Global_21137 = 1;
	}
	else
	{
		Global_21137 = 0;
	}
	Global_2621441 = 1;
	return func_11(sParam3, iParam4, bParam8);
}

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9CF2691831C7455F(iParam2, 0);
			}
			else
			{
				unk_0x9CF2691831C7455F(iParam2, 1);
			}
		}
		if (!unk_0xECEC7528A52B4EE8(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x354924FCEF0851C8(iParam2, 0);
			}
			else
			{
				unk_0x354924FCEF0851C8(iParam2, 1);
			}
		}
	}
}

void func_36(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_39())
		{
			func_37(1, 1);
		}
		else
		{
			func_37(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_19())
	{
		Global_19798.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_39()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

bool func_40()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_41()
{
	float fVar0;
	
	unk_0x543F5B2D3F90CA6D(1);
	unk_0x203739B163D4D88E(2, 201);
	unk_0x203739B163D4D88E(2, 202);
	fVar0 = 0f;
	while ((!unk_0x86AF801D34E482FF(2, 201) && !unk_0x86AF801D34E482FF(2, 202)) || fVar0 < 1f)
	{
		set_warning_message_with_header("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, false, -1, 0, 0, true, 0);
		wait(0);
		fVar0 = (fVar0 + unk_0x7FF6ACE380ED166C());
	}
	unk_0x543F5B2D3F90CA6D(0);
	if (unk_0x86AF801D34E482FF(2, 201))
	{
		unk_0x8BA9BCDD56AA7115(0);
		Global_111238 = 1;
	}
}

void func_42(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0x543F5B2D3F90CA6D(1);
	unk_0x203739B163D4D88E(2, 201);
	fVar0 = 0f;
	while (!unk_0x86AF801D34E482FF(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_43(iParam0, 119);
		set_warning_message("FBR_GENERIC", 16384, 0, false, -1, "FBR_DIR_MODE", sVar1, true, 0);
		wait(0);
		fVar0 = (fVar0 + unk_0x7FF6ACE380ED166C());
	}
	unk_0x543F5B2D3F90CA6D(0);
}

char* func_43(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_44(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x636F1F53CC61D2C9(unk_0xC34DC2DC2423B647()) > 1)
		{
			return 2;
		}
	}
	if (func_78() && !func_28(14))
	{
		return 3;
	}
	if (func_77())
	{
		return 3;
	}
	if (func_76())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_75())
		{
			return 8;
		}
	}
	if (Global_96290)
	{
		return 3;
	}
	if (Global_31602)
	{
		return 8;
	}
	if (Global_31494)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (unk_0x636F1F53CC61D2C9(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (unk_0x636F1F53CC61D2C9(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x636F1F53CC61D2C9(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x636F1F53CC61D2C9(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_74(bParam1))
	{
		return 3;
	}
	if (unk_0x480609C7D10E7F3E(unk_0x7D2B9E6A64637269()) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
	{
		return 12;
	}
	if (func_73(Global_111318, 256))
	{
		return 3;
	}
	if (((func_72() || func_71()) || func_63()) || func_62())
	{
		return 5;
	}
	if (func_62())
	{
		return 5;
	}
	if (func_61())
	{
		return 5;
	}
	if (func_60())
	{
		return 5;
	}
	if (func_71())
	{
		return 5;
	}
	if (func_59() && !Global_111243)
	{
		return 8;
	}
	if (func_63())
	{
		return 5;
	}
	if (unk_0xF471787D45ADC2C1() || func_58())
	{
		return 4;
	}
	if (func_57())
	{
		return 4;
	}
	if (unk_0x419E13582192CFEA(unk_0x7D2B9E6A64637269()))
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			iVar0 = func_48(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0xA115FBF153CD1608(unk_0x7D2B9E6A64637269()) || unk_0xCD663CB6A9EAFB34(unk_0x7D2B9E6A64637269()) != -1)
			{
				return 11;
			}
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1) || Global_111340)
			{
				return 10;
			}
		}
	}
	if (Global_31600)
	{
		return 8;
	}
	if (Global_77246)
	{
		return 4;
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0x6C9038EC46DA62DE(unk_0x1146A9AE09CE2B14()) > 0 || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
		{
			return 6;
		}
		if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
		{
			return 8;
		}
		if (unk_0x674642CC58396437(unk_0x7D2B9E6A64637269()))
		{
			return 8;
		}
	}
	if (unk_0x02BFF15CAA701972())
	{
		return 7;
	}
	if (func_47())
	{
		return 8;
	}
	if (Global_31348)
	{
		return 3;
	}
	if (unk_0x79CC60D128756F16())
	{
		return 4;
	}
	if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_45(0))
		{
			return 8;
		}
	}
	if (unk_0xEA414596102A7989(unk_0x7D2B9E6A64637269()))
	{
		return 9;
	}
	return 0;
}

int func_45(bool bParam0)
{
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if ((((((((((!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) || !unk_0x0711D6B5B61B3EBC(unk_0x1146A9AE09CE2B14())) || unk_0x7F716EA884E75E49(unk_0x7D2B9E6A64637269())) || unk_0x3D28F4F0775C6C2A(unk_0x7D2B9E6A64637269(), 0)) || unk_0x97AEEA04505AFDC3(unk_0x7D2B9E6A64637269())) || unk_0xECA23EB9C2A5E83F(unk_0x7D2B9E6A64637269())) || unk_0x195733224245A760(unk_0x7D2B9E6A64637269())) || unk_0x674642CC58396437(unk_0x7D2B9E6A64637269())) || unk_0x397C98A5552886EB(unk_0x7D2B9E6A64637269())) || unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269())) || unk_0x4766CFEFD1C88C1A(unk_0x1146A9AE09CE2B14(), 1))
	{
		return 0;
	}
	if ((((((func_57() || Global_22531.f_4) || func_46()) || unk_0x9124C2E75A27AB77()) || unk_0xEDBF7C79EF634D6C()) || func_58()) || func_77())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x16371AB7527A7757())
		{
			return 0;
		}
	}
	return 1;
}

int func_46()
{
	if (!unk_0x02BFF15CAA701972())
	{
		return Global_96848.f_44 == 1;
	}
	return 0;
}

bool func_47()
{
	return Global_59279;
}

int func_48(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0x8954E9D0A9F6F8CF(unk_0x7D2B9E6A64637269(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 1))
	{
		return 5;
	}
	Var0 = { func_56(unk_0x1146A9AE09CE2B14()) };
	if (Global_111380[10 /*10*/].f_1)
	{
		if (vdist2(Var0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_8(2) && !func_8(17))
	{
		if (vdist2(Var0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (unk_0x09C4C80EA1D5B2F7(Var0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (vdist2(Var0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x09C4C80EA1D5B2F7(Var0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(Var0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x09C4C80EA1D5B2F7(Var0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(Var0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x09C4C80EA1D5B2F7(Var0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(Var0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x09C4C80EA1D5B2F7(Var0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (vdist2(Var0, 128.83f, -1297.98f, 29.3f) < 2f || vdist2(Var0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (vdist2(Var0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_55(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_49(iParam0);
	}
	iVar1 = unk_0xB71084333B418824(unk_0x7D2B9E6A64637269());
	if (iVar1 == 0)
	{
		return 0;
	}
	else if ((iVar1 == Global_111256 || iVar1 == Global_111257) || iVar1 == Global_111258)
	{
		return 9;
	}
	else if (iVar1 == Global_111247)
	{
		return 9;
	}
	else if (iVar1 == Global_111248)
	{
		return 9;
	}
	else if (iVar1 == Global_111251)
	{
		return 9;
	}
	else if (iVar1 == Global_111250)
	{
		return 9;
	}
	else if (iVar1 == Global_111252)
	{
		return 9;
	}
	else if (iVar1 == Global_111253)
	{
		return 9;
	}
	else if (iVar1 == Global_111254)
	{
		return 9;
	}
	else if (iVar1 == Global_111255)
	{
		return 9;
	}
	else if (iVar1 == Global_111259)
	{
		return 9;
	}
	else if (iVar1 == Global_111260)
	{
		return 9;
	}
	else if (iVar1 == Global_111261)
	{
		return 9;
	}
	else if (iVar1 == Global_111262)
	{
		return 9;
	}
	else if (iVar1 == Global_111263)
	{
		return 9;
	}
	else if ((iVar1 == Global_111264 || iVar1 == Global_111265) && func_8(67))
	{
		return 9;
	}
	iVar2 = 0;
	while (iVar2 <= (19 - 1))
	{
		if (iVar1 == Global_111266[iVar2])
		{
			return 9;
		}
		iVar2++;
	}
	return 0;
}

void func_49(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_52(24, &Global_111247);
	func_52(47, &Global_111248);
	func_52(10, &Global_111256);
	func_52(9, &Global_111257);
	func_52(8, &Global_111258);
	func_52(21, &Global_111259);
	func_52(11, &Global_111260);
	func_52(18, &Global_111264);
	func_52(19, &Global_111265);
	Global_111251 = unk_0xFA82BD1142427E0F(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_111250 = unk_0xFA82BD1142427E0F(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_111252 = unk_0xFA82BD1142427E0F(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_111253 = unk_0xFA82BD1142427E0F(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_111254 = unk_0xFA82BD1142427E0F(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_111255 = unk_0xFA82BD1142427E0F(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_111261 = unk_0xFA82BD1142427E0F(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_111262 = unk_0xFA82BD1142427E0F(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_111263 = unk_0xFA82BD1142427E0F(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_111266[iVar0] = unk_0xDE7E9AF51E2E18EB(func_50(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_50(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_51(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_52(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_53(iParam0) };
	*uParam1 = unk_0xFA82BD1142427E0F(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_53(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_54(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_54(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_54(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_54(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_54(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_54(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_54(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049961[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_54(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_54(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_54(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_54(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_54(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_54(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_54(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_54(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_54(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_54(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_54(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_54(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_54(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_54(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_54(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_54(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_54(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_54(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_54(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_54(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_54(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_54(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_54(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_54(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_54(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_54(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_54(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_54(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_54(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_54(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_54(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
		case 214:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_54(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_93355[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_90122)
	{
		if (Global_90122[iVar0 /*5*/] != -1)
		{
			if (Global_77517.f_109[Global_90122[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

bool func_57()
{
	return Global_1312902;
}

int func_58()
{
	if (unk_0x636F1F53CC61D2C9(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

bool func_60()
{
	return unk_0x234B68AC2E35ED5A(Global_77496, 9);
}

bool func_61()
{
	return unk_0x234B68AC2E35ED5A(Global_77496, 8);
}

int func_62()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0) && !unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (((((((((((((((unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_intro", 3) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_base", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x698F51FB33ADAF7B(unk_0x7D2B9E6A64637269(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	int iVar0;
	
	if (func_72())
	{
		iVar0 = 0;
		while (iVar0 < 56)
		{
			if (func_64(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_64(int iParam0)
{
	return func_65(iParam0, 20, 1);
}

int func_65(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x234B68AC2E35ED5A(Global_99422.f_1378[iParam0], iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_70() == 0)
		{
			return unk_0x234B68AC2E35ED5A(func_66(func_69(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_67(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_67(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_68();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_68()
{
	return Global_1312763;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10402;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12074;
}

int func_70()
{
	return Global_31345;
}

bool func_71()
{
	return Global_99422.f_364 > 0;
}

bool func_72()
{
	return Global_99422.f_363 > 0;
}

bool func_73(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_74(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

bool func_75()
{
	return Global_99409.f_1;
}

bool func_76()
{
	return Global_77515;
}

int func_77()
{
	if (Global_77508)
	{
		return 1;
	}
	else if (Global_62092 && !Global_62098)
	{
		return 1;
	}
	return 0;
}

int func_78()
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	return 1;
}

void func_79(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&Global_31596, iParam0);
	Global_31597 = iParam1;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_24[iParam1];
}

void func_81(char* sParam0)
{
	unk_0x35CA0C119E6A2A27(sParam0);
	unk_0xD4B2C39F7AD5A6A6();
}

int func_82()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					uVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&uVar0, 0);
					unk_0x0E32F508F8A14DE9(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(int iParam0)
{
	if ((Global_22239 || Global_22238) || Global_22240)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		if (Global_19798.f_1 == 10)
		{
			if (Global_6983 == iParam0)
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
	return 0;
}

void func_84()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Back", &Global_19787, 1);
	}
}

void func_85()
{
	if (Global_19776 == 0)
	{
		if (func_163(2, Global_19767, 0))
		{
			unk_0xC664C0067EEAB8D1(&Global_7669, 0);
			iLocal_88 = 0;
			func_161();
			Global_19776 = 1;
			unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
			uLocal_74 = unk_0x4E45F52E0261CADA();
			while (!unk_0xCCBB1074CAAE000A(uLocal_74))
			{
				wait(0);
			}
			iLocal_78 = unk_0x399B6D3F817B71F1(uLocal_74);
			if (func_114(Global_6983))
			{
				if (iLocal_78 == 0)
				{
					if (bLocal_288)
					{
						Global_22239 = 0;
						Global_22238 = 0;
						Global_22240 = 1;
						func_97();
					}
					else
					{
						Global_22239 = 0;
						Global_22238 = 0;
						Global_22240 = 0;
						func_97();
					}
				}
				if (iLocal_78 == 1)
				{
					if (bLocal_288)
					{
						Global_22239 = 0;
						Global_22238 = 0;
						Global_22240 = 0;
						func_97();
					}
					else if (func_87(Global_6983, Global_19798))
					{
						func_86();
						iLocal_88 = 1;
					}
					else
					{
						Global_22239 = 1;
						Global_22238 = 0;
						Global_22240 = 0;
						func_97();
					}
				}
				if (iLocal_78 == 2)
				{
					if (func_87(Global_6983, Global_19798))
					{
						func_86();
						iLocal_88 = 1;
					}
					else
					{
						Global_22239 = 1;
						Global_22238 = 0;
						Global_22240 = 0;
						func_97();
					}
				}
			}
			else
			{
				if (iLocal_78 == 0)
				{
					if (bLocal_288)
					{
						Global_22239 = 0;
						Global_22238 = 0;
						Global_22240 = 1;
						func_97();
					}
					else if (func_87(Global_6983, Global_19798))
					{
						func_86();
						iLocal_88 = 1;
					}
					else
					{
						Global_22239 = 1;
						Global_22238 = 0;
						Global_22240 = 0;
						func_97();
					}
				}
				if (iLocal_78 == 1)
				{
					if (func_87(Global_6983, Global_19798))
					{
						func_86();
						iLocal_88 = 1;
					}
					else
					{
						Global_22239 = 1;
						Global_22238 = 0;
						Global_22240 = 0;
						func_97();
					}
				}
			}
		}
	}
}

void func_86()
{
	func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_19786)
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_160(Global_19779, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(Global_19779, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_28(6) && !func_28(7))
	{
		if (func_88(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_93(6))
	{
		iVar1 = func_91(iParam0);
		iVar2 = func_91(iParam1);
		if (iVar1 != 7 && iVar2 != 7)
		{
			iVar3 = func_90(iVar1, iVar2);
			if (iVar3 != 10)
			{
				iVar4 = func_89(iVar3);
				if (iVar4 == 3 || iVar4 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_95226[iParam0 /*2*/];
	}
	return -1;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_91(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_96())
	{
		return func_92(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_96())
	{
		return 6;
	}
	if (iParam0 == 176)
	{
		return 6;
	}
	return 6;
}

var func_92(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_11;
}

int func_93(int iParam0)
{
	if (Global_42009 == 15)
	{
		return 0;
	}
	if (func_94(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_94(int iParam0)
{
	return func_95(iParam0, Global_42009);
}

int func_95(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_96()
{
	if (Global_31345 == 0 || Global_31345 == 2)
	{
		return 175;
	}
	return 161;
}

void func_97()
{
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 10;
		func_113();
		if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
		{
			if (!unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
				{
					if (!func_112())
					{
						func_111();
					}
				}
				else if (func_110() == 0)
				{
					func_111();
				}
			}
		}
		if (Global_8473[Global_19798 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_109();
			func_160(Global_19779, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (func_80(Global_6983, Global_19798) == 0)
	{
		func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_211", &(Global_1878[Global_6983 /*29*/].f_3), 0);
	}
	func_102();
	if (Global_77248)
	{
		func_98(1918, 1, -1);
	}
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_66(iParam0, func_67(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_101(iParam0))
	{
		func_100(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam2, 1);
	}
}

void func_99(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_67(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_67(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_67(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_67(uParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_67(uParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_67(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_67(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_67(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_67(uParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_67(uParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_67(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_67(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_67(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_67(uParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_67(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_67(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_67(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_67(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_67(uParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_67(uParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_67(uParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_67(uParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_67(uParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_67(uParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_67(uParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_67(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_67(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_67(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_67(uParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_67(uParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_67(uParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_67(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_67(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_67(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_67(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_67(uParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_67(uParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_67(uParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_67(uParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_67(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_67(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_67(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_67(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_67(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_67(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_67(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_67(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_67(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_67(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_67(uParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_67(uParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_67(uParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_67(uParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_67(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_100(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_67(uParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_101(int iParam0)
{
	if (Global_1390376)
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
			case 10441:
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
				return 1;
				break;
			}
	}
	return 0;
}

void func_102()
{
	char cVar0[24];
	
	if (Global_19781 == 1)
	{
		return;
	}
	if (Global_19798.f_1 < 4)
	{
		return;
	}
	while (!unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		if (Global_77248)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19798.f_1)
	{
		case 6:
			func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_108(Global_8273);
			if (Global_8273 == 1)
			{
				func_160(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19802), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19802;
			}
			else
			{
				func_160(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19803), -1082130432, -1082130432, -1082130432);
				Global_19778 = Global_19803;
			}
			if (Global_19786)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19986 == 0)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else if (Global_77248)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else
			{
				if (Global_19985 == 1)
				{
					if (Global_19786)
					{
						func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19786)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x191DDA30577F440A(&Global_7668, 17);
			}
			if (Global_77248)
			{
				func_106();
				unk_0xC664C0067EEAB8D1(&Global_7670, 9);
				func_160(Global_19779, "DISPLAY_VIEW", 1f, to_float(Global_19802), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_160(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_157(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19797 == 1)
			{
				func_105();
				func_160(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_81("CELL_300");
					func_81("CELL_217");
					func_81("CELL_217");
					unk_0x392841D58D2EED1D();
				}
				else if (func_80(Global_6983, Global_19798) == 0)
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_217", &(Global_1878[Global_6983 /*29*/].f_3), 0);
				}
				func_160(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21125 == 4 || Global_21125 == 3)
			{
				func_160(Global_19779, "SET_THEME", to_float(Global_112293.f_14049[Global_19798 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_105();
				if (Global_21138)
				{
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(4);
					unk_0x9E3D03981E2E9AD9(0);
					unk_0x9E3D03981E2E9AD9(2);
					unk_0x35CA0C119E6A2A27("CELL_CONDFON");
					unk_0xA91D83F2CC1345A6(&Global_21140);
					unk_0xD4B2C39F7AD5A6A6();
					func_81("CELL_300");
					func_81("CELL_219");
					func_81("CELL_219");
					unk_0x392841D58D2EED1D();
				}
				else
				{
					if (Global_21383)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_80(Global_6983, Global_19798) == 0)
					{
						func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), &cVar0, &(Global_1878[Global_6983 /*29*/].f_3), 0);
					}
				}
				func_160(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_103();
			break;
		
		default:
			break;
	}
}

void func_103()
{
	if (unk_0xDAE4BC89A198A6AF(Global_19779))
	{
		func_104();
		if (Global_19797 == 1)
		{
			if (Global_19786)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21172)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
		}
		else
		{
			func_157(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			if (unk_0x234B68AC2E35ED5A(Global_7668, 20))
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19741)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_104()
{
	if (Global_77248)
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	}
}

void func_105()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (Global_19798 == 0)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 1)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 2)
		{
			switch (Global_112293.f_14049[Global_19798 /*20*/].f_6)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19798 == 3)
		{
			switch (Global_4272755)
			{
				case 1:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 0);
					break;
				
				case 2:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 1);
					break;
				
				case 3:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 2);
					break;
				
				case 4:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 3);
					break;
				
				case 5:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 4);
					break;
				
				case 6:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 5);
					break;
				
				case 7:
					unk_0xC599540CFF3951FB(unk_0x1146A9AE09CE2B14(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_106()
{
	if (Global_77248)
	{
		if (func_107() == 0)
		{
			return;
		}
		func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x191DDA30577F440A(&Global_7668, 17);
	}
}

int func_107()
{
	return 0;
}

void func_108(int iParam0)
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
	
	Global_22193 = 0;
	Global_8273 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8237[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_28(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar2 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_81(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar2);
								unk_0x392841D58D2EED1D();
							}
							if (Global_2463492)
							{
								if (iVar1 == 14)
								{
									func_157(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7675[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7675[iVar1 /*15*/].f_4)
					{
						if (Global_8237[iVar0] == 0)
						{
							Global_8201[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_112293.f_14139[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_112293.f_14139[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_112293.f_14139[iVar3 /*104*/].f_99[Global_19798] == 1)
											{
												Global_22193++;
											}
										}
									}
									iVar3++;
								}
								func_157(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22193), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_77248)
								{
									iVar4 = 0;
									iVar4 = Global_4271213;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4271214[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4271214[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4271214[iVar5 /*104*/].f_99[Global_19798] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_157(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19798)
									{
										case 0:
											iVar6 = Global_43193;
											break;
										
										case 1:
											iVar6 = Global_43194;
											break;
										
										case 2:
											iVar6 = Global_43195;
											break;
										
										default:
											break;
									}
									func_157(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_157(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(Global_22188), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_81(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(Global_7674);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_81(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar7);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x234B68AC2E35ED5A(Global_7669, 3))
								{
									iVar8 = 42;
									Global_19988 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19988 = 0;
								}
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_81(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(iVar8);
								unk_0x392841D58D2EED1D();
							}
							else if (iVar1 == 8)
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_81(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if ((iVar1 == 23 && unk_0xDA654EB115F9FF7D(&(Global_7675[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x234B68AC2E35ED5A(Global_7669, 6))
							{
								unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
								unk_0x9E3D03981E2E9AD9(1);
								unk_0x9E3D03981E2E9AD9(iVar0);
								unk_0x9E3D03981E2E9AD9(Global_7675[iVar1 /*15*/].f_10);
								unk_0x9E3D03981E2E9AD9(0);
								func_81(&(Global_7675[iVar1 /*15*/]));
								unk_0x9E3D03981E2E9AD9(42);
								unk_0x392841D58D2EED1D();
							}
							else if (Global_7675[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627190.f_1;
								func_157(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_157(Global_19779, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7675[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7675[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8237[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_109()
{
	if (Global_8473[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8473[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8473[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8473[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 25);
	unk_0x191DDA30577F440A(&Global_7669, 11);
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
		{
			if (Global_19741 == 0)
			{
				if (Global_6983 != 128)
				{
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						if (Global_21125 != 2)
						{
						}
					}
				}
			}
		}
		if (func_28(14))
		{
			return 0;
		}
		if (unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
		{
			return 0;
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0xEF482630D7014464())
			{
				if (unk_0x0297E633EADA2182(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x32FBDF1C2B7942F9(unk_0x7D2B9E6A64637269()) || unk_0x0A0080A9EB535EC7(unk_0x7D2B9E6A64637269())) || unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14())) || (unk_0x14EE58C04CEAE6C4(unk_0x7D2B9E6A64637269()) && !(unk_0x234B68AC2E35ED5A(Global_4456448.f_37, 17) && (unk_0xE45310E861787FC2() || Global_1660795))))
		{
			return 0;
		}
		if (Global_111341)
		{
			return 0;
		}
	}
	if (Global_77248)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0xEF482630D7014464()))
	{
		iVar2 = 1;
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				uVar3 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
				if ((((((((unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(uVar3)) || unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(uVar3))) || unk_0x3DA0AF866B552ECB(unk_0x6471F4759775FCA4(uVar3))) || unk_0x6471F4759775FCA4(uVar3) == joaat("seashark")) || unk_0x6471F4759775FCA4(uVar3) == joaat("seashark2")) || unk_0x6471F4759775FCA4(uVar3) == joaat("rhino")) || unk_0x6471F4759775FCA4(uVar3) == joaat("submersible")) || unk_0x6471F4759775FCA4(uVar3) == joaat("submersible2")) || unk_0x6471F4759775FCA4(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4272757 || iVar2 == 1)
	{
		if (unk_0x636F1F53CC61D2C9(joaat("apptrackify")) > 0 || Global_112293.f_14049.f_89)
		{
			if (unk_0x636F1F53CC61D2C9(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		if (func_112() && unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()) && iVar1 == 0)
		{
			iVar2 = unk_0x228A4ED518554B3F(unk_0x7D2B9E6A64637269(), 0);
			if (Global_77248)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
			{
				iVar0 = 1;
			}
			if (!Global_19741)
			{
				if (Global_6983 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
						{
							if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
							{
							}
							else
							{
								if (Global_77248)
								{
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 0);
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 0);
									unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 0);
								}
								unk_0x191DDA30577F440A(&Global_7668, 11);
								unk_0x1D87FC6C9DC6D4B1(unk_0x7D2B9E6A64637269(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_112()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	struct<2> Var0;
	
	unk_0x3AEC124A3999B3D1(&Var0);
	if (Global_19751[Global_19743 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_19738 = 1;
	}
}

int func_114(int iParam0)
{
	int iVar0;
	
	if (func_115(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_650)
	{
		if (Global_112293.f_7686.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_7686.f_136)
	{
		if (Global_112293.f_7686[iVar0 /*15*/].f_6 == iParam0)
		{
			if (unk_0x234B68AC2E35ED5A(Global_112293.f_7686[iVar0 /*15*/].f_1, 7))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_90122[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_77517.f_109[Global_90122[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_116(Global_90158[iVar2 /*34*/].f_12, iParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_116(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 19:
			return func_118(uParam0, 8);
			break;
		
		case 14:
			return func_118(uParam0, 16);
			break;
		
		case 17:
			return func_118(uParam0, 32);
			break;
	}
	return func_117(uParam0, iParam1);
}

int func_117(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return unk_0x234B68AC2E35ED5A(uParam0, iParam1);
		
		default:
	}
	return 0;
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_119()
{
	if (Global_19776 == 0)
	{
		if (func_163(2, Global_19767, 0))
		{
			unk_0xC664C0067EEAB8D1(&Global_7669, 0);
			func_161();
			Global_19776 = 1;
			unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
			uLocal_74 = unk_0x4E45F52E0261CADA();
			while (!unk_0xCCBB1074CAAE000A(uLocal_74))
			{
				wait(0);
			}
			iLocal_78 = unk_0x399B6D3F817B71F1(uLocal_74);
			if (iLocal_78 == 0)
			{
				Global_22234[Global_19798] = 1;
				iLocal_87 = 0;
				Global_22239 = 0;
				Global_22238 = 1;
				Global_22240 = 0;
				func_97();
			}
			else
			{
				iLocal_88 = 0;
				func_134();
			}
		}
	}
}

void func_120(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_110933 && iParam1)
	{
		if (func_124(sParam0) && !unk_0x48AD110DC0A6BE25())
		{
			unk_0x66AE54CE92457FEE(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_112293.f_20408.f_145 - 2))
			{
				func_123(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_122((Global_112293.f_20408.f_145 - 1));
			Global_112293.f_20408.f_145 = (Global_112293.f_20408.f_145 - 1);
			func_121();
			return;
		}
		iVar0++;
	}
}

void func_121()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_112293.f_20408.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 0))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[0])
			{
				Global_112293.f_20408.f_146[0] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 1))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[1])
			{
				Global_112293.f_20408.f_146[1] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_112293.f_20408[iVar0 /*16*/].f_11, 2))
		{
			if (Global_112293.f_20408[iVar0 /*16*/].f_12 > Global_112293.f_20408.f_146[2])
			{
				Global_112293.f_20408.f_146[2] = Global_112293.f_20408[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_122(int iParam0)
{
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_112293.f_20408[iParam0 /*16*/].f_4), "", 16);
	Global_112293.f_20408[iParam0 /*16*/].f_8 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = -1;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = 0;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = 0;
}

void func_123(int iParam0, int iParam1)
{
	Global_112293.f_20408[iParam0 /*16*/] = { Global_112293.f_20408[iParam1 /*16*/] };
	Global_112293.f_20408[iParam0 /*16*/].f_4 = { Global_112293.f_20408[iParam1 /*16*/].f_4 };
	Global_112293.f_20408[iParam0 /*16*/].f_8 = Global_112293.f_20408[iParam1 /*16*/].f_8;
	Global_112293.f_20408[iParam0 /*16*/].f_10 = Global_112293.f_20408[iParam1 /*16*/].f_10;
	Global_112293.f_20408[iParam0 /*16*/].f_9 = Global_112293.f_20408[iParam1 /*16*/].f_9;
	Global_112293.f_20408[iParam0 /*16*/].f_11 = Global_112293.f_20408[iParam1 /*16*/].f_11;
	Global_112293.f_20408[iParam0 /*16*/].f_12 = Global_112293.f_20408[iParam1 /*16*/].f_12;
	Global_112293.f_20408[iParam0 /*16*/].f_13 = Global_112293.f_20408[iParam1 /*16*/].f_13;
	Global_112293.f_20408[iParam0 /*16*/].f_14 = Global_112293.f_20408[iParam1 /*16*/].f_14;
	Global_112293.f_20408[iParam0 /*16*/].f_15 = Global_112293.f_20408[iParam1 /*16*/].f_15;
}

var func_124(var uParam0)
{
	unk_0x4A4799828818A508(uParam0);
	return unk_0x0222F263F70347A8(0);
}

void func_125(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_126(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_126(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xDA654EB115F9FF7D(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(&(Global_112293.f_20408[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_112293.f_20408.f_145 < 9)
	{
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_4), sParam1, 16);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_8 = (unk_0xDFB7BFA6482FEE1E() + iParam3);
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_9 = iParam5;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_11 = iParam6;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_12 = uParam2;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_13 = iParam7;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_14 = iParam8;
		Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = ((unk_0xDFB7BFA6482FEE1E() + iParam3) + iParam4);
		}
		else
		{
			Global_112293.f_20408[Global_112293.f_20408.f_145 /*16*/].f_10 = -1;
		}
		Global_112293.f_20408.f_145++;
		func_121();
	}
}

int func_127(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D(sParam0, &Global_110936))
	{
		return 1;
	}
	if (func_128(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_128(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_112293.f_20408.f_145)
	{
		if (unk_0xDA654EB115F9FF7D(sParam0, &(Global_112293.f_20408[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	return 0;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	return 0;
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_95217 != -1 && unk_0x234B68AC2E35ED5A(Global_90158[Global_95217 /*34*/].f_15, 15)) && unk_0x234B68AC2E35ED5A(Global_95218, iParam1))
	{
		if (Global_95216 != 5 || func_133() == Global_95217)
		{
			if (!func_132(12))
			{
				if (func_131(iParam0, iParam1, &iVar1) && func_89(iVar1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_131(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_91(iParam0);
	iVar1 = func_91(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_90(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

bool func_132(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_95225, iParam0);
}

int func_133()
{
	return Global_77510;
}

void func_134()
{
	settimera(0);
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 8;
	}
	if (Global_19786)
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	iLocal_87 = 1;
	func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_114(Global_6983))
	{
		if (bLocal_288)
		{
			func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, &(Global_7506[iLocal_290 /*16*/].f_8), 0, 0, 0, 0);
			func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_289)
			{
				if (func_135(Global_6983, Global_19798))
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_87(Global_6983, Global_19798))
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_289)
			{
				if (func_135(Global_6983, Global_19798))
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_87(Global_6983, Global_19798))
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_288)
	{
		func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, &(Global_7506[iLocal_290 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_289)
		{
			if (func_135(Global_6983, Global_19798))
			{
				func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_87(Global_6983, Global_19798))
			{
				func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_289)
	{
		if (func_135(Global_6983, Global_19798))
		{
			func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_87(Global_6983, Global_19798))
		{
			func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_160(Global_19779, "DISPLAY_VIEW", 18f, to_float(iLocal_75), -1082130432, -1082130432, -1082130432);
	func_158(Global_19779, "SET_HEADER", &(Global_1878[Global_6983 /*29*/].f_3), 0, 0, 0, 0);
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
	{
		if (func_8(90) && !func_8(20))
		{
			return 0;
		}
	}
	if (!func_93(6))
	{
		if (func_131(iParam0, iParam1, &iVar1) && func_89(iVar1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_136()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0x366E7F593105797F(0, 22, 1);
	}
	if (func_163(2, Global_19767, 0))
	{
		func_161();
		Global_19776 = 1;
		unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
		uLocal_74 = unk_0x4E45F52E0261CADA();
		while (!unk_0xCCBB1074CAAE000A(uLocal_74))
		{
			wait(0);
		}
		iVar0 = unk_0x399B6D3F817B71F1(uLocal_74);
		iLocal_80 = Global_8459[iVar0];
		uLocal_82[0] = unk_0x3A2A8DAFDBEC4CFE(&(Global_8376[iLocal_80 /*5*/]));
		if (unk_0xDA654EB115F9FF7D(uLocal_82[0], "*"))
		{
			cLocal_83 = { Global_8442[Global_19798 /*4*/] };
			iLocal_81 = unk_0xA3A3E3B836DB6D5B(&cLocal_83);
		}
		else if (unk_0xA3A3E3B836DB6D5B(&cLocal_83) < 14)
		{
			StringConCat(&cLocal_83, uLocal_82[0], 16);
			iLocal_81++;
		}
		unk_0x704F8697BB515627(Global_19779, "SET_HEADER");
		unk_0x35CA0C119E6A2A27("STRING");
		unk_0xC90B0312846BCF7A(&cLocal_83, -1);
		unk_0xD4B2C39F7AD5A6A6();
		unk_0x392841D58D2EED1D();
	}
	if (func_163(2, 178, 0))
	{
		func_84();
		Global_19776 = 1;
		if (unk_0xA3A3E3B836DB6D5B(&cLocal_83) > 0)
		{
			StringCopy(&cLocal_83, unk_0xE803430E29ABF0DE(&cLocal_83, 0, (iLocal_81 - 1)), 16);
			iLocal_81 = (iLocal_81 - 1);
		}
		unk_0x704F8697BB515627(Global_19779, "SET_HEADER");
		unk_0x35CA0C119E6A2A27("STRING");
		unk_0xC90B0312846BCF7A(&cLocal_83, -1);
		unk_0xD4B2C39F7AD5A6A6();
		unk_0x392841D58D2EED1D();
	}
	if (func_163(2, Global_19770, 0))
	{
		if (!func_146())
		{
			func_161();
			Global_8442[Global_19798 /*4*/] = { cLocal_83 };
			Global_6983 = 144;
			iLocal_278 = 0;
			if (Global_19798.f_1 > 3)
			{
				Global_19798.f_1 = 10;
				func_113();
				if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
				{
					if (!unk_0x0297E633EADA2182(unk_0x7D2B9E6A64637269()))
					{
						if (unk_0xFBDBB3A9CC11C141(unk_0x7D2B9E6A64637269(), 0))
						{
							if (!func_112())
							{
								func_111();
							}
						}
						else if (func_110() == 0)
						{
							func_111();
						}
					}
				}
			}
			iVar1 = 0;
			iLocal_92 = 0;
			iVar3 = func_96();
			while (iVar1 < iVar3)
			{
				iVar4 = iVar1;
				if (iVar4 != 146)
				{
					sVar2 = unk_0x3A2A8DAFDBEC4CFE(&(Global_117[iVar1 /*10*/].f_4));
					if (unk_0xDA654EB115F9FF7D(sVar2, &cLocal_83))
					{
						if ((func_145(iVar4, Global_19798) == 1 || func_145(iVar4, Global_19798) == 2) || unk_0xDA654EB115F9FF7D(sVar2, unk_0x3A2A8DAFDBEC4CFE(&(Global_117[130 /*10*/].f_4))))
						{
							Global_6983 = iVar4;
						}
						else
						{
							iLocal_92 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_6983 == 144 && iLocal_278 == 0) && iLocal_92 == 0)
			{
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(4);
				unk_0x9E3D03981E2E9AD9(0);
				unk_0x9E3D03981E2E9AD9(3);
				unk_0x35CA0C119E6A2A27("STRING");
				unk_0xC90B0312846BCF7A(&cLocal_83, -1);
				unk_0xD4B2C39F7AD5A6A6();
				func_81("CELL_300");
				func_81("CELL_211");
				func_81("CELL_195");
				unk_0x392841D58D2EED1D();
				func_160(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_278 = 0;
				iVar5 = 0;
				while (iVar5 < 37)
				{
					sVar6 = unk_0x3A2A8DAFDBEC4CFE(&(Global_6987[iVar5 /*14*/]));
					if (unk_0xDA654EB115F9FF7D(sVar6, &cLocal_83))
					{
						iLocal_278 = 1;
						cLocal_279 = { Global_6987[iVar5 /*14*/].f_4 };
						Local_282 = { Global_6987[iVar5 /*14*/].f_8 };
					}
					iVar5++;
				}
				if (iLocal_278 == 0)
				{
					iLocal_86 = unk_0xA3A3E3B836DB6D5B(&cLocal_83);
					if (iLocal_86 > 6)
					{
						StringCopy(&(uLocal_286[0]), unk_0xE803430E29ABF0DE(&cLocal_83, 0, 1), 4);
						StringCopy(&(uLocal_286[1]), unk_0xE803430E29ABF0DE(&cLocal_83, 1, 2), 4);
						StringCopy(&(uLocal_286[2]), unk_0xE803430E29ABF0DE(&cLocal_83, 2, 3), 4);
						StringCopy(&(uLocal_286[3]), unk_0xE803430E29ABF0DE(&cLocal_83, 3, 4), 4);
						StringCopy(&(uLocal_286[4]), unk_0xE803430E29ABF0DE(&cLocal_83, 4, 5), 4);
						StringCopy(&(uLocal_286[5]), unk_0xE803430E29ABF0DE(&cLocal_83, 5, 6), 4);
						if (((unk_0xDA654EB115F9FF7D(&(uLocal_286[0]), "1") && unk_0xDA654EB115F9FF7D(&(uLocal_286[1]), "9")) && unk_0xDA654EB115F9FF7D(&(uLocal_286[2]), "9")) && unk_0xDA654EB115F9FF7D(&(uLocal_286[3]), "9"))
						{
							iVar7 = func_144(&(uLocal_286[4]));
							iVar8 = func_144(&(uLocal_286[5]));
							func_143(iVar7, iVar8);
							iLocal_278 = 1;
						}
						if (iLocal_278 == 0)
						{
							if (iLocal_86 == 10 || iLocal_86 == 7)
							{
								if (iLocal_86 == 10)
								{
									StringCopy(&(uLocal_286[0]), unk_0xE803430E29ABF0DE(&cLocal_83, 3, 4), 4);
									StringCopy(&(uLocal_286[1]), unk_0xE803430E29ABF0DE(&cLocal_83, 4, 5), 4);
									StringCopy(&(uLocal_286[2]), unk_0xE803430E29ABF0DE(&cLocal_83, 5, 6), 4);
									StringCopy(&(uLocal_286[3]), unk_0xE803430E29ABF0DE(&cLocal_83, 6, 7), 4);
									StringCopy(&(uLocal_286[4]), unk_0xE803430E29ABF0DE(&cLocal_83, 7, 8), 4);
									StringCopy(&(uLocal_286[5]), unk_0xE803430E29ABF0DE(&cLocal_83, 8, 9), 4);
									StringCopy(&(uLocal_286[6]), unk_0xE803430E29ABF0DE(&cLocal_83, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_286[0]), unk_0xE803430E29ABF0DE(&cLocal_83, 0, 1), 4);
									StringCopy(&(uLocal_286[1]), unk_0xE803430E29ABF0DE(&cLocal_83, 1, 2), 4);
									StringCopy(&(uLocal_286[2]), unk_0xE803430E29ABF0DE(&cLocal_83, 2, 3), 4);
									StringCopy(&(uLocal_286[3]), unk_0xE803430E29ABF0DE(&cLocal_83, 3, 4), 4);
									StringCopy(&(uLocal_286[4]), unk_0xE803430E29ABF0DE(&cLocal_83, 4, 5), 4);
									StringCopy(&(uLocal_286[5]), unk_0xE803430E29ABF0DE(&cLocal_83, 5, 6), 4);
									StringCopy(&(uLocal_286[6]), unk_0xE803430E29ABF0DE(&cLocal_83, 6, 7), 4);
								}
								if ((((unk_0xDA654EB115F9FF7D(&(uLocal_286[0]), "5") && unk_0xDA654EB115F9FF7D(&(uLocal_286[1]), "5")) && unk_0xDA654EB115F9FF7D(&(uLocal_286[2]), "5")) && unk_0xDA654EB115F9FF7D(&(uLocal_286[3]), "0")) && unk_0xDA654EB115F9FF7D(&(uLocal_286[4]), "1"))
								{
									iVar9 = func_144(&(uLocal_286[5]));
									iVar10 = func_144(&(uLocal_286[6]));
									func_143(iVar9, iVar10);
									iLocal_278 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (func_145(Global_6983, Global_19798) == 2 || Global_6983 == 130)
				{
					func_142(Global_6983, Global_19798, 1);
					if (Global_6983 == 130)
					{
						if (!func_145(130, 0) == 1)
						{
							func_138(130, 4, 1);
							func_138(130, 3, 0);
						}
						if (Global_77248)
						{
							if (!func_137(130, 3))
							{
								func_138(130, 3, 1);
							}
						}
					}
				}
				if (func_80(Global_6983, Global_19798) == 0)
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6983 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), "CELL_211", &(Global_1878[Global_6983 /*29*/].f_3), 0);
				}
			}
			func_102();
		}
	}
}

int func_137(int iParam0, int iParam1)
{
	if (func_145(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8354 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		func_21();
		if (iParam1 == 4)
		{
			func_141(iParam0, 0, 1);
			func_141(iParam0, 1, 1);
			func_141(iParam0, 2, 1);
			func_142(iParam0, 0, 1);
			func_142(iParam0, 1, 1);
			func_142(iParam0, 2, 1);
		}
		else
		{
			if (func_145(iParam0, iParam1) == 1 && func_80(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_141(iParam0, iVar0, 1);
			func_142(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2544210.f_6705)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2544210.f_6704)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77248)
			{
				if (iParam1 != 4)
				{
					if (Global_19798 != iParam1)
					{
						Global_8327[iParam1 /*4*/] = { func_140(iParam0) };
						Global_8344[iParam1] = 1;
						Global_8349[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19798)
					{
					}
					else
					{
						Global_8278[1 /*6*/] = { func_140(iParam0) };
						Global_8278[1 /*6*/].f_5 = iParam1;
						func_139();
					}
				}
				else
				{
					Global_8278[1 /*6*/] = { func_140(iParam0) };
					Global_8278[1 /*6*/].f_5 = iParam1;
					func_139();
				}
			}
			else
			{
				Global_8278[1 /*6*/] = { func_140(iParam0) };
				Global_8278[1 /*6*/].f_5 = iParam1;
				func_139();
			}
		}
	}
}

void func_139()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x3A2A8DAFDBEC4CFE(&(Global_1878[Global_8354 /*29*/].f_7)), 64);
	if (Global_8373 == 0)
	{
		unk_0xAD97A7EDCF347FBB("");
		StringCopy(&cVar1, unk_0x3A2A8DAFDBEC4CFE(&(Global_8278[1 /*6*/])), 64);
		sVar2 = unk_0x3A2A8DAFDBEC4CFE("CELL_253");
		unk_0x1664AA1696810AD6(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xAD97A7EDCF347FBB("CELL_255");
		unk_0x1896EC0B030A48A2(&(Global_8278[1 /*6*/]));
		unk_0x1664AA1696810AD6(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC664C0067EEAB8D1(&Global_7668, 0);
}

struct<4> func_140(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_3;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 + iParam1);
	iVar0 = (20 - iVar0);
	iVar0 += 5;
	switch (iVar0)
	{
		case 7:
			StringCopy(&cLocal_279, "ANS_RAN1", 16);
			StringCopy(&Local_282, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_279, "ANS_RAN2", 16);
			StringCopy(&Local_282, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_279, "ANS_RAN3", 16);
			StringCopy(&Local_282, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_279, "ANS_RAN4", 16);
			StringCopy(&Local_282, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_279, "ANS_RAN5", 16);
			StringCopy(&Local_282, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_279, "ANS_RAN6", 16);
			StringCopy(&Local_282, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_279, "ANS_RAN7", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_279, "ANS_RAN8", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_279, "ANS_RAN9", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_279, "ANS_RAN10", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_279, "ANS_RAN1", 16);
			StringCopy(&Local_282, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_279, "ANS_RAN2", 16);
			StringCopy(&Local_282, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_279, "ANS_RAN3", 16);
			StringCopy(&Local_282, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_279, "ANS_RAN4", 16);
			StringCopy(&Local_282, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_279, "ANS_RAN5", 16);
			StringCopy(&Local_282, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_279, "ANS_RAN6", 16);
			StringCopy(&Local_282, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_279, "ANS_RAN7", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_279, "ANS_RAN8", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_279, "ANS_RAN9", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_279, "ANS_RAN8", 16);
			StringCopy(&Local_282, "ANSWER_FX", 24);
			break;
	}
}

int func_144(char* sParam0)
{
	if (unk_0xDA654EB115F9FF7D(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0xDA654EB115F9FF7D(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_145(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_12[iParam1];
}

int func_146()
{
	if (Global_77248)
	{
		return 0;
	}
	if (unk_0xCAD1755E530A6012(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xF4D8C7957C89929B(unk_0x1146A9AE09CE2B14()))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_147()
{
	if (Global_19777)
	{
		if (timera() > 50)
		{
			Global_19777 = 0;
		}
	}
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (unk_0x86AF801D34E482FF(2, 180))
		{
			switch (Global_19778)
			{
				case 0:
					func_155();
					Global_19778 = 1;
					break;
				
				case 1:
					func_155();
					Global_19778 = 2;
					break;
				
				case 2:
					func_155();
					func_153();
					Global_19778 = 3;
					break;
				
				case 3:
					func_155();
					Global_19778 = 4;
					break;
				
				case 4:
					func_155();
					Global_19778 = 5;
					break;
				
				case 5:
					func_155();
					func_153();
					Global_19778 = 6;
					break;
				
				case 6:
					func_155();
					Global_19778 = 7;
					break;
				
				case 7:
					func_155();
					Global_19778 = 8;
					break;
				
				case 8:
					func_155();
					func_153();
					Global_19778 = 9;
					break;
				
				case 9:
					func_155();
					Global_19778 = 10;
					break;
				
				case 10:
					func_155();
					Global_19778 = 11;
					break;
				
				case 11:
					func_155();
					func_153();
					Global_19778 = 0;
					break;
				}
		}
		if (unk_0x86AF801D34E482FF(2, 181))
		{
			switch (Global_19778)
			{
				case 0:
					func_151();
					func_148();
					Global_19778 = 11;
					break;
				
				case 1:
					func_151();
					Global_19778 = 0;
					break;
				
				case 2:
					func_151();
					Global_19778 = 1;
					break;
				
				case 3:
					func_151();
					func_148();
					Global_19778 = 2;
					break;
				
				case 4:
					func_151();
					Global_19778 = 3;
					break;
				
				case 5:
					func_151();
					Global_19778 = 4;
					break;
				
				case 6:
					func_151();
					func_148();
					Global_19778 = 5;
					break;
				
				case 7:
					func_151();
					Global_19778 = 6;
					break;
				
				case 8:
					func_151();
					Global_19778 = 7;
					break;
				
				case 9:
					func_151();
					func_148();
					Global_19778 = 8;
					break;
				
				case 10:
					func_151();
					Global_19778 = 9;
					break;
				
				case 11:
					func_151();
					Global_19778 = 10;
					break;
				}
			}
	}
	if (Global_19777 == 0)
	{
		if (func_163(2, Global_19773, 0))
		{
			func_155();
			Global_19777 = 1;
			settimera(0);
			switch (Global_19798.f_1)
			{
				case 6:
					if (Global_19778 < (34 - 1))
					{
						Global_19778++;
					}
					break;
				
				case 5:
					if (Global_19778 < 3)
					{
						Global_19778++;
					}
					break;
				}
		}
		if (func_163(2, Global_19772, 0))
		{
			func_151();
			Global_19777 = 1;
			settimera(0);
			if (Global_19778 > 0)
			{
				Global_19778 = (Global_19778 - 1);
			}
		}
		if (func_163(2, Global_19774, 0))
		{
			func_148();
			Global_19777 = 1;
			settimera(0);
			if (Global_19778 > 3)
			{
				Global_19778 = (Global_19778 - 4);
			}
		}
		if (func_163(2, Global_19775, 0))
		{
			func_153();
			Global_19777 = 1;
			settimera(0);
			if (Global_19778 < 8)
			{
				Global_19778 += 4;
			}
		}
	}
}

void func_148()
{
	func_160(Global_19779, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_149();
}

void func_149()
{
	if (func_150())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
	}
}

int func_150()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_77248)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0x264EE27FDED1DCA1();
	iVar1 = unk_0x5F95E51ABC3FC59A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4272757 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_151()
{
	func_160(Global_19779, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_152();
}

void func_152()
{
	if (func_150())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(3);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(4);
		}
	}
}

void func_153()
{
	func_160(Global_19779, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_154();
}

void func_154()
{
	if (func_150())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(2);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(1);
		}
	}
}

void func_155()
{
	func_160(Global_19779, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
	func_156();
}

void func_156()
{
	if (func_150())
	{
		if (Global_19989 == 0)
		{
			unk_0x63E7B2FCB3D2ECBB(4);
		}
		else
		{
			unk_0x63E7B2FCB3D2ECBB(3);
		}
	}
}

void func_157(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	if (!unk_0xAB6A270F84A8781E(sParam7))
	{
		func_81(sParam7);
	}
	if (!unk_0xAB6A270F84A8781E(sParam8))
	{
		func_81(sParam8);
	}
	if (!unk_0xAB6A270F84A8781E(sParam9))
	{
		func_81(sParam9);
	}
	if (!unk_0xAB6A270F84A8781E(iParam10))
	{
		func_81(iParam10);
	}
	if (!unk_0xAB6A270F84A8781E(iParam11))
	{
		func_81(iParam11);
	}
	unk_0x392841D58D2EED1D();
}

void func_158(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	func_81(sParam2);
	if (!unk_0xAB6A270F84A8781E(sParam3))
	{
		func_81(sParam3);
	}
	if (!unk_0xAB6A270F84A8781E(sParam4))
	{
		func_81(sParam4);
	}
	if (!unk_0xAB6A270F84A8781E(sParam5))
	{
		func_81(sParam5);
	}
	if (!unk_0xAB6A270F84A8781E(sParam6))
	{
		func_81(sParam6);
	}
	unk_0x392841D58D2EED1D();
}

void func_159()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	
	StringCopy(&(Global_8376[0 /*5*/]), "CELL_900", 16);
	Global_8376[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_8376[1 /*5*/]), "CELL_901", 16);
	Global_8376[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_8376[2 /*5*/]), "CELL_902", 16);
	Global_8376[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_8376[3 /*5*/]), "CELL_903", 16);
	Global_8376[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_8376[4 /*5*/]), "CELL_904", 16);
	Global_8376[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_8376[5 /*5*/]), "CELL_905", 16);
	Global_8376[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_8376[6 /*5*/]), "CELL_906", 16);
	Global_8376[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_8376[7 /*5*/]), "CELL_907", 16);
	Global_8376[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_8376[8 /*5*/]), "CELL_908", 16);
	Global_8376[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_8376[9 /*5*/]), "CELL_909", 16);
	Global_8376[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_8376[10 /*5*/]), "CELL_910", 16);
	Global_8376[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_8376[11 /*5*/]), "CELL_911", 16);
	Global_8376[11 /*5*/].f_4 = 11;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar0[iVar1] = 0;
		iVar1++;
	}
	if (Global_8459[0] == 0)
	{
	}
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (iVar1 == Global_8376[iVar2 /*5*/].f_4)
			{
				if (iVar0[iVar1] == 0)
				{
					Global_8459[iVar1] = iVar2;
					unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
					unk_0x9E3D03981E2E9AD9(11);
					unk_0x9E3D03981E2E9AD9(iVar1);
					func_81(&(Global_8376[iVar2 /*5*/]));
					unk_0x392841D58D2EED1D();
					iVar0[iVar1] = 1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_160(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x704F8697BB515627(uParam0, sParam1);
	unk_0x9E3D03981E2E9AD9(round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x9E3D03981E2E9AD9(round(fParam6));
	}
	unk_0x392841D58D2EED1D();
}

void func_161()
{
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "Menu_Accept", &Global_19787, 1);
		func_162();
	}
}

void func_162()
{
	if (func_150())
	{
		unk_0x63E7B2FCB3D2ECBB(5);
	}
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x86AF801D34E482FF(iParam0, iParam1) || (iParam2 == 1 && unk_0x96DF114B59E81B9C(iParam0, iParam1)))
	{
		if (unk_0x3640D836D145B814())
		{
			if (unk_0x4793CFF25F0D14B5() == 0 || (unk_0xFEABE4F1525A0A08() && unk_0x0D901EFDFD7EF9D5(2)))
			{
				return 0;
			}
		}
		if (unk_0xA300BD5F71A8C704() || unk_0xD76BEAE1A33E3251())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_164()
{
	if (func_163(2, Global_19766, 0))
	{
		iLocal_106 = 0;
		unk_0x191DDA30577F440A(&Global_7669, 0);
		func_84();
		Global_19776 = 1;
		if (Global_77248)
		{
			func_302();
		}
		else
		{
			func_291();
		}
		wait(0);
		if (Global_19798.f_1 > 3)
		{
			Global_19798.f_1 = 7;
		}
		StringCopy(&cLocal_83, "", 16);
	}
}

void func_165()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_19776 == 0)
	{
		if (func_163(2, Global_19767, 0))
		{
			if (!func_146())
			{
				Global_22239 = 0;
				Global_22238 = 0;
				Global_22240 = 0;
				iLocal_278 = 0;
				func_161();
				Global_19776 = 1;
				if (iLocal_69 > 0)
				{
					unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
					uLocal_74 = unk_0x4E45F52E0261CADA();
					while (!unk_0xCCBB1074CAAE000A(uLocal_74))
					{
						wait(0);
					}
					iLocal_77 = unk_0x399B6D3F817B71F1(uLocal_74);
					bVar0 = false;
					if (unk_0x0B4295B1608BB934())
					{
						if (Global_77248)
						{
							if (iLocal_77 < iLocal_72)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_77 == iLocal_71 || iLocal_77 > iLocal_71)
						{
							bVar0 = true;
						}
					}
					if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_293.f_2936 = (iLocal_77 - iLocal_71);
						func_170();
					}
					else
					{
						if (iLocal_77 < 0)
						{
							iLocal_77 = 0;
						}
						Global_6983 = Global_19804[iLocal_77];
						if (Global_19981 != 145)
						{
							if (Global_6983 != Global_19981)
							{
								iLocal_65 = 1;
							}
							else
							{
								iLocal_65 = 0;
							}
						}
						else
						{
							iLocal_65 = 0;
						}
						if (iLocal_65 == 0)
						{
							if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
							{
								if (!unk_0x234B68AC2E35ED5A(Global_7668, 29))
								{
									func_169(Global_6983, 1);
									if (func_80(Global_6983, Global_19798) == 0)
									{
										func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_117[Global_6983 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_157(Global_19779, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(1), -1f, -1f, "CELL_288", &(Global_1878[Global_6983 /*29*/].f_7), &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_3), 0);
									}
									func_157(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_160(Global_19779, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0x191DDA30577F440A(&Global_7668, 29);
								}
							}
							else
							{
								bLocal_288 = false;
								bLocal_289 = false;
								if (Global_77248)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0xDA654EB115F9FF7D(&(Global_1878[Global_6983 /*29*/].f_3), &(Global_7571[iVar1 /*24*/])))
										{
											if (!unk_0xDA654EB115F9FF7D(&(Global_7571[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_288 = true;
												iLocal_290 = iVar1;
											}
										}
										iVar1++;
									}
								}
								else
								{
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (unk_0xDA654EB115F9FF7D(&(Global_1878[Global_6983 /*29*/].f_3), &(Global_7506[iVar2 /*16*/])))
										{
											if (!unk_0xDA654EB115F9FF7D(&(Global_7506[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_288 = true;
												iLocal_290 = iVar2;
												if (iLocal_290 == iLocal_290)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_167(Global_6983) && unk_0x234B68AC2E35ED5A(Global_7669, 0) == 0)
								{
									if (func_135(Global_6983, Global_19798) == 0 && func_87(Global_6983, Global_19798) == 0)
									{
										bLocal_289 = false;
									}
									else
									{
										bLocal_289 = true;
									}
								}
								if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
								{
									func_166();
									iLocal_106 = 1;
								}
								else if (bLocal_289 == 0 && bLocal_288 == 0)
								{
									Global_22239 = 0;
									Global_22238 = 0;
									Global_22240 = 0;
									if (unk_0x234B68AC2E35ED5A(Global_7669, 19) && Global_6983 == 129)
									{
									}
									else
									{
										func_97();
									}
								}
								else
								{
									func_134();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_166()
{
	iLocal_104 = unk_0xDFB7BFA6482FEE1E();
	func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	switch (Global_6983)
	{
		case 2:
			func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7001", &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7002", &(Global_1878[Global_6983 /*29*/].f_3), &(Global_1878[Global_6983 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_7003", &(Global_1878[Global_6983 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_19786)
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_19786)
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_160(Global_19779, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(Global_19779, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_167(int iParam0)
{
	switch (Global_19798)
	{
		case 0:
			if (func_168(iParam0, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_168(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_168(iParam0, 2))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_96();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar1 = func_91(iParam0);
	iVar2 = func_91(iParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_90(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_89(iVar3) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_169(int iParam0, int iParam1)
{
	Global_1878[iParam0 /*29*/].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_18 = iParam1;
	}
}

void func_170()
{
	var uVar0;
	
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 8;
	}
	if (Global_19786)
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0xC664C0067EEAB8D1(&Global_7668, 17);
	func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_157(Global_19779, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_174(&Local_293);
	if (Global_19798.f_1 > 3)
	{
		func_160(Global_19779, "DISPLAY_VIEW", 18f, to_float(iLocal_75), -1082130432, -1082130432, -1082130432);
		iLocal_75 = 0;
		if (func_173(&Local_293))
		{
			uVar0 = unk_0xF04DBC0AC5A2AB23(Local_293[Local_293.f_2936]);
		}
		else
		{
			uVar0 = func_171(&(Local_293.f_34[func_172(Local_293.f_2936, &Local_293) /*29*/].f_13));
		}
		unk_0x704F8697BB515627(Global_19779, "SET_HEADER");
		unk_0x35CA0C119E6A2A27("CELL_CONDFNH");
		unk_0xA91D83F2CC1345A6(uVar0);
		unk_0xD4B2C39F7AD5A6A6();
		unk_0x392841D58D2EED1D();
		Local_293.f_2999 = 0;
		iLocal_89 = 1;
	}
}

var func_171(var uParam0)
{
	return uParam0;
}

int func_172(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 - uParam1->f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

int func_173(var uParam0)
{
	if (uParam0->f_2936 < uParam0->f_33)
	{
		return 1;
	}
	return 0;
}

void func_174(var uParam0)
{
	int iVar0;
	struct<22> Var1;
	var uVar2;
	char* sVar3;
	bool bVar4;
	struct<13> Var5;
	
	iVar0 = 0;
	if (func_182(uParam0, &uVar2))
	{
		if (func_173(uParam0))
		{
			uParam0->f_2963 = { func_181((*uParam0)[uParam0->f_2936]) };
			sVar3 = unk_0xF04DBC0AC5A2AB23((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_172(uParam0->f_2936, uParam0) /*29*/] };
			sVar3 = func_171(&(uParam0->f_34[func_172(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar3, 64);
		bVar4 = false;
		if (unk_0x0D9FE79B50145C2D())
		{
			if (!Global_1574447)
			{
				if (func_180(unk_0x1146A9AE09CE2B14()))
				{
					bVar4 = true;
				}
			}
		}
		if (func_173(uParam0))
		{
			if (((unk_0x3B58BC4F38776A1E((*uParam0)[uParam0->f_2936]) || unk_0xC101EDBBE4F86687((*uParam0)[uParam0->f_2936])) || unk_0x3A7B57FB88839A13((*uParam0)[uParam0->f_2936])) || unk_0x72AC1B255E2E67B1((*uParam0)[uParam0->f_2936]))
			{
				bVar4 = false;
			}
		}
		if (!unk_0xAE06D39287DB2B6A())
		{
			bVar4 = false;
		}
		if (unk_0xD58B4D2CF55D0EDE(0))
		{
			bVar4 = false;
		}
		if (unk_0x9FA24EA712B9DC35(&(uParam0->f_2963)) || unk_0x19CE48398ED0AA35(&(uParam0->f_2963)))
		{
			bVar4 = false;
		}
		if (unk_0xAA95EF44AC54CFF9(&(uParam0->f_2963)) || unk_0x6692B50177E3C4B8(&(uParam0->f_2963)))
		{
			bVar4 = false;
		}
		if (unk_0xC72A027F63D1F5DE())
		{
			if (unk_0x2322DD4FBF5E4E2F())
			{
				if (unk_0x932557B3260F13C4())
				{
					bVar4 = false;
				}
			}
			else if (unk_0xE22116C6D321FECA())
			{
				bVar4 = false;
			}
		}
		if (bVar4)
		{
			if (Global_77248)
			{
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT_EMPTY");
				unk_0x9E3D03981E2E9AD9(iVar0);
				unk_0x392841D58D2EED1D();
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(18);
				unk_0x9E3D03981E2E9AD9(iVar0);
				unk_0x9E3D03981E2E9AD9(0);
				if (!Global_2550920.f_1 || Global_2550920.f_38)
				{
					unk_0x35CA0C119E6A2A27("CELL_MP_1000");
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					unk_0x35CA0C119E6A2A27("CELL_MP_1000b");
					unk_0xD4B2C39F7AD5A6A6();
				}
				unk_0x392841D58D2EED1D();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_42009 == 15)
			{
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT_EMPTY");
				unk_0x9E3D03981E2E9AD9(iVar0);
				unk_0x392841D58D2EED1D();
				unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
				unk_0x9E3D03981E2E9AD9(18);
				unk_0x9E3D03981E2E9AD9(iVar0);
				unk_0x9E3D03981E2E9AD9(0);
				if (!Global_2550920.f_1 || Global_2550920.f_38)
				{
					unk_0x35CA0C119E6A2A27("CELL_MP_1000");
					unk_0xD4B2C39F7AD5A6A6();
				}
				else
				{
					unk_0x35CA0C119E6A2A27("CELL_MP_1000b");
					unk_0xD4B2C39F7AD5A6A6();
				}
				unk_0x392841D58D2EED1D();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar4 = false;
		if (func_173(uParam0))
		{
			Var5 = { func_181((*uParam0)[uParam0->f_2936]) };
			if ((func_180(unk_0x1146A9AE09CE2B14()) && func_180((*uParam0)[uParam0->f_2936])) && unk_0xBC7AFA40CB26912D(&Var5))
			{
				bVar4 = true;
			}
		}
		if (bVar4)
		{
			unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT_EMPTY");
			unk_0x9E3D03981E2E9AD9(iVar0);
			unk_0x392841D58D2EED1D();
			unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(18);
			unk_0x9E3D03981E2E9AD9(iVar0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x35CA0C119E6A2A27("CELL_MP_1009");
			unk_0xD4B2C39F7AD5A6A6();
			unk_0x392841D58D2EED1D();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar4 = false;
		if (func_173(uParam0))
		{
			if (unk_0x3C475AF50685F9DC() < unk_0x492C2E126D2443B5())
			{
				if (!unk_0x9B050CE2036A4DAD(&(uParam0->f_2963)))
				{
					bVar4 = true;
				}
			}
		}
		if (bVar4)
		{
			unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(18);
			unk_0x9E3D03981E2E9AD9(iVar0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x35CA0C119E6A2A27("PIM_DFRQ2");
			unk_0xD4B2C39F7AD5A6A6();
			unk_0x392841D58D2EED1D();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar4 = false;
		bVar4 = true;
		if (bVar4)
		{
			unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(18);
			unk_0x9E3D03981E2E9AD9(iVar0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x35CA0C119E6A2A27("CELL_MP_1007");
			unk_0xD4B2C39F7AD5A6A6();
			unk_0x392841D58D2EED1D();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar4 = false;
		if (unk_0x29712F962253A7EB())
		{
			if (unk_0xDA1611E46AAEA71B(&(uParam0->f_2963)))
			{
				unk_0xEDDAF8F99F371228(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0x678E959F60C0DB94() && !func_179(Var1))
				{
					bVar4 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar4)
		{
			unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(18);
			unk_0x9E3D03981E2E9AD9(iVar0);
			unk_0x9E3D03981E2E9AD9(0);
			unk_0x35CA0C119E6A2A27("CELL_MP_1003");
			unk_0xD4B2C39F7AD5A6A6();
			unk_0x392841D58D2EED1D();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0xC664C0067EEAB8D1(&Global_7670, 6);
		bVar4 = false;
		if (func_173(uParam0))
		{
			if (func_178(unk_0x1146A9AE09CE2B14(), 1, 1))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_177((*uParam0)[uParam0->f_2936], 0))
					{
						if (!unk_0x234B68AC2E35ED5A(Global_2426865[(*uParam0)[uParam0->f_2936] /*449*/].f_199, 2))
						{
							bVar4 = true;
							unk_0x191DDA30577F440A(&Global_7670, 6);
						}
					}
				}
			}
			if ((*uParam0)[uParam0->f_2936] != func_16() && func_178((*uParam0)[uParam0->f_2936], 0, 0))
			{
				if (func_175((*uParam0)[uParam0->f_2936], 146))
				{
					bVar4 = false;
				}
			}
		}
		if (Global_1574416 || Global_1574417)
		{
			bVar4 = false;
		}
		if (bVar4)
		{
			unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
			unk_0x9E3D03981E2E9AD9(18);
			unk_0x9E3D03981E2E9AD9(iVar0);
			unk_0x9E3D03981E2E9AD9(0);
			if (!unk_0x234B68AC2E35ED5A(Global_2441237.f_1313, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x35CA0C119E6A2A27("CELL_MP_1008");
			}
			else
			{
				unk_0x35CA0C119E6A2A27("CELL_MP_1008b");
			}
			unk_0xD4B2C39F7AD5A6A6();
			unk_0x392841D58D2EED1D();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0xAD97A7EDCF347FBB("CELL_LEFT_SESS");
		unk_0x02B23FCAC192C764(1, 1);
		func_36(0);
		return;
	}
}

int func_175(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/] == iParam1)
	{
		return func_176(iParam0);
	}
	return 0;
}

int func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

int func_178(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x29712F962253A7EB() && unk_0x678E959F60C0DB94())
	{
		iVar0 = unk_0xBBB96B2000C518B2();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0x2D886F8E34B7ED6D(&Global_2518183, iVar1);
				if (iParam0 == Global_2518183)
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x37612007604356A6() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x1146A9AE09CE2B14())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xDC39E4D9D73B0D14() || unk_0xE22116C6D321FECA())
	{
		if (unk_0xA40947BF4C26445B(0, iVar0))
		{
			if (unk_0xAE06D39287DB2B6A())
			{
				return 1;
			}
		}
	}
	if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			if (unk_0x2999FF4884D79BD0(0, -3, 1) || unk_0xA40947BF4C26445B(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_181(iParam0) };
			if (unk_0xA40947BF4C26445B(0, -1) || (unk_0xA40947BF4C26445B(1, -1) && unk_0x9B050CE2036A4DAD(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x3640D836D145B814())
	{
		if (unk_0xA40947BF4C26445B(0, iVar0))
		{
			if (unk_0xAE06D39287DB2B6A())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_181(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_182(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x0B4295B1608BB934())
	{
		*iParam1 = 2;
	}
	else if (uParam0->f_2936 < uParam0->f_33)
	{
		if (func_178((*uParam0)[uParam0->f_2936], 0, 1))
		{
			return 1;
		}
		else
		{
			*iParam1 = 2;
		}
	}
	else
	{
		iVar0 = func_172(uParam0->f_2936, uParam0);
		if (unk_0x6B8C9C1D64326EAE(&(uParam0->f_34[iVar0 /*29*/])))
		{
			return 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	return 0;
}

void func_183()
{
	if (func_163(2, Global_19767, 0))
	{
		unk_0xC664C0067EEAB8D1(&Global_7669, 0);
		iLocal_106 = 0;
		func_161();
		Global_19776 = 1;
		Global_22239 = 0;
		Global_22238 = 0;
		Global_22240 = 0;
		func_97();
	}
}

void func_184()
{
	if (iLocal_99)
	{
		if (timera() > 150)
		{
			iLocal_99 = 0;
		}
	}
	if (unk_0x0D901EFDFD7EF9D5(2))
	{
		if (func_163(2, 181, 0))
		{
			if (iLocal_73 > 0)
			{
				iLocal_73 = (iLocal_73 - 1);
			}
			else
			{
				iLocal_73 = (iLocal_69 - 1);
			}
			func_148();
			iLocal_99 = 1;
			settimera(0);
		}
		if (func_163(2, 180, 0))
		{
			iLocal_73++;
			if (iLocal_73 == iLocal_69)
			{
				iLocal_73 = 0;
			}
			func_153();
		}
	}
	if (iLocal_99 == 0)
	{
		if (func_163(2, Global_19774, 0))
		{
			if (iLocal_73 > 0)
			{
				iLocal_73 = (iLocal_73 - 1);
			}
			else
			{
				iLocal_73 = (iLocal_69 - 1);
			}
			func_148();
			iLocal_99 = 1;
			settimera(0);
		}
		if (func_163(2, Global_19775, 0))
		{
			iLocal_73++;
			if (iLocal_73 == iLocal_69)
			{
				iLocal_73 = 0;
			}
			func_153();
			iLocal_99 = 1;
			settimera(0);
		}
		if (func_163(2, Global_19773, 0))
		{
			func_186();
			func_186();
			func_186();
			func_186();
			func_186();
			unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
			iLocal_99 = 1;
			settimera(0);
		}
		if (func_163(2, Global_19772, 0))
		{
			func_185();
			func_185();
			func_185();
			func_185();
			func_185();
			unk_0x9B0169E27978C1A2(-1, "Menu_Navigate", &Global_19787, 1);
			iLocal_99 = 1;
			settimera(0);
		}
	}
}

void func_185()
{
	if (iLocal_73 > 0)
	{
		iLocal_73 = (iLocal_73 - 1);
	}
	else
	{
		iLocal_73 = (iLocal_69 - 1);
	}
	func_160(Global_19779, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_186()
{
	iLocal_73++;
	if (iLocal_73 == iLocal_69)
	{
		iLocal_73 = 0;
	}
	func_160(Global_19779, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_187()
{
	iLocal_73++;
	if (iLocal_73 == iLocal_69)
	{
		iLocal_73 = 0;
		unk_0xC664C0067EEAB8D1(&Global_7668, 16);
	}
	func_153();
	unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
	uLocal_74 = unk_0x4E45F52E0261CADA();
	while (!unk_0xCCBB1074CAAE000A(uLocal_74))
	{
		wait(0);
	}
	iLocal_77 = unk_0x399B6D3F817B71F1(uLocal_74);
	if (iLocal_77 < 0)
	{
		iLocal_77 = 0;
	}
	if (Global_77248)
	{
		if (iLocal_77 > iLocal_72 || iLocal_77 == iLocal_72)
		{
			if (Global_22156 == Global_19804[iLocal_77])
			{
				unk_0xC664C0067EEAB8D1(&Global_7668, 16);
			}
		}
	}
	else if (Global_22156 == Global_19804[iLocal_77])
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 16);
	}
}

void func_188()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<22> Var4;
	int iVar5;
	struct<13> Var6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<13> Var11;
	
	if (unk_0x234B68AC2E35ED5A(Global_7670, 6))
	{
		if (!unk_0x9B4A5ABBC2942C51(&(Local_293.f_2963)))
		{
			unk_0xC664C0067EEAB8D1(&Global_7670, 6);
			StringCopy(&cLocal_83, "", 16);
			Global_19798.f_1 = 3;
		}
	}
	switch (Local_293.f_2999)
	{
		case 0:
			if (unk_0x234B68AC2E35ED5A(uLocal_287, 1))
			{
				if (!Global_99422.f_1441)
				{
					unk_0xC664C0067EEAB8D1(&uLocal_287, 0);
					unk_0xC664C0067EEAB8D1(&uLocal_287, 1);
				}
				return;
			}
			if (Local_293.f_2976)
			{
				if (Local_293.f_2981)
				{
					iVar5 = 2;
					set_warning_message_with_header("HUD_CONNPROB", "HUD_DISCON", iVar5, 0, false, -1, 0, 0, true, 0);
					if (Local_293.f_2982)
					{
						if (func_163(2, Global_19767, 0) || unk_0x5C6675393464A814(2, 201))
						{
							Global_19798.f_1 = 3;
						}
					}
					else if (func_163(2, Global_19767, 0) || unk_0x5C6675393464A814(2, 201))
					{
					}
					else
					{
						Local_293.f_2982 = 1;
					}
				}
				else
				{
					iLocal_75 = Local_293.f_2946;
					switch (Local_293.f_2937[Local_293.f_2946])
					{
						case 1:
							if (!Global_2550920.f_1)
							{
								if (!unk_0xAD2A40A210A89D47() && !unk_0xBB931EE173379AA7())
								{
									Local_293.f_2976 = 0;
									func_287();
									Local_293.f_2977 = 0;
									if (func_173(&Local_293))
									{
										sVar7 = unk_0xF04DBC0AC5A2AB23(Local_293[Local_293.f_2936]);
									}
									else
									{
										sVar7 = func_171(&(Local_293.f_34[func_172(Local_293.f_2936, &Local_293) /*29*/].f_13));
									}
									func_286(sVar7);
									Local_293.f_2999 = 1;
									func_285(&(Local_293.f_2979));
									func_284(0);
									if (Global_77248)
									{
										iVar9 = Global_262145.f_162;
										if (!unk_0x488A4A7305C96635(iVar9, 0, 1, 0, &iVar8, -1, 0))
										{
											iVar9 = (iVar9 - iVar8);
										}
										Var6 = { func_181(unk_0x1146A9AE09CE2B14()) };
										if (iVar9 > 0)
										{
											if (func_283())
											{
												func_271(1654961868, iVar9, &iVar0, 0, 1, 0);
												Global_4265506[iVar0 /*85*/].f_14 = { Var6 };
											}
											else
											{
												unk_0xD545129CDA76E326(iVar9, &Var6, 0, 1);
											}
										}
										func_98(1917, 1, -1);
									}
								}
								else if (unk_0xAD2A40A210A89D47())
								{
								}
								else if (unk_0xBB931EE173379AA7())
								{
									if (!Global_2550920.f_59)
									{
										Global_2550920 = 1;
										Global_2550920.f_2 = 1;
										Global_2550920.f_59 = 1;
									}
								}
							}
							else if (Global_2550920.f_38)
							{
							}
							else
							{
								func_270();
								unk_0x9B0169E27978C1A2(-1, "Hang_Up", &Global_19787, 1);
								if (Global_2550920.f_1)
								{
									func_268();
								}
								Global_19798.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_267(&(Global_2544210.f_357[Local_293[Local_293.f_2936] /*2*/])))
							{
								if (!func_266(&(Global_2544210.f_357[Local_293[Local_293.f_2936] /*2*/]), 30000, 0))
								{
									if (func_254(0, 0, 1, 1))
									{
										func_244("CELL_MP_1009H", unk_0xF04DBC0AC5A2AB23(Local_293[Local_293.f_2936]), func_245(Local_293[Local_293.f_2936], -2, 0, 0, 0), -1);
									}
									Local_293.f_2976 = 0;
									return;
								}
							}
							Var10 = { func_181(Local_293[Local_293.f_2936]) };
							if ((!func_180(unk_0x1146A9AE09CE2B14()) || !func_180(Local_293[Local_293.f_2936])) || !unk_0xBC7AFA40CB26912D(&Var10))
							{
								if (func_254(1, 1, 1, 1))
								{
									if (!unk_0xDA654EB115F9FF7D(unk_0xF04DBC0AC5A2AB23(Local_293[Local_293.f_2936]), "**Invalid**"))
									{
										func_244("CELL_MP_1009M", unk_0xF04DBC0AC5A2AB23(Local_293[Local_293.f_2936]), func_245(Local_293[Local_293.f_2936], -2, 0, 0, 0), -1);
									}
									else
									{
										func_243("CELL_MP_1009N", -1);
									}
								}
								Local_293.f_2976 = 0;
								return;
							}
							Local_293.f_2976 = 0;
							Local_293.f_2999 = 2;
							iLocal_304 = 1;
							return;
							break;
						
						case 3:
							if (!unk_0x9CEE125774F2E68E())
							{
								if (unk_0xDC39E4D9D73B0D14() && !unk_0x9B050CE2036A4DAD(&(Local_293.f_2963)))
								{
									if (unk_0x8A058FAA67658E8A(&(Local_293.f_2963), ""))
									{
										Local_293.f_2976 = 0;
										Global_19798.f_1 = 3;
									}
								}
								else
								{
									unk_0x02DA1DDD95DF45DB(&(Local_293.f_2963));
									Local_293.f_2976 = 0;
									Global_19798.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x29712F962253A7EB())
							{
								if (unk_0xDA1611E46AAEA71B(&(Local_293.f_2963)))
								{
									unk_0xEDDAF8F99F371228(&Var4, 35, &(Local_293.f_2963));
								}
							}
							if (Var4 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_179(Var4))
									{
										if (unk_0x6A0ACB1AF84D879E(Var4))
										{
											Local_293.f_2976 = 0;
											unk_0xAD97A7EDCF347FBB("CREW_JOIN");
											unk_0xA91D83F2CC1345A6(&(Var4.f_1));
											unk_0x02B23FCAC192C764(1, 1);
											Global_19798.f_1 = 3;
										}
										else
										{
											Global_19798.f_1 = 3;
											Local_293.f_2976 = 0;
											Global_19798.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_293.f_2976 = 0;
							break;
						
						case 4:
							Local_293.f_2976 = 0;
							func_170();
							unk_0x02DA1DDD95DF45DB(&(Local_293.f_2963));
							break;
						
						case 7:
							if (unk_0x234B68AC2E35ED5A(Global_2441237.f_1313, Local_293[Local_293.f_2936]))
							{
								unk_0xC664C0067EEAB8D1(&(Global_2441237.f_1313), Local_293[Local_293.f_2936]);
							}
							else
							{
								Global_2441237.f_1313 = 0;
								unk_0x191DDA30577F440A(&(Global_2441237.f_1313), Local_293[Local_293.f_2936]);
							}
							func_170();
							Local_293.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_19776 == 0)
			{
				if (func_163(2, Global_19767, 0))
				{
					Local_293.f_2982 = 0;
					Local_293.f_2981 = 0;
					unk_0xC664C0067EEAB8D1(&Global_7669, 0);
					iLocal_88 = 0;
					func_161();
					Global_19776 = 1;
					unk_0x704F8697BB515627(Global_19779, "GET_CURRENT_SELECTION");
					uLocal_74 = unk_0x4E45F52E0261CADA();
					while (!unk_0xCCBB1074CAAE000A(uLocal_74))
					{
						wait(0);
					}
					Local_293.f_2946 = unk_0x399B6D3F817B71F1(uLocal_74);
					if (!func_182(&Local_293, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_242("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_242("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2550920.f_59 = 0;
								Local_293.f_2981 = 1;
								Local_293.f_2976 = 1;
								return;
								break;
						}
						Global_19798.f_1 = 3;
						return;
					}
					Global_2550920.f_59 = 0;
					Local_293.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_182(&Local_293, &iVar3))
			{
				func_284(1);
				func_270();
				Local_293.f_2978 = 1;
				Local_293.f_2977 = 1;
				return;
			}
			else if (Local_293.f_2977)
			{
				if (!Local_293.f_2978)
				{
					if (!Global_2550920.f_1 || !unk_0x0AC576C57F4675DF())
					{
						func_284(1);
						func_270();
						Local_293.f_2978 = 1;
						Local_293.f_2977 = 1;
						return;
					}
					if (unk_0x0B4295B1608BB934())
					{
						if (func_163(2, Global_19768, 0))
						{
							func_270();
							Local_293.f_2976 = 0;
							return;
						}
						if (func_241(Global_2550920.f_20))
						{
							if (unk_0x9B050CE2036A4DAD(&(Global_2550920.f_20)))
							{
								if (!unk_0x6B8C9C1D64326EAE(&(Global_2550920.f_20)))
								{
									func_284(1);
									func_270();
									Local_293.f_2978 = 1;
									Local_293.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_284(1);
							func_270();
							Local_293.f_2978 = 1;
							Local_293.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_270();
						Local_293.f_2976 = 0;
						func_170();
						return;
					}
					if (!Global_2550920.f_37)
					{
						if (Global_2550920.f_33 == -1)
						{
							if (func_266(&(Local_293.f_2979), 40000, 1))
							{
								func_284(1);
								func_270();
								Local_293.f_2978 = 1;
								Local_293.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2550920.f_33)
							{
								case 1:
									func_240();
									func_239();
									if (unk_0x02BFF15CAA701972())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x791B4C3811D53DFA(iLocal_79);
									return;
									break;
								
								case 2:
									func_284(1);
									func_270();
									Local_293.f_2978 = 1;
									return;
									break;
								
								default:
									func_284(1);
									func_270();
									Local_293.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_267(&(Local_293.f_2979)))
			{
				func_285(&(Local_293.f_2979));
				func_238(&(Local_293.f_2979), 1, 0);
			}
			else
			{
				if (func_266(&(Local_293.f_2979), 15000, 1))
				{
					func_270();
					func_84();
					func_289();
					Global_19798.f_1 = 3;
					return;
				}
				if (Global_2550920.f_1 || unk_0x234B68AC2E35ED5A(Global_7669, 20))
				{
					if (func_163(2, Global_19768, 0))
					{
						func_270();
						Global_19798.f_1 = 3;
						return;
					}
				}
				if (Global_2550920.f_1)
				{
					if (func_237(&Local_293, &(Local_293.f_2983)))
					{
						func_236(&(Local_293.f_2979), 1, 0);
						Local_293.f_2978 = 0;
						Local_293.f_2977 = 1;
						if (Global_77248)
						{
							func_234(105, 1, -1, 1);
						}
					}
					else
					{
						func_284(1);
						func_270();
						Local_293.f_2978 = 1;
						Local_293.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_304 == 1)
			{
				if (func_228(&Local_294, &(Local_294.f_1), &(Local_294.f_2), 0, 0, &cLocal_295, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0))
				{
					StringCopy(&cLocal_295, unk_0xA4F21DE332CDC75D(), 64);
					Local_294.x = 0;
					Local_294.f_2 = 0;
					Local_294.f_1 = 0;
					iLocal_304 = 0;
					iLocal_305 = unk_0xA3A3E3B836DB6D5B(&cLocal_295);
					StringCopy(&cLocal_295, unk_0xA3FD18A27D9E6505(&cLocal_295, 0, iLocal_305, 63), 64);
					func_236(&(Global_2544210.f_357[Local_293[Local_293.f_2936] /*2*/]), 0, 0);
					if (unk_0xAB6A270F84A8781E(func_227(&cLocal_295)))
					{
					}
					else
					{
						Var11 = { func_181(Local_293[Local_293.f_2936]) };
						unk_0x9C493286FE3ED901(&cLocal_295, &Var11);
						func_189("CP_TM_SENT", Local_293[Local_293.f_2936], 0, 0, 0, 1, 0);
						func_98(1916, 1, -1);
					}
					Local_293.f_2999 = 0;
				}
				if (Local_294.x == 2)
				{
					Local_294.x = 0;
					Local_294.f_2 = 0;
					Local_294.f_1 = 0;
					iLocal_304 = 0;
					Local_293.f_2999 = 0;
				}
			}
			break;
	}
}

int func_189(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x7C3E030BC3ED6671(iParam1);
	if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xF04DBC0AC5A2AB23(iParam1), 64);
		}
		if (unk_0xAB6A270F84A8781E(&Var2))
		{
		}
		unk_0xAD97A7EDCF347FBB(sParam0);
		if ((iVar1 != -1 && unk_0xE45310E861787FC2()) && iVar1 < 4)
		{
			if (Global_4456448.f_80260[iVar1] != -1)
			{
				unk_0xB2A9BDF905DC5A51(func_199(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xB2A9BDF905DC5A51(func_245(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			unk_0xB2A9BDF905DC5A51(func_245(iParam1, -2, 1, 0, 0));
		}
		unk_0xA91D83F2CC1345A6(func_197(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
		else
		{
			Global_2518253 = { func_181(iParam1) };
			if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
			{
				iVar3 = 0;
				if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2518183.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_196(&Var2) };
					}
					iVar0 = unk_0x05F3E4A6F62A5ACD(iVar4, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar3, 0, Global_2518183, &Var2, Global_1314059, Global_1314060, Global_1314061);
				}
				else
				{
					iVar0 = unk_0x3C42479A3436E320(iVar4, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar3, 0, Global_2518183, Global_1314059, Global_1314060, Global_1314061);
				}
			}
			else
			{
				iVar0 = unk_0x02B23FCAC192C764(0, 1);
			}
		}
		func_190(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_190(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_195() || !unk_0xE45310E861787FC2()) || !func_193(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_191(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_192(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_193(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_194(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_194(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_68();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

bool func_195()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

struct<16> func_196(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_197(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_198(&cVar0);
}

var func_198(char[4] cParam0)
{
	return cParam0;
}

int func_199(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_219())
	{
		iVar2 = func_215(iParam1);
		if (!iVar2 == -1)
		{
			return func_213(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_16())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_203(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_202(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_201(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_200(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_200(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_201(int iParam0, int iParam1, int iParam2)
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
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 0);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 1);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 2);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 4);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 5);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 6);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 8);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 9);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 10);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 12);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 13);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 14);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
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

int func_203(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_212() || (func_211() && func_209())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_208(iParam2, iVar0);
		}
		else
		{
			return func_208(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_201(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_207(1);
				}
				else
				{
					return func_207(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_204(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_204(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_207(1);
	}
	return func_207(0);
}

int func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, iParam1, iParam3);
	if (func_205(Global_4456448.f_85535, 1))
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

int func_205(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
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
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_206(int iParam0, int iParam1, int iParam2)
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
			if (!func_201(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_208(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_206(iParam1, iParam0, 4);
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

bool func_209()
{
	if (func_210())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_210()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_211()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_212()
{
	if (func_210() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_214(iParam0);
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

var func_214(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_215(int iParam0)
{
	if (!iParam0 == func_16())
	{
		if (func_217(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_216(iParam0)];
		}
	}
	return -1;
}

int func_216(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_16();
}

bool func_217(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_218(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_16();
}

int func_218(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_16())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_219()
{
	if (((((func_226() || func_225()) || func_224()) || func_223()) || func_222()) || func_220())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	return func_221(Global_4456448.f_85535);
}

int func_221(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_222()
{
	return Global_2453009.f_24;
}

var func_223()
{
	return Global_2453009.f_21;
}

var func_224()
{
	return Global_2453009.f_19;
}

var func_225()
{
	return Global_2453009.f_18;
}

var func_226()
{
	return Global_2453009.f_17;
}

var func_227(char[4] cParam0)
{
	return cParam0;
}

int func_228(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33, bool bParam34)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x4E38E404B98F3D9A() || unk_0x8B6A925F148E0E94())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_233())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_233())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (unk_0x636F1F53CC61D2C9(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (unk_0x636F1F53CC61D2C9(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_233())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0x3640D836D145B814())
				{
					iVar7 = 6;
				}
				else if (unk_0xFA1A73C829B8839F() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH";
					}
				}
				if (unk_0xAB6A270F84A8781E(sParam5))
				{
					unk_0xAFA3FBBB98412389(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0xAFA3FBBB98412389(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x3640D836D145B814())
				{
					iVar8 = 6;
				}
				else if (unk_0xFA1A73C829B8839F() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0xFA1A73C829B8839F() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_195())
					{
						iVar9 = 64;
					}
					unk_0xAF65FA80D1AD087D(2);
					if (unk_0xAB6A270F84A8781E(&(Global_4456448.f_85542)))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, &(Global_4456448.f_85542), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					unk_0xAF65FA80D1AD087D(2);
					if (unk_0xAB6A270F84A8781E(&(Global_4456448.f_134567)))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, &(Global_4456448.f_134567), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0xAF65FA80D1AD087D(2);
					if (unk_0xAB6A270F84A8781E(&(Global_4456448.f_134567)))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, &(Global_4456448.f_134567), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0xAF65FA80D1AD087D(2);
					Var10 = { Global_4456448.f_134599[iParam30 /*16*/] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4456448.f_134680[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (unk_0xAB6A270F84A8781E(&Var10))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					unk_0xAF65FA80D1AD087D(2);
					unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam34)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDM_T";
					}
					else
					{
						sVar4 = "FMMC_CDM_F1";
					}
					iVar9 = 60;
					unk_0xAF65FA80D1AD087D(2);
					unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x60FF5ED57C36A351())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!unk_0xAB6A270F84A8781E(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					unk_0xAF65FA80D1AD087D(2);
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0xFA1A73C829B8839F() == 0)
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar11 = 0;
					while (iVar11 <= 7)
					{
						if (unk_0x4030103C8B148AFC(&(Global_4456448.f_85693[iVar11 /*16*/])))
						{
							StringCopy(&(Global_4456448.f_85693[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					unk_0xF086DE778B4E9DD9(iVar8, sVar4, sVar5, &(Global_4456448.f_85693[0 /*16*/]), &(Global_4456448.f_85693[1 /*16*/]), &(Global_4456448.f_85693[2 /*16*/]), &(Global_4456448.f_85693[3 /*16*/]), &(Global_4456448.f_85693[4 /*16*/]), &(Global_4456448.f_85693[5 /*16*/]), &(Global_4456448.f_85693[6 /*16*/]), &(Global_4456448.f_85693[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0xAB6A270F84A8781E(&(Global_4456448.f_68817[iParam16 /*43*/].f_6[0 /*16*/])))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar12 = 0;
						while (iVar12 <= 1)
						{
							if (unk_0x4030103C8B148AFC(&(Global_4456448.f_68817[iParam16 /*43*/].f_6[iVar12 /*16*/])))
							{
								StringCopy(&(Global_4456448.f_68817[iParam16 /*43*/].f_6[iVar12 /*16*/]), "", 64);
							}
							iVar12++;
						}
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, &(Global_4456448.f_68817[iParam16 /*43*/].f_6[0 /*16*/]), &(Global_4456448.f_68817[iParam16 /*43*/].f_6[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_233())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_233())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (unk_0x60FF5ED57C36A351())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (unk_0x60FF5ED57C36A351())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0xAFA3FBBB98412389(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0x60FF5ED57C36A351())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					iVar9 = 61;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0x2322DD4FBF5E4E2F())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (unk_0x60FF5ED57C36A351())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					iVar9 = 15;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS";
					}
					if (unk_0x60FF5ED57C36A351())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					unk_0xAF65FA80D1AD087D(64);
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*uParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0xAB6A270F84A8781E(sParam5))
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xAFA3FBBB98412389(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0xFA1A73C829B8839F() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_233())
							{
								if (*uParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_233())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_233())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0x60FF5ED57C36A351() || unk_0x2322DD4FBF5E4E2F())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar13 = 0;
					while (iVar13 <= 7)
					{
						if (unk_0x4030103C8B148AFC(&(Global_4456448.f_85564[iVar13 /*16*/])))
						{
							StringCopy(&(Global_4456448.f_85564[iVar13 /*16*/]), "", 64);
						}
						iVar13++;
					}
					if (!unk_0xAB6A270F84A8781E(sParam33))
					{
						sVar4 = sParam33;
					}
					if (bParam11)
					{
						unk_0xF086DE778B4E9DD9(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0xF086DE778B4E9DD9(iVar8, sVar4, sVar5, &(Global_4456448.f_85564[0 /*16*/]), &(Global_4456448.f_85564[1 /*16*/]), &(Global_4456448.f_85564[2 /*16*/]), &(Global_4456448.f_85564[3 /*16*/]), &(Global_4456448.f_85564[4 /*16*/]), &(Global_4456448.f_85564[5 /*16*/]), &(Global_4456448.f_85564[6 /*16*/]), &(Global_4456448.f_85564[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1659920, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x4793CFF25F0D14B5();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*uParam1 = 0;
					return 0;
				
				case 2:
					*uParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (unk_0xAB6A270F84A8781E(&Global_1659920))
						{
							StringCopy(&Global_1659920, unk_0xA4F21DE332CDC75D(), 64);
							if (unk_0xAB6A270F84A8781E(&Global_1659920))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0xA3A3E3B836DB6D5B(unk_0xA4F21DE332CDC75D());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xAB6A270F84A8781E(&Global_1659920))
									{
										if (unk_0xDA654EB115F9FF7D(" ", unk_0xE803430E29ABF0DE(&Global_1659920, 0, 1)))
										{
											iVar2 = unk_0xA3A3E3B836DB6D5B(&Global_1659920);
											StringCopy(&Global_1659920, unk_0xE803430E29ABF0DE(&Global_1659920, 1, iVar2), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (func_195())
					{
						*uParam1 = 0;
						return 1;
					}
					if (unk_0xC537AA5FE720E658(*uParam1))
					{
						if (!unk_0xE66F26A182E10848(*uParam1))
						{
							unk_0x83C4A7EF0169D5FD();
							iVar0 = unk_0xDC729A2D359F873D(*uParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1659920, unk_0xA4F21DE332CDC75D(), 64);
										iVar1 = unk_0xA3A3E3B836DB6D5B(&Global_1659920);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!unk_0xAB6A270F84A8781E(&Global_1659920))
												{
													if (unk_0xDA654EB115F9FF7D(" ", unk_0xE803430E29ABF0DE(&Global_1659920, iVar3, iVar3 + 1)))
													{
														*uParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*uParam1 != -3)
									{
										*uParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 3;
									*uParam1 = 0;
									func_232(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x636F1F53CC61D2C9(joaat("appinternet")) == 0)
							{
								unk_0x83C4A7EF0169D5FD();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							unk_0x9375EF7AB51DEF54(&Global_1659920, uParam1);
						}
						else
						{
							unk_0x7E4260CE3412CCAC(&Global_1659920, uParam1);
						}
					}
					else if (unk_0xAB6A270F84A8781E(unk_0xA4F21DE332CDC75D()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x83C4A7EF0169D5FD();
						return 0;
					}
					else if (bParam22)
					{
						unk_0x9375EF7AB51DEF54(unk_0xA4F21DE332CDC75D(), uParam1);
					}
					else
					{
						unk_0x7E4260CE3412CCAC(unk_0xA4F21DE332CDC75D(), uParam1);
					}
					if (unk_0x2322DD4FBF5E4E2F())
					{
						if ((!unk_0x0B4295B1608BB934() || func_230() == 0) || func_229() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xFFBE12D059373A24("ERROR_CHECKYACHTNAME");
						unk_0x2DFA0FE2AE5529AD(1);
					}
					else if (bParam29)
					{
						unk_0xFFBE12D059373A24("ERROR_CHECKVEHICLENAME");
						unk_0x2DFA0FE2AE5529AD(1);
					}
					else
					{
						unk_0xFFBE12D059373A24("ERROR_CHECKPROFANITY");
						unk_0x2DFA0FE2AE5529AD(1);
					}
					if (!unk_0xC537AA5FE720E658(*uParam1))
					{
						if (!unk_0xAB6A270F84A8781E(&Global_1659920))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x83C4A7EF0169D5FD();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_229()
{
	if (!func_230())
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if (func_231())
	{
		return 0;
	}
	if (unk_0x6280556FDB0D083D() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_231()
{
	return Global_2464001;
}

void func_232(int iParam0)
{
	Global_2464001 = iParam0;
}

int func_233()
{
	if ((((unk_0xFA1A73C829B8839F() == 7 || unk_0xFA1A73C829B8839F() == 8) || unk_0xFA1A73C829B8839F() == 9) || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 12)
	{
		return 1;
	}
	return 0;
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_235())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_67(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_235()
{
	return 1;
	return 0;
}

void func_236(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

int func_237(var uParam0, char* sParam1)
{
	if (Global_2550920.f_1)
	{
		if (unk_0x0AC576C57F4675DF())
		{
			unk_0xFFACC6DF1936F7A4(&(uParam0->f_2963));
			Global_2550920.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2550920.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_238(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

void func_239()
{
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 9;
		Global_21138 = 1;
		if (Global_77248)
		{
			if (!unk_0x3640D836D145B814())
			{
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0x191DDA30577F440A(&(Global_2544210.f_1795), 15);
			}
		}
	}
}

void func_240()
{
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(4);
	unk_0x9E3D03981E2E9AD9(0);
	unk_0x9E3D03981E2E9AD9(2);
	unk_0x35CA0C119E6A2A27("CELL_CONDFON");
	unk_0xA91D83F2CC1345A6(&Global_21140);
	unk_0xD4B2C39F7AD5A6A6();
	func_81("CELL_300");
	func_81("CELL_219");
	func_81("CELL_219");
	unk_0x392841D58D2EED1D();
	Global_2550920.f_37 = 1;
	unk_0xC664C0067EEAB8D1(&Global_7668, 27);
	func_102();
}

bool func_241(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

void func_242(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x6D19CF57DC2F3E74(sParam0);
	unk_0x49648AD747832803(iParam1, 1);
}

void func_243(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_244(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam2);
	}
	unk_0xA91D83F2CC1345A6(uParam1);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam3);
}

int func_245(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_252(iParam0) && !bParam4)
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
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_252(unk_0x1146A9AE09CE2B14()) || (func_251() && func_250())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		uVar1 = func_249();
		if (unk_0x419E13582192CFEA(uVar1))
		{
			if (unk_0x72D30262CF8C8603(uVar1))
			{
				if (unk_0xCB567ED25393C1DF(uVar1) != -1)
				{
					if (func_178(unk_0xCB567ED25393C1DF(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_199(iParam1, iParam0, 0);
							}
							else
							{
								return func_247(iParam0, unk_0xCB567ED25393C1DF(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_247(iParam0, unk_0xCB567ED25393C1DF(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_199(iParam1, iParam0, 0);
				}
				else
				{
					return func_246(0, -1, 0);
				}
			}
			else
			{
				return func_246(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_199(iParam1, iParam0, 0);
		}
		else
		{
			return func_247(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_247(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_246(bool bParam0, int iParam1, bool bParam2)
{
	return func_203(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_247(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_219())
			{
				iVar3 = func_215(iParam0);
				if (!iVar3 == -1)
				{
					return func_213(iVar3);
				}
			}
			if ((func_248(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_201(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_207(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_200(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_207(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_215(iParam0);
	if (!iVar4 == -1)
	{
		return func_213(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_248(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
	}
	return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
}

var func_249()
{
	return Global_2359302.f_2;
}

bool func_250()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_251()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

int func_252(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return 1;
	}
	if (func_253())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_253()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_254(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xE8FFE38E2BA32BD6())
	{
		return 0;
	}
	if (func_265())
	{
		return 0;
	}
	if (!unk_0xE0A6F16F546C8274())
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (func_264())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_261(unk_0x1146A9AE09CE2B14(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_260(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_259())
	{
		return 0;
	}
	if (unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (Global_1574199)
	{
		return 0;
	}
	if (func_258())
	{
		return 0;
	}
	if (func_257())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (Global_74428)
	{
		return 0;
	}
	if (Global_2554335)
	{
		return 0;
	}
	if (func_255(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	return 1;
}

int func_255(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return Global_2518926;
	}
	else
	{
		uVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(uVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(uVar0);
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

bool func_256()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

bool func_257()
{
	return Global_2453009.f_691;
}

bool func_258()
{
	return Global_2453009.f_844;
}

bool func_259()
{
	return Global_2441237.f_3165.f_578;
}

int func_260(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_217 == 0)
	{
		return 0;
	}
	return 1;
}

int func_261(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_262(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_262(int iParam0)
{
	return func_263(iParam0);
}

bool func_263(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_264()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

int func_265()
{
	if (Global_21125 != 0 || unk_0x6C2F471E0CF8D4CF())
	{
		return 1;
	}
	return 0;
}

int func_266(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_238(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_267(var uParam0)
{
	return uParam0->f_1;
}

void func_268()
{
	Global_2550920.f_1 = 0;
	Global_2550920 = 0;
	Global_2550920.f_2 = 0;
	Global_2550920.f_33 = -1;
	Global_2550920.f_34 = -1;
	StringCopy(&(Global_2550920.f_4), "", 64);
	StringCopy(&(Global_2550920.f_39[0 /*16*/]), "", 64);
	Global_2550920.f_38 = 0;
	Global_2550920.f_56 = 0;
	Global_2550920.f_57 = 0;
	Global_2550920.f_58 = -2;
	Global_2550920.f_3 = 0;
	func_269(&(Global_2550920.f_20));
}

void func_269(var uParam0)
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

void func_270()
{
	Global_2550920.f_2 = 1;
	Global_2550920.f_38 = 1;
	if (unk_0x0B4295B1608BB934())
	{
		if (unk_0x0AC576C57F4675DF())
		{
			while (unk_0xAD2A40A210A89D47())
			{
				wait(0);
			}
			unk_0x158BE4DA604B8CE3();
			Global_2550920 = 0;
			Global_2550920.f_2 = 0;
		}
		else if (func_241(Global_2550920.f_20))
		{
			if (unk_0x9B050CE2036A4DAD(&(Global_2550920.f_20)))
			{
				if (!unk_0x6B8C9C1D64326EAE(&(Global_2550920.f_20)))
				{
					func_268();
				}
			}
		}
		else
		{
			func_268();
		}
	}
	else
	{
		func_268();
	}
	if (Global_2550920.f_37)
	{
		func_36(0);
	}
	Global_2550920.f_37 = 0;
	Global_2550920.f_3 = 0;
}

void func_271(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_283())
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
		case 1850983186:
		case 763367758:
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
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_272(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_272(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_272(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_272(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_272(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_283())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_68()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x9FAA2C7154E262DA(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar4))
		{
			*uParam0 = func_279(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_278(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_273(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_273(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_274(iParam0);
	}
}

void func_274(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_283())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_277(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2BC717FE20953774();
			}
		}
		else if (!bVar0)
		{
			unk_0x9046783C7B581580(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_275(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_275(var uParam0)
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
	func_276(&(uParam0->f_14));
	func_276(&(uParam0->f_14.f_13));
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

void func_276(var uParam0)
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

int func_277(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_278(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

int func_279(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_283())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_280(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_280(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_282(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_281();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar1);
	}
}

void func_281()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

var func_282(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

int func_283()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

void func_284(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&Global_7669, 20);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7669, 20);
	}
}

void func_285(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_286(char* sParam0)
{
	Global_6983 = 132;
	StringCopy(&Global_21140, sParam0, 64);
	if (Global_19798.f_1 > 3)
	{
		Global_19798.f_1 = 10;
		func_111();
	}
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x9E3D03981E2E9AD9(4);
	unk_0x9E3D03981E2E9AD9(0);
	unk_0x9E3D03981E2E9AD9(2);
	unk_0x35CA0C119E6A2A27("CELL_CONDFON");
	unk_0xA91D83F2CC1345A6(&Global_21140);
	unk_0xD4B2C39F7AD5A6A6();
	func_81("CELL_300");
	func_81("CELL_211");
	func_81("CELL_211");
	unk_0x392841D58D2EED1D();
	unk_0x191DDA30577F440A(&Global_7668, 20);
	func_102();
	unk_0xC664C0067EEAB8D1(&Global_7668, 20);
}

void func_287()
{
	unk_0xCC0A83FC3512EBAD();
	Global_2550920 = 1;
	Global_2550920.f_2 = 0;
	Global_2550920.f_33 = -1;
	Global_2550920.f_34 = -1;
	Global_2550920.f_38 = 0;
}

void func_288()
{
	unk_0x791B4C3811D53DFA(iLocal_79);
	unk_0xBAB6F7501A822416(iLocal_79);
	Local_293.f_2978 = 0;
	unk_0xC664C0067EEAB8D1(&Global_7668, 16);
	unk_0xC664C0067EEAB8D1(&Global_7668, 9);
	unk_0xC664C0067EEAB8D1(&Global_7668, 29);
	unk_0xC664C0067EEAB8D1(&Global_7669, 20);
	unk_0xC664C0067EEAB8D1(&Global_7669, 0);
	unk_0xC664C0067EEAB8D1(&Global_7669, 18);
	func_290(12, iLocal_275);
	func_290(2, iLocal_276);
	func_290(0, iLocal_277);
	if (Local_293.f_2999 == 1)
	{
		if (unk_0x0B4295B1608BB934())
		{
			if (Global_2550920.f_33 == -1)
			{
				func_270();
			}
		}
	}
	unk_0x4BFE89D21F9885DC();
}

void func_289()
{
	if (!Global_77248)
	{
		if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 11))
			{
				if (!Global_19741)
				{
					unk_0x1D87FC6C9DC6D4B1(unk_0x7D2B9E6A64637269(), 0, 1);
				}
				if (Global_77248)
				{
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 244, 1);
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 243, 1);
					unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 242, 1);
				}
				unk_0xC664C0067EEAB8D1(&Global_7668, 11);
			}
		}
	}
}

void func_290(int iParam0, int iParam1)
{
	Global_1878[iParam0 /*29*/].f_1 = iParam1;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_1 = iParam1;
	}
}

void func_291()
{
	int iVar0[176];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_290(147, 1320);
	func_290(74, 180);
	func_290(75, 190);
	func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	iLocal_69 = 0;
	iLocal_106 = 0;
	iLocal_89 = 0;
	func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar1 = 0;
	while (iVar1 < 175)
	{
		iVar2 = 0;
		iVar3 = 175;
		func_290(iVar3, 5000);
		func_21();
		while (iVar2 < 175)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
			{
				if ((iVar2 == 2 || iVar2 == 0) || iVar2 == 12)
				{
					func_290(12, 3);
					func_290(2, 1);
					func_290(0, 2);
					bLocal_66 = true;
				}
				else
				{
					bLocal_66 = false;
				}
			}
			else if (func_145(iVar2, Global_19798) == 1)
			{
				bLocal_66 = true;
			}
			else
			{
				bLocal_66 = false;
			}
			if (bLocal_66)
			{
				if (iVar2 != Global_19798)
				{
					if (iVar0[iVar2] == 0)
					{
						if (func_301(iVar2, Global_19798) == 1 || func_88(iVar2, Global_19798))
						{
							fLocal_67 = (to_float(func_305(iVar2)) / 100f);
						}
						else
						{
							fLocal_67 = to_float(func_305(iVar2));
						}
						if (func_301(iVar3, Global_19798) == 1 || func_88(iVar3, Global_19798))
						{
							fLocal_68 = (to_float(func_305(iVar3)) / 100f);
						}
						else
						{
							fLocal_68 = to_float(func_305(iVar3));
						}
						if (fLocal_67 < fLocal_68)
						{
							iVar3 = iVar2;
							if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
							{
								if (iVar3 == 2)
								{
									func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7001", &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 0)
								{
									func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7002", &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 12)
								{
									func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7003", &(Global_1878[iVar3 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
		Global_19804[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (!unk_0x234B68AC2E35ED5A(Global_7669, 0))
		{
			if (func_145(iVar3, Global_19798) == 1)
			{
				if (iVar2 != Global_19798)
				{
					if (func_80(iVar3, Global_19798) == 0)
					{
						if (func_301(iVar3, Global_19798) == 1 || func_88(iVar3, Global_19798))
						{
							func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_301(iVar3, Global_19798) == 1 || func_88(iVar3, Global_19798))
					{
						func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (func_145(iVar1, Global_19798) == 1)
		{
			if (iVar1 != Global_19798)
			{
				iLocal_69++;
			}
		}
		iVar1++;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_7669, 0))
	{
		if (unk_0x0B4295B1608BB934())
		{
			if (Global_19741 == 0)
			{
				func_293();
			}
		}
	}
	func_292();
}

void func_292()
{
	if (!Global_19798.f_1 == 10 && !Global_19798.f_1 == 9)
	{
		if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
		{
			wait(750);
		}
		if (Global_19798.f_1 > 6)
		{
			func_160(Global_19779, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
			{
				func_158(Global_19779, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_158(Global_19779, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_7671 = 99;
			if (unk_0x234B68AC2E35ED5A(Global_7668, 9))
			{
				if (Global_19786)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0xC664C0067EEAB8D1(&Global_7668, 17);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
			{
				if (Global_19786)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_19779, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19786)
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_19741 == 0)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x191DDA30577F440A(&Global_7668, 17);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x191DDA30577F440A(&Global_7668, 17);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_69 > 0)
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_19779, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_19779, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x191DDA30577F440A(&Global_7668, 17);
				func_157(Global_19779, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	func_290(12, iLocal_275);
	func_290(2, iLocal_276);
	func_290(0, iLocal_277);
}

void func_293()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	int iVar5;
	
	func_290(147, 1320);
	func_290(74, 180);
	func_290(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_70 = iLocal_69;
	iLocal_71 = iLocal_70;
	func_300(&Local_293);
	iVar4 = 0;
	if (Global_77248)
	{
		if (func_296() == 0)
		{
			iVar4 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0xC502CD39B4994F3A(iVar2);
		if (func_178(iVar0, 0, 1))
		{
			if (iVar4 == 0)
			{
				if (!iVar0 == unk_0x1146A9AE09CE2B14())
				{
					Local_293[iVar1] = iVar0;
					func_295(unk_0xF04DBC0AC5A2AB23(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_293.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_180(unk_0x1146A9AE09CE2B14()))
	{
		iVar5 = unk_0x3C475AF50685F9DC();
		if (iVar5 > 100)
		{
			iVar5 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			if (unk_0xB868E2BCD1CF7446(unk_0xC1C9C375C9134DA4(iVar2)))
			{
				if (unk_0x4F11245B08F5B536(unk_0xC1C9C375C9134DA4(iVar2)))
				{
					Var3 = { func_294(iVar2) };
					if (!unk_0x9B4A5ABBC2942C51(&Var3))
					{
						if (iVar4 == 0)
						{
							if (iVar1 < 100)
							{
								Local_293.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x2322DD4FBF5E4E2F())
								{
									StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), unk_0xC26F8B2CC24FCB67(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), unk_0xC1C9C375C9134DA4(iVar2), 64);
								}
								func_295(&(Local_293.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_293.f_2935 = (Local_293.f_33 + iVar1);
}

struct<13> func_294(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2114A68B95B68855(iParam0, &Var0, 13);
	return Var0;
}

void func_295(var uParam0)
{
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x82D42F43BE26EB72(to_float(2));
	unk_0x82D42F43BE26EB72(to_float(iLocal_70));
	unk_0x82D42F43BE26EB72(0f);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
	func_81("CELL_MP_999");
	func_81("CELL_MP_999");
	unk_0x392841D58D2EED1D();
	iLocal_70++;
	iLocal_69++;
}

int func_296()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_299())
	{
		return 1;
	}
	if (func_298())
	{
		return 1;
	}
	return func_297(120, -1);
}

int func_297(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_298()
{
	return Global_1312890;
}

bool func_299()
{
	return Global_1312892;
}

void func_300(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = func_16();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		uParam0->f_34[iVar0 /*29*/] = { Var1 };
		iVar0++;
	}
	uParam0->f_2936 = 0;
	uParam0->f_33 = 0;
	uParam0->f_2935 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2937[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2946 = 0;
	StringCopy(&(uParam0->f_2947), "", 64);
	uParam0->f_2963 = { Var1 };
	uParam0->f_2976 = 0;
	uParam0->f_2977 = 0;
	func_285(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

int func_301(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_19[iParam1];
}

void func_302()
{
	int iVar0[176];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_290(147, 1320);
	func_290(74, 180);
	func_290(75, 190);
	func_160(Global_19779, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	wait(0);
	func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_69 = 0;
	if (!unk_0x234B68AC2E35ED5A(Global_7669, 0))
	{
		if (unk_0x0B4295B1608BB934())
		{
			if (Global_19741 == 0)
			{
				func_303();
			}
		}
	}
	iLocal_72 = iLocal_69;
	iLocal_106 = 0;
	iLocal_89 = 0;
	iVar1 = iLocal_69;
	while (iVar1 < 175)
	{
		iVar2 = 0;
		iVar3 = 175;
		func_290(iVar3, 5000);
		func_21();
		while (iVar2 < 175)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
			{
				if ((iVar2 == 2 || iVar2 == 0) || iVar2 == 12)
				{
					func_290(12, 3);
					func_290(2, 1);
					func_290(0, 2);
					bLocal_66 = true;
				}
				else
				{
					bLocal_66 = false;
				}
			}
			else if (func_145(iVar2, Global_19798) == 1)
			{
				bLocal_66 = true;
			}
			else
			{
				bLocal_66 = false;
			}
			if (bLocal_66)
			{
				if (iVar2 != Global_19798)
				{
					if (iVar0[iVar2] == 0)
					{
						if (func_301(iVar2, Global_19798) == 1 || func_88(iVar2, Global_19798))
						{
							fLocal_67 = (to_float(func_305(iVar2)) / 100f);
						}
						else
						{
							fLocal_67 = to_float(func_305(iVar2));
						}
						if (func_301(iVar3, Global_19798) == 1 || func_88(iVar3, Global_19798))
						{
							fLocal_68 = (to_float(func_305(iVar3)) / 100f);
						}
						else
						{
							fLocal_68 = to_float(func_305(iVar3));
						}
						if (fLocal_67 < fLocal_68)
						{
							iVar3 = iVar2;
							if (unk_0x234B68AC2E35ED5A(Global_7669, 0))
							{
								if (iVar3 == 2)
								{
									func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7001", &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 0)
								{
									func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7002", &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 12)
								{
									func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, "CELL_7003", &(Global_1878[iVar3 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
		Global_19804[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (!unk_0x234B68AC2E35ED5A(Global_7669, 0))
		{
			if (func_145(iVar3, Global_19798) == 1)
			{
				if (iVar2 != Global_19798)
				{
					if (func_80(iVar3, Global_19798) == 0)
					{
						if (func_301(iVar3, Global_19798) == 1 || func_88(iVar3, Global_19798))
						{
							func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_117[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_301(iVar3, Global_19798) == 1 || func_88(iVar3, Global_19798))
					{
						func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 1f, -1f, -1f, &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_157(Global_19779, "SET_DATA_SLOT", to_float(2), to_float(iVar1), 0f, -1f, -1f, &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_3), &(Global_1878[iVar3 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (func_145(iVar1, Global_19798) == 1)
		{
			if (iVar1 != Global_19798)
			{
				iLocal_69++;
			}
		}
		iVar1++;
	}
	func_292();
}

void func_303()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	int iVar5;
	
	func_290(147, 1320);
	func_290(74, 180);
	func_290(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_70 = iLocal_69;
	iLocal_71 = iLocal_70;
	func_300(&Local_293);
	iVar4 = 0;
	if (Global_77248)
	{
		if (func_296() == 0)
		{
			iVar4 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0xC502CD39B4994F3A(iVar2);
		if (func_178(iVar0, 0, 1))
		{
			if (iVar4 == 0)
			{
				if (!iVar0 == unk_0x1146A9AE09CE2B14())
				{
					Local_293[iVar1] = iVar0;
					func_304(unk_0xF04DBC0AC5A2AB23(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_293.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_180(unk_0x1146A9AE09CE2B14()))
	{
		iVar5 = unk_0x3C475AF50685F9DC();
		if (iVar5 > 100)
		{
			iVar5 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			if (unk_0xB868E2BCD1CF7446(unk_0xC1C9C375C9134DA4(iVar2)))
			{
				if (unk_0x4F11245B08F5B536(unk_0xC1C9C375C9134DA4(iVar2)))
				{
					Var3 = { func_294(iVar2) };
					if (!unk_0x9B4A5ABBC2942C51(&Var3))
					{
						if (iVar4 == 0)
						{
							if (iVar1 < 100)
							{
								Local_293.f_34[iVar1 /*29*/] = { Var3 };
								if (unk_0x2322DD4FBF5E4E2F())
								{
									StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), unk_0xC26F8B2CC24FCB67(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_293.f_34[iVar1 /*29*/].f_13), unk_0xC1C9C375C9134DA4(iVar2), 64);
								}
								func_304(&(Local_293.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_293.f_2935 = (Local_293.f_33 + iVar1);
}

void func_304(var uParam0)
{
	unk_0x704F8697BB515627(Global_19779, "SET_DATA_SLOT");
	unk_0x82D42F43BE26EB72(to_float(2));
	unk_0x82D42F43BE26EB72(to_float(iLocal_70));
	unk_0x82D42F43BE26EB72(0f);
	unk_0x35CA0C119E6A2A27("STRING");
	unk_0xA91D83F2CC1345A6(uParam0);
	unk_0xD4B2C39F7AD5A6A6();
	func_81("CELL_MP_999");
	func_81("CELL_MP_999");
	unk_0x392841D58D2EED1D();
	iLocal_70++;
	iLocal_69++;
}

var func_305(int iParam0)
{
	return Global_1878[iParam0 /*29*/].f_1;
}

