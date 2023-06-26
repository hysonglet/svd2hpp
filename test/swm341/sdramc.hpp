#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_SDRAMC) && (USING_SDRAMC != 0))
namespace PAC {
    namespace SDRAMC {
        namespace TIM {
            // TIM register
            typedef reg_t<uint32_t, 0x88000000, rw_t<uint32_t>> r_TIM;
            enum mask_t{
                MASK_TRCD       = 0x00000002,
                MASK_TRFC       = 0x00000020,
                MASK_TRP        = 0x00000080,
                MASK_T100US     = 0x00400000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TRCD       = 0,
                OFFSET_TRFC       = 2,
                OFFSET_TRP        = 6,
                OFFSET_T100US     = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_TRCD       = 2,
                WIDTH_TRFC       = 4,
                WIDTH_TRP        = 2,
                WIDTH_T100US     = 15,
            }; // endof width_t
            // TRCD field
            typedef field_t<uint32_t, 0x88000000, 0x3, 0, rw_t<uint32_t>> f_TRCD;
            // TRFC field
            typedef field_t<uint32_t, 0x88000000, 0xf, 2, rw_t<uint32_t>> f_TRFC;
            // TRP field
            typedef field_t<uint32_t, 0x88000000, 0x3, 6, rw_t<uint32_t>> f_TRP;
            // T100US field
            typedef field_t<uint32_t, 0x88000000, 0x7fff, 8, rw_t<uint32_t>> f_T100US;
        } // end of TIM
        namespace CFG {
            // CFG register
            typedef reg_t<uint32_t, 0x88000004, rw_t<uint32_t>> r_CFG;
            enum mask_t{
                MASK_CLKDIV     = 0x00000001,
                MASK_CASDELAY   = 0x00000002,
                MASK_HIGHFREQ   = 0x00000004,
                MASK_SIZE       = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CLKDIV     = 0,
                OFFSET_CASDELAY   = 1,
                OFFSET_HIGHFREQ   = 2,
                OFFSET_SIZE       = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_CLKDIV     = 1,
                WIDTH_CASDELAY   = 1,
                WIDTH_HIGHFREQ   = 1,
                WIDTH_SIZE       = 2,
            }; // endof width_t
            // CLKDIV field
            typedef field_t<uint32_t, 0x88000004, 0x1, 0, rw_t<uint32_t>> f_CLKDIV;
            // CASDELAY field
            typedef field_t<uint32_t, 0x88000004, 0x1, 1, rw_t<uint32_t>> f_CASDELAY;
            // HIGHFREQ field
            typedef field_t<uint32_t, 0x88000004, 0x1, 2, rw_t<uint32_t>> f_HIGHFREQ;
            // SIZE field
            typedef field_t<uint32_t, 0x88000004, 0x3, 3, rw_t<uint32_t>> f_SIZE;
        } // end of CFG
        namespace T64 {
            // T64 register
            typedef reg_t<uint32_t, 0x88000008, rw_t<uint32_t>> r_T64;
        } // end of T64
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x8800000c, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_ENTERSRF   = 0x00000001,
                MASK_PWRON      = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ENTERSRF   = 0,
                OFFSET_PWRON      = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_ENTERSRF   = 1,
                WIDTH_PWRON      = 1,
            }; // endof width_t
            // ENTERSRF field
            typedef field_t<uint32_t, 0x8800000c, 0x1, 0, rw_t<uint32_t>> f_ENTERSRF;
            // PWRON field
            typedef field_t<uint32_t, 0x8800000c, 0x1, 1, rw_t<uint32_t>> f_PWRON;
        } // end of CR
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x88000010, rw_t<uint32_t>> r_SR;
        } // end of SR
    } // end of SDRAMC
} // end of PAC
#endif // end of #if USING_SDRAMC
