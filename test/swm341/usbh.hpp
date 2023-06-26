#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_USBH) && (USING_USBH != 0))
namespace PAC {
    namespace USBH {
        namespace TXBUF {
            // TXBUF register
            typedef reg_t<uint32_t, 0x40005000, rw_t<uint32_t>> r_TXBUF_0;
            typedef reg_t<uint32_t, 0x40005004, rw_t<uint32_t>> r_TXBUF_1;
            typedef reg_t<uint32_t, 0x40005008, rw_t<uint32_t>> r_TXBUF_2;
            typedef reg_t<uint32_t, 0x4000500c, rw_t<uint32_t>> r_TXBUF_3;
            typedef reg_t<uint32_t, 0x40005010, rw_t<uint32_t>> r_TXBUF_4;
            typedef reg_t<uint32_t, 0x40005014, rw_t<uint32_t>> r_TXBUF_5;
            typedef reg_t<uint32_t, 0x40005018, rw_t<uint32_t>> r_TXBUF_6;
            typedef reg_t<uint32_t, 0x4000501c, rw_t<uint32_t>> r_TXBUF_7;
            typedef reg_t<uint32_t, 0x40005020, rw_t<uint32_t>> r_TXBUF_8;
            typedef reg_t<uint32_t, 0x40005024, rw_t<uint32_t>> r_TXBUF_9;
            typedef reg_t<uint32_t, 0x40005028, rw_t<uint32_t>> r_TXBUF_10;
            typedef reg_t<uint32_t, 0x4000502c, rw_t<uint32_t>> r_TXBUF_11;
            typedef reg_t<uint32_t, 0x40005030, rw_t<uint32_t>> r_TXBUF_12;
            typedef reg_t<uint32_t, 0x40005034, rw_t<uint32_t>> r_TXBUF_13;
            typedef reg_t<uint32_t, 0x40005038, rw_t<uint32_t>> r_TXBUF_14;
            typedef reg_t<uint32_t, 0x4000503c, rw_t<uint32_t>> r_TXBUF_15;
            typedef reg_t<uint32_t, 0x40005040, rw_t<uint32_t>> r_TXBUF_16;
            typedef reg_t<uint32_t, 0x40005044, rw_t<uint32_t>> r_TXBUF_17;
            typedef reg_t<uint32_t, 0x40005048, rw_t<uint32_t>> r_TXBUF_18;
            typedef reg_t<uint32_t, 0x4000504c, rw_t<uint32_t>> r_TXBUF_19;
            typedef reg_t<uint32_t, 0x40005050, rw_t<uint32_t>> r_TXBUF_20;
            typedef reg_t<uint32_t, 0x40005054, rw_t<uint32_t>> r_TXBUF_21;
            typedef reg_t<uint32_t, 0x40005058, rw_t<uint32_t>> r_TXBUF_22;
            typedef reg_t<uint32_t, 0x4000505c, rw_t<uint32_t>> r_TXBUF_23;
            typedef reg_t<uint32_t, 0x40005060, rw_t<uint32_t>> r_TXBUF_24;
            typedef reg_t<uint32_t, 0x40005064, rw_t<uint32_t>> r_TXBUF_25;
            typedef reg_t<uint32_t, 0x40005068, rw_t<uint32_t>> r_TXBUF_26;
            typedef reg_t<uint32_t, 0x4000506c, rw_t<uint32_t>> r_TXBUF_27;
            typedef reg_t<uint32_t, 0x40005070, rw_t<uint32_t>> r_TXBUF_28;
            typedef reg_t<uint32_t, 0x40005074, rw_t<uint32_t>> r_TXBUF_29;
            typedef reg_t<uint32_t, 0x40005078, rw_t<uint32_t>> r_TXBUF_30;
            typedef reg_t<uint32_t, 0x4000507c, rw_t<uint32_t>> r_TXBUF_31;
            typedef reg_t<uint32_t, 0x40005080, rw_t<uint32_t>> r_TXBUF_32;
            typedef reg_t<uint32_t, 0x40005084, rw_t<uint32_t>> r_TXBUF_33;
            typedef reg_t<uint32_t, 0x40005088, rw_t<uint32_t>> r_TXBUF_34;
            typedef reg_t<uint32_t, 0x4000508c, rw_t<uint32_t>> r_TXBUF_35;
            typedef reg_t<uint32_t, 0x40005090, rw_t<uint32_t>> r_TXBUF_36;
            typedef reg_t<uint32_t, 0x40005094, rw_t<uint32_t>> r_TXBUF_37;
            typedef reg_t<uint32_t, 0x40005098, rw_t<uint32_t>> r_TXBUF_38;
            typedef reg_t<uint32_t, 0x4000509c, rw_t<uint32_t>> r_TXBUF_39;
            typedef reg_t<uint32_t, 0x400050a0, rw_t<uint32_t>> r_TXBUF_40;
            typedef reg_t<uint32_t, 0x400050a4, rw_t<uint32_t>> r_TXBUF_41;
            typedef reg_t<uint32_t, 0x400050a8, rw_t<uint32_t>> r_TXBUF_42;
            typedef reg_t<uint32_t, 0x400050ac, rw_t<uint32_t>> r_TXBUF_43;
            typedef reg_t<uint32_t, 0x400050b0, rw_t<uint32_t>> r_TXBUF_44;
            typedef reg_t<uint32_t, 0x400050b4, rw_t<uint32_t>> r_TXBUF_45;
            typedef reg_t<uint32_t, 0x400050b8, rw_t<uint32_t>> r_TXBUF_46;
            typedef reg_t<uint32_t, 0x400050bc, rw_t<uint32_t>> r_TXBUF_47;
            typedef reg_t<uint32_t, 0x400050c0, rw_t<uint32_t>> r_TXBUF_48;
            typedef reg_t<uint32_t, 0x400050c4, rw_t<uint32_t>> r_TXBUF_49;
            typedef reg_t<uint32_t, 0x400050c8, rw_t<uint32_t>> r_TXBUF_50;
            typedef reg_t<uint32_t, 0x400050cc, rw_t<uint32_t>> r_TXBUF_51;
            typedef reg_t<uint32_t, 0x400050d0, rw_t<uint32_t>> r_TXBUF_52;
            typedef reg_t<uint32_t, 0x400050d4, rw_t<uint32_t>> r_TXBUF_53;
            typedef reg_t<uint32_t, 0x400050d8, rw_t<uint32_t>> r_TXBUF_54;
            typedef reg_t<uint32_t, 0x400050dc, rw_t<uint32_t>> r_TXBUF_55;
            typedef reg_t<uint32_t, 0x400050e0, rw_t<uint32_t>> r_TXBUF_56;
            typedef reg_t<uint32_t, 0x400050e4, rw_t<uint32_t>> r_TXBUF_57;
            typedef reg_t<uint32_t, 0x400050e8, rw_t<uint32_t>> r_TXBUF_58;
            typedef reg_t<uint32_t, 0x400050ec, rw_t<uint32_t>> r_TXBUF_59;
            typedef reg_t<uint32_t, 0x400050f0, rw_t<uint32_t>> r_TXBUF_60;
            typedef reg_t<uint32_t, 0x400050f4, rw_t<uint32_t>> r_TXBUF_61;
            typedef reg_t<uint32_t, 0x400050f8, rw_t<uint32_t>> r_TXBUF_62;
            typedef reg_t<uint32_t, 0x400050fc, rw_t<uint32_t>> r_TXBUF_63;
            typedef reg_t<uint32_t, 0x40005100, rw_t<uint32_t>> r_TXBUF_64;
            typedef reg_t<uint32_t, 0x40005104, rw_t<uint32_t>> r_TXBUF_65;
            typedef reg_t<uint32_t, 0x40005108, rw_t<uint32_t>> r_TXBUF_66;
            typedef reg_t<uint32_t, 0x4000510c, rw_t<uint32_t>> r_TXBUF_67;
            typedef reg_t<uint32_t, 0x40005110, rw_t<uint32_t>> r_TXBUF_68;
            typedef reg_t<uint32_t, 0x40005114, rw_t<uint32_t>> r_TXBUF_69;
            typedef reg_t<uint32_t, 0x40005118, rw_t<uint32_t>> r_TXBUF_70;
            typedef reg_t<uint32_t, 0x4000511c, rw_t<uint32_t>> r_TXBUF_71;
            typedef reg_t<uint32_t, 0x40005120, rw_t<uint32_t>> r_TXBUF_72;
            typedef reg_t<uint32_t, 0x40005124, rw_t<uint32_t>> r_TXBUF_73;
            typedef reg_t<uint32_t, 0x40005128, rw_t<uint32_t>> r_TXBUF_74;
            typedef reg_t<uint32_t, 0x4000512c, rw_t<uint32_t>> r_TXBUF_75;
            typedef reg_t<uint32_t, 0x40005130, rw_t<uint32_t>> r_TXBUF_76;
            typedef reg_t<uint32_t, 0x40005134, rw_t<uint32_t>> r_TXBUF_77;
            typedef reg_t<uint32_t, 0x40005138, rw_t<uint32_t>> r_TXBUF_78;
            typedef reg_t<uint32_t, 0x4000513c, rw_t<uint32_t>> r_TXBUF_79;
            typedef reg_t<uint32_t, 0x40005140, rw_t<uint32_t>> r_TXBUF_80;
            typedef reg_t<uint32_t, 0x40005144, rw_t<uint32_t>> r_TXBUF_81;
            typedef reg_t<uint32_t, 0x40005148, rw_t<uint32_t>> r_TXBUF_82;
            typedef reg_t<uint32_t, 0x4000514c, rw_t<uint32_t>> r_TXBUF_83;
            typedef reg_t<uint32_t, 0x40005150, rw_t<uint32_t>> r_TXBUF_84;
            typedef reg_t<uint32_t, 0x40005154, rw_t<uint32_t>> r_TXBUF_85;
            typedef reg_t<uint32_t, 0x40005158, rw_t<uint32_t>> r_TXBUF_86;
            typedef reg_t<uint32_t, 0x4000515c, rw_t<uint32_t>> r_TXBUF_87;
            typedef reg_t<uint32_t, 0x40005160, rw_t<uint32_t>> r_TXBUF_88;
            typedef reg_t<uint32_t, 0x40005164, rw_t<uint32_t>> r_TXBUF_89;
            typedef reg_t<uint32_t, 0x40005168, rw_t<uint32_t>> r_TXBUF_90;
            typedef reg_t<uint32_t, 0x4000516c, rw_t<uint32_t>> r_TXBUF_91;
            typedef reg_t<uint32_t, 0x40005170, rw_t<uint32_t>> r_TXBUF_92;
            typedef reg_t<uint32_t, 0x40005174, rw_t<uint32_t>> r_TXBUF_93;
            typedef reg_t<uint32_t, 0x40005178, rw_t<uint32_t>> r_TXBUF_94;
            typedef reg_t<uint32_t, 0x4000517c, rw_t<uint32_t>> r_TXBUF_95;
            typedef reg_t<uint32_t, 0x40005180, rw_t<uint32_t>> r_TXBUF_96;
            typedef reg_t<uint32_t, 0x40005184, rw_t<uint32_t>> r_TXBUF_97;
            typedef reg_t<uint32_t, 0x40005188, rw_t<uint32_t>> r_TXBUF_98;
            typedef reg_t<uint32_t, 0x4000518c, rw_t<uint32_t>> r_TXBUF_99;
            typedef reg_t<uint32_t, 0x40005190, rw_t<uint32_t>> r_TXBUF_100;
            typedef reg_t<uint32_t, 0x40005194, rw_t<uint32_t>> r_TXBUF_101;
            typedef reg_t<uint32_t, 0x40005198, rw_t<uint32_t>> r_TXBUF_102;
            typedef reg_t<uint32_t, 0x4000519c, rw_t<uint32_t>> r_TXBUF_103;
            typedef reg_t<uint32_t, 0x400051a0, rw_t<uint32_t>> r_TXBUF_104;
            typedef reg_t<uint32_t, 0x400051a4, rw_t<uint32_t>> r_TXBUF_105;
            typedef reg_t<uint32_t, 0x400051a8, rw_t<uint32_t>> r_TXBUF_106;
            typedef reg_t<uint32_t, 0x400051ac, rw_t<uint32_t>> r_TXBUF_107;
            typedef reg_t<uint32_t, 0x400051b0, rw_t<uint32_t>> r_TXBUF_108;
            typedef reg_t<uint32_t, 0x400051b4, rw_t<uint32_t>> r_TXBUF_109;
            typedef reg_t<uint32_t, 0x400051b8, rw_t<uint32_t>> r_TXBUF_110;
            typedef reg_t<uint32_t, 0x400051bc, rw_t<uint32_t>> r_TXBUF_111;
            typedef reg_t<uint32_t, 0x400051c0, rw_t<uint32_t>> r_TXBUF_112;
            typedef reg_t<uint32_t, 0x400051c4, rw_t<uint32_t>> r_TXBUF_113;
            typedef reg_t<uint32_t, 0x400051c8, rw_t<uint32_t>> r_TXBUF_114;
            typedef reg_t<uint32_t, 0x400051cc, rw_t<uint32_t>> r_TXBUF_115;
            typedef reg_t<uint32_t, 0x400051d0, rw_t<uint32_t>> r_TXBUF_116;
            typedef reg_t<uint32_t, 0x400051d4, rw_t<uint32_t>> r_TXBUF_117;
            typedef reg_t<uint32_t, 0x400051d8, rw_t<uint32_t>> r_TXBUF_118;
            typedef reg_t<uint32_t, 0x400051dc, rw_t<uint32_t>> r_TXBUF_119;
            typedef reg_t<uint32_t, 0x400051e0, rw_t<uint32_t>> r_TXBUF_120;
            typedef reg_t<uint32_t, 0x400051e4, rw_t<uint32_t>> r_TXBUF_121;
            typedef reg_t<uint32_t, 0x400051e8, rw_t<uint32_t>> r_TXBUF_122;
            typedef reg_t<uint32_t, 0x400051ec, rw_t<uint32_t>> r_TXBUF_123;
            typedef reg_t<uint32_t, 0x400051f0, rw_t<uint32_t>> r_TXBUF_124;
            typedef reg_t<uint32_t, 0x400051f4, rw_t<uint32_t>> r_TXBUF_125;
            typedef reg_t<uint32_t, 0x400051f8, rw_t<uint32_t>> r_TXBUF_126;
            typedef reg_t<uint32_t, 0x400051fc, rw_t<uint32_t>> r_TXBUF_127;
            typedef reg_t<uint32_t, 0x40005200, rw_t<uint32_t>> r_TXBUF_128;
            typedef reg_t<uint32_t, 0x40005204, rw_t<uint32_t>> r_TXBUF_129;
            typedef reg_t<uint32_t, 0x40005208, rw_t<uint32_t>> r_TXBUF_130;
            typedef reg_t<uint32_t, 0x4000520c, rw_t<uint32_t>> r_TXBUF_131;
            typedef reg_t<uint32_t, 0x40005210, rw_t<uint32_t>> r_TXBUF_132;
            typedef reg_t<uint32_t, 0x40005214, rw_t<uint32_t>> r_TXBUF_133;
            typedef reg_t<uint32_t, 0x40005218, rw_t<uint32_t>> r_TXBUF_134;
            typedef reg_t<uint32_t, 0x4000521c, rw_t<uint32_t>> r_TXBUF_135;
            typedef reg_t<uint32_t, 0x40005220, rw_t<uint32_t>> r_TXBUF_136;
            typedef reg_t<uint32_t, 0x40005224, rw_t<uint32_t>> r_TXBUF_137;
            typedef reg_t<uint32_t, 0x40005228, rw_t<uint32_t>> r_TXBUF_138;
            typedef reg_t<uint32_t, 0x4000522c, rw_t<uint32_t>> r_TXBUF_139;
            typedef reg_t<uint32_t, 0x40005230, rw_t<uint32_t>> r_TXBUF_140;
            typedef reg_t<uint32_t, 0x40005234, rw_t<uint32_t>> r_TXBUF_141;
            typedef reg_t<uint32_t, 0x40005238, rw_t<uint32_t>> r_TXBUF_142;
            typedef reg_t<uint32_t, 0x4000523c, rw_t<uint32_t>> r_TXBUF_143;
            typedef reg_t<uint32_t, 0x40005240, rw_t<uint32_t>> r_TXBUF_144;
            typedef reg_t<uint32_t, 0x40005244, rw_t<uint32_t>> r_TXBUF_145;
            typedef reg_t<uint32_t, 0x40005248, rw_t<uint32_t>> r_TXBUF_146;
            typedef reg_t<uint32_t, 0x4000524c, rw_t<uint32_t>> r_TXBUF_147;
            typedef reg_t<uint32_t, 0x40005250, rw_t<uint32_t>> r_TXBUF_148;
            typedef reg_t<uint32_t, 0x40005254, rw_t<uint32_t>> r_TXBUF_149;
            typedef reg_t<uint32_t, 0x40005258, rw_t<uint32_t>> r_TXBUF_150;
            typedef reg_t<uint32_t, 0x4000525c, rw_t<uint32_t>> r_TXBUF_151;
            typedef reg_t<uint32_t, 0x40005260, rw_t<uint32_t>> r_TXBUF_152;
            typedef reg_t<uint32_t, 0x40005264, rw_t<uint32_t>> r_TXBUF_153;
            typedef reg_t<uint32_t, 0x40005268, rw_t<uint32_t>> r_TXBUF_154;
            typedef reg_t<uint32_t, 0x4000526c, rw_t<uint32_t>> r_TXBUF_155;
            typedef reg_t<uint32_t, 0x40005270, rw_t<uint32_t>> r_TXBUF_156;
            typedef reg_t<uint32_t, 0x40005274, rw_t<uint32_t>> r_TXBUF_157;
            typedef reg_t<uint32_t, 0x40005278, rw_t<uint32_t>> r_TXBUF_158;
            typedef reg_t<uint32_t, 0x4000527c, rw_t<uint32_t>> r_TXBUF_159;
            typedef reg_t<uint32_t, 0x40005280, rw_t<uint32_t>> r_TXBUF_160;
            typedef reg_t<uint32_t, 0x40005284, rw_t<uint32_t>> r_TXBUF_161;
            typedef reg_t<uint32_t, 0x40005288, rw_t<uint32_t>> r_TXBUF_162;
            typedef reg_t<uint32_t, 0x4000528c, rw_t<uint32_t>> r_TXBUF_163;
            typedef reg_t<uint32_t, 0x40005290, rw_t<uint32_t>> r_TXBUF_164;
            typedef reg_t<uint32_t, 0x40005294, rw_t<uint32_t>> r_TXBUF_165;
            typedef reg_t<uint32_t, 0x40005298, rw_t<uint32_t>> r_TXBUF_166;
            typedef reg_t<uint32_t, 0x4000529c, rw_t<uint32_t>> r_TXBUF_167;
            typedef reg_t<uint32_t, 0x400052a0, rw_t<uint32_t>> r_TXBUF_168;
            typedef reg_t<uint32_t, 0x400052a4, rw_t<uint32_t>> r_TXBUF_169;
            typedef reg_t<uint32_t, 0x400052a8, rw_t<uint32_t>> r_TXBUF_170;
            typedef reg_t<uint32_t, 0x400052ac, rw_t<uint32_t>> r_TXBUF_171;
            typedef reg_t<uint32_t, 0x400052b0, rw_t<uint32_t>> r_TXBUF_172;
            typedef reg_t<uint32_t, 0x400052b4, rw_t<uint32_t>> r_TXBUF_173;
            typedef reg_t<uint32_t, 0x400052b8, rw_t<uint32_t>> r_TXBUF_174;
            typedef reg_t<uint32_t, 0x400052bc, rw_t<uint32_t>> r_TXBUF_175;
            typedef reg_t<uint32_t, 0x400052c0, rw_t<uint32_t>> r_TXBUF_176;
            typedef reg_t<uint32_t, 0x400052c4, rw_t<uint32_t>> r_TXBUF_177;
            typedef reg_t<uint32_t, 0x400052c8, rw_t<uint32_t>> r_TXBUF_178;
            typedef reg_t<uint32_t, 0x400052cc, rw_t<uint32_t>> r_TXBUF_179;
            typedef reg_t<uint32_t, 0x400052d0, rw_t<uint32_t>> r_TXBUF_180;
            typedef reg_t<uint32_t, 0x400052d4, rw_t<uint32_t>> r_TXBUF_181;
            typedef reg_t<uint32_t, 0x400052d8, rw_t<uint32_t>> r_TXBUF_182;
            typedef reg_t<uint32_t, 0x400052dc, rw_t<uint32_t>> r_TXBUF_183;
            typedef reg_t<uint32_t, 0x400052e0, rw_t<uint32_t>> r_TXBUF_184;
            typedef reg_t<uint32_t, 0x400052e4, rw_t<uint32_t>> r_TXBUF_185;
            typedef reg_t<uint32_t, 0x400052e8, rw_t<uint32_t>> r_TXBUF_186;
            typedef reg_t<uint32_t, 0x400052ec, rw_t<uint32_t>> r_TXBUF_187;
            typedef reg_t<uint32_t, 0x400052f0, rw_t<uint32_t>> r_TXBUF_188;
            typedef reg_t<uint32_t, 0x400052f4, rw_t<uint32_t>> r_TXBUF_189;
            typedef reg_t<uint32_t, 0x400052f8, rw_t<uint32_t>> r_TXBUF_190;
            typedef reg_t<uint32_t, 0x400052fc, rw_t<uint32_t>> r_TXBUF_191;
            typedef reg_t<uint32_t, 0x40005300, rw_t<uint32_t>> r_TXBUF_192;
            typedef reg_t<uint32_t, 0x40005304, rw_t<uint32_t>> r_TXBUF_193;
            typedef reg_t<uint32_t, 0x40005308, rw_t<uint32_t>> r_TXBUF_194;
            typedef reg_t<uint32_t, 0x4000530c, rw_t<uint32_t>> r_TXBUF_195;
            typedef reg_t<uint32_t, 0x40005310, rw_t<uint32_t>> r_TXBUF_196;
            typedef reg_t<uint32_t, 0x40005314, rw_t<uint32_t>> r_TXBUF_197;
            typedef reg_t<uint32_t, 0x40005318, rw_t<uint32_t>> r_TXBUF_198;
            typedef reg_t<uint32_t, 0x4000531c, rw_t<uint32_t>> r_TXBUF_199;
            typedef reg_t<uint32_t, 0x40005320, rw_t<uint32_t>> r_TXBUF_200;
            typedef reg_t<uint32_t, 0x40005324, rw_t<uint32_t>> r_TXBUF_201;
            typedef reg_t<uint32_t, 0x40005328, rw_t<uint32_t>> r_TXBUF_202;
            typedef reg_t<uint32_t, 0x4000532c, rw_t<uint32_t>> r_TXBUF_203;
            typedef reg_t<uint32_t, 0x40005330, rw_t<uint32_t>> r_TXBUF_204;
            typedef reg_t<uint32_t, 0x40005334, rw_t<uint32_t>> r_TXBUF_205;
            typedef reg_t<uint32_t, 0x40005338, rw_t<uint32_t>> r_TXBUF_206;
            typedef reg_t<uint32_t, 0x4000533c, rw_t<uint32_t>> r_TXBUF_207;
            typedef reg_t<uint32_t, 0x40005340, rw_t<uint32_t>> r_TXBUF_208;
            typedef reg_t<uint32_t, 0x40005344, rw_t<uint32_t>> r_TXBUF_209;
            typedef reg_t<uint32_t, 0x40005348, rw_t<uint32_t>> r_TXBUF_210;
            typedef reg_t<uint32_t, 0x4000534c, rw_t<uint32_t>> r_TXBUF_211;
            typedef reg_t<uint32_t, 0x40005350, rw_t<uint32_t>> r_TXBUF_212;
            typedef reg_t<uint32_t, 0x40005354, rw_t<uint32_t>> r_TXBUF_213;
            typedef reg_t<uint32_t, 0x40005358, rw_t<uint32_t>> r_TXBUF_214;
            typedef reg_t<uint32_t, 0x4000535c, rw_t<uint32_t>> r_TXBUF_215;
            typedef reg_t<uint32_t, 0x40005360, rw_t<uint32_t>> r_TXBUF_216;
            typedef reg_t<uint32_t, 0x40005364, rw_t<uint32_t>> r_TXBUF_217;
            typedef reg_t<uint32_t, 0x40005368, rw_t<uint32_t>> r_TXBUF_218;
            typedef reg_t<uint32_t, 0x4000536c, rw_t<uint32_t>> r_TXBUF_219;
            typedef reg_t<uint32_t, 0x40005370, rw_t<uint32_t>> r_TXBUF_220;
            typedef reg_t<uint32_t, 0x40005374, rw_t<uint32_t>> r_TXBUF_221;
            typedef reg_t<uint32_t, 0x40005378, rw_t<uint32_t>> r_TXBUF_222;
            typedef reg_t<uint32_t, 0x4000537c, rw_t<uint32_t>> r_TXBUF_223;
            typedef reg_t<uint32_t, 0x40005380, rw_t<uint32_t>> r_TXBUF_224;
            typedef reg_t<uint32_t, 0x40005384, rw_t<uint32_t>> r_TXBUF_225;
            typedef reg_t<uint32_t, 0x40005388, rw_t<uint32_t>> r_TXBUF_226;
            typedef reg_t<uint32_t, 0x4000538c, rw_t<uint32_t>> r_TXBUF_227;
            typedef reg_t<uint32_t, 0x40005390, rw_t<uint32_t>> r_TXBUF_228;
            typedef reg_t<uint32_t, 0x40005394, rw_t<uint32_t>> r_TXBUF_229;
            typedef reg_t<uint32_t, 0x40005398, rw_t<uint32_t>> r_TXBUF_230;
            typedef reg_t<uint32_t, 0x4000539c, rw_t<uint32_t>> r_TXBUF_231;
            typedef reg_t<uint32_t, 0x400053a0, rw_t<uint32_t>> r_TXBUF_232;
            typedef reg_t<uint32_t, 0x400053a4, rw_t<uint32_t>> r_TXBUF_233;
            typedef reg_t<uint32_t, 0x400053a8, rw_t<uint32_t>> r_TXBUF_234;
            typedef reg_t<uint32_t, 0x400053ac, rw_t<uint32_t>> r_TXBUF_235;
            typedef reg_t<uint32_t, 0x400053b0, rw_t<uint32_t>> r_TXBUF_236;
            typedef reg_t<uint32_t, 0x400053b4, rw_t<uint32_t>> r_TXBUF_237;
            typedef reg_t<uint32_t, 0x400053b8, rw_t<uint32_t>> r_TXBUF_238;
            typedef reg_t<uint32_t, 0x400053bc, rw_t<uint32_t>> r_TXBUF_239;
            typedef reg_t<uint32_t, 0x400053c0, rw_t<uint32_t>> r_TXBUF_240;
            typedef reg_t<uint32_t, 0x400053c4, rw_t<uint32_t>> r_TXBUF_241;
            typedef reg_t<uint32_t, 0x400053c8, rw_t<uint32_t>> r_TXBUF_242;
            typedef reg_t<uint32_t, 0x400053cc, rw_t<uint32_t>> r_TXBUF_243;
            typedef reg_t<uint32_t, 0x400053d0, rw_t<uint32_t>> r_TXBUF_244;
            typedef reg_t<uint32_t, 0x400053d4, rw_t<uint32_t>> r_TXBUF_245;
            typedef reg_t<uint32_t, 0x400053d8, rw_t<uint32_t>> r_TXBUF_246;
            typedef reg_t<uint32_t, 0x400053dc, rw_t<uint32_t>> r_TXBUF_247;
            typedef reg_t<uint32_t, 0x400053e0, rw_t<uint32_t>> r_TXBUF_248;
            typedef reg_t<uint32_t, 0x400053e4, rw_t<uint32_t>> r_TXBUF_249;
            typedef reg_t<uint32_t, 0x400053e8, rw_t<uint32_t>> r_TXBUF_250;
            typedef reg_t<uint32_t, 0x400053ec, rw_t<uint32_t>> r_TXBUF_251;
            typedef reg_t<uint32_t, 0x400053f0, rw_t<uint32_t>> r_TXBUF_252;
            typedef reg_t<uint32_t, 0x400053f4, rw_t<uint32_t>> r_TXBUF_253;
            typedef reg_t<uint32_t, 0x400053f8, rw_t<uint32_t>> r_TXBUF_254;
            typedef reg_t<uint32_t, 0x400053fc, rw_t<uint32_t>> r_TXBUF_255;
        } // end of TXBUF[%s]
        namespace RXBUF {
            // RXBUF register
            typedef reg_t<uint32_t, 0x40009000, rw_t<uint32_t>> r_RXBUF_0;
            typedef reg_t<uint32_t, 0x40009004, rw_t<uint32_t>> r_RXBUF_1;
            typedef reg_t<uint32_t, 0x40009008, rw_t<uint32_t>> r_RXBUF_2;
            typedef reg_t<uint32_t, 0x4000900c, rw_t<uint32_t>> r_RXBUF_3;
            typedef reg_t<uint32_t, 0x40009010, rw_t<uint32_t>> r_RXBUF_4;
            typedef reg_t<uint32_t, 0x40009014, rw_t<uint32_t>> r_RXBUF_5;
            typedef reg_t<uint32_t, 0x40009018, rw_t<uint32_t>> r_RXBUF_6;
            typedef reg_t<uint32_t, 0x4000901c, rw_t<uint32_t>> r_RXBUF_7;
            typedef reg_t<uint32_t, 0x40009020, rw_t<uint32_t>> r_RXBUF_8;
            typedef reg_t<uint32_t, 0x40009024, rw_t<uint32_t>> r_RXBUF_9;
            typedef reg_t<uint32_t, 0x40009028, rw_t<uint32_t>> r_RXBUF_10;
            typedef reg_t<uint32_t, 0x4000902c, rw_t<uint32_t>> r_RXBUF_11;
            typedef reg_t<uint32_t, 0x40009030, rw_t<uint32_t>> r_RXBUF_12;
            typedef reg_t<uint32_t, 0x40009034, rw_t<uint32_t>> r_RXBUF_13;
            typedef reg_t<uint32_t, 0x40009038, rw_t<uint32_t>> r_RXBUF_14;
            typedef reg_t<uint32_t, 0x4000903c, rw_t<uint32_t>> r_RXBUF_15;
            typedef reg_t<uint32_t, 0x40009040, rw_t<uint32_t>> r_RXBUF_16;
            typedef reg_t<uint32_t, 0x40009044, rw_t<uint32_t>> r_RXBUF_17;
            typedef reg_t<uint32_t, 0x40009048, rw_t<uint32_t>> r_RXBUF_18;
            typedef reg_t<uint32_t, 0x4000904c, rw_t<uint32_t>> r_RXBUF_19;
            typedef reg_t<uint32_t, 0x40009050, rw_t<uint32_t>> r_RXBUF_20;
            typedef reg_t<uint32_t, 0x40009054, rw_t<uint32_t>> r_RXBUF_21;
            typedef reg_t<uint32_t, 0x40009058, rw_t<uint32_t>> r_RXBUF_22;
            typedef reg_t<uint32_t, 0x4000905c, rw_t<uint32_t>> r_RXBUF_23;
            typedef reg_t<uint32_t, 0x40009060, rw_t<uint32_t>> r_RXBUF_24;
            typedef reg_t<uint32_t, 0x40009064, rw_t<uint32_t>> r_RXBUF_25;
            typedef reg_t<uint32_t, 0x40009068, rw_t<uint32_t>> r_RXBUF_26;
            typedef reg_t<uint32_t, 0x4000906c, rw_t<uint32_t>> r_RXBUF_27;
            typedef reg_t<uint32_t, 0x40009070, rw_t<uint32_t>> r_RXBUF_28;
            typedef reg_t<uint32_t, 0x40009074, rw_t<uint32_t>> r_RXBUF_29;
            typedef reg_t<uint32_t, 0x40009078, rw_t<uint32_t>> r_RXBUF_30;
            typedef reg_t<uint32_t, 0x4000907c, rw_t<uint32_t>> r_RXBUF_31;
            typedef reg_t<uint32_t, 0x40009080, rw_t<uint32_t>> r_RXBUF_32;
            typedef reg_t<uint32_t, 0x40009084, rw_t<uint32_t>> r_RXBUF_33;
            typedef reg_t<uint32_t, 0x40009088, rw_t<uint32_t>> r_RXBUF_34;
            typedef reg_t<uint32_t, 0x4000908c, rw_t<uint32_t>> r_RXBUF_35;
            typedef reg_t<uint32_t, 0x40009090, rw_t<uint32_t>> r_RXBUF_36;
            typedef reg_t<uint32_t, 0x40009094, rw_t<uint32_t>> r_RXBUF_37;
            typedef reg_t<uint32_t, 0x40009098, rw_t<uint32_t>> r_RXBUF_38;
            typedef reg_t<uint32_t, 0x4000909c, rw_t<uint32_t>> r_RXBUF_39;
            typedef reg_t<uint32_t, 0x400090a0, rw_t<uint32_t>> r_RXBUF_40;
            typedef reg_t<uint32_t, 0x400090a4, rw_t<uint32_t>> r_RXBUF_41;
            typedef reg_t<uint32_t, 0x400090a8, rw_t<uint32_t>> r_RXBUF_42;
            typedef reg_t<uint32_t, 0x400090ac, rw_t<uint32_t>> r_RXBUF_43;
            typedef reg_t<uint32_t, 0x400090b0, rw_t<uint32_t>> r_RXBUF_44;
            typedef reg_t<uint32_t, 0x400090b4, rw_t<uint32_t>> r_RXBUF_45;
            typedef reg_t<uint32_t, 0x400090b8, rw_t<uint32_t>> r_RXBUF_46;
            typedef reg_t<uint32_t, 0x400090bc, rw_t<uint32_t>> r_RXBUF_47;
            typedef reg_t<uint32_t, 0x400090c0, rw_t<uint32_t>> r_RXBUF_48;
            typedef reg_t<uint32_t, 0x400090c4, rw_t<uint32_t>> r_RXBUF_49;
            typedef reg_t<uint32_t, 0x400090c8, rw_t<uint32_t>> r_RXBUF_50;
            typedef reg_t<uint32_t, 0x400090cc, rw_t<uint32_t>> r_RXBUF_51;
            typedef reg_t<uint32_t, 0x400090d0, rw_t<uint32_t>> r_RXBUF_52;
            typedef reg_t<uint32_t, 0x400090d4, rw_t<uint32_t>> r_RXBUF_53;
            typedef reg_t<uint32_t, 0x400090d8, rw_t<uint32_t>> r_RXBUF_54;
            typedef reg_t<uint32_t, 0x400090dc, rw_t<uint32_t>> r_RXBUF_55;
            typedef reg_t<uint32_t, 0x400090e0, rw_t<uint32_t>> r_RXBUF_56;
            typedef reg_t<uint32_t, 0x400090e4, rw_t<uint32_t>> r_RXBUF_57;
            typedef reg_t<uint32_t, 0x400090e8, rw_t<uint32_t>> r_RXBUF_58;
            typedef reg_t<uint32_t, 0x400090ec, rw_t<uint32_t>> r_RXBUF_59;
            typedef reg_t<uint32_t, 0x400090f0, rw_t<uint32_t>> r_RXBUF_60;
            typedef reg_t<uint32_t, 0x400090f4, rw_t<uint32_t>> r_RXBUF_61;
            typedef reg_t<uint32_t, 0x400090f8, rw_t<uint32_t>> r_RXBUF_62;
            typedef reg_t<uint32_t, 0x400090fc, rw_t<uint32_t>> r_RXBUF_63;
            typedef reg_t<uint32_t, 0x40009100, rw_t<uint32_t>> r_RXBUF_64;
            typedef reg_t<uint32_t, 0x40009104, rw_t<uint32_t>> r_RXBUF_65;
            typedef reg_t<uint32_t, 0x40009108, rw_t<uint32_t>> r_RXBUF_66;
            typedef reg_t<uint32_t, 0x4000910c, rw_t<uint32_t>> r_RXBUF_67;
            typedef reg_t<uint32_t, 0x40009110, rw_t<uint32_t>> r_RXBUF_68;
            typedef reg_t<uint32_t, 0x40009114, rw_t<uint32_t>> r_RXBUF_69;
            typedef reg_t<uint32_t, 0x40009118, rw_t<uint32_t>> r_RXBUF_70;
            typedef reg_t<uint32_t, 0x4000911c, rw_t<uint32_t>> r_RXBUF_71;
            typedef reg_t<uint32_t, 0x40009120, rw_t<uint32_t>> r_RXBUF_72;
            typedef reg_t<uint32_t, 0x40009124, rw_t<uint32_t>> r_RXBUF_73;
            typedef reg_t<uint32_t, 0x40009128, rw_t<uint32_t>> r_RXBUF_74;
            typedef reg_t<uint32_t, 0x4000912c, rw_t<uint32_t>> r_RXBUF_75;
            typedef reg_t<uint32_t, 0x40009130, rw_t<uint32_t>> r_RXBUF_76;
            typedef reg_t<uint32_t, 0x40009134, rw_t<uint32_t>> r_RXBUF_77;
            typedef reg_t<uint32_t, 0x40009138, rw_t<uint32_t>> r_RXBUF_78;
            typedef reg_t<uint32_t, 0x4000913c, rw_t<uint32_t>> r_RXBUF_79;
            typedef reg_t<uint32_t, 0x40009140, rw_t<uint32_t>> r_RXBUF_80;
            typedef reg_t<uint32_t, 0x40009144, rw_t<uint32_t>> r_RXBUF_81;
            typedef reg_t<uint32_t, 0x40009148, rw_t<uint32_t>> r_RXBUF_82;
            typedef reg_t<uint32_t, 0x4000914c, rw_t<uint32_t>> r_RXBUF_83;
            typedef reg_t<uint32_t, 0x40009150, rw_t<uint32_t>> r_RXBUF_84;
            typedef reg_t<uint32_t, 0x40009154, rw_t<uint32_t>> r_RXBUF_85;
            typedef reg_t<uint32_t, 0x40009158, rw_t<uint32_t>> r_RXBUF_86;
            typedef reg_t<uint32_t, 0x4000915c, rw_t<uint32_t>> r_RXBUF_87;
            typedef reg_t<uint32_t, 0x40009160, rw_t<uint32_t>> r_RXBUF_88;
            typedef reg_t<uint32_t, 0x40009164, rw_t<uint32_t>> r_RXBUF_89;
            typedef reg_t<uint32_t, 0x40009168, rw_t<uint32_t>> r_RXBUF_90;
            typedef reg_t<uint32_t, 0x4000916c, rw_t<uint32_t>> r_RXBUF_91;
            typedef reg_t<uint32_t, 0x40009170, rw_t<uint32_t>> r_RXBUF_92;
            typedef reg_t<uint32_t, 0x40009174, rw_t<uint32_t>> r_RXBUF_93;
            typedef reg_t<uint32_t, 0x40009178, rw_t<uint32_t>> r_RXBUF_94;
            typedef reg_t<uint32_t, 0x4000917c, rw_t<uint32_t>> r_RXBUF_95;
            typedef reg_t<uint32_t, 0x40009180, rw_t<uint32_t>> r_RXBUF_96;
            typedef reg_t<uint32_t, 0x40009184, rw_t<uint32_t>> r_RXBUF_97;
            typedef reg_t<uint32_t, 0x40009188, rw_t<uint32_t>> r_RXBUF_98;
            typedef reg_t<uint32_t, 0x4000918c, rw_t<uint32_t>> r_RXBUF_99;
            typedef reg_t<uint32_t, 0x40009190, rw_t<uint32_t>> r_RXBUF_100;
            typedef reg_t<uint32_t, 0x40009194, rw_t<uint32_t>> r_RXBUF_101;
            typedef reg_t<uint32_t, 0x40009198, rw_t<uint32_t>> r_RXBUF_102;
            typedef reg_t<uint32_t, 0x4000919c, rw_t<uint32_t>> r_RXBUF_103;
            typedef reg_t<uint32_t, 0x400091a0, rw_t<uint32_t>> r_RXBUF_104;
            typedef reg_t<uint32_t, 0x400091a4, rw_t<uint32_t>> r_RXBUF_105;
            typedef reg_t<uint32_t, 0x400091a8, rw_t<uint32_t>> r_RXBUF_106;
            typedef reg_t<uint32_t, 0x400091ac, rw_t<uint32_t>> r_RXBUF_107;
            typedef reg_t<uint32_t, 0x400091b0, rw_t<uint32_t>> r_RXBUF_108;
            typedef reg_t<uint32_t, 0x400091b4, rw_t<uint32_t>> r_RXBUF_109;
            typedef reg_t<uint32_t, 0x400091b8, rw_t<uint32_t>> r_RXBUF_110;
            typedef reg_t<uint32_t, 0x400091bc, rw_t<uint32_t>> r_RXBUF_111;
            typedef reg_t<uint32_t, 0x400091c0, rw_t<uint32_t>> r_RXBUF_112;
            typedef reg_t<uint32_t, 0x400091c4, rw_t<uint32_t>> r_RXBUF_113;
            typedef reg_t<uint32_t, 0x400091c8, rw_t<uint32_t>> r_RXBUF_114;
            typedef reg_t<uint32_t, 0x400091cc, rw_t<uint32_t>> r_RXBUF_115;
            typedef reg_t<uint32_t, 0x400091d0, rw_t<uint32_t>> r_RXBUF_116;
            typedef reg_t<uint32_t, 0x400091d4, rw_t<uint32_t>> r_RXBUF_117;
            typedef reg_t<uint32_t, 0x400091d8, rw_t<uint32_t>> r_RXBUF_118;
            typedef reg_t<uint32_t, 0x400091dc, rw_t<uint32_t>> r_RXBUF_119;
            typedef reg_t<uint32_t, 0x400091e0, rw_t<uint32_t>> r_RXBUF_120;
            typedef reg_t<uint32_t, 0x400091e4, rw_t<uint32_t>> r_RXBUF_121;
            typedef reg_t<uint32_t, 0x400091e8, rw_t<uint32_t>> r_RXBUF_122;
            typedef reg_t<uint32_t, 0x400091ec, rw_t<uint32_t>> r_RXBUF_123;
            typedef reg_t<uint32_t, 0x400091f0, rw_t<uint32_t>> r_RXBUF_124;
            typedef reg_t<uint32_t, 0x400091f4, rw_t<uint32_t>> r_RXBUF_125;
            typedef reg_t<uint32_t, 0x400091f8, rw_t<uint32_t>> r_RXBUF_126;
            typedef reg_t<uint32_t, 0x400091fc, rw_t<uint32_t>> r_RXBUF_127;
            typedef reg_t<uint32_t, 0x40009200, rw_t<uint32_t>> r_RXBUF_128;
            typedef reg_t<uint32_t, 0x40009204, rw_t<uint32_t>> r_RXBUF_129;
            typedef reg_t<uint32_t, 0x40009208, rw_t<uint32_t>> r_RXBUF_130;
            typedef reg_t<uint32_t, 0x4000920c, rw_t<uint32_t>> r_RXBUF_131;
            typedef reg_t<uint32_t, 0x40009210, rw_t<uint32_t>> r_RXBUF_132;
            typedef reg_t<uint32_t, 0x40009214, rw_t<uint32_t>> r_RXBUF_133;
            typedef reg_t<uint32_t, 0x40009218, rw_t<uint32_t>> r_RXBUF_134;
            typedef reg_t<uint32_t, 0x4000921c, rw_t<uint32_t>> r_RXBUF_135;
            typedef reg_t<uint32_t, 0x40009220, rw_t<uint32_t>> r_RXBUF_136;
            typedef reg_t<uint32_t, 0x40009224, rw_t<uint32_t>> r_RXBUF_137;
            typedef reg_t<uint32_t, 0x40009228, rw_t<uint32_t>> r_RXBUF_138;
            typedef reg_t<uint32_t, 0x4000922c, rw_t<uint32_t>> r_RXBUF_139;
            typedef reg_t<uint32_t, 0x40009230, rw_t<uint32_t>> r_RXBUF_140;
            typedef reg_t<uint32_t, 0x40009234, rw_t<uint32_t>> r_RXBUF_141;
            typedef reg_t<uint32_t, 0x40009238, rw_t<uint32_t>> r_RXBUF_142;
            typedef reg_t<uint32_t, 0x4000923c, rw_t<uint32_t>> r_RXBUF_143;
            typedef reg_t<uint32_t, 0x40009240, rw_t<uint32_t>> r_RXBUF_144;
            typedef reg_t<uint32_t, 0x40009244, rw_t<uint32_t>> r_RXBUF_145;
            typedef reg_t<uint32_t, 0x40009248, rw_t<uint32_t>> r_RXBUF_146;
            typedef reg_t<uint32_t, 0x4000924c, rw_t<uint32_t>> r_RXBUF_147;
            typedef reg_t<uint32_t, 0x40009250, rw_t<uint32_t>> r_RXBUF_148;
            typedef reg_t<uint32_t, 0x40009254, rw_t<uint32_t>> r_RXBUF_149;
            typedef reg_t<uint32_t, 0x40009258, rw_t<uint32_t>> r_RXBUF_150;
            typedef reg_t<uint32_t, 0x4000925c, rw_t<uint32_t>> r_RXBUF_151;
            typedef reg_t<uint32_t, 0x40009260, rw_t<uint32_t>> r_RXBUF_152;
            typedef reg_t<uint32_t, 0x40009264, rw_t<uint32_t>> r_RXBUF_153;
            typedef reg_t<uint32_t, 0x40009268, rw_t<uint32_t>> r_RXBUF_154;
            typedef reg_t<uint32_t, 0x4000926c, rw_t<uint32_t>> r_RXBUF_155;
            typedef reg_t<uint32_t, 0x40009270, rw_t<uint32_t>> r_RXBUF_156;
            typedef reg_t<uint32_t, 0x40009274, rw_t<uint32_t>> r_RXBUF_157;
            typedef reg_t<uint32_t, 0x40009278, rw_t<uint32_t>> r_RXBUF_158;
            typedef reg_t<uint32_t, 0x4000927c, rw_t<uint32_t>> r_RXBUF_159;
            typedef reg_t<uint32_t, 0x40009280, rw_t<uint32_t>> r_RXBUF_160;
            typedef reg_t<uint32_t, 0x40009284, rw_t<uint32_t>> r_RXBUF_161;
            typedef reg_t<uint32_t, 0x40009288, rw_t<uint32_t>> r_RXBUF_162;
            typedef reg_t<uint32_t, 0x4000928c, rw_t<uint32_t>> r_RXBUF_163;
            typedef reg_t<uint32_t, 0x40009290, rw_t<uint32_t>> r_RXBUF_164;
            typedef reg_t<uint32_t, 0x40009294, rw_t<uint32_t>> r_RXBUF_165;
            typedef reg_t<uint32_t, 0x40009298, rw_t<uint32_t>> r_RXBUF_166;
            typedef reg_t<uint32_t, 0x4000929c, rw_t<uint32_t>> r_RXBUF_167;
            typedef reg_t<uint32_t, 0x400092a0, rw_t<uint32_t>> r_RXBUF_168;
            typedef reg_t<uint32_t, 0x400092a4, rw_t<uint32_t>> r_RXBUF_169;
            typedef reg_t<uint32_t, 0x400092a8, rw_t<uint32_t>> r_RXBUF_170;
            typedef reg_t<uint32_t, 0x400092ac, rw_t<uint32_t>> r_RXBUF_171;
            typedef reg_t<uint32_t, 0x400092b0, rw_t<uint32_t>> r_RXBUF_172;
            typedef reg_t<uint32_t, 0x400092b4, rw_t<uint32_t>> r_RXBUF_173;
            typedef reg_t<uint32_t, 0x400092b8, rw_t<uint32_t>> r_RXBUF_174;
            typedef reg_t<uint32_t, 0x400092bc, rw_t<uint32_t>> r_RXBUF_175;
            typedef reg_t<uint32_t, 0x400092c0, rw_t<uint32_t>> r_RXBUF_176;
            typedef reg_t<uint32_t, 0x400092c4, rw_t<uint32_t>> r_RXBUF_177;
            typedef reg_t<uint32_t, 0x400092c8, rw_t<uint32_t>> r_RXBUF_178;
            typedef reg_t<uint32_t, 0x400092cc, rw_t<uint32_t>> r_RXBUF_179;
            typedef reg_t<uint32_t, 0x400092d0, rw_t<uint32_t>> r_RXBUF_180;
            typedef reg_t<uint32_t, 0x400092d4, rw_t<uint32_t>> r_RXBUF_181;
            typedef reg_t<uint32_t, 0x400092d8, rw_t<uint32_t>> r_RXBUF_182;
            typedef reg_t<uint32_t, 0x400092dc, rw_t<uint32_t>> r_RXBUF_183;
            typedef reg_t<uint32_t, 0x400092e0, rw_t<uint32_t>> r_RXBUF_184;
            typedef reg_t<uint32_t, 0x400092e4, rw_t<uint32_t>> r_RXBUF_185;
            typedef reg_t<uint32_t, 0x400092e8, rw_t<uint32_t>> r_RXBUF_186;
            typedef reg_t<uint32_t, 0x400092ec, rw_t<uint32_t>> r_RXBUF_187;
            typedef reg_t<uint32_t, 0x400092f0, rw_t<uint32_t>> r_RXBUF_188;
            typedef reg_t<uint32_t, 0x400092f4, rw_t<uint32_t>> r_RXBUF_189;
            typedef reg_t<uint32_t, 0x400092f8, rw_t<uint32_t>> r_RXBUF_190;
            typedef reg_t<uint32_t, 0x400092fc, rw_t<uint32_t>> r_RXBUF_191;
            typedef reg_t<uint32_t, 0x40009300, rw_t<uint32_t>> r_RXBUF_192;
            typedef reg_t<uint32_t, 0x40009304, rw_t<uint32_t>> r_RXBUF_193;
            typedef reg_t<uint32_t, 0x40009308, rw_t<uint32_t>> r_RXBUF_194;
            typedef reg_t<uint32_t, 0x4000930c, rw_t<uint32_t>> r_RXBUF_195;
            typedef reg_t<uint32_t, 0x40009310, rw_t<uint32_t>> r_RXBUF_196;
            typedef reg_t<uint32_t, 0x40009314, rw_t<uint32_t>> r_RXBUF_197;
            typedef reg_t<uint32_t, 0x40009318, rw_t<uint32_t>> r_RXBUF_198;
            typedef reg_t<uint32_t, 0x4000931c, rw_t<uint32_t>> r_RXBUF_199;
            typedef reg_t<uint32_t, 0x40009320, rw_t<uint32_t>> r_RXBUF_200;
            typedef reg_t<uint32_t, 0x40009324, rw_t<uint32_t>> r_RXBUF_201;
            typedef reg_t<uint32_t, 0x40009328, rw_t<uint32_t>> r_RXBUF_202;
            typedef reg_t<uint32_t, 0x4000932c, rw_t<uint32_t>> r_RXBUF_203;
            typedef reg_t<uint32_t, 0x40009330, rw_t<uint32_t>> r_RXBUF_204;
            typedef reg_t<uint32_t, 0x40009334, rw_t<uint32_t>> r_RXBUF_205;
            typedef reg_t<uint32_t, 0x40009338, rw_t<uint32_t>> r_RXBUF_206;
            typedef reg_t<uint32_t, 0x4000933c, rw_t<uint32_t>> r_RXBUF_207;
            typedef reg_t<uint32_t, 0x40009340, rw_t<uint32_t>> r_RXBUF_208;
            typedef reg_t<uint32_t, 0x40009344, rw_t<uint32_t>> r_RXBUF_209;
            typedef reg_t<uint32_t, 0x40009348, rw_t<uint32_t>> r_RXBUF_210;
            typedef reg_t<uint32_t, 0x4000934c, rw_t<uint32_t>> r_RXBUF_211;
            typedef reg_t<uint32_t, 0x40009350, rw_t<uint32_t>> r_RXBUF_212;
            typedef reg_t<uint32_t, 0x40009354, rw_t<uint32_t>> r_RXBUF_213;
            typedef reg_t<uint32_t, 0x40009358, rw_t<uint32_t>> r_RXBUF_214;
            typedef reg_t<uint32_t, 0x4000935c, rw_t<uint32_t>> r_RXBUF_215;
            typedef reg_t<uint32_t, 0x40009360, rw_t<uint32_t>> r_RXBUF_216;
            typedef reg_t<uint32_t, 0x40009364, rw_t<uint32_t>> r_RXBUF_217;
            typedef reg_t<uint32_t, 0x40009368, rw_t<uint32_t>> r_RXBUF_218;
            typedef reg_t<uint32_t, 0x4000936c, rw_t<uint32_t>> r_RXBUF_219;
            typedef reg_t<uint32_t, 0x40009370, rw_t<uint32_t>> r_RXBUF_220;
            typedef reg_t<uint32_t, 0x40009374, rw_t<uint32_t>> r_RXBUF_221;
            typedef reg_t<uint32_t, 0x40009378, rw_t<uint32_t>> r_RXBUF_222;
            typedef reg_t<uint32_t, 0x4000937c, rw_t<uint32_t>> r_RXBUF_223;
            typedef reg_t<uint32_t, 0x40009380, rw_t<uint32_t>> r_RXBUF_224;
            typedef reg_t<uint32_t, 0x40009384, rw_t<uint32_t>> r_RXBUF_225;
            typedef reg_t<uint32_t, 0x40009388, rw_t<uint32_t>> r_RXBUF_226;
            typedef reg_t<uint32_t, 0x4000938c, rw_t<uint32_t>> r_RXBUF_227;
            typedef reg_t<uint32_t, 0x40009390, rw_t<uint32_t>> r_RXBUF_228;
            typedef reg_t<uint32_t, 0x40009394, rw_t<uint32_t>> r_RXBUF_229;
            typedef reg_t<uint32_t, 0x40009398, rw_t<uint32_t>> r_RXBUF_230;
            typedef reg_t<uint32_t, 0x4000939c, rw_t<uint32_t>> r_RXBUF_231;
            typedef reg_t<uint32_t, 0x400093a0, rw_t<uint32_t>> r_RXBUF_232;
            typedef reg_t<uint32_t, 0x400093a4, rw_t<uint32_t>> r_RXBUF_233;
            typedef reg_t<uint32_t, 0x400093a8, rw_t<uint32_t>> r_RXBUF_234;
            typedef reg_t<uint32_t, 0x400093ac, rw_t<uint32_t>> r_RXBUF_235;
            typedef reg_t<uint32_t, 0x400093b0, rw_t<uint32_t>> r_RXBUF_236;
            typedef reg_t<uint32_t, 0x400093b4, rw_t<uint32_t>> r_RXBUF_237;
            typedef reg_t<uint32_t, 0x400093b8, rw_t<uint32_t>> r_RXBUF_238;
            typedef reg_t<uint32_t, 0x400093bc, rw_t<uint32_t>> r_RXBUF_239;
            typedef reg_t<uint32_t, 0x400093c0, rw_t<uint32_t>> r_RXBUF_240;
            typedef reg_t<uint32_t, 0x400093c4, rw_t<uint32_t>> r_RXBUF_241;
            typedef reg_t<uint32_t, 0x400093c8, rw_t<uint32_t>> r_RXBUF_242;
            typedef reg_t<uint32_t, 0x400093cc, rw_t<uint32_t>> r_RXBUF_243;
            typedef reg_t<uint32_t, 0x400093d0, rw_t<uint32_t>> r_RXBUF_244;
            typedef reg_t<uint32_t, 0x400093d4, rw_t<uint32_t>> r_RXBUF_245;
            typedef reg_t<uint32_t, 0x400093d8, rw_t<uint32_t>> r_RXBUF_246;
            typedef reg_t<uint32_t, 0x400093dc, rw_t<uint32_t>> r_RXBUF_247;
            typedef reg_t<uint32_t, 0x400093e0, rw_t<uint32_t>> r_RXBUF_248;
            typedef reg_t<uint32_t, 0x400093e4, rw_t<uint32_t>> r_RXBUF_249;
            typedef reg_t<uint32_t, 0x400093e8, rw_t<uint32_t>> r_RXBUF_250;
            typedef reg_t<uint32_t, 0x400093ec, rw_t<uint32_t>> r_RXBUF_251;
            typedef reg_t<uint32_t, 0x400093f0, rw_t<uint32_t>> r_RXBUF_252;
            typedef reg_t<uint32_t, 0x400093f4, rw_t<uint32_t>> r_RXBUF_253;
            typedef reg_t<uint32_t, 0x400093f8, rw_t<uint32_t>> r_RXBUF_254;
            typedef reg_t<uint32_t, 0x400093fc, rw_t<uint32_t>> r_RXBUF_255;
        } // end of RXBUF[%s]
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x40009c00, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_RXSTAT     = 0x00000001,
                MASK_ABVTHR     = 0x00000002,
                MASK_BLWTHR     = 0x00000004,
                MASK_SOF        = 0x00000008,
                MASK_PORT       = 0x00000100,
                MASK_OTG        = 0x00000200,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RXSTAT     = 0,
                OFFSET_ABVTHR     = 1,
                OFFSET_BLWTHR     = 2,
                OFFSET_SOF        = 3,
                OFFSET_PORT       = 8,
                OFFSET_OTG        = 9,
            }; // endof offset_t
            enum width_t{
                WIDTH_RXSTAT     = 1,
                WIDTH_ABVTHR     = 1,
                WIDTH_BLWTHR     = 1,
                WIDTH_SOF        = 1,
                WIDTH_PORT       = 1,
                WIDTH_OTG        = 1,
            }; // endof width_t
            // RXSTAT field
            typedef field_t<uint32_t, 0x40009c00, 0x1, 0, rw_t<uint32_t>> f_RXSTAT;
            // ABVTHR field
            typedef field_t<uint32_t, 0x40009c00, 0x1, 1, rw_t<uint32_t>> f_ABVTHR;
            // BLWTHR field
            typedef field_t<uint32_t, 0x40009c00, 0x1, 2, rw_t<uint32_t>> f_BLWTHR;
            // SOF field
            typedef field_t<uint32_t, 0x40009c00, 0x1, 3, rw_t<uint32_t>> f_SOF;
            // PORT field
            typedef field_t<uint32_t, 0x40009c00, 0x1, 8, rw_t<uint32_t>> f_PORT;
            // OTG field
            typedef field_t<uint32_t, 0x40009c00, 0x1, 9, rw_t<uint32_t>> f_OTG;
        } // end of IF
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x40009c04, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_RXSTAT     = 0x00000001,
                MASK_ABVTHR     = 0x00000002,
                MASK_BLWTHR     = 0x00000004,
                MASK_SOF        = 0x00000008,
                MASK_PORT       = 0x00000100,
                MASK_OTG        = 0x00000200,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RXSTAT     = 0,
                OFFSET_ABVTHR     = 1,
                OFFSET_BLWTHR     = 2,
                OFFSET_SOF        = 3,
                OFFSET_PORT       = 8,
                OFFSET_OTG        = 9,
            }; // endof offset_t
            enum width_t{
                WIDTH_RXSTAT     = 1,
                WIDTH_ABVTHR     = 1,
                WIDTH_BLWTHR     = 1,
                WIDTH_SOF        = 1,
                WIDTH_PORT       = 1,
                WIDTH_OTG        = 1,
            }; // endof width_t
            // RXSTAT field
            typedef field_t<uint32_t, 0x40009c04, 0x1, 0, rw_t<uint32_t>> f_RXSTAT;
            // ABVTHR field
            typedef field_t<uint32_t, 0x40009c04, 0x1, 1, rw_t<uint32_t>> f_ABVTHR;
            // BLWTHR field
            typedef field_t<uint32_t, 0x40009c04, 0x1, 2, rw_t<uint32_t>> f_BLWTHR;
            // SOF field
            typedef field_t<uint32_t, 0x40009c04, 0x1, 3, rw_t<uint32_t>> f_SOF;
            // PORT field
            typedef field_t<uint32_t, 0x40009c04, 0x1, 8, rw_t<uint32_t>> f_PORT;
            // OTG field
            typedef field_t<uint32_t, 0x40009c04, 0x1, 9, rw_t<uint32_t>> f_OTG;
        } // end of IE
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x40009c08, rw_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_RESP       = 0x00000008,
                MASK_TRSZ       = 0x00002000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RESP       = 0,
                OFFSET_TRSZ       = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_RESP       = 4,
                WIDTH_TRSZ       = 10,
            }; // endof width_t
            // RESP field
            typedef field_t<uint32_t, 0x40009c08, 0xf, 0, rw_t<uint32_t>> f_RESP;
            // TRSZ field
            typedef field_t<uint32_t, 0x40009c08, 0x3ff, 4, rw_t<uint32_t>> f_TRSZ;
        } // end of SR
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x40009c0c, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_FLUSHFF    = 0x00000001,
            }; // endof mask_t
            enum offset_t{
                OFFSET_FLUSHFF    = 0,
            }; // endof offset_t
            enum width_t{
                WIDTH_FLUSHFF    = 1,
            }; // endof width_t
            // FLUSHFF field
            typedef field_t<uint32_t, 0x40009c0c, 0x1, 0, rw_t<uint32_t>> f_FLUSHFF;
        } // end of CR
        namespace FFSZ {
            // FFSZ register
            typedef reg_t<uint32_t, 0x40009c10, rw_t<uint32_t>> r_FFSZ;
            enum mask_t{
                MASK_RX         = 0x00000200,
                MASK_TX         = 0x02000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RX         = 0,
                OFFSET_TX         = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_RX         = 10,
                WIDTH_TX         = 10,
            }; // endof width_t
            // RX field
            typedef field_t<uint32_t, 0x40009c10, 0x3ff, 0, rw_t<uint32_t>> f_RX;
            // TX field
            typedef field_t<uint32_t, 0x40009c10, 0x3ff, 16, rw_t<uint32_t>> f_TX;
        } // end of FFSZ
        namespace FFTHR {
            // FFTHR register
            typedef reg_t<uint32_t, 0x40009c14, rw_t<uint32_t>> r_FFTHR;
            enum mask_t{
                MASK_TX         = 0x00000200,
                MASK_RX         = 0x02000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TX         = 0,
                OFFSET_RX         = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_TX         = 10,
                WIDTH_RX         = 10,
            }; // endof width_t
            // TX field
            typedef field_t<uint32_t, 0x40009c14, 0x3ff, 0, rw_t<uint32_t>> f_TX;
            // RX field
            typedef field_t<uint32_t, 0x40009c14, 0x3ff, 16, rw_t<uint32_t>> f_RX;
        } // end of FFTHR
        namespace TXTRSZ {
            // TXTRSZ register
            typedef reg_t<uint32_t, 0x40009c18, rw_t<uint32_t>> r_TXTRSZ;
        } // end of TXTRSZ
        namespace FRAMEIV {
            // FRAMEIV register
            typedef reg_t<uint32_t, 0x4000a034, rw_t<uint32_t>> r_FRAMEIV;
        } // end of FRAMEIV
        namespace FRAMERM {
            // FRAMERM register
            typedef reg_t<uint32_t, 0x4000a038, rw_t<uint32_t>> r_FRAMERM;
        } // end of FRAMERM
        namespace FRAMENR {
            // FRAMENR register
            typedef reg_t<uint32_t, 0x4000a03c, rw_t<uint32_t>> r_FRAMENR;
        } // end of FRAMENR
        namespace PORTSR {
            // PORTSR register
            typedef reg_t<uint32_t, 0x4000a054, rw_t<uint32_t>> r_PORTSR;
            enum mask_t{
                MASK_CONN       = 0x00000001,
                MASK_ENA        = 0x00000002,
                MASK_SUSP       = 0x00000004,
                MASK_CLRSUSP    = 0x00000008,
                MASK_RESET      = 0x00000010,
                MASK_POWER      = 0x00000100,
                MASK_SPEED      = 0x00000200,
                MASK_CONNCHG    = 0x00010000,
                MASK_ENACHG     = 0x00020000,
                MASK_SUSPCHG    = 0x00040000,
                MASK_RSTCHG     = 0x00100000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CONN       = 0,
                OFFSET_ENA        = 1,
                OFFSET_SUSP       = 2,
                OFFSET_CLRSUSP    = 3,
                OFFSET_RESET      = 4,
                OFFSET_POWER      = 8,
                OFFSET_SPEED      = 9,
                OFFSET_CONNCHG    = 16,
                OFFSET_ENACHG     = 17,
                OFFSET_SUSPCHG    = 18,
                OFFSET_RSTCHG     = 20,
            }; // endof offset_t
            enum width_t{
                WIDTH_CONN       = 1,
                WIDTH_ENA        = 1,
                WIDTH_SUSP       = 1,
                WIDTH_CLRSUSP    = 1,
                WIDTH_RESET      = 1,
                WIDTH_POWER      = 1,
                WIDTH_SPEED      = 1,
                WIDTH_CONNCHG    = 1,
                WIDTH_ENACHG     = 1,
                WIDTH_SUSPCHG    = 1,
                WIDTH_RSTCHG     = 1,
            }; // endof width_t
            // CONN field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 0, rw_t<uint32_t>> f_CONN;
            // ENA field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 1, rw_t<uint32_t>> f_ENA;
            // SUSP field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 2, rw_t<uint32_t>> f_SUSP;
            // CLRSUSP field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 3, rw_t<uint32_t>> f_CLRSUSP;
            // RESET field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 4, rw_t<uint32_t>> f_RESET;
            // POWER field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 8, rw_t<uint32_t>> f_POWER;
            // SPEED field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 9, rw_t<uint32_t>> f_SPEED;
            // CONNCHG field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 16, rw_t<uint32_t>> f_CONNCHG;
            // ENACHG field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 17, rw_t<uint32_t>> f_ENACHG;
            // SUSPCHG field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 18, rw_t<uint32_t>> f_SUSPCHG;
            // RSTCHG field
            typedef field_t<uint32_t, 0x4000a054, 0x1, 20, rw_t<uint32_t>> f_RSTCHG;
        } // end of PORTSR
        namespace TOKEN {
            // TOKEN register
            typedef reg_t<uint32_t, 0x4000a090, rw_t<uint32_t>> r_TOKEN;
            enum mask_t{
                MASK_ADDR       = 0x00000040,
                MASK_EPNR       = 0x00000400,
                MASK_DATAX      = 0x00000800,
                MASK_TYPE       = 0x00010000,
                MASK_ISO        = 0x00020000,
                MASK_SPEED      = 0x00080000,
                MASK_TRSZ       = 0x20000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ADDR       = 0,
                OFFSET_EPNR       = 7,
                OFFSET_DATAX      = 11,
                OFFSET_TYPE       = 13,
                OFFSET_ISO        = 17,
                OFFSET_SPEED      = 18,
                OFFSET_TRSZ       = 20,
            }; // endof offset_t
            enum width_t{
                WIDTH_ADDR       = 7,
                WIDTH_EPNR       = 4,
                WIDTH_DATAX      = 1,
                WIDTH_TYPE       = 4,
                WIDTH_ISO        = 1,
                WIDTH_SPEED      = 2,
                WIDTH_TRSZ       = 10,
            }; // endof width_t
            // ADDR field
            typedef field_t<uint32_t, 0x4000a090, 0x7f, 0, rw_t<uint32_t>> f_ADDR;
            // EPNR field
            typedef field_t<uint32_t, 0x4000a090, 0xf, 7, rw_t<uint32_t>> f_EPNR;
            // DATAX field
            typedef field_t<uint32_t, 0x4000a090, 0x1, 11, rw_t<uint32_t>> f_DATAX;
            // TYPE field
            typedef field_t<uint32_t, 0x4000a090, 0xf, 13, rw_t<uint32_t>> f_TYPE;
            // ISO field
            typedef field_t<uint32_t, 0x4000a090, 0x1, 17, rw_t<uint32_t>> f_ISO;
            // SPEED field
            typedef field_t<uint32_t, 0x4000a090, 0x3, 18, rw_t<uint32_t>> f_SPEED;
            // TRSZ field
            typedef field_t<uint32_t, 0x4000a090, 0x3ff, 20, rw_t<uint32_t>> f_TRSZ;
        } // end of TOKEN
        namespace OTGCSR {
            // OTGCSR register
            typedef reg_t<uint32_t, 0x4000a094, rw_t<uint32_t>> r_OTGCSR;
            enum mask_t{
                MASK_SRSUCC     = 0x00000001,
                MASK_SRSCHG     = 0x00000002,
                MASK_HNSUCC     = 0x00000004,
                MASK_HNSCHG     = 0x00000008,
                MASK_SRDET      = 0x00000010,
                MASK_SRDCHG     = 0x00000020,
                MASK_HNDET      = 0x00000040,
                MASK_HNDCHG     = 0x00000080,
                MASK_ID         = 0x00000100,
                MASK_IDCHG      = 0x00000200,
                MASK_MODE       = 0x00000400,
                MASK_SRPREQ     = 0x00010000,
                MASK_HNPREQ     = 0x00020000,
                MASK_HHNPENA    = 0x00040000,
                MASK_HNPENA     = 0x00080000,
                MASK_SRPCAP     = 0x00100000,
                MASK_HNPCAP     = 0x00200000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SRSUCC     = 0,
                OFFSET_SRSCHG     = 1,
                OFFSET_HNSUCC     = 2,
                OFFSET_HNSCHG     = 3,
                OFFSET_SRDET      = 4,
                OFFSET_SRDCHG     = 5,
                OFFSET_HNDET      = 6,
                OFFSET_HNDCHG     = 7,
                OFFSET_ID         = 8,
                OFFSET_IDCHG      = 9,
                OFFSET_MODE       = 10,
                OFFSET_SRPREQ     = 16,
                OFFSET_HNPREQ     = 17,
                OFFSET_HHNPENA    = 18,
                OFFSET_HNPENA     = 19,
                OFFSET_SRPCAP     = 20,
                OFFSET_HNPCAP     = 21,
            }; // endof offset_t
            enum width_t{
                WIDTH_SRSUCC     = 1,
                WIDTH_SRSCHG     = 1,
                WIDTH_HNSUCC     = 1,
                WIDTH_HNSCHG     = 1,
                WIDTH_SRDET      = 1,
                WIDTH_SRDCHG     = 1,
                WIDTH_HNDET      = 1,
                WIDTH_HNDCHG     = 1,
                WIDTH_ID         = 1,
                WIDTH_IDCHG      = 1,
                WIDTH_MODE       = 1,
                WIDTH_SRPREQ     = 1,
                WIDTH_HNPREQ     = 1,
                WIDTH_HHNPENA    = 1,
                WIDTH_HNPENA     = 1,
                WIDTH_SRPCAP     = 1,
                WIDTH_HNPCAP     = 1,
            }; // endof width_t
            // SRSUCC field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 0, rw_t<uint32_t>> f_SRSUCC;
            // SRSCHG field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 1, rw_t<uint32_t>> f_SRSCHG;
            // HNSUCC field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 2, rw_t<uint32_t>> f_HNSUCC;
            // HNSCHG field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 3, rw_t<uint32_t>> f_HNSCHG;
            // SRDET field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 4, rw_t<uint32_t>> f_SRDET;
            // SRDCHG field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 5, rw_t<uint32_t>> f_SRDCHG;
            // HNDET field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 6, rw_t<uint32_t>> f_HNDET;
            // HNDCHG field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 7, rw_t<uint32_t>> f_HNDCHG;
            // ID field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 8, rw_t<uint32_t>> f_ID;
            // IDCHG field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 9, rw_t<uint32_t>> f_IDCHG;
            // MODE field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 10, rw_t<uint32_t>> f_MODE;
            // SRPREQ field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 16, rw_t<uint32_t>> f_SRPREQ;
            // HNPREQ field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 17, rw_t<uint32_t>> f_HNPREQ;
            // HHNPENA field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 18, rw_t<uint32_t>> f_HHNPENA;
            // HNPENA field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 19, rw_t<uint32_t>> f_HNPENA;
            // SRPCAP field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 20, rw_t<uint32_t>> f_SRPCAP;
            // HNPCAP field
            typedef field_t<uint32_t, 0x4000a094, 0x1, 21, rw_t<uint32_t>> f_HNPCAP;
        } // end of OTGCSR
    } // end of USBH
} // end of PAC
#endif // end of #if USING_USBH
