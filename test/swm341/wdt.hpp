#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_WDT) && (USING_WDT != 0))
namespace PAC {
    namespace WDT {
        namespace RSTVAL {
            // RSTVAL register
            typedef reg_t<uint32_t, 0x400a0800, rw_t<uint32_t>> r_RSTVAL;
        } // end of RSTVAL
        namespace INTVAL {
            // INTVAL register
            typedef reg_t<uint32_t, 0x400a0804, rw_t<uint32_t>> r_INTVAL;
        } // end of INTVAL
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x400a0808, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_EN         = 0x00000001,
                MASK_RSTEN      = 0x00000002,
                MASK_INTEN      = 0x00000004,
                MASK_WINEN      = 0x00000008,
                MASK_CKDIV      = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
                OFFSET_RSTEN      = 1,
                OFFSET_INTEN      = 2,
                OFFSET_WINEN      = 3,
                OFFSET_CKDIV      = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_RSTEN      = 1,
                WIDTH_INTEN      = 1,
                WIDTH_WINEN      = 1,
                WIDTH_CKDIV      = 4,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x400a0808, 0x1, 0, rw_t<uint32_t>> f_EN;
            // RSTEN field
            typedef field_t<uint32_t, 0x400a0808, 0x1, 1, rw_t<uint32_t>> f_RSTEN;
            // INTEN field
            typedef field_t<uint32_t, 0x400a0808, 0x1, 2, rw_t<uint32_t>> f_INTEN;
            // WINEN field
            typedef field_t<uint32_t, 0x400a0808, 0x1, 3, rw_t<uint32_t>> f_WINEN;
            // CKDIV field
            typedef field_t<uint32_t, 0x400a0808, 0xf, 8, rw_t<uint32_t>> f_CKDIV;
        } // end of CR
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x400a080c, rw_t<uint32_t>> r_IF;
        } // end of IF
        namespace FEED {
            // FEED register
            typedef reg_t<uint32_t, 0x400a0810, rw_t<uint32_t>> r_FEED;
        } // end of FEED
    } // end of WDT
} // end of PAC
#endif // end of #if USING_WDT
