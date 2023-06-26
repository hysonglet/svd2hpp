#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_JPEG) && (USING_JPEG != 0))
namespace PAC {
    namespace JPEG {
        namespace CFG {
            // CFG register
            typedef reg_t<uint32_t, 0x4000b000, rw_t<uint32_t>> r_CFG;
            enum mask_t{
                MASK_SRCFMT     = 0x00000002,
                MASK_SCANMOD    = 0x00000004,
                MASK_NISCOMP    = 0x00000010,
                MASK_HT1COMP    = 0x00000020,
                MASK_HT2COMP    = 0x00000040,
                MASK_HT3COMP    = 0x00000080,
                MASK_QT1COMP    = 0x00000200,
                MASK_QT2COMP    = 0x00000800,
                MASK_QT3COMP    = 0x00002000,
                MASK_OUTFMT     = 0x00010000,
                MASK_YUV2RGB    = 0x00020000,
                MASK_UVSWAP     = 0x00040000,
                MASK_RBSWAP     = 0x00080000,
                MASK_EDSWAP     = 0x00100000,
                MASK__565DITH   = 0x00200000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SRCFMT     = 0,
                OFFSET_SCANMOD    = 2,
                OFFSET_NISCOMP    = 3,
                OFFSET_HT1COMP    = 5,
                OFFSET_HT2COMP    = 6,
                OFFSET_HT3COMP    = 7,
                OFFSET_QT1COMP    = 8,
                OFFSET_QT2COMP    = 10,
                OFFSET_QT3COMP    = 12,
                OFFSET_OUTFMT     = 14,
                OFFSET_YUV2RGB    = 17,
                OFFSET_UVSWAP     = 18,
                OFFSET_RBSWAP     = 19,
                OFFSET_EDSWAP     = 20,
                OFFSET__565DITH   = 21,
            }; // endof offset_t
            enum width_t{
                WIDTH_SRCFMT     = 2,
                WIDTH_SCANMOD    = 1,
                WIDTH_NISCOMP    = 2,
                WIDTH_HT1COMP    = 1,
                WIDTH_HT2COMP    = 1,
                WIDTH_HT3COMP    = 1,
                WIDTH_QT1COMP    = 2,
                WIDTH_QT2COMP    = 2,
                WIDTH_QT3COMP    = 2,
                WIDTH_OUTFMT     = 3,
                WIDTH_YUV2RGB    = 1,
                WIDTH_UVSWAP     = 1,
                WIDTH_RBSWAP     = 1,
                WIDTH_EDSWAP     = 1,
                WIDTH__565DITH   = 1,
            }; // endof width_t
            // SRCFMT field
            typedef field_t<uint32_t, 0x4000b000, 0x3, 0, rw_t<uint32_t>> f_SRCFMT;
            // SCANMOD field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 2, rw_t<uint32_t>> f_SCANMOD;
            // NISCOMP field
            typedef field_t<uint32_t, 0x4000b000, 0x3, 3, rw_t<uint32_t>> f_NISCOMP;
            // HT1COMP field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 5, rw_t<uint32_t>> f_HT1COMP;
            // HT2COMP field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 6, rw_t<uint32_t>> f_HT2COMP;
            // HT3COMP field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 7, rw_t<uint32_t>> f_HT3COMP;
            // QT1COMP field
            typedef field_t<uint32_t, 0x4000b000, 0x3, 8, rw_t<uint32_t>> f_QT1COMP;
            // QT2COMP field
            typedef field_t<uint32_t, 0x4000b000, 0x3, 10, rw_t<uint32_t>> f_QT2COMP;
            // QT3COMP field
            typedef field_t<uint32_t, 0x4000b000, 0x3, 12, rw_t<uint32_t>> f_QT3COMP;
            // OUTFMT field
            typedef field_t<uint32_t, 0x4000b000, 0x7, 14, rw_t<uint32_t>> f_OUTFMT;
            // YUV2RGB field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 17, rw_t<uint32_t>> f_YUV2RGB;
            // UVSWAP field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 18, rw_t<uint32_t>> f_UVSWAP;
            // RBSWAP field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 19, rw_t<uint32_t>> f_RBSWAP;
            // EDSWAP field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 20, rw_t<uint32_t>> f_EDSWAP;
            // _565DITH field
            typedef field_t<uint32_t, 0x4000b000, 0x1, 21, rw_t<uint32_t>> f__565DITH;
        } // end of CFG
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x4000b004, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_START      = 0x00000001,
                MASK_RESTART    = 0x00000002,
                MASK_RESET      = 0x00000008,
                MASK_REINTRV    = 0x00000010,
                MASK_LASTBUF    = 0x00000020,
                MASK_QTAUTO     = 0x00000080,
                MASK_HTAUTO     = 0x00000100,
                MASK_QTCNT      = 0x00000400,
                MASK_HTCNT      = 0x00000800,
                MASK_CUCNT      = 0x08000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_START      = 0,
                OFFSET_RESTART    = 1,
                OFFSET_RESET      = 3,
                OFFSET_REINTRV    = 4,
                OFFSET_LASTBUF    = 5,
                OFFSET_QTAUTO     = 7,
                OFFSET_HTAUTO     = 8,
                OFFSET_QTCNT      = 9,
                OFFSET_HTCNT      = 11,
                OFFSET_CUCNT      = 12,
            }; // endof offset_t
            enum width_t{
                WIDTH_START      = 1,
                WIDTH_RESTART    = 1,
                WIDTH_RESET      = 1,
                WIDTH_REINTRV    = 1,
                WIDTH_LASTBUF    = 1,
                WIDTH_QTAUTO     = 1,
                WIDTH_HTAUTO     = 1,
                WIDTH_QTCNT      = 2,
                WIDTH_HTCNT      = 1,
                WIDTH_CUCNT      = 16,
            }; // endof width_t
            // START field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 0, rw_t<uint32_t>> f_START;
            // RESTART field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 1, rw_t<uint32_t>> f_RESTART;
            // RESET field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 3, rw_t<uint32_t>> f_RESET;
            // REINTRV field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 4, rw_t<uint32_t>> f_REINTRV;
            // LASTBUF field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 5, rw_t<uint32_t>> f_LASTBUF;
            // QTAUTO field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 7, rw_t<uint32_t>> f_QTAUTO;
            // HTAUTO field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 8, rw_t<uint32_t>> f_HTAUTO;
            // QTCNT field
            typedef field_t<uint32_t, 0x4000b004, 0x3, 9, rw_t<uint32_t>> f_QTCNT;
            // HTCNT field
            typedef field_t<uint32_t, 0x4000b004, 0x1, 11, rw_t<uint32_t>> f_HTCNT;
            // CUCNT field
            typedef field_t<uint32_t, 0x4000b004, 0xffff, 12, rw_t<uint32_t>> f_CUCNT;
        } // end of CR
        namespace IR {
            // IR register
            typedef reg_t<uint32_t, 0x4000b008, rw_t<uint32_t>> r_IR;
            enum mask_t{
                MASK_IEDONE     = 0x00000001,
                MASK_IEEMPTY    = 0x00000004,
                MASK_IEERROR    = 0x00000008,
                MASK_ICDONE     = 0x00000020,
                MASK_ICEMPTY    = 0x00000080,
                MASK_ICERROR    = 0x00000100,
                MASK_IFDONE     = 0x00000400,
                MASK_IFEMPTY    = 0x00001000,
                MASK_IFERROR    = 0x00002000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_IEDONE     = 0,
                OFFSET_IEEMPTY    = 2,
                OFFSET_IEERROR    = 3,
                OFFSET_ICDONE     = 5,
                OFFSET_ICEMPTY    = 7,
                OFFSET_ICERROR    = 8,
                OFFSET_IFDONE     = 10,
                OFFSET_IFEMPTY    = 12,
                OFFSET_IFERROR    = 13,
            }; // endof offset_t
            enum width_t{
                WIDTH_IEDONE     = 1,
                WIDTH_IEEMPTY    = 1,
                WIDTH_IEERROR    = 1,
                WIDTH_ICDONE     = 1,
                WIDTH_ICEMPTY    = 1,
                WIDTH_ICERROR    = 1,
                WIDTH_IFDONE     = 1,
                WIDTH_IFEMPTY    = 1,
                WIDTH_IFERROR    = 1,
            }; // endof width_t
            // IEDONE field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 0, rw_t<uint32_t>> f_IEDONE;
            // IEEMPTY field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 2, rw_t<uint32_t>> f_IEEMPTY;
            // IEERROR field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 3, rw_t<uint32_t>> f_IEERROR;
            // ICDONE field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 5, rw_t<uint32_t>> f_ICDONE;
            // ICEMPTY field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 7, rw_t<uint32_t>> f_ICEMPTY;
            // ICERROR field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 8, rw_t<uint32_t>> f_ICERROR;
            // IFDONE field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 10, rw_t<uint32_t>> f_IFDONE;
            // IFEMPTY field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 12, rw_t<uint32_t>> f_IFEMPTY;
            // IFERROR field
            typedef field_t<uint32_t, 0x4000b008, 0x1, 13, rw_t<uint32_t>> f_IFERROR;
        } // end of IR
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x4000b00c, rw_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_BUSY       = 0x00000001,
                MASK_CUOVR      = 0x00000002,
                MASK_REIMERR    = 0x00000004,
                MASK_BUFBUSY    = 0x00000010,
                MASK_DMARDBUSY  = 0x00000020,
                MASK_DMAWRBUSY  = 0x00000040,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BUSY       = 0,
                OFFSET_CUOVR      = 1,
                OFFSET_REIMERR    = 2,
                OFFSET_BUFBUSY    = 4,
                OFFSET_DMARDBUSY  = 5,
                OFFSET_DMAWRBUSY  = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_BUSY       = 1,
                WIDTH_CUOVR      = 1,
                WIDTH_REIMERR    = 1,
                WIDTH_BUFBUSY    = 1,
                WIDTH_DMARDBUSY  = 1,
                WIDTH_DMAWRBUSY  = 1,
            }; // endof width_t
            // BUSY field
            typedef field_t<uint32_t, 0x4000b00c, 0x1, 0, rw_t<uint32_t>> f_BUSY;
            // CUOVR field
            typedef field_t<uint32_t, 0x4000b00c, 0x1, 1, rw_t<uint32_t>> f_CUOVR;
            // REIMERR field
            typedef field_t<uint32_t, 0x4000b00c, 0x1, 2, rw_t<uint32_t>> f_REIMERR;
            // BUFBUSY field
            typedef field_t<uint32_t, 0x4000b00c, 0x1, 4, rw_t<uint32_t>> f_BUFBUSY;
            // DMARDBUSY field
            typedef field_t<uint32_t, 0x4000b00c, 0x1, 5, rw_t<uint32_t>> f_DMARDBUSY;
            // DMAWRBUSY field
            typedef field_t<uint32_t, 0x4000b00c, 0x1, 6, rw_t<uint32_t>> f_DMAWRBUSY;
        } // end of SR
        namespace IMGSIZ {
            // IMGSIZ register
            typedef reg_t<uint32_t, 0x4000b010, rw_t<uint32_t>> r_IMGSIZ;
            enum mask_t{
                MASK_HPIX       = 0x00000200,
                MASK_VPIX       = 0x02000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_HPIX       = 0,
                OFFSET_VPIX       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_HPIX       = 10,
                WIDTH_VPIX       = 10,
            }; // endof width_t
            // HPIX field
            typedef field_t<uint32_t, 0x4000b010, 0x3ff, 0, rw_t<uint32_t>> f_HPIX;
            // VPIX field
            typedef field_t<uint32_t, 0x4000b010, 0x3ff, 16, rw_t<uint32_t>> f_VPIX;
        } // end of IMGSIZ
        namespace IMGSTR {
            // IMGSTR register
            typedef reg_t<uint32_t, 0x4000b014, rw_t<uint32_t>> r_IMGSTR;
            enum mask_t{
                MASK_RGBLINE    = 0x00000400,
                MASK_UVLINE     = 0x04000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RGBLINE    = 0,
                OFFSET_UVLINE     = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_RGBLINE    = 11,
                WIDTH_UVLINE     = 11,
            }; // endof width_t
            // RGBLINE field
            typedef field_t<uint32_t, 0x4000b014, 0x7ff, 0, rw_t<uint32_t>> f_RGBLINE;
            // UVLINE field
            typedef field_t<uint32_t, 0x4000b014, 0x7ff, 16, rw_t<uint32_t>> f_UVLINE;
        } // end of IMGSTR
        namespace CSBASE {
            // CSBASE register
            typedef reg_t<uint32_t, 0x4000b018, rw_t<uint32_t>> r_CSBASE;
        } // end of CSBASE
        namespace YBASE {
            // YBASE register
            typedef reg_t<uint32_t, 0x4000b01c, rw_t<uint32_t>> r_YBASE;
        } // end of YBASE
        namespace RGBASE {
            // RGBASE register
            typedef reg_t<uint32_t, 0x4000b01c, rw_t<uint32_t>> r_RGBASE;
        } // end of RGBASE
        namespace UBASE {
            // UBASE register
            typedef reg_t<uint32_t, 0x4000b020, rw_t<uint32_t>> r_UBASE;
        } // end of UBASE
        namespace VBASE {
            // VBASE register
            typedef reg_t<uint32_t, 0x4000b024, rw_t<uint32_t>> r_VBASE;
        } // end of VBASE
        namespace QTBASE {
            // QTBASE register
            typedef reg_t<uint32_t, 0x4000b028, rw_t<uint32_t>> r_QTBASE;
        } // end of QTBASE
        namespace HTBASE {
            // HTBASE register
            typedef reg_t<uint32_t, 0x4000b02c, rw_t<uint32_t>> r_HTBASE;
        } // end of HTBASE
        namespace CODLEN {
            // CODLEN register
            typedef reg_t<uint32_t, 0x4000b030, rw_t<uint32_t>> r_CODLEN;
        } // end of CODLEN
        namespace QTABLE0_ {
            // QTABLE0_ register
            typedef reg_t<uint32_t, 0x4000b100, wo_t<uint32_t>> r_QTABLE0__0;
            typedef reg_t<uint32_t, 0x4000b104, wo_t<uint32_t>> r_QTABLE0__1;
            typedef reg_t<uint32_t, 0x4000b108, wo_t<uint32_t>> r_QTABLE0__2;
            typedef reg_t<uint32_t, 0x4000b10c, wo_t<uint32_t>> r_QTABLE0__3;
            typedef reg_t<uint32_t, 0x4000b110, wo_t<uint32_t>> r_QTABLE0__4;
            typedef reg_t<uint32_t, 0x4000b114, wo_t<uint32_t>> r_QTABLE0__5;
            typedef reg_t<uint32_t, 0x4000b118, wo_t<uint32_t>> r_QTABLE0__6;
            typedef reg_t<uint32_t, 0x4000b11c, wo_t<uint32_t>> r_QTABLE0__7;
            typedef reg_t<uint32_t, 0x4000b120, wo_t<uint32_t>> r_QTABLE0__8;
            typedef reg_t<uint32_t, 0x4000b124, wo_t<uint32_t>> r_QTABLE0__9;
            typedef reg_t<uint32_t, 0x4000b128, wo_t<uint32_t>> r_QTABLE0__10;
            typedef reg_t<uint32_t, 0x4000b12c, wo_t<uint32_t>> r_QTABLE0__11;
            typedef reg_t<uint32_t, 0x4000b130, wo_t<uint32_t>> r_QTABLE0__12;
            typedef reg_t<uint32_t, 0x4000b134, wo_t<uint32_t>> r_QTABLE0__13;
            typedef reg_t<uint32_t, 0x4000b138, wo_t<uint32_t>> r_QTABLE0__14;
            typedef reg_t<uint32_t, 0x4000b13c, wo_t<uint32_t>> r_QTABLE0__15;
        } // end of QTABLE0_[%s]
        namespace QTABLE1_ {
            // QTABLE1_ register
            typedef reg_t<uint32_t, 0x4000b140, wo_t<uint32_t>> r_QTABLE1__0;
            typedef reg_t<uint32_t, 0x4000b144, wo_t<uint32_t>> r_QTABLE1__1;
            typedef reg_t<uint32_t, 0x4000b148, wo_t<uint32_t>> r_QTABLE1__2;
            typedef reg_t<uint32_t, 0x4000b14c, wo_t<uint32_t>> r_QTABLE1__3;
            typedef reg_t<uint32_t, 0x4000b150, wo_t<uint32_t>> r_QTABLE1__4;
            typedef reg_t<uint32_t, 0x4000b154, wo_t<uint32_t>> r_QTABLE1__5;
            typedef reg_t<uint32_t, 0x4000b158, wo_t<uint32_t>> r_QTABLE1__6;
            typedef reg_t<uint32_t, 0x4000b15c, wo_t<uint32_t>> r_QTABLE1__7;
            typedef reg_t<uint32_t, 0x4000b160, wo_t<uint32_t>> r_QTABLE1__8;
            typedef reg_t<uint32_t, 0x4000b164, wo_t<uint32_t>> r_QTABLE1__9;
            typedef reg_t<uint32_t, 0x4000b168, wo_t<uint32_t>> r_QTABLE1__10;
            typedef reg_t<uint32_t, 0x4000b16c, wo_t<uint32_t>> r_QTABLE1__11;
            typedef reg_t<uint32_t, 0x4000b170, wo_t<uint32_t>> r_QTABLE1__12;
            typedef reg_t<uint32_t, 0x4000b174, wo_t<uint32_t>> r_QTABLE1__13;
            typedef reg_t<uint32_t, 0x4000b178, wo_t<uint32_t>> r_QTABLE1__14;
            typedef reg_t<uint32_t, 0x4000b17c, wo_t<uint32_t>> r_QTABLE1__15;
        } // end of QTABLE1_[%s]
        namespace QTABLE2_ {
            // QTABLE2_ register
            typedef reg_t<uint32_t, 0x4000b180, wo_t<uint32_t>> r_QTABLE2__0;
            typedef reg_t<uint32_t, 0x4000b184, wo_t<uint32_t>> r_QTABLE2__1;
            typedef reg_t<uint32_t, 0x4000b188, wo_t<uint32_t>> r_QTABLE2__2;
            typedef reg_t<uint32_t, 0x4000b18c, wo_t<uint32_t>> r_QTABLE2__3;
            typedef reg_t<uint32_t, 0x4000b190, wo_t<uint32_t>> r_QTABLE2__4;
            typedef reg_t<uint32_t, 0x4000b194, wo_t<uint32_t>> r_QTABLE2__5;
            typedef reg_t<uint32_t, 0x4000b198, wo_t<uint32_t>> r_QTABLE2__6;
            typedef reg_t<uint32_t, 0x4000b19c, wo_t<uint32_t>> r_QTABLE2__7;
            typedef reg_t<uint32_t, 0x4000b1a0, wo_t<uint32_t>> r_QTABLE2__8;
            typedef reg_t<uint32_t, 0x4000b1a4, wo_t<uint32_t>> r_QTABLE2__9;
            typedef reg_t<uint32_t, 0x4000b1a8, wo_t<uint32_t>> r_QTABLE2__10;
            typedef reg_t<uint32_t, 0x4000b1ac, wo_t<uint32_t>> r_QTABLE2__11;
            typedef reg_t<uint32_t, 0x4000b1b0, wo_t<uint32_t>> r_QTABLE2__12;
            typedef reg_t<uint32_t, 0x4000b1b4, wo_t<uint32_t>> r_QTABLE2__13;
            typedef reg_t<uint32_t, 0x4000b1b8, wo_t<uint32_t>> r_QTABLE2__14;
            typedef reg_t<uint32_t, 0x4000b1bc, wo_t<uint32_t>> r_QTABLE2__15;
        } // end of QTABLE2_[%s]
        namespace HTABLE0 {
            // register cluster
            namespace DC_CODEWORD[%S] {
                typedef reg_t<uint32_t, 0x4000b200, wo_t<uint32_t>> r_DC_CODEWORD[%s];
            } // end of DC_CODEWORD[%S]
            namespace DC_CODELEN[%S] {
                typedef reg_t<uint32_t, 0x4000b218, wo_t<uint32_t>> r_DC_CODELEN[%s];
            } // end of DC_CODELEN[%S]
            namespace DC_CODEVAL[%S] {
                typedef reg_t<uint32_t, 0x4000b220, wo_t<uint32_t>> r_DC_CODEVAL[%s];
            } // end of DC_CODEVAL[%S]
            namespace AC_CODEWORD[%S] {
                typedef reg_t<uint32_t, 0x4000b228, wo_t<uint32_t>> r_AC_CODEWORD[%s];
            } // end of AC_CODEWORD[%S]
            namespace AC_CODEADDR[%S] {
                typedef reg_t<uint32_t, 0x4000b248, wo_t<uint32_t>> r_AC_CODEADDR[%s];
            } // end of AC_CODEADDR[%S]
            namespace AC_CODEVAL[%S] {
                typedef reg_t<uint32_t, 0x4000b258, wo_t<uint32_t>> r_AC_CODEVAL[%s];
            } // end of AC_CODEVAL[%S]
        } // end of HTABLE0
        namespace HTABLE1 {
            // register cluster
            namespace DC_CODEWORD[%S] {
                typedef reg_t<uint32_t, 0x4000b300, wo_t<uint32_t>> r_DC_CODEWORD[%s];
            } // end of DC_CODEWORD[%S]
            namespace DC_CODELEN[%S] {
                typedef reg_t<uint32_t, 0x4000b318, wo_t<uint32_t>> r_DC_CODELEN[%s];
            } // end of DC_CODELEN[%S]
            namespace DC_CODEVAL[%S] {
                typedef reg_t<uint32_t, 0x4000b320, wo_t<uint32_t>> r_DC_CODEVAL[%s];
            } // end of DC_CODEVAL[%S]
            namespace AC_CODEWORD[%S] {
                typedef reg_t<uint32_t, 0x4000b328, wo_t<uint32_t>> r_AC_CODEWORD[%s];
            } // end of AC_CODEWORD[%S]
            namespace AC_CODEADDR[%S] {
                typedef reg_t<uint32_t, 0x4000b348, wo_t<uint32_t>> r_AC_CODEADDR[%s];
            } // end of AC_CODEADDR[%S]
            namespace AC_CODEVAL[%S] {
                typedef reg_t<uint32_t, 0x4000b358, wo_t<uint32_t>> r_AC_CODEVAL[%s];
            } // end of AC_CODEVAL[%S]
        } // end of HTABLE1
    } // end of JPEG
} // end of PAC
#endif // end of #if USING_JPEG
