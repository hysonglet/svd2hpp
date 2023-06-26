#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_LCD) && (USING_LCD != 0))
namespace PAC {
    namespace LCD {
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x40002000, rw_t<uint32_t>> r_IF;
        } // end of IF
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x40002004, rw_t<uint32_t>> r_IE;
        } // end of IE
        namespace START {
            // START register
            typedef reg_t<uint32_t, 0x4000200c, rw_t<uint32_t>> r_START;
            enum mask_t{
                MASK_GO         = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_GO         = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_GO         = 1,
            }; // endof width_t
            // GO field
            typedef field_t<uint32_t, 0x4000200c, 0x1, 1, rw_t<uint32_t>> f_GO;
        } // end of START
        namespace RESERVED2 {
            // RESERVED2 register
            typedef reg_t<uint32_t, 0x40002010, rw_t<uint32_t>> r_RESERVED2;
        } // end of RESERVED2
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x40002014, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_CLKDIV     = 0x00000020,
                MASK_CLKINV     = 0x00000040,
                MASK_CLKALW     = 0x00000080,
                MASK_BURSTEN    = 0x00000100,
                MASK_BURSTLEN   = 0x00000200,
                MASK_AUTORESTA  = 0x00002000,
                MASK_IMMRELOAD  = 0x00004000,
                MASK_VBPRELOAD  = 0x00008000,
                MASK_FORMAT     = 0x00010000,
                MASK_SEREN      = 0x00020000,
                MASK_MPUEN      = 0x00040000,
                MASK_VSYNCINV   = 0x00080000,
                MASK_HSYNCINV   = 0x00100000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CLKDIV     = 0,
                OFFSET_CLKINV     = 6,
                OFFSET_CLKALW     = 7,
                OFFSET_BURSTEN    = 8,
                OFFSET_BURSTLEN   = 9,
                OFFSET_AUTORESTA  = 13,
                OFFSET_IMMRELOAD  = 14,
                OFFSET_VBPRELOAD  = 15,
                OFFSET_FORMAT     = 16,
                OFFSET_SEREN      = 17,
                OFFSET_MPUEN      = 18,
                OFFSET_VSYNCINV   = 19,
                OFFSET_HSYNCINV   = 20,
            }; // endof offset_t
            enum width_t{
                WIDTH_CLKDIV     = 6,
                WIDTH_CLKINV     = 1,
                WIDTH_CLKALW     = 1,
                WIDTH_BURSTEN    = 1,
                WIDTH_BURSTLEN   = 1,
                WIDTH_AUTORESTA  = 1,
                WIDTH_IMMRELOAD  = 1,
                WIDTH_VBPRELOAD  = 1,
                WIDTH_FORMAT     = 1,
                WIDTH_SEREN      = 1,
                WIDTH_MPUEN      = 1,
                WIDTH_VSYNCINV   = 1,
                WIDTH_HSYNCINV   = 1,
            }; // endof width_t
            // CLKDIV field
            typedef field_t<uint32_t, 0x40002014, 0x3f, 0, rw_t<uint32_t>> f_CLKDIV;
            // CLKINV field
            typedef field_t<uint32_t, 0x40002014, 0x1, 6, rw_t<uint32_t>> f_CLKINV;
            // CLKALW field
            typedef field_t<uint32_t, 0x40002014, 0x1, 7, rw_t<uint32_t>> f_CLKALW;
            // BURSTEN field
            typedef field_t<uint32_t, 0x40002014, 0x1, 8, rw_t<uint32_t>> f_BURSTEN;
            // BURSTLEN field
            typedef field_t<uint32_t, 0x40002014, 0x1, 9, rw_t<uint32_t>> f_BURSTLEN;
            // AUTORESTA field
            typedef field_t<uint32_t, 0x40002014, 0x1, 13, rw_t<uint32_t>> f_AUTORESTA;
            // IMMRELOAD field
            typedef field_t<uint32_t, 0x40002014, 0x1, 14, rw_t<uint32_t>> f_IMMRELOAD;
            // VBPRELOAD field
            typedef field_t<uint32_t, 0x40002014, 0x1, 15, rw_t<uint32_t>> f_VBPRELOAD;
            // FORMAT field
            typedef field_t<uint32_t, 0x40002014, 0x1, 16, rw_t<uint32_t>> f_FORMAT;
            // SEREN field
            typedef field_t<uint32_t, 0x40002014, 0x1, 17, rw_t<uint32_t>> f_SEREN;
            // MPUEN field
            typedef field_t<uint32_t, 0x40002014, 0x1, 18, rw_t<uint32_t>> f_MPUEN;
            // VSYNCINV field
            typedef field_t<uint32_t, 0x40002014, 0x1, 19, rw_t<uint32_t>> f_VSYNCINV;
            // HSYNCINV field
            typedef field_t<uint32_t, 0x40002014, 0x1, 20, rw_t<uint32_t>> f_HSYNCINV;
        } // end of CR
        namespace CRH {
            // CRH register
            typedef reg_t<uint32_t, 0x40002018, rw_t<uint32_t>> r_CRH;
            enum mask_t{
                MASK_HSW        = 0x00000080,
                MASK_HBP        = 0x00008000,
                MASK_PIX        = 0x02000000,
                MASK_HFP        = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_HSW        = 0,
                OFFSET_HBP        = 8,
                OFFSET_PIX        = 16,
                OFFSET_HFP        = 26,
            }; // endof offset_t
            enum width_t{
                WIDTH_HSW        = 8,
                WIDTH_HBP        = 8,
                WIDTH_PIX        = 10,
                WIDTH_HFP        = 6,
            }; // endof width_t
            // HSW field
            typedef field_t<uint32_t, 0x40002018, 0xff, 0, rw_t<uint32_t>> f_HSW;
            // HBP field
            typedef field_t<uint32_t, 0x40002018, 0xff, 8, rw_t<uint32_t>> f_HBP;
            // PIX field
            typedef field_t<uint32_t, 0x40002018, 0x3ff, 16, rw_t<uint32_t>> f_PIX;
            // HFP field
            typedef field_t<uint32_t, 0x40002018, 0x3f, 26, rw_t<uint32_t>> f_HFP;
        } // end of CRH
        namespace CRV {
            // CRV register
            typedef reg_t<uint32_t, 0x4000201c, rw_t<uint32_t>> r_CRV;
            enum mask_t{
                MASK_VSW        = 0x00000080,
                MASK_VBP        = 0x00008000,
                MASK_PIX        = 0x02000000,
                MASK_VFP        = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_VSW        = 0,
                OFFSET_VBP        = 8,
                OFFSET_PIX        = 16,
                OFFSET_VFP        = 26,
            }; // endof offset_t
            enum width_t{
                WIDTH_VSW        = 8,
                WIDTH_VBP        = 8,
                WIDTH_PIX        = 10,
                WIDTH_VFP        = 6,
            }; // endof width_t
            // VSW field
            typedef field_t<uint32_t, 0x4000201c, 0xff, 0, rw_t<uint32_t>> f_VSW;
            // VBP field
            typedef field_t<uint32_t, 0x4000201c, 0xff, 8, rw_t<uint32_t>> f_VBP;
            // PIX field
            typedef field_t<uint32_t, 0x4000201c, 0x3ff, 16, rw_t<uint32_t>> f_PIX;
            // VFP field
            typedef field_t<uint32_t, 0x4000201c, 0x3f, 26, rw_t<uint32_t>> f_VFP;
        } // end of CRV
        namespace BGC {
            // BGC register
            typedef reg_t<uint32_t, 0x40002024, rw_t<uint32_t>> r_BGC;
        } // end of BGC
        namespace L0 {
            // register cluster
            namespace LCR {
                typedef reg_t<uint32_t, 0x40002040, rw_t<uint32_t>> r_LCR;
            } // end of LCR
            namespace WHP {
                typedef reg_t<uint32_t, 0x40002044, rw_t<uint32_t>> r_WHP;
            } // end of WHP
            namespace WVP {
                typedef reg_t<uint32_t, 0x40002048, rw_t<uint32_t>> r_WVP;
            } // end of WVP
            namespace ADDR {
                typedef reg_t<uint32_t, 0x4000204c, rw_t<uint32_t>> r_ADDR;
            } // end of ADDR
            namespace LLEN {
                typedef reg_t<uint32_t, 0x40002050, rw_t<uint32_t>> r_LLEN;
            } // end of LLEN
            namespace CK {
                typedef reg_t<uint32_t, 0x40002054, rw_t<uint32_t>> r_CK;
            } // end of CK
        } // end of L0
        namespace L1 {
            // register cluster
            namespace LCR {
                typedef reg_t<uint32_t, 0x40002080, rw_t<uint32_t>> r_LCR;
            } // end of LCR
            namespace WHP {
                typedef reg_t<uint32_t, 0x40002084, rw_t<uint32_t>> r_WHP;
            } // end of WHP
            namespace WVP {
                typedef reg_t<uint32_t, 0x40002088, rw_t<uint32_t>> r_WVP;
            } // end of WVP
            namespace ADDR {
                typedef reg_t<uint32_t, 0x4000208c, rw_t<uint32_t>> r_ADDR;
            } // end of ADDR
            namespace LLEN {
                typedef reg_t<uint32_t, 0x40002090, rw_t<uint32_t>> r_LLEN;
            } // end of LLEN
            namespace CK {
                typedef reg_t<uint32_t, 0x40002094, rw_t<uint32_t>> r_CK;
            } // end of CK
        } // end of L1
        namespace MPUCR {
            // MPUCR register
            typedef reg_t<uint32_t, 0x40002100, rw_t<uint32_t>> r_MPUCR;
            enum mask_t{
                MASK_RCS1_0     = 0x00000010,
                MASK_RDHOLD     = 0x00000200,
                MASK_WCS1_0     = 0x00002000,
                MASK_WR1CS1     = 0x00008000,
                MASK_WRHOLD     = 0x00080000,
                MASK_CS0WR0     = 0x00200000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RCS1_0     = 0,
                OFFSET_RDHOLD     = 5,
                OFFSET_WCS1_0     = 10,
                OFFSET_WR1CS1     = 14,
                OFFSET_WRHOLD     = 16,
                OFFSET_CS0WR0     = 20,
            }; // endof offset_t
            enum width_t{
                WIDTH_RCS1_0     = 5,
                WIDTH_RDHOLD     = 5,
                WIDTH_WCS1_0     = 4,
                WIDTH_WR1CS1     = 2,
                WIDTH_WRHOLD     = 4,
                WIDTH_CS0WR0     = 2,
            }; // endof width_t
            // RCS1_0 field
            typedef field_t<uint32_t, 0x40002100, 0x1f, 0, rw_t<uint32_t>> f_RCS1_0;
            // RDHOLD field
            typedef field_t<uint32_t, 0x40002100, 0x1f, 5, rw_t<uint32_t>> f_RDHOLD;
            // WCS1_0 field
            typedef field_t<uint32_t, 0x40002100, 0xf, 10, rw_t<uint32_t>> f_WCS1_0;
            // WR1CS1 field
            typedef field_t<uint32_t, 0x40002100, 0x3, 14, rw_t<uint32_t>> f_WR1CS1;
            // WRHOLD field
            typedef field_t<uint32_t, 0x40002100, 0xf, 16, rw_t<uint32_t>> f_WRHOLD;
            // CS0WR0 field
            typedef field_t<uint32_t, 0x40002100, 0x3, 20, rw_t<uint32_t>> f_CS0WR0;
        } // end of MPUCR
        namespace MPUIR {
            // MPUIR register
            typedef reg_t<uint32_t, 0x40002104, rw_t<uint32_t>> r_MPUIR;
        } // end of MPUIR
        namespace MPUDR {
            // MPUDR register
            typedef reg_t<uint32_t, 0x40002108, rw_t<uint32_t>> r_MPUDR;
        } // end of MPUDR
        namespace MPUAR {
            // MPUAR register
            typedef reg_t<uint32_t, 0x4000210c, rw_t<uint32_t>> r_MPUAR;
        } // end of MPUAR
        namespace MPULEN {
            // MPULEN register
            typedef reg_t<uint32_t, 0x40002110, rw_t<uint32_t>> r_MPULEN;
            enum mask_t{
                MASK_VPIX       = 0x00000200,
                MASK_HPIX       = 0x02000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_VPIX       = 0,
                OFFSET_HPIX       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_VPIX       = 10,
                WIDTH_HPIX       = 10,
            }; // endof width_t
            // VPIX field
            typedef field_t<uint32_t, 0x40002110, 0x3ff, 0, rw_t<uint32_t>> f_VPIX;
            // HPIX field
            typedef field_t<uint32_t, 0x40002110, 0x3ff, 16, rw_t<uint32_t>> f_HPIX;
        } // end of MPULEN
    } // end of LCD
} // end of PAC
#endif // end of #if USING_LCD
