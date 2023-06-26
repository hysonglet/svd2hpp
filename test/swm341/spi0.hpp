#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_SPI0) && (USING_SPI0 != 0))
namespace PAC {
    namespace SPI0 {
        namespace CTRL {
            // CTRL register
            typedef reg_t<uint32_t, 0x40044000, rw_t<uint32_t>> r_CTRL;
            enum mask_t{
                MASK_CLKDIV     = 0x00000004,
                MASK_EN         = 0x00000008,
                MASK_SIZE       = 0x00000080,
                MASK_CPHA       = 0x00000100,
                MASK_CPOL       = 0x00000200,
                MASK_FFS        = 0x00000800,
                MASK_MSTR       = 0x00001000,
                MASK_FAST       = 0x00002000,
                MASK_DMATXEN    = 0x00004000,
                MASK_DMARXEN    = 0x00008000,
                MASK_FILTE      = 0x00010000,
                MASK_SSN_H      = 0x00020000,
                MASK_RFTHR      = 0x00100000,
                MASK_TFTHR      = 0x00800000,
                MASK_RFCLR      = 0x01000000,
                MASK_TFCLR      = 0x02000000,
                MASK_LSBF       = 0x10000000,
                MASK_NSYNC      = 0x20000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CLKDIV     = 0,
                OFFSET_EN         = 3,
                OFFSET_SIZE       = 4,
                OFFSET_CPHA       = 8,
                OFFSET_CPOL       = 9,
                OFFSET_FFS        = 10,
                OFFSET_MSTR       = 12,
                OFFSET_FAST       = 13,
                OFFSET_DMATXEN    = 14,
                OFFSET_DMARXEN    = 15,
                OFFSET_FILTE      = 16,
                OFFSET_SSN_H      = 17,
                OFFSET_RFTHR      = 18,
                OFFSET_TFTHR      = 21,
                OFFSET_RFCLR      = 24,
                OFFSET_TFCLR      = 25,
                OFFSET_LSBF       = 28,
                OFFSET_NSYNC      = 29,
            }; // endof offset_t
            enum width_t{
                WIDTH_CLKDIV     = 3,
                WIDTH_EN         = 1,
                WIDTH_SIZE       = 4,
                WIDTH_CPHA       = 1,
                WIDTH_CPOL       = 1,
                WIDTH_FFS        = 2,
                WIDTH_MSTR       = 1,
                WIDTH_FAST       = 1,
                WIDTH_DMATXEN    = 1,
                WIDTH_DMARXEN    = 1,
                WIDTH_FILTE      = 1,
                WIDTH_SSN_H      = 1,
                WIDTH_RFTHR      = 3,
                WIDTH_TFTHR      = 3,
                WIDTH_RFCLR      = 1,
                WIDTH_TFCLR      = 1,
                WIDTH_LSBF       = 1,
                WIDTH_NSYNC      = 1,
            }; // endof width_t
            // CLKDIV field
            typedef field_t<uint32_t, 0x40044000, 0x7, 0, rw_t<uint32_t>> f_CLKDIV;
            // EN field
            typedef field_t<uint32_t, 0x40044000, 0x1, 3, rw_t<uint32_t>> f_EN;
            // SIZE field
            typedef field_t<uint32_t, 0x40044000, 0xf, 4, rw_t<uint32_t>> f_SIZE;
            // CPHA field
            typedef field_t<uint32_t, 0x40044000, 0x1, 8, rw_t<uint32_t>> f_CPHA;
            // CPOL field
            typedef field_t<uint32_t, 0x40044000, 0x1, 9, rw_t<uint32_t>> f_CPOL;
            // FFS field
            typedef field_t<uint32_t, 0x40044000, 0x3, 10, rw_t<uint32_t>> f_FFS;
            // MSTR field
            typedef field_t<uint32_t, 0x40044000, 0x1, 12, rw_t<uint32_t>> f_MSTR;
            // FAST field
            typedef field_t<uint32_t, 0x40044000, 0x1, 13, rw_t<uint32_t>> f_FAST;
            // DMATXEN field
            typedef field_t<uint32_t, 0x40044000, 0x1, 14, rw_t<uint32_t>> f_DMATXEN;
            // DMARXEN field
            typedef field_t<uint32_t, 0x40044000, 0x1, 15, rw_t<uint32_t>> f_DMARXEN;
            // FILTE field
            typedef field_t<uint32_t, 0x40044000, 0x1, 16, rw_t<uint32_t>> f_FILTE;
            // SSN_H field
            typedef field_t<uint32_t, 0x40044000, 0x1, 17, rw_t<uint32_t>> f_SSN_H;
            // RFTHR field
            typedef field_t<uint32_t, 0x40044000, 0x7, 18, rw_t<uint32_t>> f_RFTHR;
            // TFTHR field
            typedef field_t<uint32_t, 0x40044000, 0x7, 21, rw_t<uint32_t>> f_TFTHR;
            // RFCLR field
            typedef field_t<uint32_t, 0x40044000, 0x1, 24, rw_t<uint32_t>> f_RFCLR;
            // TFCLR field
            typedef field_t<uint32_t, 0x40044000, 0x1, 25, rw_t<uint32_t>> f_TFCLR;
            // LSBF field
            typedef field_t<uint32_t, 0x40044000, 0x1, 28, rw_t<uint32_t>> f_LSBF;
            // NSYNC field
            typedef field_t<uint32_t, 0x40044000, 0x1, 29, rw_t<uint32_t>> f_NSYNC;
        } // end of CTRL
        namespace DATA {
            // DATA register
            typedef reg_t<uint32_t, 0x40044004, rw_t<uint32_t>> r_DATA;
        } // end of DATA
        namespace STAT {
            // STAT register
            typedef reg_t<uint32_t, 0x40044008, rw_t<uint32_t>> r_STAT;
            enum mask_t{
                MASK_WTC        = 0x00000001,
                MASK_TFE        = 0x00000002,
                MASK_TFNF       = 0x00000004,
                MASK_RFNE       = 0x00000008,
                MASK_RFF        = 0x00000010,
                MASK_RFOV       = 0x00000020,
                MASK_TFLVL      = 0x00000100,
                MASK_RFLVL      = 0x00000800,
                MASK_BUSY       = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_WTC        = 0,
                OFFSET_TFE        = 1,
                OFFSET_TFNF       = 2,
                OFFSET_RFNE       = 3,
                OFFSET_RFF        = 4,
                OFFSET_RFOV       = 5,
                OFFSET_TFLVL      = 6,
                OFFSET_RFLVL      = 9,
                OFFSET_BUSY       = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_WTC        = 1,
                WIDTH_TFE        = 1,
                WIDTH_TFNF       = 1,
                WIDTH_RFNE       = 1,
                WIDTH_RFF        = 1,
                WIDTH_RFOV       = 1,
                WIDTH_TFLVL      = 3,
                WIDTH_RFLVL      = 3,
                WIDTH_BUSY       = 1,
            }; // endof width_t
            // WTC field
            typedef field_t<uint32_t, 0x40044008, 0x1, 0, rw_t<uint32_t>> f_WTC;
            // TFE field
            typedef field_t<uint32_t, 0x40044008, 0x1, 1, rw_t<uint32_t>> f_TFE;
            // TFNF field
            typedef field_t<uint32_t, 0x40044008, 0x1, 2, rw_t<uint32_t>> f_TFNF;
            // RFNE field
            typedef field_t<uint32_t, 0x40044008, 0x1, 3, rw_t<uint32_t>> f_RFNE;
            // RFF field
            typedef field_t<uint32_t, 0x40044008, 0x1, 4, rw_t<uint32_t>> f_RFF;
            // RFOV field
            typedef field_t<uint32_t, 0x40044008, 0x1, 5, rw_t<uint32_t>> f_RFOV;
            // TFLVL field
            typedef field_t<uint32_t, 0x40044008, 0x7, 6, rw_t<uint32_t>> f_TFLVL;
            // RFLVL field
            typedef field_t<uint32_t, 0x40044008, 0x7, 9, rw_t<uint32_t>> f_RFLVL;
            // BUSY field
            typedef field_t<uint32_t, 0x40044008, 0x1, 15, rw_t<uint32_t>> f_BUSY;
        } // end of STAT
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x4004400c, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_RFOV       = 0x00000001,
                MASK_RFF        = 0x00000002,
                MASK_RFHF       = 0x00000004,
                MASK_TFE        = 0x00000008,
                MASK_TFHF       = 0x00000010,
                MASK_RFTHR      = 0x00000020,
                MASK_TFTHR      = 0x00000040,
                MASK_WTC        = 0x00000100,
                MASK_FTC        = 0x00000200,
                MASK_SSFALL     = 0x00000400,
                MASK_SSRISE     = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RFOV       = 0,
                OFFSET_RFF        = 1,
                OFFSET_RFHF       = 2,
                OFFSET_TFE        = 3,
                OFFSET_TFHF       = 4,
                OFFSET_RFTHR      = 5,
                OFFSET_TFTHR      = 6,
                OFFSET_WTC        = 8,
                OFFSET_FTC        = 9,
                OFFSET_SSFALL     = 10,
                OFFSET_SSRISE     = 11,
            }; // endof offset_t
            enum width_t{
                WIDTH_RFOV       = 1,
                WIDTH_RFF        = 1,
                WIDTH_RFHF       = 1,
                WIDTH_TFE        = 1,
                WIDTH_TFHF       = 1,
                WIDTH_RFTHR      = 1,
                WIDTH_TFTHR      = 1,
                WIDTH_WTC        = 1,
                WIDTH_FTC        = 1,
                WIDTH_SSFALL     = 1,
                WIDTH_SSRISE     = 1,
            }; // endof width_t
            // RFOV field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 0, rw_t<uint32_t>> f_RFOV;
            // RFF field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 1, rw_t<uint32_t>> f_RFF;
            // RFHF field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 2, rw_t<uint32_t>> f_RFHF;
            // TFE field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 3, rw_t<uint32_t>> f_TFE;
            // TFHF field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 4, rw_t<uint32_t>> f_TFHF;
            // RFTHR field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 5, rw_t<uint32_t>> f_RFTHR;
            // TFTHR field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 6, rw_t<uint32_t>> f_TFTHR;
            // WTC field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 8, rw_t<uint32_t>> f_WTC;
            // FTC field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 9, rw_t<uint32_t>> f_FTC;
            // SSFALL field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 10, rw_t<uint32_t>> f_SSFALL;
            // SSRISE field
            typedef field_t<uint32_t, 0x4004400c, 0x1, 11, rw_t<uint32_t>> f_SSRISE;
        } // end of IE
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x40044010, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_RFOV       = 0x00000001,
                MASK_RFF        = 0x00000002,
                MASK_RFHF       = 0x00000004,
                MASK_TFE        = 0x00000008,
                MASK_TFHF       = 0x00000010,
                MASK_RFTHR      = 0x00000020,
                MASK_TFTHR      = 0x00000040,
                MASK_WTC        = 0x00000100,
                MASK_FTC        = 0x00000200,
                MASK_SSFALL     = 0x00000400,
                MASK_SSRISE     = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RFOV       = 0,
                OFFSET_RFF        = 1,
                OFFSET_RFHF       = 2,
                OFFSET_TFE        = 3,
                OFFSET_TFHF       = 4,
                OFFSET_RFTHR      = 5,
                OFFSET_TFTHR      = 6,
                OFFSET_WTC        = 8,
                OFFSET_FTC        = 9,
                OFFSET_SSFALL     = 10,
                OFFSET_SSRISE     = 11,
            }; // endof offset_t
            enum width_t{
                WIDTH_RFOV       = 1,
                WIDTH_RFF        = 1,
                WIDTH_RFHF       = 1,
                WIDTH_TFE        = 1,
                WIDTH_TFHF       = 1,
                WIDTH_RFTHR      = 1,
                WIDTH_TFTHR      = 1,
                WIDTH_WTC        = 1,
                WIDTH_FTC        = 1,
                WIDTH_SSFALL     = 1,
                WIDTH_SSRISE     = 1,
            }; // endof width_t
            // RFOV field
            typedef field_t<uint32_t, 0x40044010, 0x1, 0, rw_t<uint32_t>> f_RFOV;
            // RFF field
            typedef field_t<uint32_t, 0x40044010, 0x1, 1, rw_t<uint32_t>> f_RFF;
            // RFHF field
            typedef field_t<uint32_t, 0x40044010, 0x1, 2, rw_t<uint32_t>> f_RFHF;
            // TFE field
            typedef field_t<uint32_t, 0x40044010, 0x1, 3, rw_t<uint32_t>> f_TFE;
            // TFHF field
            typedef field_t<uint32_t, 0x40044010, 0x1, 4, rw_t<uint32_t>> f_TFHF;
            // RFTHR field
            typedef field_t<uint32_t, 0x40044010, 0x1, 5, rw_t<uint32_t>> f_RFTHR;
            // TFTHR field
            typedef field_t<uint32_t, 0x40044010, 0x1, 6, rw_t<uint32_t>> f_TFTHR;
            // WTC field
            typedef field_t<uint32_t, 0x40044010, 0x1, 8, rw_t<uint32_t>> f_WTC;
            // FTC field
            typedef field_t<uint32_t, 0x40044010, 0x1, 9, rw_t<uint32_t>> f_FTC;
            // SSFALL field
            typedef field_t<uint32_t, 0x40044010, 0x1, 10, rw_t<uint32_t>> f_SSFALL;
            // SSRISE field
            typedef field_t<uint32_t, 0x40044010, 0x1, 11, rw_t<uint32_t>> f_SSRISE;
        } // end of IF
        namespace I2SCR {
            // I2SCR register
            typedef reg_t<uint32_t, 0x40044014, rw_t<uint32_t>> r_I2SCR;
            enum mask_t{
                MASK_DIEN       = 0x00000001,
                MASK_DOEN       = 0x00000002,
                MASK_MSTR       = 0x00000004,
                MASK_EN         = 0x00000008,
                MASK_FFMT       = 0x00000020,
                MASK_DLEN       = 0x00000080,
                MASK_PCMSYNW    = 0x00000100,
                MASK_MCLKOE     = 0x00000200,
                MASK_CHLEN      = 0x00000400,
                MASK_CHRIGHT    = 0x00010000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DIEN       = 0,
                OFFSET_DOEN       = 1,
                OFFSET_MSTR       = 2,
                OFFSET_EN         = 3,
                OFFSET_FFMT       = 4,
                OFFSET_DLEN       = 6,
                OFFSET_PCMSYNW    = 8,
                OFFSET_MCLKOE     = 9,
                OFFSET_CHLEN      = 10,
                OFFSET_CHRIGHT    = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_DIEN       = 1,
                WIDTH_DOEN       = 1,
                WIDTH_MSTR       = 1,
                WIDTH_EN         = 1,
                WIDTH_FFMT       = 2,
                WIDTH_DLEN       = 2,
                WIDTH_PCMSYNW    = 1,
                WIDTH_MCLKOE     = 1,
                WIDTH_CHLEN      = 1,
                WIDTH_CHRIGHT    = 1,
            }; // endof width_t
            // DIEN field
            typedef field_t<uint32_t, 0x40044014, 0x1, 0, rw_t<uint32_t>> f_DIEN;
            // DOEN field
            typedef field_t<uint32_t, 0x40044014, 0x1, 1, rw_t<uint32_t>> f_DOEN;
            // MSTR field
            typedef field_t<uint32_t, 0x40044014, 0x1, 2, rw_t<uint32_t>> f_MSTR;
            // EN field
            typedef field_t<uint32_t, 0x40044014, 0x1, 3, rw_t<uint32_t>> f_EN;
            // FFMT field
            typedef field_t<uint32_t, 0x40044014, 0x3, 4, rw_t<uint32_t>> f_FFMT;
            // DLEN field
            typedef field_t<uint32_t, 0x40044014, 0x3, 6, rw_t<uint32_t>> f_DLEN;
            // PCMSYNW field
            typedef field_t<uint32_t, 0x40044014, 0x1, 8, rw_t<uint32_t>> f_PCMSYNW;
            // MCLKOE field
            typedef field_t<uint32_t, 0x40044014, 0x1, 9, rw_t<uint32_t>> f_MCLKOE;
            // CHLEN field
            typedef field_t<uint32_t, 0x40044014, 0x1, 10, rw_t<uint32_t>> f_CHLEN;
            // CHRIGHT field
            typedef field_t<uint32_t, 0x40044014, 0x1, 16, rw_t<uint32_t>> f_CHRIGHT;
        } // end of I2SCR
        namespace I2SPR {
            // I2SPR register
            typedef reg_t<uint32_t, 0x40044018, rw_t<uint32_t>> r_I2SPR;
            enum mask_t{
                MASK_MCLKDIV    = 0x00000020,
                MASK_SCLKDIV    = 0x00080000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_MCLKDIV    = 0,
                OFFSET_SCLKDIV    = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_MCLKDIV    = 6,
                WIDTH_SCLKDIV    = 12,
            }; // endof width_t
            // MCLKDIV field
            typedef field_t<uint32_t, 0x40044018, 0x3f, 0, rw_t<uint32_t>> f_MCLKDIV;
            // SCLKDIV field
            typedef field_t<uint32_t, 0x40044018, 0xfff, 8, rw_t<uint32_t>> f_SCLKDIV;
        } // end of I2SPR
    } // end of SPI0
} // end of PAC
#endif // end of #if USING_SPI0
