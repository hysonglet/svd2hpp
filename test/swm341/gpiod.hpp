#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_GPIOD) && (USING_GPIOD != 0))
namespace PAC {
    namespace GPIOD {
        namespace ODR {
            // ODR register
            typedef reg_t<uint32_t, 0x40041800, rw_t<uint32_t>> r_ODR;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041800, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of ODR
        namespace DIR {
            // DIR register
            typedef reg_t<uint32_t, 0x40041804, rw_t<uint32_t>> r_DIR;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041804, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of DIR
        namespace INTLVLTRG {
            // INTLVLTRG register
            typedef reg_t<uint32_t, 0x40041808, rw_t<uint32_t>> r_INTLVLTRG;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041808, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INTLVLTRG
        namespace INTBE {
            // INTBE register
            typedef reg_t<uint32_t, 0x4004180c, rw_t<uint32_t>> r_INTBE;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x4004180c, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INTBE
        namespace INTRISEEN {
            // INTRISEEN register
            typedef reg_t<uint32_t, 0x40041810, rw_t<uint32_t>> r_INTRISEEN;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041810, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INTRISEEN
        namespace INTEN {
            // INTEN register
            typedef reg_t<uint32_t, 0x40041814, rw_t<uint32_t>> r_INTEN;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041814, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INTEN
        namespace INTRAWSTAT {
            // INTRAWSTAT register
            typedef reg_t<uint32_t, 0x40041818, rw_t<uint32_t>> r_INTRAWSTAT;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041818, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INTRAWSTAT
        namespace INTSTAT {
            // INTSTAT register
            typedef reg_t<uint32_t, 0x4004181c, rw_t<uint32_t>> r_INTSTAT;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x4004181c, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INTSTAT
        namespace INTCLR {
            // INTCLR register
            typedef reg_t<uint32_t, 0x40041820, rw_t<uint32_t>> r_INTCLR;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041820, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INTCLR
        namespace DMAEN {
            // DMAEN register
            typedef reg_t<uint32_t, 0x40041824, rw_t<uint32_t>> r_DMAEN;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041824, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of DMAEN
        namespace IDR {
            // IDR register
            typedef reg_t<uint32_t, 0x40041830, rw_t<uint32_t>> r_IDR;
            enum mask_t{
                MASK_PIN0       = 0x00000001,
                MASK_PIN1       = 0x00000002,
                MASK_PIN2       = 0x00000004,
                MASK_PIN3       = 0x00000008,
                MASK_PIN4       = 0x00000010,
                MASK_PIN5       = 0x00000020,
                MASK_PIN6       = 0x00000040,
                MASK_PIN7       = 0x00000080,
                MASK_PIN8       = 0x00000100,
                MASK_PIN9       = 0x00000200,
                MASK_PIN10      = 0x00000400,
                MASK_PIN11      = 0x00000800,
                MASK_PIN12      = 0x00001000,
                MASK_PIN13      = 0x00002000,
                MASK_PIN14      = 0x00004000,
                MASK_PIN15      = 0x00008000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 1,
                OFFSET_PIN2       = 2,
                OFFSET_PIN3       = 3,
                OFFSET_PIN4       = 4,
                OFFSET_PIN5       = 5,
                OFFSET_PIN6       = 6,
                OFFSET_PIN7       = 7,
                OFFSET_PIN8       = 8,
                OFFSET_PIN9       = 9,
                OFFSET_PIN10      = 10,
                OFFSET_PIN11      = 11,
                OFFSET_PIN12      = 12,
                OFFSET_PIN13      = 13,
                OFFSET_PIN14      = 14,
                OFFSET_PIN15      = 15,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 1,
                WIDTH_PIN1       = 1,
                WIDTH_PIN2       = 1,
                WIDTH_PIN3       = 1,
                WIDTH_PIN4       = 1,
                WIDTH_PIN5       = 1,
                WIDTH_PIN6       = 1,
                WIDTH_PIN7       = 1,
                WIDTH_PIN8       = 1,
                WIDTH_PIN9       = 1,
                WIDTH_PIN10      = 1,
                WIDTH_PIN11      = 1,
                WIDTH_PIN12      = 1,
                WIDTH_PIN13      = 1,
                WIDTH_PIN14      = 1,
                WIDTH_PIN15      = 1,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x40041830, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of IDR
        namespace DATAPIN0 {
            // DATAPIN0 register
            typedef reg_t<uint32_t, 0x40041840, rw_t<uint32_t>> r_DATAPIN0;
        } // end of DATAPIN0
        namespace DATAPIN1 {
            // DATAPIN1 register
            typedef reg_t<uint32_t, 0x40041844, rw_t<uint32_t>> r_DATAPIN1;
        } // end of DATAPIN1
        namespace DATAPIN2 {
            // DATAPIN2 register
            typedef reg_t<uint32_t, 0x40041848, rw_t<uint32_t>> r_DATAPIN2;
        } // end of DATAPIN2
        namespace DATAPIN3 {
            // DATAPIN3 register
            typedef reg_t<uint32_t, 0x4004184c, rw_t<uint32_t>> r_DATAPIN3;
        } // end of DATAPIN3
        namespace DATAPIN4 {
            // DATAPIN4 register
            typedef reg_t<uint32_t, 0x40041850, rw_t<uint32_t>> r_DATAPIN4;
        } // end of DATAPIN4
        namespace DATAPIN5 {
            // DATAPIN5 register
            typedef reg_t<uint32_t, 0x40041854, rw_t<uint32_t>> r_DATAPIN5;
        } // end of DATAPIN5
        namespace DATAPIN6 {
            // DATAPIN6 register
            typedef reg_t<uint32_t, 0x40041858, rw_t<uint32_t>> r_DATAPIN6;
        } // end of DATAPIN6
        namespace DATAPIN7 {
            // DATAPIN7 register
            typedef reg_t<uint32_t, 0x4004185c, rw_t<uint32_t>> r_DATAPIN7;
        } // end of DATAPIN7
        namespace DATAPIN8 {
            // DATAPIN8 register
            typedef reg_t<uint32_t, 0x40041860, rw_t<uint32_t>> r_DATAPIN8;
        } // end of DATAPIN8
        namespace DATAPIN9 {
            // DATAPIN9 register
            typedef reg_t<uint32_t, 0x40041864, rw_t<uint32_t>> r_DATAPIN9;
        } // end of DATAPIN9
        namespace DATAPIN10 {
            // DATAPIN10 register
            typedef reg_t<uint32_t, 0x40041868, rw_t<uint32_t>> r_DATAPIN10;
        } // end of DATAPIN10
        namespace DATAPIN11 {
            // DATAPIN11 register
            typedef reg_t<uint32_t, 0x4004186c, rw_t<uint32_t>> r_DATAPIN11;
        } // end of DATAPIN11
        namespace DATAPIN12 {
            // DATAPIN12 register
            typedef reg_t<uint32_t, 0x40041870, rw_t<uint32_t>> r_DATAPIN12;
        } // end of DATAPIN12
        namespace DATAPIN13 {
            // DATAPIN13 register
            typedef reg_t<uint32_t, 0x40041874, rw_t<uint32_t>> r_DATAPIN13;
        } // end of DATAPIN13
        namespace DATAPIN14 {
            // DATAPIN14 register
            typedef reg_t<uint32_t, 0x40041878, rw_t<uint32_t>> r_DATAPIN14;
        } // end of DATAPIN14
        namespace DATAPIN15 {
            // DATAPIN15 register
            typedef reg_t<uint32_t, 0x4004187c, rw_t<uint32_t>> r_DATAPIN15;
        } // end of DATAPIN15
    } // end of GPIOA
} // end of PAC
#endif // end of #if USING_GPIOA
