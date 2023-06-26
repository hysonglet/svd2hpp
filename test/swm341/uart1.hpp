#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_UART1) && (USING_UART1 != 0))
namespace PAC {
    namespace UART1 {
        namespace DATA {
            // DATA register
            typedef reg_t<uint32_t, 0x40042800, rw_t<uint32_t>> r_DATA;
            enum mask_t{
                MASK_DATA       = 0x00000100,
                MASK_VALID      = 0x00000200,
                MASK_PAERR      = 0x00000400,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DATA       = 0,
                OFFSET_VALID      = 9,
                OFFSET_PAERR      = 10,
            }; // endof offset_t
            enum width_t{
                WIDTH_DATA       = 9,
                WIDTH_VALID      = 1,
                WIDTH_PAERR      = 1,
            }; // endof width_t
            // DATA field
            typedef field_t<uint32_t, 0x40042800, 0x1ff, 0, rw_t<uint32_t>> f_DATA;
            // VALID field
            typedef field_t<uint32_t, 0x40042800, 0x1, 9, rw_t<uint32_t>> f_VALID;
            // PAERR field
            typedef field_t<uint32_t, 0x40042800, 0x1, 10, rw_t<uint32_t>> f_PAERR;
        } // end of DATA
        namespace CTRL {
            // CTRL register
            typedef reg_t<uint32_t, 0x40042804, rw_t<uint32_t>> r_CTRL;
            enum mask_t{
                MASK_TXIDLE     = 0x00000001,
                MASK_TXFF       = 0x00000002,
                MASK_TXIE       = 0x00000004,
                MASK_RXNE       = 0x00000008,
                MASK_RXIE       = 0x00000010,
                MASK_RXOV       = 0x00000020,
                MASK_TXDOIE     = 0x00000040,
                MASK_EN         = 0x00000200,
                MASK_LOOP       = 0x00000400,
                MASK_TOIE       = 0x00004000,
                MASK_DATA9B     = 0x00040000,
                MASK_PARITY     = 0x00200000,
                MASK_STOP2B     = 0x00800000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TXIDLE     = 0,
                OFFSET_TXFF       = 1,
                OFFSET_TXIE       = 2,
                OFFSET_RXNE       = 3,
                OFFSET_RXIE       = 4,
                OFFSET_RXOV       = 5,
                OFFSET_TXDOIE     = 6,
                OFFSET_EN         = 9,
                OFFSET_LOOP       = 10,
                OFFSET_TOIE       = 14,
                OFFSET_DATA9B     = 18,
                OFFSET_PARITY     = 19,
                OFFSET_STOP2B     = 22,
            }; // endof offset_t
            enum width_t{
                WIDTH_TXIDLE     = 1,
                WIDTH_TXFF       = 1,
                WIDTH_TXIE       = 1,
                WIDTH_RXNE       = 1,
                WIDTH_RXIE       = 1,
                WIDTH_RXOV       = 1,
                WIDTH_TXDOIE     = 1,
                WIDTH_EN         = 1,
                WIDTH_LOOP       = 1,
                WIDTH_TOIE       = 1,
                WIDTH_DATA9B     = 1,
                WIDTH_PARITY     = 3,
                WIDTH_STOP2B     = 2,
            }; // endof width_t
            // TXIDLE field
            typedef field_t<uint32_t, 0x40042804, 0x1, 0, rw_t<uint32_t>> f_TXIDLE;
            // TXFF field
            typedef field_t<uint32_t, 0x40042804, 0x1, 1, rw_t<uint32_t>> f_TXFF;
            // TXIE field
            typedef field_t<uint32_t, 0x40042804, 0x1, 2, rw_t<uint32_t>> f_TXIE;
            // RXNE field
            typedef field_t<uint32_t, 0x40042804, 0x1, 3, rw_t<uint32_t>> f_RXNE;
            // RXIE field
            typedef field_t<uint32_t, 0x40042804, 0x1, 4, rw_t<uint32_t>> f_RXIE;
            // RXOV field
            typedef field_t<uint32_t, 0x40042804, 0x1, 5, rw_t<uint32_t>> f_RXOV;
            // TXDOIE field
            typedef field_t<uint32_t, 0x40042804, 0x1, 6, rw_t<uint32_t>> f_TXDOIE;
            // EN field
            typedef field_t<uint32_t, 0x40042804, 0x1, 9, rw_t<uint32_t>> f_EN;
            // LOOP field
            typedef field_t<uint32_t, 0x40042804, 0x1, 10, rw_t<uint32_t>> f_LOOP;
            // TOIE field
            typedef field_t<uint32_t, 0x40042804, 0x1, 14, rw_t<uint32_t>> f_TOIE;
            // DATA9b field
            typedef field_t<uint32_t, 0x40042804, 0x1, 18, rw_t<uint32_t>> f_DATA9B;
            // PARITY field
            typedef field_t<uint32_t, 0x40042804, 0x7, 19, rw_t<uint32_t>> f_PARITY;
            // STOP2b field
            typedef field_t<uint32_t, 0x40042804, 0x3, 22, rw_t<uint32_t>> f_STOP2B;
        } // end of CTRL
        namespace BAUD {
            // BAUD register
            typedef reg_t<uint32_t, 0x40042808, rw_t<uint32_t>> r_BAUD;
            enum mask_t{
                MASK_BAUD       = 0x00002000,
                MASK_TXD        = 0x00004000,
                MASK_RXD        = 0x00008000,
                MASK_RXTOIF     = 0x00010000,
                MASK_TXIF       = 0x00020000,
                MASK_RXTHRF     = 0x00080000,
                MASK_TXTHRF     = 0x00100000,
                MASK_TOIF       = 0x00200000,
                MASK_RXIF       = 0x00400000,
                MASK_ABREN      = 0x00800000,
                MASK_ABRBIT     = 0x02000000,
                MASK_ABRERR     = 0x04000000,
                MASK_TXDOIF     = 0x08000000,
                MASK_FRAC       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BAUD       = 0,
                OFFSET_TXD        = 14,
                OFFSET_RXD        = 15,
                OFFSET_RXTOIF     = 16,
                OFFSET_TXIF       = 17,
                OFFSET_RXTHRF     = 19,
                OFFSET_TXTHRF     = 20,
                OFFSET_TOIF       = 21,
                OFFSET_RXIF       = 22,
                OFFSET_ABREN      = 23,
                OFFSET_ABRBIT     = 24,
                OFFSET_ABRERR     = 26,
                OFFSET_TXDOIF     = 27,
                OFFSET_FRAC       = 28,
            }; // endof offset_t
            enum width_t{
                WIDTH_BAUD       = 14,
                WIDTH_TXD        = 1,
                WIDTH_RXD        = 1,
                WIDTH_RXTOIF     = 1,
                WIDTH_TXIF       = 1,
                WIDTH_RXTHRF     = 1,
                WIDTH_TXTHRF     = 1,
                WIDTH_TOIF       = 1,
                WIDTH_RXIF       = 1,
                WIDTH_ABREN      = 1,
                WIDTH_ABRBIT     = 2,
                WIDTH_ABRERR     = 1,
                WIDTH_TXDOIF     = 1,
                WIDTH_FRAC       = 4,
            }; // endof width_t
            // BAUD field
            typedef field_t<uint32_t, 0x40042808, 0x3fff, 0, rw_t<uint32_t>> f_BAUD;
            // TXD field
            typedef field_t<uint32_t, 0x40042808, 0x1, 14, rw_t<uint32_t>> f_TXD;
            // RXD field
            typedef field_t<uint32_t, 0x40042808, 0x1, 15, rw_t<uint32_t>> f_RXD;
            // RXTOIF field
            typedef field_t<uint32_t, 0x40042808, 0x1, 16, rw_t<uint32_t>> f_RXTOIF;
            // TXIF field
            typedef field_t<uint32_t, 0x40042808, 0x1, 17, rw_t<uint32_t>> f_TXIF;
            // RXTHRF field
            typedef field_t<uint32_t, 0x40042808, 0x1, 19, rw_t<uint32_t>> f_RXTHRF;
            // TXTHRF field
            typedef field_t<uint32_t, 0x40042808, 0x1, 20, rw_t<uint32_t>> f_TXTHRF;
            // TOIF field
            typedef field_t<uint32_t, 0x40042808, 0x1, 21, rw_t<uint32_t>> f_TOIF;
            // RXIF field
            typedef field_t<uint32_t, 0x40042808, 0x1, 22, rw_t<uint32_t>> f_RXIF;
            // ABREN field
            typedef field_t<uint32_t, 0x40042808, 0x1, 23, rw_t<uint32_t>> f_ABREN;
            // ABRBIT field
            typedef field_t<uint32_t, 0x40042808, 0x3, 24, rw_t<uint32_t>> f_ABRBIT;
            // ABRERR field
            typedef field_t<uint32_t, 0x40042808, 0x1, 26, rw_t<uint32_t>> f_ABRERR;
            // TXDOIF field
            typedef field_t<uint32_t, 0x40042808, 0x1, 27, rw_t<uint32_t>> f_TXDOIF;
            // FRAC field
            typedef field_t<uint32_t, 0x40042808, 0xf, 28, rw_t<uint32_t>> f_FRAC;
        } // end of BAUD
        namespace FIFO {
            // FIFO register
            typedef reg_t<uint32_t, 0x4004280c, rw_t<uint32_t>> r_FIFO;
            enum mask_t{
                MASK_RXLVL      = 0x00000080,
                MASK_TXLVL      = 0x00008000,
                MASK_RXTHR      = 0x00800000,
                MASK_TXTHR      = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RXLVL      = 0,
                OFFSET_TXLVL      = 8,
                OFFSET_RXTHR      = 16,
                OFFSET_TXTHR      = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_RXLVL      = 8,
                WIDTH_TXLVL      = 8,
                WIDTH_RXTHR      = 8,
                WIDTH_TXTHR      = 8,
            }; // endof width_t
            // RXLVL field
            typedef field_t<uint32_t, 0x4004280c, 0xff, 0, rw_t<uint32_t>> f_RXLVL;
            // TXLVL field
            typedef field_t<uint32_t, 0x4004280c, 0xff, 8, rw_t<uint32_t>> f_TXLVL;
            // RXTHR field
            typedef field_t<uint32_t, 0x4004280c, 0xff, 16, rw_t<uint32_t>> f_RXTHR;
            // TXTHR field
            typedef field_t<uint32_t, 0x4004280c, 0xff, 24, rw_t<uint32_t>> f_TXTHR;
        } // end of FIFO
        namespace LINCR {
            // LINCR register
            typedef reg_t<uint32_t, 0x40042810, rw_t<uint32_t>> r_LINCR;
            enum mask_t{
                MASK_BRKDETIE   = 0x00000001,
                MASK_BRKDETIF   = 0x00000002,
                MASK_GENBRKIE   = 0x00000004,
                MASK_GENBRKIF   = 0x00000008,
                MASK_GENBRK     = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRKDETIE   = 0,
                OFFSET_BRKDETIF   = 1,
                OFFSET_GENBRKIE   = 2,
                OFFSET_GENBRKIF   = 3,
                OFFSET_GENBRK     = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRKDETIE   = 1,
                WIDTH_BRKDETIF   = 1,
                WIDTH_GENBRKIE   = 1,
                WIDTH_GENBRKIF   = 1,
                WIDTH_GENBRK     = 1,
            }; // endof width_t
            // BRKDETIE field
            typedef field_t<uint32_t, 0x40042810, 0x1, 0, rw_t<uint32_t>> f_BRKDETIE;
            // BRKDETIF field
            typedef field_t<uint32_t, 0x40042810, 0x1, 1, rw_t<uint32_t>> f_BRKDETIF;
            // GENBRKIE field
            typedef field_t<uint32_t, 0x40042810, 0x1, 2, rw_t<uint32_t>> f_GENBRKIE;
            // GENBRKIF field
            typedef field_t<uint32_t, 0x40042810, 0x1, 3, rw_t<uint32_t>> f_GENBRKIF;
            // GENBRK field
            typedef field_t<uint32_t, 0x40042810, 0x1, 4, rw_t<uint32_t>> f_GENBRK;
        } // end of LINCR
        namespace CTSCR {
            // CTSCR register
            typedef reg_t<uint32_t, 0x40042814, rw_t<uint32_t>> r_CTSCR;
            enum mask_t{
                MASK_EN         = 0x00000001,
                MASK_POL        = 0x00000004,
                MASK_STAT       = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
                OFFSET_POL        = 2,
                OFFSET_STAT       = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_POL        = 1,
                WIDTH_STAT       = 1,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x40042814, 0x1, 0, rw_t<uint32_t>> f_EN;
            // POL field
            typedef field_t<uint32_t, 0x40042814, 0x1, 2, rw_t<uint32_t>> f_POL;
            // STAT field
            typedef field_t<uint32_t, 0x40042814, 0x1, 7, rw_t<uint32_t>> f_STAT;
        } // end of CTSCR
        namespace RTSCR {
            // RTSCR register
            typedef reg_t<uint32_t, 0x40042814, rw_t<uint32_t>> r_RTSCR;
            enum mask_t{
                MASK_EN         = 0x00000002,
                MASK_POL        = 0x00000008,
                MASK_THR        = 0x00000040,
                MASK_STAT       = 0x00000100,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 1,
                OFFSET_POL        = 3,
                OFFSET_THR        = 4,
                OFFSET_STAT       = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_POL        = 1,
                WIDTH_THR        = 3,
                WIDTH_STAT       = 1,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x40042814, 0x1, 1, rw_t<uint32_t>> f_EN;
            // POL field
            typedef field_t<uint32_t, 0x40042814, 0x1, 3, rw_t<uint32_t>> f_POL;
            // THR field
            typedef field_t<uint32_t, 0x40042814, 0x7, 4, rw_t<uint32_t>> f_THR;
            // STAT field
            typedef field_t<uint32_t, 0x40042814, 0x1, 8, rw_t<uint32_t>> f_STAT;
        } // end of RTSCR
        namespace CFG {
            // CFG register
            typedef reg_t<uint32_t, 0x40042818, rw_t<uint32_t>> r_CFG;
            enum mask_t{
                MASK_MSBF       = 0x00000002,
                MASK_BRKTXLEN   = 0x00000020,
                MASK_BRKRXLEN   = 0x00000200,
                MASK_RXINV      = 0x00000400,
                MASK_TXINV      = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_MSBF       = 1,
                OFFSET_BRKTXLEN   = 2,
                OFFSET_BRKRXLEN   = 6,
                OFFSET_RXINV      = 10,
                OFFSET_TXINV      = 11,
            }; // endof offset_t
            enum width_t{
                WIDTH_MSBF       = 1,
                WIDTH_BRKTXLEN   = 4,
                WIDTH_BRKRXLEN   = 4,
                WIDTH_RXINV      = 1,
                WIDTH_TXINV      = 1,
            }; // endof width_t
            // MSBF field
            typedef field_t<uint32_t, 0x40042818, 0x1, 1, rw_t<uint32_t>> f_MSBF;
            // BRKTXLEN field
            typedef field_t<uint32_t, 0x40042818, 0xf, 2, rw_t<uint32_t>> f_BRKTXLEN;
            // BRKRXLEN field
            typedef field_t<uint32_t, 0x40042818, 0xf, 6, rw_t<uint32_t>> f_BRKRXLEN;
            // RXINV field
            typedef field_t<uint32_t, 0x40042818, 0x1, 10, rw_t<uint32_t>> f_RXINV;
            // TXINV field
            typedef field_t<uint32_t, 0x40042818, 0x1, 11, rw_t<uint32_t>> f_TXINV;
        } // end of CFG
        namespace TOCR {
            // TOCR register
            typedef reg_t<uint32_t, 0x4004281c, rw_t<uint32_t>> r_TOCR;
            enum mask_t{
                MASK_TIME       = 0x00000800,
                MASK_MODE       = 0x00001000,
                MASK_IFCLR      = 0x00002000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TIME       = 0,
                OFFSET_MODE       = 12,
                OFFSET_IFCLR      = 13,
            }; // endof offset_t
            enum width_t{
                WIDTH_TIME       = 12,
                WIDTH_MODE       = 1,
                WIDTH_IFCLR      = 1,
            }; // endof width_t
            // TIME field
            typedef field_t<uint32_t, 0x4004281c, 0xfff, 0, rw_t<uint32_t>> f_TIME;
            // MODE field
            typedef field_t<uint32_t, 0x4004281c, 0x1, 12, rw_t<uint32_t>> f_MODE;
            // IFCLR field
            typedef field_t<uint32_t, 0x4004281c, 0x1, 13, rw_t<uint32_t>> f_IFCLR;
        } // end of TOCR
    } // end of UART0
} // end of PAC
#endif // end of #if USING_UART0
