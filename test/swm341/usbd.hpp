#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_USBD) && (USING_USBD != 0))
namespace PAC {
    namespace USBD {
        namespace TXBUF0_ {
            // TXBUF0_ register
            typedef reg_t<uint32_t, 0x40005000, rw_t<uint32_t>> r_TXBUF0__0;
            typedef reg_t<uint32_t, 0x40005004, rw_t<uint32_t>> r_TXBUF0__1;
            typedef reg_t<uint32_t, 0x40005008, rw_t<uint32_t>> r_TXBUF0__2;
            typedef reg_t<uint32_t, 0x4000500c, rw_t<uint32_t>> r_TXBUF0__3;
            typedef reg_t<uint32_t, 0x40005010, rw_t<uint32_t>> r_TXBUF0__4;
            typedef reg_t<uint32_t, 0x40005014, rw_t<uint32_t>> r_TXBUF0__5;
            typedef reg_t<uint32_t, 0x40005018, rw_t<uint32_t>> r_TXBUF0__6;
            typedef reg_t<uint32_t, 0x4000501c, rw_t<uint32_t>> r_TXBUF0__7;
            typedef reg_t<uint32_t, 0x40005020, rw_t<uint32_t>> r_TXBUF0__8;
            typedef reg_t<uint32_t, 0x40005024, rw_t<uint32_t>> r_TXBUF0__9;
            typedef reg_t<uint32_t, 0x40005028, rw_t<uint32_t>> r_TXBUF0__10;
            typedef reg_t<uint32_t, 0x4000502c, rw_t<uint32_t>> r_TXBUF0__11;
            typedef reg_t<uint32_t, 0x40005030, rw_t<uint32_t>> r_TXBUF0__12;
            typedef reg_t<uint32_t, 0x40005034, rw_t<uint32_t>> r_TXBUF0__13;
            typedef reg_t<uint32_t, 0x40005038, rw_t<uint32_t>> r_TXBUF0__14;
            typedef reg_t<uint32_t, 0x4000503c, rw_t<uint32_t>> r_TXBUF0__15;
            typedef reg_t<uint32_t, 0x40005040, rw_t<uint32_t>> r_TXBUF0__16;
            typedef reg_t<uint32_t, 0x40005044, rw_t<uint32_t>> r_TXBUF0__17;
            typedef reg_t<uint32_t, 0x40005048, rw_t<uint32_t>> r_TXBUF0__18;
            typedef reg_t<uint32_t, 0x4000504c, rw_t<uint32_t>> r_TXBUF0__19;
            typedef reg_t<uint32_t, 0x40005050, rw_t<uint32_t>> r_TXBUF0__20;
            typedef reg_t<uint32_t, 0x40005054, rw_t<uint32_t>> r_TXBUF0__21;
            typedef reg_t<uint32_t, 0x40005058, rw_t<uint32_t>> r_TXBUF0__22;
            typedef reg_t<uint32_t, 0x4000505c, rw_t<uint32_t>> r_TXBUF0__23;
            typedef reg_t<uint32_t, 0x40005060, rw_t<uint32_t>> r_TXBUF0__24;
            typedef reg_t<uint32_t, 0x40005064, rw_t<uint32_t>> r_TXBUF0__25;
            typedef reg_t<uint32_t, 0x40005068, rw_t<uint32_t>> r_TXBUF0__26;
            typedef reg_t<uint32_t, 0x4000506c, rw_t<uint32_t>> r_TXBUF0__27;
            typedef reg_t<uint32_t, 0x40005070, rw_t<uint32_t>> r_TXBUF0__28;
            typedef reg_t<uint32_t, 0x40005074, rw_t<uint32_t>> r_TXBUF0__29;
            typedef reg_t<uint32_t, 0x40005078, rw_t<uint32_t>> r_TXBUF0__30;
            typedef reg_t<uint32_t, 0x4000507c, rw_t<uint32_t>> r_TXBUF0__31;
            typedef reg_t<uint32_t, 0x40005080, rw_t<uint32_t>> r_TXBUF0__32;
            typedef reg_t<uint32_t, 0x40005084, rw_t<uint32_t>> r_TXBUF0__33;
            typedef reg_t<uint32_t, 0x40005088, rw_t<uint32_t>> r_TXBUF0__34;
            typedef reg_t<uint32_t, 0x4000508c, rw_t<uint32_t>> r_TXBUF0__35;
            typedef reg_t<uint32_t, 0x40005090, rw_t<uint32_t>> r_TXBUF0__36;
            typedef reg_t<uint32_t, 0x40005094, rw_t<uint32_t>> r_TXBUF0__37;
            typedef reg_t<uint32_t, 0x40005098, rw_t<uint32_t>> r_TXBUF0__38;
            typedef reg_t<uint32_t, 0x4000509c, rw_t<uint32_t>> r_TXBUF0__39;
            typedef reg_t<uint32_t, 0x400050a0, rw_t<uint32_t>> r_TXBUF0__40;
            typedef reg_t<uint32_t, 0x400050a4, rw_t<uint32_t>> r_TXBUF0__41;
            typedef reg_t<uint32_t, 0x400050a8, rw_t<uint32_t>> r_TXBUF0__42;
            typedef reg_t<uint32_t, 0x400050ac, rw_t<uint32_t>> r_TXBUF0__43;
            typedef reg_t<uint32_t, 0x400050b0, rw_t<uint32_t>> r_TXBUF0__44;
            typedef reg_t<uint32_t, 0x400050b4, rw_t<uint32_t>> r_TXBUF0__45;
            typedef reg_t<uint32_t, 0x400050b8, rw_t<uint32_t>> r_TXBUF0__46;
            typedef reg_t<uint32_t, 0x400050bc, rw_t<uint32_t>> r_TXBUF0__47;
            typedef reg_t<uint32_t, 0x400050c0, rw_t<uint32_t>> r_TXBUF0__48;
            typedef reg_t<uint32_t, 0x400050c4, rw_t<uint32_t>> r_TXBUF0__49;
            typedef reg_t<uint32_t, 0x400050c8, rw_t<uint32_t>> r_TXBUF0__50;
            typedef reg_t<uint32_t, 0x400050cc, rw_t<uint32_t>> r_TXBUF0__51;
            typedef reg_t<uint32_t, 0x400050d0, rw_t<uint32_t>> r_TXBUF0__52;
            typedef reg_t<uint32_t, 0x400050d4, rw_t<uint32_t>> r_TXBUF0__53;
            typedef reg_t<uint32_t, 0x400050d8, rw_t<uint32_t>> r_TXBUF0__54;
            typedef reg_t<uint32_t, 0x400050dc, rw_t<uint32_t>> r_TXBUF0__55;
            typedef reg_t<uint32_t, 0x400050e0, rw_t<uint32_t>> r_TXBUF0__56;
            typedef reg_t<uint32_t, 0x400050e4, rw_t<uint32_t>> r_TXBUF0__57;
            typedef reg_t<uint32_t, 0x400050e8, rw_t<uint32_t>> r_TXBUF0__58;
            typedef reg_t<uint32_t, 0x400050ec, rw_t<uint32_t>> r_TXBUF0__59;
            typedef reg_t<uint32_t, 0x400050f0, rw_t<uint32_t>> r_TXBUF0__60;
            typedef reg_t<uint32_t, 0x400050f4, rw_t<uint32_t>> r_TXBUF0__61;
            typedef reg_t<uint32_t, 0x400050f8, rw_t<uint32_t>> r_TXBUF0__62;
            typedef reg_t<uint32_t, 0x400050fc, rw_t<uint32_t>> r_TXBUF0__63;
            typedef reg_t<uint32_t, 0x40005100, rw_t<uint32_t>> r_TXBUF0__64;
            typedef reg_t<uint32_t, 0x40005104, rw_t<uint32_t>> r_TXBUF0__65;
            typedef reg_t<uint32_t, 0x40005108, rw_t<uint32_t>> r_TXBUF0__66;
            typedef reg_t<uint32_t, 0x4000510c, rw_t<uint32_t>> r_TXBUF0__67;
            typedef reg_t<uint32_t, 0x40005110, rw_t<uint32_t>> r_TXBUF0__68;
            typedef reg_t<uint32_t, 0x40005114, rw_t<uint32_t>> r_TXBUF0__69;
            typedef reg_t<uint32_t, 0x40005118, rw_t<uint32_t>> r_TXBUF0__70;
            typedef reg_t<uint32_t, 0x4000511c, rw_t<uint32_t>> r_TXBUF0__71;
            typedef reg_t<uint32_t, 0x40005120, rw_t<uint32_t>> r_TXBUF0__72;
            typedef reg_t<uint32_t, 0x40005124, rw_t<uint32_t>> r_TXBUF0__73;
            typedef reg_t<uint32_t, 0x40005128, rw_t<uint32_t>> r_TXBUF0__74;
            typedef reg_t<uint32_t, 0x4000512c, rw_t<uint32_t>> r_TXBUF0__75;
            typedef reg_t<uint32_t, 0x40005130, rw_t<uint32_t>> r_TXBUF0__76;
            typedef reg_t<uint32_t, 0x40005134, rw_t<uint32_t>> r_TXBUF0__77;
            typedef reg_t<uint32_t, 0x40005138, rw_t<uint32_t>> r_TXBUF0__78;
            typedef reg_t<uint32_t, 0x4000513c, rw_t<uint32_t>> r_TXBUF0__79;
            typedef reg_t<uint32_t, 0x40005140, rw_t<uint32_t>> r_TXBUF0__80;
            typedef reg_t<uint32_t, 0x40005144, rw_t<uint32_t>> r_TXBUF0__81;
            typedef reg_t<uint32_t, 0x40005148, rw_t<uint32_t>> r_TXBUF0__82;
            typedef reg_t<uint32_t, 0x4000514c, rw_t<uint32_t>> r_TXBUF0__83;
            typedef reg_t<uint32_t, 0x40005150, rw_t<uint32_t>> r_TXBUF0__84;
            typedef reg_t<uint32_t, 0x40005154, rw_t<uint32_t>> r_TXBUF0__85;
            typedef reg_t<uint32_t, 0x40005158, rw_t<uint32_t>> r_TXBUF0__86;
            typedef reg_t<uint32_t, 0x4000515c, rw_t<uint32_t>> r_TXBUF0__87;
            typedef reg_t<uint32_t, 0x40005160, rw_t<uint32_t>> r_TXBUF0__88;
            typedef reg_t<uint32_t, 0x40005164, rw_t<uint32_t>> r_TXBUF0__89;
            typedef reg_t<uint32_t, 0x40005168, rw_t<uint32_t>> r_TXBUF0__90;
            typedef reg_t<uint32_t, 0x4000516c, rw_t<uint32_t>> r_TXBUF0__91;
            typedef reg_t<uint32_t, 0x40005170, rw_t<uint32_t>> r_TXBUF0__92;
            typedef reg_t<uint32_t, 0x40005174, rw_t<uint32_t>> r_TXBUF0__93;
            typedef reg_t<uint32_t, 0x40005178, rw_t<uint32_t>> r_TXBUF0__94;
            typedef reg_t<uint32_t, 0x4000517c, rw_t<uint32_t>> r_TXBUF0__95;
            typedef reg_t<uint32_t, 0x40005180, rw_t<uint32_t>> r_TXBUF0__96;
            typedef reg_t<uint32_t, 0x40005184, rw_t<uint32_t>> r_TXBUF0__97;
            typedef reg_t<uint32_t, 0x40005188, rw_t<uint32_t>> r_TXBUF0__98;
            typedef reg_t<uint32_t, 0x4000518c, rw_t<uint32_t>> r_TXBUF0__99;
            typedef reg_t<uint32_t, 0x40005190, rw_t<uint32_t>> r_TXBUF0__100;
            typedef reg_t<uint32_t, 0x40005194, rw_t<uint32_t>> r_TXBUF0__101;
            typedef reg_t<uint32_t, 0x40005198, rw_t<uint32_t>> r_TXBUF0__102;
            typedef reg_t<uint32_t, 0x4000519c, rw_t<uint32_t>> r_TXBUF0__103;
            typedef reg_t<uint32_t, 0x400051a0, rw_t<uint32_t>> r_TXBUF0__104;
            typedef reg_t<uint32_t, 0x400051a4, rw_t<uint32_t>> r_TXBUF0__105;
            typedef reg_t<uint32_t, 0x400051a8, rw_t<uint32_t>> r_TXBUF0__106;
            typedef reg_t<uint32_t, 0x400051ac, rw_t<uint32_t>> r_TXBUF0__107;
            typedef reg_t<uint32_t, 0x400051b0, rw_t<uint32_t>> r_TXBUF0__108;
            typedef reg_t<uint32_t, 0x400051b4, rw_t<uint32_t>> r_TXBUF0__109;
            typedef reg_t<uint32_t, 0x400051b8, rw_t<uint32_t>> r_TXBUF0__110;
            typedef reg_t<uint32_t, 0x400051bc, rw_t<uint32_t>> r_TXBUF0__111;
            typedef reg_t<uint32_t, 0x400051c0, rw_t<uint32_t>> r_TXBUF0__112;
            typedef reg_t<uint32_t, 0x400051c4, rw_t<uint32_t>> r_TXBUF0__113;
            typedef reg_t<uint32_t, 0x400051c8, rw_t<uint32_t>> r_TXBUF0__114;
            typedef reg_t<uint32_t, 0x400051cc, rw_t<uint32_t>> r_TXBUF0__115;
            typedef reg_t<uint32_t, 0x400051d0, rw_t<uint32_t>> r_TXBUF0__116;
            typedef reg_t<uint32_t, 0x400051d4, rw_t<uint32_t>> r_TXBUF0__117;
            typedef reg_t<uint32_t, 0x400051d8, rw_t<uint32_t>> r_TXBUF0__118;
            typedef reg_t<uint32_t, 0x400051dc, rw_t<uint32_t>> r_TXBUF0__119;
            typedef reg_t<uint32_t, 0x400051e0, rw_t<uint32_t>> r_TXBUF0__120;
            typedef reg_t<uint32_t, 0x400051e4, rw_t<uint32_t>> r_TXBUF0__121;
            typedef reg_t<uint32_t, 0x400051e8, rw_t<uint32_t>> r_TXBUF0__122;
            typedef reg_t<uint32_t, 0x400051ec, rw_t<uint32_t>> r_TXBUF0__123;
            typedef reg_t<uint32_t, 0x400051f0, rw_t<uint32_t>> r_TXBUF0__124;
            typedef reg_t<uint32_t, 0x400051f4, rw_t<uint32_t>> r_TXBUF0__125;
            typedef reg_t<uint32_t, 0x400051f8, rw_t<uint32_t>> r_TXBUF0__126;
            typedef reg_t<uint32_t, 0x400051fc, rw_t<uint32_t>> r_TXBUF0__127;
            typedef reg_t<uint32_t, 0x40005200, rw_t<uint32_t>> r_TXBUF0__128;
            typedef reg_t<uint32_t, 0x40005204, rw_t<uint32_t>> r_TXBUF0__129;
            typedef reg_t<uint32_t, 0x40005208, rw_t<uint32_t>> r_TXBUF0__130;
            typedef reg_t<uint32_t, 0x4000520c, rw_t<uint32_t>> r_TXBUF0__131;
            typedef reg_t<uint32_t, 0x40005210, rw_t<uint32_t>> r_TXBUF0__132;
            typedef reg_t<uint32_t, 0x40005214, rw_t<uint32_t>> r_TXBUF0__133;
            typedef reg_t<uint32_t, 0x40005218, rw_t<uint32_t>> r_TXBUF0__134;
            typedef reg_t<uint32_t, 0x4000521c, rw_t<uint32_t>> r_TXBUF0__135;
            typedef reg_t<uint32_t, 0x40005220, rw_t<uint32_t>> r_TXBUF0__136;
            typedef reg_t<uint32_t, 0x40005224, rw_t<uint32_t>> r_TXBUF0__137;
            typedef reg_t<uint32_t, 0x40005228, rw_t<uint32_t>> r_TXBUF0__138;
            typedef reg_t<uint32_t, 0x4000522c, rw_t<uint32_t>> r_TXBUF0__139;
            typedef reg_t<uint32_t, 0x40005230, rw_t<uint32_t>> r_TXBUF0__140;
            typedef reg_t<uint32_t, 0x40005234, rw_t<uint32_t>> r_TXBUF0__141;
            typedef reg_t<uint32_t, 0x40005238, rw_t<uint32_t>> r_TXBUF0__142;
            typedef reg_t<uint32_t, 0x4000523c, rw_t<uint32_t>> r_TXBUF0__143;
            typedef reg_t<uint32_t, 0x40005240, rw_t<uint32_t>> r_TXBUF0__144;
            typedef reg_t<uint32_t, 0x40005244, rw_t<uint32_t>> r_TXBUF0__145;
            typedef reg_t<uint32_t, 0x40005248, rw_t<uint32_t>> r_TXBUF0__146;
            typedef reg_t<uint32_t, 0x4000524c, rw_t<uint32_t>> r_TXBUF0__147;
            typedef reg_t<uint32_t, 0x40005250, rw_t<uint32_t>> r_TXBUF0__148;
            typedef reg_t<uint32_t, 0x40005254, rw_t<uint32_t>> r_TXBUF0__149;
            typedef reg_t<uint32_t, 0x40005258, rw_t<uint32_t>> r_TXBUF0__150;
            typedef reg_t<uint32_t, 0x4000525c, rw_t<uint32_t>> r_TXBUF0__151;
            typedef reg_t<uint32_t, 0x40005260, rw_t<uint32_t>> r_TXBUF0__152;
            typedef reg_t<uint32_t, 0x40005264, rw_t<uint32_t>> r_TXBUF0__153;
            typedef reg_t<uint32_t, 0x40005268, rw_t<uint32_t>> r_TXBUF0__154;
            typedef reg_t<uint32_t, 0x4000526c, rw_t<uint32_t>> r_TXBUF0__155;
            typedef reg_t<uint32_t, 0x40005270, rw_t<uint32_t>> r_TXBUF0__156;
            typedef reg_t<uint32_t, 0x40005274, rw_t<uint32_t>> r_TXBUF0__157;
            typedef reg_t<uint32_t, 0x40005278, rw_t<uint32_t>> r_TXBUF0__158;
            typedef reg_t<uint32_t, 0x4000527c, rw_t<uint32_t>> r_TXBUF0__159;
            typedef reg_t<uint32_t, 0x40005280, rw_t<uint32_t>> r_TXBUF0__160;
            typedef reg_t<uint32_t, 0x40005284, rw_t<uint32_t>> r_TXBUF0__161;
            typedef reg_t<uint32_t, 0x40005288, rw_t<uint32_t>> r_TXBUF0__162;
            typedef reg_t<uint32_t, 0x4000528c, rw_t<uint32_t>> r_TXBUF0__163;
            typedef reg_t<uint32_t, 0x40005290, rw_t<uint32_t>> r_TXBUF0__164;
            typedef reg_t<uint32_t, 0x40005294, rw_t<uint32_t>> r_TXBUF0__165;
            typedef reg_t<uint32_t, 0x40005298, rw_t<uint32_t>> r_TXBUF0__166;
            typedef reg_t<uint32_t, 0x4000529c, rw_t<uint32_t>> r_TXBUF0__167;
            typedef reg_t<uint32_t, 0x400052a0, rw_t<uint32_t>> r_TXBUF0__168;
            typedef reg_t<uint32_t, 0x400052a4, rw_t<uint32_t>> r_TXBUF0__169;
            typedef reg_t<uint32_t, 0x400052a8, rw_t<uint32_t>> r_TXBUF0__170;
            typedef reg_t<uint32_t, 0x400052ac, rw_t<uint32_t>> r_TXBUF0__171;
            typedef reg_t<uint32_t, 0x400052b0, rw_t<uint32_t>> r_TXBUF0__172;
            typedef reg_t<uint32_t, 0x400052b4, rw_t<uint32_t>> r_TXBUF0__173;
            typedef reg_t<uint32_t, 0x400052b8, rw_t<uint32_t>> r_TXBUF0__174;
            typedef reg_t<uint32_t, 0x400052bc, rw_t<uint32_t>> r_TXBUF0__175;
            typedef reg_t<uint32_t, 0x400052c0, rw_t<uint32_t>> r_TXBUF0__176;
            typedef reg_t<uint32_t, 0x400052c4, rw_t<uint32_t>> r_TXBUF0__177;
            typedef reg_t<uint32_t, 0x400052c8, rw_t<uint32_t>> r_TXBUF0__178;
            typedef reg_t<uint32_t, 0x400052cc, rw_t<uint32_t>> r_TXBUF0__179;
            typedef reg_t<uint32_t, 0x400052d0, rw_t<uint32_t>> r_TXBUF0__180;
            typedef reg_t<uint32_t, 0x400052d4, rw_t<uint32_t>> r_TXBUF0__181;
            typedef reg_t<uint32_t, 0x400052d8, rw_t<uint32_t>> r_TXBUF0__182;
            typedef reg_t<uint32_t, 0x400052dc, rw_t<uint32_t>> r_TXBUF0__183;
            typedef reg_t<uint32_t, 0x400052e0, rw_t<uint32_t>> r_TXBUF0__184;
            typedef reg_t<uint32_t, 0x400052e4, rw_t<uint32_t>> r_TXBUF0__185;
            typedef reg_t<uint32_t, 0x400052e8, rw_t<uint32_t>> r_TXBUF0__186;
            typedef reg_t<uint32_t, 0x400052ec, rw_t<uint32_t>> r_TXBUF0__187;
            typedef reg_t<uint32_t, 0x400052f0, rw_t<uint32_t>> r_TXBUF0__188;
            typedef reg_t<uint32_t, 0x400052f4, rw_t<uint32_t>> r_TXBUF0__189;
            typedef reg_t<uint32_t, 0x400052f8, rw_t<uint32_t>> r_TXBUF0__190;
            typedef reg_t<uint32_t, 0x400052fc, rw_t<uint32_t>> r_TXBUF0__191;
            typedef reg_t<uint32_t, 0x40005300, rw_t<uint32_t>> r_TXBUF0__192;
            typedef reg_t<uint32_t, 0x40005304, rw_t<uint32_t>> r_TXBUF0__193;
            typedef reg_t<uint32_t, 0x40005308, rw_t<uint32_t>> r_TXBUF0__194;
            typedef reg_t<uint32_t, 0x4000530c, rw_t<uint32_t>> r_TXBUF0__195;
            typedef reg_t<uint32_t, 0x40005310, rw_t<uint32_t>> r_TXBUF0__196;
            typedef reg_t<uint32_t, 0x40005314, rw_t<uint32_t>> r_TXBUF0__197;
            typedef reg_t<uint32_t, 0x40005318, rw_t<uint32_t>> r_TXBUF0__198;
            typedef reg_t<uint32_t, 0x4000531c, rw_t<uint32_t>> r_TXBUF0__199;
            typedef reg_t<uint32_t, 0x40005320, rw_t<uint32_t>> r_TXBUF0__200;
            typedef reg_t<uint32_t, 0x40005324, rw_t<uint32_t>> r_TXBUF0__201;
            typedef reg_t<uint32_t, 0x40005328, rw_t<uint32_t>> r_TXBUF0__202;
            typedef reg_t<uint32_t, 0x4000532c, rw_t<uint32_t>> r_TXBUF0__203;
            typedef reg_t<uint32_t, 0x40005330, rw_t<uint32_t>> r_TXBUF0__204;
            typedef reg_t<uint32_t, 0x40005334, rw_t<uint32_t>> r_TXBUF0__205;
            typedef reg_t<uint32_t, 0x40005338, rw_t<uint32_t>> r_TXBUF0__206;
            typedef reg_t<uint32_t, 0x4000533c, rw_t<uint32_t>> r_TXBUF0__207;
            typedef reg_t<uint32_t, 0x40005340, rw_t<uint32_t>> r_TXBUF0__208;
            typedef reg_t<uint32_t, 0x40005344, rw_t<uint32_t>> r_TXBUF0__209;
            typedef reg_t<uint32_t, 0x40005348, rw_t<uint32_t>> r_TXBUF0__210;
            typedef reg_t<uint32_t, 0x4000534c, rw_t<uint32_t>> r_TXBUF0__211;
            typedef reg_t<uint32_t, 0x40005350, rw_t<uint32_t>> r_TXBUF0__212;
            typedef reg_t<uint32_t, 0x40005354, rw_t<uint32_t>> r_TXBUF0__213;
            typedef reg_t<uint32_t, 0x40005358, rw_t<uint32_t>> r_TXBUF0__214;
            typedef reg_t<uint32_t, 0x4000535c, rw_t<uint32_t>> r_TXBUF0__215;
            typedef reg_t<uint32_t, 0x40005360, rw_t<uint32_t>> r_TXBUF0__216;
            typedef reg_t<uint32_t, 0x40005364, rw_t<uint32_t>> r_TXBUF0__217;
            typedef reg_t<uint32_t, 0x40005368, rw_t<uint32_t>> r_TXBUF0__218;
            typedef reg_t<uint32_t, 0x4000536c, rw_t<uint32_t>> r_TXBUF0__219;
            typedef reg_t<uint32_t, 0x40005370, rw_t<uint32_t>> r_TXBUF0__220;
            typedef reg_t<uint32_t, 0x40005374, rw_t<uint32_t>> r_TXBUF0__221;
            typedef reg_t<uint32_t, 0x40005378, rw_t<uint32_t>> r_TXBUF0__222;
            typedef reg_t<uint32_t, 0x4000537c, rw_t<uint32_t>> r_TXBUF0__223;
            typedef reg_t<uint32_t, 0x40005380, rw_t<uint32_t>> r_TXBUF0__224;
            typedef reg_t<uint32_t, 0x40005384, rw_t<uint32_t>> r_TXBUF0__225;
            typedef reg_t<uint32_t, 0x40005388, rw_t<uint32_t>> r_TXBUF0__226;
            typedef reg_t<uint32_t, 0x4000538c, rw_t<uint32_t>> r_TXBUF0__227;
            typedef reg_t<uint32_t, 0x40005390, rw_t<uint32_t>> r_TXBUF0__228;
            typedef reg_t<uint32_t, 0x40005394, rw_t<uint32_t>> r_TXBUF0__229;
            typedef reg_t<uint32_t, 0x40005398, rw_t<uint32_t>> r_TXBUF0__230;
            typedef reg_t<uint32_t, 0x4000539c, rw_t<uint32_t>> r_TXBUF0__231;
            typedef reg_t<uint32_t, 0x400053a0, rw_t<uint32_t>> r_TXBUF0__232;
            typedef reg_t<uint32_t, 0x400053a4, rw_t<uint32_t>> r_TXBUF0__233;
            typedef reg_t<uint32_t, 0x400053a8, rw_t<uint32_t>> r_TXBUF0__234;
            typedef reg_t<uint32_t, 0x400053ac, rw_t<uint32_t>> r_TXBUF0__235;
            typedef reg_t<uint32_t, 0x400053b0, rw_t<uint32_t>> r_TXBUF0__236;
            typedef reg_t<uint32_t, 0x400053b4, rw_t<uint32_t>> r_TXBUF0__237;
            typedef reg_t<uint32_t, 0x400053b8, rw_t<uint32_t>> r_TXBUF0__238;
            typedef reg_t<uint32_t, 0x400053bc, rw_t<uint32_t>> r_TXBUF0__239;
            typedef reg_t<uint32_t, 0x400053c0, rw_t<uint32_t>> r_TXBUF0__240;
            typedef reg_t<uint32_t, 0x400053c4, rw_t<uint32_t>> r_TXBUF0__241;
            typedef reg_t<uint32_t, 0x400053c8, rw_t<uint32_t>> r_TXBUF0__242;
            typedef reg_t<uint32_t, 0x400053cc, rw_t<uint32_t>> r_TXBUF0__243;
            typedef reg_t<uint32_t, 0x400053d0, rw_t<uint32_t>> r_TXBUF0__244;
            typedef reg_t<uint32_t, 0x400053d4, rw_t<uint32_t>> r_TXBUF0__245;
            typedef reg_t<uint32_t, 0x400053d8, rw_t<uint32_t>> r_TXBUF0__246;
            typedef reg_t<uint32_t, 0x400053dc, rw_t<uint32_t>> r_TXBUF0__247;
            typedef reg_t<uint32_t, 0x400053e0, rw_t<uint32_t>> r_TXBUF0__248;
            typedef reg_t<uint32_t, 0x400053e4, rw_t<uint32_t>> r_TXBUF0__249;
            typedef reg_t<uint32_t, 0x400053e8, rw_t<uint32_t>> r_TXBUF0__250;
            typedef reg_t<uint32_t, 0x400053ec, rw_t<uint32_t>> r_TXBUF0__251;
            typedef reg_t<uint32_t, 0x400053f0, rw_t<uint32_t>> r_TXBUF0__252;
            typedef reg_t<uint32_t, 0x400053f4, rw_t<uint32_t>> r_TXBUF0__253;
            typedef reg_t<uint32_t, 0x400053f8, rw_t<uint32_t>> r_TXBUF0__254;
            typedef reg_t<uint32_t, 0x400053fc, rw_t<uint32_t>> r_TXBUF0__255;
        } // end of TXBUF0_[%s]
        namespace TXBUF1_ {
            // TXBUF1_ register
            typedef reg_t<uint32_t, 0x40005400, rw_t<uint32_t>> r_TXBUF1__0;
            typedef reg_t<uint32_t, 0x40005404, rw_t<uint32_t>> r_TXBUF1__1;
            typedef reg_t<uint32_t, 0x40005408, rw_t<uint32_t>> r_TXBUF1__2;
            typedef reg_t<uint32_t, 0x4000540c, rw_t<uint32_t>> r_TXBUF1__3;
            typedef reg_t<uint32_t, 0x40005410, rw_t<uint32_t>> r_TXBUF1__4;
            typedef reg_t<uint32_t, 0x40005414, rw_t<uint32_t>> r_TXBUF1__5;
            typedef reg_t<uint32_t, 0x40005418, rw_t<uint32_t>> r_TXBUF1__6;
            typedef reg_t<uint32_t, 0x4000541c, rw_t<uint32_t>> r_TXBUF1__7;
            typedef reg_t<uint32_t, 0x40005420, rw_t<uint32_t>> r_TXBUF1__8;
            typedef reg_t<uint32_t, 0x40005424, rw_t<uint32_t>> r_TXBUF1__9;
            typedef reg_t<uint32_t, 0x40005428, rw_t<uint32_t>> r_TXBUF1__10;
            typedef reg_t<uint32_t, 0x4000542c, rw_t<uint32_t>> r_TXBUF1__11;
            typedef reg_t<uint32_t, 0x40005430, rw_t<uint32_t>> r_TXBUF1__12;
            typedef reg_t<uint32_t, 0x40005434, rw_t<uint32_t>> r_TXBUF1__13;
            typedef reg_t<uint32_t, 0x40005438, rw_t<uint32_t>> r_TXBUF1__14;
            typedef reg_t<uint32_t, 0x4000543c, rw_t<uint32_t>> r_TXBUF1__15;
            typedef reg_t<uint32_t, 0x40005440, rw_t<uint32_t>> r_TXBUF1__16;
            typedef reg_t<uint32_t, 0x40005444, rw_t<uint32_t>> r_TXBUF1__17;
            typedef reg_t<uint32_t, 0x40005448, rw_t<uint32_t>> r_TXBUF1__18;
            typedef reg_t<uint32_t, 0x4000544c, rw_t<uint32_t>> r_TXBUF1__19;
            typedef reg_t<uint32_t, 0x40005450, rw_t<uint32_t>> r_TXBUF1__20;
            typedef reg_t<uint32_t, 0x40005454, rw_t<uint32_t>> r_TXBUF1__21;
            typedef reg_t<uint32_t, 0x40005458, rw_t<uint32_t>> r_TXBUF1__22;
            typedef reg_t<uint32_t, 0x4000545c, rw_t<uint32_t>> r_TXBUF1__23;
            typedef reg_t<uint32_t, 0x40005460, rw_t<uint32_t>> r_TXBUF1__24;
            typedef reg_t<uint32_t, 0x40005464, rw_t<uint32_t>> r_TXBUF1__25;
            typedef reg_t<uint32_t, 0x40005468, rw_t<uint32_t>> r_TXBUF1__26;
            typedef reg_t<uint32_t, 0x4000546c, rw_t<uint32_t>> r_TXBUF1__27;
            typedef reg_t<uint32_t, 0x40005470, rw_t<uint32_t>> r_TXBUF1__28;
            typedef reg_t<uint32_t, 0x40005474, rw_t<uint32_t>> r_TXBUF1__29;
            typedef reg_t<uint32_t, 0x40005478, rw_t<uint32_t>> r_TXBUF1__30;
            typedef reg_t<uint32_t, 0x4000547c, rw_t<uint32_t>> r_TXBUF1__31;
            typedef reg_t<uint32_t, 0x40005480, rw_t<uint32_t>> r_TXBUF1__32;
            typedef reg_t<uint32_t, 0x40005484, rw_t<uint32_t>> r_TXBUF1__33;
            typedef reg_t<uint32_t, 0x40005488, rw_t<uint32_t>> r_TXBUF1__34;
            typedef reg_t<uint32_t, 0x4000548c, rw_t<uint32_t>> r_TXBUF1__35;
            typedef reg_t<uint32_t, 0x40005490, rw_t<uint32_t>> r_TXBUF1__36;
            typedef reg_t<uint32_t, 0x40005494, rw_t<uint32_t>> r_TXBUF1__37;
            typedef reg_t<uint32_t, 0x40005498, rw_t<uint32_t>> r_TXBUF1__38;
            typedef reg_t<uint32_t, 0x4000549c, rw_t<uint32_t>> r_TXBUF1__39;
            typedef reg_t<uint32_t, 0x400054a0, rw_t<uint32_t>> r_TXBUF1__40;
            typedef reg_t<uint32_t, 0x400054a4, rw_t<uint32_t>> r_TXBUF1__41;
            typedef reg_t<uint32_t, 0x400054a8, rw_t<uint32_t>> r_TXBUF1__42;
            typedef reg_t<uint32_t, 0x400054ac, rw_t<uint32_t>> r_TXBUF1__43;
            typedef reg_t<uint32_t, 0x400054b0, rw_t<uint32_t>> r_TXBUF1__44;
            typedef reg_t<uint32_t, 0x400054b4, rw_t<uint32_t>> r_TXBUF1__45;
            typedef reg_t<uint32_t, 0x400054b8, rw_t<uint32_t>> r_TXBUF1__46;
            typedef reg_t<uint32_t, 0x400054bc, rw_t<uint32_t>> r_TXBUF1__47;
            typedef reg_t<uint32_t, 0x400054c0, rw_t<uint32_t>> r_TXBUF1__48;
            typedef reg_t<uint32_t, 0x400054c4, rw_t<uint32_t>> r_TXBUF1__49;
            typedef reg_t<uint32_t, 0x400054c8, rw_t<uint32_t>> r_TXBUF1__50;
            typedef reg_t<uint32_t, 0x400054cc, rw_t<uint32_t>> r_TXBUF1__51;
            typedef reg_t<uint32_t, 0x400054d0, rw_t<uint32_t>> r_TXBUF1__52;
            typedef reg_t<uint32_t, 0x400054d4, rw_t<uint32_t>> r_TXBUF1__53;
            typedef reg_t<uint32_t, 0x400054d8, rw_t<uint32_t>> r_TXBUF1__54;
            typedef reg_t<uint32_t, 0x400054dc, rw_t<uint32_t>> r_TXBUF1__55;
            typedef reg_t<uint32_t, 0x400054e0, rw_t<uint32_t>> r_TXBUF1__56;
            typedef reg_t<uint32_t, 0x400054e4, rw_t<uint32_t>> r_TXBUF1__57;
            typedef reg_t<uint32_t, 0x400054e8, rw_t<uint32_t>> r_TXBUF1__58;
            typedef reg_t<uint32_t, 0x400054ec, rw_t<uint32_t>> r_TXBUF1__59;
            typedef reg_t<uint32_t, 0x400054f0, rw_t<uint32_t>> r_TXBUF1__60;
            typedef reg_t<uint32_t, 0x400054f4, rw_t<uint32_t>> r_TXBUF1__61;
            typedef reg_t<uint32_t, 0x400054f8, rw_t<uint32_t>> r_TXBUF1__62;
            typedef reg_t<uint32_t, 0x400054fc, rw_t<uint32_t>> r_TXBUF1__63;
            typedef reg_t<uint32_t, 0x40005500, rw_t<uint32_t>> r_TXBUF1__64;
            typedef reg_t<uint32_t, 0x40005504, rw_t<uint32_t>> r_TXBUF1__65;
            typedef reg_t<uint32_t, 0x40005508, rw_t<uint32_t>> r_TXBUF1__66;
            typedef reg_t<uint32_t, 0x4000550c, rw_t<uint32_t>> r_TXBUF1__67;
            typedef reg_t<uint32_t, 0x40005510, rw_t<uint32_t>> r_TXBUF1__68;
            typedef reg_t<uint32_t, 0x40005514, rw_t<uint32_t>> r_TXBUF1__69;
            typedef reg_t<uint32_t, 0x40005518, rw_t<uint32_t>> r_TXBUF1__70;
            typedef reg_t<uint32_t, 0x4000551c, rw_t<uint32_t>> r_TXBUF1__71;
            typedef reg_t<uint32_t, 0x40005520, rw_t<uint32_t>> r_TXBUF1__72;
            typedef reg_t<uint32_t, 0x40005524, rw_t<uint32_t>> r_TXBUF1__73;
            typedef reg_t<uint32_t, 0x40005528, rw_t<uint32_t>> r_TXBUF1__74;
            typedef reg_t<uint32_t, 0x4000552c, rw_t<uint32_t>> r_TXBUF1__75;
            typedef reg_t<uint32_t, 0x40005530, rw_t<uint32_t>> r_TXBUF1__76;
            typedef reg_t<uint32_t, 0x40005534, rw_t<uint32_t>> r_TXBUF1__77;
            typedef reg_t<uint32_t, 0x40005538, rw_t<uint32_t>> r_TXBUF1__78;
            typedef reg_t<uint32_t, 0x4000553c, rw_t<uint32_t>> r_TXBUF1__79;
            typedef reg_t<uint32_t, 0x40005540, rw_t<uint32_t>> r_TXBUF1__80;
            typedef reg_t<uint32_t, 0x40005544, rw_t<uint32_t>> r_TXBUF1__81;
            typedef reg_t<uint32_t, 0x40005548, rw_t<uint32_t>> r_TXBUF1__82;
            typedef reg_t<uint32_t, 0x4000554c, rw_t<uint32_t>> r_TXBUF1__83;
            typedef reg_t<uint32_t, 0x40005550, rw_t<uint32_t>> r_TXBUF1__84;
            typedef reg_t<uint32_t, 0x40005554, rw_t<uint32_t>> r_TXBUF1__85;
            typedef reg_t<uint32_t, 0x40005558, rw_t<uint32_t>> r_TXBUF1__86;
            typedef reg_t<uint32_t, 0x4000555c, rw_t<uint32_t>> r_TXBUF1__87;
            typedef reg_t<uint32_t, 0x40005560, rw_t<uint32_t>> r_TXBUF1__88;
            typedef reg_t<uint32_t, 0x40005564, rw_t<uint32_t>> r_TXBUF1__89;
            typedef reg_t<uint32_t, 0x40005568, rw_t<uint32_t>> r_TXBUF1__90;
            typedef reg_t<uint32_t, 0x4000556c, rw_t<uint32_t>> r_TXBUF1__91;
            typedef reg_t<uint32_t, 0x40005570, rw_t<uint32_t>> r_TXBUF1__92;
            typedef reg_t<uint32_t, 0x40005574, rw_t<uint32_t>> r_TXBUF1__93;
            typedef reg_t<uint32_t, 0x40005578, rw_t<uint32_t>> r_TXBUF1__94;
            typedef reg_t<uint32_t, 0x4000557c, rw_t<uint32_t>> r_TXBUF1__95;
            typedef reg_t<uint32_t, 0x40005580, rw_t<uint32_t>> r_TXBUF1__96;
            typedef reg_t<uint32_t, 0x40005584, rw_t<uint32_t>> r_TXBUF1__97;
            typedef reg_t<uint32_t, 0x40005588, rw_t<uint32_t>> r_TXBUF1__98;
            typedef reg_t<uint32_t, 0x4000558c, rw_t<uint32_t>> r_TXBUF1__99;
            typedef reg_t<uint32_t, 0x40005590, rw_t<uint32_t>> r_TXBUF1__100;
            typedef reg_t<uint32_t, 0x40005594, rw_t<uint32_t>> r_TXBUF1__101;
            typedef reg_t<uint32_t, 0x40005598, rw_t<uint32_t>> r_TXBUF1__102;
            typedef reg_t<uint32_t, 0x4000559c, rw_t<uint32_t>> r_TXBUF1__103;
            typedef reg_t<uint32_t, 0x400055a0, rw_t<uint32_t>> r_TXBUF1__104;
            typedef reg_t<uint32_t, 0x400055a4, rw_t<uint32_t>> r_TXBUF1__105;
            typedef reg_t<uint32_t, 0x400055a8, rw_t<uint32_t>> r_TXBUF1__106;
            typedef reg_t<uint32_t, 0x400055ac, rw_t<uint32_t>> r_TXBUF1__107;
            typedef reg_t<uint32_t, 0x400055b0, rw_t<uint32_t>> r_TXBUF1__108;
            typedef reg_t<uint32_t, 0x400055b4, rw_t<uint32_t>> r_TXBUF1__109;
            typedef reg_t<uint32_t, 0x400055b8, rw_t<uint32_t>> r_TXBUF1__110;
            typedef reg_t<uint32_t, 0x400055bc, rw_t<uint32_t>> r_TXBUF1__111;
            typedef reg_t<uint32_t, 0x400055c0, rw_t<uint32_t>> r_TXBUF1__112;
            typedef reg_t<uint32_t, 0x400055c4, rw_t<uint32_t>> r_TXBUF1__113;
            typedef reg_t<uint32_t, 0x400055c8, rw_t<uint32_t>> r_TXBUF1__114;
            typedef reg_t<uint32_t, 0x400055cc, rw_t<uint32_t>> r_TXBUF1__115;
            typedef reg_t<uint32_t, 0x400055d0, rw_t<uint32_t>> r_TXBUF1__116;
            typedef reg_t<uint32_t, 0x400055d4, rw_t<uint32_t>> r_TXBUF1__117;
            typedef reg_t<uint32_t, 0x400055d8, rw_t<uint32_t>> r_TXBUF1__118;
            typedef reg_t<uint32_t, 0x400055dc, rw_t<uint32_t>> r_TXBUF1__119;
            typedef reg_t<uint32_t, 0x400055e0, rw_t<uint32_t>> r_TXBUF1__120;
            typedef reg_t<uint32_t, 0x400055e4, rw_t<uint32_t>> r_TXBUF1__121;
            typedef reg_t<uint32_t, 0x400055e8, rw_t<uint32_t>> r_TXBUF1__122;
            typedef reg_t<uint32_t, 0x400055ec, rw_t<uint32_t>> r_TXBUF1__123;
            typedef reg_t<uint32_t, 0x400055f0, rw_t<uint32_t>> r_TXBUF1__124;
            typedef reg_t<uint32_t, 0x400055f4, rw_t<uint32_t>> r_TXBUF1__125;
            typedef reg_t<uint32_t, 0x400055f8, rw_t<uint32_t>> r_TXBUF1__126;
            typedef reg_t<uint32_t, 0x400055fc, rw_t<uint32_t>> r_TXBUF1__127;
            typedef reg_t<uint32_t, 0x40005600, rw_t<uint32_t>> r_TXBUF1__128;
            typedef reg_t<uint32_t, 0x40005604, rw_t<uint32_t>> r_TXBUF1__129;
            typedef reg_t<uint32_t, 0x40005608, rw_t<uint32_t>> r_TXBUF1__130;
            typedef reg_t<uint32_t, 0x4000560c, rw_t<uint32_t>> r_TXBUF1__131;
            typedef reg_t<uint32_t, 0x40005610, rw_t<uint32_t>> r_TXBUF1__132;
            typedef reg_t<uint32_t, 0x40005614, rw_t<uint32_t>> r_TXBUF1__133;
            typedef reg_t<uint32_t, 0x40005618, rw_t<uint32_t>> r_TXBUF1__134;
            typedef reg_t<uint32_t, 0x4000561c, rw_t<uint32_t>> r_TXBUF1__135;
            typedef reg_t<uint32_t, 0x40005620, rw_t<uint32_t>> r_TXBUF1__136;
            typedef reg_t<uint32_t, 0x40005624, rw_t<uint32_t>> r_TXBUF1__137;
            typedef reg_t<uint32_t, 0x40005628, rw_t<uint32_t>> r_TXBUF1__138;
            typedef reg_t<uint32_t, 0x4000562c, rw_t<uint32_t>> r_TXBUF1__139;
            typedef reg_t<uint32_t, 0x40005630, rw_t<uint32_t>> r_TXBUF1__140;
            typedef reg_t<uint32_t, 0x40005634, rw_t<uint32_t>> r_TXBUF1__141;
            typedef reg_t<uint32_t, 0x40005638, rw_t<uint32_t>> r_TXBUF1__142;
            typedef reg_t<uint32_t, 0x4000563c, rw_t<uint32_t>> r_TXBUF1__143;
            typedef reg_t<uint32_t, 0x40005640, rw_t<uint32_t>> r_TXBUF1__144;
            typedef reg_t<uint32_t, 0x40005644, rw_t<uint32_t>> r_TXBUF1__145;
            typedef reg_t<uint32_t, 0x40005648, rw_t<uint32_t>> r_TXBUF1__146;
            typedef reg_t<uint32_t, 0x4000564c, rw_t<uint32_t>> r_TXBUF1__147;
            typedef reg_t<uint32_t, 0x40005650, rw_t<uint32_t>> r_TXBUF1__148;
            typedef reg_t<uint32_t, 0x40005654, rw_t<uint32_t>> r_TXBUF1__149;
            typedef reg_t<uint32_t, 0x40005658, rw_t<uint32_t>> r_TXBUF1__150;
            typedef reg_t<uint32_t, 0x4000565c, rw_t<uint32_t>> r_TXBUF1__151;
            typedef reg_t<uint32_t, 0x40005660, rw_t<uint32_t>> r_TXBUF1__152;
            typedef reg_t<uint32_t, 0x40005664, rw_t<uint32_t>> r_TXBUF1__153;
            typedef reg_t<uint32_t, 0x40005668, rw_t<uint32_t>> r_TXBUF1__154;
            typedef reg_t<uint32_t, 0x4000566c, rw_t<uint32_t>> r_TXBUF1__155;
            typedef reg_t<uint32_t, 0x40005670, rw_t<uint32_t>> r_TXBUF1__156;
            typedef reg_t<uint32_t, 0x40005674, rw_t<uint32_t>> r_TXBUF1__157;
            typedef reg_t<uint32_t, 0x40005678, rw_t<uint32_t>> r_TXBUF1__158;
            typedef reg_t<uint32_t, 0x4000567c, rw_t<uint32_t>> r_TXBUF1__159;
            typedef reg_t<uint32_t, 0x40005680, rw_t<uint32_t>> r_TXBUF1__160;
            typedef reg_t<uint32_t, 0x40005684, rw_t<uint32_t>> r_TXBUF1__161;
            typedef reg_t<uint32_t, 0x40005688, rw_t<uint32_t>> r_TXBUF1__162;
            typedef reg_t<uint32_t, 0x4000568c, rw_t<uint32_t>> r_TXBUF1__163;
            typedef reg_t<uint32_t, 0x40005690, rw_t<uint32_t>> r_TXBUF1__164;
            typedef reg_t<uint32_t, 0x40005694, rw_t<uint32_t>> r_TXBUF1__165;
            typedef reg_t<uint32_t, 0x40005698, rw_t<uint32_t>> r_TXBUF1__166;
            typedef reg_t<uint32_t, 0x4000569c, rw_t<uint32_t>> r_TXBUF1__167;
            typedef reg_t<uint32_t, 0x400056a0, rw_t<uint32_t>> r_TXBUF1__168;
            typedef reg_t<uint32_t, 0x400056a4, rw_t<uint32_t>> r_TXBUF1__169;
            typedef reg_t<uint32_t, 0x400056a8, rw_t<uint32_t>> r_TXBUF1__170;
            typedef reg_t<uint32_t, 0x400056ac, rw_t<uint32_t>> r_TXBUF1__171;
            typedef reg_t<uint32_t, 0x400056b0, rw_t<uint32_t>> r_TXBUF1__172;
            typedef reg_t<uint32_t, 0x400056b4, rw_t<uint32_t>> r_TXBUF1__173;
            typedef reg_t<uint32_t, 0x400056b8, rw_t<uint32_t>> r_TXBUF1__174;
            typedef reg_t<uint32_t, 0x400056bc, rw_t<uint32_t>> r_TXBUF1__175;
            typedef reg_t<uint32_t, 0x400056c0, rw_t<uint32_t>> r_TXBUF1__176;
            typedef reg_t<uint32_t, 0x400056c4, rw_t<uint32_t>> r_TXBUF1__177;
            typedef reg_t<uint32_t, 0x400056c8, rw_t<uint32_t>> r_TXBUF1__178;
            typedef reg_t<uint32_t, 0x400056cc, rw_t<uint32_t>> r_TXBUF1__179;
            typedef reg_t<uint32_t, 0x400056d0, rw_t<uint32_t>> r_TXBUF1__180;
            typedef reg_t<uint32_t, 0x400056d4, rw_t<uint32_t>> r_TXBUF1__181;
            typedef reg_t<uint32_t, 0x400056d8, rw_t<uint32_t>> r_TXBUF1__182;
            typedef reg_t<uint32_t, 0x400056dc, rw_t<uint32_t>> r_TXBUF1__183;
            typedef reg_t<uint32_t, 0x400056e0, rw_t<uint32_t>> r_TXBUF1__184;
            typedef reg_t<uint32_t, 0x400056e4, rw_t<uint32_t>> r_TXBUF1__185;
            typedef reg_t<uint32_t, 0x400056e8, rw_t<uint32_t>> r_TXBUF1__186;
            typedef reg_t<uint32_t, 0x400056ec, rw_t<uint32_t>> r_TXBUF1__187;
            typedef reg_t<uint32_t, 0x400056f0, rw_t<uint32_t>> r_TXBUF1__188;
            typedef reg_t<uint32_t, 0x400056f4, rw_t<uint32_t>> r_TXBUF1__189;
            typedef reg_t<uint32_t, 0x400056f8, rw_t<uint32_t>> r_TXBUF1__190;
            typedef reg_t<uint32_t, 0x400056fc, rw_t<uint32_t>> r_TXBUF1__191;
            typedef reg_t<uint32_t, 0x40005700, rw_t<uint32_t>> r_TXBUF1__192;
            typedef reg_t<uint32_t, 0x40005704, rw_t<uint32_t>> r_TXBUF1__193;
            typedef reg_t<uint32_t, 0x40005708, rw_t<uint32_t>> r_TXBUF1__194;
            typedef reg_t<uint32_t, 0x4000570c, rw_t<uint32_t>> r_TXBUF1__195;
            typedef reg_t<uint32_t, 0x40005710, rw_t<uint32_t>> r_TXBUF1__196;
            typedef reg_t<uint32_t, 0x40005714, rw_t<uint32_t>> r_TXBUF1__197;
            typedef reg_t<uint32_t, 0x40005718, rw_t<uint32_t>> r_TXBUF1__198;
            typedef reg_t<uint32_t, 0x4000571c, rw_t<uint32_t>> r_TXBUF1__199;
            typedef reg_t<uint32_t, 0x40005720, rw_t<uint32_t>> r_TXBUF1__200;
            typedef reg_t<uint32_t, 0x40005724, rw_t<uint32_t>> r_TXBUF1__201;
            typedef reg_t<uint32_t, 0x40005728, rw_t<uint32_t>> r_TXBUF1__202;
            typedef reg_t<uint32_t, 0x4000572c, rw_t<uint32_t>> r_TXBUF1__203;
            typedef reg_t<uint32_t, 0x40005730, rw_t<uint32_t>> r_TXBUF1__204;
            typedef reg_t<uint32_t, 0x40005734, rw_t<uint32_t>> r_TXBUF1__205;
            typedef reg_t<uint32_t, 0x40005738, rw_t<uint32_t>> r_TXBUF1__206;
            typedef reg_t<uint32_t, 0x4000573c, rw_t<uint32_t>> r_TXBUF1__207;
            typedef reg_t<uint32_t, 0x40005740, rw_t<uint32_t>> r_TXBUF1__208;
            typedef reg_t<uint32_t, 0x40005744, rw_t<uint32_t>> r_TXBUF1__209;
            typedef reg_t<uint32_t, 0x40005748, rw_t<uint32_t>> r_TXBUF1__210;
            typedef reg_t<uint32_t, 0x4000574c, rw_t<uint32_t>> r_TXBUF1__211;
            typedef reg_t<uint32_t, 0x40005750, rw_t<uint32_t>> r_TXBUF1__212;
            typedef reg_t<uint32_t, 0x40005754, rw_t<uint32_t>> r_TXBUF1__213;
            typedef reg_t<uint32_t, 0x40005758, rw_t<uint32_t>> r_TXBUF1__214;
            typedef reg_t<uint32_t, 0x4000575c, rw_t<uint32_t>> r_TXBUF1__215;
            typedef reg_t<uint32_t, 0x40005760, rw_t<uint32_t>> r_TXBUF1__216;
            typedef reg_t<uint32_t, 0x40005764, rw_t<uint32_t>> r_TXBUF1__217;
            typedef reg_t<uint32_t, 0x40005768, rw_t<uint32_t>> r_TXBUF1__218;
            typedef reg_t<uint32_t, 0x4000576c, rw_t<uint32_t>> r_TXBUF1__219;
            typedef reg_t<uint32_t, 0x40005770, rw_t<uint32_t>> r_TXBUF1__220;
            typedef reg_t<uint32_t, 0x40005774, rw_t<uint32_t>> r_TXBUF1__221;
            typedef reg_t<uint32_t, 0x40005778, rw_t<uint32_t>> r_TXBUF1__222;
            typedef reg_t<uint32_t, 0x4000577c, rw_t<uint32_t>> r_TXBUF1__223;
            typedef reg_t<uint32_t, 0x40005780, rw_t<uint32_t>> r_TXBUF1__224;
            typedef reg_t<uint32_t, 0x40005784, rw_t<uint32_t>> r_TXBUF1__225;
            typedef reg_t<uint32_t, 0x40005788, rw_t<uint32_t>> r_TXBUF1__226;
            typedef reg_t<uint32_t, 0x4000578c, rw_t<uint32_t>> r_TXBUF1__227;
            typedef reg_t<uint32_t, 0x40005790, rw_t<uint32_t>> r_TXBUF1__228;
            typedef reg_t<uint32_t, 0x40005794, rw_t<uint32_t>> r_TXBUF1__229;
            typedef reg_t<uint32_t, 0x40005798, rw_t<uint32_t>> r_TXBUF1__230;
            typedef reg_t<uint32_t, 0x4000579c, rw_t<uint32_t>> r_TXBUF1__231;
            typedef reg_t<uint32_t, 0x400057a0, rw_t<uint32_t>> r_TXBUF1__232;
            typedef reg_t<uint32_t, 0x400057a4, rw_t<uint32_t>> r_TXBUF1__233;
            typedef reg_t<uint32_t, 0x400057a8, rw_t<uint32_t>> r_TXBUF1__234;
            typedef reg_t<uint32_t, 0x400057ac, rw_t<uint32_t>> r_TXBUF1__235;
            typedef reg_t<uint32_t, 0x400057b0, rw_t<uint32_t>> r_TXBUF1__236;
            typedef reg_t<uint32_t, 0x400057b4, rw_t<uint32_t>> r_TXBUF1__237;
            typedef reg_t<uint32_t, 0x400057b8, rw_t<uint32_t>> r_TXBUF1__238;
            typedef reg_t<uint32_t, 0x400057bc, rw_t<uint32_t>> r_TXBUF1__239;
            typedef reg_t<uint32_t, 0x400057c0, rw_t<uint32_t>> r_TXBUF1__240;
            typedef reg_t<uint32_t, 0x400057c4, rw_t<uint32_t>> r_TXBUF1__241;
            typedef reg_t<uint32_t, 0x400057c8, rw_t<uint32_t>> r_TXBUF1__242;
            typedef reg_t<uint32_t, 0x400057cc, rw_t<uint32_t>> r_TXBUF1__243;
            typedef reg_t<uint32_t, 0x400057d0, rw_t<uint32_t>> r_TXBUF1__244;
            typedef reg_t<uint32_t, 0x400057d4, rw_t<uint32_t>> r_TXBUF1__245;
            typedef reg_t<uint32_t, 0x400057d8, rw_t<uint32_t>> r_TXBUF1__246;
            typedef reg_t<uint32_t, 0x400057dc, rw_t<uint32_t>> r_TXBUF1__247;
            typedef reg_t<uint32_t, 0x400057e0, rw_t<uint32_t>> r_TXBUF1__248;
            typedef reg_t<uint32_t, 0x400057e4, rw_t<uint32_t>> r_TXBUF1__249;
            typedef reg_t<uint32_t, 0x400057e8, rw_t<uint32_t>> r_TXBUF1__250;
            typedef reg_t<uint32_t, 0x400057ec, rw_t<uint32_t>> r_TXBUF1__251;
            typedef reg_t<uint32_t, 0x400057f0, rw_t<uint32_t>> r_TXBUF1__252;
            typedef reg_t<uint32_t, 0x400057f4, rw_t<uint32_t>> r_TXBUF1__253;
            typedef reg_t<uint32_t, 0x400057f8, rw_t<uint32_t>> r_TXBUF1__254;
            typedef reg_t<uint32_t, 0x400057fc, rw_t<uint32_t>> r_TXBUF1__255;
        } // end of TXBUF1_[%s]
        namespace TXBUF2_ {
            // TXBUF2_ register
            typedef reg_t<uint32_t, 0x40005800, rw_t<uint32_t>> r_TXBUF2__0;
            typedef reg_t<uint32_t, 0x40005804, rw_t<uint32_t>> r_TXBUF2__1;
            typedef reg_t<uint32_t, 0x40005808, rw_t<uint32_t>> r_TXBUF2__2;
            typedef reg_t<uint32_t, 0x4000580c, rw_t<uint32_t>> r_TXBUF2__3;
            typedef reg_t<uint32_t, 0x40005810, rw_t<uint32_t>> r_TXBUF2__4;
            typedef reg_t<uint32_t, 0x40005814, rw_t<uint32_t>> r_TXBUF2__5;
            typedef reg_t<uint32_t, 0x40005818, rw_t<uint32_t>> r_TXBUF2__6;
            typedef reg_t<uint32_t, 0x4000581c, rw_t<uint32_t>> r_TXBUF2__7;
            typedef reg_t<uint32_t, 0x40005820, rw_t<uint32_t>> r_TXBUF2__8;
            typedef reg_t<uint32_t, 0x40005824, rw_t<uint32_t>> r_TXBUF2__9;
            typedef reg_t<uint32_t, 0x40005828, rw_t<uint32_t>> r_TXBUF2__10;
            typedef reg_t<uint32_t, 0x4000582c, rw_t<uint32_t>> r_TXBUF2__11;
            typedef reg_t<uint32_t, 0x40005830, rw_t<uint32_t>> r_TXBUF2__12;
            typedef reg_t<uint32_t, 0x40005834, rw_t<uint32_t>> r_TXBUF2__13;
            typedef reg_t<uint32_t, 0x40005838, rw_t<uint32_t>> r_TXBUF2__14;
            typedef reg_t<uint32_t, 0x4000583c, rw_t<uint32_t>> r_TXBUF2__15;
            typedef reg_t<uint32_t, 0x40005840, rw_t<uint32_t>> r_TXBUF2__16;
            typedef reg_t<uint32_t, 0x40005844, rw_t<uint32_t>> r_TXBUF2__17;
            typedef reg_t<uint32_t, 0x40005848, rw_t<uint32_t>> r_TXBUF2__18;
            typedef reg_t<uint32_t, 0x4000584c, rw_t<uint32_t>> r_TXBUF2__19;
            typedef reg_t<uint32_t, 0x40005850, rw_t<uint32_t>> r_TXBUF2__20;
            typedef reg_t<uint32_t, 0x40005854, rw_t<uint32_t>> r_TXBUF2__21;
            typedef reg_t<uint32_t, 0x40005858, rw_t<uint32_t>> r_TXBUF2__22;
            typedef reg_t<uint32_t, 0x4000585c, rw_t<uint32_t>> r_TXBUF2__23;
            typedef reg_t<uint32_t, 0x40005860, rw_t<uint32_t>> r_TXBUF2__24;
            typedef reg_t<uint32_t, 0x40005864, rw_t<uint32_t>> r_TXBUF2__25;
            typedef reg_t<uint32_t, 0x40005868, rw_t<uint32_t>> r_TXBUF2__26;
            typedef reg_t<uint32_t, 0x4000586c, rw_t<uint32_t>> r_TXBUF2__27;
            typedef reg_t<uint32_t, 0x40005870, rw_t<uint32_t>> r_TXBUF2__28;
            typedef reg_t<uint32_t, 0x40005874, rw_t<uint32_t>> r_TXBUF2__29;
            typedef reg_t<uint32_t, 0x40005878, rw_t<uint32_t>> r_TXBUF2__30;
            typedef reg_t<uint32_t, 0x4000587c, rw_t<uint32_t>> r_TXBUF2__31;
            typedef reg_t<uint32_t, 0x40005880, rw_t<uint32_t>> r_TXBUF2__32;
            typedef reg_t<uint32_t, 0x40005884, rw_t<uint32_t>> r_TXBUF2__33;
            typedef reg_t<uint32_t, 0x40005888, rw_t<uint32_t>> r_TXBUF2__34;
            typedef reg_t<uint32_t, 0x4000588c, rw_t<uint32_t>> r_TXBUF2__35;
            typedef reg_t<uint32_t, 0x40005890, rw_t<uint32_t>> r_TXBUF2__36;
            typedef reg_t<uint32_t, 0x40005894, rw_t<uint32_t>> r_TXBUF2__37;
            typedef reg_t<uint32_t, 0x40005898, rw_t<uint32_t>> r_TXBUF2__38;
            typedef reg_t<uint32_t, 0x4000589c, rw_t<uint32_t>> r_TXBUF2__39;
            typedef reg_t<uint32_t, 0x400058a0, rw_t<uint32_t>> r_TXBUF2__40;
            typedef reg_t<uint32_t, 0x400058a4, rw_t<uint32_t>> r_TXBUF2__41;
            typedef reg_t<uint32_t, 0x400058a8, rw_t<uint32_t>> r_TXBUF2__42;
            typedef reg_t<uint32_t, 0x400058ac, rw_t<uint32_t>> r_TXBUF2__43;
            typedef reg_t<uint32_t, 0x400058b0, rw_t<uint32_t>> r_TXBUF2__44;
            typedef reg_t<uint32_t, 0x400058b4, rw_t<uint32_t>> r_TXBUF2__45;
            typedef reg_t<uint32_t, 0x400058b8, rw_t<uint32_t>> r_TXBUF2__46;
            typedef reg_t<uint32_t, 0x400058bc, rw_t<uint32_t>> r_TXBUF2__47;
            typedef reg_t<uint32_t, 0x400058c0, rw_t<uint32_t>> r_TXBUF2__48;
            typedef reg_t<uint32_t, 0x400058c4, rw_t<uint32_t>> r_TXBUF2__49;
            typedef reg_t<uint32_t, 0x400058c8, rw_t<uint32_t>> r_TXBUF2__50;
            typedef reg_t<uint32_t, 0x400058cc, rw_t<uint32_t>> r_TXBUF2__51;
            typedef reg_t<uint32_t, 0x400058d0, rw_t<uint32_t>> r_TXBUF2__52;
            typedef reg_t<uint32_t, 0x400058d4, rw_t<uint32_t>> r_TXBUF2__53;
            typedef reg_t<uint32_t, 0x400058d8, rw_t<uint32_t>> r_TXBUF2__54;
            typedef reg_t<uint32_t, 0x400058dc, rw_t<uint32_t>> r_TXBUF2__55;
            typedef reg_t<uint32_t, 0x400058e0, rw_t<uint32_t>> r_TXBUF2__56;
            typedef reg_t<uint32_t, 0x400058e4, rw_t<uint32_t>> r_TXBUF2__57;
            typedef reg_t<uint32_t, 0x400058e8, rw_t<uint32_t>> r_TXBUF2__58;
            typedef reg_t<uint32_t, 0x400058ec, rw_t<uint32_t>> r_TXBUF2__59;
            typedef reg_t<uint32_t, 0x400058f0, rw_t<uint32_t>> r_TXBUF2__60;
            typedef reg_t<uint32_t, 0x400058f4, rw_t<uint32_t>> r_TXBUF2__61;
            typedef reg_t<uint32_t, 0x400058f8, rw_t<uint32_t>> r_TXBUF2__62;
            typedef reg_t<uint32_t, 0x400058fc, rw_t<uint32_t>> r_TXBUF2__63;
            typedef reg_t<uint32_t, 0x40005900, rw_t<uint32_t>> r_TXBUF2__64;
            typedef reg_t<uint32_t, 0x40005904, rw_t<uint32_t>> r_TXBUF2__65;
            typedef reg_t<uint32_t, 0x40005908, rw_t<uint32_t>> r_TXBUF2__66;
            typedef reg_t<uint32_t, 0x4000590c, rw_t<uint32_t>> r_TXBUF2__67;
            typedef reg_t<uint32_t, 0x40005910, rw_t<uint32_t>> r_TXBUF2__68;
            typedef reg_t<uint32_t, 0x40005914, rw_t<uint32_t>> r_TXBUF2__69;
            typedef reg_t<uint32_t, 0x40005918, rw_t<uint32_t>> r_TXBUF2__70;
            typedef reg_t<uint32_t, 0x4000591c, rw_t<uint32_t>> r_TXBUF2__71;
            typedef reg_t<uint32_t, 0x40005920, rw_t<uint32_t>> r_TXBUF2__72;
            typedef reg_t<uint32_t, 0x40005924, rw_t<uint32_t>> r_TXBUF2__73;
            typedef reg_t<uint32_t, 0x40005928, rw_t<uint32_t>> r_TXBUF2__74;
            typedef reg_t<uint32_t, 0x4000592c, rw_t<uint32_t>> r_TXBUF2__75;
            typedef reg_t<uint32_t, 0x40005930, rw_t<uint32_t>> r_TXBUF2__76;
            typedef reg_t<uint32_t, 0x40005934, rw_t<uint32_t>> r_TXBUF2__77;
            typedef reg_t<uint32_t, 0x40005938, rw_t<uint32_t>> r_TXBUF2__78;
            typedef reg_t<uint32_t, 0x4000593c, rw_t<uint32_t>> r_TXBUF2__79;
            typedef reg_t<uint32_t, 0x40005940, rw_t<uint32_t>> r_TXBUF2__80;
            typedef reg_t<uint32_t, 0x40005944, rw_t<uint32_t>> r_TXBUF2__81;
            typedef reg_t<uint32_t, 0x40005948, rw_t<uint32_t>> r_TXBUF2__82;
            typedef reg_t<uint32_t, 0x4000594c, rw_t<uint32_t>> r_TXBUF2__83;
            typedef reg_t<uint32_t, 0x40005950, rw_t<uint32_t>> r_TXBUF2__84;
            typedef reg_t<uint32_t, 0x40005954, rw_t<uint32_t>> r_TXBUF2__85;
            typedef reg_t<uint32_t, 0x40005958, rw_t<uint32_t>> r_TXBUF2__86;
            typedef reg_t<uint32_t, 0x4000595c, rw_t<uint32_t>> r_TXBUF2__87;
            typedef reg_t<uint32_t, 0x40005960, rw_t<uint32_t>> r_TXBUF2__88;
            typedef reg_t<uint32_t, 0x40005964, rw_t<uint32_t>> r_TXBUF2__89;
            typedef reg_t<uint32_t, 0x40005968, rw_t<uint32_t>> r_TXBUF2__90;
            typedef reg_t<uint32_t, 0x4000596c, rw_t<uint32_t>> r_TXBUF2__91;
            typedef reg_t<uint32_t, 0x40005970, rw_t<uint32_t>> r_TXBUF2__92;
            typedef reg_t<uint32_t, 0x40005974, rw_t<uint32_t>> r_TXBUF2__93;
            typedef reg_t<uint32_t, 0x40005978, rw_t<uint32_t>> r_TXBUF2__94;
            typedef reg_t<uint32_t, 0x4000597c, rw_t<uint32_t>> r_TXBUF2__95;
            typedef reg_t<uint32_t, 0x40005980, rw_t<uint32_t>> r_TXBUF2__96;
            typedef reg_t<uint32_t, 0x40005984, rw_t<uint32_t>> r_TXBUF2__97;
            typedef reg_t<uint32_t, 0x40005988, rw_t<uint32_t>> r_TXBUF2__98;
            typedef reg_t<uint32_t, 0x4000598c, rw_t<uint32_t>> r_TXBUF2__99;
            typedef reg_t<uint32_t, 0x40005990, rw_t<uint32_t>> r_TXBUF2__100;
            typedef reg_t<uint32_t, 0x40005994, rw_t<uint32_t>> r_TXBUF2__101;
            typedef reg_t<uint32_t, 0x40005998, rw_t<uint32_t>> r_TXBUF2__102;
            typedef reg_t<uint32_t, 0x4000599c, rw_t<uint32_t>> r_TXBUF2__103;
            typedef reg_t<uint32_t, 0x400059a0, rw_t<uint32_t>> r_TXBUF2__104;
            typedef reg_t<uint32_t, 0x400059a4, rw_t<uint32_t>> r_TXBUF2__105;
            typedef reg_t<uint32_t, 0x400059a8, rw_t<uint32_t>> r_TXBUF2__106;
            typedef reg_t<uint32_t, 0x400059ac, rw_t<uint32_t>> r_TXBUF2__107;
            typedef reg_t<uint32_t, 0x400059b0, rw_t<uint32_t>> r_TXBUF2__108;
            typedef reg_t<uint32_t, 0x400059b4, rw_t<uint32_t>> r_TXBUF2__109;
            typedef reg_t<uint32_t, 0x400059b8, rw_t<uint32_t>> r_TXBUF2__110;
            typedef reg_t<uint32_t, 0x400059bc, rw_t<uint32_t>> r_TXBUF2__111;
            typedef reg_t<uint32_t, 0x400059c0, rw_t<uint32_t>> r_TXBUF2__112;
            typedef reg_t<uint32_t, 0x400059c4, rw_t<uint32_t>> r_TXBUF2__113;
            typedef reg_t<uint32_t, 0x400059c8, rw_t<uint32_t>> r_TXBUF2__114;
            typedef reg_t<uint32_t, 0x400059cc, rw_t<uint32_t>> r_TXBUF2__115;
            typedef reg_t<uint32_t, 0x400059d0, rw_t<uint32_t>> r_TXBUF2__116;
            typedef reg_t<uint32_t, 0x400059d4, rw_t<uint32_t>> r_TXBUF2__117;
            typedef reg_t<uint32_t, 0x400059d8, rw_t<uint32_t>> r_TXBUF2__118;
            typedef reg_t<uint32_t, 0x400059dc, rw_t<uint32_t>> r_TXBUF2__119;
            typedef reg_t<uint32_t, 0x400059e0, rw_t<uint32_t>> r_TXBUF2__120;
            typedef reg_t<uint32_t, 0x400059e4, rw_t<uint32_t>> r_TXBUF2__121;
            typedef reg_t<uint32_t, 0x400059e8, rw_t<uint32_t>> r_TXBUF2__122;
            typedef reg_t<uint32_t, 0x400059ec, rw_t<uint32_t>> r_TXBUF2__123;
            typedef reg_t<uint32_t, 0x400059f0, rw_t<uint32_t>> r_TXBUF2__124;
            typedef reg_t<uint32_t, 0x400059f4, rw_t<uint32_t>> r_TXBUF2__125;
            typedef reg_t<uint32_t, 0x400059f8, rw_t<uint32_t>> r_TXBUF2__126;
            typedef reg_t<uint32_t, 0x400059fc, rw_t<uint32_t>> r_TXBUF2__127;
            typedef reg_t<uint32_t, 0x40005a00, rw_t<uint32_t>> r_TXBUF2__128;
            typedef reg_t<uint32_t, 0x40005a04, rw_t<uint32_t>> r_TXBUF2__129;
            typedef reg_t<uint32_t, 0x40005a08, rw_t<uint32_t>> r_TXBUF2__130;
            typedef reg_t<uint32_t, 0x40005a0c, rw_t<uint32_t>> r_TXBUF2__131;
            typedef reg_t<uint32_t, 0x40005a10, rw_t<uint32_t>> r_TXBUF2__132;
            typedef reg_t<uint32_t, 0x40005a14, rw_t<uint32_t>> r_TXBUF2__133;
            typedef reg_t<uint32_t, 0x40005a18, rw_t<uint32_t>> r_TXBUF2__134;
            typedef reg_t<uint32_t, 0x40005a1c, rw_t<uint32_t>> r_TXBUF2__135;
            typedef reg_t<uint32_t, 0x40005a20, rw_t<uint32_t>> r_TXBUF2__136;
            typedef reg_t<uint32_t, 0x40005a24, rw_t<uint32_t>> r_TXBUF2__137;
            typedef reg_t<uint32_t, 0x40005a28, rw_t<uint32_t>> r_TXBUF2__138;
            typedef reg_t<uint32_t, 0x40005a2c, rw_t<uint32_t>> r_TXBUF2__139;
            typedef reg_t<uint32_t, 0x40005a30, rw_t<uint32_t>> r_TXBUF2__140;
            typedef reg_t<uint32_t, 0x40005a34, rw_t<uint32_t>> r_TXBUF2__141;
            typedef reg_t<uint32_t, 0x40005a38, rw_t<uint32_t>> r_TXBUF2__142;
            typedef reg_t<uint32_t, 0x40005a3c, rw_t<uint32_t>> r_TXBUF2__143;
            typedef reg_t<uint32_t, 0x40005a40, rw_t<uint32_t>> r_TXBUF2__144;
            typedef reg_t<uint32_t, 0x40005a44, rw_t<uint32_t>> r_TXBUF2__145;
            typedef reg_t<uint32_t, 0x40005a48, rw_t<uint32_t>> r_TXBUF2__146;
            typedef reg_t<uint32_t, 0x40005a4c, rw_t<uint32_t>> r_TXBUF2__147;
            typedef reg_t<uint32_t, 0x40005a50, rw_t<uint32_t>> r_TXBUF2__148;
            typedef reg_t<uint32_t, 0x40005a54, rw_t<uint32_t>> r_TXBUF2__149;
            typedef reg_t<uint32_t, 0x40005a58, rw_t<uint32_t>> r_TXBUF2__150;
            typedef reg_t<uint32_t, 0x40005a5c, rw_t<uint32_t>> r_TXBUF2__151;
            typedef reg_t<uint32_t, 0x40005a60, rw_t<uint32_t>> r_TXBUF2__152;
            typedef reg_t<uint32_t, 0x40005a64, rw_t<uint32_t>> r_TXBUF2__153;
            typedef reg_t<uint32_t, 0x40005a68, rw_t<uint32_t>> r_TXBUF2__154;
            typedef reg_t<uint32_t, 0x40005a6c, rw_t<uint32_t>> r_TXBUF2__155;
            typedef reg_t<uint32_t, 0x40005a70, rw_t<uint32_t>> r_TXBUF2__156;
            typedef reg_t<uint32_t, 0x40005a74, rw_t<uint32_t>> r_TXBUF2__157;
            typedef reg_t<uint32_t, 0x40005a78, rw_t<uint32_t>> r_TXBUF2__158;
            typedef reg_t<uint32_t, 0x40005a7c, rw_t<uint32_t>> r_TXBUF2__159;
            typedef reg_t<uint32_t, 0x40005a80, rw_t<uint32_t>> r_TXBUF2__160;
            typedef reg_t<uint32_t, 0x40005a84, rw_t<uint32_t>> r_TXBUF2__161;
            typedef reg_t<uint32_t, 0x40005a88, rw_t<uint32_t>> r_TXBUF2__162;
            typedef reg_t<uint32_t, 0x40005a8c, rw_t<uint32_t>> r_TXBUF2__163;
            typedef reg_t<uint32_t, 0x40005a90, rw_t<uint32_t>> r_TXBUF2__164;
            typedef reg_t<uint32_t, 0x40005a94, rw_t<uint32_t>> r_TXBUF2__165;
            typedef reg_t<uint32_t, 0x40005a98, rw_t<uint32_t>> r_TXBUF2__166;
            typedef reg_t<uint32_t, 0x40005a9c, rw_t<uint32_t>> r_TXBUF2__167;
            typedef reg_t<uint32_t, 0x40005aa0, rw_t<uint32_t>> r_TXBUF2__168;
            typedef reg_t<uint32_t, 0x40005aa4, rw_t<uint32_t>> r_TXBUF2__169;
            typedef reg_t<uint32_t, 0x40005aa8, rw_t<uint32_t>> r_TXBUF2__170;
            typedef reg_t<uint32_t, 0x40005aac, rw_t<uint32_t>> r_TXBUF2__171;
            typedef reg_t<uint32_t, 0x40005ab0, rw_t<uint32_t>> r_TXBUF2__172;
            typedef reg_t<uint32_t, 0x40005ab4, rw_t<uint32_t>> r_TXBUF2__173;
            typedef reg_t<uint32_t, 0x40005ab8, rw_t<uint32_t>> r_TXBUF2__174;
            typedef reg_t<uint32_t, 0x40005abc, rw_t<uint32_t>> r_TXBUF2__175;
            typedef reg_t<uint32_t, 0x40005ac0, rw_t<uint32_t>> r_TXBUF2__176;
            typedef reg_t<uint32_t, 0x40005ac4, rw_t<uint32_t>> r_TXBUF2__177;
            typedef reg_t<uint32_t, 0x40005ac8, rw_t<uint32_t>> r_TXBUF2__178;
            typedef reg_t<uint32_t, 0x40005acc, rw_t<uint32_t>> r_TXBUF2__179;
            typedef reg_t<uint32_t, 0x40005ad0, rw_t<uint32_t>> r_TXBUF2__180;
            typedef reg_t<uint32_t, 0x40005ad4, rw_t<uint32_t>> r_TXBUF2__181;
            typedef reg_t<uint32_t, 0x40005ad8, rw_t<uint32_t>> r_TXBUF2__182;
            typedef reg_t<uint32_t, 0x40005adc, rw_t<uint32_t>> r_TXBUF2__183;
            typedef reg_t<uint32_t, 0x40005ae0, rw_t<uint32_t>> r_TXBUF2__184;
            typedef reg_t<uint32_t, 0x40005ae4, rw_t<uint32_t>> r_TXBUF2__185;
            typedef reg_t<uint32_t, 0x40005ae8, rw_t<uint32_t>> r_TXBUF2__186;
            typedef reg_t<uint32_t, 0x40005aec, rw_t<uint32_t>> r_TXBUF2__187;
            typedef reg_t<uint32_t, 0x40005af0, rw_t<uint32_t>> r_TXBUF2__188;
            typedef reg_t<uint32_t, 0x40005af4, rw_t<uint32_t>> r_TXBUF2__189;
            typedef reg_t<uint32_t, 0x40005af8, rw_t<uint32_t>> r_TXBUF2__190;
            typedef reg_t<uint32_t, 0x40005afc, rw_t<uint32_t>> r_TXBUF2__191;
            typedef reg_t<uint32_t, 0x40005b00, rw_t<uint32_t>> r_TXBUF2__192;
            typedef reg_t<uint32_t, 0x40005b04, rw_t<uint32_t>> r_TXBUF2__193;
            typedef reg_t<uint32_t, 0x40005b08, rw_t<uint32_t>> r_TXBUF2__194;
            typedef reg_t<uint32_t, 0x40005b0c, rw_t<uint32_t>> r_TXBUF2__195;
            typedef reg_t<uint32_t, 0x40005b10, rw_t<uint32_t>> r_TXBUF2__196;
            typedef reg_t<uint32_t, 0x40005b14, rw_t<uint32_t>> r_TXBUF2__197;
            typedef reg_t<uint32_t, 0x40005b18, rw_t<uint32_t>> r_TXBUF2__198;
            typedef reg_t<uint32_t, 0x40005b1c, rw_t<uint32_t>> r_TXBUF2__199;
            typedef reg_t<uint32_t, 0x40005b20, rw_t<uint32_t>> r_TXBUF2__200;
            typedef reg_t<uint32_t, 0x40005b24, rw_t<uint32_t>> r_TXBUF2__201;
            typedef reg_t<uint32_t, 0x40005b28, rw_t<uint32_t>> r_TXBUF2__202;
            typedef reg_t<uint32_t, 0x40005b2c, rw_t<uint32_t>> r_TXBUF2__203;
            typedef reg_t<uint32_t, 0x40005b30, rw_t<uint32_t>> r_TXBUF2__204;
            typedef reg_t<uint32_t, 0x40005b34, rw_t<uint32_t>> r_TXBUF2__205;
            typedef reg_t<uint32_t, 0x40005b38, rw_t<uint32_t>> r_TXBUF2__206;
            typedef reg_t<uint32_t, 0x40005b3c, rw_t<uint32_t>> r_TXBUF2__207;
            typedef reg_t<uint32_t, 0x40005b40, rw_t<uint32_t>> r_TXBUF2__208;
            typedef reg_t<uint32_t, 0x40005b44, rw_t<uint32_t>> r_TXBUF2__209;
            typedef reg_t<uint32_t, 0x40005b48, rw_t<uint32_t>> r_TXBUF2__210;
            typedef reg_t<uint32_t, 0x40005b4c, rw_t<uint32_t>> r_TXBUF2__211;
            typedef reg_t<uint32_t, 0x40005b50, rw_t<uint32_t>> r_TXBUF2__212;
            typedef reg_t<uint32_t, 0x40005b54, rw_t<uint32_t>> r_TXBUF2__213;
            typedef reg_t<uint32_t, 0x40005b58, rw_t<uint32_t>> r_TXBUF2__214;
            typedef reg_t<uint32_t, 0x40005b5c, rw_t<uint32_t>> r_TXBUF2__215;
            typedef reg_t<uint32_t, 0x40005b60, rw_t<uint32_t>> r_TXBUF2__216;
            typedef reg_t<uint32_t, 0x40005b64, rw_t<uint32_t>> r_TXBUF2__217;
            typedef reg_t<uint32_t, 0x40005b68, rw_t<uint32_t>> r_TXBUF2__218;
            typedef reg_t<uint32_t, 0x40005b6c, rw_t<uint32_t>> r_TXBUF2__219;
            typedef reg_t<uint32_t, 0x40005b70, rw_t<uint32_t>> r_TXBUF2__220;
            typedef reg_t<uint32_t, 0x40005b74, rw_t<uint32_t>> r_TXBUF2__221;
            typedef reg_t<uint32_t, 0x40005b78, rw_t<uint32_t>> r_TXBUF2__222;
            typedef reg_t<uint32_t, 0x40005b7c, rw_t<uint32_t>> r_TXBUF2__223;
            typedef reg_t<uint32_t, 0x40005b80, rw_t<uint32_t>> r_TXBUF2__224;
            typedef reg_t<uint32_t, 0x40005b84, rw_t<uint32_t>> r_TXBUF2__225;
            typedef reg_t<uint32_t, 0x40005b88, rw_t<uint32_t>> r_TXBUF2__226;
            typedef reg_t<uint32_t, 0x40005b8c, rw_t<uint32_t>> r_TXBUF2__227;
            typedef reg_t<uint32_t, 0x40005b90, rw_t<uint32_t>> r_TXBUF2__228;
            typedef reg_t<uint32_t, 0x40005b94, rw_t<uint32_t>> r_TXBUF2__229;
            typedef reg_t<uint32_t, 0x40005b98, rw_t<uint32_t>> r_TXBUF2__230;
            typedef reg_t<uint32_t, 0x40005b9c, rw_t<uint32_t>> r_TXBUF2__231;
            typedef reg_t<uint32_t, 0x40005ba0, rw_t<uint32_t>> r_TXBUF2__232;
            typedef reg_t<uint32_t, 0x40005ba4, rw_t<uint32_t>> r_TXBUF2__233;
            typedef reg_t<uint32_t, 0x40005ba8, rw_t<uint32_t>> r_TXBUF2__234;
            typedef reg_t<uint32_t, 0x40005bac, rw_t<uint32_t>> r_TXBUF2__235;
            typedef reg_t<uint32_t, 0x40005bb0, rw_t<uint32_t>> r_TXBUF2__236;
            typedef reg_t<uint32_t, 0x40005bb4, rw_t<uint32_t>> r_TXBUF2__237;
            typedef reg_t<uint32_t, 0x40005bb8, rw_t<uint32_t>> r_TXBUF2__238;
            typedef reg_t<uint32_t, 0x40005bbc, rw_t<uint32_t>> r_TXBUF2__239;
            typedef reg_t<uint32_t, 0x40005bc0, rw_t<uint32_t>> r_TXBUF2__240;
            typedef reg_t<uint32_t, 0x40005bc4, rw_t<uint32_t>> r_TXBUF2__241;
            typedef reg_t<uint32_t, 0x40005bc8, rw_t<uint32_t>> r_TXBUF2__242;
            typedef reg_t<uint32_t, 0x40005bcc, rw_t<uint32_t>> r_TXBUF2__243;
            typedef reg_t<uint32_t, 0x40005bd0, rw_t<uint32_t>> r_TXBUF2__244;
            typedef reg_t<uint32_t, 0x40005bd4, rw_t<uint32_t>> r_TXBUF2__245;
            typedef reg_t<uint32_t, 0x40005bd8, rw_t<uint32_t>> r_TXBUF2__246;
            typedef reg_t<uint32_t, 0x40005bdc, rw_t<uint32_t>> r_TXBUF2__247;
            typedef reg_t<uint32_t, 0x40005be0, rw_t<uint32_t>> r_TXBUF2__248;
            typedef reg_t<uint32_t, 0x40005be4, rw_t<uint32_t>> r_TXBUF2__249;
            typedef reg_t<uint32_t, 0x40005be8, rw_t<uint32_t>> r_TXBUF2__250;
            typedef reg_t<uint32_t, 0x40005bec, rw_t<uint32_t>> r_TXBUF2__251;
            typedef reg_t<uint32_t, 0x40005bf0, rw_t<uint32_t>> r_TXBUF2__252;
            typedef reg_t<uint32_t, 0x40005bf4, rw_t<uint32_t>> r_TXBUF2__253;
            typedef reg_t<uint32_t, 0x40005bf8, rw_t<uint32_t>> r_TXBUF2__254;
            typedef reg_t<uint32_t, 0x40005bfc, rw_t<uint32_t>> r_TXBUF2__255;
        } // end of TXBUF2_[%s]
        namespace TXBUF3_ {
            // TXBUF3_ register
            typedef reg_t<uint32_t, 0x40005c00, rw_t<uint32_t>> r_TXBUF3__0;
            typedef reg_t<uint32_t, 0x40005c04, rw_t<uint32_t>> r_TXBUF3__1;
            typedef reg_t<uint32_t, 0x40005c08, rw_t<uint32_t>> r_TXBUF3__2;
            typedef reg_t<uint32_t, 0x40005c0c, rw_t<uint32_t>> r_TXBUF3__3;
            typedef reg_t<uint32_t, 0x40005c10, rw_t<uint32_t>> r_TXBUF3__4;
            typedef reg_t<uint32_t, 0x40005c14, rw_t<uint32_t>> r_TXBUF3__5;
            typedef reg_t<uint32_t, 0x40005c18, rw_t<uint32_t>> r_TXBUF3__6;
            typedef reg_t<uint32_t, 0x40005c1c, rw_t<uint32_t>> r_TXBUF3__7;
            typedef reg_t<uint32_t, 0x40005c20, rw_t<uint32_t>> r_TXBUF3__8;
            typedef reg_t<uint32_t, 0x40005c24, rw_t<uint32_t>> r_TXBUF3__9;
            typedef reg_t<uint32_t, 0x40005c28, rw_t<uint32_t>> r_TXBUF3__10;
            typedef reg_t<uint32_t, 0x40005c2c, rw_t<uint32_t>> r_TXBUF3__11;
            typedef reg_t<uint32_t, 0x40005c30, rw_t<uint32_t>> r_TXBUF3__12;
            typedef reg_t<uint32_t, 0x40005c34, rw_t<uint32_t>> r_TXBUF3__13;
            typedef reg_t<uint32_t, 0x40005c38, rw_t<uint32_t>> r_TXBUF3__14;
            typedef reg_t<uint32_t, 0x40005c3c, rw_t<uint32_t>> r_TXBUF3__15;
            typedef reg_t<uint32_t, 0x40005c40, rw_t<uint32_t>> r_TXBUF3__16;
            typedef reg_t<uint32_t, 0x40005c44, rw_t<uint32_t>> r_TXBUF3__17;
            typedef reg_t<uint32_t, 0x40005c48, rw_t<uint32_t>> r_TXBUF3__18;
            typedef reg_t<uint32_t, 0x40005c4c, rw_t<uint32_t>> r_TXBUF3__19;
            typedef reg_t<uint32_t, 0x40005c50, rw_t<uint32_t>> r_TXBUF3__20;
            typedef reg_t<uint32_t, 0x40005c54, rw_t<uint32_t>> r_TXBUF3__21;
            typedef reg_t<uint32_t, 0x40005c58, rw_t<uint32_t>> r_TXBUF3__22;
            typedef reg_t<uint32_t, 0x40005c5c, rw_t<uint32_t>> r_TXBUF3__23;
            typedef reg_t<uint32_t, 0x40005c60, rw_t<uint32_t>> r_TXBUF3__24;
            typedef reg_t<uint32_t, 0x40005c64, rw_t<uint32_t>> r_TXBUF3__25;
            typedef reg_t<uint32_t, 0x40005c68, rw_t<uint32_t>> r_TXBUF3__26;
            typedef reg_t<uint32_t, 0x40005c6c, rw_t<uint32_t>> r_TXBUF3__27;
            typedef reg_t<uint32_t, 0x40005c70, rw_t<uint32_t>> r_TXBUF3__28;
            typedef reg_t<uint32_t, 0x40005c74, rw_t<uint32_t>> r_TXBUF3__29;
            typedef reg_t<uint32_t, 0x40005c78, rw_t<uint32_t>> r_TXBUF3__30;
            typedef reg_t<uint32_t, 0x40005c7c, rw_t<uint32_t>> r_TXBUF3__31;
            typedef reg_t<uint32_t, 0x40005c80, rw_t<uint32_t>> r_TXBUF3__32;
            typedef reg_t<uint32_t, 0x40005c84, rw_t<uint32_t>> r_TXBUF3__33;
            typedef reg_t<uint32_t, 0x40005c88, rw_t<uint32_t>> r_TXBUF3__34;
            typedef reg_t<uint32_t, 0x40005c8c, rw_t<uint32_t>> r_TXBUF3__35;
            typedef reg_t<uint32_t, 0x40005c90, rw_t<uint32_t>> r_TXBUF3__36;
            typedef reg_t<uint32_t, 0x40005c94, rw_t<uint32_t>> r_TXBUF3__37;
            typedef reg_t<uint32_t, 0x40005c98, rw_t<uint32_t>> r_TXBUF3__38;
            typedef reg_t<uint32_t, 0x40005c9c, rw_t<uint32_t>> r_TXBUF3__39;
            typedef reg_t<uint32_t, 0x40005ca0, rw_t<uint32_t>> r_TXBUF3__40;
            typedef reg_t<uint32_t, 0x40005ca4, rw_t<uint32_t>> r_TXBUF3__41;
            typedef reg_t<uint32_t, 0x40005ca8, rw_t<uint32_t>> r_TXBUF3__42;
            typedef reg_t<uint32_t, 0x40005cac, rw_t<uint32_t>> r_TXBUF3__43;
            typedef reg_t<uint32_t, 0x40005cb0, rw_t<uint32_t>> r_TXBUF3__44;
            typedef reg_t<uint32_t, 0x40005cb4, rw_t<uint32_t>> r_TXBUF3__45;
            typedef reg_t<uint32_t, 0x40005cb8, rw_t<uint32_t>> r_TXBUF3__46;
            typedef reg_t<uint32_t, 0x40005cbc, rw_t<uint32_t>> r_TXBUF3__47;
            typedef reg_t<uint32_t, 0x40005cc0, rw_t<uint32_t>> r_TXBUF3__48;
            typedef reg_t<uint32_t, 0x40005cc4, rw_t<uint32_t>> r_TXBUF3__49;
            typedef reg_t<uint32_t, 0x40005cc8, rw_t<uint32_t>> r_TXBUF3__50;
            typedef reg_t<uint32_t, 0x40005ccc, rw_t<uint32_t>> r_TXBUF3__51;
            typedef reg_t<uint32_t, 0x40005cd0, rw_t<uint32_t>> r_TXBUF3__52;
            typedef reg_t<uint32_t, 0x40005cd4, rw_t<uint32_t>> r_TXBUF3__53;
            typedef reg_t<uint32_t, 0x40005cd8, rw_t<uint32_t>> r_TXBUF3__54;
            typedef reg_t<uint32_t, 0x40005cdc, rw_t<uint32_t>> r_TXBUF3__55;
            typedef reg_t<uint32_t, 0x40005ce0, rw_t<uint32_t>> r_TXBUF3__56;
            typedef reg_t<uint32_t, 0x40005ce4, rw_t<uint32_t>> r_TXBUF3__57;
            typedef reg_t<uint32_t, 0x40005ce8, rw_t<uint32_t>> r_TXBUF3__58;
            typedef reg_t<uint32_t, 0x40005cec, rw_t<uint32_t>> r_TXBUF3__59;
            typedef reg_t<uint32_t, 0x40005cf0, rw_t<uint32_t>> r_TXBUF3__60;
            typedef reg_t<uint32_t, 0x40005cf4, rw_t<uint32_t>> r_TXBUF3__61;
            typedef reg_t<uint32_t, 0x40005cf8, rw_t<uint32_t>> r_TXBUF3__62;
            typedef reg_t<uint32_t, 0x40005cfc, rw_t<uint32_t>> r_TXBUF3__63;
            typedef reg_t<uint32_t, 0x40005d00, rw_t<uint32_t>> r_TXBUF3__64;
            typedef reg_t<uint32_t, 0x40005d04, rw_t<uint32_t>> r_TXBUF3__65;
            typedef reg_t<uint32_t, 0x40005d08, rw_t<uint32_t>> r_TXBUF3__66;
            typedef reg_t<uint32_t, 0x40005d0c, rw_t<uint32_t>> r_TXBUF3__67;
            typedef reg_t<uint32_t, 0x40005d10, rw_t<uint32_t>> r_TXBUF3__68;
            typedef reg_t<uint32_t, 0x40005d14, rw_t<uint32_t>> r_TXBUF3__69;
            typedef reg_t<uint32_t, 0x40005d18, rw_t<uint32_t>> r_TXBUF3__70;
            typedef reg_t<uint32_t, 0x40005d1c, rw_t<uint32_t>> r_TXBUF3__71;
            typedef reg_t<uint32_t, 0x40005d20, rw_t<uint32_t>> r_TXBUF3__72;
            typedef reg_t<uint32_t, 0x40005d24, rw_t<uint32_t>> r_TXBUF3__73;
            typedef reg_t<uint32_t, 0x40005d28, rw_t<uint32_t>> r_TXBUF3__74;
            typedef reg_t<uint32_t, 0x40005d2c, rw_t<uint32_t>> r_TXBUF3__75;
            typedef reg_t<uint32_t, 0x40005d30, rw_t<uint32_t>> r_TXBUF3__76;
            typedef reg_t<uint32_t, 0x40005d34, rw_t<uint32_t>> r_TXBUF3__77;
            typedef reg_t<uint32_t, 0x40005d38, rw_t<uint32_t>> r_TXBUF3__78;
            typedef reg_t<uint32_t, 0x40005d3c, rw_t<uint32_t>> r_TXBUF3__79;
            typedef reg_t<uint32_t, 0x40005d40, rw_t<uint32_t>> r_TXBUF3__80;
            typedef reg_t<uint32_t, 0x40005d44, rw_t<uint32_t>> r_TXBUF3__81;
            typedef reg_t<uint32_t, 0x40005d48, rw_t<uint32_t>> r_TXBUF3__82;
            typedef reg_t<uint32_t, 0x40005d4c, rw_t<uint32_t>> r_TXBUF3__83;
            typedef reg_t<uint32_t, 0x40005d50, rw_t<uint32_t>> r_TXBUF3__84;
            typedef reg_t<uint32_t, 0x40005d54, rw_t<uint32_t>> r_TXBUF3__85;
            typedef reg_t<uint32_t, 0x40005d58, rw_t<uint32_t>> r_TXBUF3__86;
            typedef reg_t<uint32_t, 0x40005d5c, rw_t<uint32_t>> r_TXBUF3__87;
            typedef reg_t<uint32_t, 0x40005d60, rw_t<uint32_t>> r_TXBUF3__88;
            typedef reg_t<uint32_t, 0x40005d64, rw_t<uint32_t>> r_TXBUF3__89;
            typedef reg_t<uint32_t, 0x40005d68, rw_t<uint32_t>> r_TXBUF3__90;
            typedef reg_t<uint32_t, 0x40005d6c, rw_t<uint32_t>> r_TXBUF3__91;
            typedef reg_t<uint32_t, 0x40005d70, rw_t<uint32_t>> r_TXBUF3__92;
            typedef reg_t<uint32_t, 0x40005d74, rw_t<uint32_t>> r_TXBUF3__93;
            typedef reg_t<uint32_t, 0x40005d78, rw_t<uint32_t>> r_TXBUF3__94;
            typedef reg_t<uint32_t, 0x40005d7c, rw_t<uint32_t>> r_TXBUF3__95;
            typedef reg_t<uint32_t, 0x40005d80, rw_t<uint32_t>> r_TXBUF3__96;
            typedef reg_t<uint32_t, 0x40005d84, rw_t<uint32_t>> r_TXBUF3__97;
            typedef reg_t<uint32_t, 0x40005d88, rw_t<uint32_t>> r_TXBUF3__98;
            typedef reg_t<uint32_t, 0x40005d8c, rw_t<uint32_t>> r_TXBUF3__99;
            typedef reg_t<uint32_t, 0x40005d90, rw_t<uint32_t>> r_TXBUF3__100;
            typedef reg_t<uint32_t, 0x40005d94, rw_t<uint32_t>> r_TXBUF3__101;
            typedef reg_t<uint32_t, 0x40005d98, rw_t<uint32_t>> r_TXBUF3__102;
            typedef reg_t<uint32_t, 0x40005d9c, rw_t<uint32_t>> r_TXBUF3__103;
            typedef reg_t<uint32_t, 0x40005da0, rw_t<uint32_t>> r_TXBUF3__104;
            typedef reg_t<uint32_t, 0x40005da4, rw_t<uint32_t>> r_TXBUF3__105;
            typedef reg_t<uint32_t, 0x40005da8, rw_t<uint32_t>> r_TXBUF3__106;
            typedef reg_t<uint32_t, 0x40005dac, rw_t<uint32_t>> r_TXBUF3__107;
            typedef reg_t<uint32_t, 0x40005db0, rw_t<uint32_t>> r_TXBUF3__108;
            typedef reg_t<uint32_t, 0x40005db4, rw_t<uint32_t>> r_TXBUF3__109;
            typedef reg_t<uint32_t, 0x40005db8, rw_t<uint32_t>> r_TXBUF3__110;
            typedef reg_t<uint32_t, 0x40005dbc, rw_t<uint32_t>> r_TXBUF3__111;
            typedef reg_t<uint32_t, 0x40005dc0, rw_t<uint32_t>> r_TXBUF3__112;
            typedef reg_t<uint32_t, 0x40005dc4, rw_t<uint32_t>> r_TXBUF3__113;
            typedef reg_t<uint32_t, 0x40005dc8, rw_t<uint32_t>> r_TXBUF3__114;
            typedef reg_t<uint32_t, 0x40005dcc, rw_t<uint32_t>> r_TXBUF3__115;
            typedef reg_t<uint32_t, 0x40005dd0, rw_t<uint32_t>> r_TXBUF3__116;
            typedef reg_t<uint32_t, 0x40005dd4, rw_t<uint32_t>> r_TXBUF3__117;
            typedef reg_t<uint32_t, 0x40005dd8, rw_t<uint32_t>> r_TXBUF3__118;
            typedef reg_t<uint32_t, 0x40005ddc, rw_t<uint32_t>> r_TXBUF3__119;
            typedef reg_t<uint32_t, 0x40005de0, rw_t<uint32_t>> r_TXBUF3__120;
            typedef reg_t<uint32_t, 0x40005de4, rw_t<uint32_t>> r_TXBUF3__121;
            typedef reg_t<uint32_t, 0x40005de8, rw_t<uint32_t>> r_TXBUF3__122;
            typedef reg_t<uint32_t, 0x40005dec, rw_t<uint32_t>> r_TXBUF3__123;
            typedef reg_t<uint32_t, 0x40005df0, rw_t<uint32_t>> r_TXBUF3__124;
            typedef reg_t<uint32_t, 0x40005df4, rw_t<uint32_t>> r_TXBUF3__125;
            typedef reg_t<uint32_t, 0x40005df8, rw_t<uint32_t>> r_TXBUF3__126;
            typedef reg_t<uint32_t, 0x40005dfc, rw_t<uint32_t>> r_TXBUF3__127;
            typedef reg_t<uint32_t, 0x40005e00, rw_t<uint32_t>> r_TXBUF3__128;
            typedef reg_t<uint32_t, 0x40005e04, rw_t<uint32_t>> r_TXBUF3__129;
            typedef reg_t<uint32_t, 0x40005e08, rw_t<uint32_t>> r_TXBUF3__130;
            typedef reg_t<uint32_t, 0x40005e0c, rw_t<uint32_t>> r_TXBUF3__131;
            typedef reg_t<uint32_t, 0x40005e10, rw_t<uint32_t>> r_TXBUF3__132;
            typedef reg_t<uint32_t, 0x40005e14, rw_t<uint32_t>> r_TXBUF3__133;
            typedef reg_t<uint32_t, 0x40005e18, rw_t<uint32_t>> r_TXBUF3__134;
            typedef reg_t<uint32_t, 0x40005e1c, rw_t<uint32_t>> r_TXBUF3__135;
            typedef reg_t<uint32_t, 0x40005e20, rw_t<uint32_t>> r_TXBUF3__136;
            typedef reg_t<uint32_t, 0x40005e24, rw_t<uint32_t>> r_TXBUF3__137;
            typedef reg_t<uint32_t, 0x40005e28, rw_t<uint32_t>> r_TXBUF3__138;
            typedef reg_t<uint32_t, 0x40005e2c, rw_t<uint32_t>> r_TXBUF3__139;
            typedef reg_t<uint32_t, 0x40005e30, rw_t<uint32_t>> r_TXBUF3__140;
            typedef reg_t<uint32_t, 0x40005e34, rw_t<uint32_t>> r_TXBUF3__141;
            typedef reg_t<uint32_t, 0x40005e38, rw_t<uint32_t>> r_TXBUF3__142;
            typedef reg_t<uint32_t, 0x40005e3c, rw_t<uint32_t>> r_TXBUF3__143;
            typedef reg_t<uint32_t, 0x40005e40, rw_t<uint32_t>> r_TXBUF3__144;
            typedef reg_t<uint32_t, 0x40005e44, rw_t<uint32_t>> r_TXBUF3__145;
            typedef reg_t<uint32_t, 0x40005e48, rw_t<uint32_t>> r_TXBUF3__146;
            typedef reg_t<uint32_t, 0x40005e4c, rw_t<uint32_t>> r_TXBUF3__147;
            typedef reg_t<uint32_t, 0x40005e50, rw_t<uint32_t>> r_TXBUF3__148;
            typedef reg_t<uint32_t, 0x40005e54, rw_t<uint32_t>> r_TXBUF3__149;
            typedef reg_t<uint32_t, 0x40005e58, rw_t<uint32_t>> r_TXBUF3__150;
            typedef reg_t<uint32_t, 0x40005e5c, rw_t<uint32_t>> r_TXBUF3__151;
            typedef reg_t<uint32_t, 0x40005e60, rw_t<uint32_t>> r_TXBUF3__152;
            typedef reg_t<uint32_t, 0x40005e64, rw_t<uint32_t>> r_TXBUF3__153;
            typedef reg_t<uint32_t, 0x40005e68, rw_t<uint32_t>> r_TXBUF3__154;
            typedef reg_t<uint32_t, 0x40005e6c, rw_t<uint32_t>> r_TXBUF3__155;
            typedef reg_t<uint32_t, 0x40005e70, rw_t<uint32_t>> r_TXBUF3__156;
            typedef reg_t<uint32_t, 0x40005e74, rw_t<uint32_t>> r_TXBUF3__157;
            typedef reg_t<uint32_t, 0x40005e78, rw_t<uint32_t>> r_TXBUF3__158;
            typedef reg_t<uint32_t, 0x40005e7c, rw_t<uint32_t>> r_TXBUF3__159;
            typedef reg_t<uint32_t, 0x40005e80, rw_t<uint32_t>> r_TXBUF3__160;
            typedef reg_t<uint32_t, 0x40005e84, rw_t<uint32_t>> r_TXBUF3__161;
            typedef reg_t<uint32_t, 0x40005e88, rw_t<uint32_t>> r_TXBUF3__162;
            typedef reg_t<uint32_t, 0x40005e8c, rw_t<uint32_t>> r_TXBUF3__163;
            typedef reg_t<uint32_t, 0x40005e90, rw_t<uint32_t>> r_TXBUF3__164;
            typedef reg_t<uint32_t, 0x40005e94, rw_t<uint32_t>> r_TXBUF3__165;
            typedef reg_t<uint32_t, 0x40005e98, rw_t<uint32_t>> r_TXBUF3__166;
            typedef reg_t<uint32_t, 0x40005e9c, rw_t<uint32_t>> r_TXBUF3__167;
            typedef reg_t<uint32_t, 0x40005ea0, rw_t<uint32_t>> r_TXBUF3__168;
            typedef reg_t<uint32_t, 0x40005ea4, rw_t<uint32_t>> r_TXBUF3__169;
            typedef reg_t<uint32_t, 0x40005ea8, rw_t<uint32_t>> r_TXBUF3__170;
            typedef reg_t<uint32_t, 0x40005eac, rw_t<uint32_t>> r_TXBUF3__171;
            typedef reg_t<uint32_t, 0x40005eb0, rw_t<uint32_t>> r_TXBUF3__172;
            typedef reg_t<uint32_t, 0x40005eb4, rw_t<uint32_t>> r_TXBUF3__173;
            typedef reg_t<uint32_t, 0x40005eb8, rw_t<uint32_t>> r_TXBUF3__174;
            typedef reg_t<uint32_t, 0x40005ebc, rw_t<uint32_t>> r_TXBUF3__175;
            typedef reg_t<uint32_t, 0x40005ec0, rw_t<uint32_t>> r_TXBUF3__176;
            typedef reg_t<uint32_t, 0x40005ec4, rw_t<uint32_t>> r_TXBUF3__177;
            typedef reg_t<uint32_t, 0x40005ec8, rw_t<uint32_t>> r_TXBUF3__178;
            typedef reg_t<uint32_t, 0x40005ecc, rw_t<uint32_t>> r_TXBUF3__179;
            typedef reg_t<uint32_t, 0x40005ed0, rw_t<uint32_t>> r_TXBUF3__180;
            typedef reg_t<uint32_t, 0x40005ed4, rw_t<uint32_t>> r_TXBUF3__181;
            typedef reg_t<uint32_t, 0x40005ed8, rw_t<uint32_t>> r_TXBUF3__182;
            typedef reg_t<uint32_t, 0x40005edc, rw_t<uint32_t>> r_TXBUF3__183;
            typedef reg_t<uint32_t, 0x40005ee0, rw_t<uint32_t>> r_TXBUF3__184;
            typedef reg_t<uint32_t, 0x40005ee4, rw_t<uint32_t>> r_TXBUF3__185;
            typedef reg_t<uint32_t, 0x40005ee8, rw_t<uint32_t>> r_TXBUF3__186;
            typedef reg_t<uint32_t, 0x40005eec, rw_t<uint32_t>> r_TXBUF3__187;
            typedef reg_t<uint32_t, 0x40005ef0, rw_t<uint32_t>> r_TXBUF3__188;
            typedef reg_t<uint32_t, 0x40005ef4, rw_t<uint32_t>> r_TXBUF3__189;
            typedef reg_t<uint32_t, 0x40005ef8, rw_t<uint32_t>> r_TXBUF3__190;
            typedef reg_t<uint32_t, 0x40005efc, rw_t<uint32_t>> r_TXBUF3__191;
            typedef reg_t<uint32_t, 0x40005f00, rw_t<uint32_t>> r_TXBUF3__192;
            typedef reg_t<uint32_t, 0x40005f04, rw_t<uint32_t>> r_TXBUF3__193;
            typedef reg_t<uint32_t, 0x40005f08, rw_t<uint32_t>> r_TXBUF3__194;
            typedef reg_t<uint32_t, 0x40005f0c, rw_t<uint32_t>> r_TXBUF3__195;
            typedef reg_t<uint32_t, 0x40005f10, rw_t<uint32_t>> r_TXBUF3__196;
            typedef reg_t<uint32_t, 0x40005f14, rw_t<uint32_t>> r_TXBUF3__197;
            typedef reg_t<uint32_t, 0x40005f18, rw_t<uint32_t>> r_TXBUF3__198;
            typedef reg_t<uint32_t, 0x40005f1c, rw_t<uint32_t>> r_TXBUF3__199;
            typedef reg_t<uint32_t, 0x40005f20, rw_t<uint32_t>> r_TXBUF3__200;
            typedef reg_t<uint32_t, 0x40005f24, rw_t<uint32_t>> r_TXBUF3__201;
            typedef reg_t<uint32_t, 0x40005f28, rw_t<uint32_t>> r_TXBUF3__202;
            typedef reg_t<uint32_t, 0x40005f2c, rw_t<uint32_t>> r_TXBUF3__203;
            typedef reg_t<uint32_t, 0x40005f30, rw_t<uint32_t>> r_TXBUF3__204;
            typedef reg_t<uint32_t, 0x40005f34, rw_t<uint32_t>> r_TXBUF3__205;
            typedef reg_t<uint32_t, 0x40005f38, rw_t<uint32_t>> r_TXBUF3__206;
            typedef reg_t<uint32_t, 0x40005f3c, rw_t<uint32_t>> r_TXBUF3__207;
            typedef reg_t<uint32_t, 0x40005f40, rw_t<uint32_t>> r_TXBUF3__208;
            typedef reg_t<uint32_t, 0x40005f44, rw_t<uint32_t>> r_TXBUF3__209;
            typedef reg_t<uint32_t, 0x40005f48, rw_t<uint32_t>> r_TXBUF3__210;
            typedef reg_t<uint32_t, 0x40005f4c, rw_t<uint32_t>> r_TXBUF3__211;
            typedef reg_t<uint32_t, 0x40005f50, rw_t<uint32_t>> r_TXBUF3__212;
            typedef reg_t<uint32_t, 0x40005f54, rw_t<uint32_t>> r_TXBUF3__213;
            typedef reg_t<uint32_t, 0x40005f58, rw_t<uint32_t>> r_TXBUF3__214;
            typedef reg_t<uint32_t, 0x40005f5c, rw_t<uint32_t>> r_TXBUF3__215;
            typedef reg_t<uint32_t, 0x40005f60, rw_t<uint32_t>> r_TXBUF3__216;
            typedef reg_t<uint32_t, 0x40005f64, rw_t<uint32_t>> r_TXBUF3__217;
            typedef reg_t<uint32_t, 0x40005f68, rw_t<uint32_t>> r_TXBUF3__218;
            typedef reg_t<uint32_t, 0x40005f6c, rw_t<uint32_t>> r_TXBUF3__219;
            typedef reg_t<uint32_t, 0x40005f70, rw_t<uint32_t>> r_TXBUF3__220;
            typedef reg_t<uint32_t, 0x40005f74, rw_t<uint32_t>> r_TXBUF3__221;
            typedef reg_t<uint32_t, 0x40005f78, rw_t<uint32_t>> r_TXBUF3__222;
            typedef reg_t<uint32_t, 0x40005f7c, rw_t<uint32_t>> r_TXBUF3__223;
            typedef reg_t<uint32_t, 0x40005f80, rw_t<uint32_t>> r_TXBUF3__224;
            typedef reg_t<uint32_t, 0x40005f84, rw_t<uint32_t>> r_TXBUF3__225;
            typedef reg_t<uint32_t, 0x40005f88, rw_t<uint32_t>> r_TXBUF3__226;
            typedef reg_t<uint32_t, 0x40005f8c, rw_t<uint32_t>> r_TXBUF3__227;
            typedef reg_t<uint32_t, 0x40005f90, rw_t<uint32_t>> r_TXBUF3__228;
            typedef reg_t<uint32_t, 0x40005f94, rw_t<uint32_t>> r_TXBUF3__229;
            typedef reg_t<uint32_t, 0x40005f98, rw_t<uint32_t>> r_TXBUF3__230;
            typedef reg_t<uint32_t, 0x40005f9c, rw_t<uint32_t>> r_TXBUF3__231;
            typedef reg_t<uint32_t, 0x40005fa0, rw_t<uint32_t>> r_TXBUF3__232;
            typedef reg_t<uint32_t, 0x40005fa4, rw_t<uint32_t>> r_TXBUF3__233;
            typedef reg_t<uint32_t, 0x40005fa8, rw_t<uint32_t>> r_TXBUF3__234;
            typedef reg_t<uint32_t, 0x40005fac, rw_t<uint32_t>> r_TXBUF3__235;
            typedef reg_t<uint32_t, 0x40005fb0, rw_t<uint32_t>> r_TXBUF3__236;
            typedef reg_t<uint32_t, 0x40005fb4, rw_t<uint32_t>> r_TXBUF3__237;
            typedef reg_t<uint32_t, 0x40005fb8, rw_t<uint32_t>> r_TXBUF3__238;
            typedef reg_t<uint32_t, 0x40005fbc, rw_t<uint32_t>> r_TXBUF3__239;
            typedef reg_t<uint32_t, 0x40005fc0, rw_t<uint32_t>> r_TXBUF3__240;
            typedef reg_t<uint32_t, 0x40005fc4, rw_t<uint32_t>> r_TXBUF3__241;
            typedef reg_t<uint32_t, 0x40005fc8, rw_t<uint32_t>> r_TXBUF3__242;
            typedef reg_t<uint32_t, 0x40005fcc, rw_t<uint32_t>> r_TXBUF3__243;
            typedef reg_t<uint32_t, 0x40005fd0, rw_t<uint32_t>> r_TXBUF3__244;
            typedef reg_t<uint32_t, 0x40005fd4, rw_t<uint32_t>> r_TXBUF3__245;
            typedef reg_t<uint32_t, 0x40005fd8, rw_t<uint32_t>> r_TXBUF3__246;
            typedef reg_t<uint32_t, 0x40005fdc, rw_t<uint32_t>> r_TXBUF3__247;
            typedef reg_t<uint32_t, 0x40005fe0, rw_t<uint32_t>> r_TXBUF3__248;
            typedef reg_t<uint32_t, 0x40005fe4, rw_t<uint32_t>> r_TXBUF3__249;
            typedef reg_t<uint32_t, 0x40005fe8, rw_t<uint32_t>> r_TXBUF3__250;
            typedef reg_t<uint32_t, 0x40005fec, rw_t<uint32_t>> r_TXBUF3__251;
            typedef reg_t<uint32_t, 0x40005ff0, rw_t<uint32_t>> r_TXBUF3__252;
            typedef reg_t<uint32_t, 0x40005ff4, rw_t<uint32_t>> r_TXBUF3__253;
            typedef reg_t<uint32_t, 0x40005ff8, rw_t<uint32_t>> r_TXBUF3__254;
            typedef reg_t<uint32_t, 0x40005ffc, rw_t<uint32_t>> r_TXBUF3__255;
        } // end of TXBUF3_[%s]
        namespace TXBUF4_ {
            // TXBUF4_ register
            typedef reg_t<uint32_t, 0x40006000, rw_t<uint32_t>> r_TXBUF4__0;
            typedef reg_t<uint32_t, 0x40006004, rw_t<uint32_t>> r_TXBUF4__1;
            typedef reg_t<uint32_t, 0x40006008, rw_t<uint32_t>> r_TXBUF4__2;
            typedef reg_t<uint32_t, 0x4000600c, rw_t<uint32_t>> r_TXBUF4__3;
            typedef reg_t<uint32_t, 0x40006010, rw_t<uint32_t>> r_TXBUF4__4;
            typedef reg_t<uint32_t, 0x40006014, rw_t<uint32_t>> r_TXBUF4__5;
            typedef reg_t<uint32_t, 0x40006018, rw_t<uint32_t>> r_TXBUF4__6;
            typedef reg_t<uint32_t, 0x4000601c, rw_t<uint32_t>> r_TXBUF4__7;
            typedef reg_t<uint32_t, 0x40006020, rw_t<uint32_t>> r_TXBUF4__8;
            typedef reg_t<uint32_t, 0x40006024, rw_t<uint32_t>> r_TXBUF4__9;
            typedef reg_t<uint32_t, 0x40006028, rw_t<uint32_t>> r_TXBUF4__10;
            typedef reg_t<uint32_t, 0x4000602c, rw_t<uint32_t>> r_TXBUF4__11;
            typedef reg_t<uint32_t, 0x40006030, rw_t<uint32_t>> r_TXBUF4__12;
            typedef reg_t<uint32_t, 0x40006034, rw_t<uint32_t>> r_TXBUF4__13;
            typedef reg_t<uint32_t, 0x40006038, rw_t<uint32_t>> r_TXBUF4__14;
            typedef reg_t<uint32_t, 0x4000603c, rw_t<uint32_t>> r_TXBUF4__15;
            typedef reg_t<uint32_t, 0x40006040, rw_t<uint32_t>> r_TXBUF4__16;
            typedef reg_t<uint32_t, 0x40006044, rw_t<uint32_t>> r_TXBUF4__17;
            typedef reg_t<uint32_t, 0x40006048, rw_t<uint32_t>> r_TXBUF4__18;
            typedef reg_t<uint32_t, 0x4000604c, rw_t<uint32_t>> r_TXBUF4__19;
            typedef reg_t<uint32_t, 0x40006050, rw_t<uint32_t>> r_TXBUF4__20;
            typedef reg_t<uint32_t, 0x40006054, rw_t<uint32_t>> r_TXBUF4__21;
            typedef reg_t<uint32_t, 0x40006058, rw_t<uint32_t>> r_TXBUF4__22;
            typedef reg_t<uint32_t, 0x4000605c, rw_t<uint32_t>> r_TXBUF4__23;
            typedef reg_t<uint32_t, 0x40006060, rw_t<uint32_t>> r_TXBUF4__24;
            typedef reg_t<uint32_t, 0x40006064, rw_t<uint32_t>> r_TXBUF4__25;
            typedef reg_t<uint32_t, 0x40006068, rw_t<uint32_t>> r_TXBUF4__26;
            typedef reg_t<uint32_t, 0x4000606c, rw_t<uint32_t>> r_TXBUF4__27;
            typedef reg_t<uint32_t, 0x40006070, rw_t<uint32_t>> r_TXBUF4__28;
            typedef reg_t<uint32_t, 0x40006074, rw_t<uint32_t>> r_TXBUF4__29;
            typedef reg_t<uint32_t, 0x40006078, rw_t<uint32_t>> r_TXBUF4__30;
            typedef reg_t<uint32_t, 0x4000607c, rw_t<uint32_t>> r_TXBUF4__31;
            typedef reg_t<uint32_t, 0x40006080, rw_t<uint32_t>> r_TXBUF4__32;
            typedef reg_t<uint32_t, 0x40006084, rw_t<uint32_t>> r_TXBUF4__33;
            typedef reg_t<uint32_t, 0x40006088, rw_t<uint32_t>> r_TXBUF4__34;
            typedef reg_t<uint32_t, 0x4000608c, rw_t<uint32_t>> r_TXBUF4__35;
            typedef reg_t<uint32_t, 0x40006090, rw_t<uint32_t>> r_TXBUF4__36;
            typedef reg_t<uint32_t, 0x40006094, rw_t<uint32_t>> r_TXBUF4__37;
            typedef reg_t<uint32_t, 0x40006098, rw_t<uint32_t>> r_TXBUF4__38;
            typedef reg_t<uint32_t, 0x4000609c, rw_t<uint32_t>> r_TXBUF4__39;
            typedef reg_t<uint32_t, 0x400060a0, rw_t<uint32_t>> r_TXBUF4__40;
            typedef reg_t<uint32_t, 0x400060a4, rw_t<uint32_t>> r_TXBUF4__41;
            typedef reg_t<uint32_t, 0x400060a8, rw_t<uint32_t>> r_TXBUF4__42;
            typedef reg_t<uint32_t, 0x400060ac, rw_t<uint32_t>> r_TXBUF4__43;
            typedef reg_t<uint32_t, 0x400060b0, rw_t<uint32_t>> r_TXBUF4__44;
            typedef reg_t<uint32_t, 0x400060b4, rw_t<uint32_t>> r_TXBUF4__45;
            typedef reg_t<uint32_t, 0x400060b8, rw_t<uint32_t>> r_TXBUF4__46;
            typedef reg_t<uint32_t, 0x400060bc, rw_t<uint32_t>> r_TXBUF4__47;
            typedef reg_t<uint32_t, 0x400060c0, rw_t<uint32_t>> r_TXBUF4__48;
            typedef reg_t<uint32_t, 0x400060c4, rw_t<uint32_t>> r_TXBUF4__49;
            typedef reg_t<uint32_t, 0x400060c8, rw_t<uint32_t>> r_TXBUF4__50;
            typedef reg_t<uint32_t, 0x400060cc, rw_t<uint32_t>> r_TXBUF4__51;
            typedef reg_t<uint32_t, 0x400060d0, rw_t<uint32_t>> r_TXBUF4__52;
            typedef reg_t<uint32_t, 0x400060d4, rw_t<uint32_t>> r_TXBUF4__53;
            typedef reg_t<uint32_t, 0x400060d8, rw_t<uint32_t>> r_TXBUF4__54;
            typedef reg_t<uint32_t, 0x400060dc, rw_t<uint32_t>> r_TXBUF4__55;
            typedef reg_t<uint32_t, 0x400060e0, rw_t<uint32_t>> r_TXBUF4__56;
            typedef reg_t<uint32_t, 0x400060e4, rw_t<uint32_t>> r_TXBUF4__57;
            typedef reg_t<uint32_t, 0x400060e8, rw_t<uint32_t>> r_TXBUF4__58;
            typedef reg_t<uint32_t, 0x400060ec, rw_t<uint32_t>> r_TXBUF4__59;
            typedef reg_t<uint32_t, 0x400060f0, rw_t<uint32_t>> r_TXBUF4__60;
            typedef reg_t<uint32_t, 0x400060f4, rw_t<uint32_t>> r_TXBUF4__61;
            typedef reg_t<uint32_t, 0x400060f8, rw_t<uint32_t>> r_TXBUF4__62;
            typedef reg_t<uint32_t, 0x400060fc, rw_t<uint32_t>> r_TXBUF4__63;
            typedef reg_t<uint32_t, 0x40006100, rw_t<uint32_t>> r_TXBUF4__64;
            typedef reg_t<uint32_t, 0x40006104, rw_t<uint32_t>> r_TXBUF4__65;
            typedef reg_t<uint32_t, 0x40006108, rw_t<uint32_t>> r_TXBUF4__66;
            typedef reg_t<uint32_t, 0x4000610c, rw_t<uint32_t>> r_TXBUF4__67;
            typedef reg_t<uint32_t, 0x40006110, rw_t<uint32_t>> r_TXBUF4__68;
            typedef reg_t<uint32_t, 0x40006114, rw_t<uint32_t>> r_TXBUF4__69;
            typedef reg_t<uint32_t, 0x40006118, rw_t<uint32_t>> r_TXBUF4__70;
            typedef reg_t<uint32_t, 0x4000611c, rw_t<uint32_t>> r_TXBUF4__71;
            typedef reg_t<uint32_t, 0x40006120, rw_t<uint32_t>> r_TXBUF4__72;
            typedef reg_t<uint32_t, 0x40006124, rw_t<uint32_t>> r_TXBUF4__73;
            typedef reg_t<uint32_t, 0x40006128, rw_t<uint32_t>> r_TXBUF4__74;
            typedef reg_t<uint32_t, 0x4000612c, rw_t<uint32_t>> r_TXBUF4__75;
            typedef reg_t<uint32_t, 0x40006130, rw_t<uint32_t>> r_TXBUF4__76;
            typedef reg_t<uint32_t, 0x40006134, rw_t<uint32_t>> r_TXBUF4__77;
            typedef reg_t<uint32_t, 0x40006138, rw_t<uint32_t>> r_TXBUF4__78;
            typedef reg_t<uint32_t, 0x4000613c, rw_t<uint32_t>> r_TXBUF4__79;
            typedef reg_t<uint32_t, 0x40006140, rw_t<uint32_t>> r_TXBUF4__80;
            typedef reg_t<uint32_t, 0x40006144, rw_t<uint32_t>> r_TXBUF4__81;
            typedef reg_t<uint32_t, 0x40006148, rw_t<uint32_t>> r_TXBUF4__82;
            typedef reg_t<uint32_t, 0x4000614c, rw_t<uint32_t>> r_TXBUF4__83;
            typedef reg_t<uint32_t, 0x40006150, rw_t<uint32_t>> r_TXBUF4__84;
            typedef reg_t<uint32_t, 0x40006154, rw_t<uint32_t>> r_TXBUF4__85;
            typedef reg_t<uint32_t, 0x40006158, rw_t<uint32_t>> r_TXBUF4__86;
            typedef reg_t<uint32_t, 0x4000615c, rw_t<uint32_t>> r_TXBUF4__87;
            typedef reg_t<uint32_t, 0x40006160, rw_t<uint32_t>> r_TXBUF4__88;
            typedef reg_t<uint32_t, 0x40006164, rw_t<uint32_t>> r_TXBUF4__89;
            typedef reg_t<uint32_t, 0x40006168, rw_t<uint32_t>> r_TXBUF4__90;
            typedef reg_t<uint32_t, 0x4000616c, rw_t<uint32_t>> r_TXBUF4__91;
            typedef reg_t<uint32_t, 0x40006170, rw_t<uint32_t>> r_TXBUF4__92;
            typedef reg_t<uint32_t, 0x40006174, rw_t<uint32_t>> r_TXBUF4__93;
            typedef reg_t<uint32_t, 0x40006178, rw_t<uint32_t>> r_TXBUF4__94;
            typedef reg_t<uint32_t, 0x4000617c, rw_t<uint32_t>> r_TXBUF4__95;
            typedef reg_t<uint32_t, 0x40006180, rw_t<uint32_t>> r_TXBUF4__96;
            typedef reg_t<uint32_t, 0x40006184, rw_t<uint32_t>> r_TXBUF4__97;
            typedef reg_t<uint32_t, 0x40006188, rw_t<uint32_t>> r_TXBUF4__98;
            typedef reg_t<uint32_t, 0x4000618c, rw_t<uint32_t>> r_TXBUF4__99;
            typedef reg_t<uint32_t, 0x40006190, rw_t<uint32_t>> r_TXBUF4__100;
            typedef reg_t<uint32_t, 0x40006194, rw_t<uint32_t>> r_TXBUF4__101;
            typedef reg_t<uint32_t, 0x40006198, rw_t<uint32_t>> r_TXBUF4__102;
            typedef reg_t<uint32_t, 0x4000619c, rw_t<uint32_t>> r_TXBUF4__103;
            typedef reg_t<uint32_t, 0x400061a0, rw_t<uint32_t>> r_TXBUF4__104;
            typedef reg_t<uint32_t, 0x400061a4, rw_t<uint32_t>> r_TXBUF4__105;
            typedef reg_t<uint32_t, 0x400061a8, rw_t<uint32_t>> r_TXBUF4__106;
            typedef reg_t<uint32_t, 0x400061ac, rw_t<uint32_t>> r_TXBUF4__107;
            typedef reg_t<uint32_t, 0x400061b0, rw_t<uint32_t>> r_TXBUF4__108;
            typedef reg_t<uint32_t, 0x400061b4, rw_t<uint32_t>> r_TXBUF4__109;
            typedef reg_t<uint32_t, 0x400061b8, rw_t<uint32_t>> r_TXBUF4__110;
            typedef reg_t<uint32_t, 0x400061bc, rw_t<uint32_t>> r_TXBUF4__111;
            typedef reg_t<uint32_t, 0x400061c0, rw_t<uint32_t>> r_TXBUF4__112;
            typedef reg_t<uint32_t, 0x400061c4, rw_t<uint32_t>> r_TXBUF4__113;
            typedef reg_t<uint32_t, 0x400061c8, rw_t<uint32_t>> r_TXBUF4__114;
            typedef reg_t<uint32_t, 0x400061cc, rw_t<uint32_t>> r_TXBUF4__115;
            typedef reg_t<uint32_t, 0x400061d0, rw_t<uint32_t>> r_TXBUF4__116;
            typedef reg_t<uint32_t, 0x400061d4, rw_t<uint32_t>> r_TXBUF4__117;
            typedef reg_t<uint32_t, 0x400061d8, rw_t<uint32_t>> r_TXBUF4__118;
            typedef reg_t<uint32_t, 0x400061dc, rw_t<uint32_t>> r_TXBUF4__119;
            typedef reg_t<uint32_t, 0x400061e0, rw_t<uint32_t>> r_TXBUF4__120;
            typedef reg_t<uint32_t, 0x400061e4, rw_t<uint32_t>> r_TXBUF4__121;
            typedef reg_t<uint32_t, 0x400061e8, rw_t<uint32_t>> r_TXBUF4__122;
            typedef reg_t<uint32_t, 0x400061ec, rw_t<uint32_t>> r_TXBUF4__123;
            typedef reg_t<uint32_t, 0x400061f0, rw_t<uint32_t>> r_TXBUF4__124;
            typedef reg_t<uint32_t, 0x400061f4, rw_t<uint32_t>> r_TXBUF4__125;
            typedef reg_t<uint32_t, 0x400061f8, rw_t<uint32_t>> r_TXBUF4__126;
            typedef reg_t<uint32_t, 0x400061fc, rw_t<uint32_t>> r_TXBUF4__127;
            typedef reg_t<uint32_t, 0x40006200, rw_t<uint32_t>> r_TXBUF4__128;
            typedef reg_t<uint32_t, 0x40006204, rw_t<uint32_t>> r_TXBUF4__129;
            typedef reg_t<uint32_t, 0x40006208, rw_t<uint32_t>> r_TXBUF4__130;
            typedef reg_t<uint32_t, 0x4000620c, rw_t<uint32_t>> r_TXBUF4__131;
            typedef reg_t<uint32_t, 0x40006210, rw_t<uint32_t>> r_TXBUF4__132;
            typedef reg_t<uint32_t, 0x40006214, rw_t<uint32_t>> r_TXBUF4__133;
            typedef reg_t<uint32_t, 0x40006218, rw_t<uint32_t>> r_TXBUF4__134;
            typedef reg_t<uint32_t, 0x4000621c, rw_t<uint32_t>> r_TXBUF4__135;
            typedef reg_t<uint32_t, 0x40006220, rw_t<uint32_t>> r_TXBUF4__136;
            typedef reg_t<uint32_t, 0x40006224, rw_t<uint32_t>> r_TXBUF4__137;
            typedef reg_t<uint32_t, 0x40006228, rw_t<uint32_t>> r_TXBUF4__138;
            typedef reg_t<uint32_t, 0x4000622c, rw_t<uint32_t>> r_TXBUF4__139;
            typedef reg_t<uint32_t, 0x40006230, rw_t<uint32_t>> r_TXBUF4__140;
            typedef reg_t<uint32_t, 0x40006234, rw_t<uint32_t>> r_TXBUF4__141;
            typedef reg_t<uint32_t, 0x40006238, rw_t<uint32_t>> r_TXBUF4__142;
            typedef reg_t<uint32_t, 0x4000623c, rw_t<uint32_t>> r_TXBUF4__143;
            typedef reg_t<uint32_t, 0x40006240, rw_t<uint32_t>> r_TXBUF4__144;
            typedef reg_t<uint32_t, 0x40006244, rw_t<uint32_t>> r_TXBUF4__145;
            typedef reg_t<uint32_t, 0x40006248, rw_t<uint32_t>> r_TXBUF4__146;
            typedef reg_t<uint32_t, 0x4000624c, rw_t<uint32_t>> r_TXBUF4__147;
            typedef reg_t<uint32_t, 0x40006250, rw_t<uint32_t>> r_TXBUF4__148;
            typedef reg_t<uint32_t, 0x40006254, rw_t<uint32_t>> r_TXBUF4__149;
            typedef reg_t<uint32_t, 0x40006258, rw_t<uint32_t>> r_TXBUF4__150;
            typedef reg_t<uint32_t, 0x4000625c, rw_t<uint32_t>> r_TXBUF4__151;
            typedef reg_t<uint32_t, 0x40006260, rw_t<uint32_t>> r_TXBUF4__152;
            typedef reg_t<uint32_t, 0x40006264, rw_t<uint32_t>> r_TXBUF4__153;
            typedef reg_t<uint32_t, 0x40006268, rw_t<uint32_t>> r_TXBUF4__154;
            typedef reg_t<uint32_t, 0x4000626c, rw_t<uint32_t>> r_TXBUF4__155;
            typedef reg_t<uint32_t, 0x40006270, rw_t<uint32_t>> r_TXBUF4__156;
            typedef reg_t<uint32_t, 0x40006274, rw_t<uint32_t>> r_TXBUF4__157;
            typedef reg_t<uint32_t, 0x40006278, rw_t<uint32_t>> r_TXBUF4__158;
            typedef reg_t<uint32_t, 0x4000627c, rw_t<uint32_t>> r_TXBUF4__159;
            typedef reg_t<uint32_t, 0x40006280, rw_t<uint32_t>> r_TXBUF4__160;
            typedef reg_t<uint32_t, 0x40006284, rw_t<uint32_t>> r_TXBUF4__161;
            typedef reg_t<uint32_t, 0x40006288, rw_t<uint32_t>> r_TXBUF4__162;
            typedef reg_t<uint32_t, 0x4000628c, rw_t<uint32_t>> r_TXBUF4__163;
            typedef reg_t<uint32_t, 0x40006290, rw_t<uint32_t>> r_TXBUF4__164;
            typedef reg_t<uint32_t, 0x40006294, rw_t<uint32_t>> r_TXBUF4__165;
            typedef reg_t<uint32_t, 0x40006298, rw_t<uint32_t>> r_TXBUF4__166;
            typedef reg_t<uint32_t, 0x4000629c, rw_t<uint32_t>> r_TXBUF4__167;
            typedef reg_t<uint32_t, 0x400062a0, rw_t<uint32_t>> r_TXBUF4__168;
            typedef reg_t<uint32_t, 0x400062a4, rw_t<uint32_t>> r_TXBUF4__169;
            typedef reg_t<uint32_t, 0x400062a8, rw_t<uint32_t>> r_TXBUF4__170;
            typedef reg_t<uint32_t, 0x400062ac, rw_t<uint32_t>> r_TXBUF4__171;
            typedef reg_t<uint32_t, 0x400062b0, rw_t<uint32_t>> r_TXBUF4__172;
            typedef reg_t<uint32_t, 0x400062b4, rw_t<uint32_t>> r_TXBUF4__173;
            typedef reg_t<uint32_t, 0x400062b8, rw_t<uint32_t>> r_TXBUF4__174;
            typedef reg_t<uint32_t, 0x400062bc, rw_t<uint32_t>> r_TXBUF4__175;
            typedef reg_t<uint32_t, 0x400062c0, rw_t<uint32_t>> r_TXBUF4__176;
            typedef reg_t<uint32_t, 0x400062c4, rw_t<uint32_t>> r_TXBUF4__177;
            typedef reg_t<uint32_t, 0x400062c8, rw_t<uint32_t>> r_TXBUF4__178;
            typedef reg_t<uint32_t, 0x400062cc, rw_t<uint32_t>> r_TXBUF4__179;
            typedef reg_t<uint32_t, 0x400062d0, rw_t<uint32_t>> r_TXBUF4__180;
            typedef reg_t<uint32_t, 0x400062d4, rw_t<uint32_t>> r_TXBUF4__181;
            typedef reg_t<uint32_t, 0x400062d8, rw_t<uint32_t>> r_TXBUF4__182;
            typedef reg_t<uint32_t, 0x400062dc, rw_t<uint32_t>> r_TXBUF4__183;
            typedef reg_t<uint32_t, 0x400062e0, rw_t<uint32_t>> r_TXBUF4__184;
            typedef reg_t<uint32_t, 0x400062e4, rw_t<uint32_t>> r_TXBUF4__185;
            typedef reg_t<uint32_t, 0x400062e8, rw_t<uint32_t>> r_TXBUF4__186;
            typedef reg_t<uint32_t, 0x400062ec, rw_t<uint32_t>> r_TXBUF4__187;
            typedef reg_t<uint32_t, 0x400062f0, rw_t<uint32_t>> r_TXBUF4__188;
            typedef reg_t<uint32_t, 0x400062f4, rw_t<uint32_t>> r_TXBUF4__189;
            typedef reg_t<uint32_t, 0x400062f8, rw_t<uint32_t>> r_TXBUF4__190;
            typedef reg_t<uint32_t, 0x400062fc, rw_t<uint32_t>> r_TXBUF4__191;
            typedef reg_t<uint32_t, 0x40006300, rw_t<uint32_t>> r_TXBUF4__192;
            typedef reg_t<uint32_t, 0x40006304, rw_t<uint32_t>> r_TXBUF4__193;
            typedef reg_t<uint32_t, 0x40006308, rw_t<uint32_t>> r_TXBUF4__194;
            typedef reg_t<uint32_t, 0x4000630c, rw_t<uint32_t>> r_TXBUF4__195;
            typedef reg_t<uint32_t, 0x40006310, rw_t<uint32_t>> r_TXBUF4__196;
            typedef reg_t<uint32_t, 0x40006314, rw_t<uint32_t>> r_TXBUF4__197;
            typedef reg_t<uint32_t, 0x40006318, rw_t<uint32_t>> r_TXBUF4__198;
            typedef reg_t<uint32_t, 0x4000631c, rw_t<uint32_t>> r_TXBUF4__199;
            typedef reg_t<uint32_t, 0x40006320, rw_t<uint32_t>> r_TXBUF4__200;
            typedef reg_t<uint32_t, 0x40006324, rw_t<uint32_t>> r_TXBUF4__201;
            typedef reg_t<uint32_t, 0x40006328, rw_t<uint32_t>> r_TXBUF4__202;
            typedef reg_t<uint32_t, 0x4000632c, rw_t<uint32_t>> r_TXBUF4__203;
            typedef reg_t<uint32_t, 0x40006330, rw_t<uint32_t>> r_TXBUF4__204;
            typedef reg_t<uint32_t, 0x40006334, rw_t<uint32_t>> r_TXBUF4__205;
            typedef reg_t<uint32_t, 0x40006338, rw_t<uint32_t>> r_TXBUF4__206;
            typedef reg_t<uint32_t, 0x4000633c, rw_t<uint32_t>> r_TXBUF4__207;
            typedef reg_t<uint32_t, 0x40006340, rw_t<uint32_t>> r_TXBUF4__208;
            typedef reg_t<uint32_t, 0x40006344, rw_t<uint32_t>> r_TXBUF4__209;
            typedef reg_t<uint32_t, 0x40006348, rw_t<uint32_t>> r_TXBUF4__210;
            typedef reg_t<uint32_t, 0x4000634c, rw_t<uint32_t>> r_TXBUF4__211;
            typedef reg_t<uint32_t, 0x40006350, rw_t<uint32_t>> r_TXBUF4__212;
            typedef reg_t<uint32_t, 0x40006354, rw_t<uint32_t>> r_TXBUF4__213;
            typedef reg_t<uint32_t, 0x40006358, rw_t<uint32_t>> r_TXBUF4__214;
            typedef reg_t<uint32_t, 0x4000635c, rw_t<uint32_t>> r_TXBUF4__215;
            typedef reg_t<uint32_t, 0x40006360, rw_t<uint32_t>> r_TXBUF4__216;
            typedef reg_t<uint32_t, 0x40006364, rw_t<uint32_t>> r_TXBUF4__217;
            typedef reg_t<uint32_t, 0x40006368, rw_t<uint32_t>> r_TXBUF4__218;
            typedef reg_t<uint32_t, 0x4000636c, rw_t<uint32_t>> r_TXBUF4__219;
            typedef reg_t<uint32_t, 0x40006370, rw_t<uint32_t>> r_TXBUF4__220;
            typedef reg_t<uint32_t, 0x40006374, rw_t<uint32_t>> r_TXBUF4__221;
            typedef reg_t<uint32_t, 0x40006378, rw_t<uint32_t>> r_TXBUF4__222;
            typedef reg_t<uint32_t, 0x4000637c, rw_t<uint32_t>> r_TXBUF4__223;
            typedef reg_t<uint32_t, 0x40006380, rw_t<uint32_t>> r_TXBUF4__224;
            typedef reg_t<uint32_t, 0x40006384, rw_t<uint32_t>> r_TXBUF4__225;
            typedef reg_t<uint32_t, 0x40006388, rw_t<uint32_t>> r_TXBUF4__226;
            typedef reg_t<uint32_t, 0x4000638c, rw_t<uint32_t>> r_TXBUF4__227;
            typedef reg_t<uint32_t, 0x40006390, rw_t<uint32_t>> r_TXBUF4__228;
            typedef reg_t<uint32_t, 0x40006394, rw_t<uint32_t>> r_TXBUF4__229;
            typedef reg_t<uint32_t, 0x40006398, rw_t<uint32_t>> r_TXBUF4__230;
            typedef reg_t<uint32_t, 0x4000639c, rw_t<uint32_t>> r_TXBUF4__231;
            typedef reg_t<uint32_t, 0x400063a0, rw_t<uint32_t>> r_TXBUF4__232;
            typedef reg_t<uint32_t, 0x400063a4, rw_t<uint32_t>> r_TXBUF4__233;
            typedef reg_t<uint32_t, 0x400063a8, rw_t<uint32_t>> r_TXBUF4__234;
            typedef reg_t<uint32_t, 0x400063ac, rw_t<uint32_t>> r_TXBUF4__235;
            typedef reg_t<uint32_t, 0x400063b0, rw_t<uint32_t>> r_TXBUF4__236;
            typedef reg_t<uint32_t, 0x400063b4, rw_t<uint32_t>> r_TXBUF4__237;
            typedef reg_t<uint32_t, 0x400063b8, rw_t<uint32_t>> r_TXBUF4__238;
            typedef reg_t<uint32_t, 0x400063bc, rw_t<uint32_t>> r_TXBUF4__239;
            typedef reg_t<uint32_t, 0x400063c0, rw_t<uint32_t>> r_TXBUF4__240;
            typedef reg_t<uint32_t, 0x400063c4, rw_t<uint32_t>> r_TXBUF4__241;
            typedef reg_t<uint32_t, 0x400063c8, rw_t<uint32_t>> r_TXBUF4__242;
            typedef reg_t<uint32_t, 0x400063cc, rw_t<uint32_t>> r_TXBUF4__243;
            typedef reg_t<uint32_t, 0x400063d0, rw_t<uint32_t>> r_TXBUF4__244;
            typedef reg_t<uint32_t, 0x400063d4, rw_t<uint32_t>> r_TXBUF4__245;
            typedef reg_t<uint32_t, 0x400063d8, rw_t<uint32_t>> r_TXBUF4__246;
            typedef reg_t<uint32_t, 0x400063dc, rw_t<uint32_t>> r_TXBUF4__247;
            typedef reg_t<uint32_t, 0x400063e0, rw_t<uint32_t>> r_TXBUF4__248;
            typedef reg_t<uint32_t, 0x400063e4, rw_t<uint32_t>> r_TXBUF4__249;
            typedef reg_t<uint32_t, 0x400063e8, rw_t<uint32_t>> r_TXBUF4__250;
            typedef reg_t<uint32_t, 0x400063ec, rw_t<uint32_t>> r_TXBUF4__251;
            typedef reg_t<uint32_t, 0x400063f0, rw_t<uint32_t>> r_TXBUF4__252;
            typedef reg_t<uint32_t, 0x400063f4, rw_t<uint32_t>> r_TXBUF4__253;
            typedef reg_t<uint32_t, 0x400063f8, rw_t<uint32_t>> r_TXBUF4__254;
            typedef reg_t<uint32_t, 0x400063fc, rw_t<uint32_t>> r_TXBUF4__255;
        } // end of TXBUF4_[%s]
        namespace TXBUF5_ {
            // TXBUF5_ register
            typedef reg_t<uint32_t, 0x40006400, rw_t<uint32_t>> r_TXBUF5__0;
            typedef reg_t<uint32_t, 0x40006404, rw_t<uint32_t>> r_TXBUF5__1;
            typedef reg_t<uint32_t, 0x40006408, rw_t<uint32_t>> r_TXBUF5__2;
            typedef reg_t<uint32_t, 0x4000640c, rw_t<uint32_t>> r_TXBUF5__3;
            typedef reg_t<uint32_t, 0x40006410, rw_t<uint32_t>> r_TXBUF5__4;
            typedef reg_t<uint32_t, 0x40006414, rw_t<uint32_t>> r_TXBUF5__5;
            typedef reg_t<uint32_t, 0x40006418, rw_t<uint32_t>> r_TXBUF5__6;
            typedef reg_t<uint32_t, 0x4000641c, rw_t<uint32_t>> r_TXBUF5__7;
            typedef reg_t<uint32_t, 0x40006420, rw_t<uint32_t>> r_TXBUF5__8;
            typedef reg_t<uint32_t, 0x40006424, rw_t<uint32_t>> r_TXBUF5__9;
            typedef reg_t<uint32_t, 0x40006428, rw_t<uint32_t>> r_TXBUF5__10;
            typedef reg_t<uint32_t, 0x4000642c, rw_t<uint32_t>> r_TXBUF5__11;
            typedef reg_t<uint32_t, 0x40006430, rw_t<uint32_t>> r_TXBUF5__12;
            typedef reg_t<uint32_t, 0x40006434, rw_t<uint32_t>> r_TXBUF5__13;
            typedef reg_t<uint32_t, 0x40006438, rw_t<uint32_t>> r_TXBUF5__14;
            typedef reg_t<uint32_t, 0x4000643c, rw_t<uint32_t>> r_TXBUF5__15;
            typedef reg_t<uint32_t, 0x40006440, rw_t<uint32_t>> r_TXBUF5__16;
            typedef reg_t<uint32_t, 0x40006444, rw_t<uint32_t>> r_TXBUF5__17;
            typedef reg_t<uint32_t, 0x40006448, rw_t<uint32_t>> r_TXBUF5__18;
            typedef reg_t<uint32_t, 0x4000644c, rw_t<uint32_t>> r_TXBUF5__19;
            typedef reg_t<uint32_t, 0x40006450, rw_t<uint32_t>> r_TXBUF5__20;
            typedef reg_t<uint32_t, 0x40006454, rw_t<uint32_t>> r_TXBUF5__21;
            typedef reg_t<uint32_t, 0x40006458, rw_t<uint32_t>> r_TXBUF5__22;
            typedef reg_t<uint32_t, 0x4000645c, rw_t<uint32_t>> r_TXBUF5__23;
            typedef reg_t<uint32_t, 0x40006460, rw_t<uint32_t>> r_TXBUF5__24;
            typedef reg_t<uint32_t, 0x40006464, rw_t<uint32_t>> r_TXBUF5__25;
            typedef reg_t<uint32_t, 0x40006468, rw_t<uint32_t>> r_TXBUF5__26;
            typedef reg_t<uint32_t, 0x4000646c, rw_t<uint32_t>> r_TXBUF5__27;
            typedef reg_t<uint32_t, 0x40006470, rw_t<uint32_t>> r_TXBUF5__28;
            typedef reg_t<uint32_t, 0x40006474, rw_t<uint32_t>> r_TXBUF5__29;
            typedef reg_t<uint32_t, 0x40006478, rw_t<uint32_t>> r_TXBUF5__30;
            typedef reg_t<uint32_t, 0x4000647c, rw_t<uint32_t>> r_TXBUF5__31;
            typedef reg_t<uint32_t, 0x40006480, rw_t<uint32_t>> r_TXBUF5__32;
            typedef reg_t<uint32_t, 0x40006484, rw_t<uint32_t>> r_TXBUF5__33;
            typedef reg_t<uint32_t, 0x40006488, rw_t<uint32_t>> r_TXBUF5__34;
            typedef reg_t<uint32_t, 0x4000648c, rw_t<uint32_t>> r_TXBUF5__35;
            typedef reg_t<uint32_t, 0x40006490, rw_t<uint32_t>> r_TXBUF5__36;
            typedef reg_t<uint32_t, 0x40006494, rw_t<uint32_t>> r_TXBUF5__37;
            typedef reg_t<uint32_t, 0x40006498, rw_t<uint32_t>> r_TXBUF5__38;
            typedef reg_t<uint32_t, 0x4000649c, rw_t<uint32_t>> r_TXBUF5__39;
            typedef reg_t<uint32_t, 0x400064a0, rw_t<uint32_t>> r_TXBUF5__40;
            typedef reg_t<uint32_t, 0x400064a4, rw_t<uint32_t>> r_TXBUF5__41;
            typedef reg_t<uint32_t, 0x400064a8, rw_t<uint32_t>> r_TXBUF5__42;
            typedef reg_t<uint32_t, 0x400064ac, rw_t<uint32_t>> r_TXBUF5__43;
            typedef reg_t<uint32_t, 0x400064b0, rw_t<uint32_t>> r_TXBUF5__44;
            typedef reg_t<uint32_t, 0x400064b4, rw_t<uint32_t>> r_TXBUF5__45;
            typedef reg_t<uint32_t, 0x400064b8, rw_t<uint32_t>> r_TXBUF5__46;
            typedef reg_t<uint32_t, 0x400064bc, rw_t<uint32_t>> r_TXBUF5__47;
            typedef reg_t<uint32_t, 0x400064c0, rw_t<uint32_t>> r_TXBUF5__48;
            typedef reg_t<uint32_t, 0x400064c4, rw_t<uint32_t>> r_TXBUF5__49;
            typedef reg_t<uint32_t, 0x400064c8, rw_t<uint32_t>> r_TXBUF5__50;
            typedef reg_t<uint32_t, 0x400064cc, rw_t<uint32_t>> r_TXBUF5__51;
            typedef reg_t<uint32_t, 0x400064d0, rw_t<uint32_t>> r_TXBUF5__52;
            typedef reg_t<uint32_t, 0x400064d4, rw_t<uint32_t>> r_TXBUF5__53;
            typedef reg_t<uint32_t, 0x400064d8, rw_t<uint32_t>> r_TXBUF5__54;
            typedef reg_t<uint32_t, 0x400064dc, rw_t<uint32_t>> r_TXBUF5__55;
            typedef reg_t<uint32_t, 0x400064e0, rw_t<uint32_t>> r_TXBUF5__56;
            typedef reg_t<uint32_t, 0x400064e4, rw_t<uint32_t>> r_TXBUF5__57;
            typedef reg_t<uint32_t, 0x400064e8, rw_t<uint32_t>> r_TXBUF5__58;
            typedef reg_t<uint32_t, 0x400064ec, rw_t<uint32_t>> r_TXBUF5__59;
            typedef reg_t<uint32_t, 0x400064f0, rw_t<uint32_t>> r_TXBUF5__60;
            typedef reg_t<uint32_t, 0x400064f4, rw_t<uint32_t>> r_TXBUF5__61;
            typedef reg_t<uint32_t, 0x400064f8, rw_t<uint32_t>> r_TXBUF5__62;
            typedef reg_t<uint32_t, 0x400064fc, rw_t<uint32_t>> r_TXBUF5__63;
            typedef reg_t<uint32_t, 0x40006500, rw_t<uint32_t>> r_TXBUF5__64;
            typedef reg_t<uint32_t, 0x40006504, rw_t<uint32_t>> r_TXBUF5__65;
            typedef reg_t<uint32_t, 0x40006508, rw_t<uint32_t>> r_TXBUF5__66;
            typedef reg_t<uint32_t, 0x4000650c, rw_t<uint32_t>> r_TXBUF5__67;
            typedef reg_t<uint32_t, 0x40006510, rw_t<uint32_t>> r_TXBUF5__68;
            typedef reg_t<uint32_t, 0x40006514, rw_t<uint32_t>> r_TXBUF5__69;
            typedef reg_t<uint32_t, 0x40006518, rw_t<uint32_t>> r_TXBUF5__70;
            typedef reg_t<uint32_t, 0x4000651c, rw_t<uint32_t>> r_TXBUF5__71;
            typedef reg_t<uint32_t, 0x40006520, rw_t<uint32_t>> r_TXBUF5__72;
            typedef reg_t<uint32_t, 0x40006524, rw_t<uint32_t>> r_TXBUF5__73;
            typedef reg_t<uint32_t, 0x40006528, rw_t<uint32_t>> r_TXBUF5__74;
            typedef reg_t<uint32_t, 0x4000652c, rw_t<uint32_t>> r_TXBUF5__75;
            typedef reg_t<uint32_t, 0x40006530, rw_t<uint32_t>> r_TXBUF5__76;
            typedef reg_t<uint32_t, 0x40006534, rw_t<uint32_t>> r_TXBUF5__77;
            typedef reg_t<uint32_t, 0x40006538, rw_t<uint32_t>> r_TXBUF5__78;
            typedef reg_t<uint32_t, 0x4000653c, rw_t<uint32_t>> r_TXBUF5__79;
            typedef reg_t<uint32_t, 0x40006540, rw_t<uint32_t>> r_TXBUF5__80;
            typedef reg_t<uint32_t, 0x40006544, rw_t<uint32_t>> r_TXBUF5__81;
            typedef reg_t<uint32_t, 0x40006548, rw_t<uint32_t>> r_TXBUF5__82;
            typedef reg_t<uint32_t, 0x4000654c, rw_t<uint32_t>> r_TXBUF5__83;
            typedef reg_t<uint32_t, 0x40006550, rw_t<uint32_t>> r_TXBUF5__84;
            typedef reg_t<uint32_t, 0x40006554, rw_t<uint32_t>> r_TXBUF5__85;
            typedef reg_t<uint32_t, 0x40006558, rw_t<uint32_t>> r_TXBUF5__86;
            typedef reg_t<uint32_t, 0x4000655c, rw_t<uint32_t>> r_TXBUF5__87;
            typedef reg_t<uint32_t, 0x40006560, rw_t<uint32_t>> r_TXBUF5__88;
            typedef reg_t<uint32_t, 0x40006564, rw_t<uint32_t>> r_TXBUF5__89;
            typedef reg_t<uint32_t, 0x40006568, rw_t<uint32_t>> r_TXBUF5__90;
            typedef reg_t<uint32_t, 0x4000656c, rw_t<uint32_t>> r_TXBUF5__91;
            typedef reg_t<uint32_t, 0x40006570, rw_t<uint32_t>> r_TXBUF5__92;
            typedef reg_t<uint32_t, 0x40006574, rw_t<uint32_t>> r_TXBUF5__93;
            typedef reg_t<uint32_t, 0x40006578, rw_t<uint32_t>> r_TXBUF5__94;
            typedef reg_t<uint32_t, 0x4000657c, rw_t<uint32_t>> r_TXBUF5__95;
            typedef reg_t<uint32_t, 0x40006580, rw_t<uint32_t>> r_TXBUF5__96;
            typedef reg_t<uint32_t, 0x40006584, rw_t<uint32_t>> r_TXBUF5__97;
            typedef reg_t<uint32_t, 0x40006588, rw_t<uint32_t>> r_TXBUF5__98;
            typedef reg_t<uint32_t, 0x4000658c, rw_t<uint32_t>> r_TXBUF5__99;
            typedef reg_t<uint32_t, 0x40006590, rw_t<uint32_t>> r_TXBUF5__100;
            typedef reg_t<uint32_t, 0x40006594, rw_t<uint32_t>> r_TXBUF5__101;
            typedef reg_t<uint32_t, 0x40006598, rw_t<uint32_t>> r_TXBUF5__102;
            typedef reg_t<uint32_t, 0x4000659c, rw_t<uint32_t>> r_TXBUF5__103;
            typedef reg_t<uint32_t, 0x400065a0, rw_t<uint32_t>> r_TXBUF5__104;
            typedef reg_t<uint32_t, 0x400065a4, rw_t<uint32_t>> r_TXBUF5__105;
            typedef reg_t<uint32_t, 0x400065a8, rw_t<uint32_t>> r_TXBUF5__106;
            typedef reg_t<uint32_t, 0x400065ac, rw_t<uint32_t>> r_TXBUF5__107;
            typedef reg_t<uint32_t, 0x400065b0, rw_t<uint32_t>> r_TXBUF5__108;
            typedef reg_t<uint32_t, 0x400065b4, rw_t<uint32_t>> r_TXBUF5__109;
            typedef reg_t<uint32_t, 0x400065b8, rw_t<uint32_t>> r_TXBUF5__110;
            typedef reg_t<uint32_t, 0x400065bc, rw_t<uint32_t>> r_TXBUF5__111;
            typedef reg_t<uint32_t, 0x400065c0, rw_t<uint32_t>> r_TXBUF5__112;
            typedef reg_t<uint32_t, 0x400065c4, rw_t<uint32_t>> r_TXBUF5__113;
            typedef reg_t<uint32_t, 0x400065c8, rw_t<uint32_t>> r_TXBUF5__114;
            typedef reg_t<uint32_t, 0x400065cc, rw_t<uint32_t>> r_TXBUF5__115;
            typedef reg_t<uint32_t, 0x400065d0, rw_t<uint32_t>> r_TXBUF5__116;
            typedef reg_t<uint32_t, 0x400065d4, rw_t<uint32_t>> r_TXBUF5__117;
            typedef reg_t<uint32_t, 0x400065d8, rw_t<uint32_t>> r_TXBUF5__118;
            typedef reg_t<uint32_t, 0x400065dc, rw_t<uint32_t>> r_TXBUF5__119;
            typedef reg_t<uint32_t, 0x400065e0, rw_t<uint32_t>> r_TXBUF5__120;
            typedef reg_t<uint32_t, 0x400065e4, rw_t<uint32_t>> r_TXBUF5__121;
            typedef reg_t<uint32_t, 0x400065e8, rw_t<uint32_t>> r_TXBUF5__122;
            typedef reg_t<uint32_t, 0x400065ec, rw_t<uint32_t>> r_TXBUF5__123;
            typedef reg_t<uint32_t, 0x400065f0, rw_t<uint32_t>> r_TXBUF5__124;
            typedef reg_t<uint32_t, 0x400065f4, rw_t<uint32_t>> r_TXBUF5__125;
            typedef reg_t<uint32_t, 0x400065f8, rw_t<uint32_t>> r_TXBUF5__126;
            typedef reg_t<uint32_t, 0x400065fc, rw_t<uint32_t>> r_TXBUF5__127;
            typedef reg_t<uint32_t, 0x40006600, rw_t<uint32_t>> r_TXBUF5__128;
            typedef reg_t<uint32_t, 0x40006604, rw_t<uint32_t>> r_TXBUF5__129;
            typedef reg_t<uint32_t, 0x40006608, rw_t<uint32_t>> r_TXBUF5__130;
            typedef reg_t<uint32_t, 0x4000660c, rw_t<uint32_t>> r_TXBUF5__131;
            typedef reg_t<uint32_t, 0x40006610, rw_t<uint32_t>> r_TXBUF5__132;
            typedef reg_t<uint32_t, 0x40006614, rw_t<uint32_t>> r_TXBUF5__133;
            typedef reg_t<uint32_t, 0x40006618, rw_t<uint32_t>> r_TXBUF5__134;
            typedef reg_t<uint32_t, 0x4000661c, rw_t<uint32_t>> r_TXBUF5__135;
            typedef reg_t<uint32_t, 0x40006620, rw_t<uint32_t>> r_TXBUF5__136;
            typedef reg_t<uint32_t, 0x40006624, rw_t<uint32_t>> r_TXBUF5__137;
            typedef reg_t<uint32_t, 0x40006628, rw_t<uint32_t>> r_TXBUF5__138;
            typedef reg_t<uint32_t, 0x4000662c, rw_t<uint32_t>> r_TXBUF5__139;
            typedef reg_t<uint32_t, 0x40006630, rw_t<uint32_t>> r_TXBUF5__140;
            typedef reg_t<uint32_t, 0x40006634, rw_t<uint32_t>> r_TXBUF5__141;
            typedef reg_t<uint32_t, 0x40006638, rw_t<uint32_t>> r_TXBUF5__142;
            typedef reg_t<uint32_t, 0x4000663c, rw_t<uint32_t>> r_TXBUF5__143;
            typedef reg_t<uint32_t, 0x40006640, rw_t<uint32_t>> r_TXBUF5__144;
            typedef reg_t<uint32_t, 0x40006644, rw_t<uint32_t>> r_TXBUF5__145;
            typedef reg_t<uint32_t, 0x40006648, rw_t<uint32_t>> r_TXBUF5__146;
            typedef reg_t<uint32_t, 0x4000664c, rw_t<uint32_t>> r_TXBUF5__147;
            typedef reg_t<uint32_t, 0x40006650, rw_t<uint32_t>> r_TXBUF5__148;
            typedef reg_t<uint32_t, 0x40006654, rw_t<uint32_t>> r_TXBUF5__149;
            typedef reg_t<uint32_t, 0x40006658, rw_t<uint32_t>> r_TXBUF5__150;
            typedef reg_t<uint32_t, 0x4000665c, rw_t<uint32_t>> r_TXBUF5__151;
            typedef reg_t<uint32_t, 0x40006660, rw_t<uint32_t>> r_TXBUF5__152;
            typedef reg_t<uint32_t, 0x40006664, rw_t<uint32_t>> r_TXBUF5__153;
            typedef reg_t<uint32_t, 0x40006668, rw_t<uint32_t>> r_TXBUF5__154;
            typedef reg_t<uint32_t, 0x4000666c, rw_t<uint32_t>> r_TXBUF5__155;
            typedef reg_t<uint32_t, 0x40006670, rw_t<uint32_t>> r_TXBUF5__156;
            typedef reg_t<uint32_t, 0x40006674, rw_t<uint32_t>> r_TXBUF5__157;
            typedef reg_t<uint32_t, 0x40006678, rw_t<uint32_t>> r_TXBUF5__158;
            typedef reg_t<uint32_t, 0x4000667c, rw_t<uint32_t>> r_TXBUF5__159;
            typedef reg_t<uint32_t, 0x40006680, rw_t<uint32_t>> r_TXBUF5__160;
            typedef reg_t<uint32_t, 0x40006684, rw_t<uint32_t>> r_TXBUF5__161;
            typedef reg_t<uint32_t, 0x40006688, rw_t<uint32_t>> r_TXBUF5__162;
            typedef reg_t<uint32_t, 0x4000668c, rw_t<uint32_t>> r_TXBUF5__163;
            typedef reg_t<uint32_t, 0x40006690, rw_t<uint32_t>> r_TXBUF5__164;
            typedef reg_t<uint32_t, 0x40006694, rw_t<uint32_t>> r_TXBUF5__165;
            typedef reg_t<uint32_t, 0x40006698, rw_t<uint32_t>> r_TXBUF5__166;
            typedef reg_t<uint32_t, 0x4000669c, rw_t<uint32_t>> r_TXBUF5__167;
            typedef reg_t<uint32_t, 0x400066a0, rw_t<uint32_t>> r_TXBUF5__168;
            typedef reg_t<uint32_t, 0x400066a4, rw_t<uint32_t>> r_TXBUF5__169;
            typedef reg_t<uint32_t, 0x400066a8, rw_t<uint32_t>> r_TXBUF5__170;
            typedef reg_t<uint32_t, 0x400066ac, rw_t<uint32_t>> r_TXBUF5__171;
            typedef reg_t<uint32_t, 0x400066b0, rw_t<uint32_t>> r_TXBUF5__172;
            typedef reg_t<uint32_t, 0x400066b4, rw_t<uint32_t>> r_TXBUF5__173;
            typedef reg_t<uint32_t, 0x400066b8, rw_t<uint32_t>> r_TXBUF5__174;
            typedef reg_t<uint32_t, 0x400066bc, rw_t<uint32_t>> r_TXBUF5__175;
            typedef reg_t<uint32_t, 0x400066c0, rw_t<uint32_t>> r_TXBUF5__176;
            typedef reg_t<uint32_t, 0x400066c4, rw_t<uint32_t>> r_TXBUF5__177;
            typedef reg_t<uint32_t, 0x400066c8, rw_t<uint32_t>> r_TXBUF5__178;
            typedef reg_t<uint32_t, 0x400066cc, rw_t<uint32_t>> r_TXBUF5__179;
            typedef reg_t<uint32_t, 0x400066d0, rw_t<uint32_t>> r_TXBUF5__180;
            typedef reg_t<uint32_t, 0x400066d4, rw_t<uint32_t>> r_TXBUF5__181;
            typedef reg_t<uint32_t, 0x400066d8, rw_t<uint32_t>> r_TXBUF5__182;
            typedef reg_t<uint32_t, 0x400066dc, rw_t<uint32_t>> r_TXBUF5__183;
            typedef reg_t<uint32_t, 0x400066e0, rw_t<uint32_t>> r_TXBUF5__184;
            typedef reg_t<uint32_t, 0x400066e4, rw_t<uint32_t>> r_TXBUF5__185;
            typedef reg_t<uint32_t, 0x400066e8, rw_t<uint32_t>> r_TXBUF5__186;
            typedef reg_t<uint32_t, 0x400066ec, rw_t<uint32_t>> r_TXBUF5__187;
            typedef reg_t<uint32_t, 0x400066f0, rw_t<uint32_t>> r_TXBUF5__188;
            typedef reg_t<uint32_t, 0x400066f4, rw_t<uint32_t>> r_TXBUF5__189;
            typedef reg_t<uint32_t, 0x400066f8, rw_t<uint32_t>> r_TXBUF5__190;
            typedef reg_t<uint32_t, 0x400066fc, rw_t<uint32_t>> r_TXBUF5__191;
            typedef reg_t<uint32_t, 0x40006700, rw_t<uint32_t>> r_TXBUF5__192;
            typedef reg_t<uint32_t, 0x40006704, rw_t<uint32_t>> r_TXBUF5__193;
            typedef reg_t<uint32_t, 0x40006708, rw_t<uint32_t>> r_TXBUF5__194;
            typedef reg_t<uint32_t, 0x4000670c, rw_t<uint32_t>> r_TXBUF5__195;
            typedef reg_t<uint32_t, 0x40006710, rw_t<uint32_t>> r_TXBUF5__196;
            typedef reg_t<uint32_t, 0x40006714, rw_t<uint32_t>> r_TXBUF5__197;
            typedef reg_t<uint32_t, 0x40006718, rw_t<uint32_t>> r_TXBUF5__198;
            typedef reg_t<uint32_t, 0x4000671c, rw_t<uint32_t>> r_TXBUF5__199;
            typedef reg_t<uint32_t, 0x40006720, rw_t<uint32_t>> r_TXBUF5__200;
            typedef reg_t<uint32_t, 0x40006724, rw_t<uint32_t>> r_TXBUF5__201;
            typedef reg_t<uint32_t, 0x40006728, rw_t<uint32_t>> r_TXBUF5__202;
            typedef reg_t<uint32_t, 0x4000672c, rw_t<uint32_t>> r_TXBUF5__203;
            typedef reg_t<uint32_t, 0x40006730, rw_t<uint32_t>> r_TXBUF5__204;
            typedef reg_t<uint32_t, 0x40006734, rw_t<uint32_t>> r_TXBUF5__205;
            typedef reg_t<uint32_t, 0x40006738, rw_t<uint32_t>> r_TXBUF5__206;
            typedef reg_t<uint32_t, 0x4000673c, rw_t<uint32_t>> r_TXBUF5__207;
            typedef reg_t<uint32_t, 0x40006740, rw_t<uint32_t>> r_TXBUF5__208;
            typedef reg_t<uint32_t, 0x40006744, rw_t<uint32_t>> r_TXBUF5__209;
            typedef reg_t<uint32_t, 0x40006748, rw_t<uint32_t>> r_TXBUF5__210;
            typedef reg_t<uint32_t, 0x4000674c, rw_t<uint32_t>> r_TXBUF5__211;
            typedef reg_t<uint32_t, 0x40006750, rw_t<uint32_t>> r_TXBUF5__212;
            typedef reg_t<uint32_t, 0x40006754, rw_t<uint32_t>> r_TXBUF5__213;
            typedef reg_t<uint32_t, 0x40006758, rw_t<uint32_t>> r_TXBUF5__214;
            typedef reg_t<uint32_t, 0x4000675c, rw_t<uint32_t>> r_TXBUF5__215;
            typedef reg_t<uint32_t, 0x40006760, rw_t<uint32_t>> r_TXBUF5__216;
            typedef reg_t<uint32_t, 0x40006764, rw_t<uint32_t>> r_TXBUF5__217;
            typedef reg_t<uint32_t, 0x40006768, rw_t<uint32_t>> r_TXBUF5__218;
            typedef reg_t<uint32_t, 0x4000676c, rw_t<uint32_t>> r_TXBUF5__219;
            typedef reg_t<uint32_t, 0x40006770, rw_t<uint32_t>> r_TXBUF5__220;
            typedef reg_t<uint32_t, 0x40006774, rw_t<uint32_t>> r_TXBUF5__221;
            typedef reg_t<uint32_t, 0x40006778, rw_t<uint32_t>> r_TXBUF5__222;
            typedef reg_t<uint32_t, 0x4000677c, rw_t<uint32_t>> r_TXBUF5__223;
            typedef reg_t<uint32_t, 0x40006780, rw_t<uint32_t>> r_TXBUF5__224;
            typedef reg_t<uint32_t, 0x40006784, rw_t<uint32_t>> r_TXBUF5__225;
            typedef reg_t<uint32_t, 0x40006788, rw_t<uint32_t>> r_TXBUF5__226;
            typedef reg_t<uint32_t, 0x4000678c, rw_t<uint32_t>> r_TXBUF5__227;
            typedef reg_t<uint32_t, 0x40006790, rw_t<uint32_t>> r_TXBUF5__228;
            typedef reg_t<uint32_t, 0x40006794, rw_t<uint32_t>> r_TXBUF5__229;
            typedef reg_t<uint32_t, 0x40006798, rw_t<uint32_t>> r_TXBUF5__230;
            typedef reg_t<uint32_t, 0x4000679c, rw_t<uint32_t>> r_TXBUF5__231;
            typedef reg_t<uint32_t, 0x400067a0, rw_t<uint32_t>> r_TXBUF5__232;
            typedef reg_t<uint32_t, 0x400067a4, rw_t<uint32_t>> r_TXBUF5__233;
            typedef reg_t<uint32_t, 0x400067a8, rw_t<uint32_t>> r_TXBUF5__234;
            typedef reg_t<uint32_t, 0x400067ac, rw_t<uint32_t>> r_TXBUF5__235;
            typedef reg_t<uint32_t, 0x400067b0, rw_t<uint32_t>> r_TXBUF5__236;
            typedef reg_t<uint32_t, 0x400067b4, rw_t<uint32_t>> r_TXBUF5__237;
            typedef reg_t<uint32_t, 0x400067b8, rw_t<uint32_t>> r_TXBUF5__238;
            typedef reg_t<uint32_t, 0x400067bc, rw_t<uint32_t>> r_TXBUF5__239;
            typedef reg_t<uint32_t, 0x400067c0, rw_t<uint32_t>> r_TXBUF5__240;
            typedef reg_t<uint32_t, 0x400067c4, rw_t<uint32_t>> r_TXBUF5__241;
            typedef reg_t<uint32_t, 0x400067c8, rw_t<uint32_t>> r_TXBUF5__242;
            typedef reg_t<uint32_t, 0x400067cc, rw_t<uint32_t>> r_TXBUF5__243;
            typedef reg_t<uint32_t, 0x400067d0, rw_t<uint32_t>> r_TXBUF5__244;
            typedef reg_t<uint32_t, 0x400067d4, rw_t<uint32_t>> r_TXBUF5__245;
            typedef reg_t<uint32_t, 0x400067d8, rw_t<uint32_t>> r_TXBUF5__246;
            typedef reg_t<uint32_t, 0x400067dc, rw_t<uint32_t>> r_TXBUF5__247;
            typedef reg_t<uint32_t, 0x400067e0, rw_t<uint32_t>> r_TXBUF5__248;
            typedef reg_t<uint32_t, 0x400067e4, rw_t<uint32_t>> r_TXBUF5__249;
            typedef reg_t<uint32_t, 0x400067e8, rw_t<uint32_t>> r_TXBUF5__250;
            typedef reg_t<uint32_t, 0x400067ec, rw_t<uint32_t>> r_TXBUF5__251;
            typedef reg_t<uint32_t, 0x400067f0, rw_t<uint32_t>> r_TXBUF5__252;
            typedef reg_t<uint32_t, 0x400067f4, rw_t<uint32_t>> r_TXBUF5__253;
            typedef reg_t<uint32_t, 0x400067f8, rw_t<uint32_t>> r_TXBUF5__254;
            typedef reg_t<uint32_t, 0x400067fc, rw_t<uint32_t>> r_TXBUF5__255;
        } // end of TXBUF5_[%s]
        namespace TXBUF6_ {
            // TXBUF6_ register
            typedef reg_t<uint32_t, 0x40006800, rw_t<uint32_t>> r_TXBUF6__0;
            typedef reg_t<uint32_t, 0x40006804, rw_t<uint32_t>> r_TXBUF6__1;
            typedef reg_t<uint32_t, 0x40006808, rw_t<uint32_t>> r_TXBUF6__2;
            typedef reg_t<uint32_t, 0x4000680c, rw_t<uint32_t>> r_TXBUF6__3;
            typedef reg_t<uint32_t, 0x40006810, rw_t<uint32_t>> r_TXBUF6__4;
            typedef reg_t<uint32_t, 0x40006814, rw_t<uint32_t>> r_TXBUF6__5;
            typedef reg_t<uint32_t, 0x40006818, rw_t<uint32_t>> r_TXBUF6__6;
            typedef reg_t<uint32_t, 0x4000681c, rw_t<uint32_t>> r_TXBUF6__7;
            typedef reg_t<uint32_t, 0x40006820, rw_t<uint32_t>> r_TXBUF6__8;
            typedef reg_t<uint32_t, 0x40006824, rw_t<uint32_t>> r_TXBUF6__9;
            typedef reg_t<uint32_t, 0x40006828, rw_t<uint32_t>> r_TXBUF6__10;
            typedef reg_t<uint32_t, 0x4000682c, rw_t<uint32_t>> r_TXBUF6__11;
            typedef reg_t<uint32_t, 0x40006830, rw_t<uint32_t>> r_TXBUF6__12;
            typedef reg_t<uint32_t, 0x40006834, rw_t<uint32_t>> r_TXBUF6__13;
            typedef reg_t<uint32_t, 0x40006838, rw_t<uint32_t>> r_TXBUF6__14;
            typedef reg_t<uint32_t, 0x4000683c, rw_t<uint32_t>> r_TXBUF6__15;
            typedef reg_t<uint32_t, 0x40006840, rw_t<uint32_t>> r_TXBUF6__16;
            typedef reg_t<uint32_t, 0x40006844, rw_t<uint32_t>> r_TXBUF6__17;
            typedef reg_t<uint32_t, 0x40006848, rw_t<uint32_t>> r_TXBUF6__18;
            typedef reg_t<uint32_t, 0x4000684c, rw_t<uint32_t>> r_TXBUF6__19;
            typedef reg_t<uint32_t, 0x40006850, rw_t<uint32_t>> r_TXBUF6__20;
            typedef reg_t<uint32_t, 0x40006854, rw_t<uint32_t>> r_TXBUF6__21;
            typedef reg_t<uint32_t, 0x40006858, rw_t<uint32_t>> r_TXBUF6__22;
            typedef reg_t<uint32_t, 0x4000685c, rw_t<uint32_t>> r_TXBUF6__23;
            typedef reg_t<uint32_t, 0x40006860, rw_t<uint32_t>> r_TXBUF6__24;
            typedef reg_t<uint32_t, 0x40006864, rw_t<uint32_t>> r_TXBUF6__25;
            typedef reg_t<uint32_t, 0x40006868, rw_t<uint32_t>> r_TXBUF6__26;
            typedef reg_t<uint32_t, 0x4000686c, rw_t<uint32_t>> r_TXBUF6__27;
            typedef reg_t<uint32_t, 0x40006870, rw_t<uint32_t>> r_TXBUF6__28;
            typedef reg_t<uint32_t, 0x40006874, rw_t<uint32_t>> r_TXBUF6__29;
            typedef reg_t<uint32_t, 0x40006878, rw_t<uint32_t>> r_TXBUF6__30;
            typedef reg_t<uint32_t, 0x4000687c, rw_t<uint32_t>> r_TXBUF6__31;
            typedef reg_t<uint32_t, 0x40006880, rw_t<uint32_t>> r_TXBUF6__32;
            typedef reg_t<uint32_t, 0x40006884, rw_t<uint32_t>> r_TXBUF6__33;
            typedef reg_t<uint32_t, 0x40006888, rw_t<uint32_t>> r_TXBUF6__34;
            typedef reg_t<uint32_t, 0x4000688c, rw_t<uint32_t>> r_TXBUF6__35;
            typedef reg_t<uint32_t, 0x40006890, rw_t<uint32_t>> r_TXBUF6__36;
            typedef reg_t<uint32_t, 0x40006894, rw_t<uint32_t>> r_TXBUF6__37;
            typedef reg_t<uint32_t, 0x40006898, rw_t<uint32_t>> r_TXBUF6__38;
            typedef reg_t<uint32_t, 0x4000689c, rw_t<uint32_t>> r_TXBUF6__39;
            typedef reg_t<uint32_t, 0x400068a0, rw_t<uint32_t>> r_TXBUF6__40;
            typedef reg_t<uint32_t, 0x400068a4, rw_t<uint32_t>> r_TXBUF6__41;
            typedef reg_t<uint32_t, 0x400068a8, rw_t<uint32_t>> r_TXBUF6__42;
            typedef reg_t<uint32_t, 0x400068ac, rw_t<uint32_t>> r_TXBUF6__43;
            typedef reg_t<uint32_t, 0x400068b0, rw_t<uint32_t>> r_TXBUF6__44;
            typedef reg_t<uint32_t, 0x400068b4, rw_t<uint32_t>> r_TXBUF6__45;
            typedef reg_t<uint32_t, 0x400068b8, rw_t<uint32_t>> r_TXBUF6__46;
            typedef reg_t<uint32_t, 0x400068bc, rw_t<uint32_t>> r_TXBUF6__47;
            typedef reg_t<uint32_t, 0x400068c0, rw_t<uint32_t>> r_TXBUF6__48;
            typedef reg_t<uint32_t, 0x400068c4, rw_t<uint32_t>> r_TXBUF6__49;
            typedef reg_t<uint32_t, 0x400068c8, rw_t<uint32_t>> r_TXBUF6__50;
            typedef reg_t<uint32_t, 0x400068cc, rw_t<uint32_t>> r_TXBUF6__51;
            typedef reg_t<uint32_t, 0x400068d0, rw_t<uint32_t>> r_TXBUF6__52;
            typedef reg_t<uint32_t, 0x400068d4, rw_t<uint32_t>> r_TXBUF6__53;
            typedef reg_t<uint32_t, 0x400068d8, rw_t<uint32_t>> r_TXBUF6__54;
            typedef reg_t<uint32_t, 0x400068dc, rw_t<uint32_t>> r_TXBUF6__55;
            typedef reg_t<uint32_t, 0x400068e0, rw_t<uint32_t>> r_TXBUF6__56;
            typedef reg_t<uint32_t, 0x400068e4, rw_t<uint32_t>> r_TXBUF6__57;
            typedef reg_t<uint32_t, 0x400068e8, rw_t<uint32_t>> r_TXBUF6__58;
            typedef reg_t<uint32_t, 0x400068ec, rw_t<uint32_t>> r_TXBUF6__59;
            typedef reg_t<uint32_t, 0x400068f0, rw_t<uint32_t>> r_TXBUF6__60;
            typedef reg_t<uint32_t, 0x400068f4, rw_t<uint32_t>> r_TXBUF6__61;
            typedef reg_t<uint32_t, 0x400068f8, rw_t<uint32_t>> r_TXBUF6__62;
            typedef reg_t<uint32_t, 0x400068fc, rw_t<uint32_t>> r_TXBUF6__63;
            typedef reg_t<uint32_t, 0x40006900, rw_t<uint32_t>> r_TXBUF6__64;
            typedef reg_t<uint32_t, 0x40006904, rw_t<uint32_t>> r_TXBUF6__65;
            typedef reg_t<uint32_t, 0x40006908, rw_t<uint32_t>> r_TXBUF6__66;
            typedef reg_t<uint32_t, 0x4000690c, rw_t<uint32_t>> r_TXBUF6__67;
            typedef reg_t<uint32_t, 0x40006910, rw_t<uint32_t>> r_TXBUF6__68;
            typedef reg_t<uint32_t, 0x40006914, rw_t<uint32_t>> r_TXBUF6__69;
            typedef reg_t<uint32_t, 0x40006918, rw_t<uint32_t>> r_TXBUF6__70;
            typedef reg_t<uint32_t, 0x4000691c, rw_t<uint32_t>> r_TXBUF6__71;
            typedef reg_t<uint32_t, 0x40006920, rw_t<uint32_t>> r_TXBUF6__72;
            typedef reg_t<uint32_t, 0x40006924, rw_t<uint32_t>> r_TXBUF6__73;
            typedef reg_t<uint32_t, 0x40006928, rw_t<uint32_t>> r_TXBUF6__74;
            typedef reg_t<uint32_t, 0x4000692c, rw_t<uint32_t>> r_TXBUF6__75;
            typedef reg_t<uint32_t, 0x40006930, rw_t<uint32_t>> r_TXBUF6__76;
            typedef reg_t<uint32_t, 0x40006934, rw_t<uint32_t>> r_TXBUF6__77;
            typedef reg_t<uint32_t, 0x40006938, rw_t<uint32_t>> r_TXBUF6__78;
            typedef reg_t<uint32_t, 0x4000693c, rw_t<uint32_t>> r_TXBUF6__79;
            typedef reg_t<uint32_t, 0x40006940, rw_t<uint32_t>> r_TXBUF6__80;
            typedef reg_t<uint32_t, 0x40006944, rw_t<uint32_t>> r_TXBUF6__81;
            typedef reg_t<uint32_t, 0x40006948, rw_t<uint32_t>> r_TXBUF6__82;
            typedef reg_t<uint32_t, 0x4000694c, rw_t<uint32_t>> r_TXBUF6__83;
            typedef reg_t<uint32_t, 0x40006950, rw_t<uint32_t>> r_TXBUF6__84;
            typedef reg_t<uint32_t, 0x40006954, rw_t<uint32_t>> r_TXBUF6__85;
            typedef reg_t<uint32_t, 0x40006958, rw_t<uint32_t>> r_TXBUF6__86;
            typedef reg_t<uint32_t, 0x4000695c, rw_t<uint32_t>> r_TXBUF6__87;
            typedef reg_t<uint32_t, 0x40006960, rw_t<uint32_t>> r_TXBUF6__88;
            typedef reg_t<uint32_t, 0x40006964, rw_t<uint32_t>> r_TXBUF6__89;
            typedef reg_t<uint32_t, 0x40006968, rw_t<uint32_t>> r_TXBUF6__90;
            typedef reg_t<uint32_t, 0x4000696c, rw_t<uint32_t>> r_TXBUF6__91;
            typedef reg_t<uint32_t, 0x40006970, rw_t<uint32_t>> r_TXBUF6__92;
            typedef reg_t<uint32_t, 0x40006974, rw_t<uint32_t>> r_TXBUF6__93;
            typedef reg_t<uint32_t, 0x40006978, rw_t<uint32_t>> r_TXBUF6__94;
            typedef reg_t<uint32_t, 0x4000697c, rw_t<uint32_t>> r_TXBUF6__95;
            typedef reg_t<uint32_t, 0x40006980, rw_t<uint32_t>> r_TXBUF6__96;
            typedef reg_t<uint32_t, 0x40006984, rw_t<uint32_t>> r_TXBUF6__97;
            typedef reg_t<uint32_t, 0x40006988, rw_t<uint32_t>> r_TXBUF6__98;
            typedef reg_t<uint32_t, 0x4000698c, rw_t<uint32_t>> r_TXBUF6__99;
            typedef reg_t<uint32_t, 0x40006990, rw_t<uint32_t>> r_TXBUF6__100;
            typedef reg_t<uint32_t, 0x40006994, rw_t<uint32_t>> r_TXBUF6__101;
            typedef reg_t<uint32_t, 0x40006998, rw_t<uint32_t>> r_TXBUF6__102;
            typedef reg_t<uint32_t, 0x4000699c, rw_t<uint32_t>> r_TXBUF6__103;
            typedef reg_t<uint32_t, 0x400069a0, rw_t<uint32_t>> r_TXBUF6__104;
            typedef reg_t<uint32_t, 0x400069a4, rw_t<uint32_t>> r_TXBUF6__105;
            typedef reg_t<uint32_t, 0x400069a8, rw_t<uint32_t>> r_TXBUF6__106;
            typedef reg_t<uint32_t, 0x400069ac, rw_t<uint32_t>> r_TXBUF6__107;
            typedef reg_t<uint32_t, 0x400069b0, rw_t<uint32_t>> r_TXBUF6__108;
            typedef reg_t<uint32_t, 0x400069b4, rw_t<uint32_t>> r_TXBUF6__109;
            typedef reg_t<uint32_t, 0x400069b8, rw_t<uint32_t>> r_TXBUF6__110;
            typedef reg_t<uint32_t, 0x400069bc, rw_t<uint32_t>> r_TXBUF6__111;
            typedef reg_t<uint32_t, 0x400069c0, rw_t<uint32_t>> r_TXBUF6__112;
            typedef reg_t<uint32_t, 0x400069c4, rw_t<uint32_t>> r_TXBUF6__113;
            typedef reg_t<uint32_t, 0x400069c8, rw_t<uint32_t>> r_TXBUF6__114;
            typedef reg_t<uint32_t, 0x400069cc, rw_t<uint32_t>> r_TXBUF6__115;
            typedef reg_t<uint32_t, 0x400069d0, rw_t<uint32_t>> r_TXBUF6__116;
            typedef reg_t<uint32_t, 0x400069d4, rw_t<uint32_t>> r_TXBUF6__117;
            typedef reg_t<uint32_t, 0x400069d8, rw_t<uint32_t>> r_TXBUF6__118;
            typedef reg_t<uint32_t, 0x400069dc, rw_t<uint32_t>> r_TXBUF6__119;
            typedef reg_t<uint32_t, 0x400069e0, rw_t<uint32_t>> r_TXBUF6__120;
            typedef reg_t<uint32_t, 0x400069e4, rw_t<uint32_t>> r_TXBUF6__121;
            typedef reg_t<uint32_t, 0x400069e8, rw_t<uint32_t>> r_TXBUF6__122;
            typedef reg_t<uint32_t, 0x400069ec, rw_t<uint32_t>> r_TXBUF6__123;
            typedef reg_t<uint32_t, 0x400069f0, rw_t<uint32_t>> r_TXBUF6__124;
            typedef reg_t<uint32_t, 0x400069f4, rw_t<uint32_t>> r_TXBUF6__125;
            typedef reg_t<uint32_t, 0x400069f8, rw_t<uint32_t>> r_TXBUF6__126;
            typedef reg_t<uint32_t, 0x400069fc, rw_t<uint32_t>> r_TXBUF6__127;
            typedef reg_t<uint32_t, 0x40006a00, rw_t<uint32_t>> r_TXBUF6__128;
            typedef reg_t<uint32_t, 0x40006a04, rw_t<uint32_t>> r_TXBUF6__129;
            typedef reg_t<uint32_t, 0x40006a08, rw_t<uint32_t>> r_TXBUF6__130;
            typedef reg_t<uint32_t, 0x40006a0c, rw_t<uint32_t>> r_TXBUF6__131;
            typedef reg_t<uint32_t, 0x40006a10, rw_t<uint32_t>> r_TXBUF6__132;
            typedef reg_t<uint32_t, 0x40006a14, rw_t<uint32_t>> r_TXBUF6__133;
            typedef reg_t<uint32_t, 0x40006a18, rw_t<uint32_t>> r_TXBUF6__134;
            typedef reg_t<uint32_t, 0x40006a1c, rw_t<uint32_t>> r_TXBUF6__135;
            typedef reg_t<uint32_t, 0x40006a20, rw_t<uint32_t>> r_TXBUF6__136;
            typedef reg_t<uint32_t, 0x40006a24, rw_t<uint32_t>> r_TXBUF6__137;
            typedef reg_t<uint32_t, 0x40006a28, rw_t<uint32_t>> r_TXBUF6__138;
            typedef reg_t<uint32_t, 0x40006a2c, rw_t<uint32_t>> r_TXBUF6__139;
            typedef reg_t<uint32_t, 0x40006a30, rw_t<uint32_t>> r_TXBUF6__140;
            typedef reg_t<uint32_t, 0x40006a34, rw_t<uint32_t>> r_TXBUF6__141;
            typedef reg_t<uint32_t, 0x40006a38, rw_t<uint32_t>> r_TXBUF6__142;
            typedef reg_t<uint32_t, 0x40006a3c, rw_t<uint32_t>> r_TXBUF6__143;
            typedef reg_t<uint32_t, 0x40006a40, rw_t<uint32_t>> r_TXBUF6__144;
            typedef reg_t<uint32_t, 0x40006a44, rw_t<uint32_t>> r_TXBUF6__145;
            typedef reg_t<uint32_t, 0x40006a48, rw_t<uint32_t>> r_TXBUF6__146;
            typedef reg_t<uint32_t, 0x40006a4c, rw_t<uint32_t>> r_TXBUF6__147;
            typedef reg_t<uint32_t, 0x40006a50, rw_t<uint32_t>> r_TXBUF6__148;
            typedef reg_t<uint32_t, 0x40006a54, rw_t<uint32_t>> r_TXBUF6__149;
            typedef reg_t<uint32_t, 0x40006a58, rw_t<uint32_t>> r_TXBUF6__150;
            typedef reg_t<uint32_t, 0x40006a5c, rw_t<uint32_t>> r_TXBUF6__151;
            typedef reg_t<uint32_t, 0x40006a60, rw_t<uint32_t>> r_TXBUF6__152;
            typedef reg_t<uint32_t, 0x40006a64, rw_t<uint32_t>> r_TXBUF6__153;
            typedef reg_t<uint32_t, 0x40006a68, rw_t<uint32_t>> r_TXBUF6__154;
            typedef reg_t<uint32_t, 0x40006a6c, rw_t<uint32_t>> r_TXBUF6__155;
            typedef reg_t<uint32_t, 0x40006a70, rw_t<uint32_t>> r_TXBUF6__156;
            typedef reg_t<uint32_t, 0x40006a74, rw_t<uint32_t>> r_TXBUF6__157;
            typedef reg_t<uint32_t, 0x40006a78, rw_t<uint32_t>> r_TXBUF6__158;
            typedef reg_t<uint32_t, 0x40006a7c, rw_t<uint32_t>> r_TXBUF6__159;
            typedef reg_t<uint32_t, 0x40006a80, rw_t<uint32_t>> r_TXBUF6__160;
            typedef reg_t<uint32_t, 0x40006a84, rw_t<uint32_t>> r_TXBUF6__161;
            typedef reg_t<uint32_t, 0x40006a88, rw_t<uint32_t>> r_TXBUF6__162;
            typedef reg_t<uint32_t, 0x40006a8c, rw_t<uint32_t>> r_TXBUF6__163;
            typedef reg_t<uint32_t, 0x40006a90, rw_t<uint32_t>> r_TXBUF6__164;
            typedef reg_t<uint32_t, 0x40006a94, rw_t<uint32_t>> r_TXBUF6__165;
            typedef reg_t<uint32_t, 0x40006a98, rw_t<uint32_t>> r_TXBUF6__166;
            typedef reg_t<uint32_t, 0x40006a9c, rw_t<uint32_t>> r_TXBUF6__167;
            typedef reg_t<uint32_t, 0x40006aa0, rw_t<uint32_t>> r_TXBUF6__168;
            typedef reg_t<uint32_t, 0x40006aa4, rw_t<uint32_t>> r_TXBUF6__169;
            typedef reg_t<uint32_t, 0x40006aa8, rw_t<uint32_t>> r_TXBUF6__170;
            typedef reg_t<uint32_t, 0x40006aac, rw_t<uint32_t>> r_TXBUF6__171;
            typedef reg_t<uint32_t, 0x40006ab0, rw_t<uint32_t>> r_TXBUF6__172;
            typedef reg_t<uint32_t, 0x40006ab4, rw_t<uint32_t>> r_TXBUF6__173;
            typedef reg_t<uint32_t, 0x40006ab8, rw_t<uint32_t>> r_TXBUF6__174;
            typedef reg_t<uint32_t, 0x40006abc, rw_t<uint32_t>> r_TXBUF6__175;
            typedef reg_t<uint32_t, 0x40006ac0, rw_t<uint32_t>> r_TXBUF6__176;
            typedef reg_t<uint32_t, 0x40006ac4, rw_t<uint32_t>> r_TXBUF6__177;
            typedef reg_t<uint32_t, 0x40006ac8, rw_t<uint32_t>> r_TXBUF6__178;
            typedef reg_t<uint32_t, 0x40006acc, rw_t<uint32_t>> r_TXBUF6__179;
            typedef reg_t<uint32_t, 0x40006ad0, rw_t<uint32_t>> r_TXBUF6__180;
            typedef reg_t<uint32_t, 0x40006ad4, rw_t<uint32_t>> r_TXBUF6__181;
            typedef reg_t<uint32_t, 0x40006ad8, rw_t<uint32_t>> r_TXBUF6__182;
            typedef reg_t<uint32_t, 0x40006adc, rw_t<uint32_t>> r_TXBUF6__183;
            typedef reg_t<uint32_t, 0x40006ae0, rw_t<uint32_t>> r_TXBUF6__184;
            typedef reg_t<uint32_t, 0x40006ae4, rw_t<uint32_t>> r_TXBUF6__185;
            typedef reg_t<uint32_t, 0x40006ae8, rw_t<uint32_t>> r_TXBUF6__186;
            typedef reg_t<uint32_t, 0x40006aec, rw_t<uint32_t>> r_TXBUF6__187;
            typedef reg_t<uint32_t, 0x40006af0, rw_t<uint32_t>> r_TXBUF6__188;
            typedef reg_t<uint32_t, 0x40006af4, rw_t<uint32_t>> r_TXBUF6__189;
            typedef reg_t<uint32_t, 0x40006af8, rw_t<uint32_t>> r_TXBUF6__190;
            typedef reg_t<uint32_t, 0x40006afc, rw_t<uint32_t>> r_TXBUF6__191;
            typedef reg_t<uint32_t, 0x40006b00, rw_t<uint32_t>> r_TXBUF6__192;
            typedef reg_t<uint32_t, 0x40006b04, rw_t<uint32_t>> r_TXBUF6__193;
            typedef reg_t<uint32_t, 0x40006b08, rw_t<uint32_t>> r_TXBUF6__194;
            typedef reg_t<uint32_t, 0x40006b0c, rw_t<uint32_t>> r_TXBUF6__195;
            typedef reg_t<uint32_t, 0x40006b10, rw_t<uint32_t>> r_TXBUF6__196;
            typedef reg_t<uint32_t, 0x40006b14, rw_t<uint32_t>> r_TXBUF6__197;
            typedef reg_t<uint32_t, 0x40006b18, rw_t<uint32_t>> r_TXBUF6__198;
            typedef reg_t<uint32_t, 0x40006b1c, rw_t<uint32_t>> r_TXBUF6__199;
            typedef reg_t<uint32_t, 0x40006b20, rw_t<uint32_t>> r_TXBUF6__200;
            typedef reg_t<uint32_t, 0x40006b24, rw_t<uint32_t>> r_TXBUF6__201;
            typedef reg_t<uint32_t, 0x40006b28, rw_t<uint32_t>> r_TXBUF6__202;
            typedef reg_t<uint32_t, 0x40006b2c, rw_t<uint32_t>> r_TXBUF6__203;
            typedef reg_t<uint32_t, 0x40006b30, rw_t<uint32_t>> r_TXBUF6__204;
            typedef reg_t<uint32_t, 0x40006b34, rw_t<uint32_t>> r_TXBUF6__205;
            typedef reg_t<uint32_t, 0x40006b38, rw_t<uint32_t>> r_TXBUF6__206;
            typedef reg_t<uint32_t, 0x40006b3c, rw_t<uint32_t>> r_TXBUF6__207;
            typedef reg_t<uint32_t, 0x40006b40, rw_t<uint32_t>> r_TXBUF6__208;
            typedef reg_t<uint32_t, 0x40006b44, rw_t<uint32_t>> r_TXBUF6__209;
            typedef reg_t<uint32_t, 0x40006b48, rw_t<uint32_t>> r_TXBUF6__210;
            typedef reg_t<uint32_t, 0x40006b4c, rw_t<uint32_t>> r_TXBUF6__211;
            typedef reg_t<uint32_t, 0x40006b50, rw_t<uint32_t>> r_TXBUF6__212;
            typedef reg_t<uint32_t, 0x40006b54, rw_t<uint32_t>> r_TXBUF6__213;
            typedef reg_t<uint32_t, 0x40006b58, rw_t<uint32_t>> r_TXBUF6__214;
            typedef reg_t<uint32_t, 0x40006b5c, rw_t<uint32_t>> r_TXBUF6__215;
            typedef reg_t<uint32_t, 0x40006b60, rw_t<uint32_t>> r_TXBUF6__216;
            typedef reg_t<uint32_t, 0x40006b64, rw_t<uint32_t>> r_TXBUF6__217;
            typedef reg_t<uint32_t, 0x40006b68, rw_t<uint32_t>> r_TXBUF6__218;
            typedef reg_t<uint32_t, 0x40006b6c, rw_t<uint32_t>> r_TXBUF6__219;
            typedef reg_t<uint32_t, 0x40006b70, rw_t<uint32_t>> r_TXBUF6__220;
            typedef reg_t<uint32_t, 0x40006b74, rw_t<uint32_t>> r_TXBUF6__221;
            typedef reg_t<uint32_t, 0x40006b78, rw_t<uint32_t>> r_TXBUF6__222;
            typedef reg_t<uint32_t, 0x40006b7c, rw_t<uint32_t>> r_TXBUF6__223;
            typedef reg_t<uint32_t, 0x40006b80, rw_t<uint32_t>> r_TXBUF6__224;
            typedef reg_t<uint32_t, 0x40006b84, rw_t<uint32_t>> r_TXBUF6__225;
            typedef reg_t<uint32_t, 0x40006b88, rw_t<uint32_t>> r_TXBUF6__226;
            typedef reg_t<uint32_t, 0x40006b8c, rw_t<uint32_t>> r_TXBUF6__227;
            typedef reg_t<uint32_t, 0x40006b90, rw_t<uint32_t>> r_TXBUF6__228;
            typedef reg_t<uint32_t, 0x40006b94, rw_t<uint32_t>> r_TXBUF6__229;
            typedef reg_t<uint32_t, 0x40006b98, rw_t<uint32_t>> r_TXBUF6__230;
            typedef reg_t<uint32_t, 0x40006b9c, rw_t<uint32_t>> r_TXBUF6__231;
            typedef reg_t<uint32_t, 0x40006ba0, rw_t<uint32_t>> r_TXBUF6__232;
            typedef reg_t<uint32_t, 0x40006ba4, rw_t<uint32_t>> r_TXBUF6__233;
            typedef reg_t<uint32_t, 0x40006ba8, rw_t<uint32_t>> r_TXBUF6__234;
            typedef reg_t<uint32_t, 0x40006bac, rw_t<uint32_t>> r_TXBUF6__235;
            typedef reg_t<uint32_t, 0x40006bb0, rw_t<uint32_t>> r_TXBUF6__236;
            typedef reg_t<uint32_t, 0x40006bb4, rw_t<uint32_t>> r_TXBUF6__237;
            typedef reg_t<uint32_t, 0x40006bb8, rw_t<uint32_t>> r_TXBUF6__238;
            typedef reg_t<uint32_t, 0x40006bbc, rw_t<uint32_t>> r_TXBUF6__239;
            typedef reg_t<uint32_t, 0x40006bc0, rw_t<uint32_t>> r_TXBUF6__240;
            typedef reg_t<uint32_t, 0x40006bc4, rw_t<uint32_t>> r_TXBUF6__241;
            typedef reg_t<uint32_t, 0x40006bc8, rw_t<uint32_t>> r_TXBUF6__242;
            typedef reg_t<uint32_t, 0x40006bcc, rw_t<uint32_t>> r_TXBUF6__243;
            typedef reg_t<uint32_t, 0x40006bd0, rw_t<uint32_t>> r_TXBUF6__244;
            typedef reg_t<uint32_t, 0x40006bd4, rw_t<uint32_t>> r_TXBUF6__245;
            typedef reg_t<uint32_t, 0x40006bd8, rw_t<uint32_t>> r_TXBUF6__246;
            typedef reg_t<uint32_t, 0x40006bdc, rw_t<uint32_t>> r_TXBUF6__247;
            typedef reg_t<uint32_t, 0x40006be0, rw_t<uint32_t>> r_TXBUF6__248;
            typedef reg_t<uint32_t, 0x40006be4, rw_t<uint32_t>> r_TXBUF6__249;
            typedef reg_t<uint32_t, 0x40006be8, rw_t<uint32_t>> r_TXBUF6__250;
            typedef reg_t<uint32_t, 0x40006bec, rw_t<uint32_t>> r_TXBUF6__251;
            typedef reg_t<uint32_t, 0x40006bf0, rw_t<uint32_t>> r_TXBUF6__252;
            typedef reg_t<uint32_t, 0x40006bf4, rw_t<uint32_t>> r_TXBUF6__253;
            typedef reg_t<uint32_t, 0x40006bf8, rw_t<uint32_t>> r_TXBUF6__254;
            typedef reg_t<uint32_t, 0x40006bfc, rw_t<uint32_t>> r_TXBUF6__255;
        } // end of TXBUF6_[%s]
        namespace TXBUF7_ {
            // TXBUF7_ register
            typedef reg_t<uint32_t, 0x40006c00, rw_t<uint32_t>> r_TXBUF7__0;
            typedef reg_t<uint32_t, 0x40006c04, rw_t<uint32_t>> r_TXBUF7__1;
            typedef reg_t<uint32_t, 0x40006c08, rw_t<uint32_t>> r_TXBUF7__2;
            typedef reg_t<uint32_t, 0x40006c0c, rw_t<uint32_t>> r_TXBUF7__3;
            typedef reg_t<uint32_t, 0x40006c10, rw_t<uint32_t>> r_TXBUF7__4;
            typedef reg_t<uint32_t, 0x40006c14, rw_t<uint32_t>> r_TXBUF7__5;
            typedef reg_t<uint32_t, 0x40006c18, rw_t<uint32_t>> r_TXBUF7__6;
            typedef reg_t<uint32_t, 0x40006c1c, rw_t<uint32_t>> r_TXBUF7__7;
            typedef reg_t<uint32_t, 0x40006c20, rw_t<uint32_t>> r_TXBUF7__8;
            typedef reg_t<uint32_t, 0x40006c24, rw_t<uint32_t>> r_TXBUF7__9;
            typedef reg_t<uint32_t, 0x40006c28, rw_t<uint32_t>> r_TXBUF7__10;
            typedef reg_t<uint32_t, 0x40006c2c, rw_t<uint32_t>> r_TXBUF7__11;
            typedef reg_t<uint32_t, 0x40006c30, rw_t<uint32_t>> r_TXBUF7__12;
            typedef reg_t<uint32_t, 0x40006c34, rw_t<uint32_t>> r_TXBUF7__13;
            typedef reg_t<uint32_t, 0x40006c38, rw_t<uint32_t>> r_TXBUF7__14;
            typedef reg_t<uint32_t, 0x40006c3c, rw_t<uint32_t>> r_TXBUF7__15;
            typedef reg_t<uint32_t, 0x40006c40, rw_t<uint32_t>> r_TXBUF7__16;
            typedef reg_t<uint32_t, 0x40006c44, rw_t<uint32_t>> r_TXBUF7__17;
            typedef reg_t<uint32_t, 0x40006c48, rw_t<uint32_t>> r_TXBUF7__18;
            typedef reg_t<uint32_t, 0x40006c4c, rw_t<uint32_t>> r_TXBUF7__19;
            typedef reg_t<uint32_t, 0x40006c50, rw_t<uint32_t>> r_TXBUF7__20;
            typedef reg_t<uint32_t, 0x40006c54, rw_t<uint32_t>> r_TXBUF7__21;
            typedef reg_t<uint32_t, 0x40006c58, rw_t<uint32_t>> r_TXBUF7__22;
            typedef reg_t<uint32_t, 0x40006c5c, rw_t<uint32_t>> r_TXBUF7__23;
            typedef reg_t<uint32_t, 0x40006c60, rw_t<uint32_t>> r_TXBUF7__24;
            typedef reg_t<uint32_t, 0x40006c64, rw_t<uint32_t>> r_TXBUF7__25;
            typedef reg_t<uint32_t, 0x40006c68, rw_t<uint32_t>> r_TXBUF7__26;
            typedef reg_t<uint32_t, 0x40006c6c, rw_t<uint32_t>> r_TXBUF7__27;
            typedef reg_t<uint32_t, 0x40006c70, rw_t<uint32_t>> r_TXBUF7__28;
            typedef reg_t<uint32_t, 0x40006c74, rw_t<uint32_t>> r_TXBUF7__29;
            typedef reg_t<uint32_t, 0x40006c78, rw_t<uint32_t>> r_TXBUF7__30;
            typedef reg_t<uint32_t, 0x40006c7c, rw_t<uint32_t>> r_TXBUF7__31;
            typedef reg_t<uint32_t, 0x40006c80, rw_t<uint32_t>> r_TXBUF7__32;
            typedef reg_t<uint32_t, 0x40006c84, rw_t<uint32_t>> r_TXBUF7__33;
            typedef reg_t<uint32_t, 0x40006c88, rw_t<uint32_t>> r_TXBUF7__34;
            typedef reg_t<uint32_t, 0x40006c8c, rw_t<uint32_t>> r_TXBUF7__35;
            typedef reg_t<uint32_t, 0x40006c90, rw_t<uint32_t>> r_TXBUF7__36;
            typedef reg_t<uint32_t, 0x40006c94, rw_t<uint32_t>> r_TXBUF7__37;
            typedef reg_t<uint32_t, 0x40006c98, rw_t<uint32_t>> r_TXBUF7__38;
            typedef reg_t<uint32_t, 0x40006c9c, rw_t<uint32_t>> r_TXBUF7__39;
            typedef reg_t<uint32_t, 0x40006ca0, rw_t<uint32_t>> r_TXBUF7__40;
            typedef reg_t<uint32_t, 0x40006ca4, rw_t<uint32_t>> r_TXBUF7__41;
            typedef reg_t<uint32_t, 0x40006ca8, rw_t<uint32_t>> r_TXBUF7__42;
            typedef reg_t<uint32_t, 0x40006cac, rw_t<uint32_t>> r_TXBUF7__43;
            typedef reg_t<uint32_t, 0x40006cb0, rw_t<uint32_t>> r_TXBUF7__44;
            typedef reg_t<uint32_t, 0x40006cb4, rw_t<uint32_t>> r_TXBUF7__45;
            typedef reg_t<uint32_t, 0x40006cb8, rw_t<uint32_t>> r_TXBUF7__46;
            typedef reg_t<uint32_t, 0x40006cbc, rw_t<uint32_t>> r_TXBUF7__47;
            typedef reg_t<uint32_t, 0x40006cc0, rw_t<uint32_t>> r_TXBUF7__48;
            typedef reg_t<uint32_t, 0x40006cc4, rw_t<uint32_t>> r_TXBUF7__49;
            typedef reg_t<uint32_t, 0x40006cc8, rw_t<uint32_t>> r_TXBUF7__50;
            typedef reg_t<uint32_t, 0x40006ccc, rw_t<uint32_t>> r_TXBUF7__51;
            typedef reg_t<uint32_t, 0x40006cd0, rw_t<uint32_t>> r_TXBUF7__52;
            typedef reg_t<uint32_t, 0x40006cd4, rw_t<uint32_t>> r_TXBUF7__53;
            typedef reg_t<uint32_t, 0x40006cd8, rw_t<uint32_t>> r_TXBUF7__54;
            typedef reg_t<uint32_t, 0x40006cdc, rw_t<uint32_t>> r_TXBUF7__55;
            typedef reg_t<uint32_t, 0x40006ce0, rw_t<uint32_t>> r_TXBUF7__56;
            typedef reg_t<uint32_t, 0x40006ce4, rw_t<uint32_t>> r_TXBUF7__57;
            typedef reg_t<uint32_t, 0x40006ce8, rw_t<uint32_t>> r_TXBUF7__58;
            typedef reg_t<uint32_t, 0x40006cec, rw_t<uint32_t>> r_TXBUF7__59;
            typedef reg_t<uint32_t, 0x40006cf0, rw_t<uint32_t>> r_TXBUF7__60;
            typedef reg_t<uint32_t, 0x40006cf4, rw_t<uint32_t>> r_TXBUF7__61;
            typedef reg_t<uint32_t, 0x40006cf8, rw_t<uint32_t>> r_TXBUF7__62;
            typedef reg_t<uint32_t, 0x40006cfc, rw_t<uint32_t>> r_TXBUF7__63;
            typedef reg_t<uint32_t, 0x40006d00, rw_t<uint32_t>> r_TXBUF7__64;
            typedef reg_t<uint32_t, 0x40006d04, rw_t<uint32_t>> r_TXBUF7__65;
            typedef reg_t<uint32_t, 0x40006d08, rw_t<uint32_t>> r_TXBUF7__66;
            typedef reg_t<uint32_t, 0x40006d0c, rw_t<uint32_t>> r_TXBUF7__67;
            typedef reg_t<uint32_t, 0x40006d10, rw_t<uint32_t>> r_TXBUF7__68;
            typedef reg_t<uint32_t, 0x40006d14, rw_t<uint32_t>> r_TXBUF7__69;
            typedef reg_t<uint32_t, 0x40006d18, rw_t<uint32_t>> r_TXBUF7__70;
            typedef reg_t<uint32_t, 0x40006d1c, rw_t<uint32_t>> r_TXBUF7__71;
            typedef reg_t<uint32_t, 0x40006d20, rw_t<uint32_t>> r_TXBUF7__72;
            typedef reg_t<uint32_t, 0x40006d24, rw_t<uint32_t>> r_TXBUF7__73;
            typedef reg_t<uint32_t, 0x40006d28, rw_t<uint32_t>> r_TXBUF7__74;
            typedef reg_t<uint32_t, 0x40006d2c, rw_t<uint32_t>> r_TXBUF7__75;
            typedef reg_t<uint32_t, 0x40006d30, rw_t<uint32_t>> r_TXBUF7__76;
            typedef reg_t<uint32_t, 0x40006d34, rw_t<uint32_t>> r_TXBUF7__77;
            typedef reg_t<uint32_t, 0x40006d38, rw_t<uint32_t>> r_TXBUF7__78;
            typedef reg_t<uint32_t, 0x40006d3c, rw_t<uint32_t>> r_TXBUF7__79;
            typedef reg_t<uint32_t, 0x40006d40, rw_t<uint32_t>> r_TXBUF7__80;
            typedef reg_t<uint32_t, 0x40006d44, rw_t<uint32_t>> r_TXBUF7__81;
            typedef reg_t<uint32_t, 0x40006d48, rw_t<uint32_t>> r_TXBUF7__82;
            typedef reg_t<uint32_t, 0x40006d4c, rw_t<uint32_t>> r_TXBUF7__83;
            typedef reg_t<uint32_t, 0x40006d50, rw_t<uint32_t>> r_TXBUF7__84;
            typedef reg_t<uint32_t, 0x40006d54, rw_t<uint32_t>> r_TXBUF7__85;
            typedef reg_t<uint32_t, 0x40006d58, rw_t<uint32_t>> r_TXBUF7__86;
            typedef reg_t<uint32_t, 0x40006d5c, rw_t<uint32_t>> r_TXBUF7__87;
            typedef reg_t<uint32_t, 0x40006d60, rw_t<uint32_t>> r_TXBUF7__88;
            typedef reg_t<uint32_t, 0x40006d64, rw_t<uint32_t>> r_TXBUF7__89;
            typedef reg_t<uint32_t, 0x40006d68, rw_t<uint32_t>> r_TXBUF7__90;
            typedef reg_t<uint32_t, 0x40006d6c, rw_t<uint32_t>> r_TXBUF7__91;
            typedef reg_t<uint32_t, 0x40006d70, rw_t<uint32_t>> r_TXBUF7__92;
            typedef reg_t<uint32_t, 0x40006d74, rw_t<uint32_t>> r_TXBUF7__93;
            typedef reg_t<uint32_t, 0x40006d78, rw_t<uint32_t>> r_TXBUF7__94;
            typedef reg_t<uint32_t, 0x40006d7c, rw_t<uint32_t>> r_TXBUF7__95;
            typedef reg_t<uint32_t, 0x40006d80, rw_t<uint32_t>> r_TXBUF7__96;
            typedef reg_t<uint32_t, 0x40006d84, rw_t<uint32_t>> r_TXBUF7__97;
            typedef reg_t<uint32_t, 0x40006d88, rw_t<uint32_t>> r_TXBUF7__98;
            typedef reg_t<uint32_t, 0x40006d8c, rw_t<uint32_t>> r_TXBUF7__99;
            typedef reg_t<uint32_t, 0x40006d90, rw_t<uint32_t>> r_TXBUF7__100;
            typedef reg_t<uint32_t, 0x40006d94, rw_t<uint32_t>> r_TXBUF7__101;
            typedef reg_t<uint32_t, 0x40006d98, rw_t<uint32_t>> r_TXBUF7__102;
            typedef reg_t<uint32_t, 0x40006d9c, rw_t<uint32_t>> r_TXBUF7__103;
            typedef reg_t<uint32_t, 0x40006da0, rw_t<uint32_t>> r_TXBUF7__104;
            typedef reg_t<uint32_t, 0x40006da4, rw_t<uint32_t>> r_TXBUF7__105;
            typedef reg_t<uint32_t, 0x40006da8, rw_t<uint32_t>> r_TXBUF7__106;
            typedef reg_t<uint32_t, 0x40006dac, rw_t<uint32_t>> r_TXBUF7__107;
            typedef reg_t<uint32_t, 0x40006db0, rw_t<uint32_t>> r_TXBUF7__108;
            typedef reg_t<uint32_t, 0x40006db4, rw_t<uint32_t>> r_TXBUF7__109;
            typedef reg_t<uint32_t, 0x40006db8, rw_t<uint32_t>> r_TXBUF7__110;
            typedef reg_t<uint32_t, 0x40006dbc, rw_t<uint32_t>> r_TXBUF7__111;
            typedef reg_t<uint32_t, 0x40006dc0, rw_t<uint32_t>> r_TXBUF7__112;
            typedef reg_t<uint32_t, 0x40006dc4, rw_t<uint32_t>> r_TXBUF7__113;
            typedef reg_t<uint32_t, 0x40006dc8, rw_t<uint32_t>> r_TXBUF7__114;
            typedef reg_t<uint32_t, 0x40006dcc, rw_t<uint32_t>> r_TXBUF7__115;
            typedef reg_t<uint32_t, 0x40006dd0, rw_t<uint32_t>> r_TXBUF7__116;
            typedef reg_t<uint32_t, 0x40006dd4, rw_t<uint32_t>> r_TXBUF7__117;
            typedef reg_t<uint32_t, 0x40006dd8, rw_t<uint32_t>> r_TXBUF7__118;
            typedef reg_t<uint32_t, 0x40006ddc, rw_t<uint32_t>> r_TXBUF7__119;
            typedef reg_t<uint32_t, 0x40006de0, rw_t<uint32_t>> r_TXBUF7__120;
            typedef reg_t<uint32_t, 0x40006de4, rw_t<uint32_t>> r_TXBUF7__121;
            typedef reg_t<uint32_t, 0x40006de8, rw_t<uint32_t>> r_TXBUF7__122;
            typedef reg_t<uint32_t, 0x40006dec, rw_t<uint32_t>> r_TXBUF7__123;
            typedef reg_t<uint32_t, 0x40006df0, rw_t<uint32_t>> r_TXBUF7__124;
            typedef reg_t<uint32_t, 0x40006df4, rw_t<uint32_t>> r_TXBUF7__125;
            typedef reg_t<uint32_t, 0x40006df8, rw_t<uint32_t>> r_TXBUF7__126;
            typedef reg_t<uint32_t, 0x40006dfc, rw_t<uint32_t>> r_TXBUF7__127;
            typedef reg_t<uint32_t, 0x40006e00, rw_t<uint32_t>> r_TXBUF7__128;
            typedef reg_t<uint32_t, 0x40006e04, rw_t<uint32_t>> r_TXBUF7__129;
            typedef reg_t<uint32_t, 0x40006e08, rw_t<uint32_t>> r_TXBUF7__130;
            typedef reg_t<uint32_t, 0x40006e0c, rw_t<uint32_t>> r_TXBUF7__131;
            typedef reg_t<uint32_t, 0x40006e10, rw_t<uint32_t>> r_TXBUF7__132;
            typedef reg_t<uint32_t, 0x40006e14, rw_t<uint32_t>> r_TXBUF7__133;
            typedef reg_t<uint32_t, 0x40006e18, rw_t<uint32_t>> r_TXBUF7__134;
            typedef reg_t<uint32_t, 0x40006e1c, rw_t<uint32_t>> r_TXBUF7__135;
            typedef reg_t<uint32_t, 0x40006e20, rw_t<uint32_t>> r_TXBUF7__136;
            typedef reg_t<uint32_t, 0x40006e24, rw_t<uint32_t>> r_TXBUF7__137;
            typedef reg_t<uint32_t, 0x40006e28, rw_t<uint32_t>> r_TXBUF7__138;
            typedef reg_t<uint32_t, 0x40006e2c, rw_t<uint32_t>> r_TXBUF7__139;
            typedef reg_t<uint32_t, 0x40006e30, rw_t<uint32_t>> r_TXBUF7__140;
            typedef reg_t<uint32_t, 0x40006e34, rw_t<uint32_t>> r_TXBUF7__141;
            typedef reg_t<uint32_t, 0x40006e38, rw_t<uint32_t>> r_TXBUF7__142;
            typedef reg_t<uint32_t, 0x40006e3c, rw_t<uint32_t>> r_TXBUF7__143;
            typedef reg_t<uint32_t, 0x40006e40, rw_t<uint32_t>> r_TXBUF7__144;
            typedef reg_t<uint32_t, 0x40006e44, rw_t<uint32_t>> r_TXBUF7__145;
            typedef reg_t<uint32_t, 0x40006e48, rw_t<uint32_t>> r_TXBUF7__146;
            typedef reg_t<uint32_t, 0x40006e4c, rw_t<uint32_t>> r_TXBUF7__147;
            typedef reg_t<uint32_t, 0x40006e50, rw_t<uint32_t>> r_TXBUF7__148;
            typedef reg_t<uint32_t, 0x40006e54, rw_t<uint32_t>> r_TXBUF7__149;
            typedef reg_t<uint32_t, 0x40006e58, rw_t<uint32_t>> r_TXBUF7__150;
            typedef reg_t<uint32_t, 0x40006e5c, rw_t<uint32_t>> r_TXBUF7__151;
            typedef reg_t<uint32_t, 0x40006e60, rw_t<uint32_t>> r_TXBUF7__152;
            typedef reg_t<uint32_t, 0x40006e64, rw_t<uint32_t>> r_TXBUF7__153;
            typedef reg_t<uint32_t, 0x40006e68, rw_t<uint32_t>> r_TXBUF7__154;
            typedef reg_t<uint32_t, 0x40006e6c, rw_t<uint32_t>> r_TXBUF7__155;
            typedef reg_t<uint32_t, 0x40006e70, rw_t<uint32_t>> r_TXBUF7__156;
            typedef reg_t<uint32_t, 0x40006e74, rw_t<uint32_t>> r_TXBUF7__157;
            typedef reg_t<uint32_t, 0x40006e78, rw_t<uint32_t>> r_TXBUF7__158;
            typedef reg_t<uint32_t, 0x40006e7c, rw_t<uint32_t>> r_TXBUF7__159;
            typedef reg_t<uint32_t, 0x40006e80, rw_t<uint32_t>> r_TXBUF7__160;
            typedef reg_t<uint32_t, 0x40006e84, rw_t<uint32_t>> r_TXBUF7__161;
            typedef reg_t<uint32_t, 0x40006e88, rw_t<uint32_t>> r_TXBUF7__162;
            typedef reg_t<uint32_t, 0x40006e8c, rw_t<uint32_t>> r_TXBUF7__163;
            typedef reg_t<uint32_t, 0x40006e90, rw_t<uint32_t>> r_TXBUF7__164;
            typedef reg_t<uint32_t, 0x40006e94, rw_t<uint32_t>> r_TXBUF7__165;
            typedef reg_t<uint32_t, 0x40006e98, rw_t<uint32_t>> r_TXBUF7__166;
            typedef reg_t<uint32_t, 0x40006e9c, rw_t<uint32_t>> r_TXBUF7__167;
            typedef reg_t<uint32_t, 0x40006ea0, rw_t<uint32_t>> r_TXBUF7__168;
            typedef reg_t<uint32_t, 0x40006ea4, rw_t<uint32_t>> r_TXBUF7__169;
            typedef reg_t<uint32_t, 0x40006ea8, rw_t<uint32_t>> r_TXBUF7__170;
            typedef reg_t<uint32_t, 0x40006eac, rw_t<uint32_t>> r_TXBUF7__171;
            typedef reg_t<uint32_t, 0x40006eb0, rw_t<uint32_t>> r_TXBUF7__172;
            typedef reg_t<uint32_t, 0x40006eb4, rw_t<uint32_t>> r_TXBUF7__173;
            typedef reg_t<uint32_t, 0x40006eb8, rw_t<uint32_t>> r_TXBUF7__174;
            typedef reg_t<uint32_t, 0x40006ebc, rw_t<uint32_t>> r_TXBUF7__175;
            typedef reg_t<uint32_t, 0x40006ec0, rw_t<uint32_t>> r_TXBUF7__176;
            typedef reg_t<uint32_t, 0x40006ec4, rw_t<uint32_t>> r_TXBUF7__177;
            typedef reg_t<uint32_t, 0x40006ec8, rw_t<uint32_t>> r_TXBUF7__178;
            typedef reg_t<uint32_t, 0x40006ecc, rw_t<uint32_t>> r_TXBUF7__179;
            typedef reg_t<uint32_t, 0x40006ed0, rw_t<uint32_t>> r_TXBUF7__180;
            typedef reg_t<uint32_t, 0x40006ed4, rw_t<uint32_t>> r_TXBUF7__181;
            typedef reg_t<uint32_t, 0x40006ed8, rw_t<uint32_t>> r_TXBUF7__182;
            typedef reg_t<uint32_t, 0x40006edc, rw_t<uint32_t>> r_TXBUF7__183;
            typedef reg_t<uint32_t, 0x40006ee0, rw_t<uint32_t>> r_TXBUF7__184;
            typedef reg_t<uint32_t, 0x40006ee4, rw_t<uint32_t>> r_TXBUF7__185;
            typedef reg_t<uint32_t, 0x40006ee8, rw_t<uint32_t>> r_TXBUF7__186;
            typedef reg_t<uint32_t, 0x40006eec, rw_t<uint32_t>> r_TXBUF7__187;
            typedef reg_t<uint32_t, 0x40006ef0, rw_t<uint32_t>> r_TXBUF7__188;
            typedef reg_t<uint32_t, 0x40006ef4, rw_t<uint32_t>> r_TXBUF7__189;
            typedef reg_t<uint32_t, 0x40006ef8, rw_t<uint32_t>> r_TXBUF7__190;
            typedef reg_t<uint32_t, 0x40006efc, rw_t<uint32_t>> r_TXBUF7__191;
            typedef reg_t<uint32_t, 0x40006f00, rw_t<uint32_t>> r_TXBUF7__192;
            typedef reg_t<uint32_t, 0x40006f04, rw_t<uint32_t>> r_TXBUF7__193;
            typedef reg_t<uint32_t, 0x40006f08, rw_t<uint32_t>> r_TXBUF7__194;
            typedef reg_t<uint32_t, 0x40006f0c, rw_t<uint32_t>> r_TXBUF7__195;
            typedef reg_t<uint32_t, 0x40006f10, rw_t<uint32_t>> r_TXBUF7__196;
            typedef reg_t<uint32_t, 0x40006f14, rw_t<uint32_t>> r_TXBUF7__197;
            typedef reg_t<uint32_t, 0x40006f18, rw_t<uint32_t>> r_TXBUF7__198;
            typedef reg_t<uint32_t, 0x40006f1c, rw_t<uint32_t>> r_TXBUF7__199;
            typedef reg_t<uint32_t, 0x40006f20, rw_t<uint32_t>> r_TXBUF7__200;
            typedef reg_t<uint32_t, 0x40006f24, rw_t<uint32_t>> r_TXBUF7__201;
            typedef reg_t<uint32_t, 0x40006f28, rw_t<uint32_t>> r_TXBUF7__202;
            typedef reg_t<uint32_t, 0x40006f2c, rw_t<uint32_t>> r_TXBUF7__203;
            typedef reg_t<uint32_t, 0x40006f30, rw_t<uint32_t>> r_TXBUF7__204;
            typedef reg_t<uint32_t, 0x40006f34, rw_t<uint32_t>> r_TXBUF7__205;
            typedef reg_t<uint32_t, 0x40006f38, rw_t<uint32_t>> r_TXBUF7__206;
            typedef reg_t<uint32_t, 0x40006f3c, rw_t<uint32_t>> r_TXBUF7__207;
            typedef reg_t<uint32_t, 0x40006f40, rw_t<uint32_t>> r_TXBUF7__208;
            typedef reg_t<uint32_t, 0x40006f44, rw_t<uint32_t>> r_TXBUF7__209;
            typedef reg_t<uint32_t, 0x40006f48, rw_t<uint32_t>> r_TXBUF7__210;
            typedef reg_t<uint32_t, 0x40006f4c, rw_t<uint32_t>> r_TXBUF7__211;
            typedef reg_t<uint32_t, 0x40006f50, rw_t<uint32_t>> r_TXBUF7__212;
            typedef reg_t<uint32_t, 0x40006f54, rw_t<uint32_t>> r_TXBUF7__213;
            typedef reg_t<uint32_t, 0x40006f58, rw_t<uint32_t>> r_TXBUF7__214;
            typedef reg_t<uint32_t, 0x40006f5c, rw_t<uint32_t>> r_TXBUF7__215;
            typedef reg_t<uint32_t, 0x40006f60, rw_t<uint32_t>> r_TXBUF7__216;
            typedef reg_t<uint32_t, 0x40006f64, rw_t<uint32_t>> r_TXBUF7__217;
            typedef reg_t<uint32_t, 0x40006f68, rw_t<uint32_t>> r_TXBUF7__218;
            typedef reg_t<uint32_t, 0x40006f6c, rw_t<uint32_t>> r_TXBUF7__219;
            typedef reg_t<uint32_t, 0x40006f70, rw_t<uint32_t>> r_TXBUF7__220;
            typedef reg_t<uint32_t, 0x40006f74, rw_t<uint32_t>> r_TXBUF7__221;
            typedef reg_t<uint32_t, 0x40006f78, rw_t<uint32_t>> r_TXBUF7__222;
            typedef reg_t<uint32_t, 0x40006f7c, rw_t<uint32_t>> r_TXBUF7__223;
            typedef reg_t<uint32_t, 0x40006f80, rw_t<uint32_t>> r_TXBUF7__224;
            typedef reg_t<uint32_t, 0x40006f84, rw_t<uint32_t>> r_TXBUF7__225;
            typedef reg_t<uint32_t, 0x40006f88, rw_t<uint32_t>> r_TXBUF7__226;
            typedef reg_t<uint32_t, 0x40006f8c, rw_t<uint32_t>> r_TXBUF7__227;
            typedef reg_t<uint32_t, 0x40006f90, rw_t<uint32_t>> r_TXBUF7__228;
            typedef reg_t<uint32_t, 0x40006f94, rw_t<uint32_t>> r_TXBUF7__229;
            typedef reg_t<uint32_t, 0x40006f98, rw_t<uint32_t>> r_TXBUF7__230;
            typedef reg_t<uint32_t, 0x40006f9c, rw_t<uint32_t>> r_TXBUF7__231;
            typedef reg_t<uint32_t, 0x40006fa0, rw_t<uint32_t>> r_TXBUF7__232;
            typedef reg_t<uint32_t, 0x40006fa4, rw_t<uint32_t>> r_TXBUF7__233;
            typedef reg_t<uint32_t, 0x40006fa8, rw_t<uint32_t>> r_TXBUF7__234;
            typedef reg_t<uint32_t, 0x40006fac, rw_t<uint32_t>> r_TXBUF7__235;
            typedef reg_t<uint32_t, 0x40006fb0, rw_t<uint32_t>> r_TXBUF7__236;
            typedef reg_t<uint32_t, 0x40006fb4, rw_t<uint32_t>> r_TXBUF7__237;
            typedef reg_t<uint32_t, 0x40006fb8, rw_t<uint32_t>> r_TXBUF7__238;
            typedef reg_t<uint32_t, 0x40006fbc, rw_t<uint32_t>> r_TXBUF7__239;
            typedef reg_t<uint32_t, 0x40006fc0, rw_t<uint32_t>> r_TXBUF7__240;
            typedef reg_t<uint32_t, 0x40006fc4, rw_t<uint32_t>> r_TXBUF7__241;
            typedef reg_t<uint32_t, 0x40006fc8, rw_t<uint32_t>> r_TXBUF7__242;
            typedef reg_t<uint32_t, 0x40006fcc, rw_t<uint32_t>> r_TXBUF7__243;
            typedef reg_t<uint32_t, 0x40006fd0, rw_t<uint32_t>> r_TXBUF7__244;
            typedef reg_t<uint32_t, 0x40006fd4, rw_t<uint32_t>> r_TXBUF7__245;
            typedef reg_t<uint32_t, 0x40006fd8, rw_t<uint32_t>> r_TXBUF7__246;
            typedef reg_t<uint32_t, 0x40006fdc, rw_t<uint32_t>> r_TXBUF7__247;
            typedef reg_t<uint32_t, 0x40006fe0, rw_t<uint32_t>> r_TXBUF7__248;
            typedef reg_t<uint32_t, 0x40006fe4, rw_t<uint32_t>> r_TXBUF7__249;
            typedef reg_t<uint32_t, 0x40006fe8, rw_t<uint32_t>> r_TXBUF7__250;
            typedef reg_t<uint32_t, 0x40006fec, rw_t<uint32_t>> r_TXBUF7__251;
            typedef reg_t<uint32_t, 0x40006ff0, rw_t<uint32_t>> r_TXBUF7__252;
            typedef reg_t<uint32_t, 0x40006ff4, rw_t<uint32_t>> r_TXBUF7__253;
            typedef reg_t<uint32_t, 0x40006ff8, rw_t<uint32_t>> r_TXBUF7__254;
            typedef reg_t<uint32_t, 0x40006ffc, rw_t<uint32_t>> r_TXBUF7__255;
        } // end of TXBUF7_[%s]
        namespace TXBUF8_ {
            // TXBUF8_ register
            typedef reg_t<uint32_t, 0x40007000, rw_t<uint32_t>> r_TXBUF8__0;
            typedef reg_t<uint32_t, 0x40007004, rw_t<uint32_t>> r_TXBUF8__1;
            typedef reg_t<uint32_t, 0x40007008, rw_t<uint32_t>> r_TXBUF8__2;
            typedef reg_t<uint32_t, 0x4000700c, rw_t<uint32_t>> r_TXBUF8__3;
            typedef reg_t<uint32_t, 0x40007010, rw_t<uint32_t>> r_TXBUF8__4;
            typedef reg_t<uint32_t, 0x40007014, rw_t<uint32_t>> r_TXBUF8__5;
            typedef reg_t<uint32_t, 0x40007018, rw_t<uint32_t>> r_TXBUF8__6;
            typedef reg_t<uint32_t, 0x4000701c, rw_t<uint32_t>> r_TXBUF8__7;
            typedef reg_t<uint32_t, 0x40007020, rw_t<uint32_t>> r_TXBUF8__8;
            typedef reg_t<uint32_t, 0x40007024, rw_t<uint32_t>> r_TXBUF8__9;
            typedef reg_t<uint32_t, 0x40007028, rw_t<uint32_t>> r_TXBUF8__10;
            typedef reg_t<uint32_t, 0x4000702c, rw_t<uint32_t>> r_TXBUF8__11;
            typedef reg_t<uint32_t, 0x40007030, rw_t<uint32_t>> r_TXBUF8__12;
            typedef reg_t<uint32_t, 0x40007034, rw_t<uint32_t>> r_TXBUF8__13;
            typedef reg_t<uint32_t, 0x40007038, rw_t<uint32_t>> r_TXBUF8__14;
            typedef reg_t<uint32_t, 0x4000703c, rw_t<uint32_t>> r_TXBUF8__15;
            typedef reg_t<uint32_t, 0x40007040, rw_t<uint32_t>> r_TXBUF8__16;
            typedef reg_t<uint32_t, 0x40007044, rw_t<uint32_t>> r_TXBUF8__17;
            typedef reg_t<uint32_t, 0x40007048, rw_t<uint32_t>> r_TXBUF8__18;
            typedef reg_t<uint32_t, 0x4000704c, rw_t<uint32_t>> r_TXBUF8__19;
            typedef reg_t<uint32_t, 0x40007050, rw_t<uint32_t>> r_TXBUF8__20;
            typedef reg_t<uint32_t, 0x40007054, rw_t<uint32_t>> r_TXBUF8__21;
            typedef reg_t<uint32_t, 0x40007058, rw_t<uint32_t>> r_TXBUF8__22;
            typedef reg_t<uint32_t, 0x4000705c, rw_t<uint32_t>> r_TXBUF8__23;
            typedef reg_t<uint32_t, 0x40007060, rw_t<uint32_t>> r_TXBUF8__24;
            typedef reg_t<uint32_t, 0x40007064, rw_t<uint32_t>> r_TXBUF8__25;
            typedef reg_t<uint32_t, 0x40007068, rw_t<uint32_t>> r_TXBUF8__26;
            typedef reg_t<uint32_t, 0x4000706c, rw_t<uint32_t>> r_TXBUF8__27;
            typedef reg_t<uint32_t, 0x40007070, rw_t<uint32_t>> r_TXBUF8__28;
            typedef reg_t<uint32_t, 0x40007074, rw_t<uint32_t>> r_TXBUF8__29;
            typedef reg_t<uint32_t, 0x40007078, rw_t<uint32_t>> r_TXBUF8__30;
            typedef reg_t<uint32_t, 0x4000707c, rw_t<uint32_t>> r_TXBUF8__31;
            typedef reg_t<uint32_t, 0x40007080, rw_t<uint32_t>> r_TXBUF8__32;
            typedef reg_t<uint32_t, 0x40007084, rw_t<uint32_t>> r_TXBUF8__33;
            typedef reg_t<uint32_t, 0x40007088, rw_t<uint32_t>> r_TXBUF8__34;
            typedef reg_t<uint32_t, 0x4000708c, rw_t<uint32_t>> r_TXBUF8__35;
            typedef reg_t<uint32_t, 0x40007090, rw_t<uint32_t>> r_TXBUF8__36;
            typedef reg_t<uint32_t, 0x40007094, rw_t<uint32_t>> r_TXBUF8__37;
            typedef reg_t<uint32_t, 0x40007098, rw_t<uint32_t>> r_TXBUF8__38;
            typedef reg_t<uint32_t, 0x4000709c, rw_t<uint32_t>> r_TXBUF8__39;
            typedef reg_t<uint32_t, 0x400070a0, rw_t<uint32_t>> r_TXBUF8__40;
            typedef reg_t<uint32_t, 0x400070a4, rw_t<uint32_t>> r_TXBUF8__41;
            typedef reg_t<uint32_t, 0x400070a8, rw_t<uint32_t>> r_TXBUF8__42;
            typedef reg_t<uint32_t, 0x400070ac, rw_t<uint32_t>> r_TXBUF8__43;
            typedef reg_t<uint32_t, 0x400070b0, rw_t<uint32_t>> r_TXBUF8__44;
            typedef reg_t<uint32_t, 0x400070b4, rw_t<uint32_t>> r_TXBUF8__45;
            typedef reg_t<uint32_t, 0x400070b8, rw_t<uint32_t>> r_TXBUF8__46;
            typedef reg_t<uint32_t, 0x400070bc, rw_t<uint32_t>> r_TXBUF8__47;
            typedef reg_t<uint32_t, 0x400070c0, rw_t<uint32_t>> r_TXBUF8__48;
            typedef reg_t<uint32_t, 0x400070c4, rw_t<uint32_t>> r_TXBUF8__49;
            typedef reg_t<uint32_t, 0x400070c8, rw_t<uint32_t>> r_TXBUF8__50;
            typedef reg_t<uint32_t, 0x400070cc, rw_t<uint32_t>> r_TXBUF8__51;
            typedef reg_t<uint32_t, 0x400070d0, rw_t<uint32_t>> r_TXBUF8__52;
            typedef reg_t<uint32_t, 0x400070d4, rw_t<uint32_t>> r_TXBUF8__53;
            typedef reg_t<uint32_t, 0x400070d8, rw_t<uint32_t>> r_TXBUF8__54;
            typedef reg_t<uint32_t, 0x400070dc, rw_t<uint32_t>> r_TXBUF8__55;
            typedef reg_t<uint32_t, 0x400070e0, rw_t<uint32_t>> r_TXBUF8__56;
            typedef reg_t<uint32_t, 0x400070e4, rw_t<uint32_t>> r_TXBUF8__57;
            typedef reg_t<uint32_t, 0x400070e8, rw_t<uint32_t>> r_TXBUF8__58;
            typedef reg_t<uint32_t, 0x400070ec, rw_t<uint32_t>> r_TXBUF8__59;
            typedef reg_t<uint32_t, 0x400070f0, rw_t<uint32_t>> r_TXBUF8__60;
            typedef reg_t<uint32_t, 0x400070f4, rw_t<uint32_t>> r_TXBUF8__61;
            typedef reg_t<uint32_t, 0x400070f8, rw_t<uint32_t>> r_TXBUF8__62;
            typedef reg_t<uint32_t, 0x400070fc, rw_t<uint32_t>> r_TXBUF8__63;
            typedef reg_t<uint32_t, 0x40007100, rw_t<uint32_t>> r_TXBUF8__64;
            typedef reg_t<uint32_t, 0x40007104, rw_t<uint32_t>> r_TXBUF8__65;
            typedef reg_t<uint32_t, 0x40007108, rw_t<uint32_t>> r_TXBUF8__66;
            typedef reg_t<uint32_t, 0x4000710c, rw_t<uint32_t>> r_TXBUF8__67;
            typedef reg_t<uint32_t, 0x40007110, rw_t<uint32_t>> r_TXBUF8__68;
            typedef reg_t<uint32_t, 0x40007114, rw_t<uint32_t>> r_TXBUF8__69;
            typedef reg_t<uint32_t, 0x40007118, rw_t<uint32_t>> r_TXBUF8__70;
            typedef reg_t<uint32_t, 0x4000711c, rw_t<uint32_t>> r_TXBUF8__71;
            typedef reg_t<uint32_t, 0x40007120, rw_t<uint32_t>> r_TXBUF8__72;
            typedef reg_t<uint32_t, 0x40007124, rw_t<uint32_t>> r_TXBUF8__73;
            typedef reg_t<uint32_t, 0x40007128, rw_t<uint32_t>> r_TXBUF8__74;
            typedef reg_t<uint32_t, 0x4000712c, rw_t<uint32_t>> r_TXBUF8__75;
            typedef reg_t<uint32_t, 0x40007130, rw_t<uint32_t>> r_TXBUF8__76;
            typedef reg_t<uint32_t, 0x40007134, rw_t<uint32_t>> r_TXBUF8__77;
            typedef reg_t<uint32_t, 0x40007138, rw_t<uint32_t>> r_TXBUF8__78;
            typedef reg_t<uint32_t, 0x4000713c, rw_t<uint32_t>> r_TXBUF8__79;
            typedef reg_t<uint32_t, 0x40007140, rw_t<uint32_t>> r_TXBUF8__80;
            typedef reg_t<uint32_t, 0x40007144, rw_t<uint32_t>> r_TXBUF8__81;
            typedef reg_t<uint32_t, 0x40007148, rw_t<uint32_t>> r_TXBUF8__82;
            typedef reg_t<uint32_t, 0x4000714c, rw_t<uint32_t>> r_TXBUF8__83;
            typedef reg_t<uint32_t, 0x40007150, rw_t<uint32_t>> r_TXBUF8__84;
            typedef reg_t<uint32_t, 0x40007154, rw_t<uint32_t>> r_TXBUF8__85;
            typedef reg_t<uint32_t, 0x40007158, rw_t<uint32_t>> r_TXBUF8__86;
            typedef reg_t<uint32_t, 0x4000715c, rw_t<uint32_t>> r_TXBUF8__87;
            typedef reg_t<uint32_t, 0x40007160, rw_t<uint32_t>> r_TXBUF8__88;
            typedef reg_t<uint32_t, 0x40007164, rw_t<uint32_t>> r_TXBUF8__89;
            typedef reg_t<uint32_t, 0x40007168, rw_t<uint32_t>> r_TXBUF8__90;
            typedef reg_t<uint32_t, 0x4000716c, rw_t<uint32_t>> r_TXBUF8__91;
            typedef reg_t<uint32_t, 0x40007170, rw_t<uint32_t>> r_TXBUF8__92;
            typedef reg_t<uint32_t, 0x40007174, rw_t<uint32_t>> r_TXBUF8__93;
            typedef reg_t<uint32_t, 0x40007178, rw_t<uint32_t>> r_TXBUF8__94;
            typedef reg_t<uint32_t, 0x4000717c, rw_t<uint32_t>> r_TXBUF8__95;
            typedef reg_t<uint32_t, 0x40007180, rw_t<uint32_t>> r_TXBUF8__96;
            typedef reg_t<uint32_t, 0x40007184, rw_t<uint32_t>> r_TXBUF8__97;
            typedef reg_t<uint32_t, 0x40007188, rw_t<uint32_t>> r_TXBUF8__98;
            typedef reg_t<uint32_t, 0x4000718c, rw_t<uint32_t>> r_TXBUF8__99;
            typedef reg_t<uint32_t, 0x40007190, rw_t<uint32_t>> r_TXBUF8__100;
            typedef reg_t<uint32_t, 0x40007194, rw_t<uint32_t>> r_TXBUF8__101;
            typedef reg_t<uint32_t, 0x40007198, rw_t<uint32_t>> r_TXBUF8__102;
            typedef reg_t<uint32_t, 0x4000719c, rw_t<uint32_t>> r_TXBUF8__103;
            typedef reg_t<uint32_t, 0x400071a0, rw_t<uint32_t>> r_TXBUF8__104;
            typedef reg_t<uint32_t, 0x400071a4, rw_t<uint32_t>> r_TXBUF8__105;
            typedef reg_t<uint32_t, 0x400071a8, rw_t<uint32_t>> r_TXBUF8__106;
            typedef reg_t<uint32_t, 0x400071ac, rw_t<uint32_t>> r_TXBUF8__107;
            typedef reg_t<uint32_t, 0x400071b0, rw_t<uint32_t>> r_TXBUF8__108;
            typedef reg_t<uint32_t, 0x400071b4, rw_t<uint32_t>> r_TXBUF8__109;
            typedef reg_t<uint32_t, 0x400071b8, rw_t<uint32_t>> r_TXBUF8__110;
            typedef reg_t<uint32_t, 0x400071bc, rw_t<uint32_t>> r_TXBUF8__111;
            typedef reg_t<uint32_t, 0x400071c0, rw_t<uint32_t>> r_TXBUF8__112;
            typedef reg_t<uint32_t, 0x400071c4, rw_t<uint32_t>> r_TXBUF8__113;
            typedef reg_t<uint32_t, 0x400071c8, rw_t<uint32_t>> r_TXBUF8__114;
            typedef reg_t<uint32_t, 0x400071cc, rw_t<uint32_t>> r_TXBUF8__115;
            typedef reg_t<uint32_t, 0x400071d0, rw_t<uint32_t>> r_TXBUF8__116;
            typedef reg_t<uint32_t, 0x400071d4, rw_t<uint32_t>> r_TXBUF8__117;
            typedef reg_t<uint32_t, 0x400071d8, rw_t<uint32_t>> r_TXBUF8__118;
            typedef reg_t<uint32_t, 0x400071dc, rw_t<uint32_t>> r_TXBUF8__119;
            typedef reg_t<uint32_t, 0x400071e0, rw_t<uint32_t>> r_TXBUF8__120;
            typedef reg_t<uint32_t, 0x400071e4, rw_t<uint32_t>> r_TXBUF8__121;
            typedef reg_t<uint32_t, 0x400071e8, rw_t<uint32_t>> r_TXBUF8__122;
            typedef reg_t<uint32_t, 0x400071ec, rw_t<uint32_t>> r_TXBUF8__123;
            typedef reg_t<uint32_t, 0x400071f0, rw_t<uint32_t>> r_TXBUF8__124;
            typedef reg_t<uint32_t, 0x400071f4, rw_t<uint32_t>> r_TXBUF8__125;
            typedef reg_t<uint32_t, 0x400071f8, rw_t<uint32_t>> r_TXBUF8__126;
            typedef reg_t<uint32_t, 0x400071fc, rw_t<uint32_t>> r_TXBUF8__127;
            typedef reg_t<uint32_t, 0x40007200, rw_t<uint32_t>> r_TXBUF8__128;
            typedef reg_t<uint32_t, 0x40007204, rw_t<uint32_t>> r_TXBUF8__129;
            typedef reg_t<uint32_t, 0x40007208, rw_t<uint32_t>> r_TXBUF8__130;
            typedef reg_t<uint32_t, 0x4000720c, rw_t<uint32_t>> r_TXBUF8__131;
            typedef reg_t<uint32_t, 0x40007210, rw_t<uint32_t>> r_TXBUF8__132;
            typedef reg_t<uint32_t, 0x40007214, rw_t<uint32_t>> r_TXBUF8__133;
            typedef reg_t<uint32_t, 0x40007218, rw_t<uint32_t>> r_TXBUF8__134;
            typedef reg_t<uint32_t, 0x4000721c, rw_t<uint32_t>> r_TXBUF8__135;
            typedef reg_t<uint32_t, 0x40007220, rw_t<uint32_t>> r_TXBUF8__136;
            typedef reg_t<uint32_t, 0x40007224, rw_t<uint32_t>> r_TXBUF8__137;
            typedef reg_t<uint32_t, 0x40007228, rw_t<uint32_t>> r_TXBUF8__138;
            typedef reg_t<uint32_t, 0x4000722c, rw_t<uint32_t>> r_TXBUF8__139;
            typedef reg_t<uint32_t, 0x40007230, rw_t<uint32_t>> r_TXBUF8__140;
            typedef reg_t<uint32_t, 0x40007234, rw_t<uint32_t>> r_TXBUF8__141;
            typedef reg_t<uint32_t, 0x40007238, rw_t<uint32_t>> r_TXBUF8__142;
            typedef reg_t<uint32_t, 0x4000723c, rw_t<uint32_t>> r_TXBUF8__143;
            typedef reg_t<uint32_t, 0x40007240, rw_t<uint32_t>> r_TXBUF8__144;
            typedef reg_t<uint32_t, 0x40007244, rw_t<uint32_t>> r_TXBUF8__145;
            typedef reg_t<uint32_t, 0x40007248, rw_t<uint32_t>> r_TXBUF8__146;
            typedef reg_t<uint32_t, 0x4000724c, rw_t<uint32_t>> r_TXBUF8__147;
            typedef reg_t<uint32_t, 0x40007250, rw_t<uint32_t>> r_TXBUF8__148;
            typedef reg_t<uint32_t, 0x40007254, rw_t<uint32_t>> r_TXBUF8__149;
            typedef reg_t<uint32_t, 0x40007258, rw_t<uint32_t>> r_TXBUF8__150;
            typedef reg_t<uint32_t, 0x4000725c, rw_t<uint32_t>> r_TXBUF8__151;
            typedef reg_t<uint32_t, 0x40007260, rw_t<uint32_t>> r_TXBUF8__152;
            typedef reg_t<uint32_t, 0x40007264, rw_t<uint32_t>> r_TXBUF8__153;
            typedef reg_t<uint32_t, 0x40007268, rw_t<uint32_t>> r_TXBUF8__154;
            typedef reg_t<uint32_t, 0x4000726c, rw_t<uint32_t>> r_TXBUF8__155;
            typedef reg_t<uint32_t, 0x40007270, rw_t<uint32_t>> r_TXBUF8__156;
            typedef reg_t<uint32_t, 0x40007274, rw_t<uint32_t>> r_TXBUF8__157;
            typedef reg_t<uint32_t, 0x40007278, rw_t<uint32_t>> r_TXBUF8__158;
            typedef reg_t<uint32_t, 0x4000727c, rw_t<uint32_t>> r_TXBUF8__159;
            typedef reg_t<uint32_t, 0x40007280, rw_t<uint32_t>> r_TXBUF8__160;
            typedef reg_t<uint32_t, 0x40007284, rw_t<uint32_t>> r_TXBUF8__161;
            typedef reg_t<uint32_t, 0x40007288, rw_t<uint32_t>> r_TXBUF8__162;
            typedef reg_t<uint32_t, 0x4000728c, rw_t<uint32_t>> r_TXBUF8__163;
            typedef reg_t<uint32_t, 0x40007290, rw_t<uint32_t>> r_TXBUF8__164;
            typedef reg_t<uint32_t, 0x40007294, rw_t<uint32_t>> r_TXBUF8__165;
            typedef reg_t<uint32_t, 0x40007298, rw_t<uint32_t>> r_TXBUF8__166;
            typedef reg_t<uint32_t, 0x4000729c, rw_t<uint32_t>> r_TXBUF8__167;
            typedef reg_t<uint32_t, 0x400072a0, rw_t<uint32_t>> r_TXBUF8__168;
            typedef reg_t<uint32_t, 0x400072a4, rw_t<uint32_t>> r_TXBUF8__169;
            typedef reg_t<uint32_t, 0x400072a8, rw_t<uint32_t>> r_TXBUF8__170;
            typedef reg_t<uint32_t, 0x400072ac, rw_t<uint32_t>> r_TXBUF8__171;
            typedef reg_t<uint32_t, 0x400072b0, rw_t<uint32_t>> r_TXBUF8__172;
            typedef reg_t<uint32_t, 0x400072b4, rw_t<uint32_t>> r_TXBUF8__173;
            typedef reg_t<uint32_t, 0x400072b8, rw_t<uint32_t>> r_TXBUF8__174;
            typedef reg_t<uint32_t, 0x400072bc, rw_t<uint32_t>> r_TXBUF8__175;
            typedef reg_t<uint32_t, 0x400072c0, rw_t<uint32_t>> r_TXBUF8__176;
            typedef reg_t<uint32_t, 0x400072c4, rw_t<uint32_t>> r_TXBUF8__177;
            typedef reg_t<uint32_t, 0x400072c8, rw_t<uint32_t>> r_TXBUF8__178;
            typedef reg_t<uint32_t, 0x400072cc, rw_t<uint32_t>> r_TXBUF8__179;
            typedef reg_t<uint32_t, 0x400072d0, rw_t<uint32_t>> r_TXBUF8__180;
            typedef reg_t<uint32_t, 0x400072d4, rw_t<uint32_t>> r_TXBUF8__181;
            typedef reg_t<uint32_t, 0x400072d8, rw_t<uint32_t>> r_TXBUF8__182;
            typedef reg_t<uint32_t, 0x400072dc, rw_t<uint32_t>> r_TXBUF8__183;
            typedef reg_t<uint32_t, 0x400072e0, rw_t<uint32_t>> r_TXBUF8__184;
            typedef reg_t<uint32_t, 0x400072e4, rw_t<uint32_t>> r_TXBUF8__185;
            typedef reg_t<uint32_t, 0x400072e8, rw_t<uint32_t>> r_TXBUF8__186;
            typedef reg_t<uint32_t, 0x400072ec, rw_t<uint32_t>> r_TXBUF8__187;
            typedef reg_t<uint32_t, 0x400072f0, rw_t<uint32_t>> r_TXBUF8__188;
            typedef reg_t<uint32_t, 0x400072f4, rw_t<uint32_t>> r_TXBUF8__189;
            typedef reg_t<uint32_t, 0x400072f8, rw_t<uint32_t>> r_TXBUF8__190;
            typedef reg_t<uint32_t, 0x400072fc, rw_t<uint32_t>> r_TXBUF8__191;
            typedef reg_t<uint32_t, 0x40007300, rw_t<uint32_t>> r_TXBUF8__192;
            typedef reg_t<uint32_t, 0x40007304, rw_t<uint32_t>> r_TXBUF8__193;
            typedef reg_t<uint32_t, 0x40007308, rw_t<uint32_t>> r_TXBUF8__194;
            typedef reg_t<uint32_t, 0x4000730c, rw_t<uint32_t>> r_TXBUF8__195;
            typedef reg_t<uint32_t, 0x40007310, rw_t<uint32_t>> r_TXBUF8__196;
            typedef reg_t<uint32_t, 0x40007314, rw_t<uint32_t>> r_TXBUF8__197;
            typedef reg_t<uint32_t, 0x40007318, rw_t<uint32_t>> r_TXBUF8__198;
            typedef reg_t<uint32_t, 0x4000731c, rw_t<uint32_t>> r_TXBUF8__199;
            typedef reg_t<uint32_t, 0x40007320, rw_t<uint32_t>> r_TXBUF8__200;
            typedef reg_t<uint32_t, 0x40007324, rw_t<uint32_t>> r_TXBUF8__201;
            typedef reg_t<uint32_t, 0x40007328, rw_t<uint32_t>> r_TXBUF8__202;
            typedef reg_t<uint32_t, 0x4000732c, rw_t<uint32_t>> r_TXBUF8__203;
            typedef reg_t<uint32_t, 0x40007330, rw_t<uint32_t>> r_TXBUF8__204;
            typedef reg_t<uint32_t, 0x40007334, rw_t<uint32_t>> r_TXBUF8__205;
            typedef reg_t<uint32_t, 0x40007338, rw_t<uint32_t>> r_TXBUF8__206;
            typedef reg_t<uint32_t, 0x4000733c, rw_t<uint32_t>> r_TXBUF8__207;
            typedef reg_t<uint32_t, 0x40007340, rw_t<uint32_t>> r_TXBUF8__208;
            typedef reg_t<uint32_t, 0x40007344, rw_t<uint32_t>> r_TXBUF8__209;
            typedef reg_t<uint32_t, 0x40007348, rw_t<uint32_t>> r_TXBUF8__210;
            typedef reg_t<uint32_t, 0x4000734c, rw_t<uint32_t>> r_TXBUF8__211;
            typedef reg_t<uint32_t, 0x40007350, rw_t<uint32_t>> r_TXBUF8__212;
            typedef reg_t<uint32_t, 0x40007354, rw_t<uint32_t>> r_TXBUF8__213;
            typedef reg_t<uint32_t, 0x40007358, rw_t<uint32_t>> r_TXBUF8__214;
            typedef reg_t<uint32_t, 0x4000735c, rw_t<uint32_t>> r_TXBUF8__215;
            typedef reg_t<uint32_t, 0x40007360, rw_t<uint32_t>> r_TXBUF8__216;
            typedef reg_t<uint32_t, 0x40007364, rw_t<uint32_t>> r_TXBUF8__217;
            typedef reg_t<uint32_t, 0x40007368, rw_t<uint32_t>> r_TXBUF8__218;
            typedef reg_t<uint32_t, 0x4000736c, rw_t<uint32_t>> r_TXBUF8__219;
            typedef reg_t<uint32_t, 0x40007370, rw_t<uint32_t>> r_TXBUF8__220;
            typedef reg_t<uint32_t, 0x40007374, rw_t<uint32_t>> r_TXBUF8__221;
            typedef reg_t<uint32_t, 0x40007378, rw_t<uint32_t>> r_TXBUF8__222;
            typedef reg_t<uint32_t, 0x4000737c, rw_t<uint32_t>> r_TXBUF8__223;
            typedef reg_t<uint32_t, 0x40007380, rw_t<uint32_t>> r_TXBUF8__224;
            typedef reg_t<uint32_t, 0x40007384, rw_t<uint32_t>> r_TXBUF8__225;
            typedef reg_t<uint32_t, 0x40007388, rw_t<uint32_t>> r_TXBUF8__226;
            typedef reg_t<uint32_t, 0x4000738c, rw_t<uint32_t>> r_TXBUF8__227;
            typedef reg_t<uint32_t, 0x40007390, rw_t<uint32_t>> r_TXBUF8__228;
            typedef reg_t<uint32_t, 0x40007394, rw_t<uint32_t>> r_TXBUF8__229;
            typedef reg_t<uint32_t, 0x40007398, rw_t<uint32_t>> r_TXBUF8__230;
            typedef reg_t<uint32_t, 0x4000739c, rw_t<uint32_t>> r_TXBUF8__231;
            typedef reg_t<uint32_t, 0x400073a0, rw_t<uint32_t>> r_TXBUF8__232;
            typedef reg_t<uint32_t, 0x400073a4, rw_t<uint32_t>> r_TXBUF8__233;
            typedef reg_t<uint32_t, 0x400073a8, rw_t<uint32_t>> r_TXBUF8__234;
            typedef reg_t<uint32_t, 0x400073ac, rw_t<uint32_t>> r_TXBUF8__235;
            typedef reg_t<uint32_t, 0x400073b0, rw_t<uint32_t>> r_TXBUF8__236;
            typedef reg_t<uint32_t, 0x400073b4, rw_t<uint32_t>> r_TXBUF8__237;
            typedef reg_t<uint32_t, 0x400073b8, rw_t<uint32_t>> r_TXBUF8__238;
            typedef reg_t<uint32_t, 0x400073bc, rw_t<uint32_t>> r_TXBUF8__239;
            typedef reg_t<uint32_t, 0x400073c0, rw_t<uint32_t>> r_TXBUF8__240;
            typedef reg_t<uint32_t, 0x400073c4, rw_t<uint32_t>> r_TXBUF8__241;
            typedef reg_t<uint32_t, 0x400073c8, rw_t<uint32_t>> r_TXBUF8__242;
            typedef reg_t<uint32_t, 0x400073cc, rw_t<uint32_t>> r_TXBUF8__243;
            typedef reg_t<uint32_t, 0x400073d0, rw_t<uint32_t>> r_TXBUF8__244;
            typedef reg_t<uint32_t, 0x400073d4, rw_t<uint32_t>> r_TXBUF8__245;
            typedef reg_t<uint32_t, 0x400073d8, rw_t<uint32_t>> r_TXBUF8__246;
            typedef reg_t<uint32_t, 0x400073dc, rw_t<uint32_t>> r_TXBUF8__247;
            typedef reg_t<uint32_t, 0x400073e0, rw_t<uint32_t>> r_TXBUF8__248;
            typedef reg_t<uint32_t, 0x400073e4, rw_t<uint32_t>> r_TXBUF8__249;
            typedef reg_t<uint32_t, 0x400073e8, rw_t<uint32_t>> r_TXBUF8__250;
            typedef reg_t<uint32_t, 0x400073ec, rw_t<uint32_t>> r_TXBUF8__251;
            typedef reg_t<uint32_t, 0x400073f0, rw_t<uint32_t>> r_TXBUF8__252;
            typedef reg_t<uint32_t, 0x400073f4, rw_t<uint32_t>> r_TXBUF8__253;
            typedef reg_t<uint32_t, 0x400073f8, rw_t<uint32_t>> r_TXBUF8__254;
            typedef reg_t<uint32_t, 0x400073fc, rw_t<uint32_t>> r_TXBUF8__255;
        } // end of TXBUF8_[%s]
        namespace TXBUF9_ {
            // TXBUF9_ register
            typedef reg_t<uint32_t, 0x40007400, rw_t<uint32_t>> r_TXBUF9__0;
            typedef reg_t<uint32_t, 0x40007404, rw_t<uint32_t>> r_TXBUF9__1;
            typedef reg_t<uint32_t, 0x40007408, rw_t<uint32_t>> r_TXBUF9__2;
            typedef reg_t<uint32_t, 0x4000740c, rw_t<uint32_t>> r_TXBUF9__3;
            typedef reg_t<uint32_t, 0x40007410, rw_t<uint32_t>> r_TXBUF9__4;
            typedef reg_t<uint32_t, 0x40007414, rw_t<uint32_t>> r_TXBUF9__5;
            typedef reg_t<uint32_t, 0x40007418, rw_t<uint32_t>> r_TXBUF9__6;
            typedef reg_t<uint32_t, 0x4000741c, rw_t<uint32_t>> r_TXBUF9__7;
            typedef reg_t<uint32_t, 0x40007420, rw_t<uint32_t>> r_TXBUF9__8;
            typedef reg_t<uint32_t, 0x40007424, rw_t<uint32_t>> r_TXBUF9__9;
            typedef reg_t<uint32_t, 0x40007428, rw_t<uint32_t>> r_TXBUF9__10;
            typedef reg_t<uint32_t, 0x4000742c, rw_t<uint32_t>> r_TXBUF9__11;
            typedef reg_t<uint32_t, 0x40007430, rw_t<uint32_t>> r_TXBUF9__12;
            typedef reg_t<uint32_t, 0x40007434, rw_t<uint32_t>> r_TXBUF9__13;
            typedef reg_t<uint32_t, 0x40007438, rw_t<uint32_t>> r_TXBUF9__14;
            typedef reg_t<uint32_t, 0x4000743c, rw_t<uint32_t>> r_TXBUF9__15;
            typedef reg_t<uint32_t, 0x40007440, rw_t<uint32_t>> r_TXBUF9__16;
            typedef reg_t<uint32_t, 0x40007444, rw_t<uint32_t>> r_TXBUF9__17;
            typedef reg_t<uint32_t, 0x40007448, rw_t<uint32_t>> r_TXBUF9__18;
            typedef reg_t<uint32_t, 0x4000744c, rw_t<uint32_t>> r_TXBUF9__19;
            typedef reg_t<uint32_t, 0x40007450, rw_t<uint32_t>> r_TXBUF9__20;
            typedef reg_t<uint32_t, 0x40007454, rw_t<uint32_t>> r_TXBUF9__21;
            typedef reg_t<uint32_t, 0x40007458, rw_t<uint32_t>> r_TXBUF9__22;
            typedef reg_t<uint32_t, 0x4000745c, rw_t<uint32_t>> r_TXBUF9__23;
            typedef reg_t<uint32_t, 0x40007460, rw_t<uint32_t>> r_TXBUF9__24;
            typedef reg_t<uint32_t, 0x40007464, rw_t<uint32_t>> r_TXBUF9__25;
            typedef reg_t<uint32_t, 0x40007468, rw_t<uint32_t>> r_TXBUF9__26;
            typedef reg_t<uint32_t, 0x4000746c, rw_t<uint32_t>> r_TXBUF9__27;
            typedef reg_t<uint32_t, 0x40007470, rw_t<uint32_t>> r_TXBUF9__28;
            typedef reg_t<uint32_t, 0x40007474, rw_t<uint32_t>> r_TXBUF9__29;
            typedef reg_t<uint32_t, 0x40007478, rw_t<uint32_t>> r_TXBUF9__30;
            typedef reg_t<uint32_t, 0x4000747c, rw_t<uint32_t>> r_TXBUF9__31;
            typedef reg_t<uint32_t, 0x40007480, rw_t<uint32_t>> r_TXBUF9__32;
            typedef reg_t<uint32_t, 0x40007484, rw_t<uint32_t>> r_TXBUF9__33;
            typedef reg_t<uint32_t, 0x40007488, rw_t<uint32_t>> r_TXBUF9__34;
            typedef reg_t<uint32_t, 0x4000748c, rw_t<uint32_t>> r_TXBUF9__35;
            typedef reg_t<uint32_t, 0x40007490, rw_t<uint32_t>> r_TXBUF9__36;
            typedef reg_t<uint32_t, 0x40007494, rw_t<uint32_t>> r_TXBUF9__37;
            typedef reg_t<uint32_t, 0x40007498, rw_t<uint32_t>> r_TXBUF9__38;
            typedef reg_t<uint32_t, 0x4000749c, rw_t<uint32_t>> r_TXBUF9__39;
            typedef reg_t<uint32_t, 0x400074a0, rw_t<uint32_t>> r_TXBUF9__40;
            typedef reg_t<uint32_t, 0x400074a4, rw_t<uint32_t>> r_TXBUF9__41;
            typedef reg_t<uint32_t, 0x400074a8, rw_t<uint32_t>> r_TXBUF9__42;
            typedef reg_t<uint32_t, 0x400074ac, rw_t<uint32_t>> r_TXBUF9__43;
            typedef reg_t<uint32_t, 0x400074b0, rw_t<uint32_t>> r_TXBUF9__44;
            typedef reg_t<uint32_t, 0x400074b4, rw_t<uint32_t>> r_TXBUF9__45;
            typedef reg_t<uint32_t, 0x400074b8, rw_t<uint32_t>> r_TXBUF9__46;
            typedef reg_t<uint32_t, 0x400074bc, rw_t<uint32_t>> r_TXBUF9__47;
            typedef reg_t<uint32_t, 0x400074c0, rw_t<uint32_t>> r_TXBUF9__48;
            typedef reg_t<uint32_t, 0x400074c4, rw_t<uint32_t>> r_TXBUF9__49;
            typedef reg_t<uint32_t, 0x400074c8, rw_t<uint32_t>> r_TXBUF9__50;
            typedef reg_t<uint32_t, 0x400074cc, rw_t<uint32_t>> r_TXBUF9__51;
            typedef reg_t<uint32_t, 0x400074d0, rw_t<uint32_t>> r_TXBUF9__52;
            typedef reg_t<uint32_t, 0x400074d4, rw_t<uint32_t>> r_TXBUF9__53;
            typedef reg_t<uint32_t, 0x400074d8, rw_t<uint32_t>> r_TXBUF9__54;
            typedef reg_t<uint32_t, 0x400074dc, rw_t<uint32_t>> r_TXBUF9__55;
            typedef reg_t<uint32_t, 0x400074e0, rw_t<uint32_t>> r_TXBUF9__56;
            typedef reg_t<uint32_t, 0x400074e4, rw_t<uint32_t>> r_TXBUF9__57;
            typedef reg_t<uint32_t, 0x400074e8, rw_t<uint32_t>> r_TXBUF9__58;
            typedef reg_t<uint32_t, 0x400074ec, rw_t<uint32_t>> r_TXBUF9__59;
            typedef reg_t<uint32_t, 0x400074f0, rw_t<uint32_t>> r_TXBUF9__60;
            typedef reg_t<uint32_t, 0x400074f4, rw_t<uint32_t>> r_TXBUF9__61;
            typedef reg_t<uint32_t, 0x400074f8, rw_t<uint32_t>> r_TXBUF9__62;
            typedef reg_t<uint32_t, 0x400074fc, rw_t<uint32_t>> r_TXBUF9__63;
            typedef reg_t<uint32_t, 0x40007500, rw_t<uint32_t>> r_TXBUF9__64;
            typedef reg_t<uint32_t, 0x40007504, rw_t<uint32_t>> r_TXBUF9__65;
            typedef reg_t<uint32_t, 0x40007508, rw_t<uint32_t>> r_TXBUF9__66;
            typedef reg_t<uint32_t, 0x4000750c, rw_t<uint32_t>> r_TXBUF9__67;
            typedef reg_t<uint32_t, 0x40007510, rw_t<uint32_t>> r_TXBUF9__68;
            typedef reg_t<uint32_t, 0x40007514, rw_t<uint32_t>> r_TXBUF9__69;
            typedef reg_t<uint32_t, 0x40007518, rw_t<uint32_t>> r_TXBUF9__70;
            typedef reg_t<uint32_t, 0x4000751c, rw_t<uint32_t>> r_TXBUF9__71;
            typedef reg_t<uint32_t, 0x40007520, rw_t<uint32_t>> r_TXBUF9__72;
            typedef reg_t<uint32_t, 0x40007524, rw_t<uint32_t>> r_TXBUF9__73;
            typedef reg_t<uint32_t, 0x40007528, rw_t<uint32_t>> r_TXBUF9__74;
            typedef reg_t<uint32_t, 0x4000752c, rw_t<uint32_t>> r_TXBUF9__75;
            typedef reg_t<uint32_t, 0x40007530, rw_t<uint32_t>> r_TXBUF9__76;
            typedef reg_t<uint32_t, 0x40007534, rw_t<uint32_t>> r_TXBUF9__77;
            typedef reg_t<uint32_t, 0x40007538, rw_t<uint32_t>> r_TXBUF9__78;
            typedef reg_t<uint32_t, 0x4000753c, rw_t<uint32_t>> r_TXBUF9__79;
            typedef reg_t<uint32_t, 0x40007540, rw_t<uint32_t>> r_TXBUF9__80;
            typedef reg_t<uint32_t, 0x40007544, rw_t<uint32_t>> r_TXBUF9__81;
            typedef reg_t<uint32_t, 0x40007548, rw_t<uint32_t>> r_TXBUF9__82;
            typedef reg_t<uint32_t, 0x4000754c, rw_t<uint32_t>> r_TXBUF9__83;
            typedef reg_t<uint32_t, 0x40007550, rw_t<uint32_t>> r_TXBUF9__84;
            typedef reg_t<uint32_t, 0x40007554, rw_t<uint32_t>> r_TXBUF9__85;
            typedef reg_t<uint32_t, 0x40007558, rw_t<uint32_t>> r_TXBUF9__86;
            typedef reg_t<uint32_t, 0x4000755c, rw_t<uint32_t>> r_TXBUF9__87;
            typedef reg_t<uint32_t, 0x40007560, rw_t<uint32_t>> r_TXBUF9__88;
            typedef reg_t<uint32_t, 0x40007564, rw_t<uint32_t>> r_TXBUF9__89;
            typedef reg_t<uint32_t, 0x40007568, rw_t<uint32_t>> r_TXBUF9__90;
            typedef reg_t<uint32_t, 0x4000756c, rw_t<uint32_t>> r_TXBUF9__91;
            typedef reg_t<uint32_t, 0x40007570, rw_t<uint32_t>> r_TXBUF9__92;
            typedef reg_t<uint32_t, 0x40007574, rw_t<uint32_t>> r_TXBUF9__93;
            typedef reg_t<uint32_t, 0x40007578, rw_t<uint32_t>> r_TXBUF9__94;
            typedef reg_t<uint32_t, 0x4000757c, rw_t<uint32_t>> r_TXBUF9__95;
            typedef reg_t<uint32_t, 0x40007580, rw_t<uint32_t>> r_TXBUF9__96;
            typedef reg_t<uint32_t, 0x40007584, rw_t<uint32_t>> r_TXBUF9__97;
            typedef reg_t<uint32_t, 0x40007588, rw_t<uint32_t>> r_TXBUF9__98;
            typedef reg_t<uint32_t, 0x4000758c, rw_t<uint32_t>> r_TXBUF9__99;
            typedef reg_t<uint32_t, 0x40007590, rw_t<uint32_t>> r_TXBUF9__100;
            typedef reg_t<uint32_t, 0x40007594, rw_t<uint32_t>> r_TXBUF9__101;
            typedef reg_t<uint32_t, 0x40007598, rw_t<uint32_t>> r_TXBUF9__102;
            typedef reg_t<uint32_t, 0x4000759c, rw_t<uint32_t>> r_TXBUF9__103;
            typedef reg_t<uint32_t, 0x400075a0, rw_t<uint32_t>> r_TXBUF9__104;
            typedef reg_t<uint32_t, 0x400075a4, rw_t<uint32_t>> r_TXBUF9__105;
            typedef reg_t<uint32_t, 0x400075a8, rw_t<uint32_t>> r_TXBUF9__106;
            typedef reg_t<uint32_t, 0x400075ac, rw_t<uint32_t>> r_TXBUF9__107;
            typedef reg_t<uint32_t, 0x400075b0, rw_t<uint32_t>> r_TXBUF9__108;
            typedef reg_t<uint32_t, 0x400075b4, rw_t<uint32_t>> r_TXBUF9__109;
            typedef reg_t<uint32_t, 0x400075b8, rw_t<uint32_t>> r_TXBUF9__110;
            typedef reg_t<uint32_t, 0x400075bc, rw_t<uint32_t>> r_TXBUF9__111;
            typedef reg_t<uint32_t, 0x400075c0, rw_t<uint32_t>> r_TXBUF9__112;
            typedef reg_t<uint32_t, 0x400075c4, rw_t<uint32_t>> r_TXBUF9__113;
            typedef reg_t<uint32_t, 0x400075c8, rw_t<uint32_t>> r_TXBUF9__114;
            typedef reg_t<uint32_t, 0x400075cc, rw_t<uint32_t>> r_TXBUF9__115;
            typedef reg_t<uint32_t, 0x400075d0, rw_t<uint32_t>> r_TXBUF9__116;
            typedef reg_t<uint32_t, 0x400075d4, rw_t<uint32_t>> r_TXBUF9__117;
            typedef reg_t<uint32_t, 0x400075d8, rw_t<uint32_t>> r_TXBUF9__118;
            typedef reg_t<uint32_t, 0x400075dc, rw_t<uint32_t>> r_TXBUF9__119;
            typedef reg_t<uint32_t, 0x400075e0, rw_t<uint32_t>> r_TXBUF9__120;
            typedef reg_t<uint32_t, 0x400075e4, rw_t<uint32_t>> r_TXBUF9__121;
            typedef reg_t<uint32_t, 0x400075e8, rw_t<uint32_t>> r_TXBUF9__122;
            typedef reg_t<uint32_t, 0x400075ec, rw_t<uint32_t>> r_TXBUF9__123;
            typedef reg_t<uint32_t, 0x400075f0, rw_t<uint32_t>> r_TXBUF9__124;
            typedef reg_t<uint32_t, 0x400075f4, rw_t<uint32_t>> r_TXBUF9__125;
            typedef reg_t<uint32_t, 0x400075f8, rw_t<uint32_t>> r_TXBUF9__126;
            typedef reg_t<uint32_t, 0x400075fc, rw_t<uint32_t>> r_TXBUF9__127;
            typedef reg_t<uint32_t, 0x40007600, rw_t<uint32_t>> r_TXBUF9__128;
            typedef reg_t<uint32_t, 0x40007604, rw_t<uint32_t>> r_TXBUF9__129;
            typedef reg_t<uint32_t, 0x40007608, rw_t<uint32_t>> r_TXBUF9__130;
            typedef reg_t<uint32_t, 0x4000760c, rw_t<uint32_t>> r_TXBUF9__131;
            typedef reg_t<uint32_t, 0x40007610, rw_t<uint32_t>> r_TXBUF9__132;
            typedef reg_t<uint32_t, 0x40007614, rw_t<uint32_t>> r_TXBUF9__133;
            typedef reg_t<uint32_t, 0x40007618, rw_t<uint32_t>> r_TXBUF9__134;
            typedef reg_t<uint32_t, 0x4000761c, rw_t<uint32_t>> r_TXBUF9__135;
            typedef reg_t<uint32_t, 0x40007620, rw_t<uint32_t>> r_TXBUF9__136;
            typedef reg_t<uint32_t, 0x40007624, rw_t<uint32_t>> r_TXBUF9__137;
            typedef reg_t<uint32_t, 0x40007628, rw_t<uint32_t>> r_TXBUF9__138;
            typedef reg_t<uint32_t, 0x4000762c, rw_t<uint32_t>> r_TXBUF9__139;
            typedef reg_t<uint32_t, 0x40007630, rw_t<uint32_t>> r_TXBUF9__140;
            typedef reg_t<uint32_t, 0x40007634, rw_t<uint32_t>> r_TXBUF9__141;
            typedef reg_t<uint32_t, 0x40007638, rw_t<uint32_t>> r_TXBUF9__142;
            typedef reg_t<uint32_t, 0x4000763c, rw_t<uint32_t>> r_TXBUF9__143;
            typedef reg_t<uint32_t, 0x40007640, rw_t<uint32_t>> r_TXBUF9__144;
            typedef reg_t<uint32_t, 0x40007644, rw_t<uint32_t>> r_TXBUF9__145;
            typedef reg_t<uint32_t, 0x40007648, rw_t<uint32_t>> r_TXBUF9__146;
            typedef reg_t<uint32_t, 0x4000764c, rw_t<uint32_t>> r_TXBUF9__147;
            typedef reg_t<uint32_t, 0x40007650, rw_t<uint32_t>> r_TXBUF9__148;
            typedef reg_t<uint32_t, 0x40007654, rw_t<uint32_t>> r_TXBUF9__149;
            typedef reg_t<uint32_t, 0x40007658, rw_t<uint32_t>> r_TXBUF9__150;
            typedef reg_t<uint32_t, 0x4000765c, rw_t<uint32_t>> r_TXBUF9__151;
            typedef reg_t<uint32_t, 0x40007660, rw_t<uint32_t>> r_TXBUF9__152;
            typedef reg_t<uint32_t, 0x40007664, rw_t<uint32_t>> r_TXBUF9__153;
            typedef reg_t<uint32_t, 0x40007668, rw_t<uint32_t>> r_TXBUF9__154;
            typedef reg_t<uint32_t, 0x4000766c, rw_t<uint32_t>> r_TXBUF9__155;
            typedef reg_t<uint32_t, 0x40007670, rw_t<uint32_t>> r_TXBUF9__156;
            typedef reg_t<uint32_t, 0x40007674, rw_t<uint32_t>> r_TXBUF9__157;
            typedef reg_t<uint32_t, 0x40007678, rw_t<uint32_t>> r_TXBUF9__158;
            typedef reg_t<uint32_t, 0x4000767c, rw_t<uint32_t>> r_TXBUF9__159;
            typedef reg_t<uint32_t, 0x40007680, rw_t<uint32_t>> r_TXBUF9__160;
            typedef reg_t<uint32_t, 0x40007684, rw_t<uint32_t>> r_TXBUF9__161;
            typedef reg_t<uint32_t, 0x40007688, rw_t<uint32_t>> r_TXBUF9__162;
            typedef reg_t<uint32_t, 0x4000768c, rw_t<uint32_t>> r_TXBUF9__163;
            typedef reg_t<uint32_t, 0x40007690, rw_t<uint32_t>> r_TXBUF9__164;
            typedef reg_t<uint32_t, 0x40007694, rw_t<uint32_t>> r_TXBUF9__165;
            typedef reg_t<uint32_t, 0x40007698, rw_t<uint32_t>> r_TXBUF9__166;
            typedef reg_t<uint32_t, 0x4000769c, rw_t<uint32_t>> r_TXBUF9__167;
            typedef reg_t<uint32_t, 0x400076a0, rw_t<uint32_t>> r_TXBUF9__168;
            typedef reg_t<uint32_t, 0x400076a4, rw_t<uint32_t>> r_TXBUF9__169;
            typedef reg_t<uint32_t, 0x400076a8, rw_t<uint32_t>> r_TXBUF9__170;
            typedef reg_t<uint32_t, 0x400076ac, rw_t<uint32_t>> r_TXBUF9__171;
            typedef reg_t<uint32_t, 0x400076b0, rw_t<uint32_t>> r_TXBUF9__172;
            typedef reg_t<uint32_t, 0x400076b4, rw_t<uint32_t>> r_TXBUF9__173;
            typedef reg_t<uint32_t, 0x400076b8, rw_t<uint32_t>> r_TXBUF9__174;
            typedef reg_t<uint32_t, 0x400076bc, rw_t<uint32_t>> r_TXBUF9__175;
            typedef reg_t<uint32_t, 0x400076c0, rw_t<uint32_t>> r_TXBUF9__176;
            typedef reg_t<uint32_t, 0x400076c4, rw_t<uint32_t>> r_TXBUF9__177;
            typedef reg_t<uint32_t, 0x400076c8, rw_t<uint32_t>> r_TXBUF9__178;
            typedef reg_t<uint32_t, 0x400076cc, rw_t<uint32_t>> r_TXBUF9__179;
            typedef reg_t<uint32_t, 0x400076d0, rw_t<uint32_t>> r_TXBUF9__180;
            typedef reg_t<uint32_t, 0x400076d4, rw_t<uint32_t>> r_TXBUF9__181;
            typedef reg_t<uint32_t, 0x400076d8, rw_t<uint32_t>> r_TXBUF9__182;
            typedef reg_t<uint32_t, 0x400076dc, rw_t<uint32_t>> r_TXBUF9__183;
            typedef reg_t<uint32_t, 0x400076e0, rw_t<uint32_t>> r_TXBUF9__184;
            typedef reg_t<uint32_t, 0x400076e4, rw_t<uint32_t>> r_TXBUF9__185;
            typedef reg_t<uint32_t, 0x400076e8, rw_t<uint32_t>> r_TXBUF9__186;
            typedef reg_t<uint32_t, 0x400076ec, rw_t<uint32_t>> r_TXBUF9__187;
            typedef reg_t<uint32_t, 0x400076f0, rw_t<uint32_t>> r_TXBUF9__188;
            typedef reg_t<uint32_t, 0x400076f4, rw_t<uint32_t>> r_TXBUF9__189;
            typedef reg_t<uint32_t, 0x400076f8, rw_t<uint32_t>> r_TXBUF9__190;
            typedef reg_t<uint32_t, 0x400076fc, rw_t<uint32_t>> r_TXBUF9__191;
            typedef reg_t<uint32_t, 0x40007700, rw_t<uint32_t>> r_TXBUF9__192;
            typedef reg_t<uint32_t, 0x40007704, rw_t<uint32_t>> r_TXBUF9__193;
            typedef reg_t<uint32_t, 0x40007708, rw_t<uint32_t>> r_TXBUF9__194;
            typedef reg_t<uint32_t, 0x4000770c, rw_t<uint32_t>> r_TXBUF9__195;
            typedef reg_t<uint32_t, 0x40007710, rw_t<uint32_t>> r_TXBUF9__196;
            typedef reg_t<uint32_t, 0x40007714, rw_t<uint32_t>> r_TXBUF9__197;
            typedef reg_t<uint32_t, 0x40007718, rw_t<uint32_t>> r_TXBUF9__198;
            typedef reg_t<uint32_t, 0x4000771c, rw_t<uint32_t>> r_TXBUF9__199;
            typedef reg_t<uint32_t, 0x40007720, rw_t<uint32_t>> r_TXBUF9__200;
            typedef reg_t<uint32_t, 0x40007724, rw_t<uint32_t>> r_TXBUF9__201;
            typedef reg_t<uint32_t, 0x40007728, rw_t<uint32_t>> r_TXBUF9__202;
            typedef reg_t<uint32_t, 0x4000772c, rw_t<uint32_t>> r_TXBUF9__203;
            typedef reg_t<uint32_t, 0x40007730, rw_t<uint32_t>> r_TXBUF9__204;
            typedef reg_t<uint32_t, 0x40007734, rw_t<uint32_t>> r_TXBUF9__205;
            typedef reg_t<uint32_t, 0x40007738, rw_t<uint32_t>> r_TXBUF9__206;
            typedef reg_t<uint32_t, 0x4000773c, rw_t<uint32_t>> r_TXBUF9__207;
            typedef reg_t<uint32_t, 0x40007740, rw_t<uint32_t>> r_TXBUF9__208;
            typedef reg_t<uint32_t, 0x40007744, rw_t<uint32_t>> r_TXBUF9__209;
            typedef reg_t<uint32_t, 0x40007748, rw_t<uint32_t>> r_TXBUF9__210;
            typedef reg_t<uint32_t, 0x4000774c, rw_t<uint32_t>> r_TXBUF9__211;
            typedef reg_t<uint32_t, 0x40007750, rw_t<uint32_t>> r_TXBUF9__212;
            typedef reg_t<uint32_t, 0x40007754, rw_t<uint32_t>> r_TXBUF9__213;
            typedef reg_t<uint32_t, 0x40007758, rw_t<uint32_t>> r_TXBUF9__214;
            typedef reg_t<uint32_t, 0x4000775c, rw_t<uint32_t>> r_TXBUF9__215;
            typedef reg_t<uint32_t, 0x40007760, rw_t<uint32_t>> r_TXBUF9__216;
            typedef reg_t<uint32_t, 0x40007764, rw_t<uint32_t>> r_TXBUF9__217;
            typedef reg_t<uint32_t, 0x40007768, rw_t<uint32_t>> r_TXBUF9__218;
            typedef reg_t<uint32_t, 0x4000776c, rw_t<uint32_t>> r_TXBUF9__219;
            typedef reg_t<uint32_t, 0x40007770, rw_t<uint32_t>> r_TXBUF9__220;
            typedef reg_t<uint32_t, 0x40007774, rw_t<uint32_t>> r_TXBUF9__221;
            typedef reg_t<uint32_t, 0x40007778, rw_t<uint32_t>> r_TXBUF9__222;
            typedef reg_t<uint32_t, 0x4000777c, rw_t<uint32_t>> r_TXBUF9__223;
            typedef reg_t<uint32_t, 0x40007780, rw_t<uint32_t>> r_TXBUF9__224;
            typedef reg_t<uint32_t, 0x40007784, rw_t<uint32_t>> r_TXBUF9__225;
            typedef reg_t<uint32_t, 0x40007788, rw_t<uint32_t>> r_TXBUF9__226;
            typedef reg_t<uint32_t, 0x4000778c, rw_t<uint32_t>> r_TXBUF9__227;
            typedef reg_t<uint32_t, 0x40007790, rw_t<uint32_t>> r_TXBUF9__228;
            typedef reg_t<uint32_t, 0x40007794, rw_t<uint32_t>> r_TXBUF9__229;
            typedef reg_t<uint32_t, 0x40007798, rw_t<uint32_t>> r_TXBUF9__230;
            typedef reg_t<uint32_t, 0x4000779c, rw_t<uint32_t>> r_TXBUF9__231;
            typedef reg_t<uint32_t, 0x400077a0, rw_t<uint32_t>> r_TXBUF9__232;
            typedef reg_t<uint32_t, 0x400077a4, rw_t<uint32_t>> r_TXBUF9__233;
            typedef reg_t<uint32_t, 0x400077a8, rw_t<uint32_t>> r_TXBUF9__234;
            typedef reg_t<uint32_t, 0x400077ac, rw_t<uint32_t>> r_TXBUF9__235;
            typedef reg_t<uint32_t, 0x400077b0, rw_t<uint32_t>> r_TXBUF9__236;
            typedef reg_t<uint32_t, 0x400077b4, rw_t<uint32_t>> r_TXBUF9__237;
            typedef reg_t<uint32_t, 0x400077b8, rw_t<uint32_t>> r_TXBUF9__238;
            typedef reg_t<uint32_t, 0x400077bc, rw_t<uint32_t>> r_TXBUF9__239;
            typedef reg_t<uint32_t, 0x400077c0, rw_t<uint32_t>> r_TXBUF9__240;
            typedef reg_t<uint32_t, 0x400077c4, rw_t<uint32_t>> r_TXBUF9__241;
            typedef reg_t<uint32_t, 0x400077c8, rw_t<uint32_t>> r_TXBUF9__242;
            typedef reg_t<uint32_t, 0x400077cc, rw_t<uint32_t>> r_TXBUF9__243;
            typedef reg_t<uint32_t, 0x400077d0, rw_t<uint32_t>> r_TXBUF9__244;
            typedef reg_t<uint32_t, 0x400077d4, rw_t<uint32_t>> r_TXBUF9__245;
            typedef reg_t<uint32_t, 0x400077d8, rw_t<uint32_t>> r_TXBUF9__246;
            typedef reg_t<uint32_t, 0x400077dc, rw_t<uint32_t>> r_TXBUF9__247;
            typedef reg_t<uint32_t, 0x400077e0, rw_t<uint32_t>> r_TXBUF9__248;
            typedef reg_t<uint32_t, 0x400077e4, rw_t<uint32_t>> r_TXBUF9__249;
            typedef reg_t<uint32_t, 0x400077e8, rw_t<uint32_t>> r_TXBUF9__250;
            typedef reg_t<uint32_t, 0x400077ec, rw_t<uint32_t>> r_TXBUF9__251;
            typedef reg_t<uint32_t, 0x400077f0, rw_t<uint32_t>> r_TXBUF9__252;
            typedef reg_t<uint32_t, 0x400077f4, rw_t<uint32_t>> r_TXBUF9__253;
            typedef reg_t<uint32_t, 0x400077f8, rw_t<uint32_t>> r_TXBUF9__254;
            typedef reg_t<uint32_t, 0x400077fc, rw_t<uint32_t>> r_TXBUF9__255;
        } // end of TXBUF9_[%s]
        namespace TXBUF10_ {
            // TXBUF10_ register
            typedef reg_t<uint32_t, 0x40007800, rw_t<uint32_t>> r_TXBUF10__0;
            typedef reg_t<uint32_t, 0x40007804, rw_t<uint32_t>> r_TXBUF10__1;
            typedef reg_t<uint32_t, 0x40007808, rw_t<uint32_t>> r_TXBUF10__2;
            typedef reg_t<uint32_t, 0x4000780c, rw_t<uint32_t>> r_TXBUF10__3;
            typedef reg_t<uint32_t, 0x40007810, rw_t<uint32_t>> r_TXBUF10__4;
            typedef reg_t<uint32_t, 0x40007814, rw_t<uint32_t>> r_TXBUF10__5;
            typedef reg_t<uint32_t, 0x40007818, rw_t<uint32_t>> r_TXBUF10__6;
            typedef reg_t<uint32_t, 0x4000781c, rw_t<uint32_t>> r_TXBUF10__7;
            typedef reg_t<uint32_t, 0x40007820, rw_t<uint32_t>> r_TXBUF10__8;
            typedef reg_t<uint32_t, 0x40007824, rw_t<uint32_t>> r_TXBUF10__9;
            typedef reg_t<uint32_t, 0x40007828, rw_t<uint32_t>> r_TXBUF10__10;
            typedef reg_t<uint32_t, 0x4000782c, rw_t<uint32_t>> r_TXBUF10__11;
            typedef reg_t<uint32_t, 0x40007830, rw_t<uint32_t>> r_TXBUF10__12;
            typedef reg_t<uint32_t, 0x40007834, rw_t<uint32_t>> r_TXBUF10__13;
            typedef reg_t<uint32_t, 0x40007838, rw_t<uint32_t>> r_TXBUF10__14;
            typedef reg_t<uint32_t, 0x4000783c, rw_t<uint32_t>> r_TXBUF10__15;
            typedef reg_t<uint32_t, 0x40007840, rw_t<uint32_t>> r_TXBUF10__16;
            typedef reg_t<uint32_t, 0x40007844, rw_t<uint32_t>> r_TXBUF10__17;
            typedef reg_t<uint32_t, 0x40007848, rw_t<uint32_t>> r_TXBUF10__18;
            typedef reg_t<uint32_t, 0x4000784c, rw_t<uint32_t>> r_TXBUF10__19;
            typedef reg_t<uint32_t, 0x40007850, rw_t<uint32_t>> r_TXBUF10__20;
            typedef reg_t<uint32_t, 0x40007854, rw_t<uint32_t>> r_TXBUF10__21;
            typedef reg_t<uint32_t, 0x40007858, rw_t<uint32_t>> r_TXBUF10__22;
            typedef reg_t<uint32_t, 0x4000785c, rw_t<uint32_t>> r_TXBUF10__23;
            typedef reg_t<uint32_t, 0x40007860, rw_t<uint32_t>> r_TXBUF10__24;
            typedef reg_t<uint32_t, 0x40007864, rw_t<uint32_t>> r_TXBUF10__25;
            typedef reg_t<uint32_t, 0x40007868, rw_t<uint32_t>> r_TXBUF10__26;
            typedef reg_t<uint32_t, 0x4000786c, rw_t<uint32_t>> r_TXBUF10__27;
            typedef reg_t<uint32_t, 0x40007870, rw_t<uint32_t>> r_TXBUF10__28;
            typedef reg_t<uint32_t, 0x40007874, rw_t<uint32_t>> r_TXBUF10__29;
            typedef reg_t<uint32_t, 0x40007878, rw_t<uint32_t>> r_TXBUF10__30;
            typedef reg_t<uint32_t, 0x4000787c, rw_t<uint32_t>> r_TXBUF10__31;
            typedef reg_t<uint32_t, 0x40007880, rw_t<uint32_t>> r_TXBUF10__32;
            typedef reg_t<uint32_t, 0x40007884, rw_t<uint32_t>> r_TXBUF10__33;
            typedef reg_t<uint32_t, 0x40007888, rw_t<uint32_t>> r_TXBUF10__34;
            typedef reg_t<uint32_t, 0x4000788c, rw_t<uint32_t>> r_TXBUF10__35;
            typedef reg_t<uint32_t, 0x40007890, rw_t<uint32_t>> r_TXBUF10__36;
            typedef reg_t<uint32_t, 0x40007894, rw_t<uint32_t>> r_TXBUF10__37;
            typedef reg_t<uint32_t, 0x40007898, rw_t<uint32_t>> r_TXBUF10__38;
            typedef reg_t<uint32_t, 0x4000789c, rw_t<uint32_t>> r_TXBUF10__39;
            typedef reg_t<uint32_t, 0x400078a0, rw_t<uint32_t>> r_TXBUF10__40;
            typedef reg_t<uint32_t, 0x400078a4, rw_t<uint32_t>> r_TXBUF10__41;
            typedef reg_t<uint32_t, 0x400078a8, rw_t<uint32_t>> r_TXBUF10__42;
            typedef reg_t<uint32_t, 0x400078ac, rw_t<uint32_t>> r_TXBUF10__43;
            typedef reg_t<uint32_t, 0x400078b0, rw_t<uint32_t>> r_TXBUF10__44;
            typedef reg_t<uint32_t, 0x400078b4, rw_t<uint32_t>> r_TXBUF10__45;
            typedef reg_t<uint32_t, 0x400078b8, rw_t<uint32_t>> r_TXBUF10__46;
            typedef reg_t<uint32_t, 0x400078bc, rw_t<uint32_t>> r_TXBUF10__47;
            typedef reg_t<uint32_t, 0x400078c0, rw_t<uint32_t>> r_TXBUF10__48;
            typedef reg_t<uint32_t, 0x400078c4, rw_t<uint32_t>> r_TXBUF10__49;
            typedef reg_t<uint32_t, 0x400078c8, rw_t<uint32_t>> r_TXBUF10__50;
            typedef reg_t<uint32_t, 0x400078cc, rw_t<uint32_t>> r_TXBUF10__51;
            typedef reg_t<uint32_t, 0x400078d0, rw_t<uint32_t>> r_TXBUF10__52;
            typedef reg_t<uint32_t, 0x400078d4, rw_t<uint32_t>> r_TXBUF10__53;
            typedef reg_t<uint32_t, 0x400078d8, rw_t<uint32_t>> r_TXBUF10__54;
            typedef reg_t<uint32_t, 0x400078dc, rw_t<uint32_t>> r_TXBUF10__55;
            typedef reg_t<uint32_t, 0x400078e0, rw_t<uint32_t>> r_TXBUF10__56;
            typedef reg_t<uint32_t, 0x400078e4, rw_t<uint32_t>> r_TXBUF10__57;
            typedef reg_t<uint32_t, 0x400078e8, rw_t<uint32_t>> r_TXBUF10__58;
            typedef reg_t<uint32_t, 0x400078ec, rw_t<uint32_t>> r_TXBUF10__59;
            typedef reg_t<uint32_t, 0x400078f0, rw_t<uint32_t>> r_TXBUF10__60;
            typedef reg_t<uint32_t, 0x400078f4, rw_t<uint32_t>> r_TXBUF10__61;
            typedef reg_t<uint32_t, 0x400078f8, rw_t<uint32_t>> r_TXBUF10__62;
            typedef reg_t<uint32_t, 0x400078fc, rw_t<uint32_t>> r_TXBUF10__63;
            typedef reg_t<uint32_t, 0x40007900, rw_t<uint32_t>> r_TXBUF10__64;
            typedef reg_t<uint32_t, 0x40007904, rw_t<uint32_t>> r_TXBUF10__65;
            typedef reg_t<uint32_t, 0x40007908, rw_t<uint32_t>> r_TXBUF10__66;
            typedef reg_t<uint32_t, 0x4000790c, rw_t<uint32_t>> r_TXBUF10__67;
            typedef reg_t<uint32_t, 0x40007910, rw_t<uint32_t>> r_TXBUF10__68;
            typedef reg_t<uint32_t, 0x40007914, rw_t<uint32_t>> r_TXBUF10__69;
            typedef reg_t<uint32_t, 0x40007918, rw_t<uint32_t>> r_TXBUF10__70;
            typedef reg_t<uint32_t, 0x4000791c, rw_t<uint32_t>> r_TXBUF10__71;
            typedef reg_t<uint32_t, 0x40007920, rw_t<uint32_t>> r_TXBUF10__72;
            typedef reg_t<uint32_t, 0x40007924, rw_t<uint32_t>> r_TXBUF10__73;
            typedef reg_t<uint32_t, 0x40007928, rw_t<uint32_t>> r_TXBUF10__74;
            typedef reg_t<uint32_t, 0x4000792c, rw_t<uint32_t>> r_TXBUF10__75;
            typedef reg_t<uint32_t, 0x40007930, rw_t<uint32_t>> r_TXBUF10__76;
            typedef reg_t<uint32_t, 0x40007934, rw_t<uint32_t>> r_TXBUF10__77;
            typedef reg_t<uint32_t, 0x40007938, rw_t<uint32_t>> r_TXBUF10__78;
            typedef reg_t<uint32_t, 0x4000793c, rw_t<uint32_t>> r_TXBUF10__79;
            typedef reg_t<uint32_t, 0x40007940, rw_t<uint32_t>> r_TXBUF10__80;
            typedef reg_t<uint32_t, 0x40007944, rw_t<uint32_t>> r_TXBUF10__81;
            typedef reg_t<uint32_t, 0x40007948, rw_t<uint32_t>> r_TXBUF10__82;
            typedef reg_t<uint32_t, 0x4000794c, rw_t<uint32_t>> r_TXBUF10__83;
            typedef reg_t<uint32_t, 0x40007950, rw_t<uint32_t>> r_TXBUF10__84;
            typedef reg_t<uint32_t, 0x40007954, rw_t<uint32_t>> r_TXBUF10__85;
            typedef reg_t<uint32_t, 0x40007958, rw_t<uint32_t>> r_TXBUF10__86;
            typedef reg_t<uint32_t, 0x4000795c, rw_t<uint32_t>> r_TXBUF10__87;
            typedef reg_t<uint32_t, 0x40007960, rw_t<uint32_t>> r_TXBUF10__88;
            typedef reg_t<uint32_t, 0x40007964, rw_t<uint32_t>> r_TXBUF10__89;
            typedef reg_t<uint32_t, 0x40007968, rw_t<uint32_t>> r_TXBUF10__90;
            typedef reg_t<uint32_t, 0x4000796c, rw_t<uint32_t>> r_TXBUF10__91;
            typedef reg_t<uint32_t, 0x40007970, rw_t<uint32_t>> r_TXBUF10__92;
            typedef reg_t<uint32_t, 0x40007974, rw_t<uint32_t>> r_TXBUF10__93;
            typedef reg_t<uint32_t, 0x40007978, rw_t<uint32_t>> r_TXBUF10__94;
            typedef reg_t<uint32_t, 0x4000797c, rw_t<uint32_t>> r_TXBUF10__95;
            typedef reg_t<uint32_t, 0x40007980, rw_t<uint32_t>> r_TXBUF10__96;
            typedef reg_t<uint32_t, 0x40007984, rw_t<uint32_t>> r_TXBUF10__97;
            typedef reg_t<uint32_t, 0x40007988, rw_t<uint32_t>> r_TXBUF10__98;
            typedef reg_t<uint32_t, 0x4000798c, rw_t<uint32_t>> r_TXBUF10__99;
            typedef reg_t<uint32_t, 0x40007990, rw_t<uint32_t>> r_TXBUF10__100;
            typedef reg_t<uint32_t, 0x40007994, rw_t<uint32_t>> r_TXBUF10__101;
            typedef reg_t<uint32_t, 0x40007998, rw_t<uint32_t>> r_TXBUF10__102;
            typedef reg_t<uint32_t, 0x4000799c, rw_t<uint32_t>> r_TXBUF10__103;
            typedef reg_t<uint32_t, 0x400079a0, rw_t<uint32_t>> r_TXBUF10__104;
            typedef reg_t<uint32_t, 0x400079a4, rw_t<uint32_t>> r_TXBUF10__105;
            typedef reg_t<uint32_t, 0x400079a8, rw_t<uint32_t>> r_TXBUF10__106;
            typedef reg_t<uint32_t, 0x400079ac, rw_t<uint32_t>> r_TXBUF10__107;
            typedef reg_t<uint32_t, 0x400079b0, rw_t<uint32_t>> r_TXBUF10__108;
            typedef reg_t<uint32_t, 0x400079b4, rw_t<uint32_t>> r_TXBUF10__109;
            typedef reg_t<uint32_t, 0x400079b8, rw_t<uint32_t>> r_TXBUF10__110;
            typedef reg_t<uint32_t, 0x400079bc, rw_t<uint32_t>> r_TXBUF10__111;
            typedef reg_t<uint32_t, 0x400079c0, rw_t<uint32_t>> r_TXBUF10__112;
            typedef reg_t<uint32_t, 0x400079c4, rw_t<uint32_t>> r_TXBUF10__113;
            typedef reg_t<uint32_t, 0x400079c8, rw_t<uint32_t>> r_TXBUF10__114;
            typedef reg_t<uint32_t, 0x400079cc, rw_t<uint32_t>> r_TXBUF10__115;
            typedef reg_t<uint32_t, 0x400079d0, rw_t<uint32_t>> r_TXBUF10__116;
            typedef reg_t<uint32_t, 0x400079d4, rw_t<uint32_t>> r_TXBUF10__117;
            typedef reg_t<uint32_t, 0x400079d8, rw_t<uint32_t>> r_TXBUF10__118;
            typedef reg_t<uint32_t, 0x400079dc, rw_t<uint32_t>> r_TXBUF10__119;
            typedef reg_t<uint32_t, 0x400079e0, rw_t<uint32_t>> r_TXBUF10__120;
            typedef reg_t<uint32_t, 0x400079e4, rw_t<uint32_t>> r_TXBUF10__121;
            typedef reg_t<uint32_t, 0x400079e8, rw_t<uint32_t>> r_TXBUF10__122;
            typedef reg_t<uint32_t, 0x400079ec, rw_t<uint32_t>> r_TXBUF10__123;
            typedef reg_t<uint32_t, 0x400079f0, rw_t<uint32_t>> r_TXBUF10__124;
            typedef reg_t<uint32_t, 0x400079f4, rw_t<uint32_t>> r_TXBUF10__125;
            typedef reg_t<uint32_t, 0x400079f8, rw_t<uint32_t>> r_TXBUF10__126;
            typedef reg_t<uint32_t, 0x400079fc, rw_t<uint32_t>> r_TXBUF10__127;
            typedef reg_t<uint32_t, 0x40007a00, rw_t<uint32_t>> r_TXBUF10__128;
            typedef reg_t<uint32_t, 0x40007a04, rw_t<uint32_t>> r_TXBUF10__129;
            typedef reg_t<uint32_t, 0x40007a08, rw_t<uint32_t>> r_TXBUF10__130;
            typedef reg_t<uint32_t, 0x40007a0c, rw_t<uint32_t>> r_TXBUF10__131;
            typedef reg_t<uint32_t, 0x40007a10, rw_t<uint32_t>> r_TXBUF10__132;
            typedef reg_t<uint32_t, 0x40007a14, rw_t<uint32_t>> r_TXBUF10__133;
            typedef reg_t<uint32_t, 0x40007a18, rw_t<uint32_t>> r_TXBUF10__134;
            typedef reg_t<uint32_t, 0x40007a1c, rw_t<uint32_t>> r_TXBUF10__135;
            typedef reg_t<uint32_t, 0x40007a20, rw_t<uint32_t>> r_TXBUF10__136;
            typedef reg_t<uint32_t, 0x40007a24, rw_t<uint32_t>> r_TXBUF10__137;
            typedef reg_t<uint32_t, 0x40007a28, rw_t<uint32_t>> r_TXBUF10__138;
            typedef reg_t<uint32_t, 0x40007a2c, rw_t<uint32_t>> r_TXBUF10__139;
            typedef reg_t<uint32_t, 0x40007a30, rw_t<uint32_t>> r_TXBUF10__140;
            typedef reg_t<uint32_t, 0x40007a34, rw_t<uint32_t>> r_TXBUF10__141;
            typedef reg_t<uint32_t, 0x40007a38, rw_t<uint32_t>> r_TXBUF10__142;
            typedef reg_t<uint32_t, 0x40007a3c, rw_t<uint32_t>> r_TXBUF10__143;
            typedef reg_t<uint32_t, 0x40007a40, rw_t<uint32_t>> r_TXBUF10__144;
            typedef reg_t<uint32_t, 0x40007a44, rw_t<uint32_t>> r_TXBUF10__145;
            typedef reg_t<uint32_t, 0x40007a48, rw_t<uint32_t>> r_TXBUF10__146;
            typedef reg_t<uint32_t, 0x40007a4c, rw_t<uint32_t>> r_TXBUF10__147;
            typedef reg_t<uint32_t, 0x40007a50, rw_t<uint32_t>> r_TXBUF10__148;
            typedef reg_t<uint32_t, 0x40007a54, rw_t<uint32_t>> r_TXBUF10__149;
            typedef reg_t<uint32_t, 0x40007a58, rw_t<uint32_t>> r_TXBUF10__150;
            typedef reg_t<uint32_t, 0x40007a5c, rw_t<uint32_t>> r_TXBUF10__151;
            typedef reg_t<uint32_t, 0x40007a60, rw_t<uint32_t>> r_TXBUF10__152;
            typedef reg_t<uint32_t, 0x40007a64, rw_t<uint32_t>> r_TXBUF10__153;
            typedef reg_t<uint32_t, 0x40007a68, rw_t<uint32_t>> r_TXBUF10__154;
            typedef reg_t<uint32_t, 0x40007a6c, rw_t<uint32_t>> r_TXBUF10__155;
            typedef reg_t<uint32_t, 0x40007a70, rw_t<uint32_t>> r_TXBUF10__156;
            typedef reg_t<uint32_t, 0x40007a74, rw_t<uint32_t>> r_TXBUF10__157;
            typedef reg_t<uint32_t, 0x40007a78, rw_t<uint32_t>> r_TXBUF10__158;
            typedef reg_t<uint32_t, 0x40007a7c, rw_t<uint32_t>> r_TXBUF10__159;
            typedef reg_t<uint32_t, 0x40007a80, rw_t<uint32_t>> r_TXBUF10__160;
            typedef reg_t<uint32_t, 0x40007a84, rw_t<uint32_t>> r_TXBUF10__161;
            typedef reg_t<uint32_t, 0x40007a88, rw_t<uint32_t>> r_TXBUF10__162;
            typedef reg_t<uint32_t, 0x40007a8c, rw_t<uint32_t>> r_TXBUF10__163;
            typedef reg_t<uint32_t, 0x40007a90, rw_t<uint32_t>> r_TXBUF10__164;
            typedef reg_t<uint32_t, 0x40007a94, rw_t<uint32_t>> r_TXBUF10__165;
            typedef reg_t<uint32_t, 0x40007a98, rw_t<uint32_t>> r_TXBUF10__166;
            typedef reg_t<uint32_t, 0x40007a9c, rw_t<uint32_t>> r_TXBUF10__167;
            typedef reg_t<uint32_t, 0x40007aa0, rw_t<uint32_t>> r_TXBUF10__168;
            typedef reg_t<uint32_t, 0x40007aa4, rw_t<uint32_t>> r_TXBUF10__169;
            typedef reg_t<uint32_t, 0x40007aa8, rw_t<uint32_t>> r_TXBUF10__170;
            typedef reg_t<uint32_t, 0x40007aac, rw_t<uint32_t>> r_TXBUF10__171;
            typedef reg_t<uint32_t, 0x40007ab0, rw_t<uint32_t>> r_TXBUF10__172;
            typedef reg_t<uint32_t, 0x40007ab4, rw_t<uint32_t>> r_TXBUF10__173;
            typedef reg_t<uint32_t, 0x40007ab8, rw_t<uint32_t>> r_TXBUF10__174;
            typedef reg_t<uint32_t, 0x40007abc, rw_t<uint32_t>> r_TXBUF10__175;
            typedef reg_t<uint32_t, 0x40007ac0, rw_t<uint32_t>> r_TXBUF10__176;
            typedef reg_t<uint32_t, 0x40007ac4, rw_t<uint32_t>> r_TXBUF10__177;
            typedef reg_t<uint32_t, 0x40007ac8, rw_t<uint32_t>> r_TXBUF10__178;
            typedef reg_t<uint32_t, 0x40007acc, rw_t<uint32_t>> r_TXBUF10__179;
            typedef reg_t<uint32_t, 0x40007ad0, rw_t<uint32_t>> r_TXBUF10__180;
            typedef reg_t<uint32_t, 0x40007ad4, rw_t<uint32_t>> r_TXBUF10__181;
            typedef reg_t<uint32_t, 0x40007ad8, rw_t<uint32_t>> r_TXBUF10__182;
            typedef reg_t<uint32_t, 0x40007adc, rw_t<uint32_t>> r_TXBUF10__183;
            typedef reg_t<uint32_t, 0x40007ae0, rw_t<uint32_t>> r_TXBUF10__184;
            typedef reg_t<uint32_t, 0x40007ae4, rw_t<uint32_t>> r_TXBUF10__185;
            typedef reg_t<uint32_t, 0x40007ae8, rw_t<uint32_t>> r_TXBUF10__186;
            typedef reg_t<uint32_t, 0x40007aec, rw_t<uint32_t>> r_TXBUF10__187;
            typedef reg_t<uint32_t, 0x40007af0, rw_t<uint32_t>> r_TXBUF10__188;
            typedef reg_t<uint32_t, 0x40007af4, rw_t<uint32_t>> r_TXBUF10__189;
            typedef reg_t<uint32_t, 0x40007af8, rw_t<uint32_t>> r_TXBUF10__190;
            typedef reg_t<uint32_t, 0x40007afc, rw_t<uint32_t>> r_TXBUF10__191;
            typedef reg_t<uint32_t, 0x40007b00, rw_t<uint32_t>> r_TXBUF10__192;
            typedef reg_t<uint32_t, 0x40007b04, rw_t<uint32_t>> r_TXBUF10__193;
            typedef reg_t<uint32_t, 0x40007b08, rw_t<uint32_t>> r_TXBUF10__194;
            typedef reg_t<uint32_t, 0x40007b0c, rw_t<uint32_t>> r_TXBUF10__195;
            typedef reg_t<uint32_t, 0x40007b10, rw_t<uint32_t>> r_TXBUF10__196;
            typedef reg_t<uint32_t, 0x40007b14, rw_t<uint32_t>> r_TXBUF10__197;
            typedef reg_t<uint32_t, 0x40007b18, rw_t<uint32_t>> r_TXBUF10__198;
            typedef reg_t<uint32_t, 0x40007b1c, rw_t<uint32_t>> r_TXBUF10__199;
            typedef reg_t<uint32_t, 0x40007b20, rw_t<uint32_t>> r_TXBUF10__200;
            typedef reg_t<uint32_t, 0x40007b24, rw_t<uint32_t>> r_TXBUF10__201;
            typedef reg_t<uint32_t, 0x40007b28, rw_t<uint32_t>> r_TXBUF10__202;
            typedef reg_t<uint32_t, 0x40007b2c, rw_t<uint32_t>> r_TXBUF10__203;
            typedef reg_t<uint32_t, 0x40007b30, rw_t<uint32_t>> r_TXBUF10__204;
            typedef reg_t<uint32_t, 0x40007b34, rw_t<uint32_t>> r_TXBUF10__205;
            typedef reg_t<uint32_t, 0x40007b38, rw_t<uint32_t>> r_TXBUF10__206;
            typedef reg_t<uint32_t, 0x40007b3c, rw_t<uint32_t>> r_TXBUF10__207;
            typedef reg_t<uint32_t, 0x40007b40, rw_t<uint32_t>> r_TXBUF10__208;
            typedef reg_t<uint32_t, 0x40007b44, rw_t<uint32_t>> r_TXBUF10__209;
            typedef reg_t<uint32_t, 0x40007b48, rw_t<uint32_t>> r_TXBUF10__210;
            typedef reg_t<uint32_t, 0x40007b4c, rw_t<uint32_t>> r_TXBUF10__211;
            typedef reg_t<uint32_t, 0x40007b50, rw_t<uint32_t>> r_TXBUF10__212;
            typedef reg_t<uint32_t, 0x40007b54, rw_t<uint32_t>> r_TXBUF10__213;
            typedef reg_t<uint32_t, 0x40007b58, rw_t<uint32_t>> r_TXBUF10__214;
            typedef reg_t<uint32_t, 0x40007b5c, rw_t<uint32_t>> r_TXBUF10__215;
            typedef reg_t<uint32_t, 0x40007b60, rw_t<uint32_t>> r_TXBUF10__216;
            typedef reg_t<uint32_t, 0x40007b64, rw_t<uint32_t>> r_TXBUF10__217;
            typedef reg_t<uint32_t, 0x40007b68, rw_t<uint32_t>> r_TXBUF10__218;
            typedef reg_t<uint32_t, 0x40007b6c, rw_t<uint32_t>> r_TXBUF10__219;
            typedef reg_t<uint32_t, 0x40007b70, rw_t<uint32_t>> r_TXBUF10__220;
            typedef reg_t<uint32_t, 0x40007b74, rw_t<uint32_t>> r_TXBUF10__221;
            typedef reg_t<uint32_t, 0x40007b78, rw_t<uint32_t>> r_TXBUF10__222;
            typedef reg_t<uint32_t, 0x40007b7c, rw_t<uint32_t>> r_TXBUF10__223;
            typedef reg_t<uint32_t, 0x40007b80, rw_t<uint32_t>> r_TXBUF10__224;
            typedef reg_t<uint32_t, 0x40007b84, rw_t<uint32_t>> r_TXBUF10__225;
            typedef reg_t<uint32_t, 0x40007b88, rw_t<uint32_t>> r_TXBUF10__226;
            typedef reg_t<uint32_t, 0x40007b8c, rw_t<uint32_t>> r_TXBUF10__227;
            typedef reg_t<uint32_t, 0x40007b90, rw_t<uint32_t>> r_TXBUF10__228;
            typedef reg_t<uint32_t, 0x40007b94, rw_t<uint32_t>> r_TXBUF10__229;
            typedef reg_t<uint32_t, 0x40007b98, rw_t<uint32_t>> r_TXBUF10__230;
            typedef reg_t<uint32_t, 0x40007b9c, rw_t<uint32_t>> r_TXBUF10__231;
            typedef reg_t<uint32_t, 0x40007ba0, rw_t<uint32_t>> r_TXBUF10__232;
            typedef reg_t<uint32_t, 0x40007ba4, rw_t<uint32_t>> r_TXBUF10__233;
            typedef reg_t<uint32_t, 0x40007ba8, rw_t<uint32_t>> r_TXBUF10__234;
            typedef reg_t<uint32_t, 0x40007bac, rw_t<uint32_t>> r_TXBUF10__235;
            typedef reg_t<uint32_t, 0x40007bb0, rw_t<uint32_t>> r_TXBUF10__236;
            typedef reg_t<uint32_t, 0x40007bb4, rw_t<uint32_t>> r_TXBUF10__237;
            typedef reg_t<uint32_t, 0x40007bb8, rw_t<uint32_t>> r_TXBUF10__238;
            typedef reg_t<uint32_t, 0x40007bbc, rw_t<uint32_t>> r_TXBUF10__239;
            typedef reg_t<uint32_t, 0x40007bc0, rw_t<uint32_t>> r_TXBUF10__240;
            typedef reg_t<uint32_t, 0x40007bc4, rw_t<uint32_t>> r_TXBUF10__241;
            typedef reg_t<uint32_t, 0x40007bc8, rw_t<uint32_t>> r_TXBUF10__242;
            typedef reg_t<uint32_t, 0x40007bcc, rw_t<uint32_t>> r_TXBUF10__243;
            typedef reg_t<uint32_t, 0x40007bd0, rw_t<uint32_t>> r_TXBUF10__244;
            typedef reg_t<uint32_t, 0x40007bd4, rw_t<uint32_t>> r_TXBUF10__245;
            typedef reg_t<uint32_t, 0x40007bd8, rw_t<uint32_t>> r_TXBUF10__246;
            typedef reg_t<uint32_t, 0x40007bdc, rw_t<uint32_t>> r_TXBUF10__247;
            typedef reg_t<uint32_t, 0x40007be0, rw_t<uint32_t>> r_TXBUF10__248;
            typedef reg_t<uint32_t, 0x40007be4, rw_t<uint32_t>> r_TXBUF10__249;
            typedef reg_t<uint32_t, 0x40007be8, rw_t<uint32_t>> r_TXBUF10__250;
            typedef reg_t<uint32_t, 0x40007bec, rw_t<uint32_t>> r_TXBUF10__251;
            typedef reg_t<uint32_t, 0x40007bf0, rw_t<uint32_t>> r_TXBUF10__252;
            typedef reg_t<uint32_t, 0x40007bf4, rw_t<uint32_t>> r_TXBUF10__253;
            typedef reg_t<uint32_t, 0x40007bf8, rw_t<uint32_t>> r_TXBUF10__254;
            typedef reg_t<uint32_t, 0x40007bfc, rw_t<uint32_t>> r_TXBUF10__255;
        } // end of TXBUF10_[%s]
        namespace TXBUF11_ {
            // TXBUF11_ register
            typedef reg_t<uint32_t, 0x40007c00, rw_t<uint32_t>> r_TXBUF11__0;
            typedef reg_t<uint32_t, 0x40007c04, rw_t<uint32_t>> r_TXBUF11__1;
            typedef reg_t<uint32_t, 0x40007c08, rw_t<uint32_t>> r_TXBUF11__2;
            typedef reg_t<uint32_t, 0x40007c0c, rw_t<uint32_t>> r_TXBUF11__3;
            typedef reg_t<uint32_t, 0x40007c10, rw_t<uint32_t>> r_TXBUF11__4;
            typedef reg_t<uint32_t, 0x40007c14, rw_t<uint32_t>> r_TXBUF11__5;
            typedef reg_t<uint32_t, 0x40007c18, rw_t<uint32_t>> r_TXBUF11__6;
            typedef reg_t<uint32_t, 0x40007c1c, rw_t<uint32_t>> r_TXBUF11__7;
            typedef reg_t<uint32_t, 0x40007c20, rw_t<uint32_t>> r_TXBUF11__8;
            typedef reg_t<uint32_t, 0x40007c24, rw_t<uint32_t>> r_TXBUF11__9;
            typedef reg_t<uint32_t, 0x40007c28, rw_t<uint32_t>> r_TXBUF11__10;
            typedef reg_t<uint32_t, 0x40007c2c, rw_t<uint32_t>> r_TXBUF11__11;
            typedef reg_t<uint32_t, 0x40007c30, rw_t<uint32_t>> r_TXBUF11__12;
            typedef reg_t<uint32_t, 0x40007c34, rw_t<uint32_t>> r_TXBUF11__13;
            typedef reg_t<uint32_t, 0x40007c38, rw_t<uint32_t>> r_TXBUF11__14;
            typedef reg_t<uint32_t, 0x40007c3c, rw_t<uint32_t>> r_TXBUF11__15;
            typedef reg_t<uint32_t, 0x40007c40, rw_t<uint32_t>> r_TXBUF11__16;
            typedef reg_t<uint32_t, 0x40007c44, rw_t<uint32_t>> r_TXBUF11__17;
            typedef reg_t<uint32_t, 0x40007c48, rw_t<uint32_t>> r_TXBUF11__18;
            typedef reg_t<uint32_t, 0x40007c4c, rw_t<uint32_t>> r_TXBUF11__19;
            typedef reg_t<uint32_t, 0x40007c50, rw_t<uint32_t>> r_TXBUF11__20;
            typedef reg_t<uint32_t, 0x40007c54, rw_t<uint32_t>> r_TXBUF11__21;
            typedef reg_t<uint32_t, 0x40007c58, rw_t<uint32_t>> r_TXBUF11__22;
            typedef reg_t<uint32_t, 0x40007c5c, rw_t<uint32_t>> r_TXBUF11__23;
            typedef reg_t<uint32_t, 0x40007c60, rw_t<uint32_t>> r_TXBUF11__24;
            typedef reg_t<uint32_t, 0x40007c64, rw_t<uint32_t>> r_TXBUF11__25;
            typedef reg_t<uint32_t, 0x40007c68, rw_t<uint32_t>> r_TXBUF11__26;
            typedef reg_t<uint32_t, 0x40007c6c, rw_t<uint32_t>> r_TXBUF11__27;
            typedef reg_t<uint32_t, 0x40007c70, rw_t<uint32_t>> r_TXBUF11__28;
            typedef reg_t<uint32_t, 0x40007c74, rw_t<uint32_t>> r_TXBUF11__29;
            typedef reg_t<uint32_t, 0x40007c78, rw_t<uint32_t>> r_TXBUF11__30;
            typedef reg_t<uint32_t, 0x40007c7c, rw_t<uint32_t>> r_TXBUF11__31;
            typedef reg_t<uint32_t, 0x40007c80, rw_t<uint32_t>> r_TXBUF11__32;
            typedef reg_t<uint32_t, 0x40007c84, rw_t<uint32_t>> r_TXBUF11__33;
            typedef reg_t<uint32_t, 0x40007c88, rw_t<uint32_t>> r_TXBUF11__34;
            typedef reg_t<uint32_t, 0x40007c8c, rw_t<uint32_t>> r_TXBUF11__35;
            typedef reg_t<uint32_t, 0x40007c90, rw_t<uint32_t>> r_TXBUF11__36;
            typedef reg_t<uint32_t, 0x40007c94, rw_t<uint32_t>> r_TXBUF11__37;
            typedef reg_t<uint32_t, 0x40007c98, rw_t<uint32_t>> r_TXBUF11__38;
            typedef reg_t<uint32_t, 0x40007c9c, rw_t<uint32_t>> r_TXBUF11__39;
            typedef reg_t<uint32_t, 0x40007ca0, rw_t<uint32_t>> r_TXBUF11__40;
            typedef reg_t<uint32_t, 0x40007ca4, rw_t<uint32_t>> r_TXBUF11__41;
            typedef reg_t<uint32_t, 0x40007ca8, rw_t<uint32_t>> r_TXBUF11__42;
            typedef reg_t<uint32_t, 0x40007cac, rw_t<uint32_t>> r_TXBUF11__43;
            typedef reg_t<uint32_t, 0x40007cb0, rw_t<uint32_t>> r_TXBUF11__44;
            typedef reg_t<uint32_t, 0x40007cb4, rw_t<uint32_t>> r_TXBUF11__45;
            typedef reg_t<uint32_t, 0x40007cb8, rw_t<uint32_t>> r_TXBUF11__46;
            typedef reg_t<uint32_t, 0x40007cbc, rw_t<uint32_t>> r_TXBUF11__47;
            typedef reg_t<uint32_t, 0x40007cc0, rw_t<uint32_t>> r_TXBUF11__48;
            typedef reg_t<uint32_t, 0x40007cc4, rw_t<uint32_t>> r_TXBUF11__49;
            typedef reg_t<uint32_t, 0x40007cc8, rw_t<uint32_t>> r_TXBUF11__50;
            typedef reg_t<uint32_t, 0x40007ccc, rw_t<uint32_t>> r_TXBUF11__51;
            typedef reg_t<uint32_t, 0x40007cd0, rw_t<uint32_t>> r_TXBUF11__52;
            typedef reg_t<uint32_t, 0x40007cd4, rw_t<uint32_t>> r_TXBUF11__53;
            typedef reg_t<uint32_t, 0x40007cd8, rw_t<uint32_t>> r_TXBUF11__54;
            typedef reg_t<uint32_t, 0x40007cdc, rw_t<uint32_t>> r_TXBUF11__55;
            typedef reg_t<uint32_t, 0x40007ce0, rw_t<uint32_t>> r_TXBUF11__56;
            typedef reg_t<uint32_t, 0x40007ce4, rw_t<uint32_t>> r_TXBUF11__57;
            typedef reg_t<uint32_t, 0x40007ce8, rw_t<uint32_t>> r_TXBUF11__58;
            typedef reg_t<uint32_t, 0x40007cec, rw_t<uint32_t>> r_TXBUF11__59;
            typedef reg_t<uint32_t, 0x40007cf0, rw_t<uint32_t>> r_TXBUF11__60;
            typedef reg_t<uint32_t, 0x40007cf4, rw_t<uint32_t>> r_TXBUF11__61;
            typedef reg_t<uint32_t, 0x40007cf8, rw_t<uint32_t>> r_TXBUF11__62;
            typedef reg_t<uint32_t, 0x40007cfc, rw_t<uint32_t>> r_TXBUF11__63;
            typedef reg_t<uint32_t, 0x40007d00, rw_t<uint32_t>> r_TXBUF11__64;
            typedef reg_t<uint32_t, 0x40007d04, rw_t<uint32_t>> r_TXBUF11__65;
            typedef reg_t<uint32_t, 0x40007d08, rw_t<uint32_t>> r_TXBUF11__66;
            typedef reg_t<uint32_t, 0x40007d0c, rw_t<uint32_t>> r_TXBUF11__67;
            typedef reg_t<uint32_t, 0x40007d10, rw_t<uint32_t>> r_TXBUF11__68;
            typedef reg_t<uint32_t, 0x40007d14, rw_t<uint32_t>> r_TXBUF11__69;
            typedef reg_t<uint32_t, 0x40007d18, rw_t<uint32_t>> r_TXBUF11__70;
            typedef reg_t<uint32_t, 0x40007d1c, rw_t<uint32_t>> r_TXBUF11__71;
            typedef reg_t<uint32_t, 0x40007d20, rw_t<uint32_t>> r_TXBUF11__72;
            typedef reg_t<uint32_t, 0x40007d24, rw_t<uint32_t>> r_TXBUF11__73;
            typedef reg_t<uint32_t, 0x40007d28, rw_t<uint32_t>> r_TXBUF11__74;
            typedef reg_t<uint32_t, 0x40007d2c, rw_t<uint32_t>> r_TXBUF11__75;
            typedef reg_t<uint32_t, 0x40007d30, rw_t<uint32_t>> r_TXBUF11__76;
            typedef reg_t<uint32_t, 0x40007d34, rw_t<uint32_t>> r_TXBUF11__77;
            typedef reg_t<uint32_t, 0x40007d38, rw_t<uint32_t>> r_TXBUF11__78;
            typedef reg_t<uint32_t, 0x40007d3c, rw_t<uint32_t>> r_TXBUF11__79;
            typedef reg_t<uint32_t, 0x40007d40, rw_t<uint32_t>> r_TXBUF11__80;
            typedef reg_t<uint32_t, 0x40007d44, rw_t<uint32_t>> r_TXBUF11__81;
            typedef reg_t<uint32_t, 0x40007d48, rw_t<uint32_t>> r_TXBUF11__82;
            typedef reg_t<uint32_t, 0x40007d4c, rw_t<uint32_t>> r_TXBUF11__83;
            typedef reg_t<uint32_t, 0x40007d50, rw_t<uint32_t>> r_TXBUF11__84;
            typedef reg_t<uint32_t, 0x40007d54, rw_t<uint32_t>> r_TXBUF11__85;
            typedef reg_t<uint32_t, 0x40007d58, rw_t<uint32_t>> r_TXBUF11__86;
            typedef reg_t<uint32_t, 0x40007d5c, rw_t<uint32_t>> r_TXBUF11__87;
            typedef reg_t<uint32_t, 0x40007d60, rw_t<uint32_t>> r_TXBUF11__88;
            typedef reg_t<uint32_t, 0x40007d64, rw_t<uint32_t>> r_TXBUF11__89;
            typedef reg_t<uint32_t, 0x40007d68, rw_t<uint32_t>> r_TXBUF11__90;
            typedef reg_t<uint32_t, 0x40007d6c, rw_t<uint32_t>> r_TXBUF11__91;
            typedef reg_t<uint32_t, 0x40007d70, rw_t<uint32_t>> r_TXBUF11__92;
            typedef reg_t<uint32_t, 0x40007d74, rw_t<uint32_t>> r_TXBUF11__93;
            typedef reg_t<uint32_t, 0x40007d78, rw_t<uint32_t>> r_TXBUF11__94;
            typedef reg_t<uint32_t, 0x40007d7c, rw_t<uint32_t>> r_TXBUF11__95;
            typedef reg_t<uint32_t, 0x40007d80, rw_t<uint32_t>> r_TXBUF11__96;
            typedef reg_t<uint32_t, 0x40007d84, rw_t<uint32_t>> r_TXBUF11__97;
            typedef reg_t<uint32_t, 0x40007d88, rw_t<uint32_t>> r_TXBUF11__98;
            typedef reg_t<uint32_t, 0x40007d8c, rw_t<uint32_t>> r_TXBUF11__99;
            typedef reg_t<uint32_t, 0x40007d90, rw_t<uint32_t>> r_TXBUF11__100;
            typedef reg_t<uint32_t, 0x40007d94, rw_t<uint32_t>> r_TXBUF11__101;
            typedef reg_t<uint32_t, 0x40007d98, rw_t<uint32_t>> r_TXBUF11__102;
            typedef reg_t<uint32_t, 0x40007d9c, rw_t<uint32_t>> r_TXBUF11__103;
            typedef reg_t<uint32_t, 0x40007da0, rw_t<uint32_t>> r_TXBUF11__104;
            typedef reg_t<uint32_t, 0x40007da4, rw_t<uint32_t>> r_TXBUF11__105;
            typedef reg_t<uint32_t, 0x40007da8, rw_t<uint32_t>> r_TXBUF11__106;
            typedef reg_t<uint32_t, 0x40007dac, rw_t<uint32_t>> r_TXBUF11__107;
            typedef reg_t<uint32_t, 0x40007db0, rw_t<uint32_t>> r_TXBUF11__108;
            typedef reg_t<uint32_t, 0x40007db4, rw_t<uint32_t>> r_TXBUF11__109;
            typedef reg_t<uint32_t, 0x40007db8, rw_t<uint32_t>> r_TXBUF11__110;
            typedef reg_t<uint32_t, 0x40007dbc, rw_t<uint32_t>> r_TXBUF11__111;
            typedef reg_t<uint32_t, 0x40007dc0, rw_t<uint32_t>> r_TXBUF11__112;
            typedef reg_t<uint32_t, 0x40007dc4, rw_t<uint32_t>> r_TXBUF11__113;
            typedef reg_t<uint32_t, 0x40007dc8, rw_t<uint32_t>> r_TXBUF11__114;
            typedef reg_t<uint32_t, 0x40007dcc, rw_t<uint32_t>> r_TXBUF11__115;
            typedef reg_t<uint32_t, 0x40007dd0, rw_t<uint32_t>> r_TXBUF11__116;
            typedef reg_t<uint32_t, 0x40007dd4, rw_t<uint32_t>> r_TXBUF11__117;
            typedef reg_t<uint32_t, 0x40007dd8, rw_t<uint32_t>> r_TXBUF11__118;
            typedef reg_t<uint32_t, 0x40007ddc, rw_t<uint32_t>> r_TXBUF11__119;
            typedef reg_t<uint32_t, 0x40007de0, rw_t<uint32_t>> r_TXBUF11__120;
            typedef reg_t<uint32_t, 0x40007de4, rw_t<uint32_t>> r_TXBUF11__121;
            typedef reg_t<uint32_t, 0x40007de8, rw_t<uint32_t>> r_TXBUF11__122;
            typedef reg_t<uint32_t, 0x40007dec, rw_t<uint32_t>> r_TXBUF11__123;
            typedef reg_t<uint32_t, 0x40007df0, rw_t<uint32_t>> r_TXBUF11__124;
            typedef reg_t<uint32_t, 0x40007df4, rw_t<uint32_t>> r_TXBUF11__125;
            typedef reg_t<uint32_t, 0x40007df8, rw_t<uint32_t>> r_TXBUF11__126;
            typedef reg_t<uint32_t, 0x40007dfc, rw_t<uint32_t>> r_TXBUF11__127;
            typedef reg_t<uint32_t, 0x40007e00, rw_t<uint32_t>> r_TXBUF11__128;
            typedef reg_t<uint32_t, 0x40007e04, rw_t<uint32_t>> r_TXBUF11__129;
            typedef reg_t<uint32_t, 0x40007e08, rw_t<uint32_t>> r_TXBUF11__130;
            typedef reg_t<uint32_t, 0x40007e0c, rw_t<uint32_t>> r_TXBUF11__131;
            typedef reg_t<uint32_t, 0x40007e10, rw_t<uint32_t>> r_TXBUF11__132;
            typedef reg_t<uint32_t, 0x40007e14, rw_t<uint32_t>> r_TXBUF11__133;
            typedef reg_t<uint32_t, 0x40007e18, rw_t<uint32_t>> r_TXBUF11__134;
            typedef reg_t<uint32_t, 0x40007e1c, rw_t<uint32_t>> r_TXBUF11__135;
            typedef reg_t<uint32_t, 0x40007e20, rw_t<uint32_t>> r_TXBUF11__136;
            typedef reg_t<uint32_t, 0x40007e24, rw_t<uint32_t>> r_TXBUF11__137;
            typedef reg_t<uint32_t, 0x40007e28, rw_t<uint32_t>> r_TXBUF11__138;
            typedef reg_t<uint32_t, 0x40007e2c, rw_t<uint32_t>> r_TXBUF11__139;
            typedef reg_t<uint32_t, 0x40007e30, rw_t<uint32_t>> r_TXBUF11__140;
            typedef reg_t<uint32_t, 0x40007e34, rw_t<uint32_t>> r_TXBUF11__141;
            typedef reg_t<uint32_t, 0x40007e38, rw_t<uint32_t>> r_TXBUF11__142;
            typedef reg_t<uint32_t, 0x40007e3c, rw_t<uint32_t>> r_TXBUF11__143;
            typedef reg_t<uint32_t, 0x40007e40, rw_t<uint32_t>> r_TXBUF11__144;
            typedef reg_t<uint32_t, 0x40007e44, rw_t<uint32_t>> r_TXBUF11__145;
            typedef reg_t<uint32_t, 0x40007e48, rw_t<uint32_t>> r_TXBUF11__146;
            typedef reg_t<uint32_t, 0x40007e4c, rw_t<uint32_t>> r_TXBUF11__147;
            typedef reg_t<uint32_t, 0x40007e50, rw_t<uint32_t>> r_TXBUF11__148;
            typedef reg_t<uint32_t, 0x40007e54, rw_t<uint32_t>> r_TXBUF11__149;
            typedef reg_t<uint32_t, 0x40007e58, rw_t<uint32_t>> r_TXBUF11__150;
            typedef reg_t<uint32_t, 0x40007e5c, rw_t<uint32_t>> r_TXBUF11__151;
            typedef reg_t<uint32_t, 0x40007e60, rw_t<uint32_t>> r_TXBUF11__152;
            typedef reg_t<uint32_t, 0x40007e64, rw_t<uint32_t>> r_TXBUF11__153;
            typedef reg_t<uint32_t, 0x40007e68, rw_t<uint32_t>> r_TXBUF11__154;
            typedef reg_t<uint32_t, 0x40007e6c, rw_t<uint32_t>> r_TXBUF11__155;
            typedef reg_t<uint32_t, 0x40007e70, rw_t<uint32_t>> r_TXBUF11__156;
            typedef reg_t<uint32_t, 0x40007e74, rw_t<uint32_t>> r_TXBUF11__157;
            typedef reg_t<uint32_t, 0x40007e78, rw_t<uint32_t>> r_TXBUF11__158;
            typedef reg_t<uint32_t, 0x40007e7c, rw_t<uint32_t>> r_TXBUF11__159;
            typedef reg_t<uint32_t, 0x40007e80, rw_t<uint32_t>> r_TXBUF11__160;
            typedef reg_t<uint32_t, 0x40007e84, rw_t<uint32_t>> r_TXBUF11__161;
            typedef reg_t<uint32_t, 0x40007e88, rw_t<uint32_t>> r_TXBUF11__162;
            typedef reg_t<uint32_t, 0x40007e8c, rw_t<uint32_t>> r_TXBUF11__163;
            typedef reg_t<uint32_t, 0x40007e90, rw_t<uint32_t>> r_TXBUF11__164;
            typedef reg_t<uint32_t, 0x40007e94, rw_t<uint32_t>> r_TXBUF11__165;
            typedef reg_t<uint32_t, 0x40007e98, rw_t<uint32_t>> r_TXBUF11__166;
            typedef reg_t<uint32_t, 0x40007e9c, rw_t<uint32_t>> r_TXBUF11__167;
            typedef reg_t<uint32_t, 0x40007ea0, rw_t<uint32_t>> r_TXBUF11__168;
            typedef reg_t<uint32_t, 0x40007ea4, rw_t<uint32_t>> r_TXBUF11__169;
            typedef reg_t<uint32_t, 0x40007ea8, rw_t<uint32_t>> r_TXBUF11__170;
            typedef reg_t<uint32_t, 0x40007eac, rw_t<uint32_t>> r_TXBUF11__171;
            typedef reg_t<uint32_t, 0x40007eb0, rw_t<uint32_t>> r_TXBUF11__172;
            typedef reg_t<uint32_t, 0x40007eb4, rw_t<uint32_t>> r_TXBUF11__173;
            typedef reg_t<uint32_t, 0x40007eb8, rw_t<uint32_t>> r_TXBUF11__174;
            typedef reg_t<uint32_t, 0x40007ebc, rw_t<uint32_t>> r_TXBUF11__175;
            typedef reg_t<uint32_t, 0x40007ec0, rw_t<uint32_t>> r_TXBUF11__176;
            typedef reg_t<uint32_t, 0x40007ec4, rw_t<uint32_t>> r_TXBUF11__177;
            typedef reg_t<uint32_t, 0x40007ec8, rw_t<uint32_t>> r_TXBUF11__178;
            typedef reg_t<uint32_t, 0x40007ecc, rw_t<uint32_t>> r_TXBUF11__179;
            typedef reg_t<uint32_t, 0x40007ed0, rw_t<uint32_t>> r_TXBUF11__180;
            typedef reg_t<uint32_t, 0x40007ed4, rw_t<uint32_t>> r_TXBUF11__181;
            typedef reg_t<uint32_t, 0x40007ed8, rw_t<uint32_t>> r_TXBUF11__182;
            typedef reg_t<uint32_t, 0x40007edc, rw_t<uint32_t>> r_TXBUF11__183;
            typedef reg_t<uint32_t, 0x40007ee0, rw_t<uint32_t>> r_TXBUF11__184;
            typedef reg_t<uint32_t, 0x40007ee4, rw_t<uint32_t>> r_TXBUF11__185;
            typedef reg_t<uint32_t, 0x40007ee8, rw_t<uint32_t>> r_TXBUF11__186;
            typedef reg_t<uint32_t, 0x40007eec, rw_t<uint32_t>> r_TXBUF11__187;
            typedef reg_t<uint32_t, 0x40007ef0, rw_t<uint32_t>> r_TXBUF11__188;
            typedef reg_t<uint32_t, 0x40007ef4, rw_t<uint32_t>> r_TXBUF11__189;
            typedef reg_t<uint32_t, 0x40007ef8, rw_t<uint32_t>> r_TXBUF11__190;
            typedef reg_t<uint32_t, 0x40007efc, rw_t<uint32_t>> r_TXBUF11__191;
            typedef reg_t<uint32_t, 0x40007f00, rw_t<uint32_t>> r_TXBUF11__192;
            typedef reg_t<uint32_t, 0x40007f04, rw_t<uint32_t>> r_TXBUF11__193;
            typedef reg_t<uint32_t, 0x40007f08, rw_t<uint32_t>> r_TXBUF11__194;
            typedef reg_t<uint32_t, 0x40007f0c, rw_t<uint32_t>> r_TXBUF11__195;
            typedef reg_t<uint32_t, 0x40007f10, rw_t<uint32_t>> r_TXBUF11__196;
            typedef reg_t<uint32_t, 0x40007f14, rw_t<uint32_t>> r_TXBUF11__197;
            typedef reg_t<uint32_t, 0x40007f18, rw_t<uint32_t>> r_TXBUF11__198;
            typedef reg_t<uint32_t, 0x40007f1c, rw_t<uint32_t>> r_TXBUF11__199;
            typedef reg_t<uint32_t, 0x40007f20, rw_t<uint32_t>> r_TXBUF11__200;
            typedef reg_t<uint32_t, 0x40007f24, rw_t<uint32_t>> r_TXBUF11__201;
            typedef reg_t<uint32_t, 0x40007f28, rw_t<uint32_t>> r_TXBUF11__202;
            typedef reg_t<uint32_t, 0x40007f2c, rw_t<uint32_t>> r_TXBUF11__203;
            typedef reg_t<uint32_t, 0x40007f30, rw_t<uint32_t>> r_TXBUF11__204;
            typedef reg_t<uint32_t, 0x40007f34, rw_t<uint32_t>> r_TXBUF11__205;
            typedef reg_t<uint32_t, 0x40007f38, rw_t<uint32_t>> r_TXBUF11__206;
            typedef reg_t<uint32_t, 0x40007f3c, rw_t<uint32_t>> r_TXBUF11__207;
            typedef reg_t<uint32_t, 0x40007f40, rw_t<uint32_t>> r_TXBUF11__208;
            typedef reg_t<uint32_t, 0x40007f44, rw_t<uint32_t>> r_TXBUF11__209;
            typedef reg_t<uint32_t, 0x40007f48, rw_t<uint32_t>> r_TXBUF11__210;
            typedef reg_t<uint32_t, 0x40007f4c, rw_t<uint32_t>> r_TXBUF11__211;
            typedef reg_t<uint32_t, 0x40007f50, rw_t<uint32_t>> r_TXBUF11__212;
            typedef reg_t<uint32_t, 0x40007f54, rw_t<uint32_t>> r_TXBUF11__213;
            typedef reg_t<uint32_t, 0x40007f58, rw_t<uint32_t>> r_TXBUF11__214;
            typedef reg_t<uint32_t, 0x40007f5c, rw_t<uint32_t>> r_TXBUF11__215;
            typedef reg_t<uint32_t, 0x40007f60, rw_t<uint32_t>> r_TXBUF11__216;
            typedef reg_t<uint32_t, 0x40007f64, rw_t<uint32_t>> r_TXBUF11__217;
            typedef reg_t<uint32_t, 0x40007f68, rw_t<uint32_t>> r_TXBUF11__218;
            typedef reg_t<uint32_t, 0x40007f6c, rw_t<uint32_t>> r_TXBUF11__219;
            typedef reg_t<uint32_t, 0x40007f70, rw_t<uint32_t>> r_TXBUF11__220;
            typedef reg_t<uint32_t, 0x40007f74, rw_t<uint32_t>> r_TXBUF11__221;
            typedef reg_t<uint32_t, 0x40007f78, rw_t<uint32_t>> r_TXBUF11__222;
            typedef reg_t<uint32_t, 0x40007f7c, rw_t<uint32_t>> r_TXBUF11__223;
            typedef reg_t<uint32_t, 0x40007f80, rw_t<uint32_t>> r_TXBUF11__224;
            typedef reg_t<uint32_t, 0x40007f84, rw_t<uint32_t>> r_TXBUF11__225;
            typedef reg_t<uint32_t, 0x40007f88, rw_t<uint32_t>> r_TXBUF11__226;
            typedef reg_t<uint32_t, 0x40007f8c, rw_t<uint32_t>> r_TXBUF11__227;
            typedef reg_t<uint32_t, 0x40007f90, rw_t<uint32_t>> r_TXBUF11__228;
            typedef reg_t<uint32_t, 0x40007f94, rw_t<uint32_t>> r_TXBUF11__229;
            typedef reg_t<uint32_t, 0x40007f98, rw_t<uint32_t>> r_TXBUF11__230;
            typedef reg_t<uint32_t, 0x40007f9c, rw_t<uint32_t>> r_TXBUF11__231;
            typedef reg_t<uint32_t, 0x40007fa0, rw_t<uint32_t>> r_TXBUF11__232;
            typedef reg_t<uint32_t, 0x40007fa4, rw_t<uint32_t>> r_TXBUF11__233;
            typedef reg_t<uint32_t, 0x40007fa8, rw_t<uint32_t>> r_TXBUF11__234;
            typedef reg_t<uint32_t, 0x40007fac, rw_t<uint32_t>> r_TXBUF11__235;
            typedef reg_t<uint32_t, 0x40007fb0, rw_t<uint32_t>> r_TXBUF11__236;
            typedef reg_t<uint32_t, 0x40007fb4, rw_t<uint32_t>> r_TXBUF11__237;
            typedef reg_t<uint32_t, 0x40007fb8, rw_t<uint32_t>> r_TXBUF11__238;
            typedef reg_t<uint32_t, 0x40007fbc, rw_t<uint32_t>> r_TXBUF11__239;
            typedef reg_t<uint32_t, 0x40007fc0, rw_t<uint32_t>> r_TXBUF11__240;
            typedef reg_t<uint32_t, 0x40007fc4, rw_t<uint32_t>> r_TXBUF11__241;
            typedef reg_t<uint32_t, 0x40007fc8, rw_t<uint32_t>> r_TXBUF11__242;
            typedef reg_t<uint32_t, 0x40007fcc, rw_t<uint32_t>> r_TXBUF11__243;
            typedef reg_t<uint32_t, 0x40007fd0, rw_t<uint32_t>> r_TXBUF11__244;
            typedef reg_t<uint32_t, 0x40007fd4, rw_t<uint32_t>> r_TXBUF11__245;
            typedef reg_t<uint32_t, 0x40007fd8, rw_t<uint32_t>> r_TXBUF11__246;
            typedef reg_t<uint32_t, 0x40007fdc, rw_t<uint32_t>> r_TXBUF11__247;
            typedef reg_t<uint32_t, 0x40007fe0, rw_t<uint32_t>> r_TXBUF11__248;
            typedef reg_t<uint32_t, 0x40007fe4, rw_t<uint32_t>> r_TXBUF11__249;
            typedef reg_t<uint32_t, 0x40007fe8, rw_t<uint32_t>> r_TXBUF11__250;
            typedef reg_t<uint32_t, 0x40007fec, rw_t<uint32_t>> r_TXBUF11__251;
            typedef reg_t<uint32_t, 0x40007ff0, rw_t<uint32_t>> r_TXBUF11__252;
            typedef reg_t<uint32_t, 0x40007ff4, rw_t<uint32_t>> r_TXBUF11__253;
            typedef reg_t<uint32_t, 0x40007ff8, rw_t<uint32_t>> r_TXBUF11__254;
            typedef reg_t<uint32_t, 0x40007ffc, rw_t<uint32_t>> r_TXBUF11__255;
        } // end of TXBUF11_[%s]
        namespace TXBUF12_ {
            // TXBUF12_ register
            typedef reg_t<uint32_t, 0x40008000, rw_t<uint32_t>> r_TXBUF12__0;
            typedef reg_t<uint32_t, 0x40008004, rw_t<uint32_t>> r_TXBUF12__1;
            typedef reg_t<uint32_t, 0x40008008, rw_t<uint32_t>> r_TXBUF12__2;
            typedef reg_t<uint32_t, 0x4000800c, rw_t<uint32_t>> r_TXBUF12__3;
            typedef reg_t<uint32_t, 0x40008010, rw_t<uint32_t>> r_TXBUF12__4;
            typedef reg_t<uint32_t, 0x40008014, rw_t<uint32_t>> r_TXBUF12__5;
            typedef reg_t<uint32_t, 0x40008018, rw_t<uint32_t>> r_TXBUF12__6;
            typedef reg_t<uint32_t, 0x4000801c, rw_t<uint32_t>> r_TXBUF12__7;
            typedef reg_t<uint32_t, 0x40008020, rw_t<uint32_t>> r_TXBUF12__8;
            typedef reg_t<uint32_t, 0x40008024, rw_t<uint32_t>> r_TXBUF12__9;
            typedef reg_t<uint32_t, 0x40008028, rw_t<uint32_t>> r_TXBUF12__10;
            typedef reg_t<uint32_t, 0x4000802c, rw_t<uint32_t>> r_TXBUF12__11;
            typedef reg_t<uint32_t, 0x40008030, rw_t<uint32_t>> r_TXBUF12__12;
            typedef reg_t<uint32_t, 0x40008034, rw_t<uint32_t>> r_TXBUF12__13;
            typedef reg_t<uint32_t, 0x40008038, rw_t<uint32_t>> r_TXBUF12__14;
            typedef reg_t<uint32_t, 0x4000803c, rw_t<uint32_t>> r_TXBUF12__15;
            typedef reg_t<uint32_t, 0x40008040, rw_t<uint32_t>> r_TXBUF12__16;
            typedef reg_t<uint32_t, 0x40008044, rw_t<uint32_t>> r_TXBUF12__17;
            typedef reg_t<uint32_t, 0x40008048, rw_t<uint32_t>> r_TXBUF12__18;
            typedef reg_t<uint32_t, 0x4000804c, rw_t<uint32_t>> r_TXBUF12__19;
            typedef reg_t<uint32_t, 0x40008050, rw_t<uint32_t>> r_TXBUF12__20;
            typedef reg_t<uint32_t, 0x40008054, rw_t<uint32_t>> r_TXBUF12__21;
            typedef reg_t<uint32_t, 0x40008058, rw_t<uint32_t>> r_TXBUF12__22;
            typedef reg_t<uint32_t, 0x4000805c, rw_t<uint32_t>> r_TXBUF12__23;
            typedef reg_t<uint32_t, 0x40008060, rw_t<uint32_t>> r_TXBUF12__24;
            typedef reg_t<uint32_t, 0x40008064, rw_t<uint32_t>> r_TXBUF12__25;
            typedef reg_t<uint32_t, 0x40008068, rw_t<uint32_t>> r_TXBUF12__26;
            typedef reg_t<uint32_t, 0x4000806c, rw_t<uint32_t>> r_TXBUF12__27;
            typedef reg_t<uint32_t, 0x40008070, rw_t<uint32_t>> r_TXBUF12__28;
            typedef reg_t<uint32_t, 0x40008074, rw_t<uint32_t>> r_TXBUF12__29;
            typedef reg_t<uint32_t, 0x40008078, rw_t<uint32_t>> r_TXBUF12__30;
            typedef reg_t<uint32_t, 0x4000807c, rw_t<uint32_t>> r_TXBUF12__31;
            typedef reg_t<uint32_t, 0x40008080, rw_t<uint32_t>> r_TXBUF12__32;
            typedef reg_t<uint32_t, 0x40008084, rw_t<uint32_t>> r_TXBUF12__33;
            typedef reg_t<uint32_t, 0x40008088, rw_t<uint32_t>> r_TXBUF12__34;
            typedef reg_t<uint32_t, 0x4000808c, rw_t<uint32_t>> r_TXBUF12__35;
            typedef reg_t<uint32_t, 0x40008090, rw_t<uint32_t>> r_TXBUF12__36;
            typedef reg_t<uint32_t, 0x40008094, rw_t<uint32_t>> r_TXBUF12__37;
            typedef reg_t<uint32_t, 0x40008098, rw_t<uint32_t>> r_TXBUF12__38;
            typedef reg_t<uint32_t, 0x4000809c, rw_t<uint32_t>> r_TXBUF12__39;
            typedef reg_t<uint32_t, 0x400080a0, rw_t<uint32_t>> r_TXBUF12__40;
            typedef reg_t<uint32_t, 0x400080a4, rw_t<uint32_t>> r_TXBUF12__41;
            typedef reg_t<uint32_t, 0x400080a8, rw_t<uint32_t>> r_TXBUF12__42;
            typedef reg_t<uint32_t, 0x400080ac, rw_t<uint32_t>> r_TXBUF12__43;
            typedef reg_t<uint32_t, 0x400080b0, rw_t<uint32_t>> r_TXBUF12__44;
            typedef reg_t<uint32_t, 0x400080b4, rw_t<uint32_t>> r_TXBUF12__45;
            typedef reg_t<uint32_t, 0x400080b8, rw_t<uint32_t>> r_TXBUF12__46;
            typedef reg_t<uint32_t, 0x400080bc, rw_t<uint32_t>> r_TXBUF12__47;
            typedef reg_t<uint32_t, 0x400080c0, rw_t<uint32_t>> r_TXBUF12__48;
            typedef reg_t<uint32_t, 0x400080c4, rw_t<uint32_t>> r_TXBUF12__49;
            typedef reg_t<uint32_t, 0x400080c8, rw_t<uint32_t>> r_TXBUF12__50;
            typedef reg_t<uint32_t, 0x400080cc, rw_t<uint32_t>> r_TXBUF12__51;
            typedef reg_t<uint32_t, 0x400080d0, rw_t<uint32_t>> r_TXBUF12__52;
            typedef reg_t<uint32_t, 0x400080d4, rw_t<uint32_t>> r_TXBUF12__53;
            typedef reg_t<uint32_t, 0x400080d8, rw_t<uint32_t>> r_TXBUF12__54;
            typedef reg_t<uint32_t, 0x400080dc, rw_t<uint32_t>> r_TXBUF12__55;
            typedef reg_t<uint32_t, 0x400080e0, rw_t<uint32_t>> r_TXBUF12__56;
            typedef reg_t<uint32_t, 0x400080e4, rw_t<uint32_t>> r_TXBUF12__57;
            typedef reg_t<uint32_t, 0x400080e8, rw_t<uint32_t>> r_TXBUF12__58;
            typedef reg_t<uint32_t, 0x400080ec, rw_t<uint32_t>> r_TXBUF12__59;
            typedef reg_t<uint32_t, 0x400080f0, rw_t<uint32_t>> r_TXBUF12__60;
            typedef reg_t<uint32_t, 0x400080f4, rw_t<uint32_t>> r_TXBUF12__61;
            typedef reg_t<uint32_t, 0x400080f8, rw_t<uint32_t>> r_TXBUF12__62;
            typedef reg_t<uint32_t, 0x400080fc, rw_t<uint32_t>> r_TXBUF12__63;
            typedef reg_t<uint32_t, 0x40008100, rw_t<uint32_t>> r_TXBUF12__64;
            typedef reg_t<uint32_t, 0x40008104, rw_t<uint32_t>> r_TXBUF12__65;
            typedef reg_t<uint32_t, 0x40008108, rw_t<uint32_t>> r_TXBUF12__66;
            typedef reg_t<uint32_t, 0x4000810c, rw_t<uint32_t>> r_TXBUF12__67;
            typedef reg_t<uint32_t, 0x40008110, rw_t<uint32_t>> r_TXBUF12__68;
            typedef reg_t<uint32_t, 0x40008114, rw_t<uint32_t>> r_TXBUF12__69;
            typedef reg_t<uint32_t, 0x40008118, rw_t<uint32_t>> r_TXBUF12__70;
            typedef reg_t<uint32_t, 0x4000811c, rw_t<uint32_t>> r_TXBUF12__71;
            typedef reg_t<uint32_t, 0x40008120, rw_t<uint32_t>> r_TXBUF12__72;
            typedef reg_t<uint32_t, 0x40008124, rw_t<uint32_t>> r_TXBUF12__73;
            typedef reg_t<uint32_t, 0x40008128, rw_t<uint32_t>> r_TXBUF12__74;
            typedef reg_t<uint32_t, 0x4000812c, rw_t<uint32_t>> r_TXBUF12__75;
            typedef reg_t<uint32_t, 0x40008130, rw_t<uint32_t>> r_TXBUF12__76;
            typedef reg_t<uint32_t, 0x40008134, rw_t<uint32_t>> r_TXBUF12__77;
            typedef reg_t<uint32_t, 0x40008138, rw_t<uint32_t>> r_TXBUF12__78;
            typedef reg_t<uint32_t, 0x4000813c, rw_t<uint32_t>> r_TXBUF12__79;
            typedef reg_t<uint32_t, 0x40008140, rw_t<uint32_t>> r_TXBUF12__80;
            typedef reg_t<uint32_t, 0x40008144, rw_t<uint32_t>> r_TXBUF12__81;
            typedef reg_t<uint32_t, 0x40008148, rw_t<uint32_t>> r_TXBUF12__82;
            typedef reg_t<uint32_t, 0x4000814c, rw_t<uint32_t>> r_TXBUF12__83;
            typedef reg_t<uint32_t, 0x40008150, rw_t<uint32_t>> r_TXBUF12__84;
            typedef reg_t<uint32_t, 0x40008154, rw_t<uint32_t>> r_TXBUF12__85;
            typedef reg_t<uint32_t, 0x40008158, rw_t<uint32_t>> r_TXBUF12__86;
            typedef reg_t<uint32_t, 0x4000815c, rw_t<uint32_t>> r_TXBUF12__87;
            typedef reg_t<uint32_t, 0x40008160, rw_t<uint32_t>> r_TXBUF12__88;
            typedef reg_t<uint32_t, 0x40008164, rw_t<uint32_t>> r_TXBUF12__89;
            typedef reg_t<uint32_t, 0x40008168, rw_t<uint32_t>> r_TXBUF12__90;
            typedef reg_t<uint32_t, 0x4000816c, rw_t<uint32_t>> r_TXBUF12__91;
            typedef reg_t<uint32_t, 0x40008170, rw_t<uint32_t>> r_TXBUF12__92;
            typedef reg_t<uint32_t, 0x40008174, rw_t<uint32_t>> r_TXBUF12__93;
            typedef reg_t<uint32_t, 0x40008178, rw_t<uint32_t>> r_TXBUF12__94;
            typedef reg_t<uint32_t, 0x4000817c, rw_t<uint32_t>> r_TXBUF12__95;
            typedef reg_t<uint32_t, 0x40008180, rw_t<uint32_t>> r_TXBUF12__96;
            typedef reg_t<uint32_t, 0x40008184, rw_t<uint32_t>> r_TXBUF12__97;
            typedef reg_t<uint32_t, 0x40008188, rw_t<uint32_t>> r_TXBUF12__98;
            typedef reg_t<uint32_t, 0x4000818c, rw_t<uint32_t>> r_TXBUF12__99;
            typedef reg_t<uint32_t, 0x40008190, rw_t<uint32_t>> r_TXBUF12__100;
            typedef reg_t<uint32_t, 0x40008194, rw_t<uint32_t>> r_TXBUF12__101;
            typedef reg_t<uint32_t, 0x40008198, rw_t<uint32_t>> r_TXBUF12__102;
            typedef reg_t<uint32_t, 0x4000819c, rw_t<uint32_t>> r_TXBUF12__103;
            typedef reg_t<uint32_t, 0x400081a0, rw_t<uint32_t>> r_TXBUF12__104;
            typedef reg_t<uint32_t, 0x400081a4, rw_t<uint32_t>> r_TXBUF12__105;
            typedef reg_t<uint32_t, 0x400081a8, rw_t<uint32_t>> r_TXBUF12__106;
            typedef reg_t<uint32_t, 0x400081ac, rw_t<uint32_t>> r_TXBUF12__107;
            typedef reg_t<uint32_t, 0x400081b0, rw_t<uint32_t>> r_TXBUF12__108;
            typedef reg_t<uint32_t, 0x400081b4, rw_t<uint32_t>> r_TXBUF12__109;
            typedef reg_t<uint32_t, 0x400081b8, rw_t<uint32_t>> r_TXBUF12__110;
            typedef reg_t<uint32_t, 0x400081bc, rw_t<uint32_t>> r_TXBUF12__111;
            typedef reg_t<uint32_t, 0x400081c0, rw_t<uint32_t>> r_TXBUF12__112;
            typedef reg_t<uint32_t, 0x400081c4, rw_t<uint32_t>> r_TXBUF12__113;
            typedef reg_t<uint32_t, 0x400081c8, rw_t<uint32_t>> r_TXBUF12__114;
            typedef reg_t<uint32_t, 0x400081cc, rw_t<uint32_t>> r_TXBUF12__115;
            typedef reg_t<uint32_t, 0x400081d0, rw_t<uint32_t>> r_TXBUF12__116;
            typedef reg_t<uint32_t, 0x400081d4, rw_t<uint32_t>> r_TXBUF12__117;
            typedef reg_t<uint32_t, 0x400081d8, rw_t<uint32_t>> r_TXBUF12__118;
            typedef reg_t<uint32_t, 0x400081dc, rw_t<uint32_t>> r_TXBUF12__119;
            typedef reg_t<uint32_t, 0x400081e0, rw_t<uint32_t>> r_TXBUF12__120;
            typedef reg_t<uint32_t, 0x400081e4, rw_t<uint32_t>> r_TXBUF12__121;
            typedef reg_t<uint32_t, 0x400081e8, rw_t<uint32_t>> r_TXBUF12__122;
            typedef reg_t<uint32_t, 0x400081ec, rw_t<uint32_t>> r_TXBUF12__123;
            typedef reg_t<uint32_t, 0x400081f0, rw_t<uint32_t>> r_TXBUF12__124;
            typedef reg_t<uint32_t, 0x400081f4, rw_t<uint32_t>> r_TXBUF12__125;
            typedef reg_t<uint32_t, 0x400081f8, rw_t<uint32_t>> r_TXBUF12__126;
            typedef reg_t<uint32_t, 0x400081fc, rw_t<uint32_t>> r_TXBUF12__127;
            typedef reg_t<uint32_t, 0x40008200, rw_t<uint32_t>> r_TXBUF12__128;
            typedef reg_t<uint32_t, 0x40008204, rw_t<uint32_t>> r_TXBUF12__129;
            typedef reg_t<uint32_t, 0x40008208, rw_t<uint32_t>> r_TXBUF12__130;
            typedef reg_t<uint32_t, 0x4000820c, rw_t<uint32_t>> r_TXBUF12__131;
            typedef reg_t<uint32_t, 0x40008210, rw_t<uint32_t>> r_TXBUF12__132;
            typedef reg_t<uint32_t, 0x40008214, rw_t<uint32_t>> r_TXBUF12__133;
            typedef reg_t<uint32_t, 0x40008218, rw_t<uint32_t>> r_TXBUF12__134;
            typedef reg_t<uint32_t, 0x4000821c, rw_t<uint32_t>> r_TXBUF12__135;
            typedef reg_t<uint32_t, 0x40008220, rw_t<uint32_t>> r_TXBUF12__136;
            typedef reg_t<uint32_t, 0x40008224, rw_t<uint32_t>> r_TXBUF12__137;
            typedef reg_t<uint32_t, 0x40008228, rw_t<uint32_t>> r_TXBUF12__138;
            typedef reg_t<uint32_t, 0x4000822c, rw_t<uint32_t>> r_TXBUF12__139;
            typedef reg_t<uint32_t, 0x40008230, rw_t<uint32_t>> r_TXBUF12__140;
            typedef reg_t<uint32_t, 0x40008234, rw_t<uint32_t>> r_TXBUF12__141;
            typedef reg_t<uint32_t, 0x40008238, rw_t<uint32_t>> r_TXBUF12__142;
            typedef reg_t<uint32_t, 0x4000823c, rw_t<uint32_t>> r_TXBUF12__143;
            typedef reg_t<uint32_t, 0x40008240, rw_t<uint32_t>> r_TXBUF12__144;
            typedef reg_t<uint32_t, 0x40008244, rw_t<uint32_t>> r_TXBUF12__145;
            typedef reg_t<uint32_t, 0x40008248, rw_t<uint32_t>> r_TXBUF12__146;
            typedef reg_t<uint32_t, 0x4000824c, rw_t<uint32_t>> r_TXBUF12__147;
            typedef reg_t<uint32_t, 0x40008250, rw_t<uint32_t>> r_TXBUF12__148;
            typedef reg_t<uint32_t, 0x40008254, rw_t<uint32_t>> r_TXBUF12__149;
            typedef reg_t<uint32_t, 0x40008258, rw_t<uint32_t>> r_TXBUF12__150;
            typedef reg_t<uint32_t, 0x4000825c, rw_t<uint32_t>> r_TXBUF12__151;
            typedef reg_t<uint32_t, 0x40008260, rw_t<uint32_t>> r_TXBUF12__152;
            typedef reg_t<uint32_t, 0x40008264, rw_t<uint32_t>> r_TXBUF12__153;
            typedef reg_t<uint32_t, 0x40008268, rw_t<uint32_t>> r_TXBUF12__154;
            typedef reg_t<uint32_t, 0x4000826c, rw_t<uint32_t>> r_TXBUF12__155;
            typedef reg_t<uint32_t, 0x40008270, rw_t<uint32_t>> r_TXBUF12__156;
            typedef reg_t<uint32_t, 0x40008274, rw_t<uint32_t>> r_TXBUF12__157;
            typedef reg_t<uint32_t, 0x40008278, rw_t<uint32_t>> r_TXBUF12__158;
            typedef reg_t<uint32_t, 0x4000827c, rw_t<uint32_t>> r_TXBUF12__159;
            typedef reg_t<uint32_t, 0x40008280, rw_t<uint32_t>> r_TXBUF12__160;
            typedef reg_t<uint32_t, 0x40008284, rw_t<uint32_t>> r_TXBUF12__161;
            typedef reg_t<uint32_t, 0x40008288, rw_t<uint32_t>> r_TXBUF12__162;
            typedef reg_t<uint32_t, 0x4000828c, rw_t<uint32_t>> r_TXBUF12__163;
            typedef reg_t<uint32_t, 0x40008290, rw_t<uint32_t>> r_TXBUF12__164;
            typedef reg_t<uint32_t, 0x40008294, rw_t<uint32_t>> r_TXBUF12__165;
            typedef reg_t<uint32_t, 0x40008298, rw_t<uint32_t>> r_TXBUF12__166;
            typedef reg_t<uint32_t, 0x4000829c, rw_t<uint32_t>> r_TXBUF12__167;
            typedef reg_t<uint32_t, 0x400082a0, rw_t<uint32_t>> r_TXBUF12__168;
            typedef reg_t<uint32_t, 0x400082a4, rw_t<uint32_t>> r_TXBUF12__169;
            typedef reg_t<uint32_t, 0x400082a8, rw_t<uint32_t>> r_TXBUF12__170;
            typedef reg_t<uint32_t, 0x400082ac, rw_t<uint32_t>> r_TXBUF12__171;
            typedef reg_t<uint32_t, 0x400082b0, rw_t<uint32_t>> r_TXBUF12__172;
            typedef reg_t<uint32_t, 0x400082b4, rw_t<uint32_t>> r_TXBUF12__173;
            typedef reg_t<uint32_t, 0x400082b8, rw_t<uint32_t>> r_TXBUF12__174;
            typedef reg_t<uint32_t, 0x400082bc, rw_t<uint32_t>> r_TXBUF12__175;
            typedef reg_t<uint32_t, 0x400082c0, rw_t<uint32_t>> r_TXBUF12__176;
            typedef reg_t<uint32_t, 0x400082c4, rw_t<uint32_t>> r_TXBUF12__177;
            typedef reg_t<uint32_t, 0x400082c8, rw_t<uint32_t>> r_TXBUF12__178;
            typedef reg_t<uint32_t, 0x400082cc, rw_t<uint32_t>> r_TXBUF12__179;
            typedef reg_t<uint32_t, 0x400082d0, rw_t<uint32_t>> r_TXBUF12__180;
            typedef reg_t<uint32_t, 0x400082d4, rw_t<uint32_t>> r_TXBUF12__181;
            typedef reg_t<uint32_t, 0x400082d8, rw_t<uint32_t>> r_TXBUF12__182;
            typedef reg_t<uint32_t, 0x400082dc, rw_t<uint32_t>> r_TXBUF12__183;
            typedef reg_t<uint32_t, 0x400082e0, rw_t<uint32_t>> r_TXBUF12__184;
            typedef reg_t<uint32_t, 0x400082e4, rw_t<uint32_t>> r_TXBUF12__185;
            typedef reg_t<uint32_t, 0x400082e8, rw_t<uint32_t>> r_TXBUF12__186;
            typedef reg_t<uint32_t, 0x400082ec, rw_t<uint32_t>> r_TXBUF12__187;
            typedef reg_t<uint32_t, 0x400082f0, rw_t<uint32_t>> r_TXBUF12__188;
            typedef reg_t<uint32_t, 0x400082f4, rw_t<uint32_t>> r_TXBUF12__189;
            typedef reg_t<uint32_t, 0x400082f8, rw_t<uint32_t>> r_TXBUF12__190;
            typedef reg_t<uint32_t, 0x400082fc, rw_t<uint32_t>> r_TXBUF12__191;
            typedef reg_t<uint32_t, 0x40008300, rw_t<uint32_t>> r_TXBUF12__192;
            typedef reg_t<uint32_t, 0x40008304, rw_t<uint32_t>> r_TXBUF12__193;
            typedef reg_t<uint32_t, 0x40008308, rw_t<uint32_t>> r_TXBUF12__194;
            typedef reg_t<uint32_t, 0x4000830c, rw_t<uint32_t>> r_TXBUF12__195;
            typedef reg_t<uint32_t, 0x40008310, rw_t<uint32_t>> r_TXBUF12__196;
            typedef reg_t<uint32_t, 0x40008314, rw_t<uint32_t>> r_TXBUF12__197;
            typedef reg_t<uint32_t, 0x40008318, rw_t<uint32_t>> r_TXBUF12__198;
            typedef reg_t<uint32_t, 0x4000831c, rw_t<uint32_t>> r_TXBUF12__199;
            typedef reg_t<uint32_t, 0x40008320, rw_t<uint32_t>> r_TXBUF12__200;
            typedef reg_t<uint32_t, 0x40008324, rw_t<uint32_t>> r_TXBUF12__201;
            typedef reg_t<uint32_t, 0x40008328, rw_t<uint32_t>> r_TXBUF12__202;
            typedef reg_t<uint32_t, 0x4000832c, rw_t<uint32_t>> r_TXBUF12__203;
            typedef reg_t<uint32_t, 0x40008330, rw_t<uint32_t>> r_TXBUF12__204;
            typedef reg_t<uint32_t, 0x40008334, rw_t<uint32_t>> r_TXBUF12__205;
            typedef reg_t<uint32_t, 0x40008338, rw_t<uint32_t>> r_TXBUF12__206;
            typedef reg_t<uint32_t, 0x4000833c, rw_t<uint32_t>> r_TXBUF12__207;
            typedef reg_t<uint32_t, 0x40008340, rw_t<uint32_t>> r_TXBUF12__208;
            typedef reg_t<uint32_t, 0x40008344, rw_t<uint32_t>> r_TXBUF12__209;
            typedef reg_t<uint32_t, 0x40008348, rw_t<uint32_t>> r_TXBUF12__210;
            typedef reg_t<uint32_t, 0x4000834c, rw_t<uint32_t>> r_TXBUF12__211;
            typedef reg_t<uint32_t, 0x40008350, rw_t<uint32_t>> r_TXBUF12__212;
            typedef reg_t<uint32_t, 0x40008354, rw_t<uint32_t>> r_TXBUF12__213;
            typedef reg_t<uint32_t, 0x40008358, rw_t<uint32_t>> r_TXBUF12__214;
            typedef reg_t<uint32_t, 0x4000835c, rw_t<uint32_t>> r_TXBUF12__215;
            typedef reg_t<uint32_t, 0x40008360, rw_t<uint32_t>> r_TXBUF12__216;
            typedef reg_t<uint32_t, 0x40008364, rw_t<uint32_t>> r_TXBUF12__217;
            typedef reg_t<uint32_t, 0x40008368, rw_t<uint32_t>> r_TXBUF12__218;
            typedef reg_t<uint32_t, 0x4000836c, rw_t<uint32_t>> r_TXBUF12__219;
            typedef reg_t<uint32_t, 0x40008370, rw_t<uint32_t>> r_TXBUF12__220;
            typedef reg_t<uint32_t, 0x40008374, rw_t<uint32_t>> r_TXBUF12__221;
            typedef reg_t<uint32_t, 0x40008378, rw_t<uint32_t>> r_TXBUF12__222;
            typedef reg_t<uint32_t, 0x4000837c, rw_t<uint32_t>> r_TXBUF12__223;
            typedef reg_t<uint32_t, 0x40008380, rw_t<uint32_t>> r_TXBUF12__224;
            typedef reg_t<uint32_t, 0x40008384, rw_t<uint32_t>> r_TXBUF12__225;
            typedef reg_t<uint32_t, 0x40008388, rw_t<uint32_t>> r_TXBUF12__226;
            typedef reg_t<uint32_t, 0x4000838c, rw_t<uint32_t>> r_TXBUF12__227;
            typedef reg_t<uint32_t, 0x40008390, rw_t<uint32_t>> r_TXBUF12__228;
            typedef reg_t<uint32_t, 0x40008394, rw_t<uint32_t>> r_TXBUF12__229;
            typedef reg_t<uint32_t, 0x40008398, rw_t<uint32_t>> r_TXBUF12__230;
            typedef reg_t<uint32_t, 0x4000839c, rw_t<uint32_t>> r_TXBUF12__231;
            typedef reg_t<uint32_t, 0x400083a0, rw_t<uint32_t>> r_TXBUF12__232;
            typedef reg_t<uint32_t, 0x400083a4, rw_t<uint32_t>> r_TXBUF12__233;
            typedef reg_t<uint32_t, 0x400083a8, rw_t<uint32_t>> r_TXBUF12__234;
            typedef reg_t<uint32_t, 0x400083ac, rw_t<uint32_t>> r_TXBUF12__235;
            typedef reg_t<uint32_t, 0x400083b0, rw_t<uint32_t>> r_TXBUF12__236;
            typedef reg_t<uint32_t, 0x400083b4, rw_t<uint32_t>> r_TXBUF12__237;
            typedef reg_t<uint32_t, 0x400083b8, rw_t<uint32_t>> r_TXBUF12__238;
            typedef reg_t<uint32_t, 0x400083bc, rw_t<uint32_t>> r_TXBUF12__239;
            typedef reg_t<uint32_t, 0x400083c0, rw_t<uint32_t>> r_TXBUF12__240;
            typedef reg_t<uint32_t, 0x400083c4, rw_t<uint32_t>> r_TXBUF12__241;
            typedef reg_t<uint32_t, 0x400083c8, rw_t<uint32_t>> r_TXBUF12__242;
            typedef reg_t<uint32_t, 0x400083cc, rw_t<uint32_t>> r_TXBUF12__243;
            typedef reg_t<uint32_t, 0x400083d0, rw_t<uint32_t>> r_TXBUF12__244;
            typedef reg_t<uint32_t, 0x400083d4, rw_t<uint32_t>> r_TXBUF12__245;
            typedef reg_t<uint32_t, 0x400083d8, rw_t<uint32_t>> r_TXBUF12__246;
            typedef reg_t<uint32_t, 0x400083dc, rw_t<uint32_t>> r_TXBUF12__247;
            typedef reg_t<uint32_t, 0x400083e0, rw_t<uint32_t>> r_TXBUF12__248;
            typedef reg_t<uint32_t, 0x400083e4, rw_t<uint32_t>> r_TXBUF12__249;
            typedef reg_t<uint32_t, 0x400083e8, rw_t<uint32_t>> r_TXBUF12__250;
            typedef reg_t<uint32_t, 0x400083ec, rw_t<uint32_t>> r_TXBUF12__251;
            typedef reg_t<uint32_t, 0x400083f0, rw_t<uint32_t>> r_TXBUF12__252;
            typedef reg_t<uint32_t, 0x400083f4, rw_t<uint32_t>> r_TXBUF12__253;
            typedef reg_t<uint32_t, 0x400083f8, rw_t<uint32_t>> r_TXBUF12__254;
            typedef reg_t<uint32_t, 0x400083fc, rw_t<uint32_t>> r_TXBUF12__255;
        } // end of TXBUF12_[%s]
        namespace TXBUF13_ {
            // TXBUF13_ register
            typedef reg_t<uint32_t, 0x40008400, rw_t<uint32_t>> r_TXBUF13__0;
            typedef reg_t<uint32_t, 0x40008404, rw_t<uint32_t>> r_TXBUF13__1;
            typedef reg_t<uint32_t, 0x40008408, rw_t<uint32_t>> r_TXBUF13__2;
            typedef reg_t<uint32_t, 0x4000840c, rw_t<uint32_t>> r_TXBUF13__3;
            typedef reg_t<uint32_t, 0x40008410, rw_t<uint32_t>> r_TXBUF13__4;
            typedef reg_t<uint32_t, 0x40008414, rw_t<uint32_t>> r_TXBUF13__5;
            typedef reg_t<uint32_t, 0x40008418, rw_t<uint32_t>> r_TXBUF13__6;
            typedef reg_t<uint32_t, 0x4000841c, rw_t<uint32_t>> r_TXBUF13__7;
            typedef reg_t<uint32_t, 0x40008420, rw_t<uint32_t>> r_TXBUF13__8;
            typedef reg_t<uint32_t, 0x40008424, rw_t<uint32_t>> r_TXBUF13__9;
            typedef reg_t<uint32_t, 0x40008428, rw_t<uint32_t>> r_TXBUF13__10;
            typedef reg_t<uint32_t, 0x4000842c, rw_t<uint32_t>> r_TXBUF13__11;
            typedef reg_t<uint32_t, 0x40008430, rw_t<uint32_t>> r_TXBUF13__12;
            typedef reg_t<uint32_t, 0x40008434, rw_t<uint32_t>> r_TXBUF13__13;
            typedef reg_t<uint32_t, 0x40008438, rw_t<uint32_t>> r_TXBUF13__14;
            typedef reg_t<uint32_t, 0x4000843c, rw_t<uint32_t>> r_TXBUF13__15;
            typedef reg_t<uint32_t, 0x40008440, rw_t<uint32_t>> r_TXBUF13__16;
            typedef reg_t<uint32_t, 0x40008444, rw_t<uint32_t>> r_TXBUF13__17;
            typedef reg_t<uint32_t, 0x40008448, rw_t<uint32_t>> r_TXBUF13__18;
            typedef reg_t<uint32_t, 0x4000844c, rw_t<uint32_t>> r_TXBUF13__19;
            typedef reg_t<uint32_t, 0x40008450, rw_t<uint32_t>> r_TXBUF13__20;
            typedef reg_t<uint32_t, 0x40008454, rw_t<uint32_t>> r_TXBUF13__21;
            typedef reg_t<uint32_t, 0x40008458, rw_t<uint32_t>> r_TXBUF13__22;
            typedef reg_t<uint32_t, 0x4000845c, rw_t<uint32_t>> r_TXBUF13__23;
            typedef reg_t<uint32_t, 0x40008460, rw_t<uint32_t>> r_TXBUF13__24;
            typedef reg_t<uint32_t, 0x40008464, rw_t<uint32_t>> r_TXBUF13__25;
            typedef reg_t<uint32_t, 0x40008468, rw_t<uint32_t>> r_TXBUF13__26;
            typedef reg_t<uint32_t, 0x4000846c, rw_t<uint32_t>> r_TXBUF13__27;
            typedef reg_t<uint32_t, 0x40008470, rw_t<uint32_t>> r_TXBUF13__28;
            typedef reg_t<uint32_t, 0x40008474, rw_t<uint32_t>> r_TXBUF13__29;
            typedef reg_t<uint32_t, 0x40008478, rw_t<uint32_t>> r_TXBUF13__30;
            typedef reg_t<uint32_t, 0x4000847c, rw_t<uint32_t>> r_TXBUF13__31;
            typedef reg_t<uint32_t, 0x40008480, rw_t<uint32_t>> r_TXBUF13__32;
            typedef reg_t<uint32_t, 0x40008484, rw_t<uint32_t>> r_TXBUF13__33;
            typedef reg_t<uint32_t, 0x40008488, rw_t<uint32_t>> r_TXBUF13__34;
            typedef reg_t<uint32_t, 0x4000848c, rw_t<uint32_t>> r_TXBUF13__35;
            typedef reg_t<uint32_t, 0x40008490, rw_t<uint32_t>> r_TXBUF13__36;
            typedef reg_t<uint32_t, 0x40008494, rw_t<uint32_t>> r_TXBUF13__37;
            typedef reg_t<uint32_t, 0x40008498, rw_t<uint32_t>> r_TXBUF13__38;
            typedef reg_t<uint32_t, 0x4000849c, rw_t<uint32_t>> r_TXBUF13__39;
            typedef reg_t<uint32_t, 0x400084a0, rw_t<uint32_t>> r_TXBUF13__40;
            typedef reg_t<uint32_t, 0x400084a4, rw_t<uint32_t>> r_TXBUF13__41;
            typedef reg_t<uint32_t, 0x400084a8, rw_t<uint32_t>> r_TXBUF13__42;
            typedef reg_t<uint32_t, 0x400084ac, rw_t<uint32_t>> r_TXBUF13__43;
            typedef reg_t<uint32_t, 0x400084b0, rw_t<uint32_t>> r_TXBUF13__44;
            typedef reg_t<uint32_t, 0x400084b4, rw_t<uint32_t>> r_TXBUF13__45;
            typedef reg_t<uint32_t, 0x400084b8, rw_t<uint32_t>> r_TXBUF13__46;
            typedef reg_t<uint32_t, 0x400084bc, rw_t<uint32_t>> r_TXBUF13__47;
            typedef reg_t<uint32_t, 0x400084c0, rw_t<uint32_t>> r_TXBUF13__48;
            typedef reg_t<uint32_t, 0x400084c4, rw_t<uint32_t>> r_TXBUF13__49;
            typedef reg_t<uint32_t, 0x400084c8, rw_t<uint32_t>> r_TXBUF13__50;
            typedef reg_t<uint32_t, 0x400084cc, rw_t<uint32_t>> r_TXBUF13__51;
            typedef reg_t<uint32_t, 0x400084d0, rw_t<uint32_t>> r_TXBUF13__52;
            typedef reg_t<uint32_t, 0x400084d4, rw_t<uint32_t>> r_TXBUF13__53;
            typedef reg_t<uint32_t, 0x400084d8, rw_t<uint32_t>> r_TXBUF13__54;
            typedef reg_t<uint32_t, 0x400084dc, rw_t<uint32_t>> r_TXBUF13__55;
            typedef reg_t<uint32_t, 0x400084e0, rw_t<uint32_t>> r_TXBUF13__56;
            typedef reg_t<uint32_t, 0x400084e4, rw_t<uint32_t>> r_TXBUF13__57;
            typedef reg_t<uint32_t, 0x400084e8, rw_t<uint32_t>> r_TXBUF13__58;
            typedef reg_t<uint32_t, 0x400084ec, rw_t<uint32_t>> r_TXBUF13__59;
            typedef reg_t<uint32_t, 0x400084f0, rw_t<uint32_t>> r_TXBUF13__60;
            typedef reg_t<uint32_t, 0x400084f4, rw_t<uint32_t>> r_TXBUF13__61;
            typedef reg_t<uint32_t, 0x400084f8, rw_t<uint32_t>> r_TXBUF13__62;
            typedef reg_t<uint32_t, 0x400084fc, rw_t<uint32_t>> r_TXBUF13__63;
            typedef reg_t<uint32_t, 0x40008500, rw_t<uint32_t>> r_TXBUF13__64;
            typedef reg_t<uint32_t, 0x40008504, rw_t<uint32_t>> r_TXBUF13__65;
            typedef reg_t<uint32_t, 0x40008508, rw_t<uint32_t>> r_TXBUF13__66;
            typedef reg_t<uint32_t, 0x4000850c, rw_t<uint32_t>> r_TXBUF13__67;
            typedef reg_t<uint32_t, 0x40008510, rw_t<uint32_t>> r_TXBUF13__68;
            typedef reg_t<uint32_t, 0x40008514, rw_t<uint32_t>> r_TXBUF13__69;
            typedef reg_t<uint32_t, 0x40008518, rw_t<uint32_t>> r_TXBUF13__70;
            typedef reg_t<uint32_t, 0x4000851c, rw_t<uint32_t>> r_TXBUF13__71;
            typedef reg_t<uint32_t, 0x40008520, rw_t<uint32_t>> r_TXBUF13__72;
            typedef reg_t<uint32_t, 0x40008524, rw_t<uint32_t>> r_TXBUF13__73;
            typedef reg_t<uint32_t, 0x40008528, rw_t<uint32_t>> r_TXBUF13__74;
            typedef reg_t<uint32_t, 0x4000852c, rw_t<uint32_t>> r_TXBUF13__75;
            typedef reg_t<uint32_t, 0x40008530, rw_t<uint32_t>> r_TXBUF13__76;
            typedef reg_t<uint32_t, 0x40008534, rw_t<uint32_t>> r_TXBUF13__77;
            typedef reg_t<uint32_t, 0x40008538, rw_t<uint32_t>> r_TXBUF13__78;
            typedef reg_t<uint32_t, 0x4000853c, rw_t<uint32_t>> r_TXBUF13__79;
            typedef reg_t<uint32_t, 0x40008540, rw_t<uint32_t>> r_TXBUF13__80;
            typedef reg_t<uint32_t, 0x40008544, rw_t<uint32_t>> r_TXBUF13__81;
            typedef reg_t<uint32_t, 0x40008548, rw_t<uint32_t>> r_TXBUF13__82;
            typedef reg_t<uint32_t, 0x4000854c, rw_t<uint32_t>> r_TXBUF13__83;
            typedef reg_t<uint32_t, 0x40008550, rw_t<uint32_t>> r_TXBUF13__84;
            typedef reg_t<uint32_t, 0x40008554, rw_t<uint32_t>> r_TXBUF13__85;
            typedef reg_t<uint32_t, 0x40008558, rw_t<uint32_t>> r_TXBUF13__86;
            typedef reg_t<uint32_t, 0x4000855c, rw_t<uint32_t>> r_TXBUF13__87;
            typedef reg_t<uint32_t, 0x40008560, rw_t<uint32_t>> r_TXBUF13__88;
            typedef reg_t<uint32_t, 0x40008564, rw_t<uint32_t>> r_TXBUF13__89;
            typedef reg_t<uint32_t, 0x40008568, rw_t<uint32_t>> r_TXBUF13__90;
            typedef reg_t<uint32_t, 0x4000856c, rw_t<uint32_t>> r_TXBUF13__91;
            typedef reg_t<uint32_t, 0x40008570, rw_t<uint32_t>> r_TXBUF13__92;
            typedef reg_t<uint32_t, 0x40008574, rw_t<uint32_t>> r_TXBUF13__93;
            typedef reg_t<uint32_t, 0x40008578, rw_t<uint32_t>> r_TXBUF13__94;
            typedef reg_t<uint32_t, 0x4000857c, rw_t<uint32_t>> r_TXBUF13__95;
            typedef reg_t<uint32_t, 0x40008580, rw_t<uint32_t>> r_TXBUF13__96;
            typedef reg_t<uint32_t, 0x40008584, rw_t<uint32_t>> r_TXBUF13__97;
            typedef reg_t<uint32_t, 0x40008588, rw_t<uint32_t>> r_TXBUF13__98;
            typedef reg_t<uint32_t, 0x4000858c, rw_t<uint32_t>> r_TXBUF13__99;
            typedef reg_t<uint32_t, 0x40008590, rw_t<uint32_t>> r_TXBUF13__100;
            typedef reg_t<uint32_t, 0x40008594, rw_t<uint32_t>> r_TXBUF13__101;
            typedef reg_t<uint32_t, 0x40008598, rw_t<uint32_t>> r_TXBUF13__102;
            typedef reg_t<uint32_t, 0x4000859c, rw_t<uint32_t>> r_TXBUF13__103;
            typedef reg_t<uint32_t, 0x400085a0, rw_t<uint32_t>> r_TXBUF13__104;
            typedef reg_t<uint32_t, 0x400085a4, rw_t<uint32_t>> r_TXBUF13__105;
            typedef reg_t<uint32_t, 0x400085a8, rw_t<uint32_t>> r_TXBUF13__106;
            typedef reg_t<uint32_t, 0x400085ac, rw_t<uint32_t>> r_TXBUF13__107;
            typedef reg_t<uint32_t, 0x400085b0, rw_t<uint32_t>> r_TXBUF13__108;
            typedef reg_t<uint32_t, 0x400085b4, rw_t<uint32_t>> r_TXBUF13__109;
            typedef reg_t<uint32_t, 0x400085b8, rw_t<uint32_t>> r_TXBUF13__110;
            typedef reg_t<uint32_t, 0x400085bc, rw_t<uint32_t>> r_TXBUF13__111;
            typedef reg_t<uint32_t, 0x400085c0, rw_t<uint32_t>> r_TXBUF13__112;
            typedef reg_t<uint32_t, 0x400085c4, rw_t<uint32_t>> r_TXBUF13__113;
            typedef reg_t<uint32_t, 0x400085c8, rw_t<uint32_t>> r_TXBUF13__114;
            typedef reg_t<uint32_t, 0x400085cc, rw_t<uint32_t>> r_TXBUF13__115;
            typedef reg_t<uint32_t, 0x400085d0, rw_t<uint32_t>> r_TXBUF13__116;
            typedef reg_t<uint32_t, 0x400085d4, rw_t<uint32_t>> r_TXBUF13__117;
            typedef reg_t<uint32_t, 0x400085d8, rw_t<uint32_t>> r_TXBUF13__118;
            typedef reg_t<uint32_t, 0x400085dc, rw_t<uint32_t>> r_TXBUF13__119;
            typedef reg_t<uint32_t, 0x400085e0, rw_t<uint32_t>> r_TXBUF13__120;
            typedef reg_t<uint32_t, 0x400085e4, rw_t<uint32_t>> r_TXBUF13__121;
            typedef reg_t<uint32_t, 0x400085e8, rw_t<uint32_t>> r_TXBUF13__122;
            typedef reg_t<uint32_t, 0x400085ec, rw_t<uint32_t>> r_TXBUF13__123;
            typedef reg_t<uint32_t, 0x400085f0, rw_t<uint32_t>> r_TXBUF13__124;
            typedef reg_t<uint32_t, 0x400085f4, rw_t<uint32_t>> r_TXBUF13__125;
            typedef reg_t<uint32_t, 0x400085f8, rw_t<uint32_t>> r_TXBUF13__126;
            typedef reg_t<uint32_t, 0x400085fc, rw_t<uint32_t>> r_TXBUF13__127;
            typedef reg_t<uint32_t, 0x40008600, rw_t<uint32_t>> r_TXBUF13__128;
            typedef reg_t<uint32_t, 0x40008604, rw_t<uint32_t>> r_TXBUF13__129;
            typedef reg_t<uint32_t, 0x40008608, rw_t<uint32_t>> r_TXBUF13__130;
            typedef reg_t<uint32_t, 0x4000860c, rw_t<uint32_t>> r_TXBUF13__131;
            typedef reg_t<uint32_t, 0x40008610, rw_t<uint32_t>> r_TXBUF13__132;
            typedef reg_t<uint32_t, 0x40008614, rw_t<uint32_t>> r_TXBUF13__133;
            typedef reg_t<uint32_t, 0x40008618, rw_t<uint32_t>> r_TXBUF13__134;
            typedef reg_t<uint32_t, 0x4000861c, rw_t<uint32_t>> r_TXBUF13__135;
            typedef reg_t<uint32_t, 0x40008620, rw_t<uint32_t>> r_TXBUF13__136;
            typedef reg_t<uint32_t, 0x40008624, rw_t<uint32_t>> r_TXBUF13__137;
            typedef reg_t<uint32_t, 0x40008628, rw_t<uint32_t>> r_TXBUF13__138;
            typedef reg_t<uint32_t, 0x4000862c, rw_t<uint32_t>> r_TXBUF13__139;
            typedef reg_t<uint32_t, 0x40008630, rw_t<uint32_t>> r_TXBUF13__140;
            typedef reg_t<uint32_t, 0x40008634, rw_t<uint32_t>> r_TXBUF13__141;
            typedef reg_t<uint32_t, 0x40008638, rw_t<uint32_t>> r_TXBUF13__142;
            typedef reg_t<uint32_t, 0x4000863c, rw_t<uint32_t>> r_TXBUF13__143;
            typedef reg_t<uint32_t, 0x40008640, rw_t<uint32_t>> r_TXBUF13__144;
            typedef reg_t<uint32_t, 0x40008644, rw_t<uint32_t>> r_TXBUF13__145;
            typedef reg_t<uint32_t, 0x40008648, rw_t<uint32_t>> r_TXBUF13__146;
            typedef reg_t<uint32_t, 0x4000864c, rw_t<uint32_t>> r_TXBUF13__147;
            typedef reg_t<uint32_t, 0x40008650, rw_t<uint32_t>> r_TXBUF13__148;
            typedef reg_t<uint32_t, 0x40008654, rw_t<uint32_t>> r_TXBUF13__149;
            typedef reg_t<uint32_t, 0x40008658, rw_t<uint32_t>> r_TXBUF13__150;
            typedef reg_t<uint32_t, 0x4000865c, rw_t<uint32_t>> r_TXBUF13__151;
            typedef reg_t<uint32_t, 0x40008660, rw_t<uint32_t>> r_TXBUF13__152;
            typedef reg_t<uint32_t, 0x40008664, rw_t<uint32_t>> r_TXBUF13__153;
            typedef reg_t<uint32_t, 0x40008668, rw_t<uint32_t>> r_TXBUF13__154;
            typedef reg_t<uint32_t, 0x4000866c, rw_t<uint32_t>> r_TXBUF13__155;
            typedef reg_t<uint32_t, 0x40008670, rw_t<uint32_t>> r_TXBUF13__156;
            typedef reg_t<uint32_t, 0x40008674, rw_t<uint32_t>> r_TXBUF13__157;
            typedef reg_t<uint32_t, 0x40008678, rw_t<uint32_t>> r_TXBUF13__158;
            typedef reg_t<uint32_t, 0x4000867c, rw_t<uint32_t>> r_TXBUF13__159;
            typedef reg_t<uint32_t, 0x40008680, rw_t<uint32_t>> r_TXBUF13__160;
            typedef reg_t<uint32_t, 0x40008684, rw_t<uint32_t>> r_TXBUF13__161;
            typedef reg_t<uint32_t, 0x40008688, rw_t<uint32_t>> r_TXBUF13__162;
            typedef reg_t<uint32_t, 0x4000868c, rw_t<uint32_t>> r_TXBUF13__163;
            typedef reg_t<uint32_t, 0x40008690, rw_t<uint32_t>> r_TXBUF13__164;
            typedef reg_t<uint32_t, 0x40008694, rw_t<uint32_t>> r_TXBUF13__165;
            typedef reg_t<uint32_t, 0x40008698, rw_t<uint32_t>> r_TXBUF13__166;
            typedef reg_t<uint32_t, 0x4000869c, rw_t<uint32_t>> r_TXBUF13__167;
            typedef reg_t<uint32_t, 0x400086a0, rw_t<uint32_t>> r_TXBUF13__168;
            typedef reg_t<uint32_t, 0x400086a4, rw_t<uint32_t>> r_TXBUF13__169;
            typedef reg_t<uint32_t, 0x400086a8, rw_t<uint32_t>> r_TXBUF13__170;
            typedef reg_t<uint32_t, 0x400086ac, rw_t<uint32_t>> r_TXBUF13__171;
            typedef reg_t<uint32_t, 0x400086b0, rw_t<uint32_t>> r_TXBUF13__172;
            typedef reg_t<uint32_t, 0x400086b4, rw_t<uint32_t>> r_TXBUF13__173;
            typedef reg_t<uint32_t, 0x400086b8, rw_t<uint32_t>> r_TXBUF13__174;
            typedef reg_t<uint32_t, 0x400086bc, rw_t<uint32_t>> r_TXBUF13__175;
            typedef reg_t<uint32_t, 0x400086c0, rw_t<uint32_t>> r_TXBUF13__176;
            typedef reg_t<uint32_t, 0x400086c4, rw_t<uint32_t>> r_TXBUF13__177;
            typedef reg_t<uint32_t, 0x400086c8, rw_t<uint32_t>> r_TXBUF13__178;
            typedef reg_t<uint32_t, 0x400086cc, rw_t<uint32_t>> r_TXBUF13__179;
            typedef reg_t<uint32_t, 0x400086d0, rw_t<uint32_t>> r_TXBUF13__180;
            typedef reg_t<uint32_t, 0x400086d4, rw_t<uint32_t>> r_TXBUF13__181;
            typedef reg_t<uint32_t, 0x400086d8, rw_t<uint32_t>> r_TXBUF13__182;
            typedef reg_t<uint32_t, 0x400086dc, rw_t<uint32_t>> r_TXBUF13__183;
            typedef reg_t<uint32_t, 0x400086e0, rw_t<uint32_t>> r_TXBUF13__184;
            typedef reg_t<uint32_t, 0x400086e4, rw_t<uint32_t>> r_TXBUF13__185;
            typedef reg_t<uint32_t, 0x400086e8, rw_t<uint32_t>> r_TXBUF13__186;
            typedef reg_t<uint32_t, 0x400086ec, rw_t<uint32_t>> r_TXBUF13__187;
            typedef reg_t<uint32_t, 0x400086f0, rw_t<uint32_t>> r_TXBUF13__188;
            typedef reg_t<uint32_t, 0x400086f4, rw_t<uint32_t>> r_TXBUF13__189;
            typedef reg_t<uint32_t, 0x400086f8, rw_t<uint32_t>> r_TXBUF13__190;
            typedef reg_t<uint32_t, 0x400086fc, rw_t<uint32_t>> r_TXBUF13__191;
            typedef reg_t<uint32_t, 0x40008700, rw_t<uint32_t>> r_TXBUF13__192;
            typedef reg_t<uint32_t, 0x40008704, rw_t<uint32_t>> r_TXBUF13__193;
            typedef reg_t<uint32_t, 0x40008708, rw_t<uint32_t>> r_TXBUF13__194;
            typedef reg_t<uint32_t, 0x4000870c, rw_t<uint32_t>> r_TXBUF13__195;
            typedef reg_t<uint32_t, 0x40008710, rw_t<uint32_t>> r_TXBUF13__196;
            typedef reg_t<uint32_t, 0x40008714, rw_t<uint32_t>> r_TXBUF13__197;
            typedef reg_t<uint32_t, 0x40008718, rw_t<uint32_t>> r_TXBUF13__198;
            typedef reg_t<uint32_t, 0x4000871c, rw_t<uint32_t>> r_TXBUF13__199;
            typedef reg_t<uint32_t, 0x40008720, rw_t<uint32_t>> r_TXBUF13__200;
            typedef reg_t<uint32_t, 0x40008724, rw_t<uint32_t>> r_TXBUF13__201;
            typedef reg_t<uint32_t, 0x40008728, rw_t<uint32_t>> r_TXBUF13__202;
            typedef reg_t<uint32_t, 0x4000872c, rw_t<uint32_t>> r_TXBUF13__203;
            typedef reg_t<uint32_t, 0x40008730, rw_t<uint32_t>> r_TXBUF13__204;
            typedef reg_t<uint32_t, 0x40008734, rw_t<uint32_t>> r_TXBUF13__205;
            typedef reg_t<uint32_t, 0x40008738, rw_t<uint32_t>> r_TXBUF13__206;
            typedef reg_t<uint32_t, 0x4000873c, rw_t<uint32_t>> r_TXBUF13__207;
            typedef reg_t<uint32_t, 0x40008740, rw_t<uint32_t>> r_TXBUF13__208;
            typedef reg_t<uint32_t, 0x40008744, rw_t<uint32_t>> r_TXBUF13__209;
            typedef reg_t<uint32_t, 0x40008748, rw_t<uint32_t>> r_TXBUF13__210;
            typedef reg_t<uint32_t, 0x4000874c, rw_t<uint32_t>> r_TXBUF13__211;
            typedef reg_t<uint32_t, 0x40008750, rw_t<uint32_t>> r_TXBUF13__212;
            typedef reg_t<uint32_t, 0x40008754, rw_t<uint32_t>> r_TXBUF13__213;
            typedef reg_t<uint32_t, 0x40008758, rw_t<uint32_t>> r_TXBUF13__214;
            typedef reg_t<uint32_t, 0x4000875c, rw_t<uint32_t>> r_TXBUF13__215;
            typedef reg_t<uint32_t, 0x40008760, rw_t<uint32_t>> r_TXBUF13__216;
            typedef reg_t<uint32_t, 0x40008764, rw_t<uint32_t>> r_TXBUF13__217;
            typedef reg_t<uint32_t, 0x40008768, rw_t<uint32_t>> r_TXBUF13__218;
            typedef reg_t<uint32_t, 0x4000876c, rw_t<uint32_t>> r_TXBUF13__219;
            typedef reg_t<uint32_t, 0x40008770, rw_t<uint32_t>> r_TXBUF13__220;
            typedef reg_t<uint32_t, 0x40008774, rw_t<uint32_t>> r_TXBUF13__221;
            typedef reg_t<uint32_t, 0x40008778, rw_t<uint32_t>> r_TXBUF13__222;
            typedef reg_t<uint32_t, 0x4000877c, rw_t<uint32_t>> r_TXBUF13__223;
            typedef reg_t<uint32_t, 0x40008780, rw_t<uint32_t>> r_TXBUF13__224;
            typedef reg_t<uint32_t, 0x40008784, rw_t<uint32_t>> r_TXBUF13__225;
            typedef reg_t<uint32_t, 0x40008788, rw_t<uint32_t>> r_TXBUF13__226;
            typedef reg_t<uint32_t, 0x4000878c, rw_t<uint32_t>> r_TXBUF13__227;
            typedef reg_t<uint32_t, 0x40008790, rw_t<uint32_t>> r_TXBUF13__228;
            typedef reg_t<uint32_t, 0x40008794, rw_t<uint32_t>> r_TXBUF13__229;
            typedef reg_t<uint32_t, 0x40008798, rw_t<uint32_t>> r_TXBUF13__230;
            typedef reg_t<uint32_t, 0x4000879c, rw_t<uint32_t>> r_TXBUF13__231;
            typedef reg_t<uint32_t, 0x400087a0, rw_t<uint32_t>> r_TXBUF13__232;
            typedef reg_t<uint32_t, 0x400087a4, rw_t<uint32_t>> r_TXBUF13__233;
            typedef reg_t<uint32_t, 0x400087a8, rw_t<uint32_t>> r_TXBUF13__234;
            typedef reg_t<uint32_t, 0x400087ac, rw_t<uint32_t>> r_TXBUF13__235;
            typedef reg_t<uint32_t, 0x400087b0, rw_t<uint32_t>> r_TXBUF13__236;
            typedef reg_t<uint32_t, 0x400087b4, rw_t<uint32_t>> r_TXBUF13__237;
            typedef reg_t<uint32_t, 0x400087b8, rw_t<uint32_t>> r_TXBUF13__238;
            typedef reg_t<uint32_t, 0x400087bc, rw_t<uint32_t>> r_TXBUF13__239;
            typedef reg_t<uint32_t, 0x400087c0, rw_t<uint32_t>> r_TXBUF13__240;
            typedef reg_t<uint32_t, 0x400087c4, rw_t<uint32_t>> r_TXBUF13__241;
            typedef reg_t<uint32_t, 0x400087c8, rw_t<uint32_t>> r_TXBUF13__242;
            typedef reg_t<uint32_t, 0x400087cc, rw_t<uint32_t>> r_TXBUF13__243;
            typedef reg_t<uint32_t, 0x400087d0, rw_t<uint32_t>> r_TXBUF13__244;
            typedef reg_t<uint32_t, 0x400087d4, rw_t<uint32_t>> r_TXBUF13__245;
            typedef reg_t<uint32_t, 0x400087d8, rw_t<uint32_t>> r_TXBUF13__246;
            typedef reg_t<uint32_t, 0x400087dc, rw_t<uint32_t>> r_TXBUF13__247;
            typedef reg_t<uint32_t, 0x400087e0, rw_t<uint32_t>> r_TXBUF13__248;
            typedef reg_t<uint32_t, 0x400087e4, rw_t<uint32_t>> r_TXBUF13__249;
            typedef reg_t<uint32_t, 0x400087e8, rw_t<uint32_t>> r_TXBUF13__250;
            typedef reg_t<uint32_t, 0x400087ec, rw_t<uint32_t>> r_TXBUF13__251;
            typedef reg_t<uint32_t, 0x400087f0, rw_t<uint32_t>> r_TXBUF13__252;
            typedef reg_t<uint32_t, 0x400087f4, rw_t<uint32_t>> r_TXBUF13__253;
            typedef reg_t<uint32_t, 0x400087f8, rw_t<uint32_t>> r_TXBUF13__254;
            typedef reg_t<uint32_t, 0x400087fc, rw_t<uint32_t>> r_TXBUF13__255;
        } // end of TXBUF13_[%s]
        namespace TXBUF14_ {
            // TXBUF14_ register
            typedef reg_t<uint32_t, 0x40008800, rw_t<uint32_t>> r_TXBUF14__0;
            typedef reg_t<uint32_t, 0x40008804, rw_t<uint32_t>> r_TXBUF14__1;
            typedef reg_t<uint32_t, 0x40008808, rw_t<uint32_t>> r_TXBUF14__2;
            typedef reg_t<uint32_t, 0x4000880c, rw_t<uint32_t>> r_TXBUF14__3;
            typedef reg_t<uint32_t, 0x40008810, rw_t<uint32_t>> r_TXBUF14__4;
            typedef reg_t<uint32_t, 0x40008814, rw_t<uint32_t>> r_TXBUF14__5;
            typedef reg_t<uint32_t, 0x40008818, rw_t<uint32_t>> r_TXBUF14__6;
            typedef reg_t<uint32_t, 0x4000881c, rw_t<uint32_t>> r_TXBUF14__7;
            typedef reg_t<uint32_t, 0x40008820, rw_t<uint32_t>> r_TXBUF14__8;
            typedef reg_t<uint32_t, 0x40008824, rw_t<uint32_t>> r_TXBUF14__9;
            typedef reg_t<uint32_t, 0x40008828, rw_t<uint32_t>> r_TXBUF14__10;
            typedef reg_t<uint32_t, 0x4000882c, rw_t<uint32_t>> r_TXBUF14__11;
            typedef reg_t<uint32_t, 0x40008830, rw_t<uint32_t>> r_TXBUF14__12;
            typedef reg_t<uint32_t, 0x40008834, rw_t<uint32_t>> r_TXBUF14__13;
            typedef reg_t<uint32_t, 0x40008838, rw_t<uint32_t>> r_TXBUF14__14;
            typedef reg_t<uint32_t, 0x4000883c, rw_t<uint32_t>> r_TXBUF14__15;
            typedef reg_t<uint32_t, 0x40008840, rw_t<uint32_t>> r_TXBUF14__16;
            typedef reg_t<uint32_t, 0x40008844, rw_t<uint32_t>> r_TXBUF14__17;
            typedef reg_t<uint32_t, 0x40008848, rw_t<uint32_t>> r_TXBUF14__18;
            typedef reg_t<uint32_t, 0x4000884c, rw_t<uint32_t>> r_TXBUF14__19;
            typedef reg_t<uint32_t, 0x40008850, rw_t<uint32_t>> r_TXBUF14__20;
            typedef reg_t<uint32_t, 0x40008854, rw_t<uint32_t>> r_TXBUF14__21;
            typedef reg_t<uint32_t, 0x40008858, rw_t<uint32_t>> r_TXBUF14__22;
            typedef reg_t<uint32_t, 0x4000885c, rw_t<uint32_t>> r_TXBUF14__23;
            typedef reg_t<uint32_t, 0x40008860, rw_t<uint32_t>> r_TXBUF14__24;
            typedef reg_t<uint32_t, 0x40008864, rw_t<uint32_t>> r_TXBUF14__25;
            typedef reg_t<uint32_t, 0x40008868, rw_t<uint32_t>> r_TXBUF14__26;
            typedef reg_t<uint32_t, 0x4000886c, rw_t<uint32_t>> r_TXBUF14__27;
            typedef reg_t<uint32_t, 0x40008870, rw_t<uint32_t>> r_TXBUF14__28;
            typedef reg_t<uint32_t, 0x40008874, rw_t<uint32_t>> r_TXBUF14__29;
            typedef reg_t<uint32_t, 0x40008878, rw_t<uint32_t>> r_TXBUF14__30;
            typedef reg_t<uint32_t, 0x4000887c, rw_t<uint32_t>> r_TXBUF14__31;
            typedef reg_t<uint32_t, 0x40008880, rw_t<uint32_t>> r_TXBUF14__32;
            typedef reg_t<uint32_t, 0x40008884, rw_t<uint32_t>> r_TXBUF14__33;
            typedef reg_t<uint32_t, 0x40008888, rw_t<uint32_t>> r_TXBUF14__34;
            typedef reg_t<uint32_t, 0x4000888c, rw_t<uint32_t>> r_TXBUF14__35;
            typedef reg_t<uint32_t, 0x40008890, rw_t<uint32_t>> r_TXBUF14__36;
            typedef reg_t<uint32_t, 0x40008894, rw_t<uint32_t>> r_TXBUF14__37;
            typedef reg_t<uint32_t, 0x40008898, rw_t<uint32_t>> r_TXBUF14__38;
            typedef reg_t<uint32_t, 0x4000889c, rw_t<uint32_t>> r_TXBUF14__39;
            typedef reg_t<uint32_t, 0x400088a0, rw_t<uint32_t>> r_TXBUF14__40;
            typedef reg_t<uint32_t, 0x400088a4, rw_t<uint32_t>> r_TXBUF14__41;
            typedef reg_t<uint32_t, 0x400088a8, rw_t<uint32_t>> r_TXBUF14__42;
            typedef reg_t<uint32_t, 0x400088ac, rw_t<uint32_t>> r_TXBUF14__43;
            typedef reg_t<uint32_t, 0x400088b0, rw_t<uint32_t>> r_TXBUF14__44;
            typedef reg_t<uint32_t, 0x400088b4, rw_t<uint32_t>> r_TXBUF14__45;
            typedef reg_t<uint32_t, 0x400088b8, rw_t<uint32_t>> r_TXBUF14__46;
            typedef reg_t<uint32_t, 0x400088bc, rw_t<uint32_t>> r_TXBUF14__47;
            typedef reg_t<uint32_t, 0x400088c0, rw_t<uint32_t>> r_TXBUF14__48;
            typedef reg_t<uint32_t, 0x400088c4, rw_t<uint32_t>> r_TXBUF14__49;
            typedef reg_t<uint32_t, 0x400088c8, rw_t<uint32_t>> r_TXBUF14__50;
            typedef reg_t<uint32_t, 0x400088cc, rw_t<uint32_t>> r_TXBUF14__51;
            typedef reg_t<uint32_t, 0x400088d0, rw_t<uint32_t>> r_TXBUF14__52;
            typedef reg_t<uint32_t, 0x400088d4, rw_t<uint32_t>> r_TXBUF14__53;
            typedef reg_t<uint32_t, 0x400088d8, rw_t<uint32_t>> r_TXBUF14__54;
            typedef reg_t<uint32_t, 0x400088dc, rw_t<uint32_t>> r_TXBUF14__55;
            typedef reg_t<uint32_t, 0x400088e0, rw_t<uint32_t>> r_TXBUF14__56;
            typedef reg_t<uint32_t, 0x400088e4, rw_t<uint32_t>> r_TXBUF14__57;
            typedef reg_t<uint32_t, 0x400088e8, rw_t<uint32_t>> r_TXBUF14__58;
            typedef reg_t<uint32_t, 0x400088ec, rw_t<uint32_t>> r_TXBUF14__59;
            typedef reg_t<uint32_t, 0x400088f0, rw_t<uint32_t>> r_TXBUF14__60;
            typedef reg_t<uint32_t, 0x400088f4, rw_t<uint32_t>> r_TXBUF14__61;
            typedef reg_t<uint32_t, 0x400088f8, rw_t<uint32_t>> r_TXBUF14__62;
            typedef reg_t<uint32_t, 0x400088fc, rw_t<uint32_t>> r_TXBUF14__63;
            typedef reg_t<uint32_t, 0x40008900, rw_t<uint32_t>> r_TXBUF14__64;
            typedef reg_t<uint32_t, 0x40008904, rw_t<uint32_t>> r_TXBUF14__65;
            typedef reg_t<uint32_t, 0x40008908, rw_t<uint32_t>> r_TXBUF14__66;
            typedef reg_t<uint32_t, 0x4000890c, rw_t<uint32_t>> r_TXBUF14__67;
            typedef reg_t<uint32_t, 0x40008910, rw_t<uint32_t>> r_TXBUF14__68;
            typedef reg_t<uint32_t, 0x40008914, rw_t<uint32_t>> r_TXBUF14__69;
            typedef reg_t<uint32_t, 0x40008918, rw_t<uint32_t>> r_TXBUF14__70;
            typedef reg_t<uint32_t, 0x4000891c, rw_t<uint32_t>> r_TXBUF14__71;
            typedef reg_t<uint32_t, 0x40008920, rw_t<uint32_t>> r_TXBUF14__72;
            typedef reg_t<uint32_t, 0x40008924, rw_t<uint32_t>> r_TXBUF14__73;
            typedef reg_t<uint32_t, 0x40008928, rw_t<uint32_t>> r_TXBUF14__74;
            typedef reg_t<uint32_t, 0x4000892c, rw_t<uint32_t>> r_TXBUF14__75;
            typedef reg_t<uint32_t, 0x40008930, rw_t<uint32_t>> r_TXBUF14__76;
            typedef reg_t<uint32_t, 0x40008934, rw_t<uint32_t>> r_TXBUF14__77;
            typedef reg_t<uint32_t, 0x40008938, rw_t<uint32_t>> r_TXBUF14__78;
            typedef reg_t<uint32_t, 0x4000893c, rw_t<uint32_t>> r_TXBUF14__79;
            typedef reg_t<uint32_t, 0x40008940, rw_t<uint32_t>> r_TXBUF14__80;
            typedef reg_t<uint32_t, 0x40008944, rw_t<uint32_t>> r_TXBUF14__81;
            typedef reg_t<uint32_t, 0x40008948, rw_t<uint32_t>> r_TXBUF14__82;
            typedef reg_t<uint32_t, 0x4000894c, rw_t<uint32_t>> r_TXBUF14__83;
            typedef reg_t<uint32_t, 0x40008950, rw_t<uint32_t>> r_TXBUF14__84;
            typedef reg_t<uint32_t, 0x40008954, rw_t<uint32_t>> r_TXBUF14__85;
            typedef reg_t<uint32_t, 0x40008958, rw_t<uint32_t>> r_TXBUF14__86;
            typedef reg_t<uint32_t, 0x4000895c, rw_t<uint32_t>> r_TXBUF14__87;
            typedef reg_t<uint32_t, 0x40008960, rw_t<uint32_t>> r_TXBUF14__88;
            typedef reg_t<uint32_t, 0x40008964, rw_t<uint32_t>> r_TXBUF14__89;
            typedef reg_t<uint32_t, 0x40008968, rw_t<uint32_t>> r_TXBUF14__90;
            typedef reg_t<uint32_t, 0x4000896c, rw_t<uint32_t>> r_TXBUF14__91;
            typedef reg_t<uint32_t, 0x40008970, rw_t<uint32_t>> r_TXBUF14__92;
            typedef reg_t<uint32_t, 0x40008974, rw_t<uint32_t>> r_TXBUF14__93;
            typedef reg_t<uint32_t, 0x40008978, rw_t<uint32_t>> r_TXBUF14__94;
            typedef reg_t<uint32_t, 0x4000897c, rw_t<uint32_t>> r_TXBUF14__95;
            typedef reg_t<uint32_t, 0x40008980, rw_t<uint32_t>> r_TXBUF14__96;
            typedef reg_t<uint32_t, 0x40008984, rw_t<uint32_t>> r_TXBUF14__97;
            typedef reg_t<uint32_t, 0x40008988, rw_t<uint32_t>> r_TXBUF14__98;
            typedef reg_t<uint32_t, 0x4000898c, rw_t<uint32_t>> r_TXBUF14__99;
            typedef reg_t<uint32_t, 0x40008990, rw_t<uint32_t>> r_TXBUF14__100;
            typedef reg_t<uint32_t, 0x40008994, rw_t<uint32_t>> r_TXBUF14__101;
            typedef reg_t<uint32_t, 0x40008998, rw_t<uint32_t>> r_TXBUF14__102;
            typedef reg_t<uint32_t, 0x4000899c, rw_t<uint32_t>> r_TXBUF14__103;
            typedef reg_t<uint32_t, 0x400089a0, rw_t<uint32_t>> r_TXBUF14__104;
            typedef reg_t<uint32_t, 0x400089a4, rw_t<uint32_t>> r_TXBUF14__105;
            typedef reg_t<uint32_t, 0x400089a8, rw_t<uint32_t>> r_TXBUF14__106;
            typedef reg_t<uint32_t, 0x400089ac, rw_t<uint32_t>> r_TXBUF14__107;
            typedef reg_t<uint32_t, 0x400089b0, rw_t<uint32_t>> r_TXBUF14__108;
            typedef reg_t<uint32_t, 0x400089b4, rw_t<uint32_t>> r_TXBUF14__109;
            typedef reg_t<uint32_t, 0x400089b8, rw_t<uint32_t>> r_TXBUF14__110;
            typedef reg_t<uint32_t, 0x400089bc, rw_t<uint32_t>> r_TXBUF14__111;
            typedef reg_t<uint32_t, 0x400089c0, rw_t<uint32_t>> r_TXBUF14__112;
            typedef reg_t<uint32_t, 0x400089c4, rw_t<uint32_t>> r_TXBUF14__113;
            typedef reg_t<uint32_t, 0x400089c8, rw_t<uint32_t>> r_TXBUF14__114;
            typedef reg_t<uint32_t, 0x400089cc, rw_t<uint32_t>> r_TXBUF14__115;
            typedef reg_t<uint32_t, 0x400089d0, rw_t<uint32_t>> r_TXBUF14__116;
            typedef reg_t<uint32_t, 0x400089d4, rw_t<uint32_t>> r_TXBUF14__117;
            typedef reg_t<uint32_t, 0x400089d8, rw_t<uint32_t>> r_TXBUF14__118;
            typedef reg_t<uint32_t, 0x400089dc, rw_t<uint32_t>> r_TXBUF14__119;
            typedef reg_t<uint32_t, 0x400089e0, rw_t<uint32_t>> r_TXBUF14__120;
            typedef reg_t<uint32_t, 0x400089e4, rw_t<uint32_t>> r_TXBUF14__121;
            typedef reg_t<uint32_t, 0x400089e8, rw_t<uint32_t>> r_TXBUF14__122;
            typedef reg_t<uint32_t, 0x400089ec, rw_t<uint32_t>> r_TXBUF14__123;
            typedef reg_t<uint32_t, 0x400089f0, rw_t<uint32_t>> r_TXBUF14__124;
            typedef reg_t<uint32_t, 0x400089f4, rw_t<uint32_t>> r_TXBUF14__125;
            typedef reg_t<uint32_t, 0x400089f8, rw_t<uint32_t>> r_TXBUF14__126;
            typedef reg_t<uint32_t, 0x400089fc, rw_t<uint32_t>> r_TXBUF14__127;
            typedef reg_t<uint32_t, 0x40008a00, rw_t<uint32_t>> r_TXBUF14__128;
            typedef reg_t<uint32_t, 0x40008a04, rw_t<uint32_t>> r_TXBUF14__129;
            typedef reg_t<uint32_t, 0x40008a08, rw_t<uint32_t>> r_TXBUF14__130;
            typedef reg_t<uint32_t, 0x40008a0c, rw_t<uint32_t>> r_TXBUF14__131;
            typedef reg_t<uint32_t, 0x40008a10, rw_t<uint32_t>> r_TXBUF14__132;
            typedef reg_t<uint32_t, 0x40008a14, rw_t<uint32_t>> r_TXBUF14__133;
            typedef reg_t<uint32_t, 0x40008a18, rw_t<uint32_t>> r_TXBUF14__134;
            typedef reg_t<uint32_t, 0x40008a1c, rw_t<uint32_t>> r_TXBUF14__135;
            typedef reg_t<uint32_t, 0x40008a20, rw_t<uint32_t>> r_TXBUF14__136;
            typedef reg_t<uint32_t, 0x40008a24, rw_t<uint32_t>> r_TXBUF14__137;
            typedef reg_t<uint32_t, 0x40008a28, rw_t<uint32_t>> r_TXBUF14__138;
            typedef reg_t<uint32_t, 0x40008a2c, rw_t<uint32_t>> r_TXBUF14__139;
            typedef reg_t<uint32_t, 0x40008a30, rw_t<uint32_t>> r_TXBUF14__140;
            typedef reg_t<uint32_t, 0x40008a34, rw_t<uint32_t>> r_TXBUF14__141;
            typedef reg_t<uint32_t, 0x40008a38, rw_t<uint32_t>> r_TXBUF14__142;
            typedef reg_t<uint32_t, 0x40008a3c, rw_t<uint32_t>> r_TXBUF14__143;
            typedef reg_t<uint32_t, 0x40008a40, rw_t<uint32_t>> r_TXBUF14__144;
            typedef reg_t<uint32_t, 0x40008a44, rw_t<uint32_t>> r_TXBUF14__145;
            typedef reg_t<uint32_t, 0x40008a48, rw_t<uint32_t>> r_TXBUF14__146;
            typedef reg_t<uint32_t, 0x40008a4c, rw_t<uint32_t>> r_TXBUF14__147;
            typedef reg_t<uint32_t, 0x40008a50, rw_t<uint32_t>> r_TXBUF14__148;
            typedef reg_t<uint32_t, 0x40008a54, rw_t<uint32_t>> r_TXBUF14__149;
            typedef reg_t<uint32_t, 0x40008a58, rw_t<uint32_t>> r_TXBUF14__150;
            typedef reg_t<uint32_t, 0x40008a5c, rw_t<uint32_t>> r_TXBUF14__151;
            typedef reg_t<uint32_t, 0x40008a60, rw_t<uint32_t>> r_TXBUF14__152;
            typedef reg_t<uint32_t, 0x40008a64, rw_t<uint32_t>> r_TXBUF14__153;
            typedef reg_t<uint32_t, 0x40008a68, rw_t<uint32_t>> r_TXBUF14__154;
            typedef reg_t<uint32_t, 0x40008a6c, rw_t<uint32_t>> r_TXBUF14__155;
            typedef reg_t<uint32_t, 0x40008a70, rw_t<uint32_t>> r_TXBUF14__156;
            typedef reg_t<uint32_t, 0x40008a74, rw_t<uint32_t>> r_TXBUF14__157;
            typedef reg_t<uint32_t, 0x40008a78, rw_t<uint32_t>> r_TXBUF14__158;
            typedef reg_t<uint32_t, 0x40008a7c, rw_t<uint32_t>> r_TXBUF14__159;
            typedef reg_t<uint32_t, 0x40008a80, rw_t<uint32_t>> r_TXBUF14__160;
            typedef reg_t<uint32_t, 0x40008a84, rw_t<uint32_t>> r_TXBUF14__161;
            typedef reg_t<uint32_t, 0x40008a88, rw_t<uint32_t>> r_TXBUF14__162;
            typedef reg_t<uint32_t, 0x40008a8c, rw_t<uint32_t>> r_TXBUF14__163;
            typedef reg_t<uint32_t, 0x40008a90, rw_t<uint32_t>> r_TXBUF14__164;
            typedef reg_t<uint32_t, 0x40008a94, rw_t<uint32_t>> r_TXBUF14__165;
            typedef reg_t<uint32_t, 0x40008a98, rw_t<uint32_t>> r_TXBUF14__166;
            typedef reg_t<uint32_t, 0x40008a9c, rw_t<uint32_t>> r_TXBUF14__167;
            typedef reg_t<uint32_t, 0x40008aa0, rw_t<uint32_t>> r_TXBUF14__168;
            typedef reg_t<uint32_t, 0x40008aa4, rw_t<uint32_t>> r_TXBUF14__169;
            typedef reg_t<uint32_t, 0x40008aa8, rw_t<uint32_t>> r_TXBUF14__170;
            typedef reg_t<uint32_t, 0x40008aac, rw_t<uint32_t>> r_TXBUF14__171;
            typedef reg_t<uint32_t, 0x40008ab0, rw_t<uint32_t>> r_TXBUF14__172;
            typedef reg_t<uint32_t, 0x40008ab4, rw_t<uint32_t>> r_TXBUF14__173;
            typedef reg_t<uint32_t, 0x40008ab8, rw_t<uint32_t>> r_TXBUF14__174;
            typedef reg_t<uint32_t, 0x40008abc, rw_t<uint32_t>> r_TXBUF14__175;
            typedef reg_t<uint32_t, 0x40008ac0, rw_t<uint32_t>> r_TXBUF14__176;
            typedef reg_t<uint32_t, 0x40008ac4, rw_t<uint32_t>> r_TXBUF14__177;
            typedef reg_t<uint32_t, 0x40008ac8, rw_t<uint32_t>> r_TXBUF14__178;
            typedef reg_t<uint32_t, 0x40008acc, rw_t<uint32_t>> r_TXBUF14__179;
            typedef reg_t<uint32_t, 0x40008ad0, rw_t<uint32_t>> r_TXBUF14__180;
            typedef reg_t<uint32_t, 0x40008ad4, rw_t<uint32_t>> r_TXBUF14__181;
            typedef reg_t<uint32_t, 0x40008ad8, rw_t<uint32_t>> r_TXBUF14__182;
            typedef reg_t<uint32_t, 0x40008adc, rw_t<uint32_t>> r_TXBUF14__183;
            typedef reg_t<uint32_t, 0x40008ae0, rw_t<uint32_t>> r_TXBUF14__184;
            typedef reg_t<uint32_t, 0x40008ae4, rw_t<uint32_t>> r_TXBUF14__185;
            typedef reg_t<uint32_t, 0x40008ae8, rw_t<uint32_t>> r_TXBUF14__186;
            typedef reg_t<uint32_t, 0x40008aec, rw_t<uint32_t>> r_TXBUF14__187;
            typedef reg_t<uint32_t, 0x40008af0, rw_t<uint32_t>> r_TXBUF14__188;
            typedef reg_t<uint32_t, 0x40008af4, rw_t<uint32_t>> r_TXBUF14__189;
            typedef reg_t<uint32_t, 0x40008af8, rw_t<uint32_t>> r_TXBUF14__190;
            typedef reg_t<uint32_t, 0x40008afc, rw_t<uint32_t>> r_TXBUF14__191;
            typedef reg_t<uint32_t, 0x40008b00, rw_t<uint32_t>> r_TXBUF14__192;
            typedef reg_t<uint32_t, 0x40008b04, rw_t<uint32_t>> r_TXBUF14__193;
            typedef reg_t<uint32_t, 0x40008b08, rw_t<uint32_t>> r_TXBUF14__194;
            typedef reg_t<uint32_t, 0x40008b0c, rw_t<uint32_t>> r_TXBUF14__195;
            typedef reg_t<uint32_t, 0x40008b10, rw_t<uint32_t>> r_TXBUF14__196;
            typedef reg_t<uint32_t, 0x40008b14, rw_t<uint32_t>> r_TXBUF14__197;
            typedef reg_t<uint32_t, 0x40008b18, rw_t<uint32_t>> r_TXBUF14__198;
            typedef reg_t<uint32_t, 0x40008b1c, rw_t<uint32_t>> r_TXBUF14__199;
            typedef reg_t<uint32_t, 0x40008b20, rw_t<uint32_t>> r_TXBUF14__200;
            typedef reg_t<uint32_t, 0x40008b24, rw_t<uint32_t>> r_TXBUF14__201;
            typedef reg_t<uint32_t, 0x40008b28, rw_t<uint32_t>> r_TXBUF14__202;
            typedef reg_t<uint32_t, 0x40008b2c, rw_t<uint32_t>> r_TXBUF14__203;
            typedef reg_t<uint32_t, 0x40008b30, rw_t<uint32_t>> r_TXBUF14__204;
            typedef reg_t<uint32_t, 0x40008b34, rw_t<uint32_t>> r_TXBUF14__205;
            typedef reg_t<uint32_t, 0x40008b38, rw_t<uint32_t>> r_TXBUF14__206;
            typedef reg_t<uint32_t, 0x40008b3c, rw_t<uint32_t>> r_TXBUF14__207;
            typedef reg_t<uint32_t, 0x40008b40, rw_t<uint32_t>> r_TXBUF14__208;
            typedef reg_t<uint32_t, 0x40008b44, rw_t<uint32_t>> r_TXBUF14__209;
            typedef reg_t<uint32_t, 0x40008b48, rw_t<uint32_t>> r_TXBUF14__210;
            typedef reg_t<uint32_t, 0x40008b4c, rw_t<uint32_t>> r_TXBUF14__211;
            typedef reg_t<uint32_t, 0x40008b50, rw_t<uint32_t>> r_TXBUF14__212;
            typedef reg_t<uint32_t, 0x40008b54, rw_t<uint32_t>> r_TXBUF14__213;
            typedef reg_t<uint32_t, 0x40008b58, rw_t<uint32_t>> r_TXBUF14__214;
            typedef reg_t<uint32_t, 0x40008b5c, rw_t<uint32_t>> r_TXBUF14__215;
            typedef reg_t<uint32_t, 0x40008b60, rw_t<uint32_t>> r_TXBUF14__216;
            typedef reg_t<uint32_t, 0x40008b64, rw_t<uint32_t>> r_TXBUF14__217;
            typedef reg_t<uint32_t, 0x40008b68, rw_t<uint32_t>> r_TXBUF14__218;
            typedef reg_t<uint32_t, 0x40008b6c, rw_t<uint32_t>> r_TXBUF14__219;
            typedef reg_t<uint32_t, 0x40008b70, rw_t<uint32_t>> r_TXBUF14__220;
            typedef reg_t<uint32_t, 0x40008b74, rw_t<uint32_t>> r_TXBUF14__221;
            typedef reg_t<uint32_t, 0x40008b78, rw_t<uint32_t>> r_TXBUF14__222;
            typedef reg_t<uint32_t, 0x40008b7c, rw_t<uint32_t>> r_TXBUF14__223;
            typedef reg_t<uint32_t, 0x40008b80, rw_t<uint32_t>> r_TXBUF14__224;
            typedef reg_t<uint32_t, 0x40008b84, rw_t<uint32_t>> r_TXBUF14__225;
            typedef reg_t<uint32_t, 0x40008b88, rw_t<uint32_t>> r_TXBUF14__226;
            typedef reg_t<uint32_t, 0x40008b8c, rw_t<uint32_t>> r_TXBUF14__227;
            typedef reg_t<uint32_t, 0x40008b90, rw_t<uint32_t>> r_TXBUF14__228;
            typedef reg_t<uint32_t, 0x40008b94, rw_t<uint32_t>> r_TXBUF14__229;
            typedef reg_t<uint32_t, 0x40008b98, rw_t<uint32_t>> r_TXBUF14__230;
            typedef reg_t<uint32_t, 0x40008b9c, rw_t<uint32_t>> r_TXBUF14__231;
            typedef reg_t<uint32_t, 0x40008ba0, rw_t<uint32_t>> r_TXBUF14__232;
            typedef reg_t<uint32_t, 0x40008ba4, rw_t<uint32_t>> r_TXBUF14__233;
            typedef reg_t<uint32_t, 0x40008ba8, rw_t<uint32_t>> r_TXBUF14__234;
            typedef reg_t<uint32_t, 0x40008bac, rw_t<uint32_t>> r_TXBUF14__235;
            typedef reg_t<uint32_t, 0x40008bb0, rw_t<uint32_t>> r_TXBUF14__236;
            typedef reg_t<uint32_t, 0x40008bb4, rw_t<uint32_t>> r_TXBUF14__237;
            typedef reg_t<uint32_t, 0x40008bb8, rw_t<uint32_t>> r_TXBUF14__238;
            typedef reg_t<uint32_t, 0x40008bbc, rw_t<uint32_t>> r_TXBUF14__239;
            typedef reg_t<uint32_t, 0x40008bc0, rw_t<uint32_t>> r_TXBUF14__240;
            typedef reg_t<uint32_t, 0x40008bc4, rw_t<uint32_t>> r_TXBUF14__241;
            typedef reg_t<uint32_t, 0x40008bc8, rw_t<uint32_t>> r_TXBUF14__242;
            typedef reg_t<uint32_t, 0x40008bcc, rw_t<uint32_t>> r_TXBUF14__243;
            typedef reg_t<uint32_t, 0x40008bd0, rw_t<uint32_t>> r_TXBUF14__244;
            typedef reg_t<uint32_t, 0x40008bd4, rw_t<uint32_t>> r_TXBUF14__245;
            typedef reg_t<uint32_t, 0x40008bd8, rw_t<uint32_t>> r_TXBUF14__246;
            typedef reg_t<uint32_t, 0x40008bdc, rw_t<uint32_t>> r_TXBUF14__247;
            typedef reg_t<uint32_t, 0x40008be0, rw_t<uint32_t>> r_TXBUF14__248;
            typedef reg_t<uint32_t, 0x40008be4, rw_t<uint32_t>> r_TXBUF14__249;
            typedef reg_t<uint32_t, 0x40008be8, rw_t<uint32_t>> r_TXBUF14__250;
            typedef reg_t<uint32_t, 0x40008bec, rw_t<uint32_t>> r_TXBUF14__251;
            typedef reg_t<uint32_t, 0x40008bf0, rw_t<uint32_t>> r_TXBUF14__252;
            typedef reg_t<uint32_t, 0x40008bf4, rw_t<uint32_t>> r_TXBUF14__253;
            typedef reg_t<uint32_t, 0x40008bf8, rw_t<uint32_t>> r_TXBUF14__254;
            typedef reg_t<uint32_t, 0x40008bfc, rw_t<uint32_t>> r_TXBUF14__255;
        } // end of TXBUF14_[%s]
        namespace TXBUF15_ {
            // TXBUF15_ register
            typedef reg_t<uint32_t, 0x40008c00, rw_t<uint32_t>> r_TXBUF15__0;
            typedef reg_t<uint32_t, 0x40008c04, rw_t<uint32_t>> r_TXBUF15__1;
            typedef reg_t<uint32_t, 0x40008c08, rw_t<uint32_t>> r_TXBUF15__2;
            typedef reg_t<uint32_t, 0x40008c0c, rw_t<uint32_t>> r_TXBUF15__3;
            typedef reg_t<uint32_t, 0x40008c10, rw_t<uint32_t>> r_TXBUF15__4;
            typedef reg_t<uint32_t, 0x40008c14, rw_t<uint32_t>> r_TXBUF15__5;
            typedef reg_t<uint32_t, 0x40008c18, rw_t<uint32_t>> r_TXBUF15__6;
            typedef reg_t<uint32_t, 0x40008c1c, rw_t<uint32_t>> r_TXBUF15__7;
            typedef reg_t<uint32_t, 0x40008c20, rw_t<uint32_t>> r_TXBUF15__8;
            typedef reg_t<uint32_t, 0x40008c24, rw_t<uint32_t>> r_TXBUF15__9;
            typedef reg_t<uint32_t, 0x40008c28, rw_t<uint32_t>> r_TXBUF15__10;
            typedef reg_t<uint32_t, 0x40008c2c, rw_t<uint32_t>> r_TXBUF15__11;
            typedef reg_t<uint32_t, 0x40008c30, rw_t<uint32_t>> r_TXBUF15__12;
            typedef reg_t<uint32_t, 0x40008c34, rw_t<uint32_t>> r_TXBUF15__13;
            typedef reg_t<uint32_t, 0x40008c38, rw_t<uint32_t>> r_TXBUF15__14;
            typedef reg_t<uint32_t, 0x40008c3c, rw_t<uint32_t>> r_TXBUF15__15;
            typedef reg_t<uint32_t, 0x40008c40, rw_t<uint32_t>> r_TXBUF15__16;
            typedef reg_t<uint32_t, 0x40008c44, rw_t<uint32_t>> r_TXBUF15__17;
            typedef reg_t<uint32_t, 0x40008c48, rw_t<uint32_t>> r_TXBUF15__18;
            typedef reg_t<uint32_t, 0x40008c4c, rw_t<uint32_t>> r_TXBUF15__19;
            typedef reg_t<uint32_t, 0x40008c50, rw_t<uint32_t>> r_TXBUF15__20;
            typedef reg_t<uint32_t, 0x40008c54, rw_t<uint32_t>> r_TXBUF15__21;
            typedef reg_t<uint32_t, 0x40008c58, rw_t<uint32_t>> r_TXBUF15__22;
            typedef reg_t<uint32_t, 0x40008c5c, rw_t<uint32_t>> r_TXBUF15__23;
            typedef reg_t<uint32_t, 0x40008c60, rw_t<uint32_t>> r_TXBUF15__24;
            typedef reg_t<uint32_t, 0x40008c64, rw_t<uint32_t>> r_TXBUF15__25;
            typedef reg_t<uint32_t, 0x40008c68, rw_t<uint32_t>> r_TXBUF15__26;
            typedef reg_t<uint32_t, 0x40008c6c, rw_t<uint32_t>> r_TXBUF15__27;
            typedef reg_t<uint32_t, 0x40008c70, rw_t<uint32_t>> r_TXBUF15__28;
            typedef reg_t<uint32_t, 0x40008c74, rw_t<uint32_t>> r_TXBUF15__29;
            typedef reg_t<uint32_t, 0x40008c78, rw_t<uint32_t>> r_TXBUF15__30;
            typedef reg_t<uint32_t, 0x40008c7c, rw_t<uint32_t>> r_TXBUF15__31;
            typedef reg_t<uint32_t, 0x40008c80, rw_t<uint32_t>> r_TXBUF15__32;
            typedef reg_t<uint32_t, 0x40008c84, rw_t<uint32_t>> r_TXBUF15__33;
            typedef reg_t<uint32_t, 0x40008c88, rw_t<uint32_t>> r_TXBUF15__34;
            typedef reg_t<uint32_t, 0x40008c8c, rw_t<uint32_t>> r_TXBUF15__35;
            typedef reg_t<uint32_t, 0x40008c90, rw_t<uint32_t>> r_TXBUF15__36;
            typedef reg_t<uint32_t, 0x40008c94, rw_t<uint32_t>> r_TXBUF15__37;
            typedef reg_t<uint32_t, 0x40008c98, rw_t<uint32_t>> r_TXBUF15__38;
            typedef reg_t<uint32_t, 0x40008c9c, rw_t<uint32_t>> r_TXBUF15__39;
            typedef reg_t<uint32_t, 0x40008ca0, rw_t<uint32_t>> r_TXBUF15__40;
            typedef reg_t<uint32_t, 0x40008ca4, rw_t<uint32_t>> r_TXBUF15__41;
            typedef reg_t<uint32_t, 0x40008ca8, rw_t<uint32_t>> r_TXBUF15__42;
            typedef reg_t<uint32_t, 0x40008cac, rw_t<uint32_t>> r_TXBUF15__43;
            typedef reg_t<uint32_t, 0x40008cb0, rw_t<uint32_t>> r_TXBUF15__44;
            typedef reg_t<uint32_t, 0x40008cb4, rw_t<uint32_t>> r_TXBUF15__45;
            typedef reg_t<uint32_t, 0x40008cb8, rw_t<uint32_t>> r_TXBUF15__46;
            typedef reg_t<uint32_t, 0x40008cbc, rw_t<uint32_t>> r_TXBUF15__47;
            typedef reg_t<uint32_t, 0x40008cc0, rw_t<uint32_t>> r_TXBUF15__48;
            typedef reg_t<uint32_t, 0x40008cc4, rw_t<uint32_t>> r_TXBUF15__49;
            typedef reg_t<uint32_t, 0x40008cc8, rw_t<uint32_t>> r_TXBUF15__50;
            typedef reg_t<uint32_t, 0x40008ccc, rw_t<uint32_t>> r_TXBUF15__51;
            typedef reg_t<uint32_t, 0x40008cd0, rw_t<uint32_t>> r_TXBUF15__52;
            typedef reg_t<uint32_t, 0x40008cd4, rw_t<uint32_t>> r_TXBUF15__53;
            typedef reg_t<uint32_t, 0x40008cd8, rw_t<uint32_t>> r_TXBUF15__54;
            typedef reg_t<uint32_t, 0x40008cdc, rw_t<uint32_t>> r_TXBUF15__55;
            typedef reg_t<uint32_t, 0x40008ce0, rw_t<uint32_t>> r_TXBUF15__56;
            typedef reg_t<uint32_t, 0x40008ce4, rw_t<uint32_t>> r_TXBUF15__57;
            typedef reg_t<uint32_t, 0x40008ce8, rw_t<uint32_t>> r_TXBUF15__58;
            typedef reg_t<uint32_t, 0x40008cec, rw_t<uint32_t>> r_TXBUF15__59;
            typedef reg_t<uint32_t, 0x40008cf0, rw_t<uint32_t>> r_TXBUF15__60;
            typedef reg_t<uint32_t, 0x40008cf4, rw_t<uint32_t>> r_TXBUF15__61;
            typedef reg_t<uint32_t, 0x40008cf8, rw_t<uint32_t>> r_TXBUF15__62;
            typedef reg_t<uint32_t, 0x40008cfc, rw_t<uint32_t>> r_TXBUF15__63;
            typedef reg_t<uint32_t, 0x40008d00, rw_t<uint32_t>> r_TXBUF15__64;
            typedef reg_t<uint32_t, 0x40008d04, rw_t<uint32_t>> r_TXBUF15__65;
            typedef reg_t<uint32_t, 0x40008d08, rw_t<uint32_t>> r_TXBUF15__66;
            typedef reg_t<uint32_t, 0x40008d0c, rw_t<uint32_t>> r_TXBUF15__67;
            typedef reg_t<uint32_t, 0x40008d10, rw_t<uint32_t>> r_TXBUF15__68;
            typedef reg_t<uint32_t, 0x40008d14, rw_t<uint32_t>> r_TXBUF15__69;
            typedef reg_t<uint32_t, 0x40008d18, rw_t<uint32_t>> r_TXBUF15__70;
            typedef reg_t<uint32_t, 0x40008d1c, rw_t<uint32_t>> r_TXBUF15__71;
            typedef reg_t<uint32_t, 0x40008d20, rw_t<uint32_t>> r_TXBUF15__72;
            typedef reg_t<uint32_t, 0x40008d24, rw_t<uint32_t>> r_TXBUF15__73;
            typedef reg_t<uint32_t, 0x40008d28, rw_t<uint32_t>> r_TXBUF15__74;
            typedef reg_t<uint32_t, 0x40008d2c, rw_t<uint32_t>> r_TXBUF15__75;
            typedef reg_t<uint32_t, 0x40008d30, rw_t<uint32_t>> r_TXBUF15__76;
            typedef reg_t<uint32_t, 0x40008d34, rw_t<uint32_t>> r_TXBUF15__77;
            typedef reg_t<uint32_t, 0x40008d38, rw_t<uint32_t>> r_TXBUF15__78;
            typedef reg_t<uint32_t, 0x40008d3c, rw_t<uint32_t>> r_TXBUF15__79;
            typedef reg_t<uint32_t, 0x40008d40, rw_t<uint32_t>> r_TXBUF15__80;
            typedef reg_t<uint32_t, 0x40008d44, rw_t<uint32_t>> r_TXBUF15__81;
            typedef reg_t<uint32_t, 0x40008d48, rw_t<uint32_t>> r_TXBUF15__82;
            typedef reg_t<uint32_t, 0x40008d4c, rw_t<uint32_t>> r_TXBUF15__83;
            typedef reg_t<uint32_t, 0x40008d50, rw_t<uint32_t>> r_TXBUF15__84;
            typedef reg_t<uint32_t, 0x40008d54, rw_t<uint32_t>> r_TXBUF15__85;
            typedef reg_t<uint32_t, 0x40008d58, rw_t<uint32_t>> r_TXBUF15__86;
            typedef reg_t<uint32_t, 0x40008d5c, rw_t<uint32_t>> r_TXBUF15__87;
            typedef reg_t<uint32_t, 0x40008d60, rw_t<uint32_t>> r_TXBUF15__88;
            typedef reg_t<uint32_t, 0x40008d64, rw_t<uint32_t>> r_TXBUF15__89;
            typedef reg_t<uint32_t, 0x40008d68, rw_t<uint32_t>> r_TXBUF15__90;
            typedef reg_t<uint32_t, 0x40008d6c, rw_t<uint32_t>> r_TXBUF15__91;
            typedef reg_t<uint32_t, 0x40008d70, rw_t<uint32_t>> r_TXBUF15__92;
            typedef reg_t<uint32_t, 0x40008d74, rw_t<uint32_t>> r_TXBUF15__93;
            typedef reg_t<uint32_t, 0x40008d78, rw_t<uint32_t>> r_TXBUF15__94;
            typedef reg_t<uint32_t, 0x40008d7c, rw_t<uint32_t>> r_TXBUF15__95;
            typedef reg_t<uint32_t, 0x40008d80, rw_t<uint32_t>> r_TXBUF15__96;
            typedef reg_t<uint32_t, 0x40008d84, rw_t<uint32_t>> r_TXBUF15__97;
            typedef reg_t<uint32_t, 0x40008d88, rw_t<uint32_t>> r_TXBUF15__98;
            typedef reg_t<uint32_t, 0x40008d8c, rw_t<uint32_t>> r_TXBUF15__99;
            typedef reg_t<uint32_t, 0x40008d90, rw_t<uint32_t>> r_TXBUF15__100;
            typedef reg_t<uint32_t, 0x40008d94, rw_t<uint32_t>> r_TXBUF15__101;
            typedef reg_t<uint32_t, 0x40008d98, rw_t<uint32_t>> r_TXBUF15__102;
            typedef reg_t<uint32_t, 0x40008d9c, rw_t<uint32_t>> r_TXBUF15__103;
            typedef reg_t<uint32_t, 0x40008da0, rw_t<uint32_t>> r_TXBUF15__104;
            typedef reg_t<uint32_t, 0x40008da4, rw_t<uint32_t>> r_TXBUF15__105;
            typedef reg_t<uint32_t, 0x40008da8, rw_t<uint32_t>> r_TXBUF15__106;
            typedef reg_t<uint32_t, 0x40008dac, rw_t<uint32_t>> r_TXBUF15__107;
            typedef reg_t<uint32_t, 0x40008db0, rw_t<uint32_t>> r_TXBUF15__108;
            typedef reg_t<uint32_t, 0x40008db4, rw_t<uint32_t>> r_TXBUF15__109;
            typedef reg_t<uint32_t, 0x40008db8, rw_t<uint32_t>> r_TXBUF15__110;
            typedef reg_t<uint32_t, 0x40008dbc, rw_t<uint32_t>> r_TXBUF15__111;
            typedef reg_t<uint32_t, 0x40008dc0, rw_t<uint32_t>> r_TXBUF15__112;
            typedef reg_t<uint32_t, 0x40008dc4, rw_t<uint32_t>> r_TXBUF15__113;
            typedef reg_t<uint32_t, 0x40008dc8, rw_t<uint32_t>> r_TXBUF15__114;
            typedef reg_t<uint32_t, 0x40008dcc, rw_t<uint32_t>> r_TXBUF15__115;
            typedef reg_t<uint32_t, 0x40008dd0, rw_t<uint32_t>> r_TXBUF15__116;
            typedef reg_t<uint32_t, 0x40008dd4, rw_t<uint32_t>> r_TXBUF15__117;
            typedef reg_t<uint32_t, 0x40008dd8, rw_t<uint32_t>> r_TXBUF15__118;
            typedef reg_t<uint32_t, 0x40008ddc, rw_t<uint32_t>> r_TXBUF15__119;
            typedef reg_t<uint32_t, 0x40008de0, rw_t<uint32_t>> r_TXBUF15__120;
            typedef reg_t<uint32_t, 0x40008de4, rw_t<uint32_t>> r_TXBUF15__121;
            typedef reg_t<uint32_t, 0x40008de8, rw_t<uint32_t>> r_TXBUF15__122;
            typedef reg_t<uint32_t, 0x40008dec, rw_t<uint32_t>> r_TXBUF15__123;
            typedef reg_t<uint32_t, 0x40008df0, rw_t<uint32_t>> r_TXBUF15__124;
            typedef reg_t<uint32_t, 0x40008df4, rw_t<uint32_t>> r_TXBUF15__125;
            typedef reg_t<uint32_t, 0x40008df8, rw_t<uint32_t>> r_TXBUF15__126;
            typedef reg_t<uint32_t, 0x40008dfc, rw_t<uint32_t>> r_TXBUF15__127;
            typedef reg_t<uint32_t, 0x40008e00, rw_t<uint32_t>> r_TXBUF15__128;
            typedef reg_t<uint32_t, 0x40008e04, rw_t<uint32_t>> r_TXBUF15__129;
            typedef reg_t<uint32_t, 0x40008e08, rw_t<uint32_t>> r_TXBUF15__130;
            typedef reg_t<uint32_t, 0x40008e0c, rw_t<uint32_t>> r_TXBUF15__131;
            typedef reg_t<uint32_t, 0x40008e10, rw_t<uint32_t>> r_TXBUF15__132;
            typedef reg_t<uint32_t, 0x40008e14, rw_t<uint32_t>> r_TXBUF15__133;
            typedef reg_t<uint32_t, 0x40008e18, rw_t<uint32_t>> r_TXBUF15__134;
            typedef reg_t<uint32_t, 0x40008e1c, rw_t<uint32_t>> r_TXBUF15__135;
            typedef reg_t<uint32_t, 0x40008e20, rw_t<uint32_t>> r_TXBUF15__136;
            typedef reg_t<uint32_t, 0x40008e24, rw_t<uint32_t>> r_TXBUF15__137;
            typedef reg_t<uint32_t, 0x40008e28, rw_t<uint32_t>> r_TXBUF15__138;
            typedef reg_t<uint32_t, 0x40008e2c, rw_t<uint32_t>> r_TXBUF15__139;
            typedef reg_t<uint32_t, 0x40008e30, rw_t<uint32_t>> r_TXBUF15__140;
            typedef reg_t<uint32_t, 0x40008e34, rw_t<uint32_t>> r_TXBUF15__141;
            typedef reg_t<uint32_t, 0x40008e38, rw_t<uint32_t>> r_TXBUF15__142;
            typedef reg_t<uint32_t, 0x40008e3c, rw_t<uint32_t>> r_TXBUF15__143;
            typedef reg_t<uint32_t, 0x40008e40, rw_t<uint32_t>> r_TXBUF15__144;
            typedef reg_t<uint32_t, 0x40008e44, rw_t<uint32_t>> r_TXBUF15__145;
            typedef reg_t<uint32_t, 0x40008e48, rw_t<uint32_t>> r_TXBUF15__146;
            typedef reg_t<uint32_t, 0x40008e4c, rw_t<uint32_t>> r_TXBUF15__147;
            typedef reg_t<uint32_t, 0x40008e50, rw_t<uint32_t>> r_TXBUF15__148;
            typedef reg_t<uint32_t, 0x40008e54, rw_t<uint32_t>> r_TXBUF15__149;
            typedef reg_t<uint32_t, 0x40008e58, rw_t<uint32_t>> r_TXBUF15__150;
            typedef reg_t<uint32_t, 0x40008e5c, rw_t<uint32_t>> r_TXBUF15__151;
            typedef reg_t<uint32_t, 0x40008e60, rw_t<uint32_t>> r_TXBUF15__152;
            typedef reg_t<uint32_t, 0x40008e64, rw_t<uint32_t>> r_TXBUF15__153;
            typedef reg_t<uint32_t, 0x40008e68, rw_t<uint32_t>> r_TXBUF15__154;
            typedef reg_t<uint32_t, 0x40008e6c, rw_t<uint32_t>> r_TXBUF15__155;
            typedef reg_t<uint32_t, 0x40008e70, rw_t<uint32_t>> r_TXBUF15__156;
            typedef reg_t<uint32_t, 0x40008e74, rw_t<uint32_t>> r_TXBUF15__157;
            typedef reg_t<uint32_t, 0x40008e78, rw_t<uint32_t>> r_TXBUF15__158;
            typedef reg_t<uint32_t, 0x40008e7c, rw_t<uint32_t>> r_TXBUF15__159;
            typedef reg_t<uint32_t, 0x40008e80, rw_t<uint32_t>> r_TXBUF15__160;
            typedef reg_t<uint32_t, 0x40008e84, rw_t<uint32_t>> r_TXBUF15__161;
            typedef reg_t<uint32_t, 0x40008e88, rw_t<uint32_t>> r_TXBUF15__162;
            typedef reg_t<uint32_t, 0x40008e8c, rw_t<uint32_t>> r_TXBUF15__163;
            typedef reg_t<uint32_t, 0x40008e90, rw_t<uint32_t>> r_TXBUF15__164;
            typedef reg_t<uint32_t, 0x40008e94, rw_t<uint32_t>> r_TXBUF15__165;
            typedef reg_t<uint32_t, 0x40008e98, rw_t<uint32_t>> r_TXBUF15__166;
            typedef reg_t<uint32_t, 0x40008e9c, rw_t<uint32_t>> r_TXBUF15__167;
            typedef reg_t<uint32_t, 0x40008ea0, rw_t<uint32_t>> r_TXBUF15__168;
            typedef reg_t<uint32_t, 0x40008ea4, rw_t<uint32_t>> r_TXBUF15__169;
            typedef reg_t<uint32_t, 0x40008ea8, rw_t<uint32_t>> r_TXBUF15__170;
            typedef reg_t<uint32_t, 0x40008eac, rw_t<uint32_t>> r_TXBUF15__171;
            typedef reg_t<uint32_t, 0x40008eb0, rw_t<uint32_t>> r_TXBUF15__172;
            typedef reg_t<uint32_t, 0x40008eb4, rw_t<uint32_t>> r_TXBUF15__173;
            typedef reg_t<uint32_t, 0x40008eb8, rw_t<uint32_t>> r_TXBUF15__174;
            typedef reg_t<uint32_t, 0x40008ebc, rw_t<uint32_t>> r_TXBUF15__175;
            typedef reg_t<uint32_t, 0x40008ec0, rw_t<uint32_t>> r_TXBUF15__176;
            typedef reg_t<uint32_t, 0x40008ec4, rw_t<uint32_t>> r_TXBUF15__177;
            typedef reg_t<uint32_t, 0x40008ec8, rw_t<uint32_t>> r_TXBUF15__178;
            typedef reg_t<uint32_t, 0x40008ecc, rw_t<uint32_t>> r_TXBUF15__179;
            typedef reg_t<uint32_t, 0x40008ed0, rw_t<uint32_t>> r_TXBUF15__180;
            typedef reg_t<uint32_t, 0x40008ed4, rw_t<uint32_t>> r_TXBUF15__181;
            typedef reg_t<uint32_t, 0x40008ed8, rw_t<uint32_t>> r_TXBUF15__182;
            typedef reg_t<uint32_t, 0x40008edc, rw_t<uint32_t>> r_TXBUF15__183;
            typedef reg_t<uint32_t, 0x40008ee0, rw_t<uint32_t>> r_TXBUF15__184;
            typedef reg_t<uint32_t, 0x40008ee4, rw_t<uint32_t>> r_TXBUF15__185;
            typedef reg_t<uint32_t, 0x40008ee8, rw_t<uint32_t>> r_TXBUF15__186;
            typedef reg_t<uint32_t, 0x40008eec, rw_t<uint32_t>> r_TXBUF15__187;
            typedef reg_t<uint32_t, 0x40008ef0, rw_t<uint32_t>> r_TXBUF15__188;
            typedef reg_t<uint32_t, 0x40008ef4, rw_t<uint32_t>> r_TXBUF15__189;
            typedef reg_t<uint32_t, 0x40008ef8, rw_t<uint32_t>> r_TXBUF15__190;
            typedef reg_t<uint32_t, 0x40008efc, rw_t<uint32_t>> r_TXBUF15__191;
            typedef reg_t<uint32_t, 0x40008f00, rw_t<uint32_t>> r_TXBUF15__192;
            typedef reg_t<uint32_t, 0x40008f04, rw_t<uint32_t>> r_TXBUF15__193;
            typedef reg_t<uint32_t, 0x40008f08, rw_t<uint32_t>> r_TXBUF15__194;
            typedef reg_t<uint32_t, 0x40008f0c, rw_t<uint32_t>> r_TXBUF15__195;
            typedef reg_t<uint32_t, 0x40008f10, rw_t<uint32_t>> r_TXBUF15__196;
            typedef reg_t<uint32_t, 0x40008f14, rw_t<uint32_t>> r_TXBUF15__197;
            typedef reg_t<uint32_t, 0x40008f18, rw_t<uint32_t>> r_TXBUF15__198;
            typedef reg_t<uint32_t, 0x40008f1c, rw_t<uint32_t>> r_TXBUF15__199;
            typedef reg_t<uint32_t, 0x40008f20, rw_t<uint32_t>> r_TXBUF15__200;
            typedef reg_t<uint32_t, 0x40008f24, rw_t<uint32_t>> r_TXBUF15__201;
            typedef reg_t<uint32_t, 0x40008f28, rw_t<uint32_t>> r_TXBUF15__202;
            typedef reg_t<uint32_t, 0x40008f2c, rw_t<uint32_t>> r_TXBUF15__203;
            typedef reg_t<uint32_t, 0x40008f30, rw_t<uint32_t>> r_TXBUF15__204;
            typedef reg_t<uint32_t, 0x40008f34, rw_t<uint32_t>> r_TXBUF15__205;
            typedef reg_t<uint32_t, 0x40008f38, rw_t<uint32_t>> r_TXBUF15__206;
            typedef reg_t<uint32_t, 0x40008f3c, rw_t<uint32_t>> r_TXBUF15__207;
            typedef reg_t<uint32_t, 0x40008f40, rw_t<uint32_t>> r_TXBUF15__208;
            typedef reg_t<uint32_t, 0x40008f44, rw_t<uint32_t>> r_TXBUF15__209;
            typedef reg_t<uint32_t, 0x40008f48, rw_t<uint32_t>> r_TXBUF15__210;
            typedef reg_t<uint32_t, 0x40008f4c, rw_t<uint32_t>> r_TXBUF15__211;
            typedef reg_t<uint32_t, 0x40008f50, rw_t<uint32_t>> r_TXBUF15__212;
            typedef reg_t<uint32_t, 0x40008f54, rw_t<uint32_t>> r_TXBUF15__213;
            typedef reg_t<uint32_t, 0x40008f58, rw_t<uint32_t>> r_TXBUF15__214;
            typedef reg_t<uint32_t, 0x40008f5c, rw_t<uint32_t>> r_TXBUF15__215;
            typedef reg_t<uint32_t, 0x40008f60, rw_t<uint32_t>> r_TXBUF15__216;
            typedef reg_t<uint32_t, 0x40008f64, rw_t<uint32_t>> r_TXBUF15__217;
            typedef reg_t<uint32_t, 0x40008f68, rw_t<uint32_t>> r_TXBUF15__218;
            typedef reg_t<uint32_t, 0x40008f6c, rw_t<uint32_t>> r_TXBUF15__219;
            typedef reg_t<uint32_t, 0x40008f70, rw_t<uint32_t>> r_TXBUF15__220;
            typedef reg_t<uint32_t, 0x40008f74, rw_t<uint32_t>> r_TXBUF15__221;
            typedef reg_t<uint32_t, 0x40008f78, rw_t<uint32_t>> r_TXBUF15__222;
            typedef reg_t<uint32_t, 0x40008f7c, rw_t<uint32_t>> r_TXBUF15__223;
            typedef reg_t<uint32_t, 0x40008f80, rw_t<uint32_t>> r_TXBUF15__224;
            typedef reg_t<uint32_t, 0x40008f84, rw_t<uint32_t>> r_TXBUF15__225;
            typedef reg_t<uint32_t, 0x40008f88, rw_t<uint32_t>> r_TXBUF15__226;
            typedef reg_t<uint32_t, 0x40008f8c, rw_t<uint32_t>> r_TXBUF15__227;
            typedef reg_t<uint32_t, 0x40008f90, rw_t<uint32_t>> r_TXBUF15__228;
            typedef reg_t<uint32_t, 0x40008f94, rw_t<uint32_t>> r_TXBUF15__229;
            typedef reg_t<uint32_t, 0x40008f98, rw_t<uint32_t>> r_TXBUF15__230;
            typedef reg_t<uint32_t, 0x40008f9c, rw_t<uint32_t>> r_TXBUF15__231;
            typedef reg_t<uint32_t, 0x40008fa0, rw_t<uint32_t>> r_TXBUF15__232;
            typedef reg_t<uint32_t, 0x40008fa4, rw_t<uint32_t>> r_TXBUF15__233;
            typedef reg_t<uint32_t, 0x40008fa8, rw_t<uint32_t>> r_TXBUF15__234;
            typedef reg_t<uint32_t, 0x40008fac, rw_t<uint32_t>> r_TXBUF15__235;
            typedef reg_t<uint32_t, 0x40008fb0, rw_t<uint32_t>> r_TXBUF15__236;
            typedef reg_t<uint32_t, 0x40008fb4, rw_t<uint32_t>> r_TXBUF15__237;
            typedef reg_t<uint32_t, 0x40008fb8, rw_t<uint32_t>> r_TXBUF15__238;
            typedef reg_t<uint32_t, 0x40008fbc, rw_t<uint32_t>> r_TXBUF15__239;
            typedef reg_t<uint32_t, 0x40008fc0, rw_t<uint32_t>> r_TXBUF15__240;
            typedef reg_t<uint32_t, 0x40008fc4, rw_t<uint32_t>> r_TXBUF15__241;
            typedef reg_t<uint32_t, 0x40008fc8, rw_t<uint32_t>> r_TXBUF15__242;
            typedef reg_t<uint32_t, 0x40008fcc, rw_t<uint32_t>> r_TXBUF15__243;
            typedef reg_t<uint32_t, 0x40008fd0, rw_t<uint32_t>> r_TXBUF15__244;
            typedef reg_t<uint32_t, 0x40008fd4, rw_t<uint32_t>> r_TXBUF15__245;
            typedef reg_t<uint32_t, 0x40008fd8, rw_t<uint32_t>> r_TXBUF15__246;
            typedef reg_t<uint32_t, 0x40008fdc, rw_t<uint32_t>> r_TXBUF15__247;
            typedef reg_t<uint32_t, 0x40008fe0, rw_t<uint32_t>> r_TXBUF15__248;
            typedef reg_t<uint32_t, 0x40008fe4, rw_t<uint32_t>> r_TXBUF15__249;
            typedef reg_t<uint32_t, 0x40008fe8, rw_t<uint32_t>> r_TXBUF15__250;
            typedef reg_t<uint32_t, 0x40008fec, rw_t<uint32_t>> r_TXBUF15__251;
            typedef reg_t<uint32_t, 0x40008ff0, rw_t<uint32_t>> r_TXBUF15__252;
            typedef reg_t<uint32_t, 0x40008ff4, rw_t<uint32_t>> r_TXBUF15__253;
            typedef reg_t<uint32_t, 0x40008ff8, rw_t<uint32_t>> r_TXBUF15__254;
            typedef reg_t<uint32_t, 0x40008ffc, rw_t<uint32_t>> r_TXBUF15__255;
        } // end of TXBUF15_[%s]
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
        namespace INEP0 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009400, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009404, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000940c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP0
        namespace INEP1 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009410, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009414, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000941c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP1
        namespace INEP2 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009420, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009424, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000942c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP2
        namespace INEP3 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009430, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009434, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000943c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP3
        namespace INEP4 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009440, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009444, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000944c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP4
        namespace INEP5 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009450, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009454, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000945c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP5
        namespace INEP6 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009460, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009464, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000946c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP6
        namespace INEP7 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009470, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009474, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000947c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP7
        namespace INEP8 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009480, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009484, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000948c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP8
        namespace INEP9 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x40009490, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x40009494, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x4000949c, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP9
        namespace INEP10 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x400094a0, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x400094a4, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x400094ac, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP10
        namespace INEP11 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x400094b0, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x400094b4, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x400094bc, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP11
        namespace INEP12 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x400094c0, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x400094c4, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x400094cc, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP12
        namespace INEP13 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x400094d0, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x400094d4, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x400094dc, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP13
        namespace INEP14 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x400094e0, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x400094e4, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x400094ec, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP14
        namespace INEP15 {
            // register cluster
            namespace TXCR {
                typedef reg_t<uint32_t, 0x400094f0, rw_t<uint32_t>> r_TXCR;
            } // end of TXCR
            namespace TXSR {
                typedef reg_t<uint32_t, 0x400094f4, rw_t<uint32_t>> r_TXSR;
            } // end of TXSR
            namespace TXTRSZ {
                typedef reg_t<uint32_t, 0x400094fc, rw_t<uint32_t>> r_TXTRSZ;
            } // end of TXTRSZ
        } // end of INEP15
        namespace OUTEP0 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009500, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP0
        namespace OUTEP1 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009510, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP1
        namespace OUTEP2 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009520, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP2
        namespace OUTEP3 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009530, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP3
        namespace OUTEP4 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009540, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP4
        namespace OUTEP5 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009550, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP5
        namespace OUTEP6 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009560, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP6
        namespace OUTEP7 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009570, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP7
        namespace OUTEP8 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009580, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP8
        namespace OUTEP9 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x40009590, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP9
        namespace OUTEP10 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x400095a0, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP10
        namespace OUTEP11 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x400095b0, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP11
        namespace OUTEP12 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x400095c0, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP12
        namespace OUTEP13 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x400095d0, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP13
        namespace OUTEP14 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x400095e0, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP14
        namespace OUTEP15 {
            // register cluster
            namespace RXCR {
                typedef reg_t<uint32_t, 0x400095f0, rw_t<uint32_t>> r_RXCR;
            } // end of RXCR
        } // end of OUTEP15
        namespace DEVCR {
            // DEVCR register
            typedef reg_t<uint32_t, 0x40009600, rw_t<uint32_t>> r_DEVCR;
            enum mask_t{
                MASK_SPEED      = 0x00000002,
                MASK_REMOTEWKUP = 0x00000004,
                MASK_SELFPWRD   = 0x00000008,
                MASK_SYNCFRAME  = 0x00000010,
                MASK_CSRDONE    = 0x00000040,
                MASK_SETDESC    = 0x00000080,
                MASK_DEVICE     = 0x00000100,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SPEED      = 0,
                OFFSET_REMOTEWKUP = 2,
                OFFSET_SELFPWRD   = 3,
                OFFSET_SYNCFRAME  = 4,
                OFFSET_CSRDONE    = 6,
                OFFSET_SETDESC    = 7,
                OFFSET_DEVICE     = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_SPEED      = 2,
                WIDTH_REMOTEWKUP = 1,
                WIDTH_SELFPWRD   = 1,
                WIDTH_SYNCFRAME  = 1,
                WIDTH_CSRDONE    = 1,
                WIDTH_SETDESC    = 1,
                WIDTH_DEVICE     = 1,
            }; // endof width_t
            // SPEED field
            typedef field_t<uint32_t, 0x40009600, 0x3, 0, rw_t<uint32_t>> f_SPEED;
            // REMOTEWKUP field
            typedef field_t<uint32_t, 0x40009600, 0x1, 2, rw_t<uint32_t>> f_REMOTEWKUP;
            // SELFPWRD field
            typedef field_t<uint32_t, 0x40009600, 0x1, 3, rw_t<uint32_t>> f_SELFPWRD;
            // SYNCFRAME field
            typedef field_t<uint32_t, 0x40009600, 0x1, 4, rw_t<uint32_t>> f_SYNCFRAME;
            // CSRDONE field
            typedef field_t<uint32_t, 0x40009600, 0x1, 6, rw_t<uint32_t>> f_CSRDONE;
            // SETDESC field
            typedef field_t<uint32_t, 0x40009600, 0x1, 7, rw_t<uint32_t>> f_SETDESC;
            // DEVICE field
            typedef field_t<uint32_t, 0x40009600, 0x1, 8, rw_t<uint32_t>> f_DEVICE;
        } // end of DEVCR
        namespace DEVSR {
            // DEVSR register
            typedef reg_t<uint32_t, 0x40009604, ro_t<uint32_t>> r_DEVSR;
            enum mask_t{
                MASK_CFG        = 0x00000008,
                MASK_INTF       = 0x00000080,
                MASK_ALT        = 0x00000800,
                MASK_SUSP       = 0x00001000,
                MASK_FRNR       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CFG        = 0,
                OFFSET_INTF       = 4,
                OFFSET_ALT        = 8,
                OFFSET_SUSP       = 12,
                OFFSET_FRNR       = 21,
            }; // endof offset_t
            enum width_t{
                WIDTH_CFG        = 4,
                WIDTH_INTF       = 4,
                WIDTH_ALT        = 4,
                WIDTH_SUSP       = 1,
                WIDTH_FRNR       = 11,
            }; // endof width_t
            // CFG field
            typedef field_t<uint32_t, 0x40009604, 0xf, 0, ro_t<uint32_t>> f_CFG;
            // INTF field
            typedef field_t<uint32_t, 0x40009604, 0xf, 4, ro_t<uint32_t>> f_INTF;
            // ALT field
            typedef field_t<uint32_t, 0x40009604, 0xf, 8, ro_t<uint32_t>> f_ALT;
            // SUSP field
            typedef field_t<uint32_t, 0x40009604, 0x1, 12, ro_t<uint32_t>> f_SUSP;
            // FRNR field
            typedef field_t<uint32_t, 0x40009604, 0x7ff, 21, ro_t<uint32_t>> f_FRNR;
        } // end of DEVSR
        namespace DEVIF {
            // DEVIF register
            typedef reg_t<uint32_t, 0x40009608, rw_t<uint32_t>> r_DEVIF;
            enum mask_t{
                MASK_SETCFG     = 0x00000001,
                MASK_SETINTF    = 0x00000002,
                MASK_RST        = 0x00000008,
                MASK_SUSP       = 0x00000010,
                MASK_SOF        = 0x00000020,
                MASK_SETUP      = 0x00000040,
                MASK_OUT        = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SETCFG     = 0,
                OFFSET_SETINTF    = 1,
                OFFSET_RST        = 3,
                OFFSET_SUSP       = 4,
                OFFSET_SOF        = 5,
                OFFSET_SETUP      = 6,
                OFFSET_OUT        = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_SETCFG     = 1,
                WIDTH_SETINTF    = 1,
                WIDTH_RST        = 1,
                WIDTH_SUSP       = 1,
                WIDTH_SOF        = 1,
                WIDTH_SETUP      = 1,
                WIDTH_OUT        = 1,
            }; // endof width_t
            // SETCFG field
            typedef field_t<uint32_t, 0x40009608, 0x1, 0, rw_t<uint32_t>> f_SETCFG;
            // SETINTF field
            typedef field_t<uint32_t, 0x40009608, 0x1, 1, rw_t<uint32_t>> f_SETINTF;
            // RST field
            typedef field_t<uint32_t, 0x40009608, 0x1, 3, rw_t<uint32_t>> f_RST;
            // SUSP field
            typedef field_t<uint32_t, 0x40009608, 0x1, 4, rw_t<uint32_t>> f_SUSP;
            // SOF field
            typedef field_t<uint32_t, 0x40009608, 0x1, 5, rw_t<uint32_t>> f_SOF;
            // SETUP field
            typedef field_t<uint32_t, 0x40009608, 0x1, 6, rw_t<uint32_t>> f_SETUP;
            // OUT field
            typedef field_t<uint32_t, 0x40009608, 0x1, 7, rw_t<uint32_t>> f_OUT;
        } // end of DEVIF
        namespace DEVIE {
            // DEVIE register
            typedef reg_t<uint32_t, 0x4000960c, rw_t<uint32_t>> r_DEVIE;
            enum mask_t{
                MASK_SETCFG     = 0x00000001,
                MASK_SETINTF    = 0x00000002,
                MASK_RST        = 0x00000008,
                MASK_SUSP       = 0x00000010,
                MASK_SOF        = 0x00000020,
                MASK_SETUP      = 0x00000040,
                MASK_OUT        = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SETCFG     = 0,
                OFFSET_SETINTF    = 1,
                OFFSET_RST        = 3,
                OFFSET_SUSP       = 4,
                OFFSET_SOF        = 5,
                OFFSET_SETUP      = 6,
                OFFSET_OUT        = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_SETCFG     = 1,
                WIDTH_SETINTF    = 1,
                WIDTH_RST        = 1,
                WIDTH_SUSP       = 1,
                WIDTH_SOF        = 1,
                WIDTH_SETUP      = 1,
                WIDTH_OUT        = 1,
            }; // endof width_t
            // SETCFG field
            typedef field_t<uint32_t, 0x4000960c, 0x1, 0, rw_t<uint32_t>> f_SETCFG;
            // SETINTF field
            typedef field_t<uint32_t, 0x4000960c, 0x1, 1, rw_t<uint32_t>> f_SETINTF;
            // RST field
            typedef field_t<uint32_t, 0x4000960c, 0x1, 3, rw_t<uint32_t>> f_RST;
            // SUSP field
            typedef field_t<uint32_t, 0x4000960c, 0x1, 4, rw_t<uint32_t>> f_SUSP;
            // SOF field
            typedef field_t<uint32_t, 0x4000960c, 0x1, 5, rw_t<uint32_t>> f_SOF;
            // SETUP field
            typedef field_t<uint32_t, 0x4000960c, 0x1, 6, rw_t<uint32_t>> f_SETUP;
            // OUT field
            typedef field_t<uint32_t, 0x4000960c, 0x1, 7, rw_t<uint32_t>> f_OUT;
        } // end of DEVIE
        namespace EPIE {
            // EPIE register
            typedef reg_t<uint32_t, 0x40009614, rw_t<uint32_t>> r_EPIE;
            enum mask_t{
                MASK_INEP0      = 0x00000001,
                MASK_INEP1      = 0x00000002,
                MASK_INEP2      = 0x00000004,
                MASK_INEP3      = 0x00000008,
                MASK_INEP4      = 0x00000010,
                MASK_INEP5      = 0x00000020,
                MASK_INEP6      = 0x00000040,
                MASK_INEP7      = 0x00000080,
                MASK_OUTEP0     = 0x00010000,
                MASK_OUTEP1     = 0x00020000,
                MASK_OUTEP2     = 0x00040000,
                MASK_OUTEP3     = 0x00080000,
                MASK_OUTEP4     = 0x00100000,
                MASK_OUTEP5     = 0x00200000,
                MASK_OUTEP6     = 0x00400000,
                MASK_OUTEP7     = 0x00800000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_INEP0      = 0,
                OFFSET_INEP1      = 1,
                OFFSET_INEP2      = 2,
                OFFSET_INEP3      = 3,
                OFFSET_INEP4      = 4,
                OFFSET_INEP5      = 5,
                OFFSET_INEP6      = 6,
                OFFSET_INEP7      = 7,
                OFFSET_OUTEP0     = 16,
                OFFSET_OUTEP1     = 17,
                OFFSET_OUTEP2     = 18,
                OFFSET_OUTEP3     = 19,
                OFFSET_OUTEP4     = 20,
                OFFSET_OUTEP5     = 21,
                OFFSET_OUTEP6     = 22,
                OFFSET_OUTEP7     = 23,
            }; // endof offset_t
            enum width_t{
                WIDTH_INEP0      = 1,
                WIDTH_INEP1      = 1,
                WIDTH_INEP2      = 1,
                WIDTH_INEP3      = 1,
                WIDTH_INEP4      = 1,
                WIDTH_INEP5      = 1,
                WIDTH_INEP6      = 1,
                WIDTH_INEP7      = 1,
                WIDTH_OUTEP0     = 1,
                WIDTH_OUTEP1     = 1,
                WIDTH_OUTEP2     = 1,
                WIDTH_OUTEP3     = 1,
                WIDTH_OUTEP4     = 1,
                WIDTH_OUTEP5     = 1,
                WIDTH_OUTEP6     = 1,
                WIDTH_OUTEP7     = 1,
            }; // endof width_t
            // INEP0 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 0, rw_t<uint32_t>> f_INEP0;
            // INEP1 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 1, rw_t<uint32_t>> f_INEP1;
            // INEP2 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 2, rw_t<uint32_t>> f_INEP2;
            // INEP3 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 3, rw_t<uint32_t>> f_INEP3;
            // INEP4 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 4, rw_t<uint32_t>> f_INEP4;
            // INEP5 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 5, rw_t<uint32_t>> f_INEP5;
            // INEP6 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 6, rw_t<uint32_t>> f_INEP6;
            // INEP7 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 7, rw_t<uint32_t>> f_INEP7;
            // OUTEP0 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 16, rw_t<uint32_t>> f_OUTEP0;
            // OUTEP1 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 17, rw_t<uint32_t>> f_OUTEP1;
            // OUTEP2 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 18, rw_t<uint32_t>> f_OUTEP2;
            // OUTEP3 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 19, rw_t<uint32_t>> f_OUTEP3;
            // OUTEP4 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 20, rw_t<uint32_t>> f_OUTEP4;
            // OUTEP5 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 21, rw_t<uint32_t>> f_OUTEP5;
            // OUTEP6 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 22, rw_t<uint32_t>> f_OUTEP6;
            // OUTEP7 field
            typedef field_t<uint32_t, 0x40009614, 0x1, 23, rw_t<uint32_t>> f_OUTEP7;
        } // end of EPIE
        namespace FFTHR {
            // FFTHR register
            typedef reg_t<uint32_t, 0x40009618, rw_t<uint32_t>> r_FFTHR;
        } // end of FFTHR
        namespace RXSR {
            // RXSR register
            typedef reg_t<uint32_t, 0x4000961c, rw_t<uint32_t>> r_RXSR;
            enum mask_t{
                MASK_SUCC       = 0x00000001,
                MASK_DONE       = 0x00000002,
                MASK_EPNR       = 0x00080000,
                MASK_TRSZ       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SUCC       = 0,
                OFFSET_DONE       = 1,
                OFFSET_EPNR       = 16,
                OFFSET_TRSZ       = 22,
            }; // endof offset_t
            enum width_t{
                WIDTH_SUCC       = 1,
                WIDTH_DONE       = 1,
                WIDTH_EPNR       = 4,
                WIDTH_TRSZ       = 10,
            }; // endof width_t
            // SUCC field
            typedef field_t<uint32_t, 0x4000961c, 0x1, 0, rw_t<uint32_t>> f_SUCC;
            // DONE field
            typedef field_t<uint32_t, 0x4000961c, 0x1, 1, rw_t<uint32_t>> f_DONE;
            // EPNR field
            typedef field_t<uint32_t, 0x4000961c, 0xf, 16, rw_t<uint32_t>> f_EPNR;
            // TRSZ field
            typedef field_t<uint32_t, 0x4000961c, 0x3ff, 22, rw_t<uint32_t>> f_TRSZ;
        } // end of RXSR
        namespace SETUPSR {
            // SETUPSR register
            typedef reg_t<uint32_t, 0x40009620, rw_t<uint32_t>> r_SETUPSR;
            enum mask_t{
                MASK_SUCC       = 0x00000001,
                MASK_DONE       = 0x00000002,
                MASK_EPNR       = 0x00080000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SUCC       = 0,
                OFFSET_DONE       = 1,
                OFFSET_EPNR       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_SUCC       = 1,
                WIDTH_DONE       = 1,
                WIDTH_EPNR       = 4,
            }; // endof width_t
            // SUCC field
            typedef field_t<uint32_t, 0x40009620, 0x1, 0, rw_t<uint32_t>> f_SUCC;
            // DONE field
            typedef field_t<uint32_t, 0x40009620, 0x1, 1, rw_t<uint32_t>> f_DONE;
            // EPNR field
            typedef field_t<uint32_t, 0x40009620, 0xf, 16, rw_t<uint32_t>> f_EPNR;
        } // end of SETUPSR
        namespace EPIF {
            // EPIF register
            typedef reg_t<uint32_t, 0x40009624, rw_t<uint32_t>> r_EPIF;
            enum mask_t{
                MASK_INEP0      = 0x00000001,
                MASK_INEP1      = 0x00000002,
                MASK_INEP2      = 0x00000004,
                MASK_INEP3      = 0x00000008,
                MASK_INEP4      = 0x00000010,
                MASK_INEP5      = 0x00000020,
                MASK_INEP6      = 0x00000040,
                MASK_INEP7      = 0x00000080,
                MASK_OUTEP0     = 0x00010000,
                MASK_OUTEP1     = 0x00020000,
                MASK_OUTEP2     = 0x00040000,
                MASK_OUTEP3     = 0x00080000,
                MASK_OUTEP4     = 0x00100000,
                MASK_OUTEP5     = 0x00200000,
                MASK_OUTEP6     = 0x00400000,
                MASK_OUTEP7     = 0x00800000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_INEP0      = 0,
                OFFSET_INEP1      = 1,
                OFFSET_INEP2      = 2,
                OFFSET_INEP3      = 3,
                OFFSET_INEP4      = 4,
                OFFSET_INEP5      = 5,
                OFFSET_INEP6      = 6,
                OFFSET_INEP7      = 7,
                OFFSET_OUTEP0     = 16,
                OFFSET_OUTEP1     = 17,
                OFFSET_OUTEP2     = 18,
                OFFSET_OUTEP3     = 19,
                OFFSET_OUTEP4     = 20,
                OFFSET_OUTEP5     = 21,
                OFFSET_OUTEP6     = 22,
                OFFSET_OUTEP7     = 23,
            }; // endof offset_t
            enum width_t{
                WIDTH_INEP0      = 1,
                WIDTH_INEP1      = 1,
                WIDTH_INEP2      = 1,
                WIDTH_INEP3      = 1,
                WIDTH_INEP4      = 1,
                WIDTH_INEP5      = 1,
                WIDTH_INEP6      = 1,
                WIDTH_INEP7      = 1,
                WIDTH_OUTEP0     = 1,
                WIDTH_OUTEP1     = 1,
                WIDTH_OUTEP2     = 1,
                WIDTH_OUTEP3     = 1,
                WIDTH_OUTEP4     = 1,
                WIDTH_OUTEP5     = 1,
                WIDTH_OUTEP6     = 1,
                WIDTH_OUTEP7     = 1,
            }; // endof width_t
            // INEP0 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 0, rw_t<uint32_t>> f_INEP0;
            // INEP1 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 1, rw_t<uint32_t>> f_INEP1;
            // INEP2 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 2, rw_t<uint32_t>> f_INEP2;
            // INEP3 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 3, rw_t<uint32_t>> f_INEP3;
            // INEP4 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 4, rw_t<uint32_t>> f_INEP4;
            // INEP5 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 5, rw_t<uint32_t>> f_INEP5;
            // INEP6 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 6, rw_t<uint32_t>> f_INEP6;
            // INEP7 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 7, rw_t<uint32_t>> f_INEP7;
            // OUTEP0 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 16, rw_t<uint32_t>> f_OUTEP0;
            // OUTEP1 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 17, rw_t<uint32_t>> f_OUTEP1;
            // OUTEP2 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 18, rw_t<uint32_t>> f_OUTEP2;
            // OUTEP3 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 19, rw_t<uint32_t>> f_OUTEP3;
            // OUTEP4 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 20, rw_t<uint32_t>> f_OUTEP4;
            // OUTEP5 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 21, rw_t<uint32_t>> f_OUTEP5;
            // OUTEP6 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 22, rw_t<uint32_t>> f_OUTEP6;
            // OUTEP7 field
            typedef field_t<uint32_t, 0x40009624, 0x1, 23, rw_t<uint32_t>> f_OUTEP7;
        } // end of EPIF
        namespace FRAMENR {
            // FRAMENR register
            typedef reg_t<uint32_t, 0x40009628, rw_t<uint32_t>> r_FRAMENR;
        } // end of FRAMENR
        namespace SETUPD1 {
            // SETUPD1 register
            typedef reg_t<uint32_t, 0x40009700, rw_t<uint32_t>> r_SETUPD1;
        } // end of SETUPD1
        namespace SETUPD2 {
            // SETUPD2 register
            typedef reg_t<uint32_t, 0x40009704, rw_t<uint32_t>> r_SETUPD2;
        } // end of SETUPD2
        namespace EPCFG {
            // EPCFG register
            typedef reg_t<uint32_t, 0x40009804, rw_t<uint32_t>> r_EPCFG_0;
            typedef reg_t<uint32_t, 0x40009808, rw_t<uint32_t>> r_EPCFG_1;
            typedef reg_t<uint32_t, 0x4000980c, rw_t<uint32_t>> r_EPCFG_2;
            typedef reg_t<uint32_t, 0x40009810, rw_t<uint32_t>> r_EPCFG_3;
            typedef reg_t<uint32_t, 0x40009814, rw_t<uint32_t>> r_EPCFG_4;
            typedef reg_t<uint32_t, 0x40009818, rw_t<uint32_t>> r_EPCFG_5;
            typedef reg_t<uint32_t, 0x4000981c, rw_t<uint32_t>> r_EPCFG_6;
            typedef reg_t<uint32_t, 0x40009820, rw_t<uint32_t>> r_EPCFG_7;
            typedef reg_t<uint32_t, 0x40009824, rw_t<uint32_t>> r_EPCFG_8;
            typedef reg_t<uint32_t, 0x40009828, rw_t<uint32_t>> r_EPCFG_9;
            typedef reg_t<uint32_t, 0x4000982c, rw_t<uint32_t>> r_EPCFG_10;
            typedef reg_t<uint32_t, 0x40009830, rw_t<uint32_t>> r_EPCFG_11;
            typedef reg_t<uint32_t, 0x40009834, rw_t<uint32_t>> r_EPCFG_12;
            typedef reg_t<uint32_t, 0x40009838, rw_t<uint32_t>> r_EPCFG_13;
            typedef reg_t<uint32_t, 0x4000983c, rw_t<uint32_t>> r_EPCFG_14;
            typedef reg_t<uint32_t, 0x40009840, rw_t<uint32_t>> r_EPCFG_15;
        } // end of EPCFG[%s]
    } // end of USBD
} // end of PAC
#endif // end of #if USING_USBD
