#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_DAC) && (USING_DAC != 0))
namespace PAC {
    namespace DAC {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x4004c000, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_EN         = 0x00000001,
                MASK_DMAEN      = 0x00000008,
                MASK_DHRFMT     = 0x00000400,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
                OFFSET_DMAEN      = 3,
                OFFSET_DHRFMT     = 9,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_DMAEN      = 1,
                WIDTH_DHRFMT     = 2,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x4004c000, 0x1, 0, rw_t<uint32_t>> f_EN;
            // DMAEN field
            typedef field_t<uint32_t, 0x4004c000, 0x1, 3, rw_t<uint32_t>> f_DMAEN;
            // DHRFMT field
            typedef field_t<uint32_t, 0x4004c000, 0x3, 9, rw_t<uint32_t>> f_DHRFMT;
        } // end of CR
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x4004c004, ro_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_DHRFULL    = 0x00000001,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DHRFULL    = 0,
            }; // endof offset_t
            enum width_t{
                WIDTH_DHRFULL    = 1,
            }; // endof width_t
            // DHRFULL field
            typedef field_t<uint32_t, 0x4004c004, 0x1, 0, ro_t<uint32_t>> f_DHRFULL;
        } // end of SR
        namespace SWTRG {
            // SWTRG register
            typedef reg_t<uint32_t, 0x4004c008, wo_t<uint32_t>> r_SWTRG;
        } // end of SWTRG
        namespace DHR {
            // DHR register
            typedef reg_t<uint32_t, 0x4004c00c, rw_t<uint32_t>> r_DHR;
        } // end of DHR
    } // end of DAC
} // end of PAC
#endif // end of #if USING_DAC
