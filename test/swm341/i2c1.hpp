#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_I2C1) && (USING_I2C1 != 0))
namespace PAC {
    namespace I2C1 {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x400a6800, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_EN         = 0x00000001,
                MASK_MASTER     = 0x00000002,
                MASK_HS         = 0x00000004,
                MASK_DNF        = 0x00000040,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
                OFFSET_MASTER     = 1,
                OFFSET_HS         = 2,
                OFFSET_DNF        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_MASTER     = 1,
                WIDTH_HS         = 1,
                WIDTH_DNF        = 4,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x400a6800, 0x1, 0, rw_t<uint32_t>> f_EN;
            // MASTER field
            typedef field_t<uint32_t, 0x400a6800, 0x1, 1, rw_t<uint32_t>> f_MASTER;
            // HS field
            typedef field_t<uint32_t, 0x400a6800, 0x1, 2, rw_t<uint32_t>> f_HS;
            // DNF field
            typedef field_t<uint32_t, 0x400a6800, 0xf, 3, rw_t<uint32_t>> f_DNF;
        } // end of CR
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x400a6804, rw_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_BUSY       = 0x00000001,
                MASK_SCL        = 0x00000002,
                MASK_SDA        = 0x00000004,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BUSY       = 0,
                OFFSET_SCL        = 1,
                OFFSET_SDA        = 2,
            }; // endof offset_t
            enum width_t{
                WIDTH_BUSY       = 1,
                WIDTH_SCL        = 1,
                WIDTH_SDA        = 1,
            }; // endof width_t
            // BUSY field
            typedef field_t<uint32_t, 0x400a6804, 0x1, 0, rw_t<uint32_t>> f_BUSY;
            // SCL field
            typedef field_t<uint32_t, 0x400a6804, 0x1, 1, rw_t<uint32_t>> f_SCL;
            // SDA field
            typedef field_t<uint32_t, 0x400a6804, 0x1, 2, rw_t<uint32_t>> f_SDA;
        } // end of SR
        namespace TR {
            // TR register
            typedef reg_t<uint32_t, 0x400a6808, rw_t<uint32_t>> r_TR;
            enum mask_t{
                MASK_TXACK      = 0x00000001,
                MASK_RXACK      = 0x00000002,
                MASK_TXCLR      = 0x00000004,
                MASK_SLVACT     = 0x00000100,
                MASK_SLVRD      = 0x00000200,
                MASK_SLVWR      = 0x00000400,
                MASK_SLVSTR     = 0x00000800,
                MASK_SLVRDS     = 0x00002000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TXACK      = 0,
                OFFSET_RXACK      = 1,
                OFFSET_TXCLR      = 2,
                OFFSET_SLVACT     = 8,
                OFFSET_SLVRD      = 9,
                OFFSET_SLVWR      = 10,
                OFFSET_SLVSTR     = 11,
                OFFSET_SLVRDS     = 12,
            }; // endof offset_t
            enum width_t{
                WIDTH_TXACK      = 1,
                WIDTH_RXACK      = 1,
                WIDTH_TXCLR      = 1,
                WIDTH_SLVACT     = 1,
                WIDTH_SLVRD      = 1,
                WIDTH_SLVWR      = 1,
                WIDTH_SLVSTR     = 1,
                WIDTH_SLVRDS     = 2,
            }; // endof width_t
            // TXACK field
            typedef field_t<uint32_t, 0x400a6808, 0x1, 0, rw_t<uint32_t>> f_TXACK;
            // RXACK field
            typedef field_t<uint32_t, 0x400a6808, 0x1, 1, rw_t<uint32_t>> f_RXACK;
            // TXCLR field
            typedef field_t<uint32_t, 0x400a6808, 0x1, 2, rw_t<uint32_t>> f_TXCLR;
            // SLVACT field
            typedef field_t<uint32_t, 0x400a6808, 0x1, 8, rw_t<uint32_t>> f_SLVACT;
            // SLVRD field
            typedef field_t<uint32_t, 0x400a6808, 0x1, 9, rw_t<uint32_t>> f_SLVRD;
            // SLVWR field
            typedef field_t<uint32_t, 0x400a6808, 0x1, 10, rw_t<uint32_t>> f_SLVWR;
            // SLVSTR field
            typedef field_t<uint32_t, 0x400a6808, 0x1, 11, rw_t<uint32_t>> f_SLVSTR;
            // SLVRDS field
            typedef field_t<uint32_t, 0x400a6808, 0x3, 12, rw_t<uint32_t>> f_SLVRDS;
        } // end of TR
        namespace RXDATA {
            // RXDATA register
            typedef reg_t<uint32_t, 0x400a680c, rw_t<uint32_t>> r_RXDATA;
        } // end of RXDATA
        namespace TXDATA {
            // TXDATA register
            typedef reg_t<uint32_t, 0x400a6810, rw_t<uint32_t>> r_TXDATA;
        } // end of TXDATA
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x400a6814, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_TXE        = 0x00000001,
                MASK_RXNE       = 0x00000002,
                MASK_RXOV       = 0x00000004,
                MASK_TXDONE     = 0x00000008,
                MASK_RXDONE     = 0x00000010,
                MASK_RXSTA      = 0x00000100,
                MASK_RXSTO      = 0x00000200,
                MASK_AL         = 0x00010000,
                MASK_MLTO       = 0x00020000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TXE        = 0,
                OFFSET_RXNE       = 1,
                OFFSET_RXOV       = 2,
                OFFSET_TXDONE     = 3,
                OFFSET_RXDONE     = 4,
                OFFSET_RXSTA      = 8,
                OFFSET_RXSTO      = 9,
                OFFSET_AL         = 16,
                OFFSET_MLTO       = 17,
            }; // endof offset_t
            enum width_t{
                WIDTH_TXE        = 1,
                WIDTH_RXNE       = 1,
                WIDTH_RXOV       = 1,
                WIDTH_TXDONE     = 1,
                WIDTH_RXDONE     = 1,
                WIDTH_RXSTA      = 1,
                WIDTH_RXSTO      = 1,
                WIDTH_AL         = 1,
                WIDTH_MLTO       = 1,
            }; // endof width_t
            // TXE field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 0, rw_t<uint32_t>> f_TXE;
            // RXNE field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 1, rw_t<uint32_t>> f_RXNE;
            // RXOV field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 2, rw_t<uint32_t>> f_RXOV;
            // TXDONE field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 3, rw_t<uint32_t>> f_TXDONE;
            // RXDONE field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 4, rw_t<uint32_t>> f_RXDONE;
            // RXSTA field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 8, rw_t<uint32_t>> f_RXSTA;
            // RXSTO field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 9, rw_t<uint32_t>> f_RXSTO;
            // AL field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 16, rw_t<uint32_t>> f_AL;
            // MLTO field
            typedef field_t<uint32_t, 0x400a6814, 0x1, 17, rw_t<uint32_t>> f_MLTO;
        } // end of IF
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x400a6818, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_TXE        = 0x00000001,
                MASK_RXNE       = 0x00000002,
                MASK_RXOV       = 0x00000004,
                MASK_TXDONE     = 0x00000008,
                MASK_RXDONE     = 0x00000010,
                MASK_RXSTA      = 0x00000100,
                MASK_RXSTO      = 0x00000200,
                MASK_AL         = 0x00010000,
                MASK_MLTO       = 0x00020000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TXE        = 0,
                OFFSET_RXNE       = 1,
                OFFSET_RXOV       = 2,
                OFFSET_TXDONE     = 3,
                OFFSET_RXDONE     = 4,
                OFFSET_RXSTA      = 8,
                OFFSET_RXSTO      = 9,
                OFFSET_AL         = 16,
                OFFSET_MLTO       = 17,
            }; // endof offset_t
            enum width_t{
                WIDTH_TXE        = 1,
                WIDTH_RXNE       = 1,
                WIDTH_RXOV       = 1,
                WIDTH_TXDONE     = 1,
                WIDTH_RXDONE     = 1,
                WIDTH_RXSTA      = 1,
                WIDTH_RXSTO      = 1,
                WIDTH_AL         = 1,
                WIDTH_MLTO       = 1,
            }; // endof width_t
            // TXE field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 0, rw_t<uint32_t>> f_TXE;
            // RXNE field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 1, rw_t<uint32_t>> f_RXNE;
            // RXOV field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 2, rw_t<uint32_t>> f_RXOV;
            // TXDONE field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 3, rw_t<uint32_t>> f_TXDONE;
            // RXDONE field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 4, rw_t<uint32_t>> f_RXDONE;
            // RXSTA field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 8, rw_t<uint32_t>> f_RXSTA;
            // RXSTO field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 9, rw_t<uint32_t>> f_RXSTO;
            // AL field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 16, rw_t<uint32_t>> f_AL;
            // MLTO field
            typedef field_t<uint32_t, 0x400a6818, 0x1, 17, rw_t<uint32_t>> f_MLTO;
        } // end of IE
        namespace MCR {
            // MCR register
            typedef reg_t<uint32_t, 0x400a6820, rw_t<uint32_t>> r_MCR;
            enum mask_t{
                MASK_STA        = 0x00000001,
                MASK_RD         = 0x00000002,
                MASK_WR         = 0x00000004,
                MASK_STO        = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_STA        = 0,
                OFFSET_RD         = 1,
                OFFSET_WR         = 2,
                OFFSET_STO        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_STA        = 1,
                WIDTH_RD         = 1,
                WIDTH_WR         = 1,
                WIDTH_STO        = 1,
            }; // endof width_t
            // STA field
            typedef field_t<uint32_t, 0x400a6820, 0x1, 0, rw_t<uint32_t>> f_STA;
            // RD field
            typedef field_t<uint32_t, 0x400a6820, 0x1, 1, rw_t<uint32_t>> f_RD;
            // WR field
            typedef field_t<uint32_t, 0x400a6820, 0x1, 2, rw_t<uint32_t>> f_WR;
            // STO field
            typedef field_t<uint32_t, 0x400a6820, 0x1, 3, rw_t<uint32_t>> f_STO;
        } // end of MCR
        namespace CLK {
            // CLK register
            typedef reg_t<uint32_t, 0x400a6824, rw_t<uint32_t>> r_CLK;
            enum mask_t{
                MASK_SCLL       = 0x00000080,
                MASK_SCLH       = 0x00008000,
                MASK_DIV        = 0x00800000,
                MASK_SDAH       = 0x08000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SCLL       = 0,
                OFFSET_SCLH       = 8,
                OFFSET_DIV        = 16,
                OFFSET_SDAH       = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_SCLL       = 8,
                WIDTH_SCLH       = 8,
                WIDTH_DIV        = 8,
                WIDTH_SDAH       = 4,
            }; // endof width_t
            // SCLL field
            typedef field_t<uint32_t, 0x400a6824, 0xff, 0, rw_t<uint32_t>> f_SCLL;
            // SCLH field
            typedef field_t<uint32_t, 0x400a6824, 0xff, 8, rw_t<uint32_t>> f_SCLH;
            // DIV field
            typedef field_t<uint32_t, 0x400a6824, 0xff, 16, rw_t<uint32_t>> f_DIV;
            // SDAH field
            typedef field_t<uint32_t, 0x400a6824, 0xf, 24, rw_t<uint32_t>> f_SDAH;
        } // end of CLK
        namespace SCR {
            // SCR register
            typedef reg_t<uint32_t, 0x400a6830, rw_t<uint32_t>> r_SCR;
            enum mask_t{
                MASK_ADDR10     = 0x00000001,
                MASK_MCDE       = 0x00000002,
                MASK_STRE       = 0x00000004,
                MASK_ASDS       = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ADDR10     = 0,
                OFFSET_MCDE       = 1,
                OFFSET_STRE       = 2,
                OFFSET_ASDS       = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_ADDR10     = 1,
                WIDTH_MCDE       = 1,
                WIDTH_STRE       = 1,
                WIDTH_ASDS       = 1,
            }; // endof width_t
            // ADDR10 field
            typedef field_t<uint32_t, 0x400a6830, 0x1, 0, rw_t<uint32_t>> f_ADDR10;
            // MCDE field
            typedef field_t<uint32_t, 0x400a6830, 0x1, 1, rw_t<uint32_t>> f_MCDE;
            // STRE field
            typedef field_t<uint32_t, 0x400a6830, 0x1, 2, rw_t<uint32_t>> f_STRE;
            // ASDS field
            typedef field_t<uint32_t, 0x400a6830, 0x1, 3, rw_t<uint32_t>> f_ASDS;
        } // end of SCR
        namespace SADDR {
            // SADDR register
            typedef reg_t<uint32_t, 0x400a6834, rw_t<uint32_t>> r_SADDR;
            enum mask_t{
                MASK_ADDR7      = 0x00000080,
                MASK_MASK7      = 0x00800000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ADDR7      = 1,
                OFFSET_MASK7      = 17,
            }; // endof offset_t
            enum width_t{
                WIDTH_ADDR7      = 7,
                WIDTH_MASK7      = 7,
            }; // endof width_t
            // ADDR7 field
            typedef field_t<uint32_t, 0x400a6834, 0x7f, 1, rw_t<uint32_t>> f_ADDR7;
            // MASK7 field
            typedef field_t<uint32_t, 0x400a6834, 0x7f, 17, rw_t<uint32_t>> f_MASK7;
        } // end of SADDR
    } // end of I2C0
} // end of PAC
#endif // end of #if USING_I2C0
