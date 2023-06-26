#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_CORDIC) && (USING_CORDIC != 0))
namespace PAC {
    namespace CORDIC {
        namespace CMD {
            // CMD register
            typedef reg_t<uint32_t, 0x40003000, rw_t<uint32_t>> r_CMD;
            enum mask_t{
                MASK_START      = 0x00000001,
                MASK_RANGE      = 0x00000004,
                MASK_SINCOS     = 0x00000008,
                MASK_MULDIV     = 0x00000020,
            }; // endof mask_t
            enum offset_t{
                OFFSET_START      = 0,
                OFFSET_RANGE      = 1,
                OFFSET_SINCOS     = 3,
                OFFSET_MULDIV     = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_START      = 1,
                WIDTH_RANGE      = 2,
                WIDTH_SINCOS     = 1,
                WIDTH_MULDIV     = 2,
            }; // endof width_t
            // START field
            typedef field_t<uint32_t, 0x40003000, 0x1, 0, rw_t<uint32_t>> f_START;
            // RANGE field
            typedef field_t<uint32_t, 0x40003000, 0x3, 1, rw_t<uint32_t>> f_RANGE;
            // SINCOS field
            typedef field_t<uint32_t, 0x40003000, 0x1, 3, rw_t<uint32_t>> f_SINCOS;
            // MULDIV field
            typedef field_t<uint32_t, 0x40003000, 0x3, 4, rw_t<uint32_t>> f_MULDIV;
        } // end of CMD
        namespace INPUT {
            // INPUT register
            typedef reg_t<uint32_t, 0x40003004, rw_t<uint32_t>> r_INPUT;
            enum mask_t{
                MASK_F          = 0x00002000,
                MASK_I          = 0x00008000,
                MASK_F2         = 0x20000000,
                MASK_I2         = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_F          = 0,
                OFFSET_I          = 14,
                OFFSET_F2         = 16,
                OFFSET_I2         = 30,
            }; // endof offset_t
            enum width_t{
                WIDTH_F          = 14,
                WIDTH_I          = 2,
                WIDTH_F2         = 14,
                WIDTH_I2         = 2,
            }; // endof width_t
            // F field
            typedef field_t<uint32_t, 0x40003004, 0x3fff, 0, rw_t<uint32_t>> f_F;
            // I field
            typedef field_t<uint32_t, 0x40003004, 0x3, 14, rw_t<uint32_t>> f_I;
            // F2 field
            typedef field_t<uint32_t, 0x40003004, 0x3fff, 16, rw_t<uint32_t>> f_F2;
            // I2 field
            typedef field_t<uint32_t, 0x40003004, 0x3, 30, rw_t<uint32_t>> f_I2;
        } // end of INPUT
        namespace COS {
            // COS register
            typedef reg_t<uint32_t, 0x40003008, rw_t<uint32_t>> r_COS;
            enum mask_t{
                MASK_F          = 0x00002000,
                MASK_I          = 0x00008000,
                MASK_DONE       = 0x00010000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_F          = 0,
                OFFSET_I          = 14,
                OFFSET_DONE       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_F          = 14,
                WIDTH_I          = 2,
                WIDTH_DONE       = 1,
            }; // endof width_t
            // F field
            typedef field_t<uint32_t, 0x40003008, 0x3fff, 0, rw_t<uint32_t>> f_F;
            // I field
            typedef field_t<uint32_t, 0x40003008, 0x3, 14, rw_t<uint32_t>> f_I;
            // DONE field
            typedef field_t<uint32_t, 0x40003008, 0x1, 16, rw_t<uint32_t>> f_DONE;
        } // end of COS
        namespace SIN {
            // SIN register
            typedef reg_t<uint32_t, 0x4000300c, rw_t<uint32_t>> r_SIN;
            enum mask_t{
                MASK_F          = 0x00002000,
                MASK_I          = 0x00008000,
                MASK_DONE       = 0x00010000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_F          = 0,
                OFFSET_I          = 14,
                OFFSET_DONE       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_F          = 14,
                WIDTH_I          = 2,
                WIDTH_DONE       = 1,
            }; // endof width_t
            // F field
            typedef field_t<uint32_t, 0x4000300c, 0x3fff, 0, rw_t<uint32_t>> f_F;
            // I field
            typedef field_t<uint32_t, 0x4000300c, 0x3, 14, rw_t<uint32_t>> f_I;
            // DONE field
            typedef field_t<uint32_t, 0x4000300c, 0x1, 16, rw_t<uint32_t>> f_DONE;
        } // end of SIN
        namespace ARCTAN {
            // ARCTAN register
            typedef reg_t<uint32_t, 0x40003010, rw_t<uint32_t>> r_ARCTAN;
            enum mask_t{
                MASK_F          = 0x00002000,
                MASK_I          = 0x00008000,
                MASK_DONE       = 0x00010000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_F          = 0,
                OFFSET_I          = 14,
                OFFSET_DONE       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_F          = 14,
                WIDTH_I          = 2,
                WIDTH_DONE       = 1,
            }; // endof width_t
            // F field
            typedef field_t<uint32_t, 0x40003010, 0x3fff, 0, rw_t<uint32_t>> f_F;
            // I field
            typedef field_t<uint32_t, 0x40003010, 0x3, 14, rw_t<uint32_t>> f_I;
            // DONE field
            typedef field_t<uint32_t, 0x40003010, 0x1, 16, rw_t<uint32_t>> f_DONE;
        } // end of ARCTAN
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x40003014, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_DONE       = 0x00000001,
                MASK_ERR        = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DONE       = 0,
                OFFSET_ERR        = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_DONE       = 1,
                WIDTH_ERR        = 1,
            }; // endof width_t
            // DONE field
            typedef field_t<uint32_t, 0x40003014, 0x1, 0, rw_t<uint32_t>> f_DONE;
            // ERR field
            typedef field_t<uint32_t, 0x40003014, 0x1, 1, rw_t<uint32_t>> f_ERR;
        } // end of IF
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x40003018, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_DONE       = 0x00000001,
                MASK_ERR        = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DONE       = 0,
                OFFSET_ERR        = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_DONE       = 1,
                WIDTH_ERR        = 1,
            }; // endof width_t
            // DONE field
            typedef field_t<uint32_t, 0x40003018, 0x1, 0, rw_t<uint32_t>> f_DONE;
            // ERR field
            typedef field_t<uint32_t, 0x40003018, 0x1, 1, rw_t<uint32_t>> f_ERR;
        } // end of IE
        namespace TANH {
            // TANH register
            typedef reg_t<uint32_t, 0x4000301c, rw_t<uint32_t>> r_TANH;
            enum mask_t{
                MASK_F          = 0x00002000,
                MASK_I          = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_F          = 0,
                OFFSET_I          = 14,
            }; // endof offset_t
            enum width_t{
                WIDTH_F          = 14,
                WIDTH_I          = 2,
            }; // endof width_t
            // F field
            typedef field_t<uint32_t, 0x4000301c, 0x3fff, 0, rw_t<uint32_t>> f_F;
            // I field
            typedef field_t<uint32_t, 0x4000301c, 0x3, 14, rw_t<uint32_t>> f_I;
        } // end of TANH
    } // end of CORDIC
} // end of PAC
#endif // end of #if USING_CORDIC
