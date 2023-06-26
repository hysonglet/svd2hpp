#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_DIV) && (USING_DIV != 0))
namespace PAC {
    namespace DIV {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x40003800, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_DIVGO      = 0x00000001,
                MASK_DIVSIGN    = 0x00000002,
                MASK_ROOTGO     = 0x00000100,
                MASK_ROOTMOD    = 0x00000200,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DIVGO      = 0,
                OFFSET_DIVSIGN    = 1,
                OFFSET_ROOTGO     = 8,
                OFFSET_ROOTMOD    = 9,
            }; // endof offset_t
            enum width_t{
                WIDTH_DIVGO      = 1,
                WIDTH_DIVSIGN    = 1,
                WIDTH_ROOTGO     = 1,
                WIDTH_ROOTMOD    = 1,
            }; // endof width_t
            // DIVGO field
            typedef field_t<uint32_t, 0x40003800, 0x1, 0, rw_t<uint32_t>> f_DIVGO;
            // DIVSIGN field
            typedef field_t<uint32_t, 0x40003800, 0x1, 1, rw_t<uint32_t>> f_DIVSIGN;
            // ROOTGO field
            typedef field_t<uint32_t, 0x40003800, 0x1, 8, rw_t<uint32_t>> f_ROOTGO;
            // ROOTMOD field
            typedef field_t<uint32_t, 0x40003800, 0x1, 9, rw_t<uint32_t>> f_ROOTMOD;
        } // end of CR
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x40003804, rw_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_DIVEND     = 0x00000001,
                MASK_DIVBUSY    = 0x00000002,
                MASK_ROOTENDI   = 0x00000100,
                MASK_ROOTENDF   = 0x00000200,
                MASK_ROOTBUSY   = 0x00000400,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DIVEND     = 0,
                OFFSET_DIVBUSY    = 1,
                OFFSET_ROOTENDI   = 8,
                OFFSET_ROOTENDF   = 9,
                OFFSET_ROOTBUSY   = 10,
            }; // endof offset_t
            enum width_t{
                WIDTH_DIVEND     = 1,
                WIDTH_DIVBUSY    = 1,
                WIDTH_ROOTENDI   = 1,
                WIDTH_ROOTENDF   = 1,
                WIDTH_ROOTBUSY   = 1,
            }; // endof width_t
            // DIVEND field
            typedef field_t<uint32_t, 0x40003804, 0x1, 0, rw_t<uint32_t>> f_DIVEND;
            // DIVBUSY field
            typedef field_t<uint32_t, 0x40003804, 0x1, 1, rw_t<uint32_t>> f_DIVBUSY;
            // ROOTENDI field
            typedef field_t<uint32_t, 0x40003804, 0x1, 8, rw_t<uint32_t>> f_ROOTENDI;
            // ROOTENDF field
            typedef field_t<uint32_t, 0x40003804, 0x1, 9, rw_t<uint32_t>> f_ROOTENDF;
            // ROOTBUSY field
            typedef field_t<uint32_t, 0x40003804, 0x1, 10, rw_t<uint32_t>> f_ROOTBUSY;
        } // end of SR
        namespace DIVIDEND {
            // DIVIDEND register
            typedef reg_t<uint32_t, 0x40003810, rw_t<uint32_t>> r_DIVIDEND;
        } // end of DIVIDEND
        namespace DIVISOR {
            // DIVISOR register
            typedef reg_t<uint32_t, 0x40003814, rw_t<uint32_t>> r_DIVISOR;
        } // end of DIVISOR
        namespace QUO {
            // QUO register
            typedef reg_t<uint32_t, 0x40003818, rw_t<uint32_t>> r_QUO;
        } // end of QUO
        namespace REMAIN {
            // REMAIN register
            typedef reg_t<uint32_t, 0x4000381c, rw_t<uint32_t>> r_REMAIN;
        } // end of REMAIN
        namespace RADICAND {
            // RADICAND register
            typedef reg_t<uint32_t, 0x40003820, rw_t<uint32_t>> r_RADICAND;
        } // end of RADICAND
        namespace ROOT {
            // ROOT register
            typedef reg_t<uint32_t, 0x40003824, rw_t<uint32_t>> r_ROOT;
        } // end of ROOT
    } // end of DIV
} // end of PAC
#endif // end of #if USING_DIV
