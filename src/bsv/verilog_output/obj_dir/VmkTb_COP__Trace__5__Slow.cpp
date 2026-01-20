// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VmkTb_COP__Syms.h"


VL_ATTR_COLD void VmkTb_COP___024root__trace_full_0_sub_2(VmkTb_COP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VmkTb_COP___024root__trace_full_0_sub_2\n"); );
    VmkTb_COP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<220>/*7039:0*/ __Vtemp_1;
    VlWide<221>/*7071:0*/ __Vtemp_2;
    VlWide<222>/*7103:0*/ __Vtemp_3;
    VlWide<221>/*7071:0*/ __Vtemp_4;
    VlWide<220>/*7039:0*/ __Vtemp_5;
    VlWide<221>/*7071:0*/ __Vtemp_6;
    VlWide<220>/*7039:0*/ __Vtemp_7;
    VlWide<217>/*6943:0*/ __Vtemp_8;
    VlWide<218>/*6975:0*/ __Vtemp_9;
    VlWide<219>/*7007:0*/ __Vtemp_10;
    VlWide<217>/*6943:0*/ __Vtemp_11;
    VlWide<218>/*6975:0*/ __Vtemp_12;
    VlWide<216>/*6911:0*/ __Vtemp_13;
    VlWide<217>/*6943:0*/ __Vtemp_14;
    VlWide<218>/*6975:0*/ __Vtemp_15;
    VlWide<217>/*6943:0*/ __Vtemp_16;
    VlWide<216>/*6911:0*/ __Vtemp_17;
    VlWide<217>/*6943:0*/ __Vtemp_18;
    VlWide<216>/*6911:0*/ __Vtemp_19;
    VlWide<213>/*6815:0*/ __Vtemp_20;
    VlWide<214>/*6847:0*/ __Vtemp_21;
    VlWide<215>/*6879:0*/ __Vtemp_22;
    VlWide<213>/*6815:0*/ __Vtemp_23;
    VlWide<214>/*6847:0*/ __Vtemp_24;
    VlWide<212>/*6783:0*/ __Vtemp_25;
    VlWide<213>/*6815:0*/ __Vtemp_26;
    VlWide<214>/*6847:0*/ __Vtemp_27;
    VlWide<213>/*6815:0*/ __Vtemp_28;
    VlWide<212>/*6783:0*/ __Vtemp_29;
    VlWide<213>/*6815:0*/ __Vtemp_30;
    VlWide<212>/*6783:0*/ __Vtemp_31;
    VlWide<209>/*6687:0*/ __Vtemp_32;
    VlWide<210>/*6719:0*/ __Vtemp_33;
    VlWide<211>/*6751:0*/ __Vtemp_34;
    VlWide<209>/*6687:0*/ __Vtemp_35;
    VlWide<210>/*6719:0*/ __Vtemp_36;
    VlWide<208>/*6655:0*/ __Vtemp_37;
    VlWide<209>/*6687:0*/ __Vtemp_38;
    VlWide<210>/*6719:0*/ __Vtemp_39;
    VlWide<209>/*6687:0*/ __Vtemp_40;
    VlWide<208>/*6655:0*/ __Vtemp_41;
    VlWide<209>/*6687:0*/ __Vtemp_42;
    VlWide<208>/*6655:0*/ __Vtemp_43;
    VlWide<205>/*6559:0*/ __Vtemp_44;
    VlWide<206>/*6591:0*/ __Vtemp_45;
    VlWide<207>/*6623:0*/ __Vtemp_46;
    VlWide<205>/*6559:0*/ __Vtemp_47;
    VlWide<206>/*6591:0*/ __Vtemp_48;
    VlWide<204>/*6527:0*/ __Vtemp_49;
    VlWide<205>/*6559:0*/ __Vtemp_50;
    VlWide<206>/*6591:0*/ __Vtemp_51;
    VlWide<205>/*6559:0*/ __Vtemp_52;
    VlWide<204>/*6527:0*/ __Vtemp_53;
    VlWide<205>/*6559:0*/ __Vtemp_54;
    VlWide<204>/*6527:0*/ __Vtemp_55;
    VlWide<201>/*6431:0*/ __Vtemp_56;
    VlWide<202>/*6463:0*/ __Vtemp_57;
    VlWide<203>/*6495:0*/ __Vtemp_58;
    VlWide<201>/*6431:0*/ __Vtemp_59;
    VlWide<202>/*6463:0*/ __Vtemp_60;
    VlWide<200>/*6399:0*/ __Vtemp_61;
    VlWide<201>/*6431:0*/ __Vtemp_62;
    VlWide<202>/*6463:0*/ __Vtemp_63;
    VlWide<201>/*6431:0*/ __Vtemp_64;
    VlWide<200>/*6399:0*/ __Vtemp_65;
    VlWide<201>/*6431:0*/ __Vtemp_66;
    VlWide<200>/*6399:0*/ __Vtemp_67;
    VlWide<197>/*6303:0*/ __Vtemp_68;
    VlWide<198>/*6335:0*/ __Vtemp_69;
    VlWide<199>/*6367:0*/ __Vtemp_70;
    VlWide<197>/*6303:0*/ __Vtemp_71;
    VlWide<198>/*6335:0*/ __Vtemp_72;
    VlWide<196>/*6271:0*/ __Vtemp_73;
    VlWide<197>/*6303:0*/ __Vtemp_74;
    VlWide<198>/*6335:0*/ __Vtemp_75;
    VlWide<197>/*6303:0*/ __Vtemp_76;
    VlWide<196>/*6271:0*/ __Vtemp_77;
    VlWide<197>/*6303:0*/ __Vtemp_78;
    VlWide<196>/*6271:0*/ __Vtemp_79;
    VlWide<193>/*6175:0*/ __Vtemp_80;
    VlWide<194>/*6207:0*/ __Vtemp_81;
    VlWide<195>/*6239:0*/ __Vtemp_82;
    VlWide<193>/*6175:0*/ __Vtemp_83;
    VlWide<194>/*6207:0*/ __Vtemp_84;
    VlWide<192>/*6143:0*/ __Vtemp_85;
    VlWide<193>/*6175:0*/ __Vtemp_86;
    VlWide<194>/*6207:0*/ __Vtemp_87;
    VlWide<193>/*6175:0*/ __Vtemp_88;
    VlWide<192>/*6143:0*/ __Vtemp_89;
    VlWide<193>/*6175:0*/ __Vtemp_90;
    VlWide<192>/*6143:0*/ __Vtemp_91;
    VlWide<189>/*6047:0*/ __Vtemp_92;
    VlWide<190>/*6079:0*/ __Vtemp_93;
    VlWide<191>/*6111:0*/ __Vtemp_94;
    VlWide<189>/*6047:0*/ __Vtemp_95;
    VlWide<190>/*6079:0*/ __Vtemp_96;
    VlWide<188>/*6015:0*/ __Vtemp_97;
    VlWide<189>/*6047:0*/ __Vtemp_98;
    VlWide<190>/*6079:0*/ __Vtemp_99;
    VlWide<189>/*6047:0*/ __Vtemp_100;
    VlWide<188>/*6015:0*/ __Vtemp_101;
    VlWide<189>/*6047:0*/ __Vtemp_102;
    VlWide<188>/*6015:0*/ __Vtemp_103;
    VlWide<185>/*5919:0*/ __Vtemp_104;
    VlWide<186>/*5951:0*/ __Vtemp_105;
    VlWide<187>/*5983:0*/ __Vtemp_106;
    VlWide<185>/*5919:0*/ __Vtemp_107;
    VlWide<186>/*5951:0*/ __Vtemp_108;
    VlWide<184>/*5887:0*/ __Vtemp_109;
    VlWide<185>/*5919:0*/ __Vtemp_110;
    VlWide<186>/*5951:0*/ __Vtemp_111;
    VlWide<185>/*5919:0*/ __Vtemp_112;
    VlWide<184>/*5887:0*/ __Vtemp_113;
    VlWide<185>/*5919:0*/ __Vtemp_114;
    VlWide<184>/*5887:0*/ __Vtemp_115;
    VlWide<181>/*5791:0*/ __Vtemp_116;
    VlWide<182>/*5823:0*/ __Vtemp_117;
    VlWide<183>/*5855:0*/ __Vtemp_118;
    VlWide<181>/*5791:0*/ __Vtemp_119;
    VlWide<182>/*5823:0*/ __Vtemp_120;
    VlWide<180>/*5759:0*/ __Vtemp_121;
    VlWide<181>/*5791:0*/ __Vtemp_122;
    VlWide<182>/*5823:0*/ __Vtemp_123;
    VlWide<181>/*5791:0*/ __Vtemp_124;
    VlWide<180>/*5759:0*/ __Vtemp_125;
    VlWide<181>/*5791:0*/ __Vtemp_126;
    VlWide<180>/*5759:0*/ __Vtemp_127;
    VlWide<177>/*5663:0*/ __Vtemp_128;
    VlWide<178>/*5695:0*/ __Vtemp_129;
    VlWide<179>/*5727:0*/ __Vtemp_130;
    VlWide<177>/*5663:0*/ __Vtemp_131;
    VlWide<178>/*5695:0*/ __Vtemp_132;
    VlWide<176>/*5631:0*/ __Vtemp_133;
    VlWide<177>/*5663:0*/ __Vtemp_134;
    VlWide<178>/*5695:0*/ __Vtemp_135;
    VlWide<177>/*5663:0*/ __Vtemp_136;
    VlWide<176>/*5631:0*/ __Vtemp_137;
    VlWide<177>/*5663:0*/ __Vtemp_138;
    VlWide<176>/*5631:0*/ __Vtemp_139;
    VlWide<173>/*5535:0*/ __Vtemp_140;
    VlWide<174>/*5567:0*/ __Vtemp_141;
    VlWide<175>/*5599:0*/ __Vtemp_142;
    VlWide<173>/*5535:0*/ __Vtemp_143;
    VlWide<174>/*5567:0*/ __Vtemp_144;
    VlWide<172>/*5503:0*/ __Vtemp_145;
    VlWide<173>/*5535:0*/ __Vtemp_146;
    VlWide<174>/*5567:0*/ __Vtemp_147;
    VlWide<173>/*5535:0*/ __Vtemp_148;
    VlWide<172>/*5503:0*/ __Vtemp_149;
    VlWide<173>/*5535:0*/ __Vtemp_150;
    VlWide<172>/*5503:0*/ __Vtemp_151;
    VlWide<169>/*5407:0*/ __Vtemp_152;
    VlWide<170>/*5439:0*/ __Vtemp_153;
    VlWide<171>/*5471:0*/ __Vtemp_154;
    VlWide<169>/*5407:0*/ __Vtemp_155;
    VlWide<170>/*5439:0*/ __Vtemp_156;
    VlWide<168>/*5375:0*/ __Vtemp_157;
    VlWide<169>/*5407:0*/ __Vtemp_158;
    VlWide<170>/*5439:0*/ __Vtemp_159;
    VlWide<169>/*5407:0*/ __Vtemp_160;
    VlWide<168>/*5375:0*/ __Vtemp_161;
    VlWide<169>/*5407:0*/ __Vtemp_162;
    VlWide<168>/*5375:0*/ __Vtemp_163;
    VlWide<165>/*5279:0*/ __Vtemp_164;
    VlWide<166>/*5311:0*/ __Vtemp_165;
    VlWide<167>/*5343:0*/ __Vtemp_166;
    VlWide<165>/*5279:0*/ __Vtemp_167;
    VlWide<166>/*5311:0*/ __Vtemp_168;
    VlWide<164>/*5247:0*/ __Vtemp_169;
    VlWide<165>/*5279:0*/ __Vtemp_170;
    VlWide<166>/*5311:0*/ __Vtemp_171;
    VlWide<165>/*5279:0*/ __Vtemp_172;
    VlWide<164>/*5247:0*/ __Vtemp_173;
    VlWide<165>/*5279:0*/ __Vtemp_174;
    VlWide<164>/*5247:0*/ __Vtemp_175;
    VlWide<161>/*5151:0*/ __Vtemp_176;
    VlWide<162>/*5183:0*/ __Vtemp_177;
    VlWide<163>/*5215:0*/ __Vtemp_178;
    VlWide<161>/*5151:0*/ __Vtemp_179;
    VlWide<162>/*5183:0*/ __Vtemp_180;
    VlWide<160>/*5119:0*/ __Vtemp_181;
    VlWide<161>/*5151:0*/ __Vtemp_182;
    VlWide<162>/*5183:0*/ __Vtemp_183;
    VlWide<161>/*5151:0*/ __Vtemp_184;
    VlWide<160>/*5119:0*/ __Vtemp_185;
    VlWide<161>/*5151:0*/ __Vtemp_186;
    VlWide<160>/*5119:0*/ __Vtemp_187;
    VlWide<157>/*5023:0*/ __Vtemp_188;
    VlWide<158>/*5055:0*/ __Vtemp_189;
    VlWide<159>/*5087:0*/ __Vtemp_190;
    VlWide<157>/*5023:0*/ __Vtemp_191;
    VlWide<158>/*5055:0*/ __Vtemp_192;
    VlWide<156>/*4991:0*/ __Vtemp_193;
    VlWide<157>/*5023:0*/ __Vtemp_194;
    VlWide<158>/*5055:0*/ __Vtemp_195;
    VlWide<157>/*5023:0*/ __Vtemp_196;
    VlWide<156>/*4991:0*/ __Vtemp_197;
    VlWide<157>/*5023:0*/ __Vtemp_198;
    VlWide<156>/*4991:0*/ __Vtemp_199;
    VlWide<153>/*4895:0*/ __Vtemp_200;
    VlWide<154>/*4927:0*/ __Vtemp_201;
    VlWide<155>/*4959:0*/ __Vtemp_202;
    VlWide<153>/*4895:0*/ __Vtemp_203;
    VlWide<154>/*4927:0*/ __Vtemp_204;
    VlWide<152>/*4863:0*/ __Vtemp_205;
    VlWide<153>/*4895:0*/ __Vtemp_206;
    VlWide<154>/*4927:0*/ __Vtemp_207;
    VlWide<153>/*4895:0*/ __Vtemp_208;
    VlWide<152>/*4863:0*/ __Vtemp_209;
    VlWide<153>/*4895:0*/ __Vtemp_210;
    VlWide<152>/*4863:0*/ __Vtemp_211;
    VlWide<149>/*4767:0*/ __Vtemp_212;
    VlWide<150>/*4799:0*/ __Vtemp_213;
    VlWide<151>/*4831:0*/ __Vtemp_214;
    VlWide<149>/*4767:0*/ __Vtemp_215;
    VlWide<150>/*4799:0*/ __Vtemp_216;
    VlWide<148>/*4735:0*/ __Vtemp_217;
    VlWide<149>/*4767:0*/ __Vtemp_218;
    VlWide<150>/*4799:0*/ __Vtemp_219;
    VlWide<149>/*4767:0*/ __Vtemp_220;
    VlWide<148>/*4735:0*/ __Vtemp_221;
    VlWide<149>/*4767:0*/ __Vtemp_222;
    VlWide<148>/*4735:0*/ __Vtemp_223;
    VlWide<145>/*4639:0*/ __Vtemp_224;
    VlWide<146>/*4671:0*/ __Vtemp_225;
    VlWide<147>/*4703:0*/ __Vtemp_226;
    VlWide<145>/*4639:0*/ __Vtemp_227;
    VlWide<146>/*4671:0*/ __Vtemp_228;
    VlWide<144>/*4607:0*/ __Vtemp_229;
    VlWide<145>/*4639:0*/ __Vtemp_230;
    VlWide<146>/*4671:0*/ __Vtemp_231;
    VlWide<145>/*4639:0*/ __Vtemp_232;
    VlWide<144>/*4607:0*/ __Vtemp_233;
    VlWide<145>/*4639:0*/ __Vtemp_234;
    VlWide<144>/*4607:0*/ __Vtemp_235;
    VlWide<141>/*4511:0*/ __Vtemp_236;
    VlWide<142>/*4543:0*/ __Vtemp_237;
    VlWide<143>/*4575:0*/ __Vtemp_238;
    VlWide<141>/*4511:0*/ __Vtemp_239;
    VlWide<142>/*4543:0*/ __Vtemp_240;
    VlWide<140>/*4479:0*/ __Vtemp_241;
    VlWide<141>/*4511:0*/ __Vtemp_242;
    VlWide<142>/*4543:0*/ __Vtemp_243;
    VlWide<141>/*4511:0*/ __Vtemp_244;
    VlWide<140>/*4479:0*/ __Vtemp_245;
    VlWide<141>/*4511:0*/ __Vtemp_246;
    VlWide<140>/*4479:0*/ __Vtemp_247;
    VlWide<137>/*4383:0*/ __Vtemp_248;
    VlWide<138>/*4415:0*/ __Vtemp_249;
    VlWide<139>/*4447:0*/ __Vtemp_250;
    VlWide<137>/*4383:0*/ __Vtemp_251;
    VlWide<138>/*4415:0*/ __Vtemp_252;
    VlWide<136>/*4351:0*/ __Vtemp_253;
    VlWide<137>/*4383:0*/ __Vtemp_254;
    VlWide<138>/*4415:0*/ __Vtemp_255;
    VlWide<137>/*4383:0*/ __Vtemp_256;
    VlWide<136>/*4351:0*/ __Vtemp_257;
    VlWide<137>/*4383:0*/ __Vtemp_258;
    VlWide<136>/*4351:0*/ __Vtemp_259;
    VlWide<133>/*4255:0*/ __Vtemp_260;
    VlWide<134>/*4287:0*/ __Vtemp_261;
    VlWide<135>/*4319:0*/ __Vtemp_262;
    VlWide<133>/*4255:0*/ __Vtemp_263;
    VlWide<134>/*4287:0*/ __Vtemp_264;
    VlWide<132>/*4223:0*/ __Vtemp_265;
    VlWide<133>/*4255:0*/ __Vtemp_266;
    VlWide<134>/*4287:0*/ __Vtemp_267;
    VlWide<133>/*4255:0*/ __Vtemp_268;
    VlWide<132>/*4223:0*/ __Vtemp_269;
    VlWide<133>/*4255:0*/ __Vtemp_270;
    VlWide<132>/*4223:0*/ __Vtemp_271;
    VlWide<129>/*4127:0*/ __Vtemp_272;
    VlWide<130>/*4159:0*/ __Vtemp_273;
    VlWide<131>/*4191:0*/ __Vtemp_274;
    VlWide<129>/*4127:0*/ __Vtemp_275;
    VlWide<130>/*4159:0*/ __Vtemp_276;
    VlWide<128>/*4095:0*/ __Vtemp_277;
    VlWide<129>/*4127:0*/ __Vtemp_278;
    VlWide<130>/*4159:0*/ __Vtemp_279;
    VlWide<129>/*4127:0*/ __Vtemp_280;
    VlWide<128>/*4095:0*/ __Vtemp_281;
    VlWide<129>/*4127:0*/ __Vtemp_282;
    VlWide<128>/*4095:0*/ __Vtemp_283;
    VlWide<125>/*3999:0*/ __Vtemp_284;
    VlWide<126>/*4031:0*/ __Vtemp_285;
    VlWide<127>/*4063:0*/ __Vtemp_286;
    VlWide<125>/*3999:0*/ __Vtemp_287;
    VlWide<126>/*4031:0*/ __Vtemp_288;
    VlWide<124>/*3967:0*/ __Vtemp_289;
    VlWide<125>/*3999:0*/ __Vtemp_290;
    VlWide<126>/*4031:0*/ __Vtemp_291;
    VlWide<125>/*3999:0*/ __Vtemp_292;
    VlWide<124>/*3967:0*/ __Vtemp_293;
    VlWide<125>/*3999:0*/ __Vtemp_294;
    VlWide<124>/*3967:0*/ __Vtemp_295;
    VlWide<121>/*3871:0*/ __Vtemp_296;
    VlWide<122>/*3903:0*/ __Vtemp_297;
    VlWide<123>/*3935:0*/ __Vtemp_298;
    VlWide<121>/*3871:0*/ __Vtemp_299;
    VlWide<122>/*3903:0*/ __Vtemp_300;
    VlWide<120>/*3839:0*/ __Vtemp_301;
    VlWide<121>/*3871:0*/ __Vtemp_302;
    VlWide<122>/*3903:0*/ __Vtemp_303;
    VlWide<121>/*3871:0*/ __Vtemp_304;
    VlWide<120>/*3839:0*/ __Vtemp_305;
    VlWide<121>/*3871:0*/ __Vtemp_306;
    VlWide<120>/*3839:0*/ __Vtemp_307;
    VlWide<117>/*3743:0*/ __Vtemp_308;
    VlWide<118>/*3775:0*/ __Vtemp_309;
    VlWide<119>/*3807:0*/ __Vtemp_310;
    VlWide<117>/*3743:0*/ __Vtemp_311;
    VlWide<118>/*3775:0*/ __Vtemp_312;
    VlWide<116>/*3711:0*/ __Vtemp_313;
    VlWide<117>/*3743:0*/ __Vtemp_314;
    VlWide<118>/*3775:0*/ __Vtemp_315;
    VlWide<117>/*3743:0*/ __Vtemp_316;
    VlWide<116>/*3711:0*/ __Vtemp_317;
    VlWide<117>/*3743:0*/ __Vtemp_318;
    VlWide<116>/*3711:0*/ __Vtemp_319;
    VlWide<113>/*3615:0*/ __Vtemp_320;
    VlWide<114>/*3647:0*/ __Vtemp_321;
    VlWide<115>/*3679:0*/ __Vtemp_322;
    VlWide<113>/*3615:0*/ __Vtemp_323;
    VlWide<114>/*3647:0*/ __Vtemp_324;
    VlWide<112>/*3583:0*/ __Vtemp_325;
    VlWide<113>/*3615:0*/ __Vtemp_326;
    VlWide<114>/*3647:0*/ __Vtemp_327;
    VlWide<113>/*3615:0*/ __Vtemp_328;
    VlWide<112>/*3583:0*/ __Vtemp_329;
    VlWide<113>/*3615:0*/ __Vtemp_330;
    VlWide<112>/*3583:0*/ __Vtemp_331;
    VlWide<109>/*3487:0*/ __Vtemp_332;
    VlWide<110>/*3519:0*/ __Vtemp_333;
    VlWide<111>/*3551:0*/ __Vtemp_334;
    VlWide<109>/*3487:0*/ __Vtemp_335;
    VlWide<110>/*3519:0*/ __Vtemp_336;
    VlWide<108>/*3455:0*/ __Vtemp_337;
    VlWide<109>/*3487:0*/ __Vtemp_338;
    VlWide<110>/*3519:0*/ __Vtemp_339;
    VlWide<109>/*3487:0*/ __Vtemp_340;
    VlWide<108>/*3455:0*/ __Vtemp_341;
    VlWide<109>/*3487:0*/ __Vtemp_342;
    VlWide<108>/*3455:0*/ __Vtemp_343;
    VlWide<105>/*3359:0*/ __Vtemp_344;
    VlWide<106>/*3391:0*/ __Vtemp_345;
    VlWide<107>/*3423:0*/ __Vtemp_346;
    VlWide<105>/*3359:0*/ __Vtemp_347;
    VlWide<106>/*3391:0*/ __Vtemp_348;
    VlWide<104>/*3327:0*/ __Vtemp_349;
    VlWide<105>/*3359:0*/ __Vtemp_350;
    VlWide<106>/*3391:0*/ __Vtemp_351;
    VlWide<105>/*3359:0*/ __Vtemp_352;
    VlWide<104>/*3327:0*/ __Vtemp_353;
    VlWide<105>/*3359:0*/ __Vtemp_354;
    VlWide<104>/*3327:0*/ __Vtemp_355;
    VlWide<101>/*3231:0*/ __Vtemp_356;
    VlWide<102>/*3263:0*/ __Vtemp_357;
    VlWide<103>/*3295:0*/ __Vtemp_358;
    VlWide<101>/*3231:0*/ __Vtemp_359;
    VlWide<102>/*3263:0*/ __Vtemp_360;
    VlWide<100>/*3199:0*/ __Vtemp_361;
    VlWide<101>/*3231:0*/ __Vtemp_362;
    VlWide<102>/*3263:0*/ __Vtemp_363;
    VlWide<101>/*3231:0*/ __Vtemp_364;
    VlWide<100>/*3199:0*/ __Vtemp_365;
    VlWide<101>/*3231:0*/ __Vtemp_366;
    VlWide<100>/*3199:0*/ __Vtemp_367;
    VlWide<97>/*3103:0*/ __Vtemp_368;
    VlWide<98>/*3135:0*/ __Vtemp_369;
    VlWide<99>/*3167:0*/ __Vtemp_370;
    VlWide<97>/*3103:0*/ __Vtemp_371;
    VlWide<98>/*3135:0*/ __Vtemp_372;
    VlWide<96>/*3071:0*/ __Vtemp_373;
    VlWide<97>/*3103:0*/ __Vtemp_374;
    VlWide<98>/*3135:0*/ __Vtemp_375;
    VlWide<97>/*3103:0*/ __Vtemp_376;
    VlWide<96>/*3071:0*/ __Vtemp_377;
    VlWide<97>/*3103:0*/ __Vtemp_378;
    VlWide<6>/*191:0*/ __Vtemp_382;
    VlWide<97>/*3103:0*/ __Vtemp_383;
    VlWide<96>/*3071:0*/ __Vtemp_384;
    VlWide<5>/*159:0*/ __Vtemp_387;
    VlWide<96>/*3071:0*/ __Vtemp_388;
    VlWide<93>/*2975:0*/ __Vtemp_389;
    VlWide<94>/*3007:0*/ __Vtemp_390;
    VlWide<95>/*3039:0*/ __Vtemp_391;
    VlWide<4>/*127:0*/ __Vtemp_393;
    VlWide<95>/*3039:0*/ __Vtemp_394;
    VlWide<93>/*2975:0*/ __Vtemp_395;
    VlWide<94>/*3007:0*/ __Vtemp_396;
    VlWide<92>/*2943:0*/ __Vtemp_397;
    VlWide<93>/*2975:0*/ __Vtemp_398;
    VlWide<94>/*3007:0*/ __Vtemp_399;
    VlWide<3>/*95:0*/ __Vtemp_400;
    VlWide<94>/*3007:0*/ __Vtemp_401;
    VlWide<93>/*2975:0*/ __Vtemp_402;
    VlWide<92>/*2943:0*/ __Vtemp_403;
    VlWide<93>/*2975:0*/ __Vtemp_404;
    VlWide<93>/*2975:0*/ __Vtemp_405;
    VlWide<92>/*2943:0*/ __Vtemp_406;
    VlWide<91>/*2911:0*/ __Vtemp_407;
    VlWide<92>/*2943:0*/ __Vtemp_408;
    VlWide<89>/*2847:0*/ __Vtemp_409;
    VlWide<90>/*2879:0*/ __Vtemp_410;
    VlWide<91>/*2911:0*/ __Vtemp_411;
    VlWide<89>/*2847:0*/ __Vtemp_412;
    VlWide<90>/*2879:0*/ __Vtemp_413;
    VlWide<88>/*2815:0*/ __Vtemp_414;
    VlWide<89>/*2847:0*/ __Vtemp_415;
    VlWide<90>/*2879:0*/ __Vtemp_416;
    VlWide<4>/*127:0*/ __Vtemp_418;
    VlWide<90>/*2879:0*/ __Vtemp_419;
    VlWide<89>/*2847:0*/ __Vtemp_420;
    VlWide<88>/*2815:0*/ __Vtemp_421;
    VlWide<89>/*2847:0*/ __Vtemp_422;
    VlWide<3>/*95:0*/ __Vtemp_423;
    VlWide<89>/*2847:0*/ __Vtemp_424;
    VlWide<88>/*2815:0*/ __Vtemp_425;
    VlWide<88>/*2815:0*/ __Vtemp_426;
    VlWide<85>/*2719:0*/ __Vtemp_427;
    VlWide<86>/*2751:0*/ __Vtemp_428;
    VlWide<87>/*2783:0*/ __Vtemp_429;
    VlWide<86>/*2751:0*/ __Vtemp_430;
    VlWide<87>/*2783:0*/ __Vtemp_431;
    VlWide<85>/*2719:0*/ __Vtemp_432;
    VlWide<86>/*2751:0*/ __Vtemp_433;
    VlWide<84>/*2687:0*/ __Vtemp_434;
    VlWide<85>/*2719:0*/ __Vtemp_435;
    VlWide<86>/*2751:0*/ __Vtemp_436;
    VlWide<85>/*2719:0*/ __Vtemp_437;
    VlWide<84>/*2687:0*/ __Vtemp_438;
    VlWide<85>/*2719:0*/ __Vtemp_439;
    VlWide<4>/*127:0*/ __Vtemp_441;
    VlWide<85>/*2719:0*/ __Vtemp_442;
    VlWide<84>/*2687:0*/ __Vtemp_443;
    VlWide<3>/*95:0*/ __Vtemp_444;
    VlWide<84>/*2687:0*/ __Vtemp_445;
    VlWide<81>/*2591:0*/ __Vtemp_446;
    VlWide<82>/*2623:0*/ __Vtemp_447;
    VlWide<83>/*2655:0*/ __Vtemp_448;
    VlWide<83>/*2655:0*/ __Vtemp_449;
    VlWide<81>/*2591:0*/ __Vtemp_450;
    VlWide<82>/*2623:0*/ __Vtemp_451;
    VlWide<80>/*2559:0*/ __Vtemp_452;
    VlWide<81>/*2591:0*/ __Vtemp_453;
    VlWide<82>/*2623:0*/ __Vtemp_454;
    VlWide<81>/*2591:0*/ __Vtemp_455;
    VlWide<82>/*2623:0*/ __Vtemp_456;
    VlWide<81>/*2591:0*/ __Vtemp_457;
    VlWide<80>/*2559:0*/ __Vtemp_458;
    VlWide<81>/*2591:0*/ __Vtemp_459;
    VlWide<80>/*2559:0*/ __Vtemp_460;
    VlWide<4>/*127:0*/ __Vtemp_462;
    VlWide<80>/*2559:0*/ __Vtemp_463;
    VlWide<77>/*2463:0*/ __Vtemp_464;
    VlWide<78>/*2495:0*/ __Vtemp_465;
    VlWide<79>/*2527:0*/ __Vtemp_466;
    VlWide<3>/*95:0*/ __Vtemp_467;
    VlWide<79>/*2527:0*/ __Vtemp_468;
    VlWide<77>/*2463:0*/ __Vtemp_469;
    VlWide<78>/*2495:0*/ __Vtemp_470;
    VlWide<76>/*2431:0*/ __Vtemp_471;
    VlWide<77>/*2463:0*/ __Vtemp_472;
    VlWide<78>/*2495:0*/ __Vtemp_473;
    VlWide<78>/*2495:0*/ __Vtemp_474;
    VlWide<77>/*2463:0*/ __Vtemp_475;
    VlWide<76>/*2431:0*/ __Vtemp_476;
    VlWide<77>/*2463:0*/ __Vtemp_477;
    VlWide<76>/*2431:0*/ __Vtemp_478;
    VlWide<77>/*2463:0*/ __Vtemp_479;
    VlWide<76>/*2431:0*/ __Vtemp_480;
    VlWide<73>/*2335:0*/ __Vtemp_481;
    VlWide<74>/*2367:0*/ __Vtemp_482;
    VlWide<75>/*2399:0*/ __Vtemp_483;
    VlWide<4>/*127:0*/ __Vtemp_485;
    VlWide<75>/*2399:0*/ __Vtemp_486;
    VlWide<73>/*2335:0*/ __Vtemp_487;
    VlWide<74>/*2367:0*/ __Vtemp_488;
    VlWide<72>/*2303:0*/ __Vtemp_489;
    VlWide<73>/*2335:0*/ __Vtemp_490;
    VlWide<74>/*2367:0*/ __Vtemp_491;
    VlWide<3>/*95:0*/ __Vtemp_492;
    VlWide<74>/*2367:0*/ __Vtemp_493;
    VlWide<73>/*2335:0*/ __Vtemp_494;
    VlWide<72>/*2303:0*/ __Vtemp_495;
    VlWide<73>/*2335:0*/ __Vtemp_496;
    VlWide<73>/*2335:0*/ __Vtemp_497;
    VlWide<72>/*2303:0*/ __Vtemp_498;
    VlWide<71>/*2271:0*/ __Vtemp_499;
    VlWide<72>/*2303:0*/ __Vtemp_500;
    VlWide<69>/*2207:0*/ __Vtemp_501;
    VlWide<70>/*2239:0*/ __Vtemp_502;
    VlWide<71>/*2271:0*/ __Vtemp_503;
    VlWide<69>/*2207:0*/ __Vtemp_504;
    VlWide<70>/*2239:0*/ __Vtemp_505;
    VlWide<68>/*2175:0*/ __Vtemp_506;
    VlWide<69>/*2207:0*/ __Vtemp_507;
    VlWide<70>/*2239:0*/ __Vtemp_508;
    VlWide<4>/*127:0*/ __Vtemp_510;
    VlWide<70>/*2239:0*/ __Vtemp_511;
    VlWide<69>/*2207:0*/ __Vtemp_512;
    VlWide<68>/*2175:0*/ __Vtemp_513;
    VlWide<69>/*2207:0*/ __Vtemp_514;
    VlWide<3>/*95:0*/ __Vtemp_515;
    VlWide<69>/*2207:0*/ __Vtemp_516;
    VlWide<68>/*2175:0*/ __Vtemp_517;
    VlWide<68>/*2175:0*/ __Vtemp_518;
    VlWide<65>/*2079:0*/ __Vtemp_519;
    VlWide<66>/*2111:0*/ __Vtemp_520;
    VlWide<67>/*2143:0*/ __Vtemp_521;
    VlWide<66>/*2111:0*/ __Vtemp_522;
    VlWide<67>/*2143:0*/ __Vtemp_523;
    VlWide<65>/*2079:0*/ __Vtemp_524;
    VlWide<66>/*2111:0*/ __Vtemp_525;
    VlWide<64>/*2047:0*/ __Vtemp_526;
    VlWide<65>/*2079:0*/ __Vtemp_527;
    VlWide<66>/*2111:0*/ __Vtemp_528;
    VlWide<65>/*2079:0*/ __Vtemp_529;
    VlWide<64>/*2047:0*/ __Vtemp_530;
    VlWide<65>/*2079:0*/ __Vtemp_531;
    VlWide<4>/*127:0*/ __Vtemp_533;
    VlWide<65>/*2079:0*/ __Vtemp_534;
    VlWide<64>/*2047:0*/ __Vtemp_535;
    VlWide<64>/*2047:0*/ __Vtemp_537;
    VlWide<63>/*2015:0*/ __Vtemp_540;
    VlWide<63>/*2015:0*/ __Vtemp_541;
    VlWide<62>/*1983:0*/ __Vtemp_543;
    VlWide<62>/*1983:0*/ __Vtemp_546;
    VlWide<62>/*1983:0*/ __Vtemp_548;
    VlWide<61>/*1951:0*/ __Vtemp_549;
    VlWide<61>/*1951:0*/ __Vtemp_551;
    VlWide<60>/*1919:0*/ __Vtemp_552;
    VlWide<60>/*1919:0*/ __Vtemp_555;
    VlWide<59>/*1887:0*/ __Vtemp_558;
    VlWide<59>/*1887:0*/ __Vtemp_560;
    VlWide<58>/*1855:0*/ __Vtemp_562;
    VlWide<58>/*1855:0*/ __Vtemp_565;
    VlWide<58>/*1855:0*/ __Vtemp_566;
    // Body
    bufp->fullWData(oldp+565185,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29399),7104);
    bufp->fullWData(oldp+565407,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31351),7104);
    bufp->fullWData(oldp+565629,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16659),7104);
    bufp->fullWData(oldp+565851,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18581),7104);
    bufp->fullWData(oldp+566073,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14413),7104);
    bufp->fullWData(oldp+566295,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20503),7104);
    bufp->fullWData(oldp+566517,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22425),7104);
    bufp->fullWData(oldp+566739,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38325),7104);
    bufp->fullWData(oldp+566961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40268),7104);
    VL_CONCAT_WWI(7040,7008,32, __Vtemp_1, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42153, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U]))));
    VL_CONCAT_WWI(7072,7040,32, __Vtemp_2, __Vtemp_1, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa3U]))));
    VL_CONCAT_WWI(7104,7072,32, __Vtemp_3, __Vtemp_2, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa2U]))));
    bufp->fullWData(oldp+567183,(__Vtemp_3),7104);
    VL_CONCAT_WWI(7072,7040,32, __Vtemp_4, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11981, 
                  ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa3U]))));
    bufp->fullWData(oldp+567405,(__Vtemp_4),7072);
    bufp->fullWData(oldp+567626,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29394),7072);
    bufp->fullWData(oldp+567847,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31346),7072);
    bufp->fullWData(oldp+568068,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16654),7072);
    bufp->fullWData(oldp+568289,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18576),7072);
    bufp->fullWData(oldp+568510,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14406),7072);
    bufp->fullWData(oldp+568731,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20498),7072);
    bufp->fullWData(oldp+568952,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22420),7072);
    bufp->fullWData(oldp+569173,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38320),7072);
    bufp->fullWData(oldp+569394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40263),7072);
    VL_CONCAT_WWI(7040,7008,32, __Vtemp_5, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42153, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U]))));
    VL_CONCAT_WWI(7072,7040,32, __Vtemp_6, __Vtemp_5, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa3U]))));
    bufp->fullWData(oldp+569615,(__Vtemp_6),7072);
    bufp->fullWData(oldp+569836,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11981),7040);
    bufp->fullWData(oldp+570056,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29388),7040);
    bufp->fullWData(oldp+570276,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31341),7040);
    bufp->fullWData(oldp+570496,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16649),7040);
    bufp->fullWData(oldp+570716,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18571),7040);
    bufp->fullWData(oldp+570936,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14399),7040);
    bufp->fullWData(oldp+571156,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20493),7040);
    bufp->fullWData(oldp+571376,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22415),7040);
    bufp->fullWData(oldp+571596,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38314),7040);
    bufp->fullWData(oldp+571816,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40258),7040);
    VL_CONCAT_WWI(7040,7008,32, __Vtemp_7, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42153, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa4U]))));
    bufp->fullWData(oldp+572036,(__Vtemp_7),7040);
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_8, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11960, 
                  ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U]))));
    VL_CONCAT_WWI(6976,6944,32, __Vtemp_9, __Vtemp_8, 
                  ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa6U]))));
    VL_CONCAT_WWI(7008,6976,32, __Vtemp_10, __Vtemp_9, 
                  ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa5U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa5U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa5U]))));
    bufp->fullWData(oldp+572256,(__Vtemp_10),7008);
    bufp->fullWData(oldp+572475,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29383),7008);
    bufp->fullWData(oldp+572694,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31336),7008);
    bufp->fullWData(oldp+572913,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16644),7008);
    bufp->fullWData(oldp+573132,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18566),7008);
    bufp->fullWData(oldp+573351,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14392),7008);
    bufp->fullWData(oldp+573570,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20488),7008);
    bufp->fullWData(oldp+573789,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22410),7008);
    bufp->fullWData(oldp+574008,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38309),7008);
    bufp->fullWData(oldp+574227,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40253),7008);
    bufp->fullWData(oldp+574446,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42153),7008);
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_11, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11960, 
                  ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U]))));
    VL_CONCAT_WWI(6976,6944,32, __Vtemp_12, __Vtemp_11, 
                  ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa6U]))));
    bufp->fullWData(oldp+574665,(__Vtemp_12),6976);
    bufp->fullWData(oldp+574883,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29378),6976);
    bufp->fullWData(oldp+575101,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31331),6976);
    bufp->fullWData(oldp+575319,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16639),6976);
    bufp->fullWData(oldp+575537,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18561),6976);
    bufp->fullWData(oldp+575755,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14385),6976);
    bufp->fullWData(oldp+575973,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20483),6976);
    bufp->fullWData(oldp+576191,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22405),6976);
    bufp->fullWData(oldp+576409,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38304),6976);
    bufp->fullWData(oldp+576627,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40248),6976);
    VL_CONCAT_WWI(6912,6880,32, __Vtemp_13, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42133, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U]))));
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_14, __Vtemp_13, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa7U]))));
    VL_CONCAT_WWI(6976,6944,32, __Vtemp_15, __Vtemp_14, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa6U]))));
    bufp->fullWData(oldp+576845,(__Vtemp_15),6976);
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_16, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11960, 
                  ((((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x14U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa7U]))));
    bufp->fullWData(oldp+577063,(__Vtemp_16),6944);
    bufp->fullWData(oldp+577280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29373),6944);
    bufp->fullWData(oldp+577497,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31326),6944);
    bufp->fullWData(oldp+577714,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16634),6944);
    bufp->fullWData(oldp+577931,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18556),6944);
    bufp->fullWData(oldp+578148,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14378),6944);
    bufp->fullWData(oldp+578365,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20478),6944);
    bufp->fullWData(oldp+578582,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22400),6944);
    bufp->fullWData(oldp+578799,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38299),6944);
    bufp->fullWData(oldp+579016,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40243),6944);
    VL_CONCAT_WWI(6912,6880,32, __Vtemp_17, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42133, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U]))));
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_18, __Vtemp_17, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa7U]))));
    bufp->fullWData(oldp+579233,(__Vtemp_18),6944);
    bufp->fullWData(oldp+579450,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11960),6912);
    bufp->fullWData(oldp+579666,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29367),6912);
    bufp->fullWData(oldp+579882,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31321),6912);
    bufp->fullWData(oldp+580098,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16629),6912);
    bufp->fullWData(oldp+580314,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18551),6912);
    bufp->fullWData(oldp+580530,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14371),6912);
    bufp->fullWData(oldp+580746,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20473),6912);
    bufp->fullWData(oldp+580962,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22395),6912);
    bufp->fullWData(oldp+581178,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38293),6912);
    bufp->fullWData(oldp+581394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40238),6912);
    VL_CONCAT_WWI(6912,6880,32, __Vtemp_19, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42133, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xa8U]))));
    bufp->fullWData(oldp+581610,(__Vtemp_19),6912);
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_20, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11940, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU]))));
    VL_CONCAT_WWI(6848,6816,32, __Vtemp_21, __Vtemp_20, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaaU]))));
    VL_CONCAT_WWI(6880,6848,32, __Vtemp_22, __Vtemp_21, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa9U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa9U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xa9U]))));
    bufp->fullWData(oldp+581826,(__Vtemp_22),6880);
    bufp->fullWData(oldp+582041,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29362),6880);
    bufp->fullWData(oldp+582256,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31316),6880);
    bufp->fullWData(oldp+582471,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16624),6880);
    bufp->fullWData(oldp+582686,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18546),6880);
    bufp->fullWData(oldp+582901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14364),6880);
    bufp->fullWData(oldp+583116,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20468),6880);
    bufp->fullWData(oldp+583331,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22390),6880);
    bufp->fullWData(oldp+583546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38288),6880);
    bufp->fullWData(oldp+583761,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40233),6880);
    bufp->fullWData(oldp+583976,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42133),6880);
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_23, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11940, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU]))));
    VL_CONCAT_WWI(6848,6816,32, __Vtemp_24, __Vtemp_23, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaaU]))));
    bufp->fullWData(oldp+584191,(__Vtemp_24),6848);
    bufp->fullWData(oldp+584405,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29357),6848);
    bufp->fullWData(oldp+584619,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31311),6848);
    bufp->fullWData(oldp+584833,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16619),6848);
    bufp->fullWData(oldp+585047,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18541),6848);
    bufp->fullWData(oldp+585261,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14357),6848);
    bufp->fullWData(oldp+585475,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20463),6848);
    bufp->fullWData(oldp+585689,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22385),6848);
    bufp->fullWData(oldp+585903,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38283),6848);
    bufp->fullWData(oldp+586117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40228),6848);
    VL_CONCAT_WWI(6784,6752,32, __Vtemp_25, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42113, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU]))));
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_26, __Vtemp_25, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xabU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xabU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xabU]))));
    VL_CONCAT_WWI(6848,6816,32, __Vtemp_27, __Vtemp_26, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xaaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xaaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xaaU]))));
    bufp->fullWData(oldp+586331,(__Vtemp_27),6848);
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_28, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11940, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xabU]))));
    bufp->fullWData(oldp+586545,(__Vtemp_28),6816);
    bufp->fullWData(oldp+586758,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29352),6816);
    bufp->fullWData(oldp+586971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31306),6816);
    bufp->fullWData(oldp+587184,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16614),6816);
    bufp->fullWData(oldp+587397,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18536),6816);
    bufp->fullWData(oldp+587610,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14350),6816);
    bufp->fullWData(oldp+587823,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20458),6816);
    bufp->fullWData(oldp+588036,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22380),6816);
    bufp->fullWData(oldp+588249,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38278),6816);
    bufp->fullWData(oldp+588462,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40223),6816);
    VL_CONCAT_WWI(6784,6752,32, __Vtemp_29, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42113, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU]))));
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_30, __Vtemp_29, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xabU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xabU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xabU]))));
    bufp->fullWData(oldp+588675,(__Vtemp_30),6816);
    bufp->fullWData(oldp+588888,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11940),6784);
    bufp->fullWData(oldp+589100,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29346),6784);
    bufp->fullWData(oldp+589312,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31301),6784);
    bufp->fullWData(oldp+589524,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16609),6784);
    bufp->fullWData(oldp+589736,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18531),6784);
    bufp->fullWData(oldp+589948,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14343),6784);
    bufp->fullWData(oldp+590160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20453),6784);
    bufp->fullWData(oldp+590372,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22375),6784);
    bufp->fullWData(oldp+590584,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38272),6784);
    bufp->fullWData(oldp+590796,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40218),6784);
    VL_CONCAT_WWI(6784,6752,32, __Vtemp_31, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42113, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xacU]))));
    bufp->fullWData(oldp+591008,(__Vtemp_31),6784);
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_32, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11919, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU]))));
    VL_CONCAT_WWI(6720,6688,32, __Vtemp_33, __Vtemp_32, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaeU]))));
    VL_CONCAT_WWI(6752,6720,32, __Vtemp_34, __Vtemp_33, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xadU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xadU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xadU]))));
    bufp->fullWData(oldp+591220,(__Vtemp_34),6752);
    bufp->fullWData(oldp+591431,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29341),6752);
    bufp->fullWData(oldp+591642,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31296),6752);
    bufp->fullWData(oldp+591853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16604),6752);
    bufp->fullWData(oldp+592064,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18526),6752);
    bufp->fullWData(oldp+592275,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14336),6752);
    bufp->fullWData(oldp+592486,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20448),6752);
    bufp->fullWData(oldp+592697,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22370),6752);
    bufp->fullWData(oldp+592908,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38267),6752);
    bufp->fullWData(oldp+593119,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40213),6752);
    bufp->fullWData(oldp+593330,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42113),6752);
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_35, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11919, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU]))));
    VL_CONCAT_WWI(6720,6688,32, __Vtemp_36, __Vtemp_35, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xaeU]))));
    bufp->fullWData(oldp+593541,(__Vtemp_36),6720);
    bufp->fullWData(oldp+593751,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29336),6720);
    bufp->fullWData(oldp+593961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31291),6720);
    bufp->fullWData(oldp+594171,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16599),6720);
    bufp->fullWData(oldp+594381,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18521),6720);
    bufp->fullWData(oldp+594591,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14329),6720);
    bufp->fullWData(oldp+594801,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20443),6720);
    bufp->fullWData(oldp+595011,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22365),6720);
    bufp->fullWData(oldp+595221,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38262),6720);
    bufp->fullWData(oldp+595431,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40208),6720);
    VL_CONCAT_WWI(6656,6624,32, __Vtemp_37, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42092, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U]))));
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_38, __Vtemp_37, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xafU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xafU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xafU]))));
    VL_CONCAT_WWI(6720,6688,32, __Vtemp_39, __Vtemp_38, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xaeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xaeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xaeU]))));
    bufp->fullWData(oldp+595641,(__Vtemp_39),6720);
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_40, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11919, 
                  ((((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x15U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xafU]))));
    bufp->fullWData(oldp+595851,(__Vtemp_40),6688);
    bufp->fullWData(oldp+596060,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29331),6688);
    bufp->fullWData(oldp+596269,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31286),6688);
    bufp->fullWData(oldp+596478,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16594),6688);
    bufp->fullWData(oldp+596687,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18516),6688);
    bufp->fullWData(oldp+596896,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14322),6688);
    bufp->fullWData(oldp+597105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20438),6688);
    bufp->fullWData(oldp+597314,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22360),6688);
    bufp->fullWData(oldp+597523,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38257),6688);
    bufp->fullWData(oldp+597732,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40203),6688);
    VL_CONCAT_WWI(6656,6624,32, __Vtemp_41, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42092, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U]))));
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_42, __Vtemp_41, 
                  ((((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xafU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xafU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xaU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xafU]))));
    bufp->fullWData(oldp+597941,(__Vtemp_42),6688);
    bufp->fullWData(oldp+598150,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11919),6656);
    bufp->fullWData(oldp+598358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29325),6656);
    bufp->fullWData(oldp+598566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31281),6656);
    bufp->fullWData(oldp+598774,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16589),6656);
    bufp->fullWData(oldp+598982,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18511),6656);
    bufp->fullWData(oldp+599190,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14315),6656);
    bufp->fullWData(oldp+599398,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20433),6656);
    bufp->fullWData(oldp+599606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22355),6656);
    bufp->fullWData(oldp+599814,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38251),6656);
    bufp->fullWData(oldp+600022,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40198),6656);
    VL_CONCAT_WWI(6656,6624,32, __Vtemp_43, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42092, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb0U]))));
    bufp->fullWData(oldp+600230,(__Vtemp_43),6656);
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_44, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11899, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U]))));
    VL_CONCAT_WWI(6592,6560,32, __Vtemp_45, __Vtemp_44, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb2U]))));
    VL_CONCAT_WWI(6624,6592,32, __Vtemp_46, __Vtemp_45, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb1U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb1U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb1U]))));
    bufp->fullWData(oldp+600438,(__Vtemp_46),6624);
    bufp->fullWData(oldp+600645,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29320),6624);
    bufp->fullWData(oldp+600852,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31276),6624);
    bufp->fullWData(oldp+601059,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16584),6624);
    bufp->fullWData(oldp+601266,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18506),6624);
    bufp->fullWData(oldp+601473,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14308),6624);
    bufp->fullWData(oldp+601680,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20428),6624);
    bufp->fullWData(oldp+601887,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22350),6624);
    bufp->fullWData(oldp+602094,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38246),6624);
    bufp->fullWData(oldp+602301,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40193),6624);
    bufp->fullWData(oldp+602508,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42092),6624);
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_47, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11899, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U]))));
    VL_CONCAT_WWI(6592,6560,32, __Vtemp_48, __Vtemp_47, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb2U]))));
    bufp->fullWData(oldp+602715,(__Vtemp_48),6592);
    bufp->fullWData(oldp+602921,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29315),6592);
    bufp->fullWData(oldp+603127,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31271),6592);
    bufp->fullWData(oldp+603333,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16579),6592);
    bufp->fullWData(oldp+603539,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18501),6592);
    bufp->fullWData(oldp+603745,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14301),6592);
    bufp->fullWData(oldp+603951,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20423),6592);
    bufp->fullWData(oldp+604157,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22345),6592);
    bufp->fullWData(oldp+604363,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38241),6592);
    bufp->fullWData(oldp+604569,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40188),6592);
    VL_CONCAT_WWI(6528,6496,32, __Vtemp_49, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42072, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U]))));
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_50, __Vtemp_49, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb3U]))));
    VL_CONCAT_WWI(6592,6560,32, __Vtemp_51, __Vtemp_50, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb2U]))));
    bufp->fullWData(oldp+604775,(__Vtemp_51),6592);
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_52, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11899, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb3U]))));
    bufp->fullWData(oldp+604981,(__Vtemp_52),6560);
    bufp->fullWData(oldp+605186,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29310),6560);
    bufp->fullWData(oldp+605391,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31266),6560);
    bufp->fullWData(oldp+605596,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16574),6560);
    bufp->fullWData(oldp+605801,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18496),6560);
    bufp->fullWData(oldp+606006,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14294),6560);
    bufp->fullWData(oldp+606211,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20418),6560);
    bufp->fullWData(oldp+606416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22340),6560);
    bufp->fullWData(oldp+606621,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38236),6560);
    bufp->fullWData(oldp+606826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40183),6560);
    VL_CONCAT_WWI(6528,6496,32, __Vtemp_53, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42072, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U]))));
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_54, __Vtemp_53, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb3U]))));
    bufp->fullWData(oldp+607031,(__Vtemp_54),6560);
    bufp->fullWData(oldp+607236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11899),6528);
    bufp->fullWData(oldp+607440,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29304),6528);
    bufp->fullWData(oldp+607644,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31261),6528);
    bufp->fullWData(oldp+607848,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16569),6528);
    bufp->fullWData(oldp+608052,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18491),6528);
    bufp->fullWData(oldp+608256,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14287),6528);
    bufp->fullWData(oldp+608460,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20413),6528);
    bufp->fullWData(oldp+608664,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22335),6528);
    bufp->fullWData(oldp+608868,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38230),6528);
    bufp->fullWData(oldp+609072,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40178),6528);
    VL_CONCAT_WWI(6528,6496,32, __Vtemp_55, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42072, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb4U]))));
    bufp->fullWData(oldp+609276,(__Vtemp_55),6528);
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_56, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11878, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U]))));
    VL_CONCAT_WWI(6464,6432,32, __Vtemp_57, __Vtemp_56, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb6U]))));
    VL_CONCAT_WWI(6496,6464,32, __Vtemp_58, __Vtemp_57, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb5U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb5U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb5U]))));
    bufp->fullWData(oldp+609480,(__Vtemp_58),6496);
    bufp->fullWData(oldp+609683,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29299),6496);
    bufp->fullWData(oldp+609886,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31256),6496);
    bufp->fullWData(oldp+610089,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16564),6496);
    bufp->fullWData(oldp+610292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18486),6496);
    bufp->fullWData(oldp+610495,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14280),6496);
    bufp->fullWData(oldp+610698,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20408),6496);
    bufp->fullWData(oldp+610901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22330),6496);
    bufp->fullWData(oldp+611104,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38225),6496);
    bufp->fullWData(oldp+611307,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40173),6496);
    bufp->fullWData(oldp+611510,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42072),6496);
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_59, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11878, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U]))));
    VL_CONCAT_WWI(6464,6432,32, __Vtemp_60, __Vtemp_59, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb6U]))));
    bufp->fullWData(oldp+611713,(__Vtemp_60),6464);
    bufp->fullWData(oldp+611915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29294),6464);
    bufp->fullWData(oldp+612117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31251),6464);
    bufp->fullWData(oldp+612319,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16559),6464);
    bufp->fullWData(oldp+612521,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18481),6464);
    bufp->fullWData(oldp+612723,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14273),6464);
    bufp->fullWData(oldp+612925,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20403),6464);
    bufp->fullWData(oldp+613127,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22325),6464);
    bufp->fullWData(oldp+613329,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38220),6464);
    bufp->fullWData(oldp+613531,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40168),6464);
    VL_CONCAT_WWI(6400,6368,32, __Vtemp_61, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42052, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U]))));
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_62, __Vtemp_61, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb7U]))));
    VL_CONCAT_WWI(6464,6432,32, __Vtemp_63, __Vtemp_62, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb6U]))));
    bufp->fullWData(oldp+613733,(__Vtemp_63),6464);
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_64, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11878, 
                  ((((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb7U]))));
    bufp->fullWData(oldp+613935,(__Vtemp_64),6432);
    bufp->fullWData(oldp+614136,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29289),6432);
    bufp->fullWData(oldp+614337,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31246),6432);
    bufp->fullWData(oldp+614538,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16554),6432);
    bufp->fullWData(oldp+614739,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18476),6432);
    bufp->fullWData(oldp+614940,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14266),6432);
    bufp->fullWData(oldp+615141,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20398),6432);
    bufp->fullWData(oldp+615342,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22320),6432);
    bufp->fullWData(oldp+615543,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38215),6432);
    bufp->fullWData(oldp+615744,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40163),6432);
    VL_CONCAT_WWI(6400,6368,32, __Vtemp_65, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42052, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U]))));
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_66, __Vtemp_65, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb7U]))));
    bufp->fullWData(oldp+615945,(__Vtemp_66),6432);
    bufp->fullWData(oldp+616146,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11878),6400);
    bufp->fullWData(oldp+616346,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29283),6400);
    bufp->fullWData(oldp+616546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31241),6400);
    bufp->fullWData(oldp+616746,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16549),6400);
    bufp->fullWData(oldp+616946,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18471),6400);
    bufp->fullWData(oldp+617146,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14259),6400);
    bufp->fullWData(oldp+617346,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20393),6400);
    bufp->fullWData(oldp+617546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22315),6400);
    bufp->fullWData(oldp+617746,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38209),6400);
    bufp->fullWData(oldp+617946,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40158),6400);
    VL_CONCAT_WWI(6400,6368,32, __Vtemp_67, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42052, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xb8U]))));
    bufp->fullWData(oldp+618146,(__Vtemp_67),6400);
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_68, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11858, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU]))));
    VL_CONCAT_WWI(6336,6304,32, __Vtemp_69, __Vtemp_68, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbaU]))));
    VL_CONCAT_WWI(6368,6336,32, __Vtemp_70, __Vtemp_69, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb9U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb9U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xb9U]))));
    bufp->fullWData(oldp+618346,(__Vtemp_70),6368);
    bufp->fullWData(oldp+618545,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29278),6368);
    bufp->fullWData(oldp+618744,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31236),6368);
    bufp->fullWData(oldp+618943,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16544),6368);
    bufp->fullWData(oldp+619142,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18466),6368);
    bufp->fullWData(oldp+619341,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14252),6368);
    bufp->fullWData(oldp+619540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20388),6368);
    bufp->fullWData(oldp+619739,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22310),6368);
    bufp->fullWData(oldp+619938,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38204),6368);
    bufp->fullWData(oldp+620137,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40153),6368);
    bufp->fullWData(oldp+620336,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42052),6368);
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_71, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11858, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU]))));
    VL_CONCAT_WWI(6336,6304,32, __Vtemp_72, __Vtemp_71, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbaU]))));
    bufp->fullWData(oldp+620535,(__Vtemp_72),6336);
    bufp->fullWData(oldp+620733,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29273),6336);
    bufp->fullWData(oldp+620931,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31231),6336);
    bufp->fullWData(oldp+621129,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16539),6336);
    bufp->fullWData(oldp+621327,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18461),6336);
    bufp->fullWData(oldp+621525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14245),6336);
    bufp->fullWData(oldp+621723,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20383),6336);
    bufp->fullWData(oldp+621921,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22305),6336);
    bufp->fullWData(oldp+622119,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38199),6336);
    bufp->fullWData(oldp+622317,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40148),6336);
    VL_CONCAT_WWI(6272,6240,32, __Vtemp_73, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42032, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU]))));
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_74, __Vtemp_73, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbbU]))));
    VL_CONCAT_WWI(6336,6304,32, __Vtemp_75, __Vtemp_74, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbaU]))));
    bufp->fullWData(oldp+622515,(__Vtemp_75),6336);
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_76, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11858, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbbU]))));
    bufp->fullWData(oldp+622713,(__Vtemp_76),6304);
    bufp->fullWData(oldp+622910,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29268),6304);
    bufp->fullWData(oldp+623107,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31226),6304);
    bufp->fullWData(oldp+623304,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16534),6304);
    bufp->fullWData(oldp+623501,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18456),6304);
    bufp->fullWData(oldp+623698,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14238),6304);
    bufp->fullWData(oldp+623895,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20378),6304);
    bufp->fullWData(oldp+624092,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22300),6304);
    bufp->fullWData(oldp+624289,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38194),6304);
    bufp->fullWData(oldp+624486,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40143),6304);
    VL_CONCAT_WWI(6272,6240,32, __Vtemp_77, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42032, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU]))));
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_78, __Vtemp_77, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbbU]))));
    bufp->fullWData(oldp+624683,(__Vtemp_78),6304);
    bufp->fullWData(oldp+624880,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11858),6272);
    bufp->fullWData(oldp+625076,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29262),6272);
    bufp->fullWData(oldp+625272,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31221),6272);
    bufp->fullWData(oldp+625468,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16529),6272);
    bufp->fullWData(oldp+625664,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18451),6272);
    bufp->fullWData(oldp+625860,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14231),6272);
    bufp->fullWData(oldp+626056,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20373),6272);
    bufp->fullWData(oldp+626252,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22295),6272);
    bufp->fullWData(oldp+626448,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38188),6272);
    bufp->fullWData(oldp+626644,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40138),6272);
    VL_CONCAT_WWI(6272,6240,32, __Vtemp_79, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42032, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbcU]))));
    bufp->fullWData(oldp+626840,(__Vtemp_79),6272);
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_80, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11837, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU]))));
    VL_CONCAT_WWI(6208,6176,32, __Vtemp_81, __Vtemp_80, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbeU]))));
    VL_CONCAT_WWI(6240,6208,32, __Vtemp_82, __Vtemp_81, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbdU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbdU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbdU]))));
    bufp->fullWData(oldp+627036,(__Vtemp_82),6240);
    bufp->fullWData(oldp+627231,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29257),6240);
    bufp->fullWData(oldp+627426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31216),6240);
    bufp->fullWData(oldp+627621,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16524),6240);
    bufp->fullWData(oldp+627816,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18446),6240);
    bufp->fullWData(oldp+628011,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14224),6240);
    bufp->fullWData(oldp+628206,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20368),6240);
    bufp->fullWData(oldp+628401,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22290),6240);
    bufp->fullWData(oldp+628596,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38183),6240);
    bufp->fullWData(oldp+628791,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40133),6240);
    bufp->fullWData(oldp+628986,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42032),6240);
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_83, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11837, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU]))));
    VL_CONCAT_WWI(6208,6176,32, __Vtemp_84, __Vtemp_83, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbeU]))));
    bufp->fullWData(oldp+629181,(__Vtemp_84),6208);
    bufp->fullWData(oldp+629375,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29252),6208);
    bufp->fullWData(oldp+629569,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31211),6208);
    bufp->fullWData(oldp+629763,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16519),6208);
    bufp->fullWData(oldp+629957,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18441),6208);
    bufp->fullWData(oldp+630151,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14217),6208);
    bufp->fullWData(oldp+630345,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20363),6208);
    bufp->fullWData(oldp+630539,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22285),6208);
    bufp->fullWData(oldp+630733,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38178),6208);
    bufp->fullWData(oldp+630927,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40128),6208);
    VL_CONCAT_WWI(6144,6112,32, __Vtemp_85, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42011, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U]))));
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_86, __Vtemp_85, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbfU]))));
    VL_CONCAT_WWI(6208,6176,32, __Vtemp_87, __Vtemp_86, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbeU]))));
    bufp->fullWData(oldp+631121,(__Vtemp_87),6208);
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_88, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11837, 
                  ((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xbfU]))));
    bufp->fullWData(oldp+631315,(__Vtemp_88),6176);
    bufp->fullWData(oldp+631508,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29247),6176);
    bufp->fullWData(oldp+631701,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31206),6176);
    bufp->fullWData(oldp+631894,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16514),6176);
    bufp->fullWData(oldp+632087,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18436),6176);
    bufp->fullWData(oldp+632280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14210),6176);
    bufp->fullWData(oldp+632473,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20358),6176);
    bufp->fullWData(oldp+632666,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22280),6176);
    bufp->fullWData(oldp+632859,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38173),6176);
    bufp->fullWData(oldp+633052,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40123),6176);
    VL_CONCAT_WWI(6144,6112,32, __Vtemp_89, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42011, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U]))));
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_90, __Vtemp_89, 
                  ((((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xbU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xbfU]))));
    bufp->fullWData(oldp+633245,(__Vtemp_90),6176);
    bufp->fullWData(oldp+633438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11837),6144);
    bufp->fullWData(oldp+633630,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29241),6144);
    bufp->fullWData(oldp+633822,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31201),6144);
    bufp->fullWData(oldp+634014,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16509),6144);
    bufp->fullWData(oldp+634206,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18431),6144);
    bufp->fullWData(oldp+634398,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14203),6144);
    bufp->fullWData(oldp+634590,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20353),6144);
    bufp->fullWData(oldp+634782,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22275),6144);
    bufp->fullWData(oldp+634974,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38167),6144);
    bufp->fullWData(oldp+635166,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40118),6144);
    VL_CONCAT_WWI(6144,6112,32, __Vtemp_91, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42011, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc0U]))));
    bufp->fullWData(oldp+635358,(__Vtemp_91),6144);
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_92, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11817, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U]))));
    VL_CONCAT_WWI(6080,6048,32, __Vtemp_93, __Vtemp_92, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc2U]))));
    VL_CONCAT_WWI(6112,6080,32, __Vtemp_94, __Vtemp_93, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc1U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc1U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc1U]))));
    bufp->fullWData(oldp+635550,(__Vtemp_94),6112);
    bufp->fullWData(oldp+635741,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29236),6112);
    bufp->fullWData(oldp+635932,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31196),6112);
    bufp->fullWData(oldp+636123,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16504),6112);
    bufp->fullWData(oldp+636314,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18426),6112);
    bufp->fullWData(oldp+636505,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14196),6112);
    bufp->fullWData(oldp+636696,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20348),6112);
    bufp->fullWData(oldp+636887,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22270),6112);
    bufp->fullWData(oldp+637078,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38162),6112);
    bufp->fullWData(oldp+637269,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40113),6112);
    bufp->fullWData(oldp+637460,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d42011),6112);
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_95, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11817, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U]))));
    VL_CONCAT_WWI(6080,6048,32, __Vtemp_96, __Vtemp_95, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc2U]))));
    bufp->fullWData(oldp+637651,(__Vtemp_96),6080);
    bufp->fullWData(oldp+637841,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29231),6080);
    bufp->fullWData(oldp+638031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31191),6080);
    bufp->fullWData(oldp+638221,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16499),6080);
    bufp->fullWData(oldp+638411,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18421),6080);
    bufp->fullWData(oldp+638601,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14189),6080);
    bufp->fullWData(oldp+638791,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20343),6080);
    bufp->fullWData(oldp+638981,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22265),6080);
    bufp->fullWData(oldp+639171,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38157),6080);
    bufp->fullWData(oldp+639361,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40108),6080);
    VL_CONCAT_WWI(6016,5984,32, __Vtemp_97, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41991, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U]))));
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_98, __Vtemp_97, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc3U]))));
    VL_CONCAT_WWI(6080,6048,32, __Vtemp_99, __Vtemp_98, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc2U]))));
    bufp->fullWData(oldp+639551,(__Vtemp_99),6080);
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_100, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11817, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc3U]))));
    bufp->fullWData(oldp+639741,(__Vtemp_100),6048);
    bufp->fullWData(oldp+639930,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29226),6048);
    bufp->fullWData(oldp+640119,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31186),6048);
    bufp->fullWData(oldp+640308,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16494),6048);
    bufp->fullWData(oldp+640497,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18416),6048);
    bufp->fullWData(oldp+640686,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14182),6048);
    bufp->fullWData(oldp+640875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20338),6048);
    bufp->fullWData(oldp+641064,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22260),6048);
    bufp->fullWData(oldp+641253,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38152),6048);
    bufp->fullWData(oldp+641442,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40103),6048);
    VL_CONCAT_WWI(6016,5984,32, __Vtemp_101, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41991, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U]))));
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_102, __Vtemp_101, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc3U]))));
    bufp->fullWData(oldp+641631,(__Vtemp_102),6048);
    bufp->fullWData(oldp+641820,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11817),6016);
    bufp->fullWData(oldp+642008,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29220),6016);
    bufp->fullWData(oldp+642196,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31181),6016);
    bufp->fullWData(oldp+642384,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16489),6016);
    bufp->fullWData(oldp+642572,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18411),6016);
    bufp->fullWData(oldp+642760,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14175),6016);
    bufp->fullWData(oldp+642948,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20333),6016);
    bufp->fullWData(oldp+643136,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22255),6016);
    bufp->fullWData(oldp+643324,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38146),6016);
    bufp->fullWData(oldp+643512,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40098),6016);
    VL_CONCAT_WWI(6016,5984,32, __Vtemp_103, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41991, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc4U]))));
    bufp->fullWData(oldp+643700,(__Vtemp_103),6016);
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_104, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11796, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U]))));
    VL_CONCAT_WWI(5952,5920,32, __Vtemp_105, __Vtemp_104, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc6U]))));
    VL_CONCAT_WWI(5984,5952,32, __Vtemp_106, __Vtemp_105, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc5U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc5U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc5U]))));
    bufp->fullWData(oldp+643888,(__Vtemp_106),5984);
    bufp->fullWData(oldp+644075,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29215),5984);
    bufp->fullWData(oldp+644262,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31176),5984);
    bufp->fullWData(oldp+644449,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16484),5984);
    bufp->fullWData(oldp+644636,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18406),5984);
    bufp->fullWData(oldp+644823,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14168),5984);
    bufp->fullWData(oldp+645010,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20328),5984);
    bufp->fullWData(oldp+645197,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22250),5984);
    bufp->fullWData(oldp+645384,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38141),5984);
    bufp->fullWData(oldp+645571,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40093),5984);
    bufp->fullWData(oldp+645758,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41991),5984);
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_107, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11796, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U]))));
    VL_CONCAT_WWI(5952,5920,32, __Vtemp_108, __Vtemp_107, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc6U]))));
    bufp->fullWData(oldp+645945,(__Vtemp_108),5952);
    bufp->fullWData(oldp+646131,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29210),5952);
    bufp->fullWData(oldp+646317,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31171),5952);
    bufp->fullWData(oldp+646503,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16479),5952);
    bufp->fullWData(oldp+646689,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18401),5952);
    bufp->fullWData(oldp+646875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14161),5952);
    bufp->fullWData(oldp+647061,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20323),5952);
    bufp->fullWData(oldp+647247,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22245),5952);
    bufp->fullWData(oldp+647433,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38136),5952);
    bufp->fullWData(oldp+647619,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40088),5952);
    VL_CONCAT_WWI(5888,5856,32, __Vtemp_109, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41971, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U]))));
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_110, __Vtemp_109, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc7U]))));
    VL_CONCAT_WWI(5952,5920,32, __Vtemp_111, __Vtemp_110, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc6U]))));
    bufp->fullWData(oldp+647805,(__Vtemp_111),5952);
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_112, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11796, 
                  ((((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x18U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc7U]))));
    bufp->fullWData(oldp+647991,(__Vtemp_112),5920);
    bufp->fullWData(oldp+648176,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29205),5920);
    bufp->fullWData(oldp+648361,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31166),5920);
    bufp->fullWData(oldp+648546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16474),5920);
    bufp->fullWData(oldp+648731,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18396),5920);
    bufp->fullWData(oldp+648916,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14154),5920);
    bufp->fullWData(oldp+649101,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20318),5920);
    bufp->fullWData(oldp+649286,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22240),5920);
    bufp->fullWData(oldp+649471,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38131),5920);
    bufp->fullWData(oldp+649656,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40083),5920);
    VL_CONCAT_WWI(5888,5856,32, __Vtemp_113, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41971, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U]))));
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_114, __Vtemp_113, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc7U]))));
    bufp->fullWData(oldp+649841,(__Vtemp_114),5920);
    bufp->fullWData(oldp+650026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11796),5888);
    bufp->fullWData(oldp+650210,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29199),5888);
    bufp->fullWData(oldp+650394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31161),5888);
    bufp->fullWData(oldp+650578,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16469),5888);
    bufp->fullWData(oldp+650762,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18391),5888);
    bufp->fullWData(oldp+650946,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14147),5888);
    bufp->fullWData(oldp+651130,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20313),5888);
    bufp->fullWData(oldp+651314,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22235),5888);
    bufp->fullWData(oldp+651498,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38125),5888);
    bufp->fullWData(oldp+651682,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40078),5888);
    VL_CONCAT_WWI(5888,5856,32, __Vtemp_115, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41971, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xc8U]))));
    bufp->fullWData(oldp+651866,(__Vtemp_115),5888);
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_116, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11776, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU]))));
    VL_CONCAT_WWI(5824,5792,32, __Vtemp_117, __Vtemp_116, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcaU]))));
    VL_CONCAT_WWI(5856,5824,32, __Vtemp_118, __Vtemp_117, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc9U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc9U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xc9U]))));
    bufp->fullWData(oldp+652050,(__Vtemp_118),5856);
    bufp->fullWData(oldp+652233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29194),5856);
    bufp->fullWData(oldp+652416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31156),5856);
    bufp->fullWData(oldp+652599,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16464),5856);
    bufp->fullWData(oldp+652782,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18386),5856);
    bufp->fullWData(oldp+652965,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14140),5856);
    bufp->fullWData(oldp+653148,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20308),5856);
    bufp->fullWData(oldp+653331,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22230),5856);
    bufp->fullWData(oldp+653514,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38120),5856);
    bufp->fullWData(oldp+653697,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40073),5856);
    bufp->fullWData(oldp+653880,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41971),5856);
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_119, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11776, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU]))));
    VL_CONCAT_WWI(5824,5792,32, __Vtemp_120, __Vtemp_119, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcaU]))));
    bufp->fullWData(oldp+654063,(__Vtemp_120),5824);
    bufp->fullWData(oldp+654245,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29189),5824);
    bufp->fullWData(oldp+654427,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31151),5824);
    bufp->fullWData(oldp+654609,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16459),5824);
    bufp->fullWData(oldp+654791,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18381),5824);
    bufp->fullWData(oldp+654973,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14133),5824);
    bufp->fullWData(oldp+655155,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20303),5824);
    bufp->fullWData(oldp+655337,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22225),5824);
    bufp->fullWData(oldp+655519,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38115),5824);
    bufp->fullWData(oldp+655701,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40068),5824);
    VL_CONCAT_WWI(5760,5728,32, __Vtemp_121, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41951, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU]))));
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_122, __Vtemp_121, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcbU]))));
    VL_CONCAT_WWI(5824,5792,32, __Vtemp_123, __Vtemp_122, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcaU]))));
    bufp->fullWData(oldp+655883,(__Vtemp_123),5824);
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_124, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11776, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcbU]))));
    bufp->fullWData(oldp+656065,(__Vtemp_124),5792);
    bufp->fullWData(oldp+656246,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29184),5792);
    bufp->fullWData(oldp+656427,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31146),5792);
    bufp->fullWData(oldp+656608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16454),5792);
    bufp->fullWData(oldp+656789,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18376),5792);
    bufp->fullWData(oldp+656970,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14126),5792);
    bufp->fullWData(oldp+657151,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20298),5792);
    bufp->fullWData(oldp+657332,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22220),5792);
    bufp->fullWData(oldp+657513,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38110),5792);
    bufp->fullWData(oldp+657694,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40063),5792);
    VL_CONCAT_WWI(5760,5728,32, __Vtemp_125, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41951, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU]))));
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_126, __Vtemp_125, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcbU]))));
    bufp->fullWData(oldp+657875,(__Vtemp_126),5792);
    bufp->fullWData(oldp+658056,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11776),5760);
    bufp->fullWData(oldp+658236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29178),5760);
    bufp->fullWData(oldp+658416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31141),5760);
    bufp->fullWData(oldp+658596,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16449),5760);
    bufp->fullWData(oldp+658776,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18371),5760);
    bufp->fullWData(oldp+658956,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14119),5760);
    bufp->fullWData(oldp+659136,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20293),5760);
    bufp->fullWData(oldp+659316,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22215),5760);
    bufp->fullWData(oldp+659496,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38104),5760);
    bufp->fullWData(oldp+659676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40058),5760);
    VL_CONCAT_WWI(5760,5728,32, __Vtemp_127, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41951, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xccU]))));
    bufp->fullWData(oldp+659856,(__Vtemp_127),5760);
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_128, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11755, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU]))));
    VL_CONCAT_WWI(5696,5664,32, __Vtemp_129, __Vtemp_128, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xceU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xceU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xceU]))));
    VL_CONCAT_WWI(5728,5696,32, __Vtemp_130, __Vtemp_129, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcdU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcdU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcdU]))));
    bufp->fullWData(oldp+660036,(__Vtemp_130),5728);
    bufp->fullWData(oldp+660215,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29173),5728);
    bufp->fullWData(oldp+660394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31136),5728);
    bufp->fullWData(oldp+660573,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16444),5728);
    bufp->fullWData(oldp+660752,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18366),5728);
    bufp->fullWData(oldp+660931,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14112),5728);
    bufp->fullWData(oldp+661110,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20288),5728);
    bufp->fullWData(oldp+661289,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22210),5728);
    bufp->fullWData(oldp+661468,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38099),5728);
    bufp->fullWData(oldp+661647,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40053),5728);
    bufp->fullWData(oldp+661826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41951),5728);
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_131, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11755, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU]))));
    VL_CONCAT_WWI(5696,5664,32, __Vtemp_132, __Vtemp_131, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xceU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xceU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xceU]))));
    bufp->fullWData(oldp+662005,(__Vtemp_132),5696);
    bufp->fullWData(oldp+662183,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29168),5696);
    bufp->fullWData(oldp+662361,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31131),5696);
    bufp->fullWData(oldp+662539,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16439),5696);
    bufp->fullWData(oldp+662717,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18361),5696);
    bufp->fullWData(oldp+662895,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14105),5696);
    bufp->fullWData(oldp+663073,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20283),5696);
    bufp->fullWData(oldp+663251,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22205),5696);
    bufp->fullWData(oldp+663429,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38094),5696);
    bufp->fullWData(oldp+663607,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40048),5696);
    VL_CONCAT_WWI(5632,5600,32, __Vtemp_133, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41930, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U]))));
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_134, __Vtemp_133, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcfU]))));
    VL_CONCAT_WWI(5696,5664,32, __Vtemp_135, __Vtemp_134, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xceU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xceU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xceU]))));
    bufp->fullWData(oldp+663785,(__Vtemp_135),5696);
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_136, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11755, 
                  ((((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x19U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xcfU]))));
    bufp->fullWData(oldp+663963,(__Vtemp_136),5664);
    bufp->fullWData(oldp+664140,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29163),5664);
    bufp->fullWData(oldp+664317,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31126),5664);
    bufp->fullWData(oldp+664494,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16434),5664);
    bufp->fullWData(oldp+664671,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18356),5664);
    bufp->fullWData(oldp+664848,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14098),5664);
    bufp->fullWData(oldp+665025,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20278),5664);
    bufp->fullWData(oldp+665202,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22200),5664);
    bufp->fullWData(oldp+665379,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38089),5664);
    bufp->fullWData(oldp+665556,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40043),5664);
    VL_CONCAT_WWI(5632,5600,32, __Vtemp_137, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41930, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U]))));
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_138, __Vtemp_137, 
                  ((((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xcU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xcfU]))));
    bufp->fullWData(oldp+665733,(__Vtemp_138),5664);
    bufp->fullWData(oldp+665910,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11755),5632);
    bufp->fullWData(oldp+666086,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29157),5632);
    bufp->fullWData(oldp+666262,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31121),5632);
    bufp->fullWData(oldp+666438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16429),5632);
    bufp->fullWData(oldp+666614,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18351),5632);
    bufp->fullWData(oldp+666790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14091),5632);
    bufp->fullWData(oldp+666966,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20273),5632);
    bufp->fullWData(oldp+667142,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22195),5632);
    bufp->fullWData(oldp+667318,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38083),5632);
    bufp->fullWData(oldp+667494,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40038),5632);
    VL_CONCAT_WWI(5632,5600,32, __Vtemp_139, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41930, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd0U]))));
    bufp->fullWData(oldp+667670,(__Vtemp_139),5632);
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_140, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11735, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U]))));
    VL_CONCAT_WWI(5568,5536,32, __Vtemp_141, __Vtemp_140, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd2U]))));
    VL_CONCAT_WWI(5600,5568,32, __Vtemp_142, __Vtemp_141, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd1U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd1U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd1U]))));
    bufp->fullWData(oldp+667846,(__Vtemp_142),5600);
    bufp->fullWData(oldp+668021,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29152),5600);
    bufp->fullWData(oldp+668196,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31116),5600);
    bufp->fullWData(oldp+668371,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16424),5600);
    bufp->fullWData(oldp+668546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18346),5600);
    bufp->fullWData(oldp+668721,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14084),5600);
    bufp->fullWData(oldp+668896,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20268),5600);
    bufp->fullWData(oldp+669071,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22190),5600);
    bufp->fullWData(oldp+669246,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38078),5600);
    bufp->fullWData(oldp+669421,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40033),5600);
    bufp->fullWData(oldp+669596,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41930),5600);
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_143, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11735, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U]))));
    VL_CONCAT_WWI(5568,5536,32, __Vtemp_144, __Vtemp_143, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd2U]))));
    bufp->fullWData(oldp+669771,(__Vtemp_144),5568);
    bufp->fullWData(oldp+669945,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29147),5568);
    bufp->fullWData(oldp+670119,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31111),5568);
    bufp->fullWData(oldp+670293,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16419),5568);
    bufp->fullWData(oldp+670467,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18341),5568);
    bufp->fullWData(oldp+670641,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14077),5568);
    bufp->fullWData(oldp+670815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20263),5568);
    bufp->fullWData(oldp+670989,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22185),5568);
    bufp->fullWData(oldp+671163,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38073),5568);
    bufp->fullWData(oldp+671337,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40028),5568);
    VL_CONCAT_WWI(5504,5472,32, __Vtemp_145, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41910, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U]))));
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_146, __Vtemp_145, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd3U]))));
    VL_CONCAT_WWI(5568,5536,32, __Vtemp_147, __Vtemp_146, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd2U]))));
    bufp->fullWData(oldp+671511,(__Vtemp_147),5568);
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_148, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11735, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd3U]))));
    bufp->fullWData(oldp+671685,(__Vtemp_148),5536);
    bufp->fullWData(oldp+671858,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29142),5536);
    bufp->fullWData(oldp+672031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31106),5536);
    bufp->fullWData(oldp+672204,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16414),5536);
    bufp->fullWData(oldp+672377,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18336),5536);
    bufp->fullWData(oldp+672550,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14070),5536);
    bufp->fullWData(oldp+672723,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20258),5536);
    bufp->fullWData(oldp+672896,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22180),5536);
    bufp->fullWData(oldp+673069,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38068),5536);
    bufp->fullWData(oldp+673242,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40023),5536);
    VL_CONCAT_WWI(5504,5472,32, __Vtemp_149, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41910, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U]))));
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_150, __Vtemp_149, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd3U]))));
    bufp->fullWData(oldp+673415,(__Vtemp_150),5536);
    bufp->fullWData(oldp+673588,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11735),5504);
    bufp->fullWData(oldp+673760,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29136),5504);
    bufp->fullWData(oldp+673932,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31101),5504);
    bufp->fullWData(oldp+674104,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16409),5504);
    bufp->fullWData(oldp+674276,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18331),5504);
    bufp->fullWData(oldp+674448,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14063),5504);
    bufp->fullWData(oldp+674620,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20253),5504);
    bufp->fullWData(oldp+674792,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22175),5504);
    bufp->fullWData(oldp+674964,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38062),5504);
    bufp->fullWData(oldp+675136,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40018),5504);
    VL_CONCAT_WWI(5504,5472,32, __Vtemp_151, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41910, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd4U]))));
    bufp->fullWData(oldp+675308,(__Vtemp_151),5504);
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_152, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11714, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U]))));
    VL_CONCAT_WWI(5440,5408,32, __Vtemp_153, __Vtemp_152, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd6U]))));
    VL_CONCAT_WWI(5472,5440,32, __Vtemp_154, __Vtemp_153, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd5U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd5U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd5U]))));
    bufp->fullWData(oldp+675480,(__Vtemp_154),5472);
    bufp->fullWData(oldp+675651,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29131),5472);
    bufp->fullWData(oldp+675822,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31096),5472);
    bufp->fullWData(oldp+675993,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16404),5472);
    bufp->fullWData(oldp+676164,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18326),5472);
    bufp->fullWData(oldp+676335,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14056),5472);
    bufp->fullWData(oldp+676506,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20248),5472);
    bufp->fullWData(oldp+676677,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22170),5472);
    bufp->fullWData(oldp+676848,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38057),5472);
    bufp->fullWData(oldp+677019,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40013),5472);
    bufp->fullWData(oldp+677190,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41910),5472);
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_155, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11714, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U]))));
    VL_CONCAT_WWI(5440,5408,32, __Vtemp_156, __Vtemp_155, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd6U]))));
    bufp->fullWData(oldp+677361,(__Vtemp_156),5440);
    bufp->fullWData(oldp+677531,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29126),5440);
    bufp->fullWData(oldp+677701,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31091),5440);
    bufp->fullWData(oldp+677871,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16399),5440);
    bufp->fullWData(oldp+678041,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18321),5440);
    bufp->fullWData(oldp+678211,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14049),5440);
    bufp->fullWData(oldp+678381,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20243),5440);
    bufp->fullWData(oldp+678551,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22165),5440);
    bufp->fullWData(oldp+678721,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38052),5440);
    bufp->fullWData(oldp+678891,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40008),5440);
    VL_CONCAT_WWI(5376,5344,32, __Vtemp_157, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41890, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U]))));
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_158, __Vtemp_157, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd7U]))));
    VL_CONCAT_WWI(5440,5408,32, __Vtemp_159, __Vtemp_158, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd6U]))));
    bufp->fullWData(oldp+679061,(__Vtemp_159),5440);
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_160, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11714, 
                  ((((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd7U]))));
    bufp->fullWData(oldp+679231,(__Vtemp_160),5408);
    bufp->fullWData(oldp+679400,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29121),5408);
    bufp->fullWData(oldp+679569,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31086),5408);
    bufp->fullWData(oldp+679738,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16394),5408);
    bufp->fullWData(oldp+679907,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18316),5408);
    bufp->fullWData(oldp+680076,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14042),5408);
    bufp->fullWData(oldp+680245,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20238),5408);
    bufp->fullWData(oldp+680414,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22160),5408);
    bufp->fullWData(oldp+680583,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38047),5408);
    bufp->fullWData(oldp+680752,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d40003),5408);
    VL_CONCAT_WWI(5376,5344,32, __Vtemp_161, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41890, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U]))));
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_162, __Vtemp_161, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd7U]))));
    bufp->fullWData(oldp+680921,(__Vtemp_162),5408);
    bufp->fullWData(oldp+681090,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11714),5376);
    bufp->fullWData(oldp+681258,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29115),5376);
    bufp->fullWData(oldp+681426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31081),5376);
    bufp->fullWData(oldp+681594,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16389),5376);
    bufp->fullWData(oldp+681762,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18311),5376);
    bufp->fullWData(oldp+681930,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14035),5376);
    bufp->fullWData(oldp+682098,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20233),5376);
    bufp->fullWData(oldp+682266,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22155),5376);
    bufp->fullWData(oldp+682434,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38041),5376);
    bufp->fullWData(oldp+682602,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39998),5376);
    VL_CONCAT_WWI(5376,5344,32, __Vtemp_163, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41890, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xd8U]))));
    bufp->fullWData(oldp+682770,(__Vtemp_163),5376);
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_164, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11694, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU]))));
    VL_CONCAT_WWI(5312,5280,32, __Vtemp_165, __Vtemp_164, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdaU]))));
    VL_CONCAT_WWI(5344,5312,32, __Vtemp_166, __Vtemp_165, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd9U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd9U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xd9U]))));
    bufp->fullWData(oldp+682938,(__Vtemp_166),5344);
    bufp->fullWData(oldp+683105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29110),5344);
    bufp->fullWData(oldp+683272,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31076),5344);
    bufp->fullWData(oldp+683439,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16384),5344);
    bufp->fullWData(oldp+683606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18306),5344);
    bufp->fullWData(oldp+683773,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14028),5344);
    bufp->fullWData(oldp+683940,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20228),5344);
    bufp->fullWData(oldp+684107,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22150),5344);
    bufp->fullWData(oldp+684274,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38036),5344);
    bufp->fullWData(oldp+684441,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39993),5344);
    bufp->fullWData(oldp+684608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41890),5344);
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_167, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11694, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU]))));
    VL_CONCAT_WWI(5312,5280,32, __Vtemp_168, __Vtemp_167, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdaU]))));
    bufp->fullWData(oldp+684775,(__Vtemp_168),5312);
    bufp->fullWData(oldp+684941,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29105),5312);
    bufp->fullWData(oldp+685107,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31071),5312);
    bufp->fullWData(oldp+685273,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16379),5312);
    bufp->fullWData(oldp+685439,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18301),5312);
    bufp->fullWData(oldp+685605,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14021),5312);
    bufp->fullWData(oldp+685771,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20223),5312);
    bufp->fullWData(oldp+685937,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22145),5312);
    bufp->fullWData(oldp+686103,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38031),5312);
    bufp->fullWData(oldp+686269,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39988),5312);
    VL_CONCAT_WWI(5248,5216,32, __Vtemp_169, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41870, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU]))));
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_170, __Vtemp_169, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdbU]))));
    VL_CONCAT_WWI(5312,5280,32, __Vtemp_171, __Vtemp_170, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdaU]))));
    bufp->fullWData(oldp+686435,(__Vtemp_171),5312);
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_172, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11694, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdbU]))));
    bufp->fullWData(oldp+686601,(__Vtemp_172),5280);
    bufp->fullWData(oldp+686766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29100),5280);
    bufp->fullWData(oldp+686931,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31066),5280);
    bufp->fullWData(oldp+687096,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16374),5280);
    bufp->fullWData(oldp+687261,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18296),5280);
    bufp->fullWData(oldp+687426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14014),5280);
    bufp->fullWData(oldp+687591,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20218),5280);
    bufp->fullWData(oldp+687756,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22140),5280);
    bufp->fullWData(oldp+687921,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38026),5280);
    bufp->fullWData(oldp+688086,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39983),5280);
    VL_CONCAT_WWI(5248,5216,32, __Vtemp_173, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41870, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU]))));
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_174, __Vtemp_173, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdbU]))));
    bufp->fullWData(oldp+688251,(__Vtemp_174),5280);
    bufp->fullWData(oldp+688416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11694),5248);
    bufp->fullWData(oldp+688580,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29094),5248);
    bufp->fullWData(oldp+688744,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31061),5248);
    bufp->fullWData(oldp+688908,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16369),5248);
    bufp->fullWData(oldp+689072,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18291),5248);
    bufp->fullWData(oldp+689236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14007),5248);
    bufp->fullWData(oldp+689400,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20213),5248);
    bufp->fullWData(oldp+689564,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22135),5248);
    bufp->fullWData(oldp+689728,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38020),5248);
    bufp->fullWData(oldp+689892,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39978),5248);
    VL_CONCAT_WWI(5248,5216,32, __Vtemp_175, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41870, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdcU]))));
    bufp->fullWData(oldp+690056,(__Vtemp_175),5248);
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_176, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11673, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU]))));
    VL_CONCAT_WWI(5184,5152,32, __Vtemp_177, __Vtemp_176, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdeU]))));
    VL_CONCAT_WWI(5216,5184,32, __Vtemp_178, __Vtemp_177, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xddU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xddU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xddU]))));
    bufp->fullWData(oldp+690220,(__Vtemp_178),5216);
    bufp->fullWData(oldp+690383,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29089),5216);
    bufp->fullWData(oldp+690546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31056),5216);
    bufp->fullWData(oldp+690709,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16364),5216);
    bufp->fullWData(oldp+690872,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18286),5216);
    bufp->fullWData(oldp+691035,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d14000),5216);
    bufp->fullWData(oldp+691198,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20208),5216);
    bufp->fullWData(oldp+691361,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22130),5216);
    bufp->fullWData(oldp+691524,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38015),5216);
    bufp->fullWData(oldp+691687,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39973),5216);
    bufp->fullWData(oldp+691850,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41870),5216);
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_179, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11673, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU]))));
    VL_CONCAT_WWI(5184,5152,32, __Vtemp_180, __Vtemp_179, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdeU]))));
    bufp->fullWData(oldp+692013,(__Vtemp_180),5184);
    bufp->fullWData(oldp+692175,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29084),5184);
    bufp->fullWData(oldp+692337,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31051),5184);
    bufp->fullWData(oldp+692499,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16359),5184);
    bufp->fullWData(oldp+692661,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18281),5184);
    bufp->fullWData(oldp+692823,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13993),5184);
    bufp->fullWData(oldp+692985,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20203),5184);
    bufp->fullWData(oldp+693147,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22125),5184);
    bufp->fullWData(oldp+693309,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38010),5184);
    bufp->fullWData(oldp+693471,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39968),5184);
    VL_CONCAT_WWI(5120,5088,32, __Vtemp_181, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41849, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U]))));
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_182, __Vtemp_181, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdfU]))));
    VL_CONCAT_WWI(5184,5152,32, __Vtemp_183, __Vtemp_182, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdeU]))));
    bufp->fullWData(oldp+693633,(__Vtemp_183),5184);
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_184, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11673, 
                  ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xdfU]))));
    bufp->fullWData(oldp+693795,(__Vtemp_184),5152);
    bufp->fullWData(oldp+693956,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29079),5152);
    bufp->fullWData(oldp+694117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31046),5152);
    bufp->fullWData(oldp+694278,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16354),5152);
    bufp->fullWData(oldp+694439,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18276),5152);
    bufp->fullWData(oldp+694600,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13986),5152);
    bufp->fullWData(oldp+694761,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20198),5152);
    bufp->fullWData(oldp+694922,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22120),5152);
    bufp->fullWData(oldp+695083,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d38005),5152);
    bufp->fullWData(oldp+695244,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39963),5152);
    VL_CONCAT_WWI(5120,5088,32, __Vtemp_185, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41849, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U]))));
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_186, __Vtemp_185, 
                  ((((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdfU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdfU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xdU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xdfU]))));
    bufp->fullWData(oldp+695405,(__Vtemp_186),5152);
    bufp->fullWData(oldp+695566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11673),5120);
    bufp->fullWData(oldp+695726,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29073),5120);
    bufp->fullWData(oldp+695886,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31041),5120);
    bufp->fullWData(oldp+696046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16349),5120);
    bufp->fullWData(oldp+696206,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18271),5120);
    bufp->fullWData(oldp+696366,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13979),5120);
    bufp->fullWData(oldp+696526,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20193),5120);
    bufp->fullWData(oldp+696686,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22115),5120);
    bufp->fullWData(oldp+696846,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37999),5120);
    bufp->fullWData(oldp+697006,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39958),5120);
    VL_CONCAT_WWI(5120,5088,32, __Vtemp_187, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41849, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe0U]))));
    bufp->fullWData(oldp+697166,(__Vtemp_187),5120);
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_188, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11653, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U]))));
    VL_CONCAT_WWI(5056,5024,32, __Vtemp_189, __Vtemp_188, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe2U]))));
    VL_CONCAT_WWI(5088,5056,32, __Vtemp_190, __Vtemp_189, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe1U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe1U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe1U]))));
    bufp->fullWData(oldp+697326,(__Vtemp_190),5088);
    bufp->fullWData(oldp+697485,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29068),5088);
    bufp->fullWData(oldp+697644,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31036),5088);
    bufp->fullWData(oldp+697803,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16344),5088);
    bufp->fullWData(oldp+697962,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18266),5088);
    bufp->fullWData(oldp+698121,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13972),5088);
    bufp->fullWData(oldp+698280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20188),5088);
    bufp->fullWData(oldp+698439,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22110),5088);
    bufp->fullWData(oldp+698598,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37994),5088);
    bufp->fullWData(oldp+698757,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39953),5088);
    bufp->fullWData(oldp+698916,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41849),5088);
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_191, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11653, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U]))));
    VL_CONCAT_WWI(5056,5024,32, __Vtemp_192, __Vtemp_191, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe2U]))));
    bufp->fullWData(oldp+699075,(__Vtemp_192),5056);
    bufp->fullWData(oldp+699233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29063),5056);
    bufp->fullWData(oldp+699391,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31031),5056);
    bufp->fullWData(oldp+699549,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16339),5056);
    bufp->fullWData(oldp+699707,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18261),5056);
    bufp->fullWData(oldp+699865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13965),5056);
    bufp->fullWData(oldp+700023,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20183),5056);
    bufp->fullWData(oldp+700181,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22105),5056);
    bufp->fullWData(oldp+700339,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37989),5056);
    bufp->fullWData(oldp+700497,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39948),5056);
    VL_CONCAT_WWI(4992,4960,32, __Vtemp_193, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41829, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U]))));
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_194, __Vtemp_193, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe3U]))));
    VL_CONCAT_WWI(5056,5024,32, __Vtemp_195, __Vtemp_194, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe2U]))));
    bufp->fullWData(oldp+700655,(__Vtemp_195),5056);
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_196, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11653, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe3U]))));
    bufp->fullWData(oldp+700813,(__Vtemp_196),5024);
    bufp->fullWData(oldp+700970,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29058),5024);
    bufp->fullWData(oldp+701127,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31026),5024);
    bufp->fullWData(oldp+701284,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16334),5024);
    bufp->fullWData(oldp+701441,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18256),5024);
    bufp->fullWData(oldp+701598,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13958),5024);
    bufp->fullWData(oldp+701755,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20178),5024);
    bufp->fullWData(oldp+701912,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22100),5024);
    bufp->fullWData(oldp+702069,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37984),5024);
    bufp->fullWData(oldp+702226,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39943),5024);
    VL_CONCAT_WWI(4992,4960,32, __Vtemp_197, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41829, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U]))));
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_198, __Vtemp_197, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe3U]))));
    bufp->fullWData(oldp+702383,(__Vtemp_198),5024);
    bufp->fullWData(oldp+702540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11653),4992);
    bufp->fullWData(oldp+702696,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29052),4992);
    bufp->fullWData(oldp+702852,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31021),4992);
    bufp->fullWData(oldp+703008,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16329),4992);
    bufp->fullWData(oldp+703164,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18251),4992);
    bufp->fullWData(oldp+703320,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13951),4992);
    bufp->fullWData(oldp+703476,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20173),4992);
    bufp->fullWData(oldp+703632,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22095),4992);
    bufp->fullWData(oldp+703788,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37978),4992);
    bufp->fullWData(oldp+703944,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39938),4992);
    VL_CONCAT_WWI(4992,4960,32, __Vtemp_199, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41829, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe4U]))));
    bufp->fullWData(oldp+704100,(__Vtemp_199),4992);
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_200, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11632, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U]))));
    VL_CONCAT_WWI(4928,4896,32, __Vtemp_201, __Vtemp_200, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe6U]))));
    VL_CONCAT_WWI(4960,4928,32, __Vtemp_202, __Vtemp_201, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe5U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe5U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe5U]))));
    bufp->fullWData(oldp+704256,(__Vtemp_202),4960);
    bufp->fullWData(oldp+704411,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29047),4960);
    bufp->fullWData(oldp+704566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31016),4960);
    bufp->fullWData(oldp+704721,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16324),4960);
    bufp->fullWData(oldp+704876,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18246),4960);
    bufp->fullWData(oldp+705031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13944),4960);
    bufp->fullWData(oldp+705186,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20168),4960);
    bufp->fullWData(oldp+705341,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22090),4960);
    bufp->fullWData(oldp+705496,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37973),4960);
    bufp->fullWData(oldp+705651,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39933),4960);
    bufp->fullWData(oldp+705806,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41829),4960);
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_203, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11632, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U]))));
    VL_CONCAT_WWI(4928,4896,32, __Vtemp_204, __Vtemp_203, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe6U]))));
    bufp->fullWData(oldp+705961,(__Vtemp_204),4928);
    bufp->fullWData(oldp+706115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29042),4928);
    bufp->fullWData(oldp+706269,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31011),4928);
    bufp->fullWData(oldp+706423,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16319),4928);
    bufp->fullWData(oldp+706577,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18241),4928);
    bufp->fullWData(oldp+706731,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13937),4928);
    bufp->fullWData(oldp+706885,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20163),4928);
    bufp->fullWData(oldp+707039,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22085),4928);
    bufp->fullWData(oldp+707193,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37968),4928);
    bufp->fullWData(oldp+707347,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39928),4928);
    VL_CONCAT_WWI(4864,4832,32, __Vtemp_205, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41809, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U]))));
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_206, __Vtemp_205, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe7U]))));
    VL_CONCAT_WWI(4928,4896,32, __Vtemp_207, __Vtemp_206, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe6U]))));
    bufp->fullWData(oldp+707501,(__Vtemp_207),4928);
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_208, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11632, 
                  ((((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1cU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe7U]))));
    bufp->fullWData(oldp+707655,(__Vtemp_208),4896);
    bufp->fullWData(oldp+707808,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29037),4896);
    bufp->fullWData(oldp+707961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31006),4896);
    bufp->fullWData(oldp+708114,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16314),4896);
    bufp->fullWData(oldp+708267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18236),4896);
    bufp->fullWData(oldp+708420,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13930),4896);
    bufp->fullWData(oldp+708573,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20158),4896);
    bufp->fullWData(oldp+708726,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22080),4896);
    bufp->fullWData(oldp+708879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37963),4896);
    bufp->fullWData(oldp+709032,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39923),4896);
    VL_CONCAT_WWI(4864,4832,32, __Vtemp_209, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41809, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U]))));
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_210, __Vtemp_209, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe7U]))));
    bufp->fullWData(oldp+709185,(__Vtemp_210),4896);
    bufp->fullWData(oldp+709338,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11632),4864);
    bufp->fullWData(oldp+709490,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29031),4864);
    bufp->fullWData(oldp+709642,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d31001),4864);
    bufp->fullWData(oldp+709794,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16309),4864);
    bufp->fullWData(oldp+709946,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18231),4864);
    bufp->fullWData(oldp+710098,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13923),4864);
    bufp->fullWData(oldp+710250,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20153),4864);
    bufp->fullWData(oldp+710402,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22075),4864);
    bufp->fullWData(oldp+710554,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37957),4864);
    bufp->fullWData(oldp+710706,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39918),4864);
    VL_CONCAT_WWI(4864,4832,32, __Vtemp_211, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41809, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xe8U]))));
    bufp->fullWData(oldp+710858,(__Vtemp_211),4864);
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_212, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11612, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU]))));
    VL_CONCAT_WWI(4800,4768,32, __Vtemp_213, __Vtemp_212, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeaU]))));
    VL_CONCAT_WWI(4832,4800,32, __Vtemp_214, __Vtemp_213, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe9U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe9U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xe9U]))));
    bufp->fullWData(oldp+711010,(__Vtemp_214),4832);
    bufp->fullWData(oldp+711161,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29026),4832);
    bufp->fullWData(oldp+711312,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30996),4832);
    bufp->fullWData(oldp+711463,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16304),4832);
    bufp->fullWData(oldp+711614,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18226),4832);
    bufp->fullWData(oldp+711765,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13916),4832);
    bufp->fullWData(oldp+711916,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20148),4832);
    bufp->fullWData(oldp+712067,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22070),4832);
    bufp->fullWData(oldp+712218,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37952),4832);
    bufp->fullWData(oldp+712369,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39913),4832);
    bufp->fullWData(oldp+712520,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41809),4832);
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_215, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11612, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU]))));
    VL_CONCAT_WWI(4800,4768,32, __Vtemp_216, __Vtemp_215, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeaU]))));
    bufp->fullWData(oldp+712671,(__Vtemp_216),4800);
    bufp->fullWData(oldp+712821,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29021),4800);
    bufp->fullWData(oldp+712971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30991),4800);
    bufp->fullWData(oldp+713121,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16299),4800);
    bufp->fullWData(oldp+713271,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18221),4800);
    bufp->fullWData(oldp+713421,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13909),4800);
    bufp->fullWData(oldp+713571,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20143),4800);
    bufp->fullWData(oldp+713721,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22065),4800);
    bufp->fullWData(oldp+713871,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37947),4800);
    bufp->fullWData(oldp+714021,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39908),4800);
    VL_CONCAT_WWI(4736,4704,32, __Vtemp_217, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41789, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU]))));
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_218, __Vtemp_217, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU]))));
    VL_CONCAT_WWI(4800,4768,32, __Vtemp_219, __Vtemp_218, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeaU]))));
    bufp->fullWData(oldp+714171,(__Vtemp_219),4800);
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_220, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11612, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xebU]))));
    bufp->fullWData(oldp+714321,(__Vtemp_220),4768);
    bufp->fullWData(oldp+714470,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29016),4768);
    bufp->fullWData(oldp+714619,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30986),4768);
    bufp->fullWData(oldp+714768,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16294),4768);
    bufp->fullWData(oldp+714917,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18216),4768);
    bufp->fullWData(oldp+715066,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13902),4768);
    bufp->fullWData(oldp+715215,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20138),4768);
    bufp->fullWData(oldp+715364,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22060),4768);
    bufp->fullWData(oldp+715513,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37942),4768);
    bufp->fullWData(oldp+715662,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39903),4768);
    VL_CONCAT_WWI(4736,4704,32, __Vtemp_221, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41789, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU]))));
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_222, __Vtemp_221, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xebU]))));
    bufp->fullWData(oldp+715811,(__Vtemp_222),4768);
    bufp->fullWData(oldp+715960,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11612),4736);
    bufp->fullWData(oldp+716108,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29010),4736);
    bufp->fullWData(oldp+716256,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30981),4736);
    bufp->fullWData(oldp+716404,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16289),4736);
    bufp->fullWData(oldp+716552,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18211),4736);
    bufp->fullWData(oldp+716700,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13895),4736);
    bufp->fullWData(oldp+716848,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20133),4736);
    bufp->fullWData(oldp+716996,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22055),4736);
    bufp->fullWData(oldp+717144,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37936),4736);
    bufp->fullWData(oldp+717292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39898),4736);
    VL_CONCAT_WWI(4736,4704,32, __Vtemp_223, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41789, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xecU]))));
    bufp->fullWData(oldp+717440,(__Vtemp_223),4736);
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_224, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11591, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU]))));
    VL_CONCAT_WWI(4672,4640,32, __Vtemp_225, __Vtemp_224, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeeU]))));
    VL_CONCAT_WWI(4704,4672,32, __Vtemp_226, __Vtemp_225, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xedU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xedU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xedU]))));
    bufp->fullWData(oldp+717588,(__Vtemp_226),4704);
    bufp->fullWData(oldp+717735,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29005),4704);
    bufp->fullWData(oldp+717882,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30976),4704);
    bufp->fullWData(oldp+718029,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16284),4704);
    bufp->fullWData(oldp+718176,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18206),4704);
    bufp->fullWData(oldp+718323,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13888),4704);
    bufp->fullWData(oldp+718470,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20128),4704);
    bufp->fullWData(oldp+718617,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22050),4704);
    bufp->fullWData(oldp+718764,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37931),4704);
    bufp->fullWData(oldp+718911,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39893),4704);
    bufp->fullWData(oldp+719058,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41789),4704);
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_227, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11591, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU]))));
    VL_CONCAT_WWI(4672,4640,32, __Vtemp_228, __Vtemp_227, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xeeU]))));
    bufp->fullWData(oldp+719205,(__Vtemp_228),4672);
    bufp->fullWData(oldp+719351,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d29000),4672);
    bufp->fullWData(oldp+719497,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30971),4672);
    bufp->fullWData(oldp+719643,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16279),4672);
    bufp->fullWData(oldp+719789,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18201),4672);
    bufp->fullWData(oldp+719935,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13881),4672);
    bufp->fullWData(oldp+720081,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20123),4672);
    bufp->fullWData(oldp+720227,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22045),4672);
    bufp->fullWData(oldp+720373,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37926),4672);
    bufp->fullWData(oldp+720519,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39888),4672);
    VL_CONCAT_WWI(4608,4576,32, __Vtemp_229, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41768, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U]))));
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_230, __Vtemp_229, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU]))));
    VL_CONCAT_WWI(4672,4640,32, __Vtemp_231, __Vtemp_230, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xeeU]))));
    bufp->fullWData(oldp+720665,(__Vtemp_231),4672);
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_232, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11591, 
                  ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xefU]))));
    bufp->fullWData(oldp+720811,(__Vtemp_232),4640);
    bufp->fullWData(oldp+720956,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28995),4640);
    bufp->fullWData(oldp+721101,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30966),4640);
    bufp->fullWData(oldp+721246,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16274),4640);
    bufp->fullWData(oldp+721391,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18196),4640);
    bufp->fullWData(oldp+721536,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13874),4640);
    bufp->fullWData(oldp+721681,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20118),4640);
    bufp->fullWData(oldp+721826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22040),4640);
    bufp->fullWData(oldp+721971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37921),4640);
    bufp->fullWData(oldp+722116,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39883),4640);
    VL_CONCAT_WWI(4608,4576,32, __Vtemp_233, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41768, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U]))));
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_234, __Vtemp_233, 
                  ((((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xeU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xefU]))));
    bufp->fullWData(oldp+722261,(__Vtemp_234),4640);
    bufp->fullWData(oldp+722406,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11591),4608);
    bufp->fullWData(oldp+722550,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28989),4608);
    bufp->fullWData(oldp+722694,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30961),4608);
    bufp->fullWData(oldp+722838,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16269),4608);
    bufp->fullWData(oldp+722982,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18191),4608);
    bufp->fullWData(oldp+723126,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13867),4608);
    bufp->fullWData(oldp+723270,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20113),4608);
    bufp->fullWData(oldp+723414,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22035),4608);
    bufp->fullWData(oldp+723558,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37915),4608);
    bufp->fullWData(oldp+723702,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39878),4608);
    VL_CONCAT_WWI(4608,4576,32, __Vtemp_235, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41768, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf0U]))));
    bufp->fullWData(oldp+723846,(__Vtemp_235),4608);
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_236, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11571, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U]))));
    VL_CONCAT_WWI(4544,4512,32, __Vtemp_237, __Vtemp_236, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf2U]))));
    VL_CONCAT_WWI(4576,4544,32, __Vtemp_238, __Vtemp_237, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf1U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf1U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf1U]))));
    bufp->fullWData(oldp+723990,(__Vtemp_238),4576);
    bufp->fullWData(oldp+724133,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28984),4576);
    bufp->fullWData(oldp+724276,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30956),4576);
    bufp->fullWData(oldp+724419,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16264),4576);
    bufp->fullWData(oldp+724562,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18186),4576);
    bufp->fullWData(oldp+724705,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13860),4576);
    bufp->fullWData(oldp+724848,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20108),4576);
    bufp->fullWData(oldp+724991,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22030),4576);
    bufp->fullWData(oldp+725134,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37910),4576);
    bufp->fullWData(oldp+725277,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39873),4576);
    bufp->fullWData(oldp+725420,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41768),4576);
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_239, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11571, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U]))));
    VL_CONCAT_WWI(4544,4512,32, __Vtemp_240, __Vtemp_239, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf2U]))));
    bufp->fullWData(oldp+725563,(__Vtemp_240),4544);
    bufp->fullWData(oldp+725705,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28979),4544);
    bufp->fullWData(oldp+725847,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30951),4544);
    bufp->fullWData(oldp+725989,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16259),4544);
    bufp->fullWData(oldp+726131,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18181),4544);
    bufp->fullWData(oldp+726273,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13853),4544);
    bufp->fullWData(oldp+726415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20103),4544);
    bufp->fullWData(oldp+726557,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22025),4544);
    bufp->fullWData(oldp+726699,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37905),4544);
    bufp->fullWData(oldp+726841,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39868),4544);
    VL_CONCAT_WWI(4480,4448,32, __Vtemp_241, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U]))));
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_242, __Vtemp_241, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U]))));
    VL_CONCAT_WWI(4544,4512,32, __Vtemp_243, __Vtemp_242, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf2U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf2U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf2U]))));
    bufp->fullWData(oldp+726983,(__Vtemp_243),4544);
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_244, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11571, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf3U]))));
    bufp->fullWData(oldp+727125,(__Vtemp_244),4512);
    bufp->fullWData(oldp+727266,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28974),4512);
    bufp->fullWData(oldp+727407,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30946),4512);
    bufp->fullWData(oldp+727548,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16254),4512);
    bufp->fullWData(oldp+727689,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18176),4512);
    bufp->fullWData(oldp+727830,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13846),4512);
    bufp->fullWData(oldp+727971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20098),4512);
    bufp->fullWData(oldp+728112,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22020),4512);
    bufp->fullWData(oldp+728253,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37900),4512);
    bufp->fullWData(oldp+728394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39863),4512);
    VL_CONCAT_WWI(4480,4448,32, __Vtemp_245, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U]))));
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_246, __Vtemp_245, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf3U]))));
    bufp->fullWData(oldp+728535,(__Vtemp_246),4512);
    bufp->fullWData(oldp+728676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11571),4480);
    bufp->fullWData(oldp+728816,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28968),4480);
    bufp->fullWData(oldp+728956,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30941),4480);
    bufp->fullWData(oldp+729096,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16249),4480);
    bufp->fullWData(oldp+729236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18171),4480);
    bufp->fullWData(oldp+729376,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13839),4480);
    bufp->fullWData(oldp+729516,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20093),4480);
    bufp->fullWData(oldp+729656,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22015),4480);
    bufp->fullWData(oldp+729796,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37894),4480);
    bufp->fullWData(oldp+729936,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39858),4480);
    VL_CONCAT_WWI(4480,4448,32, __Vtemp_247, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf4U]))));
    bufp->fullWData(oldp+730076,(__Vtemp_247),4480);
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_248, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11550, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U]))));
    VL_CONCAT_WWI(4416,4384,32, __Vtemp_249, __Vtemp_248, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf6U]))));
    VL_CONCAT_WWI(4448,4416,32, __Vtemp_250, __Vtemp_249, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf5U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf5U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf5U]))));
    bufp->fullWData(oldp+730216,(__Vtemp_250),4448);
    bufp->fullWData(oldp+730355,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28963),4448);
    bufp->fullWData(oldp+730494,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30936),4448);
    bufp->fullWData(oldp+730633,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16244),4448);
    bufp->fullWData(oldp+730772,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18166),4448);
    bufp->fullWData(oldp+730911,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13832),4448);
    bufp->fullWData(oldp+731050,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20088),4448);
    bufp->fullWData(oldp+731189,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22010),4448);
    bufp->fullWData(oldp+731328,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37889),4448);
    bufp->fullWData(oldp+731467,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39853),4448);
    bufp->fullWData(oldp+731606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41748),4448);
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_251, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11550, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U]))));
    VL_CONCAT_WWI(4416,4384,32, __Vtemp_252, __Vtemp_251, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf6U]))));
    bufp->fullWData(oldp+731745,(__Vtemp_252),4416);
    bufp->fullWData(oldp+731883,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28958),4416);
    bufp->fullWData(oldp+732021,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30931),4416);
    bufp->fullWData(oldp+732159,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16239),4416);
    bufp->fullWData(oldp+732297,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18161),4416);
    bufp->fullWData(oldp+732435,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13825),4416);
    bufp->fullWData(oldp+732573,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20083),4416);
    bufp->fullWData(oldp+732711,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22005),4416);
    bufp->fullWData(oldp+732849,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37884),4416);
    bufp->fullWData(oldp+732987,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39848),4416);
    VL_CONCAT_WWI(4352,4320,32, __Vtemp_253, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U]))));
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_254, __Vtemp_253, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U]))));
    VL_CONCAT_WWI(4416,4384,32, __Vtemp_255, __Vtemp_254, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf6U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf6U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf6U]))));
    bufp->fullWData(oldp+733125,(__Vtemp_255),4416);
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_256, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11550, 
                  ((((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf7U]))));
    bufp->fullWData(oldp+733263,(__Vtemp_256),4384);
    bufp->fullWData(oldp+733400,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28953),4384);
    bufp->fullWData(oldp+733537,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30926),4384);
    bufp->fullWData(oldp+733674,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16234),4384);
    bufp->fullWData(oldp+733811,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18156),4384);
    bufp->fullWData(oldp+733948,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13818),4384);
    bufp->fullWData(oldp+734085,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20078),4384);
    bufp->fullWData(oldp+734222,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d22000),4384);
    bufp->fullWData(oldp+734359,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37879),4384);
    bufp->fullWData(oldp+734496,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39843),4384);
    VL_CONCAT_WWI(4352,4320,32, __Vtemp_257, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U]))));
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_258, __Vtemp_257, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf7U]))));
    bufp->fullWData(oldp+734633,(__Vtemp_258),4384);
    bufp->fullWData(oldp+734770,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11550),4352);
    bufp->fullWData(oldp+734906,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28947),4352);
    bufp->fullWData(oldp+735042,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30921),4352);
    bufp->fullWData(oldp+735178,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16229),4352);
    bufp->fullWData(oldp+735314,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18151),4352);
    bufp->fullWData(oldp+735450,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13811),4352);
    bufp->fullWData(oldp+735586,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20073),4352);
    bufp->fullWData(oldp+735722,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21995),4352);
    bufp->fullWData(oldp+735858,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37873),4352);
    bufp->fullWData(oldp+735994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39838),4352);
    VL_CONCAT_WWI(4352,4320,32, __Vtemp_259, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xf8U]))));
    bufp->fullWData(oldp+736130,(__Vtemp_259),4352);
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_260, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11530, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU]))));
    VL_CONCAT_WWI(4288,4256,32, __Vtemp_261, __Vtemp_260, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfaU]))));
    VL_CONCAT_WWI(4320,4288,32, __Vtemp_262, __Vtemp_261, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf9U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf9U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xf9U]))));
    bufp->fullWData(oldp+736266,(__Vtemp_262),4320);
    bufp->fullWData(oldp+736401,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28942),4320);
    bufp->fullWData(oldp+736536,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30916),4320);
    bufp->fullWData(oldp+736671,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16224),4320);
    bufp->fullWData(oldp+736806,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18146),4320);
    bufp->fullWData(oldp+736941,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13804),4320);
    bufp->fullWData(oldp+737076,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20068),4320);
    bufp->fullWData(oldp+737211,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21990),4320);
    bufp->fullWData(oldp+737346,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37868),4320);
    bufp->fullWData(oldp+737481,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39833),4320);
    bufp->fullWData(oldp+737616,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41728),4320);
    bufp->fullWData(oldp+737751,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8046),4320);
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_263, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11530, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU]))));
    VL_CONCAT_WWI(4288,4256,32, __Vtemp_264, __Vtemp_263, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfaU]))));
    bufp->fullWData(oldp+737886,(__Vtemp_264),4288);
    bufp->fullWData(oldp+738020,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28937),4288);
    bufp->fullWData(oldp+738154,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30911),4288);
    bufp->fullWData(oldp+738288,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16219),4288);
    bufp->fullWData(oldp+738422,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18141),4288);
    bufp->fullWData(oldp+738556,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13797),4288);
    bufp->fullWData(oldp+738690,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20063),4288);
    bufp->fullWData(oldp+738824,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21985),4288);
    bufp->fullWData(oldp+738958,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37863),4288);
    bufp->fullWData(oldp+739092,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39828),4288);
    VL_CONCAT_WWI(4224,4192,32, __Vtemp_265, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41708, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU]))));
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_266, __Vtemp_265, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU]))));
    VL_CONCAT_WWI(4288,4256,32, __Vtemp_267, __Vtemp_266, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfaU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfaU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfaU]))));
    bufp->fullWData(oldp+739226,(__Vtemp_267),4288);
    bufp->fullWData(oldp+739360,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8041),4288);
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_268, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11530, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfbU]))));
    bufp->fullWData(oldp+739494,(__Vtemp_268),4256);
    bufp->fullWData(oldp+739627,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28932),4256);
    bufp->fullWData(oldp+739760,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30906),4256);
    bufp->fullWData(oldp+739893,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16214),4256);
    bufp->fullWData(oldp+740026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18136),4256);
    bufp->fullWData(oldp+740159,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13790),4256);
    bufp->fullWData(oldp+740292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20058),4256);
    bufp->fullWData(oldp+740425,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21980),4256);
    bufp->fullWData(oldp+740558,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37858),4256);
    bufp->fullWData(oldp+740691,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39823),4256);
    VL_CONCAT_WWI(4224,4192,32, __Vtemp_269, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41708, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU]))));
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_270, __Vtemp_269, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfbU]))));
    bufp->fullWData(oldp+740824,(__Vtemp_270),4256);
    bufp->fullWData(oldp+740957,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8036),4256);
    bufp->fullWData(oldp+741090,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11530),4224);
    bufp->fullWData(oldp+741222,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28926),4224);
    bufp->fullWData(oldp+741354,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30901),4224);
    bufp->fullWData(oldp+741486,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16209),4224);
    bufp->fullWData(oldp+741618,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18131),4224);
    bufp->fullWData(oldp+741750,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13783),4224);
    bufp->fullWData(oldp+741882,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20053),4224);
    bufp->fullWData(oldp+742014,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21975),4224);
    bufp->fullWData(oldp+742146,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37852),4224);
    bufp->fullWData(oldp+742278,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39818),4224);
    VL_CONCAT_WWI(4224,4192,32, __Vtemp_271, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41708, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfcU]))));
    bufp->fullWData(oldp+742410,(__Vtemp_271),4224);
    bufp->fullWData(oldp+742542,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8031),4224);
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_272, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11509, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU]))));
    VL_CONCAT_WWI(4160,4128,32, __Vtemp_273, __Vtemp_272, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU]))));
    VL_CONCAT_WWI(4192,4160,32, __Vtemp_274, __Vtemp_273, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfdU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfdU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfdU]))));
    bufp->fullWData(oldp+742674,(__Vtemp_274),4192);
    bufp->fullWData(oldp+742805,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28921),4192);
    bufp->fullWData(oldp+742936,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30896),4192);
    bufp->fullWData(oldp+743067,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16204),4192);
    bufp->fullWData(oldp+743198,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18126),4192);
    bufp->fullWData(oldp+743329,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13776),4192);
    bufp->fullWData(oldp+743460,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20048),4192);
    bufp->fullWData(oldp+743591,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21970),4192);
    bufp->fullWData(oldp+743722,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37847),4192);
    bufp->fullWData(oldp+743853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39813),4192);
    bufp->fullWData(oldp+743984,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41708),4192);
    bufp->fullWData(oldp+744115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8026),4192);
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_275, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11509, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU]))));
    VL_CONCAT_WWI(4160,4128,32, __Vtemp_276, __Vtemp_275, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xfeU]))));
    bufp->fullWData(oldp+744246,(__Vtemp_276),4160);
    bufp->fullWData(oldp+744376,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28916),4160);
    bufp->fullWData(oldp+744506,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30891),4160);
    bufp->fullWData(oldp+744636,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16199),4160);
    bufp->fullWData(oldp+744766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18121),4160);
    bufp->fullWData(oldp+744896,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13769),4160);
    bufp->fullWData(oldp+745026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20043),4160);
    bufp->fullWData(oldp+745156,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21965),4160);
    bufp->fullWData(oldp+745286,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37842),4160);
    bufp->fullWData(oldp+745416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39808),4160);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_277, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U]))));
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_278, __Vtemp_277, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xffU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xffU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xffU]))));
    VL_CONCAT_WWI(4160,4128,32, __Vtemp_279, __Vtemp_278, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfeU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfeU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xfeU]))));
    bufp->fullWData(oldp+745546,(__Vtemp_279),4160);
    bufp->fullWData(oldp+745676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8021),4160);
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_280, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11509, 
                  ((((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x1fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0xffU]))));
    bufp->fullWData(oldp+745806,(__Vtemp_280),4128);
    bufp->fullWData(oldp+745935,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28911),4128);
    bufp->fullWData(oldp+746064,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30886),4128);
    bufp->fullWData(oldp+746193,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16194),4128);
    bufp->fullWData(oldp+746322,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18116),4128);
    bufp->fullWData(oldp+746451,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13762),4128);
    bufp->fullWData(oldp+746580,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20038),4128);
    bufp->fullWData(oldp+746709,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21960),4128);
    bufp->fullWData(oldp+746838,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37837),4128);
    bufp->fullWData(oldp+746967,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39803),4128);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_281, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U]))));
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_282, __Vtemp_281, 
                  ((((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xffU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xffU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0xfU == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0xffU]))));
    bufp->fullWData(oldp+747096,(__Vtemp_282),4128);
    bufp->fullWData(oldp+747225,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8016),4128);
    bufp->fullWData(oldp+747354,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11509),4096);
    bufp->fullWData(oldp+747482,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28905),4096);
    bufp->fullWData(oldp+747610,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30881),4096);
    bufp->fullWData(oldp+747738,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16189),4096);
    bufp->fullWData(oldp+747866,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18111),4096);
    bufp->fullWData(oldp+747994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13755),4096);
    bufp->fullWData(oldp+748122,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20033),4096);
    bufp->fullWData(oldp+748250,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21955),4096);
    bufp->fullWData(oldp+748378,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37831),4096);
    bufp->fullWData(oldp+748506,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39798),4096);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_283, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x100U]))));
    bufp->fullWData(oldp+748634,(__Vtemp_283),4096);
    bufp->fullWData(oldp+748762,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8010),4096);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_284, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11489, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U]))));
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_285, __Vtemp_284, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U]))));
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_286, __Vtemp_285, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x101U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x101U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x101U]))));
    bufp->fullWData(oldp+748890,(__Vtemp_286),4064);
    bufp->fullWData(oldp+749017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28900),4064);
    bufp->fullWData(oldp+749144,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30876),4064);
    bufp->fullWData(oldp+749271,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16184),4064);
    bufp->fullWData(oldp+749398,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18106),4064);
    bufp->fullWData(oldp+749525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13748),4064);
    bufp->fullWData(oldp+749652,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20028),4064);
    bufp->fullWData(oldp+749779,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21950),4064);
    bufp->fullWData(oldp+749906,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37826),4064);
    bufp->fullWData(oldp+750033,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39793),4064);
    bufp->fullWData(oldp+750160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41687),4064);
    bufp->fullWData(oldp+750287,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8005),4064);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_287, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11489, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U]))));
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_288, __Vtemp_287, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x102U]))));
    bufp->fullWData(oldp+750414,(__Vtemp_288),4032);
    bufp->fullWData(oldp+750540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28895),4032);
    bufp->fullWData(oldp+750666,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30871),4032);
    bufp->fullWData(oldp+750792,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16179),4032);
    bufp->fullWData(oldp+750918,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18101),4032);
    bufp->fullWData(oldp+751044,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13741),4032);
    bufp->fullWData(oldp+751170,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20023),4032);
    bufp->fullWData(oldp+751296,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21945),4032);
    bufp->fullWData(oldp+751422,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37821),4032);
    bufp->fullWData(oldp+751548,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39788),4032);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_289, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U]))));
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_290, __Vtemp_289, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U]))));
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_291, __Vtemp_290, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x102U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x102U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x102U]))));
    bufp->fullWData(oldp+751674,(__Vtemp_291),4032);
    bufp->fullWData(oldp+751800,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d8000),4032);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_292, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11489, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x103U]))));
    bufp->fullWData(oldp+751926,(__Vtemp_292),4000);
    bufp->fullWData(oldp+752051,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28890),4000);
    bufp->fullWData(oldp+752176,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30866),4000);
    bufp->fullWData(oldp+752301,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16174),4000);
    bufp->fullWData(oldp+752426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18096),4000);
    bufp->fullWData(oldp+752551,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13734),4000);
    bufp->fullWData(oldp+752676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20018),4000);
    bufp->fullWData(oldp+752801,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21940),4000);
    bufp->fullWData(oldp+752926,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37816),4000);
    bufp->fullWData(oldp+753051,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39783),4000);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_293, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U]))));
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_294, __Vtemp_293, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x103U]))));
    bufp->fullWData(oldp+753176,(__Vtemp_294),4000);
    bufp->fullWData(oldp+753301,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7995),4000);
    bufp->fullWData(oldp+753426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11489),3968);
    bufp->fullWData(oldp+753550,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28884),3968);
    bufp->fullWData(oldp+753674,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30861),3968);
    bufp->fullWData(oldp+753798,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16169),3968);
    bufp->fullWData(oldp+753922,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18091),3968);
    bufp->fullWData(oldp+754046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13727),3968);
    bufp->fullWData(oldp+754170,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20013),3968);
    bufp->fullWData(oldp+754294,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21935),3968);
    bufp->fullWData(oldp+754418,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37810),3968);
    bufp->fullWData(oldp+754542,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39778),3968);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_295, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x104U]))));
    bufp->fullWData(oldp+754666,(__Vtemp_295),3968);
    bufp->fullWData(oldp+754790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7990),3968);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_296, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U]))));
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_297, __Vtemp_296, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U]))));
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_298, __Vtemp_297, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x105U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x105U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x105U]))));
    bufp->fullWData(oldp+754914,(__Vtemp_298),3936);
    bufp->fullWData(oldp+755037,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28879),3936);
    bufp->fullWData(oldp+755160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30856),3936);
    bufp->fullWData(oldp+755283,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16164),3936);
    bufp->fullWData(oldp+755406,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18086),3936);
    bufp->fullWData(oldp+755529,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13720),3936);
    bufp->fullWData(oldp+755652,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20008),3936);
    bufp->fullWData(oldp+755775,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21930),3936);
    bufp->fullWData(oldp+755898,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37805),3936);
    bufp->fullWData(oldp+756021,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39773),3936);
    bufp->fullWData(oldp+756144,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41667),3936);
    bufp->fullWData(oldp+756267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7985),3936);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_299, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U]))));
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_300, __Vtemp_299, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x106U]))));
    bufp->fullWData(oldp+756390,(__Vtemp_300),3904);
    bufp->fullWData(oldp+756512,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28874),3904);
    bufp->fullWData(oldp+756634,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30851),3904);
    bufp->fullWData(oldp+756756,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16159),3904);
    bufp->fullWData(oldp+756878,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18081),3904);
    bufp->fullWData(oldp+757000,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13713),3904);
    bufp->fullWData(oldp+757122,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d20003),3904);
    bufp->fullWData(oldp+757244,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21925),3904);
    bufp->fullWData(oldp+757366,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37800),3904);
    bufp->fullWData(oldp+757488,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39768),3904);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_301, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41647, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U]))));
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_302, __Vtemp_301, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U]))));
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_303, __Vtemp_302, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x106U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x106U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x106U]))));
    bufp->fullWData(oldp+757610,(__Vtemp_303),3904);
    bufp->fullWData(oldp+757732,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7980),3904);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_304, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468, 
                  ((((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x107U]))));
    bufp->fullWData(oldp+757854,(__Vtemp_304),3872);
    bufp->fullWData(oldp+757975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28869),3872);
    bufp->fullWData(oldp+758096,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30846),3872);
    bufp->fullWData(oldp+758217,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16154),3872);
    bufp->fullWData(oldp+758338,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18076),3872);
    bufp->fullWData(oldp+758459,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13706),3872);
    bufp->fullWData(oldp+758580,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19998),3872);
    bufp->fullWData(oldp+758701,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21920),3872);
    bufp->fullWData(oldp+758822,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37795),3872);
    bufp->fullWData(oldp+758943,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39763),3872);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_305, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41647, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U]))));
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_306, __Vtemp_305, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x107U]))));
    bufp->fullWData(oldp+759064,(__Vtemp_306),3872);
    bufp->fullWData(oldp+759185,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7975),3872);
    bufp->fullWData(oldp+759306,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11468),3840);
    bufp->fullWData(oldp+759426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28863),3840);
    bufp->fullWData(oldp+759546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30841),3840);
    bufp->fullWData(oldp+759666,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16149),3840);
    bufp->fullWData(oldp+759786,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18071),3840);
    bufp->fullWData(oldp+759906,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13699),3840);
    bufp->fullWData(oldp+760026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19993),3840);
    bufp->fullWData(oldp+760146,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21915),3840);
    bufp->fullWData(oldp+760266,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37789),3840);
    bufp->fullWData(oldp+760386,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39758),3840);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_307, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41647, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x108U]))));
    bufp->fullWData(oldp+760506,(__Vtemp_307),3840);
    bufp->fullWData(oldp+760626,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7969),3840);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_308, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU]))));
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_309, __Vtemp_308, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU]))));
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_310, __Vtemp_309, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x109U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x109U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x109U]))));
    bufp->fullWData(oldp+760746,(__Vtemp_310),3808);
    bufp->fullWData(oldp+760865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28858),3808);
    bufp->fullWData(oldp+760984,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30836),3808);
    bufp->fullWData(oldp+761103,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16144),3808);
    bufp->fullWData(oldp+761222,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18066),3808);
    bufp->fullWData(oldp+761341,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13692),3808);
    bufp->fullWData(oldp+761460,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19988),3808);
    bufp->fullWData(oldp+761579,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21910),3808);
    bufp->fullWData(oldp+761698,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37784),3808);
    bufp->fullWData(oldp+761817,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39753),3808);
    bufp->fullWData(oldp+761936,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41647),3808);
    bufp->fullWData(oldp+762055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7964),3808);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_311, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU]))));
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_312, __Vtemp_311, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10aU]))));
    bufp->fullWData(oldp+762174,(__Vtemp_312),3776);
    bufp->fullWData(oldp+762292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28853),3776);
    bufp->fullWData(oldp+762410,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30831),3776);
    bufp->fullWData(oldp+762528,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16139),3776);
    bufp->fullWData(oldp+762646,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18061),3776);
    bufp->fullWData(oldp+762764,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13685),3776);
    bufp->fullWData(oldp+762882,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19983),3776);
    bufp->fullWData(oldp+763000,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21905),3776);
    bufp->fullWData(oldp+763118,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37779),3776);
    bufp->fullWData(oldp+763236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39748),3776);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_313, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41627, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU]))));
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_314, __Vtemp_313, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10bU]))));
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_315, __Vtemp_314, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10aU]))));
    bufp->fullWData(oldp+763354,(__Vtemp_315),3776);
    bufp->fullWData(oldp+763472,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7959),3776);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_316, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10bU]))));
    bufp->fullWData(oldp+763590,(__Vtemp_316),3744);
    bufp->fullWData(oldp+763707,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28848),3744);
    bufp->fullWData(oldp+763824,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30826),3744);
    bufp->fullWData(oldp+763941,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16134),3744);
    bufp->fullWData(oldp+764058,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18056),3744);
    bufp->fullWData(oldp+764175,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13678),3744);
    bufp->fullWData(oldp+764292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19978),3744);
    bufp->fullWData(oldp+764409,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21900),3744);
    bufp->fullWData(oldp+764526,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37774),3744);
    bufp->fullWData(oldp+764643,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39743),3744);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_317, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41627, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU]))));
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_318, __Vtemp_317, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10bU]))));
    bufp->fullWData(oldp+764760,(__Vtemp_318),3744);
    bufp->fullWData(oldp+764877,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7954),3744);
    bufp->fullWData(oldp+764994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11448),3712);
    bufp->fullWData(oldp+765110,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28842),3712);
    bufp->fullWData(oldp+765226,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30821),3712);
    bufp->fullWData(oldp+765342,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16129),3712);
    bufp->fullWData(oldp+765458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18051),3712);
    bufp->fullWData(oldp+765574,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13671),3712);
    bufp->fullWData(oldp+765690,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19973),3712);
    bufp->fullWData(oldp+765806,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21895),3712);
    bufp->fullWData(oldp+765922,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37768),3712);
    bufp->fullWData(oldp+766038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39738),3712);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_319, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41627, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10cU]))));
    bufp->fullWData(oldp+766154,(__Vtemp_319),3712);
    bufp->fullWData(oldp+766270,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7949),3712);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_320, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11427, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU]))));
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_321, __Vtemp_320, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU]))));
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_322, __Vtemp_321, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10dU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10dU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10dU]))));
    bufp->fullWData(oldp+766386,(__Vtemp_322),3680);
    bufp->fullWData(oldp+766501,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28837),3680);
    bufp->fullWData(oldp+766616,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30816),3680);
    bufp->fullWData(oldp+766731,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16124),3680);
    bufp->fullWData(oldp+766846,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18046),3680);
    bufp->fullWData(oldp+766961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13664),3680);
    bufp->fullWData(oldp+767076,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19968),3680);
    bufp->fullWData(oldp+767191,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21890),3680);
    bufp->fullWData(oldp+767306,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37763),3680);
    bufp->fullWData(oldp+767421,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39733),3680);
    bufp->fullWData(oldp+767536,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41627),3680);
    bufp->fullWData(oldp+767651,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7944),3680);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_323, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11427, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU]))));
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_324, __Vtemp_323, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10eU]))));
    bufp->fullWData(oldp+767766,(__Vtemp_324),3648);
    bufp->fullWData(oldp+767880,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28832),3648);
    bufp->fullWData(oldp+767994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30811),3648);
    bufp->fullWData(oldp+768108,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16119),3648);
    bufp->fullWData(oldp+768222,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18041),3648);
    bufp->fullWData(oldp+768336,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13657),3648);
    bufp->fullWData(oldp+768450,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19963),3648);
    bufp->fullWData(oldp+768564,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21885),3648);
    bufp->fullWData(oldp+768678,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37758),3648);
    bufp->fullWData(oldp+768792,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39728),3648);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_325, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41606, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U]))));
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_326, __Vtemp_325, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10fU]))));
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_327, __Vtemp_326, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10eU]))));
    bufp->fullWData(oldp+768906,(__Vtemp_327),3648);
    bufp->fullWData(oldp+769020,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7939),3648);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_328, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11427, 
                  ((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x10fU]))));
    bufp->fullWData(oldp+769134,(__Vtemp_328),3616);
    bufp->fullWData(oldp+769247,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28827),3616);
    bufp->fullWData(oldp+769360,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30806),3616);
    bufp->fullWData(oldp+769473,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16114),3616);
    bufp->fullWData(oldp+769586,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18036),3616);
    bufp->fullWData(oldp+769699,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13650),3616);
    bufp->fullWData(oldp+769812,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19958),3616);
    bufp->fullWData(oldp+769925,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21880),3616);
    bufp->fullWData(oldp+770038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37753),3616);
    bufp->fullWData(oldp+770151,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39723),3616);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_329, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41606, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U]))));
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_330, __Vtemp_329, 
                  ((((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x10U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x10fU]))));
    bufp->fullWData(oldp+770264,(__Vtemp_330),3616);
    bufp->fullWData(oldp+770377,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7934),3616);
    bufp->fullWData(oldp+770490,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11427),3584);
    bufp->fullWData(oldp+770602,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28821),3584);
    bufp->fullWData(oldp+770714,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30801),3584);
    bufp->fullWData(oldp+770826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16109),3584);
    bufp->fullWData(oldp+770938,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18031),3584);
    bufp->fullWData(oldp+771050,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13643),3584);
    bufp->fullWData(oldp+771162,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19953),3584);
    bufp->fullWData(oldp+771274,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21875),3584);
    bufp->fullWData(oldp+771386,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37747),3584);
    bufp->fullWData(oldp+771498,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39718),3584);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_331, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41606, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x110U]))));
    bufp->fullWData(oldp+771610,(__Vtemp_331),3584);
    bufp->fullWData(oldp+771722,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7928),3584);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_332, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U]))));
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_333, __Vtemp_332, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x112U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x112U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x112U]))));
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_334, __Vtemp_333, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x111U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x111U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x111U]))));
    bufp->fullWData(oldp+771834,(__Vtemp_334),3552);
    bufp->fullWData(oldp+771945,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28816),3552);
    bufp->fullWData(oldp+772056,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30796),3552);
    bufp->fullWData(oldp+772167,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16104),3552);
    bufp->fullWData(oldp+772278,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18026),3552);
    bufp->fullWData(oldp+772389,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13636),3552);
    bufp->fullWData(oldp+772500,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19948),3552);
    bufp->fullWData(oldp+772611,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21870),3552);
    bufp->fullWData(oldp+772722,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37742),3552);
    bufp->fullWData(oldp+772833,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39713),3552);
    bufp->fullWData(oldp+772944,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41606),3552);
    bufp->fullWData(oldp+773055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7923),3552);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_335, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U]))));
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_336, __Vtemp_335, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x112U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x112U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x112U]))));
    bufp->fullWData(oldp+773166,(__Vtemp_336),3520);
    bufp->fullWData(oldp+773276,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28811),3520);
    bufp->fullWData(oldp+773386,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30791),3520);
    bufp->fullWData(oldp+773496,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16099),3520);
    bufp->fullWData(oldp+773606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18021),3520);
    bufp->fullWData(oldp+773716,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13629),3520);
    bufp->fullWData(oldp+773826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19943),3520);
    bufp->fullWData(oldp+773936,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21865),3520);
    bufp->fullWData(oldp+774046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37737),3520);
    bufp->fullWData(oldp+774156,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39708),3520);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_337, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41586, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U]))));
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_338, __Vtemp_337, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x113U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x113U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x113U]))));
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_339, __Vtemp_338, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x112U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x112U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x112U]))));
    bufp->fullWData(oldp+774266,(__Vtemp_339),3520);
    bufp->fullWData(oldp+774376,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7918),3520);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_340, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x113U]))));
    bufp->fullWData(oldp+774486,(__Vtemp_340),3488);
    bufp->fullWData(oldp+774595,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28806),3488);
    bufp->fullWData(oldp+774704,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30786),3488);
    bufp->fullWData(oldp+774813,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16094),3488);
    bufp->fullWData(oldp+774922,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18016),3488);
    bufp->fullWData(oldp+775031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13622),3488);
    bufp->fullWData(oldp+775140,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19938),3488);
    bufp->fullWData(oldp+775249,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21860),3488);
    bufp->fullWData(oldp+775358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37732),3488);
    bufp->fullWData(oldp+775467,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39703),3488);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_341, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41586, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U]))));
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_342, __Vtemp_341, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x113U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x113U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x113U]))));
    bufp->fullWData(oldp+775576,(__Vtemp_342),3488);
    bufp->fullWData(oldp+775685,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7913),3488);
    bufp->fullWData(oldp+775794,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11407),3456);
    bufp->fullWData(oldp+775902,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28800),3456);
    bufp->fullWData(oldp+776010,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30781),3456);
    bufp->fullWData(oldp+776118,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16089),3456);
    bufp->fullWData(oldp+776226,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18011),3456);
    bufp->fullWData(oldp+776334,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13615),3456);
    bufp->fullWData(oldp+776442,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19933),3456);
    bufp->fullWData(oldp+776550,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21855),3456);
    bufp->fullWData(oldp+776658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37726),3456);
    bufp->fullWData(oldp+776766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39698),3456);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_343, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41586, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x114U]))));
    bufp->fullWData(oldp+776874,(__Vtemp_343),3456);
    bufp->fullWData(oldp+776982,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7908),3456);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_344, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U]))));
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_345, __Vtemp_344, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U]))));
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_346, __Vtemp_345, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x115U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x115U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x115U]))));
    bufp->fullWData(oldp+777090,(__Vtemp_346),3424);
    bufp->fullWData(oldp+777197,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28795),3424);
    bufp->fullWData(oldp+777304,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30776),3424);
    bufp->fullWData(oldp+777411,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16084),3424);
    bufp->fullWData(oldp+777518,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18006),3424);
    bufp->fullWData(oldp+777625,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13608),3424);
    bufp->fullWData(oldp+777732,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19928),3424);
    bufp->fullWData(oldp+777839,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21850),3424);
    bufp->fullWData(oldp+777946,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37721),3424);
    bufp->fullWData(oldp+778053,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39693),3424);
    bufp->fullWData(oldp+778160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41586),3424);
    bufp->fullWData(oldp+778267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7903),3424);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_347, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U]))));
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_348, __Vtemp_347, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x116U]))));
    bufp->fullWData(oldp+778374,(__Vtemp_348),3392);
    bufp->fullWData(oldp+778480,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28790),3392);
    bufp->fullWData(oldp+778586,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30771),3392);
    bufp->fullWData(oldp+778692,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16079),3392);
    bufp->fullWData(oldp+778798,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d18001),3392);
    bufp->fullWData(oldp+778904,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13601),3392);
    bufp->fullWData(oldp+779010,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19923),3392);
    bufp->fullWData(oldp+779116,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21845),3392);
    bufp->fullWData(oldp+779222,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37716),3392);
    bufp->fullWData(oldp+779328,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39688),3392);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_349, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41566, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U]))));
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_350, __Vtemp_349, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x117U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x117U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x117U]))));
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_351, __Vtemp_350, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x116U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x116U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x116U]))));
    bufp->fullWData(oldp+779434,(__Vtemp_351),3392);
    bufp->fullWData(oldp+779540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7898),3392);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_352, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386, 
                  ((((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x22U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x117U]))));
    bufp->fullWData(oldp+779646,(__Vtemp_352),3360);
    bufp->fullWData(oldp+779751,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28785),3360);
    bufp->fullWData(oldp+779856,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30766),3360);
    bufp->fullWData(oldp+779961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16074),3360);
    bufp->fullWData(oldp+780066,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17996),3360);
    bufp->fullWData(oldp+780171,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13594),3360);
    bufp->fullWData(oldp+780276,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19918),3360);
    bufp->fullWData(oldp+780381,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21840),3360);
    bufp->fullWData(oldp+780486,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37711),3360);
    bufp->fullWData(oldp+780591,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39683),3360);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_353, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41566, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U]))));
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_354, __Vtemp_353, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x117U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x117U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x117U]))));
    bufp->fullWData(oldp+780696,(__Vtemp_354),3360);
    bufp->fullWData(oldp+780801,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7893),3360);
    bufp->fullWData(oldp+780906,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11386),3328);
    bufp->fullWData(oldp+781010,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28779),3328);
    bufp->fullWData(oldp+781114,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30761),3328);
    bufp->fullWData(oldp+781218,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16069),3328);
    bufp->fullWData(oldp+781322,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17991),3328);
    bufp->fullWData(oldp+781426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13587),3328);
    bufp->fullWData(oldp+781530,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19913),3328);
    bufp->fullWData(oldp+781634,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21835),3328);
    bufp->fullWData(oldp+781738,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37705),3328);
    bufp->fullWData(oldp+781842,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39678),3328);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_355, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41566, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x118U]))));
    bufp->fullWData(oldp+781946,(__Vtemp_355),3328);
    bufp->fullWData(oldp+782050,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7887),3328);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_356, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11366, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU]))));
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_357, __Vtemp_356, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU]))));
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_358, __Vtemp_357, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x119U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x119U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x119U]))));
    bufp->fullWData(oldp+782154,(__Vtemp_358),3296);
    bufp->fullWData(oldp+782257,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28774),3296);
    bufp->fullWData(oldp+782360,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30756),3296);
    bufp->fullWData(oldp+782463,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16064),3296);
    bufp->fullWData(oldp+782566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17986),3296);
    bufp->fullWData(oldp+782669,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13580),3296);
    bufp->fullWData(oldp+782772,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19908),3296);
    bufp->fullWData(oldp+782875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21830),3296);
    bufp->fullWData(oldp+782978,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37700),3296);
    bufp->fullWData(oldp+783081,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39673),3296);
    bufp->fullWData(oldp+783184,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41566),3296);
    bufp->fullWData(oldp+783287,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7882),3296);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_359, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11366, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU]))));
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_360, __Vtemp_359, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11aU]))));
    bufp->fullWData(oldp+783390,(__Vtemp_360),3264);
    bufp->fullWData(oldp+783492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28769),3264);
    bufp->fullWData(oldp+783594,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30751),3264);
    bufp->fullWData(oldp+783696,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16059),3264);
    bufp->fullWData(oldp+783798,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17981),3264);
    bufp->fullWData(oldp+783900,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13573),3264);
    bufp->fullWData(oldp+784002,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19903),3264);
    bufp->fullWData(oldp+784104,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21825),3264);
    bufp->fullWData(oldp+784206,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37695),3264);
    bufp->fullWData(oldp+784308,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39668),3264);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_361, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41546, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU]))));
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_362, __Vtemp_361, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11bU]))));
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_363, __Vtemp_362, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11aU]))));
    bufp->fullWData(oldp+784410,(__Vtemp_363),3264);
    bufp->fullWData(oldp+784512,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7877),3264);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_364, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11366, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11bU]))));
    bufp->fullWData(oldp+784614,(__Vtemp_364),3232);
    bufp->fullWData(oldp+784715,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28764),3232);
    bufp->fullWData(oldp+784816,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30746),3232);
    bufp->fullWData(oldp+784917,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16054),3232);
    bufp->fullWData(oldp+785018,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17976),3232);
    bufp->fullWData(oldp+785119,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13566),3232);
    bufp->fullWData(oldp+785220,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19898),3232);
    bufp->fullWData(oldp+785321,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21820),3232);
    bufp->fullWData(oldp+785422,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37690),3232);
    bufp->fullWData(oldp+785523,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39663),3232);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_365, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41546, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU]))));
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_366, __Vtemp_365, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11bU]))));
    bufp->fullWData(oldp+785624,(__Vtemp_366),3232);
    bufp->fullWData(oldp+785725,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7872),3232);
    bufp->fullWData(oldp+785826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11366),3200);
    bufp->fullWData(oldp+785926,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28758),3200);
    bufp->fullWData(oldp+786026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30741),3200);
    bufp->fullWData(oldp+786126,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16049),3200);
    bufp->fullWData(oldp+786226,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17971),3200);
    bufp->fullWData(oldp+786326,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13559),3200);
    bufp->fullWData(oldp+786426,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19893),3200);
    bufp->fullWData(oldp+786526,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21815),3200);
    bufp->fullWData(oldp+786626,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37684),3200);
    bufp->fullWData(oldp+786726,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39658),3200);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_367, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41546, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11cU]))));
    bufp->fullWData(oldp+786826,(__Vtemp_367),3200);
    bufp->fullWData(oldp+786926,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7867),3200);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_368, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11345, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU]))));
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_369, __Vtemp_368, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11eU]))));
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_370, __Vtemp_369, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11dU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11dU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11dU]))));
    bufp->fullWData(oldp+787026,(__Vtemp_370),3168);
    bufp->fullWData(oldp+787125,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28753),3168);
    bufp->fullWData(oldp+787224,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30736),3168);
    bufp->fullWData(oldp+787323,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16044),3168);
    bufp->fullWData(oldp+787422,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17966),3168);
    bufp->fullWData(oldp+787521,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13552),3168);
    bufp->fullWData(oldp+787620,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19888),3168);
    bufp->fullWData(oldp+787719,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21810),3168);
    bufp->fullWData(oldp+787818,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37679),3168);
    bufp->fullWData(oldp+787917,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39653),3168);
    bufp->fullWData(oldp+788016,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41546),3168);
    bufp->fullWData(oldp+788115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7862),3168);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_371, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11345, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU]))));
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_372, __Vtemp_371, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11eU]))));
    bufp->fullWData(oldp+788214,(__Vtemp_372),3136);
    bufp->fullWData(oldp+788312,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28748),3136);
    bufp->fullWData(oldp+788410,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30731),3136);
    bufp->fullWData(oldp+788508,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16039),3136);
    bufp->fullWData(oldp+788606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17961),3136);
    bufp->fullWData(oldp+788704,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13545),3136);
    bufp->fullWData(oldp+788802,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19883),3136);
    bufp->fullWData(oldp+788900,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21805),3136);
    bufp->fullWData(oldp+788998,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37674),3136);
    bufp->fullWData(oldp+789096,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39648),3136);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_373, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41525, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U]))));
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_374, __Vtemp_373, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11fU]))));
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_375, __Vtemp_374, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11eU]))));
    bufp->fullWData(oldp+789194,(__Vtemp_375),3136);
    bufp->fullWData(oldp+789292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7857),3136);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_376, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11345, 
                  ((((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x23U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x11fU]))));
    bufp->fullWData(oldp+789390,(__Vtemp_376),3104);
    bufp->fullWData(oldp+789487,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28743),3104);
    bufp->fullWData(oldp+789584,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30726),3104);
    bufp->fullWData(oldp+789681,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16034),3104);
    bufp->fullWData(oldp+789778,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17956),3104);
    bufp->fullWData(oldp+789875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13538),3104);
    bufp->fullWData(oldp+789972,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19878),3104);
    bufp->fullWData(oldp+790069,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21800),3104);
    bufp->fullWData(oldp+790166,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37669),3104);
    bufp->fullWData(oldp+790263,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39643),3104);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_377, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41525, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U]))));
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_378, __Vtemp_377, 
                  ((((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x11U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x11fU]))));
    bufp->fullWData(oldp+790360,(__Vtemp_378),3104);
    bufp->fullWData(oldp+790457,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7852),3104);
    __Vtemp_382[0U] = ((((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((2U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U])));
    __Vtemp_382[1U] = ((((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((4U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])));
    __Vtemp_382[2U] = ((((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((6U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])));
    __Vtemp_382[3U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_382[4U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_382[5U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(3088,2896,192, __Vtemp_383, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47060, __Vtemp_382);
    bufp->fullWData(oldp+790554,(__Vtemp_383),3088);
    bufp->fullWData(oldp+790651,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11345),3072);
    bufp->fullWData(oldp+790747,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28737),3072);
    bufp->fullWData(oldp+790843,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30721),3072);
    bufp->fullWData(oldp+790939,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16029),3072);
    bufp->fullWData(oldp+791035,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17951),3072);
    bufp->fullWData(oldp+791131,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13531),3072);
    bufp->fullWData(oldp+791227,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19873),3072);
    bufp->fullWData(oldp+791323,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21795),3072);
    bufp->fullWData(oldp+791419,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37663),3072);
    bufp->fullWData(oldp+791515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39638),3072);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_384, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41525, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x120U]))));
    bufp->fullWData(oldp+791611,(__Vtemp_384),3072);
    bufp->fullWData(oldp+791707,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7846),3072);
    __Vtemp_387[0U] = ((((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((4U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])));
    __Vtemp_387[1U] = ((((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((6U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])));
    __Vtemp_387[2U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_387[3U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_387[4U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(3056,2896,160, __Vtemp_388, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47060, __Vtemp_387);
    bufp->fullWData(oldp+791803,(__Vtemp_388),3056);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_389, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11325, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U]))));
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_390, __Vtemp_389, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x122U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x122U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x122U]))));
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_391, __Vtemp_390, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x121U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x121U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x121U]))));
    bufp->fullWData(oldp+791899,(__Vtemp_391),3040);
    bufp->fullWData(oldp+791994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28732),3040);
    bufp->fullWData(oldp+792089,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30716),3040);
    bufp->fullWData(oldp+792184,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16024),3040);
    bufp->fullWData(oldp+792279,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17946),3040);
    bufp->fullWData(oldp+792374,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13524),3040);
    bufp->fullWData(oldp+792469,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19868),3040);
    bufp->fullWData(oldp+792564,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21790),3040);
    bufp->fullWData(oldp+792659,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37658),3040);
    bufp->fullWData(oldp+792754,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39633),3040);
    bufp->fullWData(oldp+792849,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41525),3040);
    bufp->fullWData(oldp+792944,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7841),3040);
    __Vtemp_393[0U] = ((((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((6U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])));
    __Vtemp_393[1U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_393[2U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_393[3U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(3024,2896,128, __Vtemp_394, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47060, __Vtemp_393);
    bufp->fullWData(oldp+793039,(__Vtemp_394),3024);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_395, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11325, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U]))));
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_396, __Vtemp_395, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x122U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x122U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x122U]))));
    bufp->fullWData(oldp+793134,(__Vtemp_396),3008);
    bufp->fullWData(oldp+793228,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28727),3008);
    bufp->fullWData(oldp+793322,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30711),3008);
    bufp->fullWData(oldp+793416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16019),3008);
    bufp->fullWData(oldp+793510,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17941),3008);
    bufp->fullWData(oldp+793604,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13517),3008);
    bufp->fullWData(oldp+793698,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19863),3008);
    bufp->fullWData(oldp+793792,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21785),3008);
    bufp->fullWData(oldp+793886,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37653),3008);
    bufp->fullWData(oldp+793980,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39628),3008);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_397, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41505, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U]))));
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_398, __Vtemp_397, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x123U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x123U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x123U]))));
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_399, __Vtemp_398, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x122U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x122U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x122U]))));
    bufp->fullWData(oldp+794074,(__Vtemp_399),3008);
    bufp->fullWData(oldp+794168,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7836),3008);
    __Vtemp_400[0U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_400[1U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_400[2U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2992,2896,96, __Vtemp_401, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47060, __Vtemp_400);
    bufp->fullWData(oldp+794262,(__Vtemp_401),2992);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_402, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11325, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x123U]))));
    bufp->fullWData(oldp+794356,(__Vtemp_402),2976);
    bufp->fullWData(oldp+794449,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28722),2976);
    bufp->fullWData(oldp+794542,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30706),2976);
    bufp->fullWData(oldp+794635,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16014),2976);
    bufp->fullWData(oldp+794728,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17936),2976);
    bufp->fullWData(oldp+794821,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13510),2976);
    bufp->fullWData(oldp+794914,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19858),2976);
    bufp->fullWData(oldp+795007,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21780),2976);
    bufp->fullWData(oldp+795100,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37648),2976);
    bufp->fullWData(oldp+795193,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39623),2976);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_403, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41505, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U]))));
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_404, __Vtemp_403, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x123U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x123U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x123U]))));
    bufp->fullWData(oldp+795286,(__Vtemp_404),2976);
    bufp->fullWData(oldp+795379,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7831),2976);
    VL_CONCAT_WWQ(2960,2896,64, __Vtemp_405, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47060, 
                  (((QData)((IData)(((((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0xcU 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0xbU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xaU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    bufp->fullWData(oldp+795472,(__Vtemp_405),2960);
    bufp->fullWData(oldp+795565,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11325),2944);
    bufp->fullWData(oldp+795657,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28716),2944);
    bufp->fullWData(oldp+795749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30701),2944);
    bufp->fullWData(oldp+795841,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16009),2944);
    bufp->fullWData(oldp+795933,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17931),2944);
    bufp->fullWData(oldp+796025,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13503),2944);
    bufp->fullWData(oldp+796117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19853),2944);
    bufp->fullWData(oldp+796209,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21775),2944);
    bufp->fullWData(oldp+796301,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37642),2944);
    bufp->fullWData(oldp+796393,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39618),2944);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_406, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41505, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x124U]))));
    bufp->fullWData(oldp+796485,(__Vtemp_406),2944);
    bufp->fullWData(oldp+796577,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7826),2944);
    VL_CONCAT_WWI(2912,2896,16, __Vtemp_407, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47060, 
                  (0xffffU & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2928,2912,16, __Vtemp_408, __Vtemp_407, 
                  (0xffffU & ((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U])));
    bufp->fullWData(oldp+796669,(__Vtemp_408),2928);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_409, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11304, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U]))));
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_410, __Vtemp_409, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x126U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x126U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x126U]))));
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_411, __Vtemp_410, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x125U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x125U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x125U]))));
    bufp->fullWData(oldp+796761,(__Vtemp_411),2912);
    bufp->fullWData(oldp+796852,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28711),2912);
    bufp->fullWData(oldp+796943,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30696),2912);
    bufp->fullWData(oldp+797034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d16004),2912);
    bufp->fullWData(oldp+797125,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17926),2912);
    bufp->fullWData(oldp+797216,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13496),2912);
    bufp->fullWData(oldp+797307,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19848),2912);
    bufp->fullWData(oldp+797398,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21770),2912);
    bufp->fullWData(oldp+797489,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37637),2912);
    bufp->fullWData(oldp+797580,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39613),2912);
    bufp->fullWData(oldp+797671,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41505),2912);
    bufp->fullWData(oldp+797762,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7821),2912);
    bufp->fullWData(oldp+797853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47060),2896);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_412, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11304, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U]))));
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_413, __Vtemp_412, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x126U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x126U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x126U]))));
    bufp->fullWData(oldp+797944,(__Vtemp_413),2880);
    bufp->fullWData(oldp+798034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28706),2880);
    bufp->fullWData(oldp+798124,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30691),2880);
    bufp->fullWData(oldp+798214,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15999),2880);
    bufp->fullWData(oldp+798304,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17921),2880);
    bufp->fullWData(oldp+798394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13489),2880);
    bufp->fullWData(oldp+798484,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19843),2880);
    bufp->fullWData(oldp+798574,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21765),2880);
    bufp->fullWData(oldp+798664,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37632),2880);
    bufp->fullWData(oldp+798754,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39608),2880);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_414, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41485, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U]))));
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_415, __Vtemp_414, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x127U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x127U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x127U]))));
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_416, __Vtemp_415, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x126U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x126U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x126U]))));
    bufp->fullWData(oldp+798844,(__Vtemp_416),2880);
    bufp->fullWData(oldp+798934,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7816),2880);
    __Vtemp_418[0U] = ((((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x10U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U])));
    __Vtemp_418[1U] = ((((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x12U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U])));
    __Vtemp_418[2U] = (IData)((((QData)((IData)((((
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x16U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x15U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x14U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))));
    __Vtemp_418[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x17U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x16U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x15U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x14U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2864,2736,128, __Vtemp_419, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47025, __Vtemp_418);
    bufp->fullWData(oldp+799024,(__Vtemp_419),2864);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_420, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11304, 
                  ((((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x24U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x127U]))));
    bufp->fullWData(oldp+799114,(__Vtemp_420),2848);
    bufp->fullWData(oldp+799203,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28701),2848);
    bufp->fullWData(oldp+799292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30686),2848);
    bufp->fullWData(oldp+799381,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15994),2848);
    bufp->fullWData(oldp+799470,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17916),2848);
    bufp->fullWData(oldp+799559,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13482),2848);
    bufp->fullWData(oldp+799648,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19838),2848);
    bufp->fullWData(oldp+799737,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21760),2848);
    bufp->fullWData(oldp+799826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37627),2848);
    bufp->fullWData(oldp+799915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39603),2848);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_421, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41485, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U]))));
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_422, __Vtemp_421, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x127U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x127U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x127U]))));
    bufp->fullWData(oldp+800004,(__Vtemp_422),2848);
    bufp->fullWData(oldp+800093,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7811),2848);
    __Vtemp_423[0U] = ((((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x12U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U])));
    __Vtemp_423[1U] = (IData)((((QData)((IData)((((
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x16U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x15U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x14U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))));
    __Vtemp_423[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x17U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x16U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x15U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x14U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2832,2736,96, __Vtemp_424, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47025, __Vtemp_423);
    bufp->fullWData(oldp+800182,(__Vtemp_424),2832);
    bufp->fullWData(oldp+800271,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11304),2816);
    bufp->fullWData(oldp+800359,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28695),2816);
    bufp->fullWData(oldp+800447,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30681),2816);
    bufp->fullWData(oldp+800535,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15989),2816);
    bufp->fullWData(oldp+800623,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17911),2816);
    bufp->fullWData(oldp+800711,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13475),2816);
    bufp->fullWData(oldp+800799,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19833),2816);
    bufp->fullWData(oldp+800887,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21755),2816);
    bufp->fullWData(oldp+800975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37621),2816);
    bufp->fullWData(oldp+801063,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39598),2816);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_425, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41485, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x128U]))));
    bufp->fullWData(oldp+801151,(__Vtemp_425),2816);
    bufp->fullWData(oldp+801239,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7805),2816);
    VL_CONCAT_WWQ(2800,2736,64, __Vtemp_426, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47025, 
                  (((QData)((IData)(((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x16U 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x15U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x14U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))));
    bufp->fullWData(oldp+801327,(__Vtemp_426),2800);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_427, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11284, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU]))));
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_428, __Vtemp_427, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12aU]))));
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_429, __Vtemp_428, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x129U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x129U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x129U]))));
    bufp->fullWData(oldp+801415,(__Vtemp_429),2784);
    bufp->fullWData(oldp+801502,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28690),2784);
    bufp->fullWData(oldp+801589,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30676),2784);
    bufp->fullWData(oldp+801676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15984),2784);
    bufp->fullWData(oldp+801763,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17906),2784);
    bufp->fullWData(oldp+801850,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13468),2784);
    bufp->fullWData(oldp+801937,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19828),2784);
    bufp->fullWData(oldp+802024,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21750),2784);
    bufp->fullWData(oldp+802111,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37616),2784);
    bufp->fullWData(oldp+802198,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39593),2784);
    bufp->fullWData(oldp+802285,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41485),2784);
    bufp->fullWData(oldp+802372,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7800),2784);
    VL_CONCAT_WWI(2752,2736,16, __Vtemp_430, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47025, 
                  (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2768,2752,16, __Vtemp_431, __Vtemp_430, 
                  (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU])));
    bufp->fullWData(oldp+802459,(__Vtemp_431),2768);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_432, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11284, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU]))));
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_433, __Vtemp_432, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12aU]))));
    bufp->fullWData(oldp+802546,(__Vtemp_433),2752);
    bufp->fullWData(oldp+802632,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28685),2752);
    bufp->fullWData(oldp+802718,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30671),2752);
    bufp->fullWData(oldp+802804,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15979),2752);
    bufp->fullWData(oldp+802890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17901),2752);
    bufp->fullWData(oldp+802976,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13461),2752);
    bufp->fullWData(oldp+803062,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19823),2752);
    bufp->fullWData(oldp+803148,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21745),2752);
    bufp->fullWData(oldp+803234,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37611),2752);
    bufp->fullWData(oldp+803320,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39588),2752);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_434, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41465, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU]))));
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_435, __Vtemp_434, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12bU]))));
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_436, __Vtemp_435, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12aU]))));
    bufp->fullWData(oldp+803406,(__Vtemp_436),2752);
    bufp->fullWData(oldp+803492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7795),2752);
    bufp->fullWData(oldp+803578,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d47025),2736);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_437, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11284, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12bU]))));
    bufp->fullWData(oldp+803664,(__Vtemp_437),2720);
    bufp->fullWData(oldp+803749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28680),2720);
    bufp->fullWData(oldp+803834,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30666),2720);
    bufp->fullWData(oldp+803919,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15974),2720);
    bufp->fullWData(oldp+804004,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17896),2720);
    bufp->fullWData(oldp+804089,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13454),2720);
    bufp->fullWData(oldp+804174,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19818),2720);
    bufp->fullWData(oldp+804259,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21740),2720);
    bufp->fullWData(oldp+804344,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37606),2720);
    bufp->fullWData(oldp+804429,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39583),2720);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_438, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41465, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU]))));
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_439, __Vtemp_438, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12bU]))));
    bufp->fullWData(oldp+804514,(__Vtemp_439),2720);
    bufp->fullWData(oldp+804599,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7790),2720);
    __Vtemp_441[0U] = ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x1aU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU])));
    __Vtemp_441[1U] = ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x1cU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU])));
    __Vtemp_441[2U] = (IData)((((QData)((IData)((((
                                                   (0x21U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x20U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x1fU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x1eU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))));
    __Vtemp_441[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x21U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x20U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x1fU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x1eU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2704,2576,128, __Vtemp_442, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46990, __Vtemp_441);
    bufp->fullWData(oldp+804684,(__Vtemp_442),2704);
    bufp->fullWData(oldp+804769,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11284),2688);
    bufp->fullWData(oldp+804853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28674),2688);
    bufp->fullWData(oldp+804937,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30661),2688);
    bufp->fullWData(oldp+805021,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15969),2688);
    bufp->fullWData(oldp+805105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17891),2688);
    bufp->fullWData(oldp+805189,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13447),2688);
    bufp->fullWData(oldp+805273,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19813),2688);
    bufp->fullWData(oldp+805357,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21735),2688);
    bufp->fullWData(oldp+805441,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37600),2688);
    bufp->fullWData(oldp+805525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39578),2688);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_443, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41465, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12cU]))));
    bufp->fullWData(oldp+805609,(__Vtemp_443),2688);
    bufp->fullWData(oldp+805693,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7785),2688);
    __Vtemp_444[0U] = ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x1cU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU])));
    __Vtemp_444[1U] = (IData)((((QData)((IData)((((
                                                   (0x21U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x20U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x1fU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x1eU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))));
    __Vtemp_444[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x21U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x20U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x1fU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x1eU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2672,2576,96, __Vtemp_445, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46990, __Vtemp_444);
    bufp->fullWData(oldp+805777,(__Vtemp_445),2672);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_446, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11263, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU]))));
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_447, __Vtemp_446, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12eU]))));
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_448, __Vtemp_447, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12dU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12dU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12dU]))));
    bufp->fullWData(oldp+805861,(__Vtemp_448),2656);
    bufp->fullWData(oldp+805944,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28669),2656);
    bufp->fullWData(oldp+806027,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30656),2656);
    bufp->fullWData(oldp+806110,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15964),2656);
    bufp->fullWData(oldp+806193,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17886),2656);
    bufp->fullWData(oldp+806276,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13440),2656);
    bufp->fullWData(oldp+806359,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19808),2656);
    bufp->fullWData(oldp+806442,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21730),2656);
    bufp->fullWData(oldp+806525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37595),2656);
    bufp->fullWData(oldp+806608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39573),2656);
    bufp->fullWData(oldp+806691,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41465),2656);
    bufp->fullWData(oldp+806774,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7780),2656);
    VL_CONCAT_WWQ(2640,2576,64, __Vtemp_449, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46990, 
                  (((QData)((IData)(((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x20U 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x1eU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))));
    bufp->fullWData(oldp+806857,(__Vtemp_449),2640);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_450, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11263, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU]))));
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_451, __Vtemp_450, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12eU]))));
    bufp->fullWData(oldp+806940,(__Vtemp_451),2624);
    bufp->fullWData(oldp+807022,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28664),2624);
    bufp->fullWData(oldp+807104,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30651),2624);
    bufp->fullWData(oldp+807186,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15959),2624);
    bufp->fullWData(oldp+807268,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17881),2624);
    bufp->fullWData(oldp+807350,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13433),2624);
    bufp->fullWData(oldp+807432,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19803),2624);
    bufp->fullWData(oldp+807514,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21725),2624);
    bufp->fullWData(oldp+807596,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37590),2624);
    bufp->fullWData(oldp+807678,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39568),2624);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_452, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41444, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U]))));
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_453, __Vtemp_452, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12fU]))));
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_454, __Vtemp_453, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12eU]))));
    bufp->fullWData(oldp+807760,(__Vtemp_454),2624);
    bufp->fullWData(oldp+807842,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7775),2624);
    VL_CONCAT_WWI(2592,2576,16, __Vtemp_455, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46990, 
                  (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2608,2592,16, __Vtemp_456, __Vtemp_455, 
                  (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U])));
    bufp->fullWData(oldp+807924,(__Vtemp_456),2608);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_457, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11263, 
                  ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x12fU]))));
    bufp->fullWData(oldp+808006,(__Vtemp_457),2592);
    bufp->fullWData(oldp+808087,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28659),2592);
    bufp->fullWData(oldp+808168,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30646),2592);
    bufp->fullWData(oldp+808249,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15954),2592);
    bufp->fullWData(oldp+808330,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17876),2592);
    bufp->fullWData(oldp+808411,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13426),2592);
    bufp->fullWData(oldp+808492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19798),2592);
    bufp->fullWData(oldp+808573,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21720),2592);
    bufp->fullWData(oldp+808654,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37585),2592);
    bufp->fullWData(oldp+808735,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39563),2592);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_458, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41444, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U]))));
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_459, __Vtemp_458, 
                  ((((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x12U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x12fU]))));
    bufp->fullWData(oldp+808816,(__Vtemp_459),2592);
    bufp->fullWData(oldp+808897,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7770),2592);
    bufp->fullWData(oldp+808978,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46990),2576);
    bufp->fullWData(oldp+809059,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11263),2560);
    bufp->fullWData(oldp+809139,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28653),2560);
    bufp->fullWData(oldp+809219,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30641),2560);
    bufp->fullWData(oldp+809299,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15949),2560);
    bufp->fullWData(oldp+809379,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17871),2560);
    bufp->fullWData(oldp+809459,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13419),2560);
    bufp->fullWData(oldp+809539,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19793),2560);
    bufp->fullWData(oldp+809619,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21715),2560);
    bufp->fullWData(oldp+809699,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37579),2560);
    bufp->fullWData(oldp+809779,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39558),2560);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_460, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41444, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x130U]))));
    bufp->fullWData(oldp+809859,(__Vtemp_460),2560);
    bufp->fullWData(oldp+809939,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7764),2560);
    __Vtemp_462[0U] = ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x24U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U])));
    __Vtemp_462[1U] = ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x26U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U])));
    __Vtemp_462[2U] = (IData)((((QData)((IData)((((
                                                   (0x2bU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x2aU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x29U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x28U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))));
    __Vtemp_462[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x2bU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x2aU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x29U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x28U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2544,2416,128, __Vtemp_463, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46955, __Vtemp_462);
    bufp->fullWData(oldp+810019,(__Vtemp_463),2544);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_464, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11243, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U]))));
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_465, __Vtemp_464, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x132U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x132U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x132U]))));
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_466, __Vtemp_465, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x131U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x131U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x131U]))));
    bufp->fullWData(oldp+810099,(__Vtemp_466),2528);
    bufp->fullWData(oldp+810178,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28648),2528);
    bufp->fullWData(oldp+810257,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30636),2528);
    bufp->fullWData(oldp+810336,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15944),2528);
    bufp->fullWData(oldp+810415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17866),2528);
    bufp->fullWData(oldp+810494,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13412),2528);
    bufp->fullWData(oldp+810573,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19788),2528);
    bufp->fullWData(oldp+810652,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21710),2528);
    bufp->fullWData(oldp+810731,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37574),2528);
    bufp->fullWData(oldp+810810,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39553),2528);
    bufp->fullWData(oldp+810889,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41444),2528);
    bufp->fullWData(oldp+810968,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7759),2528);
    __Vtemp_467[0U] = ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x26U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U])));
    __Vtemp_467[1U] = (IData)((((QData)((IData)((((
                                                   (0x2bU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x2aU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x29U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x28U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))));
    __Vtemp_467[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x2bU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x2aU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x29U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x28U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2512,2416,96, __Vtemp_468, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46955, __Vtemp_467);
    bufp->fullWData(oldp+811047,(__Vtemp_468),2512);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_469, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11243, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U]))));
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_470, __Vtemp_469, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x132U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x132U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x132U]))));
    bufp->fullWData(oldp+811126,(__Vtemp_470),2496);
    bufp->fullWData(oldp+811204,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28643),2496);
    bufp->fullWData(oldp+811282,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30631),2496);
    bufp->fullWData(oldp+811360,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15939),2496);
    bufp->fullWData(oldp+811438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17861),2496);
    bufp->fullWData(oldp+811516,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13405),2496);
    bufp->fullWData(oldp+811594,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19783),2496);
    bufp->fullWData(oldp+811672,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21705),2496);
    bufp->fullWData(oldp+811750,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37569),2496);
    bufp->fullWData(oldp+811828,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39548),2496);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_471, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41424, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U]))));
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_472, __Vtemp_471, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x133U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x133U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x133U]))));
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_473, __Vtemp_472, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x132U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x132U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x132U]))));
    bufp->fullWData(oldp+811906,(__Vtemp_473),2496);
    bufp->fullWData(oldp+811984,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7754),2496);
    VL_CONCAT_WWQ(2480,2416,64, __Vtemp_474, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46955, 
                  (((QData)((IData)(((((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x2aU 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x29U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x28U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))));
    bufp->fullWData(oldp+812062,(__Vtemp_474),2480);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_475, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11243, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x133U]))));
    bufp->fullWData(oldp+812140,(__Vtemp_475),2464);
    bufp->fullWData(oldp+812217,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28638),2464);
    bufp->fullWData(oldp+812294,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30626),2464);
    bufp->fullWData(oldp+812371,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15934),2464);
    bufp->fullWData(oldp+812448,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17856),2464);
    bufp->fullWData(oldp+812525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13398),2464);
    bufp->fullWData(oldp+812602,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19778),2464);
    bufp->fullWData(oldp+812679,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21700),2464);
    bufp->fullWData(oldp+812756,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37564),2464);
    bufp->fullWData(oldp+812833,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39543),2464);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_476, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41424, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U]))));
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_477, __Vtemp_476, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x133U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x133U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x133U]))));
    bufp->fullWData(oldp+812910,(__Vtemp_477),2464);
    bufp->fullWData(oldp+812987,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7749),2464);
    VL_CONCAT_WWI(2432,2416,16, __Vtemp_478, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46955, 
                  (0xffffU & ((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2448,2432,16, __Vtemp_479, __Vtemp_478, 
                  (0xffffU & ((0x2aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U])));
    bufp->fullWData(oldp+813064,(__Vtemp_479),2448);
    bufp->fullWData(oldp+813141,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11243),2432);
    bufp->fullWData(oldp+813217,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28632),2432);
    bufp->fullWData(oldp+813293,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30621),2432);
    bufp->fullWData(oldp+813369,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15929),2432);
    bufp->fullWData(oldp+813445,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17851),2432);
    bufp->fullWData(oldp+813521,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13391),2432);
    bufp->fullWData(oldp+813597,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19773),2432);
    bufp->fullWData(oldp+813673,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21695),2432);
    bufp->fullWData(oldp+813749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37558),2432);
    bufp->fullWData(oldp+813825,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39538),2432);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_480, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41424, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x134U]))));
    bufp->fullWData(oldp+813901,(__Vtemp_480),2432);
    bufp->fullWData(oldp+813977,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7744),2432);
    bufp->fullWData(oldp+814053,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46955),2416);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_481, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11222, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U]))));
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_482, __Vtemp_481, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x136U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x136U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x136U]))));
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_483, __Vtemp_482, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x135U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x135U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x135U]))));
    bufp->fullWData(oldp+814129,(__Vtemp_483),2400);
    bufp->fullWData(oldp+814204,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28627),2400);
    bufp->fullWData(oldp+814279,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30616),2400);
    bufp->fullWData(oldp+814354,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15924),2400);
    bufp->fullWData(oldp+814429,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17846),2400);
    bufp->fullWData(oldp+814504,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13384),2400);
    bufp->fullWData(oldp+814579,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19768),2400);
    bufp->fullWData(oldp+814654,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21690),2400);
    bufp->fullWData(oldp+814729,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37553),2400);
    bufp->fullWData(oldp+814804,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39533),2400);
    bufp->fullWData(oldp+814879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41424),2400);
    bufp->fullWData(oldp+814954,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7739),2400);
    __Vtemp_485[0U] = ((((0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x2eU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U])));
    __Vtemp_485[1U] = ((((0x31U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x30U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U])));
    __Vtemp_485[2U] = (IData)((((QData)((IData)((((
                                                   (0x35U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x34U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x33U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x32U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))));
    __Vtemp_485[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x35U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x34U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x33U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x32U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2384,2256,128, __Vtemp_486, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46920, __Vtemp_485);
    bufp->fullWData(oldp+815029,(__Vtemp_486),2384);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_487, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11222, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U]))));
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_488, __Vtemp_487, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x136U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x136U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x136U]))));
    bufp->fullWData(oldp+815104,(__Vtemp_488),2368);
    bufp->fullWData(oldp+815178,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28622),2368);
    bufp->fullWData(oldp+815252,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30611),2368);
    bufp->fullWData(oldp+815326,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15919),2368);
    bufp->fullWData(oldp+815400,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17841),2368);
    bufp->fullWData(oldp+815474,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13377),2368);
    bufp->fullWData(oldp+815548,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19763),2368);
    bufp->fullWData(oldp+815622,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21685),2368);
    bufp->fullWData(oldp+815696,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37548),2368);
    bufp->fullWData(oldp+815770,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39528),2368);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_489, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41404, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U]))));
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_490, __Vtemp_489, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U]))));
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_491, __Vtemp_490, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x136U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x136U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x136U]))));
    bufp->fullWData(oldp+815844,(__Vtemp_491),2368);
    bufp->fullWData(oldp+815918,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7734),2368);
    __Vtemp_492[0U] = ((((0x31U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x30U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U])));
    __Vtemp_492[1U] = (IData)((((QData)((IData)((((
                                                   (0x35U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x34U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x33U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x32U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))));
    __Vtemp_492[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x35U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x34U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x33U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x32U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2352,2256,96, __Vtemp_493, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46920, __Vtemp_492);
    bufp->fullWData(oldp+815992,(__Vtemp_493),2352);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_494, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11222, 
                  ((((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x26U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x137U]))));
    bufp->fullWData(oldp+816066,(__Vtemp_494),2336);
    bufp->fullWData(oldp+816139,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28617),2336);
    bufp->fullWData(oldp+816212,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30606),2336);
    bufp->fullWData(oldp+816285,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15914),2336);
    bufp->fullWData(oldp+816358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17836),2336);
    bufp->fullWData(oldp+816431,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13370),2336);
    bufp->fullWData(oldp+816504,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19758),2336);
    bufp->fullWData(oldp+816577,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21680),2336);
    bufp->fullWData(oldp+816650,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37543),2336);
    bufp->fullWData(oldp+816723,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39523),2336);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_495, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41404, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U]))));
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_496, __Vtemp_495, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x137U]))));
    bufp->fullWData(oldp+816796,(__Vtemp_496),2336);
    bufp->fullWData(oldp+816869,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7729),2336);
    VL_CONCAT_WWQ(2320,2256,64, __Vtemp_497, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46920, 
                  (((QData)((IData)(((((0x35U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x34U 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x33U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x32U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))));
    bufp->fullWData(oldp+816942,(__Vtemp_497),2320);
    bufp->fullWData(oldp+817015,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11222),2304);
    bufp->fullWData(oldp+817087,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28611),2304);
    bufp->fullWData(oldp+817159,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30601),2304);
    bufp->fullWData(oldp+817231,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15909),2304);
    bufp->fullWData(oldp+817303,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17831),2304);
    bufp->fullWData(oldp+817375,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13363),2304);
    bufp->fullWData(oldp+817447,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19753),2304);
    bufp->fullWData(oldp+817519,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21675),2304);
    bufp->fullWData(oldp+817591,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37537),2304);
    bufp->fullWData(oldp+817663,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39518),2304);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_498, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41404, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x138U]))));
    bufp->fullWData(oldp+817735,(__Vtemp_498),2304);
    bufp->fullWData(oldp+817807,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7723),2304);
    VL_CONCAT_WWI(2272,2256,16, __Vtemp_499, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46920, 
                  (0xffffU & ((0x35U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2288,2272,16, __Vtemp_500, __Vtemp_499, 
                  (0xffffU & ((0x34U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU])));
    bufp->fullWData(oldp+817879,(__Vtemp_500),2288);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_501, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11202, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU]))));
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_502, __Vtemp_501, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13aU]))));
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_503, __Vtemp_502, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x139U] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x139U] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x139U]))));
    bufp->fullWData(oldp+817951,(__Vtemp_503),2272);
    bufp->fullWData(oldp+818022,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28606),2272);
    bufp->fullWData(oldp+818093,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30596),2272);
    bufp->fullWData(oldp+818164,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15904),2272);
    bufp->fullWData(oldp+818235,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17826),2272);
    bufp->fullWData(oldp+818306,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13356),2272);
    bufp->fullWData(oldp+818377,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19748),2272);
    bufp->fullWData(oldp+818448,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21670),2272);
    bufp->fullWData(oldp+818519,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37532),2272);
    bufp->fullWData(oldp+818590,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39513),2272);
    bufp->fullWData(oldp+818661,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41404),2272);
    bufp->fullWData(oldp+818732,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7718),2272);
    bufp->fullWData(oldp+818803,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46920),2256);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_504, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11202, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU]))));
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_505, __Vtemp_504, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13aU]))));
    bufp->fullWData(oldp+818874,(__Vtemp_505),2240);
    bufp->fullWData(oldp+818944,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28601),2240);
    bufp->fullWData(oldp+819014,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30591),2240);
    bufp->fullWData(oldp+819084,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15899),2240);
    bufp->fullWData(oldp+819154,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17821),2240);
    bufp->fullWData(oldp+819224,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13349),2240);
    bufp->fullWData(oldp+819294,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19743),2240);
    bufp->fullWData(oldp+819364,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21665),2240);
    bufp->fullWData(oldp+819434,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37527),2240);
    bufp->fullWData(oldp+819504,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39508),2240);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_506, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41384, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU]))));
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_507, __Vtemp_506, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU]))));
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_508, __Vtemp_507, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13aU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13aU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xaU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13aU]))));
    bufp->fullWData(oldp+819574,(__Vtemp_508),2240);
    bufp->fullWData(oldp+819644,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7713),2240);
    __Vtemp_510[0U] = ((((0x39U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x38U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU])));
    __Vtemp_510[1U] = ((((0x3bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x3aU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU])));
    __Vtemp_510[2U] = (IData)((((QData)((IData)((((
                                                   (0x3fU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x3eU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x3dU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x3cU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))));
    __Vtemp_510[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x3fU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x3eU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x3dU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x3cU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2224,2096,128, __Vtemp_511, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46885, __Vtemp_510);
    bufp->fullWData(oldp+819714,(__Vtemp_511),2224);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_512, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11202, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13bU]))));
    bufp->fullWData(oldp+819784,(__Vtemp_512),2208);
    bufp->fullWData(oldp+819853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28596),2208);
    bufp->fullWData(oldp+819922,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30586),2208);
    bufp->fullWData(oldp+819991,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15894),2208);
    bufp->fullWData(oldp+820060,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17816),2208);
    bufp->fullWData(oldp+820129,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13342),2208);
    bufp->fullWData(oldp+820198,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19738),2208);
    bufp->fullWData(oldp+820267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21660),2208);
    bufp->fullWData(oldp+820336,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37522),2208);
    bufp->fullWData(oldp+820405,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39503),2208);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_513, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41384, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU]))));
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_514, __Vtemp_513, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xbU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13bU]))));
    bufp->fullWData(oldp+820474,(__Vtemp_514),2208);
    bufp->fullWData(oldp+820543,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7708),2208);
    __Vtemp_515[0U] = ((((0x3bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x3aU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU])));
    __Vtemp_515[1U] = (IData)((((QData)((IData)((((
                                                   (0x3fU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x3eU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x3dU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x3cU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))));
    __Vtemp_515[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x3fU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x3eU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x3dU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x3cU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2192,2096,96, __Vtemp_516, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46885, __Vtemp_515);
    bufp->fullWData(oldp+820612,(__Vtemp_516),2192);
    bufp->fullWData(oldp+820681,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11202),2176);
    bufp->fullWData(oldp+820749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28590),2176);
    bufp->fullWData(oldp+820817,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30581),2176);
    bufp->fullWData(oldp+820885,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15889),2176);
    bufp->fullWData(oldp+820953,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17811),2176);
    bufp->fullWData(oldp+821021,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13335),2176);
    bufp->fullWData(oldp+821089,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19733),2176);
    bufp->fullWData(oldp+821157,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21655),2176);
    bufp->fullWData(oldp+821225,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37516),2176);
    bufp->fullWData(oldp+821293,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39498),2176);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_517, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41384, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xcU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13cU]))));
    bufp->fullWData(oldp+821361,(__Vtemp_517),2176);
    bufp->fullWData(oldp+821429,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7703),2176);
    VL_CONCAT_WWQ(2160,2096,64, __Vtemp_518, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46885, 
                  (((QData)((IData)(((((0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x3eU 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x3dU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x3cU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))));
    bufp->fullWData(oldp+821497,(__Vtemp_518),2160);
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_519, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11181, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU]))));
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_520, __Vtemp_519, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13eU]))));
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_521, __Vtemp_520, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13dU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13dU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13dU]))));
    bufp->fullWData(oldp+821565,(__Vtemp_521),2144);
    bufp->fullWData(oldp+821632,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28585),2144);
    bufp->fullWData(oldp+821699,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30576),2144);
    bufp->fullWData(oldp+821766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15884),2144);
    bufp->fullWData(oldp+821833,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17806),2144);
    bufp->fullWData(oldp+821900,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13328),2144);
    bufp->fullWData(oldp+821967,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19728),2144);
    bufp->fullWData(oldp+822034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21650),2144);
    bufp->fullWData(oldp+822101,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37511),2144);
    bufp->fullWData(oldp+822168,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39493),2144);
    bufp->fullWData(oldp+822235,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41384),2144);
    bufp->fullWData(oldp+822302,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7698),2144);
    VL_CONCAT_WWI(2112,2096,16, __Vtemp_522, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46885, 
                  (0xffffU & ((0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2128,2112,16, __Vtemp_523, __Vtemp_522, 
                  (0xffffU & ((0x3eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU])));
    bufp->fullWData(oldp+822369,(__Vtemp_523),2128);
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_524, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11181, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU]))));
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_525, __Vtemp_524, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13eU]))));
    bufp->fullWData(oldp+822436,(__Vtemp_525),2112);
    bufp->fullWData(oldp+822502,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28580),2112);
    bufp->fullWData(oldp+822568,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30571),2112);
    bufp->fullWData(oldp+822634,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15879),2112);
    bufp->fullWData(oldp+822700,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17801),2112);
    bufp->fullWData(oldp+822766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13321),2112);
    bufp->fullWData(oldp+822832,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19723),2112);
    bufp->fullWData(oldp+822898,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21645),2112);
    bufp->fullWData(oldp+822964,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37506),2112);
    bufp->fullWData(oldp+823030,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39488),2112);
    __Vtemp_526[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U])));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3eU)) {
        __Vtemp_526[(__Vilp1 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41363[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_527, __Vtemp_526, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13fU]))));
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_528, __Vtemp_527, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13eU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13eU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xeU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13eU]))));
    bufp->fullWData(oldp+823096,(__Vtemp_528),2112);
    bufp->fullWData(oldp+823162,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7693),2112);
    bufp->fullWData(oldp+823228,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46885),2096);
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_529, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11181, 
                  ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x13fU]))));
    bufp->fullWData(oldp+823294,(__Vtemp_529),2080);
    bufp->fullWData(oldp+823359,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28575),2080);
    bufp->fullWData(oldp+823424,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30566),2080);
    bufp->fullWData(oldp+823489,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15874),2080);
    bufp->fullWData(oldp+823554,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17796),2080);
    bufp->fullWData(oldp+823619,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13314),2080);
    bufp->fullWData(oldp+823684,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19718),2080);
    bufp->fullWData(oldp+823749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21640),2080);
    bufp->fullWData(oldp+823814,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37501),2080);
    bufp->fullWData(oldp+823879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39483),2080);
    __Vtemp_530[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U])));
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3eU)) {
        __Vtemp_530[(__Vilp2 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41363[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_531, __Vtemp_530, 
                  ((((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                      ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                          << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU] 
                                       >> 0x10U)) : 
                     ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13fU] 
                       << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13fU] 
                                    >> 0x10U))) << 0x10U) 
                   | (0xffffU & ((0x13U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                  ? vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0xfU]
                                  : vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x13fU]))));
    bufp->fullWData(oldp+823944,(__Vtemp_531),2080);
    bufp->fullWData(oldp+824009,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7688),2080);
    __Vtemp_533[0U] = ((((0x43U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x42U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U])));
    __Vtemp_533[1U] = ((((0x45U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x44U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U])));
    __Vtemp_533[2U] = (IData)((((QData)((IData)((((
                                                   (0x49U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x48U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x47U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x46U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))));
    __Vtemp_533[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x49U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x48U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x47U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x46U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2064,1936,128, __Vtemp_534, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850, __Vtemp_533);
    bufp->fullWData(oldp+824074,(__Vtemp_534),2064);
    bufp->fullWData(oldp+824139,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11181),2048);
    bufp->fullWData(oldp+824203,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28569),2048);
    bufp->fullWData(oldp+824267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30561),2048);
    bufp->fullWData(oldp+824331,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15869),2048);
    bufp->fullWData(oldp+824395,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17791),2048);
    bufp->fullWData(oldp+824459,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13307),2048);
    bufp->fullWData(oldp+824523,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19713),2048);
    bufp->fullWData(oldp+824587,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21635),2048);
    bufp->fullWData(oldp+824651,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37495),2048);
    bufp->fullWData(oldp+824715,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39478),2048);
    __Vtemp_535[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[0U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x140U])));
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0x3eU)) {
        __Vtemp_535[(__Vilp3 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41363[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    bufp->fullWData(oldp+824779,(__Vtemp_535),2048);
    bufp->fullWData(oldp+824843,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7682),2048);
    __Vtemp_537[0U] = ((((0x45U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x44U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U])));
    __Vtemp_537[1U] = (IData)((((QData)((IData)((((
                                                   (0x49U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x48U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x47U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x46U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))));
    __Vtemp_537[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x49U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x48U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x47U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x46U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3cU)) {
        __Vtemp_537[(__Vilp4 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    bufp->fullWData(oldp+824907,(__Vtemp_537),2032);
    __Vtemp_540[0U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x141U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x141U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[1U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x141U])));
    __Vtemp_540[1U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x142U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x142U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x142U])));
    __Vtemp_540[2U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U])));
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0x3bU)) {
        __Vtemp_540[(__Vilp5 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11161[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    bufp->fullWData(oldp+824971,(__Vtemp_540),2016);
    bufp->fullWData(oldp+825034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28564),2016);
    bufp->fullWData(oldp+825097,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30556),2016);
    bufp->fullWData(oldp+825160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15864),2016);
    bufp->fullWData(oldp+825223,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17786),2016);
    bufp->fullWData(oldp+825286,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13300),2016);
    bufp->fullWData(oldp+825349,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19708),2016);
    bufp->fullWData(oldp+825412,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21630),2016);
    bufp->fullWData(oldp+825475,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37490),2016);
    bufp->fullWData(oldp+825538,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39473),2016);
    bufp->fullWData(oldp+825601,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41363),2016);
    bufp->fullWData(oldp+825664,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7677),2016);
    __Vtemp_541[0U] = (IData)((((QData)((IData)((((
                                                   (0x49U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x48U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x47U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x46U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))));
    __Vtemp_541[1U] = (IData)(((((QData)((IData)(((
                                                   ((0x49U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x48U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x47U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x46U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3cU)) {
        __Vtemp_541[(__Vilp6 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    bufp->fullWData(oldp+825727,(__Vtemp_541),2000);
    __Vtemp_543[0U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x142U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x142U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[2U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x142U])));
    __Vtemp_543[1U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U])));
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0x3bU)) {
        __Vtemp_543[(__Vilp7 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11161[__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    bufp->fullWData(oldp+825790,(__Vtemp_543),1984);
    bufp->fullWData(oldp+825852,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28559),1984);
    bufp->fullWData(oldp+825914,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30551),1984);
    bufp->fullWData(oldp+825976,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15859),1984);
    bufp->fullWData(oldp+826038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17781),1984);
    bufp->fullWData(oldp+826100,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13293),1984);
    bufp->fullWData(oldp+826162,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19703),1984);
    bufp->fullWData(oldp+826224,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21625),1984);
    bufp->fullWData(oldp+826286,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37485),1984);
    bufp->fullWData(oldp+826348,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39468),1984);
    __Vtemp_546[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x142U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x142U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[2U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x142U])));
    __Vtemp_546[1U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x143U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x143U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x143U])));
    __Vtemp_546[2U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U])));
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0x3aU)) {
        __Vtemp_546[(__Vilp8 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41343[__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    bufp->fullWData(oldp+826410,(__Vtemp_546),1984);
    bufp->fullWData(oldp+826472,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7672),1984);
    __Vtemp_548[0U] = ((((0x49U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x48U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U])));
    __Vtemp_548[1U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0U]));
    __Vtemp_548[2U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[1U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[1U]));
    __Vtemp_548[3U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[2U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[2U]));
    __Vtemp_548[4U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[3U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[3U]));
    __Vtemp_548[5U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[4U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[4U]));
    __Vtemp_548[6U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[5U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[5U]));
    __Vtemp_548[7U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[6U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[6U]));
    __Vtemp_548[8U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[7U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[7U]));
    __Vtemp_548[9U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[8U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[8U]));
    __Vtemp_548[0xaU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[9U]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[9U]));
    __Vtemp_548[0xbU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xaU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xaU]));
    __Vtemp_548[0xcU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xbU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xbU]));
    __Vtemp_548[0xdU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xcU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xcU]));
    __Vtemp_548[0xeU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xdU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xdU]));
    __Vtemp_548[0xfU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xeU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xeU]));
    __Vtemp_548[0x10U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xfU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0xfU]));
    __Vtemp_548[0x11U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x10U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x10U]));
    __Vtemp_548[0x12U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x11U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x11U]));
    __Vtemp_548[0x13U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x12U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x12U]));
    __Vtemp_548[0x14U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x13U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x13U]));
    __Vtemp_548[0x15U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x14U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x14U]));
    __Vtemp_548[0x16U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x15U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x15U]));
    __Vtemp_548[0x17U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x16U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x16U]));
    __Vtemp_548[0x18U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x17U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x17U]));
    __Vtemp_548[0x19U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x18U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x18U]));
    __Vtemp_548[0x1aU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x19U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x19U]));
    __Vtemp_548[0x1bU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1aU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1aU]));
    __Vtemp_548[0x1cU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1bU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1bU]));
    __Vtemp_548[0x1dU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1cU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1cU]));
    __Vtemp_548[0x1eU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1dU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1dU]));
    __Vtemp_548[0x1fU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1eU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1eU]));
    __Vtemp_548[0x20U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1fU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x1fU]));
    __Vtemp_548[0x21U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x20U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x20U]));
    __Vtemp_548[0x22U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x21U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x21U]));
    __Vtemp_548[0x23U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x22U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x22U]));
    __Vtemp_548[0x24U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x23U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x23U]));
    __Vtemp_548[0x25U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x24U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x24U]));
    __Vtemp_548[0x26U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x25U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x25U]));
    __Vtemp_548[0x27U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x26U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x26U]));
    __Vtemp_548[0x28U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x27U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x27U]));
    __Vtemp_548[0x29U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x28U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x28U]));
    __Vtemp_548[0x2aU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x29U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x29U]));
    __Vtemp_548[0x2bU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2aU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2aU]));
    __Vtemp_548[0x2cU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2bU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2bU]));
    __Vtemp_548[0x2dU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2cU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2cU]));
    __Vtemp_548[0x2eU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2dU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2dU]));
    __Vtemp_548[0x2fU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2eU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2eU]));
    __Vtemp_548[0x30U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2fU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x2fU]));
    __Vtemp_548[0x31U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x30U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x30U]));
    __Vtemp_548[0x32U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x31U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x31U]));
    __Vtemp_548[0x33U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x32U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x32U]));
    __Vtemp_548[0x34U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x33U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x33U]));
    __Vtemp_548[0x35U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x34U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x34U]));
    __Vtemp_548[0x36U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x35U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x35U]));
    __Vtemp_548[0x37U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x36U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x36U]));
    __Vtemp_548[0x38U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x37U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x37U]));
    __Vtemp_548[0x39U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x38U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x38U]));
    __Vtemp_548[0x3aU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x39U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x39U]));
    __Vtemp_548[0x3bU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x3aU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x3aU]));
    __Vtemp_548[0x3cU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x3bU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x3bU]));
    __Vtemp_548[0x3dU] = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850[0x3cU]);
    bufp->fullWData(oldp+826534,(__Vtemp_548),1968);
    __Vtemp_549[0U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[3U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x143U])));
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0x3bU)) {
        __Vtemp_549[(__Vilp9 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11161[__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    bufp->fullWData(oldp+826596,(__Vtemp_549),1952);
    bufp->fullWData(oldp+826657,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28554),1952);
    bufp->fullWData(oldp+826718,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30546),1952);
    bufp->fullWData(oldp+826779,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15854),1952);
    bufp->fullWData(oldp+826840,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17776),1952);
    bufp->fullWData(oldp+826901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13286),1952);
    bufp->fullWData(oldp+826962,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19698),1952);
    bufp->fullWData(oldp+827023,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21620),1952);
    bufp->fullWData(oldp+827084,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37480),1952);
    bufp->fullWData(oldp+827145,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39463),1952);
    __Vtemp_551[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x143U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x143U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[3U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x143U])));
    __Vtemp_551[1U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U])));
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0x3aU)) {
        __Vtemp_551[(__Vilp10 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41343[__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    bufp->fullWData(oldp+827206,(__Vtemp_551),1952);
    bufp->fullWData(oldp+827267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7667),1952);
    bufp->fullWData(oldp+827328,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46850),1936);
    bufp->fullWData(oldp+827389,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11161),1920);
    bufp->fullWData(oldp+827449,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28548),1920);
    bufp->fullWData(oldp+827509,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30541),1920);
    bufp->fullWData(oldp+827569,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15849),1920);
    bufp->fullWData(oldp+827629,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17771),1920);
    bufp->fullWData(oldp+827689,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13279),1920);
    bufp->fullWData(oldp+827749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19693),1920);
    bufp->fullWData(oldp+827809,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21615),1920);
    bufp->fullWData(oldp+827869,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37474),1920);
    bufp->fullWData(oldp+827929,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39458),1920);
    __Vtemp_552[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[4U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x144U])));
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0x3aU)) {
        __Vtemp_552[(__Vilp11 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41343[__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    bufp->fullWData(oldp+827989,(__Vtemp_552),1920);
    bufp->fullWData(oldp+828049,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7662),1920);
    __Vtemp_555[0U] = ((((0x4dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x4cU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U])));
    __Vtemp_555[1U] = ((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x4eU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])));
    __Vtemp_555[2U] = (IData)((((QData)((IData)((((
                                                   (0x53U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x52U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x51U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x50U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))));
    __Vtemp_555[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x53U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x52U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x51U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x50U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x37U)) {
        __Vtemp_555[(__Vilp12 + (IData)(4U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46815[__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    bufp->fullWData(oldp+828109,(__Vtemp_555),1904);
    __Vtemp_558[0U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x145U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x145U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[5U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x145U])));
    __Vtemp_558[1U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x146U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x146U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x146U])));
    __Vtemp_558[2U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x147U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x147U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x147U])));
    IData/*31:0*/ __Vilp13;
    __Vilp13 = 0U;
    while ((__Vilp13 <= 0x37U)) {
        __Vtemp_558[(__Vilp13 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11140[__Vilp13];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    bufp->fullWData(oldp+828169,(__Vtemp_558),1888);
    bufp->fullWData(oldp+828228,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28543),1888);
    bufp->fullWData(oldp+828287,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30536),1888);
    bufp->fullWData(oldp+828346,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15844),1888);
    bufp->fullWData(oldp+828405,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17766),1888);
    bufp->fullWData(oldp+828464,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13272),1888);
    bufp->fullWData(oldp+828523,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19688),1888);
    bufp->fullWData(oldp+828582,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21610),1888);
    bufp->fullWData(oldp+828641,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37469),1888);
    bufp->fullWData(oldp+828700,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39453),1888);
    bufp->fullWData(oldp+828759,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41343),1888);
    bufp->fullWData(oldp+828818,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7657),1888);
    __Vtemp_560[0U] = ((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x4eU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])));
    __Vtemp_560[1U] = (IData)((((QData)((IData)((((
                                                   (0x53U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x52U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x51U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x50U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))));
    __Vtemp_560[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x53U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x52U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x51U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x50U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x37U)) {
        __Vtemp_560[(__Vilp14 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46815[__Vilp14];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    bufp->fullWData(oldp+828877,(__Vtemp_560),1872);
    __Vtemp_562[0U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x146U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x146U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[6U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x146U])));
    __Vtemp_562[1U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x147U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x147U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x28U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_accumulator[7U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_final_output[0x147U])));
    IData/*31:0*/ __Vilp15;
    __Vilp15 = 0U;
    while ((__Vilp15 <= 0x37U)) {
        __Vtemp_562[(__Vilp15 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_002_EQ_47_0891_THEN_sa2___05FETC___05F_d11140[__Vilp15];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    bufp->fullWData(oldp+828936,(__Vtemp_562),1856);
    bufp->fullWData(oldp+828994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d28538),1856);
    bufp->fullWData(oldp+829052,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_8235_EQ_95_8242_THEN_m_ETC___05F_d30531),1856);
    bufp->fullWData(oldp+829110,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_aa_ETC___05F_d15839),1856);
    bufp->fullWData(oldp+829168,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_bb_ETC___05F_d17761),1856);
    bufp->fullWData(oldp+829226,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_pp_ETC___05F_d13265),1856);
    bufp->fullWData(oldp+829284,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d19683),1856);
    bufp->fullWData(oldp+829342,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2855_EQ_768_2858_THEN_bram_ti_ETC___05F_d21605),1856);
    bufp->fullWData(oldp+829400,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d37464),1856);
    bufp->fullWData(oldp+829458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_7170_EQ_95_7177_THEN_m_ETC___05F_d39448),1856);
    __Vtemp_565[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x146U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x146U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[6U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x146U])));
    __Vtemp_565[1U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x147U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x147U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[7U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x147U])));
    __Vtemp_565[2U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                          ? ((vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U] 
                                           >> 0x10U))
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x148U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x148U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x14U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
                                                 ? 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__mse__DOT__p_fifo__DOT__data0_reg[8U]
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p[0x148U])));
    IData/*31:0*/ __Vilp16;
    __Vilp16 = 0U;
    while ((__Vilp16 <= 0x36U)) {
        __Vtemp_565[(__Vilp16 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_1084_BITS_4_TO_0_1088_E_ETC___05F_d41323[__Vilp16];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    bufp->fullWData(oldp+829516,(__Vtemp_565),1856);
    bufp->fullWData(oldp+829574,(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa1_final_output_393_BITS_4351_TO_4096_394_CON_ETC___05F_d7652),1856);
    __Vtemp_566[0U] = (IData)((((QData)((IData)((((
                                                   (0x53U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x52U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x51U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x50U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))));
    __Vtemp_566[1U] = (IData)(((((QData)((IData)(((
                                                   ((0x53U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x52U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x51U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x50U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_6356_EQ_0_6357_THEN_bram_x_ETC___05F_d46427)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0x37U)) {
        __Vtemp_566[(__Vilp17 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_6407_EQ_194_6408_THEN_IF_ETC___05F_d46815[__Vilp17];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    bufp->fullWData(oldp+829632,(__Vtemp_566),1840);
}
