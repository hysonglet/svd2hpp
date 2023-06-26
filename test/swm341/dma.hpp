#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_DMA) && (USING_DMA != 0))
namespace PAC {
    namespace DMA {
        namespace EN {
            // EN register
            typedef reg_t<uint32_t, 0x40000800, rw_t<uint32_t>> r_EN;
        } // end of EN
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x40000804, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_CH0        = 0x00000001,
                MASK_CH1        = 0x00000002,
                MASK_CH2        = 0x00000004,
                MASK_CH3        = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CH0        = 0,
                OFFSET_CH1        = 1,
                OFFSET_CH2        = 2,
                OFFSET_CH3        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_CH0        = 1,
                WIDTH_CH1        = 1,
                WIDTH_CH2        = 1,
                WIDTH_CH3        = 1,
            }; // endof width_t
            // CH0 field
            typedef field_t<uint32_t, 0x40000804, 0x1, 0, rw_t<uint32_t>> f_CH0;
            // CH1 field
            typedef field_t<uint32_t, 0x40000804, 0x1, 1, rw_t<uint32_t>> f_CH1;
            // CH2 field
            typedef field_t<uint32_t, 0x40000804, 0x1, 2, rw_t<uint32_t>> f_CH2;
            // CH3 field
            typedef field_t<uint32_t, 0x40000804, 0x1, 3, rw_t<uint32_t>> f_CH3;
        } // end of IE
        namespace IM {
            // IM register
            typedef reg_t<uint32_t, 0x40000808, rw_t<uint32_t>> r_IM;
            enum mask_t{
                MASK_CH0        = 0x00000001,
                MASK_CH1        = 0x00000002,
                MASK_CH2        = 0x00000004,
                MASK_CH3        = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CH0        = 0,
                OFFSET_CH1        = 1,
                OFFSET_CH2        = 2,
                OFFSET_CH3        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_CH0        = 1,
                WIDTH_CH1        = 1,
                WIDTH_CH2        = 1,
                WIDTH_CH3        = 1,
            }; // endof width_t
            // CH0 field
            typedef field_t<uint32_t, 0x40000808, 0x1, 0, rw_t<uint32_t>> f_CH0;
            // CH1 field
            typedef field_t<uint32_t, 0x40000808, 0x1, 1, rw_t<uint32_t>> f_CH1;
            // CH2 field
            typedef field_t<uint32_t, 0x40000808, 0x1, 2, rw_t<uint32_t>> f_CH2;
            // CH3 field
            typedef field_t<uint32_t, 0x40000808, 0x1, 3, rw_t<uint32_t>> f_CH3;
        } // end of IM
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x4000080c, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_CH0        = 0x00000001,
                MASK_CH1        = 0x00000002,
                MASK_CH2        = 0x00000004,
                MASK_CH3        = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CH0        = 0,
                OFFSET_CH1        = 1,
                OFFSET_CH2        = 2,
                OFFSET_CH3        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_CH0        = 1,
                WIDTH_CH1        = 1,
                WIDTH_CH2        = 1,
                WIDTH_CH3        = 1,
            }; // endof width_t
            // CH0 field
            typedef field_t<uint32_t, 0x4000080c, 0x1, 0, rw_t<uint32_t>> f_CH0;
            // CH1 field
            typedef field_t<uint32_t, 0x4000080c, 0x1, 1, rw_t<uint32_t>> f_CH1;
            // CH2 field
            typedef field_t<uint32_t, 0x4000080c, 0x1, 2, rw_t<uint32_t>> f_CH2;
            // CH3 field
            typedef field_t<uint32_t, 0x4000080c, 0x1, 3, rw_t<uint32_t>> f_CH3;
        } // end of IF
        namespace DSTSGIE {
            // DSTSGIE register
            typedef reg_t<uint32_t, 0x40000810, rw_t<uint32_t>> r_DSTSGIE;
        } // end of DSTSGIE
        namespace DSTSGIM {
            // DSTSGIM register
            typedef reg_t<uint32_t, 0x40000814, rw_t<uint32_t>> r_DSTSGIM;
        } // end of DSTSGIM
        namespace DSTSGIF {
            // DSTSGIF register
            typedef reg_t<uint32_t, 0x40000818, rw_t<uint32_t>> r_DSTSGIF;
        } // end of DSTSGIF
        namespace SRCSGIE {
            // SRCSGIE register
            typedef reg_t<uint32_t, 0x4000081c, rw_t<uint32_t>> r_SRCSGIE;
        } // end of SRCSGIE
        namespace SRCSGIM {
            // SRCSGIM register
            typedef reg_t<uint32_t, 0x40000820, rw_t<uint32_t>> r_SRCSGIM;
        } // end of SRCSGIM
        namespace SRCSGIF {
            // SRCSGIF register
            typedef reg_t<uint32_t, 0x40000824, rw_t<uint32_t>> r_SRCSGIF;
        } // end of SRCSGIF
        namespace PRI {
            // PRI register
            typedef reg_t<uint32_t, 0x4000083c, rw_t<uint32_t>> r_PRI;
        } // end of PRI
        namespace CH0 {
            // register cluster
            namespace CR {
                typedef reg_t<uint32_t, 0x40000840, rw_t<uint32_t>> r_CR;
            } // end of CR
            namespace AM {
                typedef reg_t<uint32_t, 0x40000844, rw_t<uint32_t>> r_AM;
            } // end of AM
            namespace DST {
                typedef reg_t<uint32_t, 0x40000848, rw_t<uint32_t>> r_DST;
            } // end of DST
            namespace DSTSGADDR1 {
                typedef reg_t<uint32_t, 0x4000084c, rw_t<uint32_t>> r_DSTSGADDR1;
            } // end of DSTSGADDR1
            namespace DSTSGADDR2 {
                typedef reg_t<uint32_t, 0x40000850, rw_t<uint32_t>> r_DSTSGADDR2;
            } // end of DSTSGADDR2
            namespace DSTSGADDR3 {
                typedef reg_t<uint32_t, 0x40000854, rw_t<uint32_t>> r_DSTSGADDR3;
            } // end of DSTSGADDR3
            namespace MUX {
                typedef reg_t<uint32_t, 0x40000858, rw_t<uint32_t>> r_MUX;
            } // end of MUX
            namespace SRC {
                typedef reg_t<uint32_t, 0x4000085c, rw_t<uint32_t>> r_SRC;
            } // end of SRC
            namespace SRCSGADDR1 {
                typedef reg_t<uint32_t, 0x40000860, rw_t<uint32_t>> r_SRCSGADDR1;
            } // end of SRCSGADDR1
            namespace SRCSGADDR2 {
                typedef reg_t<uint32_t, 0x40000864, rw_t<uint32_t>> r_SRCSGADDR2;
            } // end of SRCSGADDR2
            namespace SRCSGADDR3 {
                typedef reg_t<uint32_t, 0x40000868, rw_t<uint32_t>> r_SRCSGADDR3;
            } // end of SRCSGADDR3
            namespace DSTSR {
                typedef reg_t<uint32_t, 0x4000086c, ro_t<uint32_t>> r_DSTSR;
            } // end of DSTSR
            namespace SRCSR {
                typedef reg_t<uint32_t, 0x40000870, ro_t<uint32_t>> r_SRCSR;
            } // end of SRCSR
        } // end of CH0
        namespace CH1 {
            // register cluster
            namespace CR {
                typedef reg_t<uint32_t, 0x40000880, rw_t<uint32_t>> r_CR;
            } // end of CR
            namespace AM {
                typedef reg_t<uint32_t, 0x40000884, rw_t<uint32_t>> r_AM;
            } // end of AM
            namespace DST {
                typedef reg_t<uint32_t, 0x40000888, rw_t<uint32_t>> r_DST;
            } // end of DST
            namespace DSTSGADDR1 {
                typedef reg_t<uint32_t, 0x4000088c, rw_t<uint32_t>> r_DSTSGADDR1;
            } // end of DSTSGADDR1
            namespace DSTSGADDR2 {
                typedef reg_t<uint32_t, 0x40000890, rw_t<uint32_t>> r_DSTSGADDR2;
            } // end of DSTSGADDR2
            namespace DSTSGADDR3 {
                typedef reg_t<uint32_t, 0x40000894, rw_t<uint32_t>> r_DSTSGADDR3;
            } // end of DSTSGADDR3
            namespace MUX {
                typedef reg_t<uint32_t, 0x40000898, rw_t<uint32_t>> r_MUX;
            } // end of MUX
            namespace SRC {
                typedef reg_t<uint32_t, 0x4000089c, rw_t<uint32_t>> r_SRC;
            } // end of SRC
            namespace SRCSGADDR1 {
                typedef reg_t<uint32_t, 0x400008a0, rw_t<uint32_t>> r_SRCSGADDR1;
            } // end of SRCSGADDR1
            namespace SRCSGADDR2 {
                typedef reg_t<uint32_t, 0x400008a4, rw_t<uint32_t>> r_SRCSGADDR2;
            } // end of SRCSGADDR2
            namespace SRCSGADDR3 {
                typedef reg_t<uint32_t, 0x400008a8, rw_t<uint32_t>> r_SRCSGADDR3;
            } // end of SRCSGADDR3
            namespace DSTSR {
                typedef reg_t<uint32_t, 0x400008ac, ro_t<uint32_t>> r_DSTSR;
            } // end of DSTSR
            namespace SRCSR {
                typedef reg_t<uint32_t, 0x400008b0, ro_t<uint32_t>> r_SRCSR;
            } // end of SRCSR
        } // end of CH1
        namespace CH2 {
            // register cluster
            namespace CR {
                typedef reg_t<uint32_t, 0x400008c0, rw_t<uint32_t>> r_CR;
            } // end of CR
            namespace AM {
                typedef reg_t<uint32_t, 0x400008c4, rw_t<uint32_t>> r_AM;
            } // end of AM
            namespace DST {
                typedef reg_t<uint32_t, 0x400008c8, rw_t<uint32_t>> r_DST;
            } // end of DST
            namespace DSTSGADDR1 {
                typedef reg_t<uint32_t, 0x400008cc, rw_t<uint32_t>> r_DSTSGADDR1;
            } // end of DSTSGADDR1
            namespace DSTSGADDR2 {
                typedef reg_t<uint32_t, 0x400008d0, rw_t<uint32_t>> r_DSTSGADDR2;
            } // end of DSTSGADDR2
            namespace DSTSGADDR3 {
                typedef reg_t<uint32_t, 0x400008d4, rw_t<uint32_t>> r_DSTSGADDR3;
            } // end of DSTSGADDR3
            namespace MUX {
                typedef reg_t<uint32_t, 0x400008d8, rw_t<uint32_t>> r_MUX;
            } // end of MUX
            namespace SRC {
                typedef reg_t<uint32_t, 0x400008dc, rw_t<uint32_t>> r_SRC;
            } // end of SRC
            namespace SRCSGADDR1 {
                typedef reg_t<uint32_t, 0x400008e0, rw_t<uint32_t>> r_SRCSGADDR1;
            } // end of SRCSGADDR1
            namespace SRCSGADDR2 {
                typedef reg_t<uint32_t, 0x400008e4, rw_t<uint32_t>> r_SRCSGADDR2;
            } // end of SRCSGADDR2
            namespace SRCSGADDR3 {
                typedef reg_t<uint32_t, 0x400008e8, rw_t<uint32_t>> r_SRCSGADDR3;
            } // end of SRCSGADDR3
            namespace DSTSR {
                typedef reg_t<uint32_t, 0x400008ec, ro_t<uint32_t>> r_DSTSR;
            } // end of DSTSR
            namespace SRCSR {
                typedef reg_t<uint32_t, 0x400008f0, ro_t<uint32_t>> r_SRCSR;
            } // end of SRCSR
        } // end of CH2
        namespace CH3 {
            // register cluster
            namespace CR {
                typedef reg_t<uint32_t, 0x40000900, rw_t<uint32_t>> r_CR;
            } // end of CR
            namespace AM {
                typedef reg_t<uint32_t, 0x40000904, rw_t<uint32_t>> r_AM;
            } // end of AM
            namespace DST {
                typedef reg_t<uint32_t, 0x40000908, rw_t<uint32_t>> r_DST;
            } // end of DST
            namespace DSTSGADDR1 {
                typedef reg_t<uint32_t, 0x4000090c, rw_t<uint32_t>> r_DSTSGADDR1;
            } // end of DSTSGADDR1
            namespace DSTSGADDR2 {
                typedef reg_t<uint32_t, 0x40000910, rw_t<uint32_t>> r_DSTSGADDR2;
            } // end of DSTSGADDR2
            namespace DSTSGADDR3 {
                typedef reg_t<uint32_t, 0x40000914, rw_t<uint32_t>> r_DSTSGADDR3;
            } // end of DSTSGADDR3
            namespace MUX {
                typedef reg_t<uint32_t, 0x40000918, rw_t<uint32_t>> r_MUX;
            } // end of MUX
            namespace SRC {
                typedef reg_t<uint32_t, 0x4000091c, rw_t<uint32_t>> r_SRC;
            } // end of SRC
            namespace SRCSGADDR1 {
                typedef reg_t<uint32_t, 0x40000920, rw_t<uint32_t>> r_SRCSGADDR1;
            } // end of SRCSGADDR1
            namespace SRCSGADDR2 {
                typedef reg_t<uint32_t, 0x40000924, rw_t<uint32_t>> r_SRCSGADDR2;
            } // end of SRCSGADDR2
            namespace SRCSGADDR3 {
                typedef reg_t<uint32_t, 0x40000928, rw_t<uint32_t>> r_SRCSGADDR3;
            } // end of SRCSGADDR3
            namespace DSTSR {
                typedef reg_t<uint32_t, 0x4000092c, ro_t<uint32_t>> r_DSTSR;
            } // end of DSTSR
            namespace SRCSR {
                typedef reg_t<uint32_t, 0x40000930, ro_t<uint32_t>> r_SRCSR;
            } // end of SRCSR
        } // end of CH3
    } // end of DMA
} // end of PAC
#endif // end of #if USING_DMA
