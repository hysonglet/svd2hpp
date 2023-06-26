#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_TIMRG) && (USING_TIMRG != 0))
namespace PAC {
    namespace TIMRG {
        namespace HALLIE {
            // HALLIE register
            typedef reg_t<uint32_t, 0x40046c00, rw_t<uint32_t>> r_HALLIE;
            enum mask_t{
                MASK_HALL0      = 0x00000001,
                MASK_HALL3      = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_HALL0      = 0,
                OFFSET_HALL3      = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_HALL0      = 1,
                WIDTH_HALL3      = 1,
            }; // endof width_t
            // HALL0 field
            typedef field_t<uint32_t, 0x40046c00, 0x1, 0, rw_t<uint32_t>> f_HALL0;
            // HALL3 field
            typedef field_t<uint32_t, 0x40046c00, 0x1, 1, rw_t<uint32_t>> f_HALL3;
        } // end of HALLIE
        namespace HALLIF {
            // HALLIF register
            typedef reg_t<uint32_t, 0x40046c08, rw_t<uint32_t>> r_HALLIF;
            enum mask_t{
                MASK_H0IN0      = 0x00000001,
                MASK_H0IN1      = 0x00000002,
                MASK_H0IN2      = 0x00000004,
                MASK_H3IN0      = 0x00000008,
                MASK_H3IN1      = 0x00000010,
                MASK_H3IN2      = 0x00000020,
            }; // endof mask_t
            enum offset_t{
                OFFSET_H0IN0      = 0,
                OFFSET_H0IN1      = 1,
                OFFSET_H0IN2      = 2,
                OFFSET_H3IN0      = 3,
                OFFSET_H3IN1      = 4,
                OFFSET_H3IN2      = 5,
            }; // endof offset_t
            enum width_t{
                WIDTH_H0IN0      = 1,
                WIDTH_H0IN1      = 1,
                WIDTH_H0IN2      = 1,
                WIDTH_H3IN0      = 1,
                WIDTH_H3IN1      = 1,
                WIDTH_H3IN2      = 1,
            }; // endof width_t
            // H0IN0 field
            typedef field_t<uint32_t, 0x40046c08, 0x1, 0, rw_t<uint32_t>> f_H0IN0;
            // H0IN1 field
            typedef field_t<uint32_t, 0x40046c08, 0x1, 1, rw_t<uint32_t>> f_H0IN1;
            // H0IN2 field
            typedef field_t<uint32_t, 0x40046c08, 0x1, 2, rw_t<uint32_t>> f_H0IN2;
            // H3IN0 field
            typedef field_t<uint32_t, 0x40046c08, 0x1, 3, rw_t<uint32_t>> f_H3IN0;
            // H3IN1 field
            typedef field_t<uint32_t, 0x40046c08, 0x1, 4, rw_t<uint32_t>> f_H3IN1;
            // H3IN2 field
            typedef field_t<uint32_t, 0x40046c08, 0x1, 5, rw_t<uint32_t>> f_H3IN2;
        } // end of HALLIF
        namespace HALLEN {
            // HALLEN register
            typedef reg_t<uint32_t, 0x40046c0c, rw_t<uint32_t>> r_HALLEN;
            enum mask_t{
                MASK_HALL0      = 0x00000001,
                MASK_HALL3      = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_HALL0      = 0,
                OFFSET_HALL3      = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_HALL0      = 1,
                WIDTH_HALL3      = 1,
            }; // endof width_t
            // HALL0 field
            typedef field_t<uint32_t, 0x40046c0c, 0x1, 0, rw_t<uint32_t>> f_HALL0;
            // HALL3 field
            typedef field_t<uint32_t, 0x40046c0c, 0x1, 1, rw_t<uint32_t>> f_HALL3;
        } // end of HALLEN
        namespace HALL0V {
            // HALL0V register
            typedef reg_t<uint32_t, 0x40046c10, rw_t<uint32_t>> r_HALL0V;
        } // end of HALL0V
        namespace HALL3V {
            // HALL3V register
            typedef reg_t<uint32_t, 0x40046c14, rw_t<uint32_t>> r_HALL3V;
        } // end of HALL3V
        namespace HALLSR {
            // HALLSR register
            typedef reg_t<uint32_t, 0x40046c1c, rw_t<uint32_t>> r_HALLSR;
            enum mask_t{
                MASK_H0IN0      = 0x00000001,
                MASK_H0IN1      = 0x00000002,
                MASK_H0IN2      = 0x00000004,
                MASK_H3IN0      = 0x00000008,
                MASK_H3IN1      = 0x00000010,
                MASK_H3IN2      = 0x00000020,
            }; // endof mask_t
            enum offset_t{
                OFFSET_H0IN0      = 0,
                OFFSET_H0IN1      = 1,
                OFFSET_H0IN2      = 2,
                OFFSET_H3IN0      = 3,
                OFFSET_H3IN1      = 4,
                OFFSET_H3IN2      = 5,
            }; // endof offset_t
            enum width_t{
                WIDTH_H0IN0      = 1,
                WIDTH_H0IN1      = 1,
                WIDTH_H0IN2      = 1,
                WIDTH_H3IN0      = 1,
                WIDTH_H3IN1      = 1,
                WIDTH_H3IN2      = 1,
            }; // endof width_t
            // H0IN0 field
            typedef field_t<uint32_t, 0x40046c1c, 0x1, 0, rw_t<uint32_t>> f_H0IN0;
            // H0IN1 field
            typedef field_t<uint32_t, 0x40046c1c, 0x1, 1, rw_t<uint32_t>> f_H0IN1;
            // H0IN2 field
            typedef field_t<uint32_t, 0x40046c1c, 0x1, 2, rw_t<uint32_t>> f_H0IN2;
            // H3IN0 field
            typedef field_t<uint32_t, 0x40046c1c, 0x1, 3, rw_t<uint32_t>> f_H3IN0;
            // H3IN1 field
            typedef field_t<uint32_t, 0x40046c1c, 0x1, 4, rw_t<uint32_t>> f_H3IN1;
            // H3IN2 field
            typedef field_t<uint32_t, 0x40046c1c, 0x1, 5, rw_t<uint32_t>> f_H3IN2;
        } // end of HALLSR
        namespace EN {
            // EN register
            typedef reg_t<uint32_t, 0x40046c40, rw_t<uint32_t>> r_EN;
            enum mask_t{
                MASK_TIMR0      = 0x00000001,
                MASK_TIMR1      = 0x00000002,
                MASK_TIMR2      = 0x00000004,
                MASK_TIMR3      = 0x00000008,
                MASK_TIMR4      = 0x00000010,
                MASK_TIMR5      = 0x00000020,
                MASK_TIMR6      = 0x00000040,
                MASK_TIMR7      = 0x00000080,
                MASK_TIMR8      = 0x00000100,
                MASK_TIMR9      = 0x00000200,
                MASK_TIMR10     = 0x00000400,
                MASK_TIMR11     = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TIMR0      = 0,
                OFFSET_TIMR1      = 1,
                OFFSET_TIMR2      = 2,
                OFFSET_TIMR3      = 3,
                OFFSET_TIMR4      = 4,
                OFFSET_TIMR5      = 5,
                OFFSET_TIMR6      = 6,
                OFFSET_TIMR7      = 7,
                OFFSET_TIMR8      = 8,
                OFFSET_TIMR9      = 9,
                OFFSET_TIMR10     = 10,
                OFFSET_TIMR11     = 11,
            }; // endof offset_t
            enum width_t{
                WIDTH_TIMR0      = 1,
                WIDTH_TIMR1      = 1,
                WIDTH_TIMR2      = 1,
                WIDTH_TIMR3      = 1,
                WIDTH_TIMR4      = 1,
                WIDTH_TIMR5      = 1,
                WIDTH_TIMR6      = 1,
                WIDTH_TIMR7      = 1,
                WIDTH_TIMR8      = 1,
                WIDTH_TIMR9      = 1,
                WIDTH_TIMR10     = 1,
                WIDTH_TIMR11     = 1,
            }; // endof width_t
            // TIMR0 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 0, rw_t<uint32_t>> f_TIMR0;
            // TIMR1 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 1, rw_t<uint32_t>> f_TIMR1;
            // TIMR2 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 2, rw_t<uint32_t>> f_TIMR2;
            // TIMR3 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 3, rw_t<uint32_t>> f_TIMR3;
            // TIMR4 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 4, rw_t<uint32_t>> f_TIMR4;
            // TIMR5 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 5, rw_t<uint32_t>> f_TIMR5;
            // TIMR6 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 6, rw_t<uint32_t>> f_TIMR6;
            // TIMR7 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 7, rw_t<uint32_t>> f_TIMR7;
            // TIMR8 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 8, rw_t<uint32_t>> f_TIMR8;
            // TIMR9 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 9, rw_t<uint32_t>> f_TIMR9;
            // TIMR10 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 10, rw_t<uint32_t>> f_TIMR10;
            // TIMR11 field
            typedef field_t<uint32_t, 0x40046c40, 0x1, 11, rw_t<uint32_t>> f_TIMR11;
        } // end of EN
    } // end of TIMRG
} // end of PAC
#endif // end of #if USING_TIMRG
