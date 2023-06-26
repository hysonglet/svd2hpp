#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_PORTD) && (USING_PORTD != 0))
namespace PAC {
    namespace PORTD {
        namespace FUNC0 {
            // FUNC0 register
            typedef reg_t<uint32_t, 0x400a0030, rw_t<uint32_t>> r_FUNC0;
            enum mask_t{
                MASK_PIN0       = 0x00000008,
                MASK_PIN1       = 0x00000080,
                MASK_PIN2       = 0x00000800,
                MASK_PIN3       = 0x00008000,
                MASK_PIN4       = 0x00080000,
                MASK_PIN5       = 0x00800000,
                MASK_PIN6       = 0x08000000,
                MASK_PIN7       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN0       = 0,
                OFFSET_PIN1       = 4,
                OFFSET_PIN2       = 8,
                OFFSET_PIN3       = 12,
                OFFSET_PIN4       = 16,
                OFFSET_PIN5       = 20,
                OFFSET_PIN6       = 24,
                OFFSET_PIN7       = 28,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN0       = 4,
                WIDTH_PIN1       = 4,
                WIDTH_PIN2       = 4,
                WIDTH_PIN3       = 4,
                WIDTH_PIN4       = 4,
                WIDTH_PIN5       = 4,
                WIDTH_PIN6       = 4,
                WIDTH_PIN7       = 4,
            }; // endof width_t
            // PIN0 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 4, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 8, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 12, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 16, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 20, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 24, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x400a0030, 0xf, 28, rw_t<uint32_t>> f_PIN7;
        } // end of FUNC0
        namespace FUNC1 {
            // FUNC1 register
            typedef reg_t<uint32_t, 0x400a0034, rw_t<uint32_t>> r_FUNC1;
            enum mask_t{
                MASK_PIN8       = 0x00000008,
                MASK_PIN9       = 0x00000080,
                MASK_PIN10      = 0x00000800,
                MASK_PIN11      = 0x00008000,
                MASK_PIN12      = 0x00080000,
                MASK_PIN13      = 0x00800000,
                MASK_PIN14      = 0x08000000,
                MASK_PIN15      = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PIN8       = 0,
                OFFSET_PIN9       = 4,
                OFFSET_PIN10      = 8,
                OFFSET_PIN11      = 12,
                OFFSET_PIN12      = 16,
                OFFSET_PIN13      = 20,
                OFFSET_PIN14      = 24,
                OFFSET_PIN15      = 28,
            }; // endof offset_t
            enum width_t{
                WIDTH_PIN8       = 4,
                WIDTH_PIN9       = 4,
                WIDTH_PIN10      = 4,
                WIDTH_PIN11      = 4,
                WIDTH_PIN12      = 4,
                WIDTH_PIN13      = 4,
                WIDTH_PIN14      = 4,
                WIDTH_PIN15      = 4,
            }; // endof width_t
            // PIN8 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 0, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 4, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 8, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 12, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 16, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 20, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 24, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x400a0034, 0xf, 28, rw_t<uint32_t>> f_PIN15;
        } // end of FUNC1
        namespace PULLU {
            // PULLU register
            typedef reg_t<uint32_t, 0x400a0130, rw_t<uint32_t>> r_PULLU;
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
            typedef field_t<uint32_t, 0x400a0130, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x400a0130, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of PULLU
        namespace PULLD {
            // PULLD register
            typedef reg_t<uint32_t, 0x400a0230, rw_t<uint32_t>> r_PULLD;
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
            typedef field_t<uint32_t, 0x400a0230, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x400a0230, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of PULLD
        namespace INEN {
            // INEN register
            typedef reg_t<uint32_t, 0x400a0330, rw_t<uint32_t>> r_INEN;
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
            typedef field_t<uint32_t, 0x400a0330, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x400a0330, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of INEN
        namespace OPEND {
            // OPEND register
            typedef reg_t<uint32_t, 0x400a0430, rw_t<uint32_t>> r_OPEND;
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
            typedef field_t<uint32_t, 0x400a0430, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x400a0430, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of OPEND
        namespace DRVST {
            // DRVST register
            typedef reg_t<uint32_t, 0x400a0530, rw_t<uint32_t>> r_DRVST;
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
            typedef field_t<uint32_t, 0x400a0530, 0x1, 0, rw_t<uint32_t>> f_PIN0;
            // PIN1 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 1, rw_t<uint32_t>> f_PIN1;
            // PIN2 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 2, rw_t<uint32_t>> f_PIN2;
            // PIN3 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 3, rw_t<uint32_t>> f_PIN3;
            // PIN4 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 4, rw_t<uint32_t>> f_PIN4;
            // PIN5 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 5, rw_t<uint32_t>> f_PIN5;
            // PIN6 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 6, rw_t<uint32_t>> f_PIN6;
            // PIN7 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 7, rw_t<uint32_t>> f_PIN7;
            // PIN8 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 8, rw_t<uint32_t>> f_PIN8;
            // PIN9 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 9, rw_t<uint32_t>> f_PIN9;
            // PIN10 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 10, rw_t<uint32_t>> f_PIN10;
            // PIN11 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 11, rw_t<uint32_t>> f_PIN11;
            // PIN12 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 12, rw_t<uint32_t>> f_PIN12;
            // PIN13 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 13, rw_t<uint32_t>> f_PIN13;
            // PIN14 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 14, rw_t<uint32_t>> f_PIN14;
            // PIN15 field
            typedef field_t<uint32_t, 0x400a0530, 0x1, 15, rw_t<uint32_t>> f_PIN15;
        } // end of DRVST
    } // end of PORTA
} // end of PAC
#endif // end of #if USING_PORTA
