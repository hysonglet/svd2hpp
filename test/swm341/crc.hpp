#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_CRC) && (USING_CRC != 0))
namespace PAC {
    namespace CRC {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x40002800, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_EN         = 0x00000001,
                MASK_IREV       = 0x00000004,
                MASK_INOT       = 0x00000008,
                MASK_OREV       = 0x00000020,
                MASK_ONOT       = 0x00000040,
                MASK_POLY       = 0x00000100,
                MASK_IBIT       = 0x00000400,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
                OFFSET_IREV       = 1,
                OFFSET_INOT       = 3,
                OFFSET_OREV       = 4,
                OFFSET_ONOT       = 6,
                OFFSET_POLY       = 7,
                OFFSET_IBIT       = 9,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_IREV       = 2,
                WIDTH_INOT       = 1,
                WIDTH_OREV       = 2,
                WIDTH_ONOT       = 1,
                WIDTH_POLY       = 2,
                WIDTH_IBIT       = 2,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x40002800, 0x1, 0, rw_t<uint32_t>> f_EN;
            // IREV field
            typedef field_t<uint32_t, 0x40002800, 0x3, 1, rw_t<uint32_t>> f_IREV;
            // INOT field
            typedef field_t<uint32_t, 0x40002800, 0x1, 3, rw_t<uint32_t>> f_INOT;
            // OREV field
            typedef field_t<uint32_t, 0x40002800, 0x3, 4, rw_t<uint32_t>> f_OREV;
            // ONOT field
            typedef field_t<uint32_t, 0x40002800, 0x1, 6, rw_t<uint32_t>> f_ONOT;
            // POLY field
            typedef field_t<uint32_t, 0x40002800, 0x3, 7, rw_t<uint32_t>> f_POLY;
            // IBIT field
            typedef field_t<uint32_t, 0x40002800, 0x3, 9, rw_t<uint32_t>> f_IBIT;
        } // end of CR
        namespace DATAIN {
            // DATAIN register
            typedef reg_t<uint32_t, 0x40002804, wo_t<uint32_t>> r_DATAIN;
        } // end of DATAIN
        namespace INIVAL {
            // INIVAL register
            typedef reg_t<uint32_t, 0x40002808, rw_t<uint32_t>> r_INIVAL;
        } // end of INIVAL
        namespace RESULT {
            // RESULT register
            typedef reg_t<uint32_t, 0x4000280c, ro_t<uint32_t>> r_RESULT;
        } // end of RESULT
    } // end of CRC
} // end of PAC
#endif // end of #if USING_CRC
