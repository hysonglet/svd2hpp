#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_QEI) && (USING_QEI != 0))
namespace PAC {
    namespace QEI {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x4004c800, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_ENA        = 0x00000001,
                MASK_ABSWAP     = 0x00000010,
                MASK_X2X4       = 0x00000020,
                MASK_RSTSRC     = 0x00000040,
                MASK_MODE       = 0x00000080,
                MASK_INDEX      = 0x00000200,
                MASK_PAUSE      = 0x00000400,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ENA        = 0,
                OFFSET_ABSWAP     = 4,
                OFFSET_X2X4       = 5,
                OFFSET_RSTSRC     = 6,
                OFFSET_MODE       = 7,
                OFFSET_INDEX      = 9,
                OFFSET_PAUSE      = 10,
            }; // endof offset_t
            enum width_t{
                WIDTH_ENA        = 1,
                WIDTH_ABSWAP     = 1,
                WIDTH_X2X4       = 1,
                WIDTH_RSTSRC     = 1,
                WIDTH_MODE       = 1,
                WIDTH_INDEX      = 1,
                WIDTH_PAUSE      = 1,
            }; // endof width_t
            // ENA field
            typedef field_t<uint32_t, 0x4004c800, 0x1, 0, rw_t<uint32_t>> f_ENA;
            // ABSWAP field
            typedef field_t<uint32_t, 0x4004c800, 0x1, 4, rw_t<uint32_t>> f_ABSWAP;
            // X2X4 field
            typedef field_t<uint32_t, 0x4004c800, 0x1, 5, rw_t<uint32_t>> f_X2X4;
            // RSTSRC field
            typedef field_t<uint32_t, 0x4004c800, 0x1, 6, rw_t<uint32_t>> f_RSTSRC;
            // MODE field
            typedef field_t<uint32_t, 0x4004c800, 0x1, 7, rw_t<uint32_t>> f_MODE;
            // INDEX field
            typedef field_t<uint32_t, 0x4004c800, 0x1, 9, rw_t<uint32_t>> f_INDEX;
            // PAUSE field
            typedef field_t<uint32_t, 0x4004c800, 0x1, 10, rw_t<uint32_t>> f_PAUSE;
        } // end of CR
        namespace POSCNT {
            // POSCNT register
            typedef reg_t<uint32_t, 0x4004c804, rw_t<uint32_t>> r_POSCNT;
        } // end of POSCNT
        namespace MAXCNT {
            // MAXCNT register
            typedef reg_t<uint32_t, 0x4004c808, rw_t<uint32_t>> r_MAXCNT;
        } // end of MAXCNT
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x4004c820, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_INDEX      = 0x00000001,
                MASK_MATCH      = 0x00000002,
                MASK_CNTOV      = 0x00000004,
                MASK_ERROR      = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_INDEX      = 0,
                OFFSET_MATCH      = 1,
                OFFSET_CNTOV      = 2,
                OFFSET_ERROR      = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_INDEX      = 1,
                WIDTH_MATCH      = 1,
                WIDTH_CNTOV      = 1,
                WIDTH_ERROR      = 1,
            }; // endof width_t
            // INDEX field
            typedef field_t<uint32_t, 0x4004c820, 0x1, 0, rw_t<uint32_t>> f_INDEX;
            // MATCH field
            typedef field_t<uint32_t, 0x4004c820, 0x1, 1, rw_t<uint32_t>> f_MATCH;
            // CNTOV field
            typedef field_t<uint32_t, 0x4004c820, 0x1, 2, rw_t<uint32_t>> f_CNTOV;
            // ERROR field
            typedef field_t<uint32_t, 0x4004c820, 0x1, 3, rw_t<uint32_t>> f_ERROR;
        } // end of IE
        namespace IM {
            // IM register
            typedef reg_t<uint32_t, 0x4004c824, rw_t<uint32_t>> r_IM;
            enum mask_t{
                MASK_INDEX      = 0x00000001,
                MASK_MATCH      = 0x00000002,
                MASK_CNTOV      = 0x00000004,
                MASK_ERROR      = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_INDEX      = 0,
                OFFSET_MATCH      = 1,
                OFFSET_CNTOV      = 2,
                OFFSET_ERROR      = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_INDEX      = 1,
                WIDTH_MATCH      = 1,
                WIDTH_CNTOV      = 1,
                WIDTH_ERROR      = 1,
            }; // endof width_t
            // INDEX field
            typedef field_t<uint32_t, 0x4004c824, 0x1, 0, rw_t<uint32_t>> f_INDEX;
            // MATCH field
            typedef field_t<uint32_t, 0x4004c824, 0x1, 1, rw_t<uint32_t>> f_MATCH;
            // CNTOV field
            typedef field_t<uint32_t, 0x4004c824, 0x1, 2, rw_t<uint32_t>> f_CNTOV;
            // ERROR field
            typedef field_t<uint32_t, 0x4004c824, 0x1, 3, rw_t<uint32_t>> f_ERROR;
        } // end of IM
        namespace IC {
            // IC register
            typedef reg_t<uint32_t, 0x4004c828, wo_t<uint32_t>> r_IC;
            enum mask_t{
                MASK_INDEX      = 0x00000001,
                MASK_MATCH      = 0x00000002,
                MASK_CNTOV      = 0x00000004,
                MASK_ERROR      = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_INDEX      = 0,
                OFFSET_MATCH      = 1,
                OFFSET_CNTOV      = 2,
                OFFSET_ERROR      = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_INDEX      = 1,
                WIDTH_MATCH      = 1,
                WIDTH_CNTOV      = 1,
                WIDTH_ERROR      = 1,
            }; // endof width_t
            // INDEX field
            typedef field_t<uint32_t, 0x4004c828, 0x1, 0, wo_t<uint32_t>> f_INDEX;
            // MATCH field
            typedef field_t<uint32_t, 0x4004c828, 0x1, 1, wo_t<uint32_t>> f_MATCH;
            // CNTOV field
            typedef field_t<uint32_t, 0x4004c828, 0x1, 2, wo_t<uint32_t>> f_CNTOV;
            // ERROR field
            typedef field_t<uint32_t, 0x4004c828, 0x1, 3, wo_t<uint32_t>> f_ERROR;
        } // end of IC
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x4004c82c, ro_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_INDEX      = 0x00000001,
                MASK_MATCH      = 0x00000002,
                MASK_CNTOV      = 0x00000004,
                MASK_ERROR      = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_INDEX      = 0,
                OFFSET_MATCH      = 1,
                OFFSET_CNTOV      = 2,
                OFFSET_ERROR      = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_INDEX      = 1,
                WIDTH_MATCH      = 1,
                WIDTH_CNTOV      = 1,
                WIDTH_ERROR      = 1,
            }; // endof width_t
            // INDEX field
            typedef field_t<uint32_t, 0x4004c82c, 0x1, 0, ro_t<uint32_t>> f_INDEX;
            // MATCH field
            typedef field_t<uint32_t, 0x4004c82c, 0x1, 1, ro_t<uint32_t>> f_MATCH;
            // CNTOV field
            typedef field_t<uint32_t, 0x4004c82c, 0x1, 2, ro_t<uint32_t>> f_CNTOV;
            // ERROR field
            typedef field_t<uint32_t, 0x4004c82c, 0x1, 3, ro_t<uint32_t>> f_ERROR;
        } // end of IF
        namespace IFOV {
            // IFOV register
            typedef reg_t<uint32_t, 0x4004c830, rw_t<uint32_t>> r_IFOV;
            enum mask_t{
                MASK_INDEX      = 0x00000001,
                MASK_MATCH      = 0x00000002,
                MASK_CNTOV      = 0x00000004,
                MASK_ERROR      = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_INDEX      = 0,
                OFFSET_MATCH      = 1,
                OFFSET_CNTOV      = 2,
                OFFSET_ERROR      = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_INDEX      = 1,
                WIDTH_MATCH      = 1,
                WIDTH_CNTOV      = 1,
                WIDTH_ERROR      = 1,
            }; // endof width_t
            // INDEX field
            typedef field_t<uint32_t, 0x4004c830, 0x1, 0, rw_t<uint32_t>> f_INDEX;
            // MATCH field
            typedef field_t<uint32_t, 0x4004c830, 0x1, 1, rw_t<uint32_t>> f_MATCH;
            // CNTOV field
            typedef field_t<uint32_t, 0x4004c830, 0x1, 2, rw_t<uint32_t>> f_CNTOV;
            // ERROR field
            typedef field_t<uint32_t, 0x4004c830, 0x1, 3, rw_t<uint32_t>> f_ERROR;
        } // end of IFOV
    } // end of QEI
} // end of PAC
#endif // end of #if USING_QEI
