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
    VlWide<57>/*1823:0*/ __Vtemp_567;
    VlWide<57>/*1823:0*/ __Vtemp_569;
    // Body
    bufp->fullWData(oldp+565104,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28953),7104);
    bufp->fullWData(oldp+565326,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30905),7104);
    bufp->fullWData(oldp+565548,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16213),7104);
    bufp->fullWData(oldp+565770,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18135),7104);
    bufp->fullWData(oldp+565992,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13967),7104);
    bufp->fullWData(oldp+566214,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20057),7104);
    bufp->fullWData(oldp+566436,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21979),7104);
    bufp->fullWData(oldp+566658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37879),7104);
    bufp->fullWData(oldp+566880,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39822),7104);
    VL_CONCAT_WWI(7040,7008,32, __Vtemp_1, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41707, 
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
    bufp->fullWData(oldp+567102,(__Vtemp_3),7104);
    VL_CONCAT_WWI(7072,7040,32, __Vtemp_4, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11535, 
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
    bufp->fullWData(oldp+567324,(__Vtemp_4),7072);
    bufp->fullWData(oldp+567545,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28948),7072);
    bufp->fullWData(oldp+567766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30900),7072);
    bufp->fullWData(oldp+567987,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16208),7072);
    bufp->fullWData(oldp+568208,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18130),7072);
    bufp->fullWData(oldp+568429,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13960),7072);
    bufp->fullWData(oldp+568650,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20052),7072);
    bufp->fullWData(oldp+568871,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21974),7072);
    bufp->fullWData(oldp+569092,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37874),7072);
    bufp->fullWData(oldp+569313,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39817),7072);
    VL_CONCAT_WWI(7040,7008,32, __Vtemp_5, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41707, 
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
    bufp->fullWData(oldp+569534,(__Vtemp_6),7072);
    bufp->fullWData(oldp+569755,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11535),7040);
    bufp->fullWData(oldp+569975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28942),7040);
    bufp->fullWData(oldp+570195,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30895),7040);
    bufp->fullWData(oldp+570415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16203),7040);
    bufp->fullWData(oldp+570635,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18125),7040);
    bufp->fullWData(oldp+570855,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13953),7040);
    bufp->fullWData(oldp+571075,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20047),7040);
    bufp->fullWData(oldp+571295,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21969),7040);
    bufp->fullWData(oldp+571515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37868),7040);
    bufp->fullWData(oldp+571735,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39812),7040);
    VL_CONCAT_WWI(7040,7008,32, __Vtemp_7, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41707, 
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
    bufp->fullWData(oldp+571955,(__Vtemp_7),7040);
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_8, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11514, 
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
    bufp->fullWData(oldp+572175,(__Vtemp_10),7008);
    bufp->fullWData(oldp+572394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28937),7008);
    bufp->fullWData(oldp+572613,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30890),7008);
    bufp->fullWData(oldp+572832,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16198),7008);
    bufp->fullWData(oldp+573051,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18120),7008);
    bufp->fullWData(oldp+573270,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13946),7008);
    bufp->fullWData(oldp+573489,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20042),7008);
    bufp->fullWData(oldp+573708,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21964),7008);
    bufp->fullWData(oldp+573927,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37863),7008);
    bufp->fullWData(oldp+574146,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39807),7008);
    bufp->fullWData(oldp+574365,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41707),7008);
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_11, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11514, 
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
    bufp->fullWData(oldp+574584,(__Vtemp_12),6976);
    bufp->fullWData(oldp+574802,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28932),6976);
    bufp->fullWData(oldp+575020,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30885),6976);
    bufp->fullWData(oldp+575238,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16193),6976);
    bufp->fullWData(oldp+575456,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18115),6976);
    bufp->fullWData(oldp+575674,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13939),6976);
    bufp->fullWData(oldp+575892,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20037),6976);
    bufp->fullWData(oldp+576110,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21959),6976);
    bufp->fullWData(oldp+576328,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37858),6976);
    bufp->fullWData(oldp+576546,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39802),6976);
    VL_CONCAT_WWI(6912,6880,32, __Vtemp_13, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41687, 
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
    bufp->fullWData(oldp+576764,(__Vtemp_15),6976);
    VL_CONCAT_WWI(6944,6912,32, __Vtemp_16, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11514, 
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
    bufp->fullWData(oldp+576982,(__Vtemp_16),6944);
    bufp->fullWData(oldp+577199,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28927),6944);
    bufp->fullWData(oldp+577416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30880),6944);
    bufp->fullWData(oldp+577633,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16188),6944);
    bufp->fullWData(oldp+577850,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18110),6944);
    bufp->fullWData(oldp+578067,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13932),6944);
    bufp->fullWData(oldp+578284,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20032),6944);
    bufp->fullWData(oldp+578501,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21954),6944);
    bufp->fullWData(oldp+578718,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37853),6944);
    bufp->fullWData(oldp+578935,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39797),6944);
    VL_CONCAT_WWI(6912,6880,32, __Vtemp_17, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41687, 
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
    bufp->fullWData(oldp+579152,(__Vtemp_18),6944);
    bufp->fullWData(oldp+579369,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11514),6912);
    bufp->fullWData(oldp+579585,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28921),6912);
    bufp->fullWData(oldp+579801,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30875),6912);
    bufp->fullWData(oldp+580017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16183),6912);
    bufp->fullWData(oldp+580233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18105),6912);
    bufp->fullWData(oldp+580449,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13925),6912);
    bufp->fullWData(oldp+580665,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20027),6912);
    bufp->fullWData(oldp+580881,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21949),6912);
    bufp->fullWData(oldp+581097,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37847),6912);
    bufp->fullWData(oldp+581313,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39792),6912);
    VL_CONCAT_WWI(6912,6880,32, __Vtemp_19, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41687, 
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
    bufp->fullWData(oldp+581529,(__Vtemp_19),6912);
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_20, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11494, 
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
    bufp->fullWData(oldp+581745,(__Vtemp_22),6880);
    bufp->fullWData(oldp+581960,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28916),6880);
    bufp->fullWData(oldp+582175,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30870),6880);
    bufp->fullWData(oldp+582390,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16178),6880);
    bufp->fullWData(oldp+582605,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18100),6880);
    bufp->fullWData(oldp+582820,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13918),6880);
    bufp->fullWData(oldp+583035,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20022),6880);
    bufp->fullWData(oldp+583250,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21944),6880);
    bufp->fullWData(oldp+583465,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37842),6880);
    bufp->fullWData(oldp+583680,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39787),6880);
    bufp->fullWData(oldp+583895,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41687),6880);
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_23, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11494, 
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
    bufp->fullWData(oldp+584110,(__Vtemp_24),6848);
    bufp->fullWData(oldp+584324,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28911),6848);
    bufp->fullWData(oldp+584538,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30865),6848);
    bufp->fullWData(oldp+584752,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16173),6848);
    bufp->fullWData(oldp+584966,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18095),6848);
    bufp->fullWData(oldp+585180,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13911),6848);
    bufp->fullWData(oldp+585394,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20017),6848);
    bufp->fullWData(oldp+585608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21939),6848);
    bufp->fullWData(oldp+585822,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37837),6848);
    bufp->fullWData(oldp+586036,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39782),6848);
    VL_CONCAT_WWI(6784,6752,32, __Vtemp_25, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41667, 
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
    bufp->fullWData(oldp+586250,(__Vtemp_27),6848);
    VL_CONCAT_WWI(6816,6784,32, __Vtemp_28, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11494, 
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
    bufp->fullWData(oldp+586464,(__Vtemp_28),6816);
    bufp->fullWData(oldp+586677,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28906),6816);
    bufp->fullWData(oldp+586890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30860),6816);
    bufp->fullWData(oldp+587103,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16168),6816);
    bufp->fullWData(oldp+587316,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18090),6816);
    bufp->fullWData(oldp+587529,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13904),6816);
    bufp->fullWData(oldp+587742,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20012),6816);
    bufp->fullWData(oldp+587955,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21934),6816);
    bufp->fullWData(oldp+588168,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37832),6816);
    bufp->fullWData(oldp+588381,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39777),6816);
    VL_CONCAT_WWI(6784,6752,32, __Vtemp_29, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41667, 
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
    bufp->fullWData(oldp+588594,(__Vtemp_30),6816);
    bufp->fullWData(oldp+588807,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11494),6784);
    bufp->fullWData(oldp+589019,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28900),6784);
    bufp->fullWData(oldp+589231,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30855),6784);
    bufp->fullWData(oldp+589443,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16163),6784);
    bufp->fullWData(oldp+589655,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18085),6784);
    bufp->fullWData(oldp+589867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13897),6784);
    bufp->fullWData(oldp+590079,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20007),6784);
    bufp->fullWData(oldp+590291,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21929),6784);
    bufp->fullWData(oldp+590503,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37826),6784);
    bufp->fullWData(oldp+590715,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39772),6784);
    VL_CONCAT_WWI(6784,6752,32, __Vtemp_31, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41667, 
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
    bufp->fullWData(oldp+590927,(__Vtemp_31),6784);
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_32, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11473, 
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
    bufp->fullWData(oldp+591139,(__Vtemp_34),6752);
    bufp->fullWData(oldp+591350,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28895),6752);
    bufp->fullWData(oldp+591561,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30850),6752);
    bufp->fullWData(oldp+591772,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16158),6752);
    bufp->fullWData(oldp+591983,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18080),6752);
    bufp->fullWData(oldp+592194,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13890),6752);
    bufp->fullWData(oldp+592405,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d20002),6752);
    bufp->fullWData(oldp+592616,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21924),6752);
    bufp->fullWData(oldp+592827,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37821),6752);
    bufp->fullWData(oldp+593038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39767),6752);
    bufp->fullWData(oldp+593249,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41667),6752);
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_35, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11473, 
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
    bufp->fullWData(oldp+593460,(__Vtemp_36),6720);
    bufp->fullWData(oldp+593670,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28890),6720);
    bufp->fullWData(oldp+593880,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30845),6720);
    bufp->fullWData(oldp+594090,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16153),6720);
    bufp->fullWData(oldp+594300,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18075),6720);
    bufp->fullWData(oldp+594510,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13883),6720);
    bufp->fullWData(oldp+594720,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19997),6720);
    bufp->fullWData(oldp+594930,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21919),6720);
    bufp->fullWData(oldp+595140,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37816),6720);
    bufp->fullWData(oldp+595350,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39762),6720);
    VL_CONCAT_WWI(6656,6624,32, __Vtemp_37, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41646, 
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
    bufp->fullWData(oldp+595560,(__Vtemp_39),6720);
    VL_CONCAT_WWI(6688,6656,32, __Vtemp_40, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11473, 
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
    bufp->fullWData(oldp+595770,(__Vtemp_40),6688);
    bufp->fullWData(oldp+595979,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28885),6688);
    bufp->fullWData(oldp+596188,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30840),6688);
    bufp->fullWData(oldp+596397,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16148),6688);
    bufp->fullWData(oldp+596606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18070),6688);
    bufp->fullWData(oldp+596815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13876),6688);
    bufp->fullWData(oldp+597024,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19992),6688);
    bufp->fullWData(oldp+597233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21914),6688);
    bufp->fullWData(oldp+597442,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37811),6688);
    bufp->fullWData(oldp+597651,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39757),6688);
    VL_CONCAT_WWI(6656,6624,32, __Vtemp_41, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41646, 
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
    bufp->fullWData(oldp+597860,(__Vtemp_42),6688);
    bufp->fullWData(oldp+598069,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11473),6656);
    bufp->fullWData(oldp+598277,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28879),6656);
    bufp->fullWData(oldp+598485,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30835),6656);
    bufp->fullWData(oldp+598693,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16143),6656);
    bufp->fullWData(oldp+598901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18065),6656);
    bufp->fullWData(oldp+599109,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13869),6656);
    bufp->fullWData(oldp+599317,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19987),6656);
    bufp->fullWData(oldp+599525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21909),6656);
    bufp->fullWData(oldp+599733,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37805),6656);
    bufp->fullWData(oldp+599941,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39752),6656);
    VL_CONCAT_WWI(6656,6624,32, __Vtemp_43, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41646, 
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
    bufp->fullWData(oldp+600149,(__Vtemp_43),6656);
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_44, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11453, 
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
    bufp->fullWData(oldp+600357,(__Vtemp_46),6624);
    bufp->fullWData(oldp+600564,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28874),6624);
    bufp->fullWData(oldp+600771,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30830),6624);
    bufp->fullWData(oldp+600978,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16138),6624);
    bufp->fullWData(oldp+601185,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18060),6624);
    bufp->fullWData(oldp+601392,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13862),6624);
    bufp->fullWData(oldp+601599,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19982),6624);
    bufp->fullWData(oldp+601806,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21904),6624);
    bufp->fullWData(oldp+602013,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37800),6624);
    bufp->fullWData(oldp+602220,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39747),6624);
    bufp->fullWData(oldp+602427,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41646),6624);
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_47, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11453, 
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
    bufp->fullWData(oldp+602634,(__Vtemp_48),6592);
    bufp->fullWData(oldp+602840,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28869),6592);
    bufp->fullWData(oldp+603046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30825),6592);
    bufp->fullWData(oldp+603252,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16133),6592);
    bufp->fullWData(oldp+603458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18055),6592);
    bufp->fullWData(oldp+603664,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13855),6592);
    bufp->fullWData(oldp+603870,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19977),6592);
    bufp->fullWData(oldp+604076,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21899),6592);
    bufp->fullWData(oldp+604282,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37795),6592);
    bufp->fullWData(oldp+604488,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39742),6592);
    VL_CONCAT_WWI(6528,6496,32, __Vtemp_49, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41626, 
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
    bufp->fullWData(oldp+604694,(__Vtemp_51),6592);
    VL_CONCAT_WWI(6560,6528,32, __Vtemp_52, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11453, 
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
    bufp->fullWData(oldp+604900,(__Vtemp_52),6560);
    bufp->fullWData(oldp+605105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28864),6560);
    bufp->fullWData(oldp+605310,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30820),6560);
    bufp->fullWData(oldp+605515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16128),6560);
    bufp->fullWData(oldp+605720,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18050),6560);
    bufp->fullWData(oldp+605925,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13848),6560);
    bufp->fullWData(oldp+606130,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19972),6560);
    bufp->fullWData(oldp+606335,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21894),6560);
    bufp->fullWData(oldp+606540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37790),6560);
    bufp->fullWData(oldp+606745,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39737),6560);
    VL_CONCAT_WWI(6528,6496,32, __Vtemp_53, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41626, 
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
    bufp->fullWData(oldp+606950,(__Vtemp_54),6560);
    bufp->fullWData(oldp+607155,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11453),6528);
    bufp->fullWData(oldp+607359,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28858),6528);
    bufp->fullWData(oldp+607563,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30815),6528);
    bufp->fullWData(oldp+607767,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16123),6528);
    bufp->fullWData(oldp+607971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18045),6528);
    bufp->fullWData(oldp+608175,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13841),6528);
    bufp->fullWData(oldp+608379,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19967),6528);
    bufp->fullWData(oldp+608583,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21889),6528);
    bufp->fullWData(oldp+608787,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37784),6528);
    bufp->fullWData(oldp+608991,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39732),6528);
    VL_CONCAT_WWI(6528,6496,32, __Vtemp_55, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41626, 
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
    bufp->fullWData(oldp+609195,(__Vtemp_55),6528);
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_56, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11432, 
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
    bufp->fullWData(oldp+609399,(__Vtemp_58),6496);
    bufp->fullWData(oldp+609602,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28853),6496);
    bufp->fullWData(oldp+609805,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30810),6496);
    bufp->fullWData(oldp+610008,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16118),6496);
    bufp->fullWData(oldp+610211,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18040),6496);
    bufp->fullWData(oldp+610414,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13834),6496);
    bufp->fullWData(oldp+610617,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19962),6496);
    bufp->fullWData(oldp+610820,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21884),6496);
    bufp->fullWData(oldp+611023,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37779),6496);
    bufp->fullWData(oldp+611226,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39727),6496);
    bufp->fullWData(oldp+611429,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41626),6496);
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_59, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11432, 
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
    bufp->fullWData(oldp+611632,(__Vtemp_60),6464);
    bufp->fullWData(oldp+611834,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28848),6464);
    bufp->fullWData(oldp+612036,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30805),6464);
    bufp->fullWData(oldp+612238,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16113),6464);
    bufp->fullWData(oldp+612440,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18035),6464);
    bufp->fullWData(oldp+612642,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13827),6464);
    bufp->fullWData(oldp+612844,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19957),6464);
    bufp->fullWData(oldp+613046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21879),6464);
    bufp->fullWData(oldp+613248,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37774),6464);
    bufp->fullWData(oldp+613450,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39722),6464);
    VL_CONCAT_WWI(6400,6368,32, __Vtemp_61, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41606, 
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
    bufp->fullWData(oldp+613652,(__Vtemp_63),6464);
    VL_CONCAT_WWI(6432,6400,32, __Vtemp_64, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11432, 
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
    bufp->fullWData(oldp+613854,(__Vtemp_64),6432);
    bufp->fullWData(oldp+614055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28843),6432);
    bufp->fullWData(oldp+614256,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30800),6432);
    bufp->fullWData(oldp+614457,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16108),6432);
    bufp->fullWData(oldp+614658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18030),6432);
    bufp->fullWData(oldp+614859,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13820),6432);
    bufp->fullWData(oldp+615060,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19952),6432);
    bufp->fullWData(oldp+615261,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21874),6432);
    bufp->fullWData(oldp+615462,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37769),6432);
    bufp->fullWData(oldp+615663,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39717),6432);
    VL_CONCAT_WWI(6400,6368,32, __Vtemp_65, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41606, 
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
    bufp->fullWData(oldp+615864,(__Vtemp_66),6432);
    bufp->fullWData(oldp+616065,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11432),6400);
    bufp->fullWData(oldp+616265,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28837),6400);
    bufp->fullWData(oldp+616465,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30795),6400);
    bufp->fullWData(oldp+616665,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16103),6400);
    bufp->fullWData(oldp+616865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18025),6400);
    bufp->fullWData(oldp+617065,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13813),6400);
    bufp->fullWData(oldp+617265,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19947),6400);
    bufp->fullWData(oldp+617465,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21869),6400);
    bufp->fullWData(oldp+617665,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37763),6400);
    bufp->fullWData(oldp+617865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39712),6400);
    VL_CONCAT_WWI(6400,6368,32, __Vtemp_67, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41606, 
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
    bufp->fullWData(oldp+618065,(__Vtemp_67),6400);
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_68, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11412, 
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
    bufp->fullWData(oldp+618265,(__Vtemp_70),6368);
    bufp->fullWData(oldp+618464,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28832),6368);
    bufp->fullWData(oldp+618663,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30790),6368);
    bufp->fullWData(oldp+618862,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16098),6368);
    bufp->fullWData(oldp+619061,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18020),6368);
    bufp->fullWData(oldp+619260,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13806),6368);
    bufp->fullWData(oldp+619459,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19942),6368);
    bufp->fullWData(oldp+619658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21864),6368);
    bufp->fullWData(oldp+619857,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37758),6368);
    bufp->fullWData(oldp+620056,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39707),6368);
    bufp->fullWData(oldp+620255,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41606),6368);
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_71, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11412, 
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
    bufp->fullWData(oldp+620454,(__Vtemp_72),6336);
    bufp->fullWData(oldp+620652,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28827),6336);
    bufp->fullWData(oldp+620850,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30785),6336);
    bufp->fullWData(oldp+621048,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16093),6336);
    bufp->fullWData(oldp+621246,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18015),6336);
    bufp->fullWData(oldp+621444,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13799),6336);
    bufp->fullWData(oldp+621642,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19937),6336);
    bufp->fullWData(oldp+621840,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21859),6336);
    bufp->fullWData(oldp+622038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37753),6336);
    bufp->fullWData(oldp+622236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39702),6336);
    VL_CONCAT_WWI(6272,6240,32, __Vtemp_73, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41586, 
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
    bufp->fullWData(oldp+622434,(__Vtemp_75),6336);
    VL_CONCAT_WWI(6304,6272,32, __Vtemp_76, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11412, 
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
    bufp->fullWData(oldp+622632,(__Vtemp_76),6304);
    bufp->fullWData(oldp+622829,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28822),6304);
    bufp->fullWData(oldp+623026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30780),6304);
    bufp->fullWData(oldp+623223,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16088),6304);
    bufp->fullWData(oldp+623420,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18010),6304);
    bufp->fullWData(oldp+623617,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13792),6304);
    bufp->fullWData(oldp+623814,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19932),6304);
    bufp->fullWData(oldp+624011,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21854),6304);
    bufp->fullWData(oldp+624208,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37748),6304);
    bufp->fullWData(oldp+624405,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39697),6304);
    VL_CONCAT_WWI(6272,6240,32, __Vtemp_77, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41586, 
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
    bufp->fullWData(oldp+624602,(__Vtemp_78),6304);
    bufp->fullWData(oldp+624799,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11412),6272);
    bufp->fullWData(oldp+624995,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28816),6272);
    bufp->fullWData(oldp+625191,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30775),6272);
    bufp->fullWData(oldp+625387,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16083),6272);
    bufp->fullWData(oldp+625583,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18005),6272);
    bufp->fullWData(oldp+625779,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13785),6272);
    bufp->fullWData(oldp+625975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19927),6272);
    bufp->fullWData(oldp+626171,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21849),6272);
    bufp->fullWData(oldp+626367,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37742),6272);
    bufp->fullWData(oldp+626563,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39692),6272);
    VL_CONCAT_WWI(6272,6240,32, __Vtemp_79, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41586, 
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
    bufp->fullWData(oldp+626759,(__Vtemp_79),6272);
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_80, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11391, 
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
    bufp->fullWData(oldp+626955,(__Vtemp_82),6240);
    bufp->fullWData(oldp+627150,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28811),6240);
    bufp->fullWData(oldp+627345,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30770),6240);
    bufp->fullWData(oldp+627540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16078),6240);
    bufp->fullWData(oldp+627735,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d18000),6240);
    bufp->fullWData(oldp+627930,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13778),6240);
    bufp->fullWData(oldp+628125,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19922),6240);
    bufp->fullWData(oldp+628320,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21844),6240);
    bufp->fullWData(oldp+628515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37737),6240);
    bufp->fullWData(oldp+628710,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39687),6240);
    bufp->fullWData(oldp+628905,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41586),6240);
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_83, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11391, 
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
    bufp->fullWData(oldp+629100,(__Vtemp_84),6208);
    bufp->fullWData(oldp+629294,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28806),6208);
    bufp->fullWData(oldp+629488,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30765),6208);
    bufp->fullWData(oldp+629682,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16073),6208);
    bufp->fullWData(oldp+629876,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17995),6208);
    bufp->fullWData(oldp+630070,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13771),6208);
    bufp->fullWData(oldp+630264,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19917),6208);
    bufp->fullWData(oldp+630458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21839),6208);
    bufp->fullWData(oldp+630652,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37732),6208);
    bufp->fullWData(oldp+630846,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39682),6208);
    VL_CONCAT_WWI(6144,6112,32, __Vtemp_85, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41565, 
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
    bufp->fullWData(oldp+631040,(__Vtemp_87),6208);
    VL_CONCAT_WWI(6176,6144,32, __Vtemp_88, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11391, 
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
    bufp->fullWData(oldp+631234,(__Vtemp_88),6176);
    bufp->fullWData(oldp+631427,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28801),6176);
    bufp->fullWData(oldp+631620,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30760),6176);
    bufp->fullWData(oldp+631813,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16068),6176);
    bufp->fullWData(oldp+632006,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17990),6176);
    bufp->fullWData(oldp+632199,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13764),6176);
    bufp->fullWData(oldp+632392,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19912),6176);
    bufp->fullWData(oldp+632585,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21834),6176);
    bufp->fullWData(oldp+632778,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37727),6176);
    bufp->fullWData(oldp+632971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39677),6176);
    VL_CONCAT_WWI(6144,6112,32, __Vtemp_89, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41565, 
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
    bufp->fullWData(oldp+633164,(__Vtemp_90),6176);
    bufp->fullWData(oldp+633357,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11391),6144);
    bufp->fullWData(oldp+633549,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28795),6144);
    bufp->fullWData(oldp+633741,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30755),6144);
    bufp->fullWData(oldp+633933,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16063),6144);
    bufp->fullWData(oldp+634125,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17985),6144);
    bufp->fullWData(oldp+634317,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13757),6144);
    bufp->fullWData(oldp+634509,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19907),6144);
    bufp->fullWData(oldp+634701,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21829),6144);
    bufp->fullWData(oldp+634893,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37721),6144);
    bufp->fullWData(oldp+635085,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39672),6144);
    VL_CONCAT_WWI(6144,6112,32, __Vtemp_91, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41565, 
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
    bufp->fullWData(oldp+635277,(__Vtemp_91),6144);
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_92, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11371, 
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
    bufp->fullWData(oldp+635469,(__Vtemp_94),6112);
    bufp->fullWData(oldp+635660,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28790),6112);
    bufp->fullWData(oldp+635851,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30750),6112);
    bufp->fullWData(oldp+636042,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16058),6112);
    bufp->fullWData(oldp+636233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17980),6112);
    bufp->fullWData(oldp+636424,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13750),6112);
    bufp->fullWData(oldp+636615,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19902),6112);
    bufp->fullWData(oldp+636806,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21824),6112);
    bufp->fullWData(oldp+636997,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37716),6112);
    bufp->fullWData(oldp+637188,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39667),6112);
    bufp->fullWData(oldp+637379,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41565),6112);
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_95, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11371, 
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
    bufp->fullWData(oldp+637570,(__Vtemp_96),6080);
    bufp->fullWData(oldp+637760,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28785),6080);
    bufp->fullWData(oldp+637950,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30745),6080);
    bufp->fullWData(oldp+638140,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16053),6080);
    bufp->fullWData(oldp+638330,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17975),6080);
    bufp->fullWData(oldp+638520,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13743),6080);
    bufp->fullWData(oldp+638710,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19897),6080);
    bufp->fullWData(oldp+638900,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21819),6080);
    bufp->fullWData(oldp+639090,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37711),6080);
    bufp->fullWData(oldp+639280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39662),6080);
    VL_CONCAT_WWI(6016,5984,32, __Vtemp_97, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41545, 
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
    bufp->fullWData(oldp+639470,(__Vtemp_99),6080);
    VL_CONCAT_WWI(6048,6016,32, __Vtemp_100, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11371, 
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
    bufp->fullWData(oldp+639660,(__Vtemp_100),6048);
    bufp->fullWData(oldp+639849,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28780),6048);
    bufp->fullWData(oldp+640038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30740),6048);
    bufp->fullWData(oldp+640227,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16048),6048);
    bufp->fullWData(oldp+640416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17970),6048);
    bufp->fullWData(oldp+640605,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13736),6048);
    bufp->fullWData(oldp+640794,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19892),6048);
    bufp->fullWData(oldp+640983,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21814),6048);
    bufp->fullWData(oldp+641172,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37706),6048);
    bufp->fullWData(oldp+641361,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39657),6048);
    VL_CONCAT_WWI(6016,5984,32, __Vtemp_101, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41545, 
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
    bufp->fullWData(oldp+641550,(__Vtemp_102),6048);
    bufp->fullWData(oldp+641739,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11371),6016);
    bufp->fullWData(oldp+641927,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28774),6016);
    bufp->fullWData(oldp+642115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30735),6016);
    bufp->fullWData(oldp+642303,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16043),6016);
    bufp->fullWData(oldp+642491,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17965),6016);
    bufp->fullWData(oldp+642679,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13729),6016);
    bufp->fullWData(oldp+642867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19887),6016);
    bufp->fullWData(oldp+643055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21809),6016);
    bufp->fullWData(oldp+643243,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37700),6016);
    bufp->fullWData(oldp+643431,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39652),6016);
    VL_CONCAT_WWI(6016,5984,32, __Vtemp_103, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41545, 
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
    bufp->fullWData(oldp+643619,(__Vtemp_103),6016);
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_104, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11350, 
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
    bufp->fullWData(oldp+643807,(__Vtemp_106),5984);
    bufp->fullWData(oldp+643994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28769),5984);
    bufp->fullWData(oldp+644181,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30730),5984);
    bufp->fullWData(oldp+644368,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16038),5984);
    bufp->fullWData(oldp+644555,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17960),5984);
    bufp->fullWData(oldp+644742,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13722),5984);
    bufp->fullWData(oldp+644929,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19882),5984);
    bufp->fullWData(oldp+645116,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21804),5984);
    bufp->fullWData(oldp+645303,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37695),5984);
    bufp->fullWData(oldp+645490,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39647),5984);
    bufp->fullWData(oldp+645677,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41545),5984);
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_107, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11350, 
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
    bufp->fullWData(oldp+645864,(__Vtemp_108),5952);
    bufp->fullWData(oldp+646050,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28764),5952);
    bufp->fullWData(oldp+646236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30725),5952);
    bufp->fullWData(oldp+646422,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16033),5952);
    bufp->fullWData(oldp+646608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17955),5952);
    bufp->fullWData(oldp+646794,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13715),5952);
    bufp->fullWData(oldp+646980,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19877),5952);
    bufp->fullWData(oldp+647166,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21799),5952);
    bufp->fullWData(oldp+647352,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37690),5952);
    bufp->fullWData(oldp+647538,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39642),5952);
    VL_CONCAT_WWI(5888,5856,32, __Vtemp_109, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41525, 
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
    bufp->fullWData(oldp+647724,(__Vtemp_111),5952);
    VL_CONCAT_WWI(5920,5888,32, __Vtemp_112, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11350, 
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
    bufp->fullWData(oldp+647910,(__Vtemp_112),5920);
    bufp->fullWData(oldp+648095,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28759),5920);
    bufp->fullWData(oldp+648280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30720),5920);
    bufp->fullWData(oldp+648465,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16028),5920);
    bufp->fullWData(oldp+648650,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17950),5920);
    bufp->fullWData(oldp+648835,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13708),5920);
    bufp->fullWData(oldp+649020,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19872),5920);
    bufp->fullWData(oldp+649205,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21794),5920);
    bufp->fullWData(oldp+649390,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37685),5920);
    bufp->fullWData(oldp+649575,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39637),5920);
    VL_CONCAT_WWI(5888,5856,32, __Vtemp_113, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41525, 
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
    bufp->fullWData(oldp+649760,(__Vtemp_114),5920);
    bufp->fullWData(oldp+649945,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11350),5888);
    bufp->fullWData(oldp+650129,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28753),5888);
    bufp->fullWData(oldp+650313,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30715),5888);
    bufp->fullWData(oldp+650497,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16023),5888);
    bufp->fullWData(oldp+650681,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17945),5888);
    bufp->fullWData(oldp+650865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13701),5888);
    bufp->fullWData(oldp+651049,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19867),5888);
    bufp->fullWData(oldp+651233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21789),5888);
    bufp->fullWData(oldp+651417,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37679),5888);
    bufp->fullWData(oldp+651601,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39632),5888);
    VL_CONCAT_WWI(5888,5856,32, __Vtemp_115, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41525, 
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
    bufp->fullWData(oldp+651785,(__Vtemp_115),5888);
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_116, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11330, 
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
    bufp->fullWData(oldp+651969,(__Vtemp_118),5856);
    bufp->fullWData(oldp+652152,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28748),5856);
    bufp->fullWData(oldp+652335,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30710),5856);
    bufp->fullWData(oldp+652518,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16018),5856);
    bufp->fullWData(oldp+652701,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17940),5856);
    bufp->fullWData(oldp+652884,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13694),5856);
    bufp->fullWData(oldp+653067,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19862),5856);
    bufp->fullWData(oldp+653250,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21784),5856);
    bufp->fullWData(oldp+653433,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37674),5856);
    bufp->fullWData(oldp+653616,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39627),5856);
    bufp->fullWData(oldp+653799,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41525),5856);
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_119, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11330, 
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
    bufp->fullWData(oldp+653982,(__Vtemp_120),5824);
    bufp->fullWData(oldp+654164,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28743),5824);
    bufp->fullWData(oldp+654346,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30705),5824);
    bufp->fullWData(oldp+654528,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16013),5824);
    bufp->fullWData(oldp+654710,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17935),5824);
    bufp->fullWData(oldp+654892,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13687),5824);
    bufp->fullWData(oldp+655074,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19857),5824);
    bufp->fullWData(oldp+655256,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21779),5824);
    bufp->fullWData(oldp+655438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37669),5824);
    bufp->fullWData(oldp+655620,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39622),5824);
    VL_CONCAT_WWI(5760,5728,32, __Vtemp_121, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41505, 
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
    bufp->fullWData(oldp+655802,(__Vtemp_123),5824);
    VL_CONCAT_WWI(5792,5760,32, __Vtemp_124, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11330, 
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
    bufp->fullWData(oldp+655984,(__Vtemp_124),5792);
    bufp->fullWData(oldp+656165,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28738),5792);
    bufp->fullWData(oldp+656346,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30700),5792);
    bufp->fullWData(oldp+656527,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16008),5792);
    bufp->fullWData(oldp+656708,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17930),5792);
    bufp->fullWData(oldp+656889,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13680),5792);
    bufp->fullWData(oldp+657070,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19852),5792);
    bufp->fullWData(oldp+657251,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21774),5792);
    bufp->fullWData(oldp+657432,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37664),5792);
    bufp->fullWData(oldp+657613,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39617),5792);
    VL_CONCAT_WWI(5760,5728,32, __Vtemp_125, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41505, 
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
    bufp->fullWData(oldp+657794,(__Vtemp_126),5792);
    bufp->fullWData(oldp+657975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11330),5760);
    bufp->fullWData(oldp+658155,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28732),5760);
    bufp->fullWData(oldp+658335,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30695),5760);
    bufp->fullWData(oldp+658515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d16003),5760);
    bufp->fullWData(oldp+658695,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17925),5760);
    bufp->fullWData(oldp+658875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13673),5760);
    bufp->fullWData(oldp+659055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19847),5760);
    bufp->fullWData(oldp+659235,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21769),5760);
    bufp->fullWData(oldp+659415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37658),5760);
    bufp->fullWData(oldp+659595,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39612),5760);
    VL_CONCAT_WWI(5760,5728,32, __Vtemp_127, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41505, 
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
    bufp->fullWData(oldp+659775,(__Vtemp_127),5760);
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_128, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11309, 
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
    bufp->fullWData(oldp+659955,(__Vtemp_130),5728);
    bufp->fullWData(oldp+660134,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28727),5728);
    bufp->fullWData(oldp+660313,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30690),5728);
    bufp->fullWData(oldp+660492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15998),5728);
    bufp->fullWData(oldp+660671,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17920),5728);
    bufp->fullWData(oldp+660850,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13666),5728);
    bufp->fullWData(oldp+661029,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19842),5728);
    bufp->fullWData(oldp+661208,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21764),5728);
    bufp->fullWData(oldp+661387,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37653),5728);
    bufp->fullWData(oldp+661566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39607),5728);
    bufp->fullWData(oldp+661745,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41505),5728);
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_131, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11309, 
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
    bufp->fullWData(oldp+661924,(__Vtemp_132),5696);
    bufp->fullWData(oldp+662102,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28722),5696);
    bufp->fullWData(oldp+662280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30685),5696);
    bufp->fullWData(oldp+662458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15993),5696);
    bufp->fullWData(oldp+662636,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17915),5696);
    bufp->fullWData(oldp+662814,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13659),5696);
    bufp->fullWData(oldp+662992,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19837),5696);
    bufp->fullWData(oldp+663170,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21759),5696);
    bufp->fullWData(oldp+663348,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37648),5696);
    bufp->fullWData(oldp+663526,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39602),5696);
    VL_CONCAT_WWI(5632,5600,32, __Vtemp_133, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41484, 
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
    bufp->fullWData(oldp+663704,(__Vtemp_135),5696);
    VL_CONCAT_WWI(5664,5632,32, __Vtemp_136, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11309, 
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
    bufp->fullWData(oldp+663882,(__Vtemp_136),5664);
    bufp->fullWData(oldp+664059,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28717),5664);
    bufp->fullWData(oldp+664236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30680),5664);
    bufp->fullWData(oldp+664413,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15988),5664);
    bufp->fullWData(oldp+664590,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17910),5664);
    bufp->fullWData(oldp+664767,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13652),5664);
    bufp->fullWData(oldp+664944,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19832),5664);
    bufp->fullWData(oldp+665121,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21754),5664);
    bufp->fullWData(oldp+665298,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37643),5664);
    bufp->fullWData(oldp+665475,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39597),5664);
    VL_CONCAT_WWI(5632,5600,32, __Vtemp_137, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41484, 
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
    bufp->fullWData(oldp+665652,(__Vtemp_138),5664);
    bufp->fullWData(oldp+665829,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11309),5632);
    bufp->fullWData(oldp+666005,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28711),5632);
    bufp->fullWData(oldp+666181,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30675),5632);
    bufp->fullWData(oldp+666357,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15983),5632);
    bufp->fullWData(oldp+666533,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17905),5632);
    bufp->fullWData(oldp+666709,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13645),5632);
    bufp->fullWData(oldp+666885,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19827),5632);
    bufp->fullWData(oldp+667061,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21749),5632);
    bufp->fullWData(oldp+667237,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37637),5632);
    bufp->fullWData(oldp+667413,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39592),5632);
    VL_CONCAT_WWI(5632,5600,32, __Vtemp_139, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41484, 
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
    bufp->fullWData(oldp+667589,(__Vtemp_139),5632);
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_140, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11289, 
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
    bufp->fullWData(oldp+667765,(__Vtemp_142),5600);
    bufp->fullWData(oldp+667940,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28706),5600);
    bufp->fullWData(oldp+668115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30670),5600);
    bufp->fullWData(oldp+668290,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15978),5600);
    bufp->fullWData(oldp+668465,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17900),5600);
    bufp->fullWData(oldp+668640,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13638),5600);
    bufp->fullWData(oldp+668815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19822),5600);
    bufp->fullWData(oldp+668990,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21744),5600);
    bufp->fullWData(oldp+669165,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37632),5600);
    bufp->fullWData(oldp+669340,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39587),5600);
    bufp->fullWData(oldp+669515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41484),5600);
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_143, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11289, 
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
    bufp->fullWData(oldp+669690,(__Vtemp_144),5568);
    bufp->fullWData(oldp+669864,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28701),5568);
    bufp->fullWData(oldp+670038,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30665),5568);
    bufp->fullWData(oldp+670212,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15973),5568);
    bufp->fullWData(oldp+670386,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17895),5568);
    bufp->fullWData(oldp+670560,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13631),5568);
    bufp->fullWData(oldp+670734,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19817),5568);
    bufp->fullWData(oldp+670908,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21739),5568);
    bufp->fullWData(oldp+671082,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37627),5568);
    bufp->fullWData(oldp+671256,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39582),5568);
    VL_CONCAT_WWI(5504,5472,32, __Vtemp_145, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41464, 
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
    bufp->fullWData(oldp+671430,(__Vtemp_147),5568);
    VL_CONCAT_WWI(5536,5504,32, __Vtemp_148, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11289, 
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
    bufp->fullWData(oldp+671604,(__Vtemp_148),5536);
    bufp->fullWData(oldp+671777,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28696),5536);
    bufp->fullWData(oldp+671950,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30660),5536);
    bufp->fullWData(oldp+672123,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15968),5536);
    bufp->fullWData(oldp+672296,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17890),5536);
    bufp->fullWData(oldp+672469,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13624),5536);
    bufp->fullWData(oldp+672642,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19812),5536);
    bufp->fullWData(oldp+672815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21734),5536);
    bufp->fullWData(oldp+672988,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37622),5536);
    bufp->fullWData(oldp+673161,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39577),5536);
    VL_CONCAT_WWI(5504,5472,32, __Vtemp_149, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41464, 
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
    bufp->fullWData(oldp+673334,(__Vtemp_150),5536);
    bufp->fullWData(oldp+673507,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11289),5504);
    bufp->fullWData(oldp+673679,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28690),5504);
    bufp->fullWData(oldp+673851,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30655),5504);
    bufp->fullWData(oldp+674023,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15963),5504);
    bufp->fullWData(oldp+674195,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17885),5504);
    bufp->fullWData(oldp+674367,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13617),5504);
    bufp->fullWData(oldp+674539,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19807),5504);
    bufp->fullWData(oldp+674711,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21729),5504);
    bufp->fullWData(oldp+674883,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37616),5504);
    bufp->fullWData(oldp+675055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39572),5504);
    VL_CONCAT_WWI(5504,5472,32, __Vtemp_151, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41464, 
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
    bufp->fullWData(oldp+675227,(__Vtemp_151),5504);
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_152, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11268, 
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
    bufp->fullWData(oldp+675399,(__Vtemp_154),5472);
    bufp->fullWData(oldp+675570,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28685),5472);
    bufp->fullWData(oldp+675741,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30650),5472);
    bufp->fullWData(oldp+675912,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15958),5472);
    bufp->fullWData(oldp+676083,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17880),5472);
    bufp->fullWData(oldp+676254,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13610),5472);
    bufp->fullWData(oldp+676425,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19802),5472);
    bufp->fullWData(oldp+676596,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21724),5472);
    bufp->fullWData(oldp+676767,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37611),5472);
    bufp->fullWData(oldp+676938,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39567),5472);
    bufp->fullWData(oldp+677109,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41464),5472);
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_155, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11268, 
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
    bufp->fullWData(oldp+677280,(__Vtemp_156),5440);
    bufp->fullWData(oldp+677450,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28680),5440);
    bufp->fullWData(oldp+677620,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30645),5440);
    bufp->fullWData(oldp+677790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15953),5440);
    bufp->fullWData(oldp+677960,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17875),5440);
    bufp->fullWData(oldp+678130,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13603),5440);
    bufp->fullWData(oldp+678300,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19797),5440);
    bufp->fullWData(oldp+678470,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21719),5440);
    bufp->fullWData(oldp+678640,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37606),5440);
    bufp->fullWData(oldp+678810,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39562),5440);
    VL_CONCAT_WWI(5376,5344,32, __Vtemp_157, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41444, 
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
    bufp->fullWData(oldp+678980,(__Vtemp_159),5440);
    VL_CONCAT_WWI(5408,5376,32, __Vtemp_160, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11268, 
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
    bufp->fullWData(oldp+679150,(__Vtemp_160),5408);
    bufp->fullWData(oldp+679319,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28675),5408);
    bufp->fullWData(oldp+679488,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30640),5408);
    bufp->fullWData(oldp+679657,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15948),5408);
    bufp->fullWData(oldp+679826,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17870),5408);
    bufp->fullWData(oldp+679995,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13596),5408);
    bufp->fullWData(oldp+680164,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19792),5408);
    bufp->fullWData(oldp+680333,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21714),5408);
    bufp->fullWData(oldp+680502,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37601),5408);
    bufp->fullWData(oldp+680671,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39557),5408);
    VL_CONCAT_WWI(5376,5344,32, __Vtemp_161, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41444, 
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
    bufp->fullWData(oldp+680840,(__Vtemp_162),5408);
    bufp->fullWData(oldp+681009,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11268),5376);
    bufp->fullWData(oldp+681177,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28669),5376);
    bufp->fullWData(oldp+681345,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30635),5376);
    bufp->fullWData(oldp+681513,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15943),5376);
    bufp->fullWData(oldp+681681,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17865),5376);
    bufp->fullWData(oldp+681849,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13589),5376);
    bufp->fullWData(oldp+682017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19787),5376);
    bufp->fullWData(oldp+682185,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21709),5376);
    bufp->fullWData(oldp+682353,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37595),5376);
    bufp->fullWData(oldp+682521,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39552),5376);
    VL_CONCAT_WWI(5376,5344,32, __Vtemp_163, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41444, 
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
    bufp->fullWData(oldp+682689,(__Vtemp_163),5376);
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_164, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11248, 
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
    bufp->fullWData(oldp+682857,(__Vtemp_166),5344);
    bufp->fullWData(oldp+683024,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28664),5344);
    bufp->fullWData(oldp+683191,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30630),5344);
    bufp->fullWData(oldp+683358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15938),5344);
    bufp->fullWData(oldp+683525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17860),5344);
    bufp->fullWData(oldp+683692,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13582),5344);
    bufp->fullWData(oldp+683859,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19782),5344);
    bufp->fullWData(oldp+684026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21704),5344);
    bufp->fullWData(oldp+684193,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37590),5344);
    bufp->fullWData(oldp+684360,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39547),5344);
    bufp->fullWData(oldp+684527,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41444),5344);
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_167, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11248, 
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
    bufp->fullWData(oldp+684694,(__Vtemp_168),5312);
    bufp->fullWData(oldp+684860,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28659),5312);
    bufp->fullWData(oldp+685026,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30625),5312);
    bufp->fullWData(oldp+685192,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15933),5312);
    bufp->fullWData(oldp+685358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17855),5312);
    bufp->fullWData(oldp+685524,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13575),5312);
    bufp->fullWData(oldp+685690,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19777),5312);
    bufp->fullWData(oldp+685856,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21699),5312);
    bufp->fullWData(oldp+686022,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37585),5312);
    bufp->fullWData(oldp+686188,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39542),5312);
    VL_CONCAT_WWI(5248,5216,32, __Vtemp_169, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41424, 
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
    bufp->fullWData(oldp+686354,(__Vtemp_171),5312);
    VL_CONCAT_WWI(5280,5248,32, __Vtemp_172, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11248, 
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
    bufp->fullWData(oldp+686520,(__Vtemp_172),5280);
    bufp->fullWData(oldp+686685,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28654),5280);
    bufp->fullWData(oldp+686850,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30620),5280);
    bufp->fullWData(oldp+687015,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15928),5280);
    bufp->fullWData(oldp+687180,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17850),5280);
    bufp->fullWData(oldp+687345,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13568),5280);
    bufp->fullWData(oldp+687510,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19772),5280);
    bufp->fullWData(oldp+687675,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21694),5280);
    bufp->fullWData(oldp+687840,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37580),5280);
    bufp->fullWData(oldp+688005,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39537),5280);
    VL_CONCAT_WWI(5248,5216,32, __Vtemp_173, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41424, 
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
    bufp->fullWData(oldp+688170,(__Vtemp_174),5280);
    bufp->fullWData(oldp+688335,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11248),5248);
    bufp->fullWData(oldp+688499,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28648),5248);
    bufp->fullWData(oldp+688663,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30615),5248);
    bufp->fullWData(oldp+688827,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15923),5248);
    bufp->fullWData(oldp+688991,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17845),5248);
    bufp->fullWData(oldp+689155,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13561),5248);
    bufp->fullWData(oldp+689319,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19767),5248);
    bufp->fullWData(oldp+689483,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21689),5248);
    bufp->fullWData(oldp+689647,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37574),5248);
    bufp->fullWData(oldp+689811,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39532),5248);
    VL_CONCAT_WWI(5248,5216,32, __Vtemp_175, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41424, 
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
    bufp->fullWData(oldp+689975,(__Vtemp_175),5248);
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_176, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11227, 
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
    bufp->fullWData(oldp+690139,(__Vtemp_178),5216);
    bufp->fullWData(oldp+690302,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28643),5216);
    bufp->fullWData(oldp+690465,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30610),5216);
    bufp->fullWData(oldp+690628,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15918),5216);
    bufp->fullWData(oldp+690791,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17840),5216);
    bufp->fullWData(oldp+690954,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13554),5216);
    bufp->fullWData(oldp+691117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19762),5216);
    bufp->fullWData(oldp+691280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21684),5216);
    bufp->fullWData(oldp+691443,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37569),5216);
    bufp->fullWData(oldp+691606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39527),5216);
    bufp->fullWData(oldp+691769,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41424),5216);
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_179, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11227, 
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
    bufp->fullWData(oldp+691932,(__Vtemp_180),5184);
    bufp->fullWData(oldp+692094,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28638),5184);
    bufp->fullWData(oldp+692256,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30605),5184);
    bufp->fullWData(oldp+692418,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15913),5184);
    bufp->fullWData(oldp+692580,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17835),5184);
    bufp->fullWData(oldp+692742,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13547),5184);
    bufp->fullWData(oldp+692904,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19757),5184);
    bufp->fullWData(oldp+693066,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21679),5184);
    bufp->fullWData(oldp+693228,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37564),5184);
    bufp->fullWData(oldp+693390,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39522),5184);
    VL_CONCAT_WWI(5120,5088,32, __Vtemp_181, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41403, 
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
    bufp->fullWData(oldp+693552,(__Vtemp_183),5184);
    VL_CONCAT_WWI(5152,5120,32, __Vtemp_184, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11227, 
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
    bufp->fullWData(oldp+693714,(__Vtemp_184),5152);
    bufp->fullWData(oldp+693875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28633),5152);
    bufp->fullWData(oldp+694036,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30600),5152);
    bufp->fullWData(oldp+694197,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15908),5152);
    bufp->fullWData(oldp+694358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17830),5152);
    bufp->fullWData(oldp+694519,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13540),5152);
    bufp->fullWData(oldp+694680,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19752),5152);
    bufp->fullWData(oldp+694841,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21674),5152);
    bufp->fullWData(oldp+695002,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37559),5152);
    bufp->fullWData(oldp+695163,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39517),5152);
    VL_CONCAT_WWI(5120,5088,32, __Vtemp_185, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41403, 
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
    bufp->fullWData(oldp+695324,(__Vtemp_186),5152);
    bufp->fullWData(oldp+695485,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11227),5120);
    bufp->fullWData(oldp+695645,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28627),5120);
    bufp->fullWData(oldp+695805,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30595),5120);
    bufp->fullWData(oldp+695965,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15903),5120);
    bufp->fullWData(oldp+696125,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17825),5120);
    bufp->fullWData(oldp+696285,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13533),5120);
    bufp->fullWData(oldp+696445,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19747),5120);
    bufp->fullWData(oldp+696605,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21669),5120);
    bufp->fullWData(oldp+696765,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37553),5120);
    bufp->fullWData(oldp+696925,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39512),5120);
    VL_CONCAT_WWI(5120,5088,32, __Vtemp_187, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41403, 
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
    bufp->fullWData(oldp+697085,(__Vtemp_187),5120);
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_188, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11207, 
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
    bufp->fullWData(oldp+697245,(__Vtemp_190),5088);
    bufp->fullWData(oldp+697404,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28622),5088);
    bufp->fullWData(oldp+697563,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30590),5088);
    bufp->fullWData(oldp+697722,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15898),5088);
    bufp->fullWData(oldp+697881,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17820),5088);
    bufp->fullWData(oldp+698040,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13526),5088);
    bufp->fullWData(oldp+698199,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19742),5088);
    bufp->fullWData(oldp+698358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21664),5088);
    bufp->fullWData(oldp+698517,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37548),5088);
    bufp->fullWData(oldp+698676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39507),5088);
    bufp->fullWData(oldp+698835,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41403),5088);
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_191, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11207, 
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
    bufp->fullWData(oldp+698994,(__Vtemp_192),5056);
    bufp->fullWData(oldp+699152,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28617),5056);
    bufp->fullWData(oldp+699310,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30585),5056);
    bufp->fullWData(oldp+699468,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15893),5056);
    bufp->fullWData(oldp+699626,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17815),5056);
    bufp->fullWData(oldp+699784,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13519),5056);
    bufp->fullWData(oldp+699942,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19737),5056);
    bufp->fullWData(oldp+700100,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21659),5056);
    bufp->fullWData(oldp+700258,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37543),5056);
    bufp->fullWData(oldp+700416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39502),5056);
    VL_CONCAT_WWI(4992,4960,32, __Vtemp_193, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41383, 
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
    bufp->fullWData(oldp+700574,(__Vtemp_195),5056);
    VL_CONCAT_WWI(5024,4992,32, __Vtemp_196, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11207, 
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
    bufp->fullWData(oldp+700732,(__Vtemp_196),5024);
    bufp->fullWData(oldp+700889,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28612),5024);
    bufp->fullWData(oldp+701046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30580),5024);
    bufp->fullWData(oldp+701203,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15888),5024);
    bufp->fullWData(oldp+701360,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17810),5024);
    bufp->fullWData(oldp+701517,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13512),5024);
    bufp->fullWData(oldp+701674,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19732),5024);
    bufp->fullWData(oldp+701831,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21654),5024);
    bufp->fullWData(oldp+701988,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37538),5024);
    bufp->fullWData(oldp+702145,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39497),5024);
    VL_CONCAT_WWI(4992,4960,32, __Vtemp_197, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41383, 
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
    bufp->fullWData(oldp+702302,(__Vtemp_198),5024);
    bufp->fullWData(oldp+702459,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11207),4992);
    bufp->fullWData(oldp+702615,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28606),4992);
    bufp->fullWData(oldp+702771,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30575),4992);
    bufp->fullWData(oldp+702927,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15883),4992);
    bufp->fullWData(oldp+703083,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17805),4992);
    bufp->fullWData(oldp+703239,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13505),4992);
    bufp->fullWData(oldp+703395,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19727),4992);
    bufp->fullWData(oldp+703551,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21649),4992);
    bufp->fullWData(oldp+703707,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37532),4992);
    bufp->fullWData(oldp+703863,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39492),4992);
    VL_CONCAT_WWI(4992,4960,32, __Vtemp_199, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41383, 
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
    bufp->fullWData(oldp+704019,(__Vtemp_199),4992);
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_200, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11186, 
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
    bufp->fullWData(oldp+704175,(__Vtemp_202),4960);
    bufp->fullWData(oldp+704330,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28601),4960);
    bufp->fullWData(oldp+704485,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30570),4960);
    bufp->fullWData(oldp+704640,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15878),4960);
    bufp->fullWData(oldp+704795,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17800),4960);
    bufp->fullWData(oldp+704950,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13498),4960);
    bufp->fullWData(oldp+705105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19722),4960);
    bufp->fullWData(oldp+705260,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21644),4960);
    bufp->fullWData(oldp+705415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37527),4960);
    bufp->fullWData(oldp+705570,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39487),4960);
    bufp->fullWData(oldp+705725,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41383),4960);
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_203, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11186, 
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
    bufp->fullWData(oldp+705880,(__Vtemp_204),4928);
    bufp->fullWData(oldp+706034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28596),4928);
    bufp->fullWData(oldp+706188,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30565),4928);
    bufp->fullWData(oldp+706342,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15873),4928);
    bufp->fullWData(oldp+706496,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17795),4928);
    bufp->fullWData(oldp+706650,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13491),4928);
    bufp->fullWData(oldp+706804,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19717),4928);
    bufp->fullWData(oldp+706958,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21639),4928);
    bufp->fullWData(oldp+707112,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37522),4928);
    bufp->fullWData(oldp+707266,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39482),4928);
    VL_CONCAT_WWI(4864,4832,32, __Vtemp_205, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363, 
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
    bufp->fullWData(oldp+707420,(__Vtemp_207),4928);
    VL_CONCAT_WWI(4896,4864,32, __Vtemp_208, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11186, 
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
    bufp->fullWData(oldp+707574,(__Vtemp_208),4896);
    bufp->fullWData(oldp+707727,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28591),4896);
    bufp->fullWData(oldp+707880,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30560),4896);
    bufp->fullWData(oldp+708033,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15868),4896);
    bufp->fullWData(oldp+708186,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17790),4896);
    bufp->fullWData(oldp+708339,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13484),4896);
    bufp->fullWData(oldp+708492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19712),4896);
    bufp->fullWData(oldp+708645,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21634),4896);
    bufp->fullWData(oldp+708798,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37517),4896);
    bufp->fullWData(oldp+708951,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39477),4896);
    VL_CONCAT_WWI(4864,4832,32, __Vtemp_209, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363, 
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
    bufp->fullWData(oldp+709104,(__Vtemp_210),4896);
    bufp->fullWData(oldp+709257,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11186),4864);
    bufp->fullWData(oldp+709409,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28585),4864);
    bufp->fullWData(oldp+709561,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30555),4864);
    bufp->fullWData(oldp+709713,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15863),4864);
    bufp->fullWData(oldp+709865,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17785),4864);
    bufp->fullWData(oldp+710017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13477),4864);
    bufp->fullWData(oldp+710169,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19707),4864);
    bufp->fullWData(oldp+710321,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21629),4864);
    bufp->fullWData(oldp+710473,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37511),4864);
    bufp->fullWData(oldp+710625,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39472),4864);
    VL_CONCAT_WWI(4864,4832,32, __Vtemp_211, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363, 
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
    bufp->fullWData(oldp+710777,(__Vtemp_211),4864);
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_212, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11166, 
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
    bufp->fullWData(oldp+710929,(__Vtemp_214),4832);
    bufp->fullWData(oldp+711080,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28580),4832);
    bufp->fullWData(oldp+711231,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30550),4832);
    bufp->fullWData(oldp+711382,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15858),4832);
    bufp->fullWData(oldp+711533,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17780),4832);
    bufp->fullWData(oldp+711684,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13470),4832);
    bufp->fullWData(oldp+711835,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19702),4832);
    bufp->fullWData(oldp+711986,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21624),4832);
    bufp->fullWData(oldp+712137,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37506),4832);
    bufp->fullWData(oldp+712288,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39467),4832);
    bufp->fullWData(oldp+712439,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41363),4832);
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_215, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11166, 
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
    bufp->fullWData(oldp+712590,(__Vtemp_216),4800);
    bufp->fullWData(oldp+712740,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28575),4800);
    bufp->fullWData(oldp+712890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30545),4800);
    bufp->fullWData(oldp+713040,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15853),4800);
    bufp->fullWData(oldp+713190,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17775),4800);
    bufp->fullWData(oldp+713340,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13463),4800);
    bufp->fullWData(oldp+713490,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19697),4800);
    bufp->fullWData(oldp+713640,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21619),4800);
    bufp->fullWData(oldp+713790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37501),4800);
    bufp->fullWData(oldp+713940,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39462),4800);
    VL_CONCAT_WWI(4736,4704,32, __Vtemp_217, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343, 
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
    bufp->fullWData(oldp+714090,(__Vtemp_219),4800);
    VL_CONCAT_WWI(4768,4736,32, __Vtemp_220, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11166, 
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
    bufp->fullWData(oldp+714240,(__Vtemp_220),4768);
    bufp->fullWData(oldp+714389,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28570),4768);
    bufp->fullWData(oldp+714538,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30540),4768);
    bufp->fullWData(oldp+714687,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15848),4768);
    bufp->fullWData(oldp+714836,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17770),4768);
    bufp->fullWData(oldp+714985,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13456),4768);
    bufp->fullWData(oldp+715134,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19692),4768);
    bufp->fullWData(oldp+715283,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21614),4768);
    bufp->fullWData(oldp+715432,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37496),4768);
    bufp->fullWData(oldp+715581,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39457),4768);
    VL_CONCAT_WWI(4736,4704,32, __Vtemp_221, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343, 
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
    bufp->fullWData(oldp+715730,(__Vtemp_222),4768);
    bufp->fullWData(oldp+715879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11166),4736);
    bufp->fullWData(oldp+716027,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28564),4736);
    bufp->fullWData(oldp+716175,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30535),4736);
    bufp->fullWData(oldp+716323,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15843),4736);
    bufp->fullWData(oldp+716471,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17765),4736);
    bufp->fullWData(oldp+716619,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13449),4736);
    bufp->fullWData(oldp+716767,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19687),4736);
    bufp->fullWData(oldp+716915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21609),4736);
    bufp->fullWData(oldp+717063,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37490),4736);
    bufp->fullWData(oldp+717211,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39452),4736);
    VL_CONCAT_WWI(4736,4704,32, __Vtemp_223, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343, 
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
    bufp->fullWData(oldp+717359,(__Vtemp_223),4736);
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_224, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11145, 
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
    bufp->fullWData(oldp+717507,(__Vtemp_226),4704);
    bufp->fullWData(oldp+717654,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28559),4704);
    bufp->fullWData(oldp+717801,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30530),4704);
    bufp->fullWData(oldp+717948,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15838),4704);
    bufp->fullWData(oldp+718095,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17760),4704);
    bufp->fullWData(oldp+718242,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13442),4704);
    bufp->fullWData(oldp+718389,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19682),4704);
    bufp->fullWData(oldp+718536,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21604),4704);
    bufp->fullWData(oldp+718683,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37485),4704);
    bufp->fullWData(oldp+718830,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39447),4704);
    bufp->fullWData(oldp+718977,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41343),4704);
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_227, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11145, 
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
    bufp->fullWData(oldp+719124,(__Vtemp_228),4672);
    bufp->fullWData(oldp+719270,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28554),4672);
    bufp->fullWData(oldp+719416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30525),4672);
    bufp->fullWData(oldp+719562,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15833),4672);
    bufp->fullWData(oldp+719708,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17755),4672);
    bufp->fullWData(oldp+719854,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13435),4672);
    bufp->fullWData(oldp+720000,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19677),4672);
    bufp->fullWData(oldp+720146,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21599),4672);
    bufp->fullWData(oldp+720292,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37480),4672);
    bufp->fullWData(oldp+720438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39442),4672);
    VL_CONCAT_WWI(4608,4576,32, __Vtemp_229, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322, 
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
    bufp->fullWData(oldp+720584,(__Vtemp_231),4672);
    VL_CONCAT_WWI(4640,4608,32, __Vtemp_232, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11145, 
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
    bufp->fullWData(oldp+720730,(__Vtemp_232),4640);
    bufp->fullWData(oldp+720875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28549),4640);
    bufp->fullWData(oldp+721020,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30520),4640);
    bufp->fullWData(oldp+721165,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15828),4640);
    bufp->fullWData(oldp+721310,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17750),4640);
    bufp->fullWData(oldp+721455,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13428),4640);
    bufp->fullWData(oldp+721600,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19672),4640);
    bufp->fullWData(oldp+721745,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21594),4640);
    bufp->fullWData(oldp+721890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37475),4640);
    bufp->fullWData(oldp+722035,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39437),4640);
    VL_CONCAT_WWI(4608,4576,32, __Vtemp_233, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322, 
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
    bufp->fullWData(oldp+722180,(__Vtemp_234),4640);
    bufp->fullWData(oldp+722325,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11145),4608);
    bufp->fullWData(oldp+722469,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28543),4608);
    bufp->fullWData(oldp+722613,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30515),4608);
    bufp->fullWData(oldp+722757,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15823),4608);
    bufp->fullWData(oldp+722901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17745),4608);
    bufp->fullWData(oldp+723045,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13421),4608);
    bufp->fullWData(oldp+723189,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19667),4608);
    bufp->fullWData(oldp+723333,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21589),4608);
    bufp->fullWData(oldp+723477,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37469),4608);
    bufp->fullWData(oldp+723621,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39432),4608);
    VL_CONCAT_WWI(4608,4576,32, __Vtemp_235, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322, 
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
    bufp->fullWData(oldp+723765,(__Vtemp_235),4608);
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_236, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11125, 
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
    bufp->fullWData(oldp+723909,(__Vtemp_238),4576);
    bufp->fullWData(oldp+724052,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28538),4576);
    bufp->fullWData(oldp+724195,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30510),4576);
    bufp->fullWData(oldp+724338,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15818),4576);
    bufp->fullWData(oldp+724481,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17740),4576);
    bufp->fullWData(oldp+724624,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13414),4576);
    bufp->fullWData(oldp+724767,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19662),4576);
    bufp->fullWData(oldp+724910,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21584),4576);
    bufp->fullWData(oldp+725053,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37464),4576);
    bufp->fullWData(oldp+725196,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39427),4576);
    bufp->fullWData(oldp+725339,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41322),4576);
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_239, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11125, 
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
    bufp->fullWData(oldp+725482,(__Vtemp_240),4544);
    bufp->fullWData(oldp+725624,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28533),4544);
    bufp->fullWData(oldp+725766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30505),4544);
    bufp->fullWData(oldp+725908,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15813),4544);
    bufp->fullWData(oldp+726050,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17735),4544);
    bufp->fullWData(oldp+726192,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13407),4544);
    bufp->fullWData(oldp+726334,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19657),4544);
    bufp->fullWData(oldp+726476,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21579),4544);
    bufp->fullWData(oldp+726618,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37459),4544);
    bufp->fullWData(oldp+726760,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39422),4544);
    VL_CONCAT_WWI(4480,4448,32, __Vtemp_241, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41302, 
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
    bufp->fullWData(oldp+726902,(__Vtemp_243),4544);
    VL_CONCAT_WWI(4512,4480,32, __Vtemp_244, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11125, 
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
    bufp->fullWData(oldp+727044,(__Vtemp_244),4512);
    bufp->fullWData(oldp+727185,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28528),4512);
    bufp->fullWData(oldp+727326,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30500),4512);
    bufp->fullWData(oldp+727467,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15808),4512);
    bufp->fullWData(oldp+727608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17730),4512);
    bufp->fullWData(oldp+727749,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13400),4512);
    bufp->fullWData(oldp+727890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19652),4512);
    bufp->fullWData(oldp+728031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21574),4512);
    bufp->fullWData(oldp+728172,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37454),4512);
    bufp->fullWData(oldp+728313,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39417),4512);
    VL_CONCAT_WWI(4480,4448,32, __Vtemp_245, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41302, 
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
    bufp->fullWData(oldp+728454,(__Vtemp_246),4512);
    bufp->fullWData(oldp+728595,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11125),4480);
    bufp->fullWData(oldp+728735,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28522),4480);
    bufp->fullWData(oldp+728875,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30495),4480);
    bufp->fullWData(oldp+729015,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15803),4480);
    bufp->fullWData(oldp+729155,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17725),4480);
    bufp->fullWData(oldp+729295,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13393),4480);
    bufp->fullWData(oldp+729435,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19647),4480);
    bufp->fullWData(oldp+729575,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21569),4480);
    bufp->fullWData(oldp+729715,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37448),4480);
    bufp->fullWData(oldp+729855,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39412),4480);
    VL_CONCAT_WWI(4480,4448,32, __Vtemp_247, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41302, 
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
    bufp->fullWData(oldp+729995,(__Vtemp_247),4480);
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_248, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11104, 
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
    bufp->fullWData(oldp+730135,(__Vtemp_250),4448);
    bufp->fullWData(oldp+730274,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28517),4448);
    bufp->fullWData(oldp+730413,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30490),4448);
    bufp->fullWData(oldp+730552,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15798),4448);
    bufp->fullWData(oldp+730691,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17720),4448);
    bufp->fullWData(oldp+730830,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13386),4448);
    bufp->fullWData(oldp+730969,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19642),4448);
    bufp->fullWData(oldp+731108,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21564),4448);
    bufp->fullWData(oldp+731247,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37443),4448);
    bufp->fullWData(oldp+731386,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39407),4448);
    bufp->fullWData(oldp+731525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41302),4448);
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_251, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11104, 
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
    bufp->fullWData(oldp+731664,(__Vtemp_252),4416);
    bufp->fullWData(oldp+731802,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28512),4416);
    bufp->fullWData(oldp+731940,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30485),4416);
    bufp->fullWData(oldp+732078,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15793),4416);
    bufp->fullWData(oldp+732216,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17715),4416);
    bufp->fullWData(oldp+732354,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13379),4416);
    bufp->fullWData(oldp+732492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19637),4416);
    bufp->fullWData(oldp+732630,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21559),4416);
    bufp->fullWData(oldp+732768,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37438),4416);
    bufp->fullWData(oldp+732906,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39402),4416);
    VL_CONCAT_WWI(4352,4320,32, __Vtemp_253, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41282, 
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
    bufp->fullWData(oldp+733044,(__Vtemp_255),4416);
    VL_CONCAT_WWI(4384,4352,32, __Vtemp_256, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11104, 
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
    bufp->fullWData(oldp+733182,(__Vtemp_256),4384);
    bufp->fullWData(oldp+733319,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28507),4384);
    bufp->fullWData(oldp+733456,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30480),4384);
    bufp->fullWData(oldp+733593,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15788),4384);
    bufp->fullWData(oldp+733730,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17710),4384);
    bufp->fullWData(oldp+733867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13372),4384);
    bufp->fullWData(oldp+734004,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19632),4384);
    bufp->fullWData(oldp+734141,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21554),4384);
    bufp->fullWData(oldp+734278,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37433),4384);
    bufp->fullWData(oldp+734415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39397),4384);
    VL_CONCAT_WWI(4352,4320,32, __Vtemp_257, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41282, 
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
    bufp->fullWData(oldp+734552,(__Vtemp_258),4384);
    bufp->fullWData(oldp+734689,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11104),4352);
    bufp->fullWData(oldp+734825,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28501),4352);
    bufp->fullWData(oldp+734961,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30475),4352);
    bufp->fullWData(oldp+735097,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15783),4352);
    bufp->fullWData(oldp+735233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17705),4352);
    bufp->fullWData(oldp+735369,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13365),4352);
    bufp->fullWData(oldp+735505,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19627),4352);
    bufp->fullWData(oldp+735641,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21549),4352);
    bufp->fullWData(oldp+735777,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37427),4352);
    bufp->fullWData(oldp+735913,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39392),4352);
    VL_CONCAT_WWI(4352,4320,32, __Vtemp_259, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41282, 
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
    bufp->fullWData(oldp+736049,(__Vtemp_259),4352);
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_260, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084, 
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
    bufp->fullWData(oldp+736185,(__Vtemp_262),4320);
    bufp->fullWData(oldp+736320,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28496),4320);
    bufp->fullWData(oldp+736455,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30470),4320);
    bufp->fullWData(oldp+736590,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15778),4320);
    bufp->fullWData(oldp+736725,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17700),4320);
    bufp->fullWData(oldp+736860,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13358),4320);
    bufp->fullWData(oldp+736995,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19622),4320);
    bufp->fullWData(oldp+737130,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21544),4320);
    bufp->fullWData(oldp+737265,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37422),4320);
    bufp->fullWData(oldp+737400,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39387),4320);
    bufp->fullWData(oldp+737535,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41282),4320);
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_263, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084, 
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
    bufp->fullWData(oldp+737670,(__Vtemp_264),4288);
    bufp->fullWData(oldp+737804,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28491),4288);
    bufp->fullWData(oldp+737938,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30465),4288);
    bufp->fullWData(oldp+738072,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15773),4288);
    bufp->fullWData(oldp+738206,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17695),4288);
    bufp->fullWData(oldp+738340,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13351),4288);
    bufp->fullWData(oldp+738474,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19617),4288);
    bufp->fullWData(oldp+738608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21539),4288);
    bufp->fullWData(oldp+738742,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37417),4288);
    bufp->fullWData(oldp+738876,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39382),4288);
    VL_CONCAT_WWI(4224,4192,32, __Vtemp_265, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41262, 
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
    bufp->fullWData(oldp+739010,(__Vtemp_267),4288);
    VL_CONCAT_WWI(4256,4224,32, __Vtemp_268, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084, 
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
    bufp->fullWData(oldp+739144,(__Vtemp_268),4256);
    bufp->fullWData(oldp+739277,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28486),4256);
    bufp->fullWData(oldp+739410,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30460),4256);
    bufp->fullWData(oldp+739543,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15768),4256);
    bufp->fullWData(oldp+739676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17690),4256);
    bufp->fullWData(oldp+739809,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13344),4256);
    bufp->fullWData(oldp+739942,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19612),4256);
    bufp->fullWData(oldp+740075,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21534),4256);
    bufp->fullWData(oldp+740208,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37412),4256);
    bufp->fullWData(oldp+740341,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39377),4256);
    VL_CONCAT_WWI(4224,4192,32, __Vtemp_269, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41262, 
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
    bufp->fullWData(oldp+740474,(__Vtemp_270),4256);
    bufp->fullWData(oldp+740607,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11084),4224);
    bufp->fullWData(oldp+740739,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28480),4224);
    bufp->fullWData(oldp+740871,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30455),4224);
    bufp->fullWData(oldp+741003,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15763),4224);
    bufp->fullWData(oldp+741135,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17685),4224);
    bufp->fullWData(oldp+741267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13337),4224);
    bufp->fullWData(oldp+741399,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19607),4224);
    bufp->fullWData(oldp+741531,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21529),4224);
    bufp->fullWData(oldp+741663,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37406),4224);
    bufp->fullWData(oldp+741795,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39372),4224);
    VL_CONCAT_WWI(4224,4192,32, __Vtemp_271, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41262, 
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
    bufp->fullWData(oldp+741927,(__Vtemp_271),4224);
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_272, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063, 
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
    bufp->fullWData(oldp+742059,(__Vtemp_274),4192);
    bufp->fullWData(oldp+742190,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28475),4192);
    bufp->fullWData(oldp+742321,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30450),4192);
    bufp->fullWData(oldp+742452,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15758),4192);
    bufp->fullWData(oldp+742583,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17680),4192);
    bufp->fullWData(oldp+742714,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13330),4192);
    bufp->fullWData(oldp+742845,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19602),4192);
    bufp->fullWData(oldp+742976,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21524),4192);
    bufp->fullWData(oldp+743107,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37401),4192);
    bufp->fullWData(oldp+743238,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39367),4192);
    bufp->fullWData(oldp+743369,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41262),4192);
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_275, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063, 
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
    bufp->fullWData(oldp+743500,(__Vtemp_276),4160);
    bufp->fullWData(oldp+743630,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28470),4160);
    bufp->fullWData(oldp+743760,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30445),4160);
    bufp->fullWData(oldp+743890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15753),4160);
    bufp->fullWData(oldp+744020,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17675),4160);
    bufp->fullWData(oldp+744150,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13323),4160);
    bufp->fullWData(oldp+744280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19597),4160);
    bufp->fullWData(oldp+744410,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21519),4160);
    bufp->fullWData(oldp+744540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37396),4160);
    bufp->fullWData(oldp+744670,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39362),4160);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_277, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41241, 
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
    bufp->fullWData(oldp+744800,(__Vtemp_279),4160);
    VL_CONCAT_WWI(4128,4096,32, __Vtemp_280, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063, 
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
    bufp->fullWData(oldp+744930,(__Vtemp_280),4128);
    bufp->fullWData(oldp+745059,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28465),4128);
    bufp->fullWData(oldp+745188,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30440),4128);
    bufp->fullWData(oldp+745317,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15748),4128);
    bufp->fullWData(oldp+745446,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17670),4128);
    bufp->fullWData(oldp+745575,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13316),4128);
    bufp->fullWData(oldp+745704,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19592),4128);
    bufp->fullWData(oldp+745833,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21514),4128);
    bufp->fullWData(oldp+745962,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37391),4128);
    bufp->fullWData(oldp+746091,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39357),4128);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_281, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41241, 
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
    bufp->fullWData(oldp+746220,(__Vtemp_282),4128);
    bufp->fullWData(oldp+746349,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11063),4096);
    bufp->fullWData(oldp+746477,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28459),4096);
    bufp->fullWData(oldp+746605,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30435),4096);
    bufp->fullWData(oldp+746733,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15743),4096);
    bufp->fullWData(oldp+746861,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17665),4096);
    bufp->fullWData(oldp+746989,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13309),4096);
    bufp->fullWData(oldp+747117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19587),4096);
    bufp->fullWData(oldp+747245,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21509),4096);
    bufp->fullWData(oldp+747373,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37385),4096);
    bufp->fullWData(oldp+747501,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39352),4096);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_283, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41241, 
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
    bufp->fullWData(oldp+747629,(__Vtemp_283),4096);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_284, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043, 
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
    bufp->fullWData(oldp+747757,(__Vtemp_286),4064);
    bufp->fullWData(oldp+747884,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28454),4064);
    bufp->fullWData(oldp+748011,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30430),4064);
    bufp->fullWData(oldp+748138,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15738),4064);
    bufp->fullWData(oldp+748265,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17660),4064);
    bufp->fullWData(oldp+748392,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13302),4064);
    bufp->fullWData(oldp+748519,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19582),4064);
    bufp->fullWData(oldp+748646,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21504),4064);
    bufp->fullWData(oldp+748773,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37380),4064);
    bufp->fullWData(oldp+748900,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39347),4064);
    bufp->fullWData(oldp+749027,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41241),4064);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_287, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043, 
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
    bufp->fullWData(oldp+749154,(__Vtemp_288),4032);
    bufp->fullWData(oldp+749280,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28449),4032);
    bufp->fullWData(oldp+749406,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30425),4032);
    bufp->fullWData(oldp+749532,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15733),4032);
    bufp->fullWData(oldp+749658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17655),4032);
    bufp->fullWData(oldp+749784,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13295),4032);
    bufp->fullWData(oldp+749910,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19577),4032);
    bufp->fullWData(oldp+750036,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21499),4032);
    bufp->fullWData(oldp+750162,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37375),4032);
    bufp->fullWData(oldp+750288,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39342),4032);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_289, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41221, 
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
    bufp->fullWData(oldp+750414,(__Vtemp_291),4032);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_292, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043, 
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
    bufp->fullWData(oldp+750540,(__Vtemp_292),4000);
    bufp->fullWData(oldp+750665,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28444),4000);
    bufp->fullWData(oldp+750790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30420),4000);
    bufp->fullWData(oldp+750915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15728),4000);
    bufp->fullWData(oldp+751040,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17650),4000);
    bufp->fullWData(oldp+751165,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13288),4000);
    bufp->fullWData(oldp+751290,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19572),4000);
    bufp->fullWData(oldp+751415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21494),4000);
    bufp->fullWData(oldp+751540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37370),4000);
    bufp->fullWData(oldp+751665,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39337),4000);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_293, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41221, 
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
    bufp->fullWData(oldp+751790,(__Vtemp_294),4000);
    bufp->fullWData(oldp+751915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11043),3968);
    bufp->fullWData(oldp+752039,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28438),3968);
    bufp->fullWData(oldp+752163,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30415),3968);
    bufp->fullWData(oldp+752287,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15723),3968);
    bufp->fullWData(oldp+752411,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17645),3968);
    bufp->fullWData(oldp+752535,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13281),3968);
    bufp->fullWData(oldp+752659,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19567),3968);
    bufp->fullWData(oldp+752783,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21489),3968);
    bufp->fullWData(oldp+752907,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37364),3968);
    bufp->fullWData(oldp+753031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39332),3968);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_295, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41221, 
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
    bufp->fullWData(oldp+753155,(__Vtemp_295),3968);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_296, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11022, 
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
    bufp->fullWData(oldp+753279,(__Vtemp_298),3936);
    bufp->fullWData(oldp+753402,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28433),3936);
    bufp->fullWData(oldp+753525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30410),3936);
    bufp->fullWData(oldp+753648,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15718),3936);
    bufp->fullWData(oldp+753771,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17640),3936);
    bufp->fullWData(oldp+753894,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13274),3936);
    bufp->fullWData(oldp+754017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19562),3936);
    bufp->fullWData(oldp+754140,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21484),3936);
    bufp->fullWData(oldp+754263,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37359),3936);
    bufp->fullWData(oldp+754386,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39327),3936);
    bufp->fullWData(oldp+754509,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41221),3936);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_299, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11022, 
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
    bufp->fullWData(oldp+754632,(__Vtemp_300),3904);
    bufp->fullWData(oldp+754754,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28428),3904);
    bufp->fullWData(oldp+754876,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30405),3904);
    bufp->fullWData(oldp+754998,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15713),3904);
    bufp->fullWData(oldp+755120,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17635),3904);
    bufp->fullWData(oldp+755242,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13267),3904);
    bufp->fullWData(oldp+755364,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19557),3904);
    bufp->fullWData(oldp+755486,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21479),3904);
    bufp->fullWData(oldp+755608,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37354),3904);
    bufp->fullWData(oldp+755730,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39322),3904);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_301, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41201, 
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
    bufp->fullWData(oldp+755852,(__Vtemp_303),3904);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_304, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11022, 
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
    bufp->fullWData(oldp+755974,(__Vtemp_304),3872);
    bufp->fullWData(oldp+756095,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28423),3872);
    bufp->fullWData(oldp+756216,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30400),3872);
    bufp->fullWData(oldp+756337,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15708),3872);
    bufp->fullWData(oldp+756458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17630),3872);
    bufp->fullWData(oldp+756579,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13260),3872);
    bufp->fullWData(oldp+756700,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19552),3872);
    bufp->fullWData(oldp+756821,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21474),3872);
    bufp->fullWData(oldp+756942,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37349),3872);
    bufp->fullWData(oldp+757063,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39317),3872);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_305, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41201, 
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
    bufp->fullWData(oldp+757184,(__Vtemp_306),3872);
    bufp->fullWData(oldp+757305,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11022),3840);
    bufp->fullWData(oldp+757425,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28417),3840);
    bufp->fullWData(oldp+757545,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30395),3840);
    bufp->fullWData(oldp+757665,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15703),3840);
    bufp->fullWData(oldp+757785,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17625),3840);
    bufp->fullWData(oldp+757905,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13253),3840);
    bufp->fullWData(oldp+758025,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19547),3840);
    bufp->fullWData(oldp+758145,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21469),3840);
    bufp->fullWData(oldp+758265,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37343),3840);
    bufp->fullWData(oldp+758385,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39312),3840);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_307, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41201, 
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
    bufp->fullWData(oldp+758505,(__Vtemp_307),3840);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_308, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11002, 
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
    bufp->fullWData(oldp+758625,(__Vtemp_310),3808);
    bufp->fullWData(oldp+758744,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28412),3808);
    bufp->fullWData(oldp+758863,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30390),3808);
    bufp->fullWData(oldp+758982,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15698),3808);
    bufp->fullWData(oldp+759101,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17620),3808);
    bufp->fullWData(oldp+759220,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13246),3808);
    bufp->fullWData(oldp+759339,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19542),3808);
    bufp->fullWData(oldp+759458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21464),3808);
    bufp->fullWData(oldp+759577,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37338),3808);
    bufp->fullWData(oldp+759696,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39307),3808);
    bufp->fullWData(oldp+759815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41201),3808);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_311, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11002, 
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
    bufp->fullWData(oldp+759934,(__Vtemp_312),3776);
    bufp->fullWData(oldp+760052,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28407),3776);
    bufp->fullWData(oldp+760170,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30385),3776);
    bufp->fullWData(oldp+760288,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15693),3776);
    bufp->fullWData(oldp+760406,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17615),3776);
    bufp->fullWData(oldp+760524,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13239),3776);
    bufp->fullWData(oldp+760642,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19537),3776);
    bufp->fullWData(oldp+760760,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21459),3776);
    bufp->fullWData(oldp+760878,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37333),3776);
    bufp->fullWData(oldp+760996,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39302),3776);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_313, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41181, 
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
    bufp->fullWData(oldp+761114,(__Vtemp_315),3776);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_316, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11002, 
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
    bufp->fullWData(oldp+761232,(__Vtemp_316),3744);
    bufp->fullWData(oldp+761349,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28402),3744);
    bufp->fullWData(oldp+761466,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30380),3744);
    bufp->fullWData(oldp+761583,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15688),3744);
    bufp->fullWData(oldp+761700,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17610),3744);
    bufp->fullWData(oldp+761817,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13232),3744);
    bufp->fullWData(oldp+761934,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19532),3744);
    bufp->fullWData(oldp+762051,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21454),3744);
    bufp->fullWData(oldp+762168,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37328),3744);
    bufp->fullWData(oldp+762285,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39297),3744);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_317, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41181, 
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
    bufp->fullWData(oldp+762402,(__Vtemp_318),3744);
    bufp->fullWData(oldp+762519,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d11002),3712);
    bufp->fullWData(oldp+762635,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28396),3712);
    bufp->fullWData(oldp+762751,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30375),3712);
    bufp->fullWData(oldp+762867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15683),3712);
    bufp->fullWData(oldp+762983,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17605),3712);
    bufp->fullWData(oldp+763099,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13225),3712);
    bufp->fullWData(oldp+763215,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19527),3712);
    bufp->fullWData(oldp+763331,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21449),3712);
    bufp->fullWData(oldp+763447,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37322),3712);
    bufp->fullWData(oldp+763563,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39292),3712);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_319, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41181, 
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
    bufp->fullWData(oldp+763679,(__Vtemp_319),3712);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_320, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10981, 
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
    bufp->fullWData(oldp+763795,(__Vtemp_322),3680);
    bufp->fullWData(oldp+763910,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28391),3680);
    bufp->fullWData(oldp+764025,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30370),3680);
    bufp->fullWData(oldp+764140,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15678),3680);
    bufp->fullWData(oldp+764255,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17600),3680);
    bufp->fullWData(oldp+764370,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13218),3680);
    bufp->fullWData(oldp+764485,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19522),3680);
    bufp->fullWData(oldp+764600,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21444),3680);
    bufp->fullWData(oldp+764715,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37317),3680);
    bufp->fullWData(oldp+764830,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39287),3680);
    bufp->fullWData(oldp+764945,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41181),3680);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_323, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10981, 
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
    bufp->fullWData(oldp+765060,(__Vtemp_324),3648);
    bufp->fullWData(oldp+765174,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28386),3648);
    bufp->fullWData(oldp+765288,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30365),3648);
    bufp->fullWData(oldp+765402,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15673),3648);
    bufp->fullWData(oldp+765516,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17595),3648);
    bufp->fullWData(oldp+765630,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13211),3648);
    bufp->fullWData(oldp+765744,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19517),3648);
    bufp->fullWData(oldp+765858,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21439),3648);
    bufp->fullWData(oldp+765972,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37312),3648);
    bufp->fullWData(oldp+766086,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39282),3648);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_325, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41160, 
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
    bufp->fullWData(oldp+766200,(__Vtemp_327),3648);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_328, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10981, 
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
    bufp->fullWData(oldp+766314,(__Vtemp_328),3616);
    bufp->fullWData(oldp+766427,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28381),3616);
    bufp->fullWData(oldp+766540,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30360),3616);
    bufp->fullWData(oldp+766653,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15668),3616);
    bufp->fullWData(oldp+766766,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17590),3616);
    bufp->fullWData(oldp+766879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13204),3616);
    bufp->fullWData(oldp+766992,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19512),3616);
    bufp->fullWData(oldp+767105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21434),3616);
    bufp->fullWData(oldp+767218,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37307),3616);
    bufp->fullWData(oldp+767331,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39277),3616);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_329, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41160, 
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
    bufp->fullWData(oldp+767444,(__Vtemp_330),3616);
    bufp->fullWData(oldp+767557,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10981),3584);
    bufp->fullWData(oldp+767669,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28375),3584);
    bufp->fullWData(oldp+767781,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30355),3584);
    bufp->fullWData(oldp+767893,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15663),3584);
    bufp->fullWData(oldp+768005,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17585),3584);
    bufp->fullWData(oldp+768117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13197),3584);
    bufp->fullWData(oldp+768229,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19507),3584);
    bufp->fullWData(oldp+768341,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21429),3584);
    bufp->fullWData(oldp+768453,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37301),3584);
    bufp->fullWData(oldp+768565,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39272),3584);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_331, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41160, 
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
    bufp->fullWData(oldp+768677,(__Vtemp_331),3584);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_332, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10961, 
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
    bufp->fullWData(oldp+768789,(__Vtemp_334),3552);
    bufp->fullWData(oldp+768900,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28370),3552);
    bufp->fullWData(oldp+769011,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30350),3552);
    bufp->fullWData(oldp+769122,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15658),3552);
    bufp->fullWData(oldp+769233,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17580),3552);
    bufp->fullWData(oldp+769344,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13190),3552);
    bufp->fullWData(oldp+769455,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19502),3552);
    bufp->fullWData(oldp+769566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21424),3552);
    bufp->fullWData(oldp+769677,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37296),3552);
    bufp->fullWData(oldp+769788,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39267),3552);
    bufp->fullWData(oldp+769899,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41160),3552);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_335, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10961, 
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
    bufp->fullWData(oldp+770010,(__Vtemp_336),3520);
    bufp->fullWData(oldp+770120,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28365),3520);
    bufp->fullWData(oldp+770230,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30345),3520);
    bufp->fullWData(oldp+770340,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15653),3520);
    bufp->fullWData(oldp+770450,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17575),3520);
    bufp->fullWData(oldp+770560,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13183),3520);
    bufp->fullWData(oldp+770670,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19497),3520);
    bufp->fullWData(oldp+770780,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21419),3520);
    bufp->fullWData(oldp+770890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37291),3520);
    bufp->fullWData(oldp+771000,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39262),3520);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_337, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41140, 
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
    bufp->fullWData(oldp+771110,(__Vtemp_339),3520);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_340, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10961, 
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
    bufp->fullWData(oldp+771220,(__Vtemp_340),3488);
    bufp->fullWData(oldp+771329,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28360),3488);
    bufp->fullWData(oldp+771438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30340),3488);
    bufp->fullWData(oldp+771547,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15648),3488);
    bufp->fullWData(oldp+771656,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17570),3488);
    bufp->fullWData(oldp+771765,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13176),3488);
    bufp->fullWData(oldp+771874,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19492),3488);
    bufp->fullWData(oldp+771983,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21414),3488);
    bufp->fullWData(oldp+772092,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37286),3488);
    bufp->fullWData(oldp+772201,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39257),3488);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_341, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41140, 
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
    bufp->fullWData(oldp+772310,(__Vtemp_342),3488);
    bufp->fullWData(oldp+772419,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10961),3456);
    bufp->fullWData(oldp+772527,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28354),3456);
    bufp->fullWData(oldp+772635,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30335),3456);
    bufp->fullWData(oldp+772743,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15643),3456);
    bufp->fullWData(oldp+772851,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17565),3456);
    bufp->fullWData(oldp+772959,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13169),3456);
    bufp->fullWData(oldp+773067,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19487),3456);
    bufp->fullWData(oldp+773175,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21409),3456);
    bufp->fullWData(oldp+773283,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37280),3456);
    bufp->fullWData(oldp+773391,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39252),3456);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_343, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41140, 
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
    bufp->fullWData(oldp+773499,(__Vtemp_343),3456);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_344, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10940, 
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
    bufp->fullWData(oldp+773607,(__Vtemp_346),3424);
    bufp->fullWData(oldp+773714,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28349),3424);
    bufp->fullWData(oldp+773821,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30330),3424);
    bufp->fullWData(oldp+773928,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15638),3424);
    bufp->fullWData(oldp+774035,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17560),3424);
    bufp->fullWData(oldp+774142,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13162),3424);
    bufp->fullWData(oldp+774249,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19482),3424);
    bufp->fullWData(oldp+774356,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21404),3424);
    bufp->fullWData(oldp+774463,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37275),3424);
    bufp->fullWData(oldp+774570,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39247),3424);
    bufp->fullWData(oldp+774677,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41140),3424);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_347, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10940, 
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
    bufp->fullWData(oldp+774784,(__Vtemp_348),3392);
    bufp->fullWData(oldp+774890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28344),3392);
    bufp->fullWData(oldp+774996,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30325),3392);
    bufp->fullWData(oldp+775102,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15633),3392);
    bufp->fullWData(oldp+775208,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17555),3392);
    bufp->fullWData(oldp+775314,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13155),3392);
    bufp->fullWData(oldp+775420,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19477),3392);
    bufp->fullWData(oldp+775526,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21399),3392);
    bufp->fullWData(oldp+775632,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37270),3392);
    bufp->fullWData(oldp+775738,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39242),3392);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_349, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41120, 
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
    bufp->fullWData(oldp+775844,(__Vtemp_351),3392);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_352, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10940, 
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
    bufp->fullWData(oldp+775950,(__Vtemp_352),3360);
    bufp->fullWData(oldp+776055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28339),3360);
    bufp->fullWData(oldp+776160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30320),3360);
    bufp->fullWData(oldp+776265,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15628),3360);
    bufp->fullWData(oldp+776370,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17550),3360);
    bufp->fullWData(oldp+776475,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13148),3360);
    bufp->fullWData(oldp+776580,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19472),3360);
    bufp->fullWData(oldp+776685,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21394),3360);
    bufp->fullWData(oldp+776790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37265),3360);
    bufp->fullWData(oldp+776895,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39237),3360);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_353, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41120, 
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
    bufp->fullWData(oldp+777000,(__Vtemp_354),3360);
    bufp->fullWData(oldp+777105,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10940),3328);
    bufp->fullWData(oldp+777209,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28333),3328);
    bufp->fullWData(oldp+777313,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30315),3328);
    bufp->fullWData(oldp+777417,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15623),3328);
    bufp->fullWData(oldp+777521,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17545),3328);
    bufp->fullWData(oldp+777625,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13141),3328);
    bufp->fullWData(oldp+777729,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19467),3328);
    bufp->fullWData(oldp+777833,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21389),3328);
    bufp->fullWData(oldp+777937,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37259),3328);
    bufp->fullWData(oldp+778041,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39232),3328);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_355, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41120, 
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
    bufp->fullWData(oldp+778145,(__Vtemp_355),3328);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_356, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10920, 
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
    bufp->fullWData(oldp+778249,(__Vtemp_358),3296);
    bufp->fullWData(oldp+778352,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28328),3296);
    bufp->fullWData(oldp+778455,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30310),3296);
    bufp->fullWData(oldp+778558,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15618),3296);
    bufp->fullWData(oldp+778661,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17540),3296);
    bufp->fullWData(oldp+778764,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13134),3296);
    bufp->fullWData(oldp+778867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19462),3296);
    bufp->fullWData(oldp+778970,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21384),3296);
    bufp->fullWData(oldp+779073,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37254),3296);
    bufp->fullWData(oldp+779176,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39227),3296);
    bufp->fullWData(oldp+779279,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41120),3296);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_359, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10920, 
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
    bufp->fullWData(oldp+779382,(__Vtemp_360),3264);
    bufp->fullWData(oldp+779484,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28323),3264);
    bufp->fullWData(oldp+779586,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30305),3264);
    bufp->fullWData(oldp+779688,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15613),3264);
    bufp->fullWData(oldp+779790,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17535),3264);
    bufp->fullWData(oldp+779892,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13127),3264);
    bufp->fullWData(oldp+779994,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19457),3264);
    bufp->fullWData(oldp+780096,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21379),3264);
    bufp->fullWData(oldp+780198,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37249),3264);
    bufp->fullWData(oldp+780300,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39222),3264);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_361, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41100, 
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
    bufp->fullWData(oldp+780402,(__Vtemp_363),3264);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_364, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10920, 
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
    bufp->fullWData(oldp+780504,(__Vtemp_364),3232);
    bufp->fullWData(oldp+780605,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28318),3232);
    bufp->fullWData(oldp+780706,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30300),3232);
    bufp->fullWData(oldp+780807,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15608),3232);
    bufp->fullWData(oldp+780908,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17530),3232);
    bufp->fullWData(oldp+781009,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13120),3232);
    bufp->fullWData(oldp+781110,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19452),3232);
    bufp->fullWData(oldp+781211,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21374),3232);
    bufp->fullWData(oldp+781312,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37244),3232);
    bufp->fullWData(oldp+781413,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39217),3232);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_365, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41100, 
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
    bufp->fullWData(oldp+781514,(__Vtemp_366),3232);
    bufp->fullWData(oldp+781615,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10920),3200);
    bufp->fullWData(oldp+781715,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28312),3200);
    bufp->fullWData(oldp+781815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30295),3200);
    bufp->fullWData(oldp+781915,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15603),3200);
    bufp->fullWData(oldp+782015,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17525),3200);
    bufp->fullWData(oldp+782115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13113),3200);
    bufp->fullWData(oldp+782215,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19447),3200);
    bufp->fullWData(oldp+782315,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21369),3200);
    bufp->fullWData(oldp+782415,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37238),3200);
    bufp->fullWData(oldp+782515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39212),3200);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_367, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41100, 
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
    bufp->fullWData(oldp+782615,(__Vtemp_367),3200);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_368, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10899, 
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
    bufp->fullWData(oldp+782715,(__Vtemp_370),3168);
    bufp->fullWData(oldp+782814,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28307),3168);
    bufp->fullWData(oldp+782913,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30290),3168);
    bufp->fullWData(oldp+783012,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15598),3168);
    bufp->fullWData(oldp+783111,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17520),3168);
    bufp->fullWData(oldp+783210,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13106),3168);
    bufp->fullWData(oldp+783309,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19442),3168);
    bufp->fullWData(oldp+783408,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21364),3168);
    bufp->fullWData(oldp+783507,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37233),3168);
    bufp->fullWData(oldp+783606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39207),3168);
    bufp->fullWData(oldp+783705,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41100),3168);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_371, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10899, 
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
    bufp->fullWData(oldp+783804,(__Vtemp_372),3136);
    bufp->fullWData(oldp+783902,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28302),3136);
    bufp->fullWData(oldp+784000,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30285),3136);
    bufp->fullWData(oldp+784098,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15593),3136);
    bufp->fullWData(oldp+784196,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17515),3136);
    bufp->fullWData(oldp+784294,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13099),3136);
    bufp->fullWData(oldp+784392,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19437),3136);
    bufp->fullWData(oldp+784490,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21359),3136);
    bufp->fullWData(oldp+784588,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37228),3136);
    bufp->fullWData(oldp+784686,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39202),3136);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_373, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41079, 
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
    bufp->fullWData(oldp+784784,(__Vtemp_375),3136);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_376, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10899, 
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
    bufp->fullWData(oldp+784882,(__Vtemp_376),3104);
    bufp->fullWData(oldp+784979,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28297),3104);
    bufp->fullWData(oldp+785076,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30280),3104);
    bufp->fullWData(oldp+785173,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15588),3104);
    bufp->fullWData(oldp+785270,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17510),3104);
    bufp->fullWData(oldp+785367,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13092),3104);
    bufp->fullWData(oldp+785464,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19432),3104);
    bufp->fullWData(oldp+785561,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21354),3104);
    bufp->fullWData(oldp+785658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37223),3104);
    bufp->fullWData(oldp+785755,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39197),3104);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_377, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41079, 
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
    bufp->fullWData(oldp+785852,(__Vtemp_378),3104);
    __Vtemp_382[0U] = ((((3U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((2U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[1U])));
    __Vtemp_382[1U] = ((((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((4U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])));
    __Vtemp_382[2U] = ((((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((6U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])));
    __Vtemp_382[3U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_382[4U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_382[5U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(3088,2896,192, __Vtemp_383, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46614, __Vtemp_382);
    bufp->fullWData(oldp+785949,(__Vtemp_383),3088);
    bufp->fullWData(oldp+786046,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10899),3072);
    bufp->fullWData(oldp+786142,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28291),3072);
    bufp->fullWData(oldp+786238,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30275),3072);
    bufp->fullWData(oldp+786334,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15583),3072);
    bufp->fullWData(oldp+786430,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17505),3072);
    bufp->fullWData(oldp+786526,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13085),3072);
    bufp->fullWData(oldp+786622,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19427),3072);
    bufp->fullWData(oldp+786718,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21349),3072);
    bufp->fullWData(oldp+786814,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37217),3072);
    bufp->fullWData(oldp+786910,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39192),3072);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_384, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41079, 
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
    bufp->fullWData(oldp+787006,(__Vtemp_384),3072);
    __Vtemp_387[0U] = ((((5U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((4U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[2U])));
    __Vtemp_387[1U] = ((((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((6U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])));
    __Vtemp_387[2U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_387[3U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_387[4U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(3056,2896,160, __Vtemp_388, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46614, __Vtemp_387);
    bufp->fullWData(oldp+787102,(__Vtemp_388),3056);
    bufp->fullWData(oldp+787198,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7842),3040);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_389, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10879, 
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
    bufp->fullWData(oldp+787293,(__Vtemp_391),3040);
    bufp->fullWData(oldp+787388,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28286),3040);
    bufp->fullWData(oldp+787483,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30270),3040);
    bufp->fullWData(oldp+787578,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15578),3040);
    bufp->fullWData(oldp+787673,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17500),3040);
    bufp->fullWData(oldp+787768,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13078),3040);
    bufp->fullWData(oldp+787863,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19422),3040);
    bufp->fullWData(oldp+787958,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21344),3040);
    bufp->fullWData(oldp+788053,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37212),3040);
    bufp->fullWData(oldp+788148,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39187),3040);
    bufp->fullWData(oldp+788243,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41079),3040);
    __Vtemp_393[0U] = ((((7U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((6U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[3U])));
    __Vtemp_393[1U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_393[2U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_393[3U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(3024,2896,128, __Vtemp_394, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46614, __Vtemp_393);
    bufp->fullWData(oldp+788338,(__Vtemp_394),3024);
    bufp->fullWData(oldp+788433,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7837),3008);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_395, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10879, 
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
    bufp->fullWData(oldp+788527,(__Vtemp_396),3008);
    bufp->fullWData(oldp+788621,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28281),3008);
    bufp->fullWData(oldp+788715,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30265),3008);
    bufp->fullWData(oldp+788809,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15573),3008);
    bufp->fullWData(oldp+788903,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17495),3008);
    bufp->fullWData(oldp+788997,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13071),3008);
    bufp->fullWData(oldp+789091,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19417),3008);
    bufp->fullWData(oldp+789185,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21339),3008);
    bufp->fullWData(oldp+789279,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37207),3008);
    bufp->fullWData(oldp+789373,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39182),3008);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_397, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41059, 
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
    bufp->fullWData(oldp+789467,(__Vtemp_399),3008);
    __Vtemp_400[0U] = ((((9U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((8U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[4U])));
    __Vtemp_400[1U] = (IData)((((QData)((IData)((((
                                                   (0xdU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xcU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xbU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0xaU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    __Vtemp_400[2U] = (IData)(((((QData)((IData)(((
                                                   ((0xdU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0xcU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0xbU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0xaU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2992,2896,96, __Vtemp_401, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46614, __Vtemp_400);
    bufp->fullWData(oldp+789561,(__Vtemp_401),2992);
    bufp->fullWData(oldp+789655,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7832),2976);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_402, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10879, 
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
    bufp->fullWData(oldp+789748,(__Vtemp_402),2976);
    bufp->fullWData(oldp+789841,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28276),2976);
    bufp->fullWData(oldp+789934,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30260),2976);
    bufp->fullWData(oldp+790027,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15568),2976);
    bufp->fullWData(oldp+790120,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17490),2976);
    bufp->fullWData(oldp+790213,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13064),2976);
    bufp->fullWData(oldp+790306,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19412),2976);
    bufp->fullWData(oldp+790399,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21334),2976);
    bufp->fullWData(oldp+790492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37202),2976);
    bufp->fullWData(oldp+790585,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39177),2976);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_403, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41059, 
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
    bufp->fullWData(oldp+790678,(__Vtemp_404),2976);
    VL_CONCAT_WWQ(2960,2896,64, __Vtemp_405, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46614, 
                  (((QData)((IData)(((((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0xcU 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0xbU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0xaU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[5U])))))));
    bufp->fullWData(oldp+790771,(__Vtemp_405),2960);
    bufp->fullWData(oldp+790864,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7827),2944);
    bufp->fullWData(oldp+790956,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10879),2944);
    bufp->fullWData(oldp+791048,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28270),2944);
    bufp->fullWData(oldp+791140,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30255),2944);
    bufp->fullWData(oldp+791232,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15563),2944);
    bufp->fullWData(oldp+791324,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17485),2944);
    bufp->fullWData(oldp+791416,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13057),2944);
    bufp->fullWData(oldp+791508,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19407),2944);
    bufp->fullWData(oldp+791600,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21329),2944);
    bufp->fullWData(oldp+791692,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37196),2944);
    bufp->fullWData(oldp+791784,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39172),2944);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_406, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41059, 
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
    bufp->fullWData(oldp+791876,(__Vtemp_406),2944);
    VL_CONCAT_WWI(2912,2896,16, __Vtemp_407, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46614, 
                  (0xffffU & ((0xdU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2928,2912,16, __Vtemp_408, __Vtemp_407, 
                  (0xffffU & ((0xcU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[6U])));
    bufp->fullWData(oldp+791968,(__Vtemp_408),2928);
    bufp->fullWData(oldp+792060,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7822),2912);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_409, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10858, 
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
    bufp->fullWData(oldp+792151,(__Vtemp_411),2912);
    bufp->fullWData(oldp+792242,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28265),2912);
    bufp->fullWData(oldp+792333,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30250),2912);
    bufp->fullWData(oldp+792424,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15558),2912);
    bufp->fullWData(oldp+792515,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17480),2912);
    bufp->fullWData(oldp+792606,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13050),2912);
    bufp->fullWData(oldp+792697,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19402),2912);
    bufp->fullWData(oldp+792788,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21324),2912);
    bufp->fullWData(oldp+792879,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37191),2912);
    bufp->fullWData(oldp+792970,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39167),2912);
    bufp->fullWData(oldp+793061,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41059),2912);
    bufp->fullWData(oldp+793152,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46614),2896);
    bufp->fullWData(oldp+793243,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7817),2880);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_412, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10858, 
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
    bufp->fullWData(oldp+793333,(__Vtemp_413),2880);
    bufp->fullWData(oldp+793423,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28260),2880);
    bufp->fullWData(oldp+793513,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30245),2880);
    bufp->fullWData(oldp+793603,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15553),2880);
    bufp->fullWData(oldp+793693,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17475),2880);
    bufp->fullWData(oldp+793783,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13043),2880);
    bufp->fullWData(oldp+793873,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19397),2880);
    bufp->fullWData(oldp+793963,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21319),2880);
    bufp->fullWData(oldp+794053,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37186),2880);
    bufp->fullWData(oldp+794143,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39162),2880);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_414, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41039, 
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
    bufp->fullWData(oldp+794233,(__Vtemp_416),2880);
    __Vtemp_418[0U] = ((((0x11U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x10U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[8U])));
    __Vtemp_418[1U] = ((((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x12U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U])));
    __Vtemp_418[2U] = (IData)((((QData)((IData)((((
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x16U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x15U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x14U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))));
    __Vtemp_418[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x17U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x16U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x15U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x14U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2864,2736,128, __Vtemp_419, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46579, __Vtemp_418);
    bufp->fullWData(oldp+794323,(__Vtemp_419),2864);
    bufp->fullWData(oldp+794413,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7812),2848);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_420, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10858, 
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
    bufp->fullWData(oldp+794502,(__Vtemp_420),2848);
    bufp->fullWData(oldp+794591,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28255),2848);
    bufp->fullWData(oldp+794680,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30240),2848);
    bufp->fullWData(oldp+794769,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15548),2848);
    bufp->fullWData(oldp+794858,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17470),2848);
    bufp->fullWData(oldp+794947,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13036),2848);
    bufp->fullWData(oldp+795036,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19392),2848);
    bufp->fullWData(oldp+795125,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21314),2848);
    bufp->fullWData(oldp+795214,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37181),2848);
    bufp->fullWData(oldp+795303,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39157),2848);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_421, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41039, 
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
    bufp->fullWData(oldp+795392,(__Vtemp_422),2848);
    __Vtemp_423[0U] = ((((0x13U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x12U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[9U])));
    __Vtemp_423[1U] = (IData)((((QData)((IData)((((
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x16U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x15U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x14U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))));
    __Vtemp_423[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x17U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x16U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x15U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x14U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2832,2736,96, __Vtemp_424, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46579, __Vtemp_423);
    bufp->fullWData(oldp+795481,(__Vtemp_424),2832);
    bufp->fullWData(oldp+795570,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7806),2816);
    bufp->fullWData(oldp+795658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10858),2816);
    bufp->fullWData(oldp+795746,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28249),2816);
    bufp->fullWData(oldp+795834,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30235),2816);
    bufp->fullWData(oldp+795922,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15543),2816);
    bufp->fullWData(oldp+796010,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17465),2816);
    bufp->fullWData(oldp+796098,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13029),2816);
    bufp->fullWData(oldp+796186,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19387),2816);
    bufp->fullWData(oldp+796274,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21309),2816);
    bufp->fullWData(oldp+796362,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37175),2816);
    bufp->fullWData(oldp+796450,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39152),2816);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_425, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41039, 
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
    bufp->fullWData(oldp+796538,(__Vtemp_425),2816);
    VL_CONCAT_WWQ(2800,2736,64, __Vtemp_426, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46579, 
                  (((QData)((IData)(((((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x16U 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x15U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x14U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xaU])))))));
    bufp->fullWData(oldp+796626,(__Vtemp_426),2800);
    bufp->fullWData(oldp+796714,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7801),2784);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_427, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10838, 
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
    bufp->fullWData(oldp+796801,(__Vtemp_429),2784);
    bufp->fullWData(oldp+796888,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28244),2784);
    bufp->fullWData(oldp+796975,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30230),2784);
    bufp->fullWData(oldp+797062,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15538),2784);
    bufp->fullWData(oldp+797149,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17460),2784);
    bufp->fullWData(oldp+797236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13022),2784);
    bufp->fullWData(oldp+797323,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19382),2784);
    bufp->fullWData(oldp+797410,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21304),2784);
    bufp->fullWData(oldp+797497,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37170),2784);
    bufp->fullWData(oldp+797584,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39147),2784);
    bufp->fullWData(oldp+797671,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41039),2784);
    VL_CONCAT_WWI(2752,2736,16, __Vtemp_430, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46579, 
                  (0xffffU & ((0x17U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2768,2752,16, __Vtemp_431, __Vtemp_430, 
                  (0xffffU & ((0x16U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xbU])));
    bufp->fullWData(oldp+797758,(__Vtemp_431),2768);
    bufp->fullWData(oldp+797845,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7796),2752);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_432, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10838, 
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
    bufp->fullWData(oldp+797931,(__Vtemp_433),2752);
    bufp->fullWData(oldp+798017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28239),2752);
    bufp->fullWData(oldp+798103,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30225),2752);
    bufp->fullWData(oldp+798189,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15533),2752);
    bufp->fullWData(oldp+798275,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17455),2752);
    bufp->fullWData(oldp+798361,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13015),2752);
    bufp->fullWData(oldp+798447,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19377),2752);
    bufp->fullWData(oldp+798533,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21299),2752);
    bufp->fullWData(oldp+798619,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37165),2752);
    bufp->fullWData(oldp+798705,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39142),2752);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_434, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41019, 
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
    bufp->fullWData(oldp+798791,(__Vtemp_436),2752);
    bufp->fullWData(oldp+798877,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46579),2736);
    bufp->fullWData(oldp+798963,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7791),2720);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_437, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10838, 
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
    bufp->fullWData(oldp+799048,(__Vtemp_437),2720);
    bufp->fullWData(oldp+799133,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28234),2720);
    bufp->fullWData(oldp+799218,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30220),2720);
    bufp->fullWData(oldp+799303,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15528),2720);
    bufp->fullWData(oldp+799388,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17450),2720);
    bufp->fullWData(oldp+799473,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13008),2720);
    bufp->fullWData(oldp+799558,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19372),2720);
    bufp->fullWData(oldp+799643,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21294),2720);
    bufp->fullWData(oldp+799728,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37160),2720);
    bufp->fullWData(oldp+799813,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39137),2720);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_438, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41019, 
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
    bufp->fullWData(oldp+799898,(__Vtemp_439),2720);
    __Vtemp_441[0U] = ((((0x1bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x1aU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xdU])));
    __Vtemp_441[1U] = ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x1cU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU])));
    __Vtemp_441[2U] = (IData)((((QData)((IData)((((
                                                   (0x21U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x20U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x1fU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x1eU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))));
    __Vtemp_441[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x21U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x20U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x1fU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x1eU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2704,2576,128, __Vtemp_442, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46544, __Vtemp_441);
    bufp->fullWData(oldp+799983,(__Vtemp_442),2704);
    bufp->fullWData(oldp+800068,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7786),2688);
    bufp->fullWData(oldp+800152,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10838),2688);
    bufp->fullWData(oldp+800236,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28228),2688);
    bufp->fullWData(oldp+800320,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30215),2688);
    bufp->fullWData(oldp+800404,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15523),2688);
    bufp->fullWData(oldp+800488,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17445),2688);
    bufp->fullWData(oldp+800572,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d13001),2688);
    bufp->fullWData(oldp+800656,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19367),2688);
    bufp->fullWData(oldp+800740,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21289),2688);
    bufp->fullWData(oldp+800824,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37154),2688);
    bufp->fullWData(oldp+800908,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39132),2688);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_443, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41019, 
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
    bufp->fullWData(oldp+800992,(__Vtemp_443),2688);
    __Vtemp_444[0U] = ((((0x1dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x1cU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xeU])));
    __Vtemp_444[1U] = (IData)((((QData)((IData)((((
                                                   (0x21U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x20U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x1fU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x1eU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))));
    __Vtemp_444[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x21U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x20U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x1fU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x1eU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2672,2576,96, __Vtemp_445, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46544, __Vtemp_444);
    bufp->fullWData(oldp+801076,(__Vtemp_445),2672);
    bufp->fullWData(oldp+801160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7781),2656);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_446, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10817, 
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
    bufp->fullWData(oldp+801243,(__Vtemp_448),2656);
    bufp->fullWData(oldp+801326,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28223),2656);
    bufp->fullWData(oldp+801409,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30210),2656);
    bufp->fullWData(oldp+801492,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15518),2656);
    bufp->fullWData(oldp+801575,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17440),2656);
    bufp->fullWData(oldp+801658,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12994),2656);
    bufp->fullWData(oldp+801741,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19362),2656);
    bufp->fullWData(oldp+801824,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21284),2656);
    bufp->fullWData(oldp+801907,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37149),2656);
    bufp->fullWData(oldp+801990,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39127),2656);
    bufp->fullWData(oldp+802073,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d41019),2656);
    VL_CONCAT_WWQ(2640,2576,64, __Vtemp_449, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46544, 
                  (((QData)((IData)(((((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x20U 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x1fU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x1eU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0xfU])))))));
    bufp->fullWData(oldp+802156,(__Vtemp_449),2640);
    bufp->fullWData(oldp+802239,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7776),2624);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_450, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10817, 
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
    bufp->fullWData(oldp+802321,(__Vtemp_451),2624);
    bufp->fullWData(oldp+802403,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28218),2624);
    bufp->fullWData(oldp+802485,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30205),2624);
    bufp->fullWData(oldp+802567,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15513),2624);
    bufp->fullWData(oldp+802649,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17435),2624);
    bufp->fullWData(oldp+802731,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12987),2624);
    bufp->fullWData(oldp+802813,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19357),2624);
    bufp->fullWData(oldp+802895,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21279),2624);
    bufp->fullWData(oldp+802977,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37144),2624);
    bufp->fullWData(oldp+803059,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39122),2624);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_452, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40998, 
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
    bufp->fullWData(oldp+803141,(__Vtemp_454),2624);
    VL_CONCAT_WWI(2592,2576,16, __Vtemp_455, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46544, 
                  (0xffffU & ((0x21U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2608,2592,16, __Vtemp_456, __Vtemp_455, 
                  (0xffffU & ((0x20U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x10U])));
    bufp->fullWData(oldp+803223,(__Vtemp_456),2608);
    bufp->fullWData(oldp+803305,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7771),2592);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_457, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10817, 
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
    bufp->fullWData(oldp+803386,(__Vtemp_457),2592);
    bufp->fullWData(oldp+803467,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28213),2592);
    bufp->fullWData(oldp+803548,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30200),2592);
    bufp->fullWData(oldp+803629,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15508),2592);
    bufp->fullWData(oldp+803710,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17430),2592);
    bufp->fullWData(oldp+803791,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12980),2592);
    bufp->fullWData(oldp+803872,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19352),2592);
    bufp->fullWData(oldp+803953,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21274),2592);
    bufp->fullWData(oldp+804034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37139),2592);
    bufp->fullWData(oldp+804115,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39117),2592);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_458, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40998, 
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
    bufp->fullWData(oldp+804196,(__Vtemp_459),2592);
    bufp->fullWData(oldp+804277,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46544),2576);
    bufp->fullWData(oldp+804358,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7765),2560);
    bufp->fullWData(oldp+804438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10817),2560);
    bufp->fullWData(oldp+804518,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28207),2560);
    bufp->fullWData(oldp+804598,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30195),2560);
    bufp->fullWData(oldp+804678,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15503),2560);
    bufp->fullWData(oldp+804758,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17425),2560);
    bufp->fullWData(oldp+804838,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12973),2560);
    bufp->fullWData(oldp+804918,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19347),2560);
    bufp->fullWData(oldp+804998,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21269),2560);
    bufp->fullWData(oldp+805078,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37133),2560);
    bufp->fullWData(oldp+805158,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39112),2560);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_460, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40998, 
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
    bufp->fullWData(oldp+805238,(__Vtemp_460),2560);
    __Vtemp_462[0U] = ((((0x25U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x24U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x12U])));
    __Vtemp_462[1U] = ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x26U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U])));
    __Vtemp_462[2U] = (IData)((((QData)((IData)((((
                                                   (0x2bU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x2aU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x29U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x28U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))));
    __Vtemp_462[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x2bU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x2aU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x29U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x28U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2544,2416,128, __Vtemp_463, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46509, __Vtemp_462);
    bufp->fullWData(oldp+805318,(__Vtemp_463),2544);
    bufp->fullWData(oldp+805398,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7760),2528);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_464, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10797, 
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
    bufp->fullWData(oldp+805477,(__Vtemp_466),2528);
    bufp->fullWData(oldp+805556,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28202),2528);
    bufp->fullWData(oldp+805635,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30190),2528);
    bufp->fullWData(oldp+805714,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15498),2528);
    bufp->fullWData(oldp+805793,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17420),2528);
    bufp->fullWData(oldp+805872,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12966),2528);
    bufp->fullWData(oldp+805951,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19342),2528);
    bufp->fullWData(oldp+806030,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21264),2528);
    bufp->fullWData(oldp+806109,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37128),2528);
    bufp->fullWData(oldp+806188,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39107),2528);
    bufp->fullWData(oldp+806267,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40998),2528);
    __Vtemp_467[0U] = ((((0x27U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x26U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x13U])));
    __Vtemp_467[1U] = (IData)((((QData)((IData)((((
                                                   (0x2bU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x2aU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x29U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x28U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))));
    __Vtemp_467[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x2bU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x2aU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x29U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x28U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2512,2416,96, __Vtemp_468, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46509, __Vtemp_467);
    bufp->fullWData(oldp+806346,(__Vtemp_468),2512);
    bufp->fullWData(oldp+806425,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7755),2496);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_469, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10797, 
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
    bufp->fullWData(oldp+806503,(__Vtemp_470),2496);
    bufp->fullWData(oldp+806581,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28197),2496);
    bufp->fullWData(oldp+806659,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30185),2496);
    bufp->fullWData(oldp+806737,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15493),2496);
    bufp->fullWData(oldp+806815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17415),2496);
    bufp->fullWData(oldp+806893,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12959),2496);
    bufp->fullWData(oldp+806971,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19337),2496);
    bufp->fullWData(oldp+807049,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21259),2496);
    bufp->fullWData(oldp+807127,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37123),2496);
    bufp->fullWData(oldp+807205,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39102),2496);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_471, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978, 
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
    bufp->fullWData(oldp+807283,(__Vtemp_473),2496);
    VL_CONCAT_WWQ(2480,2416,64, __Vtemp_474, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46509, 
                  (((QData)((IData)(((((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x2aU 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x29U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x28U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x14U])))))));
    bufp->fullWData(oldp+807361,(__Vtemp_474),2480);
    bufp->fullWData(oldp+807439,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7750),2464);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_475, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10797, 
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
    bufp->fullWData(oldp+807516,(__Vtemp_475),2464);
    bufp->fullWData(oldp+807593,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28192),2464);
    bufp->fullWData(oldp+807670,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30180),2464);
    bufp->fullWData(oldp+807747,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15488),2464);
    bufp->fullWData(oldp+807824,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17410),2464);
    bufp->fullWData(oldp+807901,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12952),2464);
    bufp->fullWData(oldp+807978,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19332),2464);
    bufp->fullWData(oldp+808055,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21254),2464);
    bufp->fullWData(oldp+808132,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37118),2464);
    bufp->fullWData(oldp+808209,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39097),2464);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_476, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978, 
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
    bufp->fullWData(oldp+808286,(__Vtemp_477),2464);
    VL_CONCAT_WWI(2432,2416,16, __Vtemp_478, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46509, 
                  (0xffffU & ((0x2bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2448,2432,16, __Vtemp_479, __Vtemp_478, 
                  (0xffffU & ((0x2aU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x15U])));
    bufp->fullWData(oldp+808363,(__Vtemp_479),2448);
    bufp->fullWData(oldp+808440,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7745),2432);
    bufp->fullWData(oldp+808516,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10797),2432);
    bufp->fullWData(oldp+808592,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28186),2432);
    bufp->fullWData(oldp+808668,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30175),2432);
    bufp->fullWData(oldp+808744,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15483),2432);
    bufp->fullWData(oldp+808820,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17405),2432);
    bufp->fullWData(oldp+808896,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12945),2432);
    bufp->fullWData(oldp+808972,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19327),2432);
    bufp->fullWData(oldp+809048,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21249),2432);
    bufp->fullWData(oldp+809124,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37112),2432);
    bufp->fullWData(oldp+809200,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39092),2432);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_480, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978, 
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
    bufp->fullWData(oldp+809276,(__Vtemp_480),2432);
    bufp->fullWData(oldp+809352,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46509),2416);
    bufp->fullWData(oldp+809428,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7740),2400);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_481, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10776, 
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
    bufp->fullWData(oldp+809503,(__Vtemp_483),2400);
    bufp->fullWData(oldp+809578,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28181),2400);
    bufp->fullWData(oldp+809653,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30170),2400);
    bufp->fullWData(oldp+809728,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15478),2400);
    bufp->fullWData(oldp+809803,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17400),2400);
    bufp->fullWData(oldp+809878,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12938),2400);
    bufp->fullWData(oldp+809953,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19322),2400);
    bufp->fullWData(oldp+810028,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21244),2400);
    bufp->fullWData(oldp+810103,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37107),2400);
    bufp->fullWData(oldp+810178,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39087),2400);
    bufp->fullWData(oldp+810253,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40978),2400);
    __Vtemp_485[0U] = ((((0x2fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x2eU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x17U])));
    __Vtemp_485[1U] = ((((0x31U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x30U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U])));
    __Vtemp_485[2U] = (IData)((((QData)((IData)((((
                                                   (0x35U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x34U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x33U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x32U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))));
    __Vtemp_485[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x35U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x34U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x33U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x32U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2384,2256,128, __Vtemp_486, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46474, __Vtemp_485);
    bufp->fullWData(oldp+810328,(__Vtemp_486),2384);
    bufp->fullWData(oldp+810403,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7735),2368);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_487, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10776, 
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
    bufp->fullWData(oldp+810477,(__Vtemp_488),2368);
    bufp->fullWData(oldp+810551,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28176),2368);
    bufp->fullWData(oldp+810625,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30165),2368);
    bufp->fullWData(oldp+810699,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15473),2368);
    bufp->fullWData(oldp+810773,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17395),2368);
    bufp->fullWData(oldp+810847,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12931),2368);
    bufp->fullWData(oldp+810921,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19317),2368);
    bufp->fullWData(oldp+810995,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21239),2368);
    bufp->fullWData(oldp+811069,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37102),2368);
    bufp->fullWData(oldp+811143,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39082),2368);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_489, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958, 
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
    bufp->fullWData(oldp+811217,(__Vtemp_491),2368);
    __Vtemp_492[0U] = ((((0x31U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x30U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x18U])));
    __Vtemp_492[1U] = (IData)((((QData)((IData)((((
                                                   (0x35U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x34U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x33U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x32U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))));
    __Vtemp_492[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x35U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x34U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x33U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x32U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2352,2256,96, __Vtemp_493, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46474, __Vtemp_492);
    bufp->fullWData(oldp+811291,(__Vtemp_493),2352);
    bufp->fullWData(oldp+811365,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7730),2336);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_494, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10776, 
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
    bufp->fullWData(oldp+811438,(__Vtemp_494),2336);
    bufp->fullWData(oldp+811511,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28171),2336);
    bufp->fullWData(oldp+811584,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30160),2336);
    bufp->fullWData(oldp+811657,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15468),2336);
    bufp->fullWData(oldp+811730,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17390),2336);
    bufp->fullWData(oldp+811803,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12924),2336);
    bufp->fullWData(oldp+811876,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19312),2336);
    bufp->fullWData(oldp+811949,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21234),2336);
    bufp->fullWData(oldp+812022,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37097),2336);
    bufp->fullWData(oldp+812095,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39077),2336);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_495, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958, 
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
    bufp->fullWData(oldp+812168,(__Vtemp_496),2336);
    VL_CONCAT_WWQ(2320,2256,64, __Vtemp_497, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46474, 
                  (((QData)((IData)(((((0x35U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x34U 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x33U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x32U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x19U])))))));
    bufp->fullWData(oldp+812241,(__Vtemp_497),2320);
    bufp->fullWData(oldp+812314,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7724),2304);
    bufp->fullWData(oldp+812386,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10776),2304);
    bufp->fullWData(oldp+812458,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28165),2304);
    bufp->fullWData(oldp+812530,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30155),2304);
    bufp->fullWData(oldp+812602,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15463),2304);
    bufp->fullWData(oldp+812674,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17385),2304);
    bufp->fullWData(oldp+812746,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12917),2304);
    bufp->fullWData(oldp+812818,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19307),2304);
    bufp->fullWData(oldp+812890,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21229),2304);
    bufp->fullWData(oldp+812962,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37091),2304);
    bufp->fullWData(oldp+813034,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39072),2304);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_498, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958, 
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
    bufp->fullWData(oldp+813106,(__Vtemp_498),2304);
    VL_CONCAT_WWI(2272,2256,16, __Vtemp_499, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46474, 
                  (0xffffU & ((0x35U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2288,2272,16, __Vtemp_500, __Vtemp_499, 
                  (0xffffU & ((0x34U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1aU])));
    bufp->fullWData(oldp+813178,(__Vtemp_500),2288);
    bufp->fullWData(oldp+813250,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7719),2272);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_501, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10756, 
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
    bufp->fullWData(oldp+813321,(__Vtemp_503),2272);
    bufp->fullWData(oldp+813392,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28160),2272);
    bufp->fullWData(oldp+813463,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30150),2272);
    bufp->fullWData(oldp+813534,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15458),2272);
    bufp->fullWData(oldp+813605,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17380),2272);
    bufp->fullWData(oldp+813676,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12910),2272);
    bufp->fullWData(oldp+813747,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19302),2272);
    bufp->fullWData(oldp+813818,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21224),2272);
    bufp->fullWData(oldp+813889,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37086),2272);
    bufp->fullWData(oldp+813960,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39067),2272);
    bufp->fullWData(oldp+814031,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40958),2272);
    bufp->fullWData(oldp+814102,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46474),2256);
    bufp->fullWData(oldp+814173,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7714),2240);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_504, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10756, 
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
    bufp->fullWData(oldp+814243,(__Vtemp_505),2240);
    bufp->fullWData(oldp+814313,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28155),2240);
    bufp->fullWData(oldp+814383,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30145),2240);
    bufp->fullWData(oldp+814453,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15453),2240);
    bufp->fullWData(oldp+814523,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17375),2240);
    bufp->fullWData(oldp+814593,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12903),2240);
    bufp->fullWData(oldp+814663,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19297),2240);
    bufp->fullWData(oldp+814733,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21219),2240);
    bufp->fullWData(oldp+814803,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37081),2240);
    bufp->fullWData(oldp+814873,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39062),2240);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_506, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40938, 
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
    bufp->fullWData(oldp+814943,(__Vtemp_508),2240);
    __Vtemp_510[0U] = ((((0x39U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x38U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1cU])));
    __Vtemp_510[1U] = ((((0x3bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x3aU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU])));
    __Vtemp_510[2U] = (IData)((((QData)((IData)((((
                                                   (0x3fU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x3eU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x3dU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x3cU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))));
    __Vtemp_510[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x3fU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x3eU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x3dU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x3cU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2224,2096,128, __Vtemp_511, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46439, __Vtemp_510);
    bufp->fullWData(oldp+815013,(__Vtemp_511),2224);
    bufp->fullWData(oldp+815083,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7709),2208);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_512, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10756, 
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
    bufp->fullWData(oldp+815152,(__Vtemp_512),2208);
    bufp->fullWData(oldp+815221,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28150),2208);
    bufp->fullWData(oldp+815290,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30140),2208);
    bufp->fullWData(oldp+815359,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15448),2208);
    bufp->fullWData(oldp+815428,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17370),2208);
    bufp->fullWData(oldp+815497,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12896),2208);
    bufp->fullWData(oldp+815566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19292),2208);
    bufp->fullWData(oldp+815635,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21214),2208);
    bufp->fullWData(oldp+815704,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37076),2208);
    bufp->fullWData(oldp+815773,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39057),2208);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_513, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40938, 
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
    bufp->fullWData(oldp+815842,(__Vtemp_514),2208);
    __Vtemp_515[0U] = ((((0x3bU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x3aU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1dU])));
    __Vtemp_515[1U] = (IData)((((QData)((IData)((((
                                                   (0x3fU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x3eU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x3dU 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x3cU 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))));
    __Vtemp_515[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x3fU 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x3eU 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x3dU 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x3cU 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2192,2096,96, __Vtemp_516, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46439, __Vtemp_515);
    bufp->fullWData(oldp+815911,(__Vtemp_516),2192);
    bufp->fullWData(oldp+815980,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7704),2176);
    bufp->fullWData(oldp+816048,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10756),2176);
    bufp->fullWData(oldp+816116,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28144),2176);
    bufp->fullWData(oldp+816184,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30135),2176);
    bufp->fullWData(oldp+816252,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15443),2176);
    bufp->fullWData(oldp+816320,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17365),2176);
    bufp->fullWData(oldp+816388,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12889),2176);
    bufp->fullWData(oldp+816456,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19287),2176);
    bufp->fullWData(oldp+816524,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21209),2176);
    bufp->fullWData(oldp+816592,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37070),2176);
    bufp->fullWData(oldp+816660,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39052),2176);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_517, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40938, 
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
    bufp->fullWData(oldp+816728,(__Vtemp_517),2176);
    VL_CONCAT_WWQ(2160,2096,64, __Vtemp_518, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46439, 
                  (((QData)((IData)(((((0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                        : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                            << 0x10U) 
                                           | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                              >> 0x10U))) 
                                      << 0x10U) | (0xffffU 
                                                   & ((0x3eU 
                                                       == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                       ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                       : 
                                                      vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU]))))) 
                    << 0x20U) | (QData)((IData)((((
                                                   (0x3dU 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x3cU 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1eU])))))));
    bufp->fullWData(oldp+816796,(__Vtemp_518),2160);
    bufp->fullWData(oldp+816864,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7699),2144);
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_519, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10735, 
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
    bufp->fullWData(oldp+816931,(__Vtemp_521),2144);
    bufp->fullWData(oldp+816998,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28139),2144);
    bufp->fullWData(oldp+817065,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30130),2144);
    bufp->fullWData(oldp+817132,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15438),2144);
    bufp->fullWData(oldp+817199,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17360),2144);
    bufp->fullWData(oldp+817266,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12882),2144);
    bufp->fullWData(oldp+817333,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19282),2144);
    bufp->fullWData(oldp+817400,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21204),2144);
    bufp->fullWData(oldp+817467,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37065),2144);
    bufp->fullWData(oldp+817534,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39047),2144);
    bufp->fullWData(oldp+817601,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40938),2144);
    VL_CONCAT_WWI(2112,2096,16, __Vtemp_522, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46439, 
                  (0xffffU & ((0x3fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                   << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU] 
                                                >> 0x10U)))));
    VL_CONCAT_WWI(2128,2112,16, __Vtemp_523, __Vtemp_522, 
                  (0xffffU & ((0x3eU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                               ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                               : vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x1fU])));
    bufp->fullWData(oldp+817668,(__Vtemp_523),2128);
    bufp->fullWData(oldp+817735,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7694),2112);
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_524, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10735, 
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
    bufp->fullWData(oldp+817801,(__Vtemp_525),2112);
    bufp->fullWData(oldp+817867,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28134),2112);
    bufp->fullWData(oldp+817933,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30125),2112);
    bufp->fullWData(oldp+817999,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15433),2112);
    bufp->fullWData(oldp+818065,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17355),2112);
    bufp->fullWData(oldp+818131,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12875),2112);
    bufp->fullWData(oldp+818197,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19277),2112);
    bufp->fullWData(oldp+818263,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21199),2112);
    bufp->fullWData(oldp+818329,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37060),2112);
    bufp->fullWData(oldp+818395,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39042),2112);
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
        __Vtemp_526[(__Vilp1 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40917[__Vilp1];
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
    bufp->fullWData(oldp+818461,(__Vtemp_528),2112);
    bufp->fullWData(oldp+818527,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46439),2096);
    bufp->fullWData(oldp+818593,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7689),2080);
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_529, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10735, 
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
    bufp->fullWData(oldp+818658,(__Vtemp_529),2080);
    bufp->fullWData(oldp+818723,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28129),2080);
    bufp->fullWData(oldp+818788,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30120),2080);
    bufp->fullWData(oldp+818853,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15428),2080);
    bufp->fullWData(oldp+818918,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17350),2080);
    bufp->fullWData(oldp+818983,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12868),2080);
    bufp->fullWData(oldp+819048,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19272),2080);
    bufp->fullWData(oldp+819113,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21194),2080);
    bufp->fullWData(oldp+819178,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37055),2080);
    bufp->fullWData(oldp+819243,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39037),2080);
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
        __Vtemp_530[(__Vilp2 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40917[__Vilp2];
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
    bufp->fullWData(oldp+819308,(__Vtemp_531),2080);
    __Vtemp_533[0U] = ((((0x43U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x42U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x21U])));
    __Vtemp_533[1U] = ((((0x45U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x44U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U])));
    __Vtemp_533[2U] = (IData)((((QData)((IData)((((
                                                   (0x49U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x48U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x47U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x46U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))));
    __Vtemp_533[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x49U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x48U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x47U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x46U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))) 
                               >> 0x20U));
    VL_CONCAT_WWW(2064,1936,128, __Vtemp_534, vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404, __Vtemp_533);
    bufp->fullWData(oldp+819373,(__Vtemp_534),2064);
    bufp->fullWData(oldp+819438,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7683),2048);
    bufp->fullWData(oldp+819502,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10735),2048);
    bufp->fullWData(oldp+819566,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28123),2048);
    bufp->fullWData(oldp+819630,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30115),2048);
    bufp->fullWData(oldp+819694,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15423),2048);
    bufp->fullWData(oldp+819758,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17345),2048);
    bufp->fullWData(oldp+819822,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12861),2048);
    bufp->fullWData(oldp+819886,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19267),2048);
    bufp->fullWData(oldp+819950,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21189),2048);
    bufp->fullWData(oldp+820014,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37049),2048);
    bufp->fullWData(oldp+820078,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39032),2048);
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
        __Vtemp_535[(__Vilp3 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40917[__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    bufp->fullWData(oldp+820142,(__Vtemp_535),2048);
    __Vtemp_537[0U] = ((((0x45U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x44U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x22U])));
    __Vtemp_537[1U] = (IData)((((QData)((IData)((((
                                                   (0x49U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x48U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x47U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x46U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))));
    __Vtemp_537[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x49U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x48U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x47U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x46U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0x3cU)) {
        __Vtemp_537[(__Vilp4 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    bufp->fullWData(oldp+820206,(__Vtemp_537),2032);
    bufp->fullWData(oldp+820270,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7678),2016);
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
        __Vtemp_540[(__Vilp5 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10715[__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    bufp->fullWData(oldp+820333,(__Vtemp_540),2016);
    bufp->fullWData(oldp+820396,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28118),2016);
    bufp->fullWData(oldp+820459,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30110),2016);
    bufp->fullWData(oldp+820522,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15418),2016);
    bufp->fullWData(oldp+820585,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17340),2016);
    bufp->fullWData(oldp+820648,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12854),2016);
    bufp->fullWData(oldp+820711,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19262),2016);
    bufp->fullWData(oldp+820774,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21184),2016);
    bufp->fullWData(oldp+820837,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37044),2016);
    bufp->fullWData(oldp+820900,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39027),2016);
    bufp->fullWData(oldp+820963,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40917),2016);
    __Vtemp_541[0U] = (IData)((((QData)((IData)((((
                                                   (0x49U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x48U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x47U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x46U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))));
    __Vtemp_541[1U] = (IData)(((((QData)((IData)(((
                                                   ((0x49U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x48U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x47U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x46U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x23U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0x3cU)) {
        __Vtemp_541[(__Vilp6 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    bufp->fullWData(oldp+821026,(__Vtemp_541),2000);
    bufp->fullWData(oldp+821089,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7673),1984);
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
        __Vtemp_543[(__Vilp7 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10715[__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    bufp->fullWData(oldp+821151,(__Vtemp_543),1984);
    bufp->fullWData(oldp+821213,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28113),1984);
    bufp->fullWData(oldp+821275,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30105),1984);
    bufp->fullWData(oldp+821337,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15413),1984);
    bufp->fullWData(oldp+821399,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17335),1984);
    bufp->fullWData(oldp+821461,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12847),1984);
    bufp->fullWData(oldp+821523,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19257),1984);
    bufp->fullWData(oldp+821585,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21179),1984);
    bufp->fullWData(oldp+821647,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37039),1984);
    bufp->fullWData(oldp+821709,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39022),1984);
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
        __Vtemp_546[(__Vilp8 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40897[__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    bufp->fullWData(oldp+821771,(__Vtemp_546),1984);
    __Vtemp_548[0U] = ((((0x49U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x48U 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x24U])));
    __Vtemp_548[1U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0U]));
    __Vtemp_548[2U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[1U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[1U]));
    __Vtemp_548[3U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[2U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[2U]));
    __Vtemp_548[4U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[3U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[3U]));
    __Vtemp_548[5U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[4U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[4U]));
    __Vtemp_548[6U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[5U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[5U]));
    __Vtemp_548[7U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[6U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[6U]));
    __Vtemp_548[8U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[7U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[7U]));
    __Vtemp_548[9U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[8U]) 
                       | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[8U]));
    __Vtemp_548[0xaU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[9U]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[9U]));
    __Vtemp_548[0xbU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xaU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xaU]));
    __Vtemp_548[0xcU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xbU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xbU]));
    __Vtemp_548[0xdU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xcU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xcU]));
    __Vtemp_548[0xeU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xdU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xdU]));
    __Vtemp_548[0xfU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xeU]) 
                         | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xeU]));
    __Vtemp_548[0x10U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xfU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0xfU]));
    __Vtemp_548[0x11U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x10U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x10U]));
    __Vtemp_548[0x12U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x11U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x11U]));
    __Vtemp_548[0x13U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x12U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x12U]));
    __Vtemp_548[0x14U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x13U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x13U]));
    __Vtemp_548[0x15U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x14U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x14U]));
    __Vtemp_548[0x16U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x15U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x15U]));
    __Vtemp_548[0x17U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x16U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x16U]));
    __Vtemp_548[0x18U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x17U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x17U]));
    __Vtemp_548[0x19U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x18U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x18U]));
    __Vtemp_548[0x1aU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x19U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x19U]));
    __Vtemp_548[0x1bU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1aU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1aU]));
    __Vtemp_548[0x1cU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1bU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1bU]));
    __Vtemp_548[0x1dU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1cU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1cU]));
    __Vtemp_548[0x1eU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1dU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1dU]));
    __Vtemp_548[0x1fU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1eU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1eU]));
    __Vtemp_548[0x20U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1fU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x1fU]));
    __Vtemp_548[0x21U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x20U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x20U]));
    __Vtemp_548[0x22U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x21U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x21U]));
    __Vtemp_548[0x23U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x22U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x22U]));
    __Vtemp_548[0x24U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x23U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x23U]));
    __Vtemp_548[0x25U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x24U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x24U]));
    __Vtemp_548[0x26U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x25U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x25U]));
    __Vtemp_548[0x27U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x26U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x26U]));
    __Vtemp_548[0x28U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x27U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x27U]));
    __Vtemp_548[0x29U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x28U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x28U]));
    __Vtemp_548[0x2aU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x29U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x29U]));
    __Vtemp_548[0x2bU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2aU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2aU]));
    __Vtemp_548[0x2cU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2bU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2bU]));
    __Vtemp_548[0x2dU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2cU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2cU]));
    __Vtemp_548[0x2eU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2dU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2dU]));
    __Vtemp_548[0x2fU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2eU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2eU]));
    __Vtemp_548[0x30U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2fU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x2fU]));
    __Vtemp_548[0x31U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x30U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x30U]));
    __Vtemp_548[0x32U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x31U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x31U]));
    __Vtemp_548[0x33U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x32U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x32U]));
    __Vtemp_548[0x34U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x33U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x33U]));
    __Vtemp_548[0x35U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x34U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x34U]));
    __Vtemp_548[0x36U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x35U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x35U]));
    __Vtemp_548[0x37U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x36U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x36U]));
    __Vtemp_548[0x38U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x37U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x37U]));
    __Vtemp_548[0x39U] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x38U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x38U]));
    __Vtemp_548[0x3aU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x39U]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x39U]));
    __Vtemp_548[0x3bU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x3aU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x3aU]));
    __Vtemp_548[0x3cU] = ((0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x3bU]) 
                          | (0xffff0000U & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x3bU]));
    __Vtemp_548[0x3dU] = (0xffffU & vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404[0x3cU]);
    bufp->fullWData(oldp+821833,(__Vtemp_548),1968);
    bufp->fullWData(oldp+821895,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7668),1952);
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
        __Vtemp_549[(__Vilp9 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10715[__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    bufp->fullWData(oldp+821956,(__Vtemp_549),1952);
    bufp->fullWData(oldp+822017,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28108),1952);
    bufp->fullWData(oldp+822078,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30100),1952);
    bufp->fullWData(oldp+822139,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15408),1952);
    bufp->fullWData(oldp+822200,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17330),1952);
    bufp->fullWData(oldp+822261,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12840),1952);
    bufp->fullWData(oldp+822322,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19252),1952);
    bufp->fullWData(oldp+822383,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21174),1952);
    bufp->fullWData(oldp+822444,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37034),1952);
    bufp->fullWData(oldp+822505,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39017),1952);
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
        __Vtemp_551[(__Vilp10 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40897[__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    bufp->fullWData(oldp+822566,(__Vtemp_551),1952);
    bufp->fullWData(oldp+822627,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46404),1936);
    bufp->fullWData(oldp+822688,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7663),1920);
    bufp->fullWData(oldp+822748,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10715),1920);
    bufp->fullWData(oldp+822808,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28102),1920);
    bufp->fullWData(oldp+822868,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30095),1920);
    bufp->fullWData(oldp+822928,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15403),1920);
    bufp->fullWData(oldp+822988,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17325),1920);
    bufp->fullWData(oldp+823048,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12833),1920);
    bufp->fullWData(oldp+823108,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19247),1920);
    bufp->fullWData(oldp+823168,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21169),1920);
    bufp->fullWData(oldp+823228,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37028),1920);
    bufp->fullWData(oldp+823288,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39012),1920);
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
        __Vtemp_552[(__Vilp11 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40897[__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    bufp->fullWData(oldp+823348,(__Vtemp_552),1920);
    __Vtemp_555[0U] = ((((0x4dU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x4cU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x26U])));
    __Vtemp_555[1U] = ((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x4eU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])));
    __Vtemp_555[2U] = (IData)((((QData)((IData)((((
                                                   (0x53U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x52U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x51U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x50U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))));
    __Vtemp_555[3U] = (IData)(((((QData)((IData)(((
                                                   ((0x53U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x52U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x51U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x50U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x37U)) {
        __Vtemp_555[(__Vilp12 + (IData)(4U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46369[__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
    bufp->fullWData(oldp+823408,(__Vtemp_555),1904);
    bufp->fullWData(oldp+823468,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7658),1888);
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
        __Vtemp_558[(__Vilp13 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[__Vilp13];
        __Vilp13 = ((IData)(1U) + __Vilp13);
    }
    bufp->fullWData(oldp+823527,(__Vtemp_558),1888);
    bufp->fullWData(oldp+823586,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28097),1888);
    bufp->fullWData(oldp+823645,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30090),1888);
    bufp->fullWData(oldp+823704,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15398),1888);
    bufp->fullWData(oldp+823763,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17320),1888);
    bufp->fullWData(oldp+823822,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12826),1888);
    bufp->fullWData(oldp+823881,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19242),1888);
    bufp->fullWData(oldp+823940,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21164),1888);
    bufp->fullWData(oldp+823999,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37023),1888);
    bufp->fullWData(oldp+824058,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39007),1888);
    bufp->fullWData(oldp+824117,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40897),1888);
    __Vtemp_560[0U] = ((((0x4fU == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                          ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                          : ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                              << 0x10U) | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U] 
                                           >> 0x10U))) 
                        << 0x10U) | (0xffffU & ((0x4eU 
                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                 : 
                                                vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x27U])));
    __Vtemp_560[1U] = (IData)((((QData)((IData)((((
                                                   (0x53U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x52U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x51U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x50U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))));
    __Vtemp_560[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x53U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x52U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x51U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x50U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp14;
    __Vilp14 = 0U;
    while ((__Vilp14 <= 0x37U)) {
        __Vtemp_560[(__Vilp14 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46369[__Vilp14];
        __Vilp14 = ((IData)(1U) + __Vilp14);
    }
    bufp->fullWData(oldp+824176,(__Vtemp_560),1872);
    bufp->fullWData(oldp+824235,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7653),1856);
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
        __Vtemp_562[(__Vilp15 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[__Vilp15];
        __Vilp15 = ((IData)(1U) + __Vilp15);
    }
    bufp->fullWData(oldp+824293,(__Vtemp_562),1856);
    bufp->fullWData(oldp+824351,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28092),1856);
    bufp->fullWData(oldp+824409,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30085),1856);
    bufp->fullWData(oldp+824467,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15393),1856);
    bufp->fullWData(oldp+824525,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17315),1856);
    bufp->fullWData(oldp+824583,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12819),1856);
    bufp->fullWData(oldp+824641,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19237),1856);
    bufp->fullWData(oldp+824699,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21159),1856);
    bufp->fullWData(oldp+824757,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37018),1856);
    bufp->fullWData(oldp+824815,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d39002),1856);
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
        __Vtemp_565[(__Vilp16 + (IData)(3U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40877[__Vilp16];
        __Vilp16 = ((IData)(1U) + __Vilp16);
    }
    bufp->fullWData(oldp+824873,(__Vtemp_565),1856);
    __Vtemp_566[0U] = (IData)((((QData)((IData)((((
                                                   (0x53U 
                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                    : 
                                                   ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                       >> 0x10U))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & ((0x52U 
                                                        == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                        ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                        : 
                                                       vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x51U 
                                                                == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                : 
                                                               ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                 << 0x10U) 
                                                                | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                   >> 0x10U))) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((0x50U 
                                                                    == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                    ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                    : 
                                                                   vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))));
    __Vtemp_566[1U] = (IData)(((((QData)((IData)(((
                                                   ((0x53U 
                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                     : 
                                                    ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                      << 0x10U) 
                                                     | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U] 
                                                        >> 0x10U))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & ((0x52U 
                                                         == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                         ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                         : 
                                                        vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x29U]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x51U 
                                                                 == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                 ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                 : 
                                                                ((vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                  << 0x10U) 
                                                                 | (vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U] 
                                                                    >> 0x10U))) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((0x50U 
                                                                     == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_collected))
                                                                     ? (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_bram_id_5910_EQ_0_5911_THEN_bram_x_ETC___05F_d45981)
                                                                     : 
                                                                    vlSelfRef.mkTb_COP__DOT__cop__DOT__readback_values[0x28U])))))) 
                               >> 0x20U));
    IData/*31:0*/ __Vilp17;
    __Vilp17 = 0U;
    while ((__Vilp17 <= 0x37U)) {
        __Vtemp_566[(__Vilp17 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_readback_collected_5961_EQ_194_5962_THEN_IF_ETC___05F_d46369[__Vilp17];
        __Vilp17 = ((IData)(1U) + __Vilp17);
    }
    bufp->fullWData(oldp+824931,(__Vtemp_566),1840);
    bufp->fullWData(oldp+824989,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa1_output_row_idx_373_EQ_11_393_THEN_sa1_a_ETC___05F_d7648),1824);
    __Vtemp_567[0U] = ((((0x28U == (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__sa2_output_row_idx))
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
    IData/*31:0*/ __Vilp18;
    __Vilp18 = 0U;
    while ((__Vilp18 <= 0x37U)) {
        __Vtemp_567[(__Vilp18 + (IData)(1U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_sa2_output_row_idx_556_EQ_47_0445_THEN_sa2___05FETC___05F_d10694[__Vilp18];
        __Vilp18 = ((IData)(1U) + __Vilp18);
    }
    bufp->fullWData(oldp+825046,(__Vtemp_567),1824);
    bufp->fullWData(oldp+825103,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d28087),1824);
    bufp->fullWData(oldp+825160,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_cts_e1_collected_7789_EQ_95_7796_THEN_m_ETC___05F_d30080),1824);
    bufp->fullWData(oldp+825217,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_aa_ETC___05F_d15388),1824);
    bufp->fullWData(oldp+825274,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_bb_ETC___05F_d17310),1824);
    bufp->fullWData(oldp+825331,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_pp_ETC___05F_d12812),1824);
    bufp->fullWData(oldp+825388,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d19232),1824);
    bufp->fullWData(oldp+825445,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_load_addr_2409_EQ_768_2412_THEN_bram_ti_ETC___05F_d21154),1824);
    bufp->fullWData(oldp+825502,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d37013),1824);
    bufp->fullWData(oldp+825559,(vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_e1_collected_6724_EQ_95_6731_THEN_m_ETC___05F_d38997),1824);
    __Vtemp_569[0U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
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
    __Vtemp_569[1U] = ((((0x14U == (0x1fU & (IData)(vlSelfRef.mkTb_COP__DOT__cop__DOT__tsc_nts_p_collected)))
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
    IData/*31:0*/ __Vilp19;
    __Vilp19 = 0U;
    while ((__Vilp19 <= 0x36U)) {
        __Vtemp_569[(__Vilp19 + (IData)(2U))] = vlSelfRef.mkTb_COP__DOT__cop__DOT__IF_tsc_nts_p_collected_0638_BITS_4_TO_0_0642_E_ETC___05F_d40877[__Vilp19];
        __Vilp19 = ((IData)(1U) + __Vilp19);
    }
    bufp->fullWData(oldp+825616,(__Vtemp_569),1824);
}
