#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_RTC) && (USING_RTC != 0))
namespace PAC {
    namespace RTC {
        namespace MINSEC {
            // MINSEC register
            typedef reg_t<uint32_t, 0x4004b800, rw_t<uint32_t>> r_MINSEC;
            enum mask_t{
                MASK_SEC        = 0x00000020,
                MASK_MIN        = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEC        = 0,
                OFFSET_MIN        = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEC        = 6,
                WIDTH_MIN        = 6,
            }; // endof width_t
            // SEC field
            typedef field_t<uint32_t, 0x4004b800, 0x3f, 0, rw_t<uint32_t>> f_SEC;
            // MIN field
            typedef field_t<uint32_t, 0x4004b800, 0x3f, 6, rw_t<uint32_t>> f_MIN;
        } // end of MINSEC
        namespace DATHUR {
            // DATHUR register
            typedef reg_t<uint32_t, 0x4004b804, rw_t<uint32_t>> r_DATHUR;
            enum mask_t{
                MASK_HOUR       = 0x00000010,
                MASK_DATE       = 0x00000200,
            }; // endof mask_t
            enum offset_t{
                OFFSET_HOUR       = 0,
                OFFSET_DATE       = 5,
            }; // endof offset_t
            enum width_t{
                WIDTH_HOUR       = 5,
                WIDTH_DATE       = 5,
            }; // endof width_t
            // HOUR field
            typedef field_t<uint32_t, 0x4004b804, 0x1f, 0, rw_t<uint32_t>> f_HOUR;
            // DATE field
            typedef field_t<uint32_t, 0x4004b804, 0x1f, 5, rw_t<uint32_t>> f_DATE;
        } // end of DATHUR
        namespace MONDAY {
            // MONDAY register
            typedef reg_t<uint32_t, 0x4004b808, rw_t<uint32_t>> r_MONDAY;
            enum mask_t{
                MASK_DAY        = 0x00000004,
                MASK_MON        = 0x00000040,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DAY        = 0,
                OFFSET_MON        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_DAY        = 3,
                WIDTH_MON        = 4,
            }; // endof width_t
            // DAY field
            typedef field_t<uint32_t, 0x4004b808, 0x7, 0, rw_t<uint32_t>> f_DAY;
            // MON field
            typedef field_t<uint32_t, 0x4004b808, 0xf, 3, rw_t<uint32_t>> f_MON;
        } // end of MONDAY
        namespace YEAR {
            // YEAR register
            typedef reg_t<uint32_t, 0x4004b80c, rw_t<uint32_t>> r_YEAR;
        } // end of YEAR
        namespace MINSECAL {
            // MINSECAL register
            typedef reg_t<uint32_t, 0x4004b810, rw_t<uint32_t>> r_MINSECAL;
            enum mask_t{
                MASK_SEC        = 0x00000020,
                MASK_MIN        = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEC        = 0,
                OFFSET_MIN        = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEC        = 6,
                WIDTH_MIN        = 6,
            }; // endof width_t
            // SEC field
            typedef field_t<uint32_t, 0x4004b810, 0x3f, 0, rw_t<uint32_t>> f_SEC;
            // MIN field
            typedef field_t<uint32_t, 0x4004b810, 0x3f, 6, rw_t<uint32_t>> f_MIN;
        } // end of MINSECAL
        namespace DAYHURAL {
            // DAYHURAL register
            typedef reg_t<uint32_t, 0x4004b814, rw_t<uint32_t>> r_DAYHURAL;
            enum mask_t{
                MASK_HOUR       = 0x00000010,
                MASK_SUN        = 0x00000020,
                MASK_MON        = 0x00000040,
                MASK_TUE        = 0x00000080,
                MASK_WED        = 0x00000100,
                MASK_THU        = 0x00000200,
                MASK_FRI        = 0x00000400,
                MASK_SAT        = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_HOUR       = 0,
                OFFSET_SUN        = 5,
                OFFSET_MON        = 6,
                OFFSET_TUE        = 7,
                OFFSET_WED        = 8,
                OFFSET_THU        = 9,
                OFFSET_FRI        = 10,
                OFFSET_SAT        = 11,
            }; // endof offset_t
            enum width_t{
                WIDTH_HOUR       = 5,
                WIDTH_SUN        = 1,
                WIDTH_MON        = 1,
                WIDTH_TUE        = 1,
                WIDTH_WED        = 1,
                WIDTH_THU        = 1,
                WIDTH_FRI        = 1,
                WIDTH_SAT        = 1,
            }; // endof width_t
            // HOUR field
            typedef field_t<uint32_t, 0x4004b814, 0x1f, 0, rw_t<uint32_t>> f_HOUR;
            // SUN field
            typedef field_t<uint32_t, 0x4004b814, 0x1, 5, rw_t<uint32_t>> f_SUN;
            // MON field
            typedef field_t<uint32_t, 0x4004b814, 0x1, 6, rw_t<uint32_t>> f_MON;
            // TUE field
            typedef field_t<uint32_t, 0x4004b814, 0x1, 7, rw_t<uint32_t>> f_TUE;
            // WED field
            typedef field_t<uint32_t, 0x4004b814, 0x1, 8, rw_t<uint32_t>> f_WED;
            // THU field
            typedef field_t<uint32_t, 0x4004b814, 0x1, 9, rw_t<uint32_t>> f_THU;
            // FRI field
            typedef field_t<uint32_t, 0x4004b814, 0x1, 10, rw_t<uint32_t>> f_FRI;
            // SAT field
            typedef field_t<uint32_t, 0x4004b814, 0x1, 11, rw_t<uint32_t>> f_SAT;
        } // end of DAYHURAL
        namespace LOAD {
            // LOAD register
            typedef reg_t<uint32_t, 0x4004b818, rw_t<uint32_t>> r_LOAD;
            enum mask_t{
                MASK_TIME       = 0x00000001,
                MASK_ALARM      = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TIME       = 0,
                OFFSET_ALARM      = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_TIME       = 1,
                WIDTH_ALARM      = 1,
            }; // endof width_t
            // TIME field
            typedef field_t<uint32_t, 0x4004b818, 0x1, 0, rw_t<uint32_t>> f_TIME;
            // ALARM field
            typedef field_t<uint32_t, 0x4004b818, 0x1, 1, rw_t<uint32_t>> f_ALARM;
        } // end of LOAD
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x4004b81c, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_SEC        = 0x00000001,
                MASK_MIN        = 0x00000002,
                MASK_HOUR       = 0x00000004,
                MASK_DATE       = 0x00000008,
                MASK_ALARM      = 0x00000010,
                MASK_TRIM       = 0x00000020,
                MASK_HSEC       = 0x00000040,
                MASK_QSEC       = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEC        = 0,
                OFFSET_MIN        = 1,
                OFFSET_HOUR       = 2,
                OFFSET_DATE       = 3,
                OFFSET_ALARM      = 4,
                OFFSET_TRIM       = 5,
                OFFSET_HSEC       = 6,
                OFFSET_QSEC       = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEC        = 1,
                WIDTH_MIN        = 1,
                WIDTH_HOUR       = 1,
                WIDTH_DATE       = 1,
                WIDTH_ALARM      = 1,
                WIDTH_TRIM       = 1,
                WIDTH_HSEC       = 1,
                WIDTH_QSEC       = 1,
            }; // endof width_t
            // SEC field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 0, rw_t<uint32_t>> f_SEC;
            // MIN field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 1, rw_t<uint32_t>> f_MIN;
            // HOUR field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 2, rw_t<uint32_t>> f_HOUR;
            // DATE field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 3, rw_t<uint32_t>> f_DATE;
            // ALARM field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 4, rw_t<uint32_t>> f_ALARM;
            // TRIM field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 5, rw_t<uint32_t>> f_TRIM;
            // HSEC field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 6, rw_t<uint32_t>> f_HSEC;
            // QSEC field
            typedef field_t<uint32_t, 0x4004b81c, 0x1, 7, rw_t<uint32_t>> f_QSEC;
        } // end of IE
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x4004b820, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_SEC        = 0x00000001,
                MASK_MIN        = 0x00000002,
                MASK_HOUR       = 0x00000004,
                MASK_DATE       = 0x00000008,
                MASK_ALARM      = 0x00000010,
                MASK_TRIM       = 0x00000020,
                MASK_HSEC       = 0x00000040,
                MASK_QSEC       = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEC        = 0,
                OFFSET_MIN        = 1,
                OFFSET_HOUR       = 2,
                OFFSET_DATE       = 3,
                OFFSET_ALARM      = 4,
                OFFSET_TRIM       = 5,
                OFFSET_HSEC       = 6,
                OFFSET_QSEC       = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEC        = 1,
                WIDTH_MIN        = 1,
                WIDTH_HOUR       = 1,
                WIDTH_DATE       = 1,
                WIDTH_ALARM      = 1,
                WIDTH_TRIM       = 1,
                WIDTH_HSEC       = 1,
                WIDTH_QSEC       = 1,
            }; // endof width_t
            // SEC field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 0, rw_t<uint32_t>> f_SEC;
            // MIN field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 1, rw_t<uint32_t>> f_MIN;
            // HOUR field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 2, rw_t<uint32_t>> f_HOUR;
            // DATE field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 3, rw_t<uint32_t>> f_DATE;
            // ALARM field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 4, rw_t<uint32_t>> f_ALARM;
            // TRIM field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 5, rw_t<uint32_t>> f_TRIM;
            // HSEC field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 6, rw_t<uint32_t>> f_HSEC;
            // QSEC field
            typedef field_t<uint32_t, 0x4004b820, 0x1, 7, rw_t<uint32_t>> f_QSEC;
        } // end of IF
        namespace EN {
            // EN register
            typedef reg_t<uint32_t, 0x4004b824, rw_t<uint32_t>> r_EN;
        } // end of EN
        namespace CFGABLE {
            // CFGABLE register
            typedef reg_t<uint32_t, 0x4004b828, rw_t<uint32_t>> r_CFGABLE;
        } // end of CFGABLE
        namespace TRIM {
            // TRIM register
            typedef reg_t<uint32_t, 0x4004b82c, rw_t<uint32_t>> r_TRIM;
            enum mask_t{
                MASK_ADJ        = 0x00000080,
                MASK_DEC        = 0x00000100,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ADJ        = 0,
                OFFSET_DEC        = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_ADJ        = 8,
                WIDTH_DEC        = 1,
            }; // endof width_t
            // ADJ field
            typedef field_t<uint32_t, 0x4004b82c, 0xff, 0, rw_t<uint32_t>> f_ADJ;
            // DEC field
            typedef field_t<uint32_t, 0x4004b82c, 0x1, 8, rw_t<uint32_t>> f_DEC;
        } // end of TRIM
        namespace TRIMM {
            // TRIMM register
            typedef reg_t<uint32_t, 0x4004b830, rw_t<uint32_t>> r_TRIMM;
            enum mask_t{
                MASK_CYCLE      = 0x00000004,
                MASK_INC        = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CYCLE      = 0,
                OFFSET_INC        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_CYCLE      = 3,
                WIDTH_INC        = 1,
            }; // endof width_t
            // CYCLE field
            typedef field_t<uint32_t, 0x4004b830, 0x7, 0, rw_t<uint32_t>> f_CYCLE;
            // INC field
            typedef field_t<uint32_t, 0x4004b830, 0x1, 3, rw_t<uint32_t>> f_INC;
        } // end of TRIMM
    } // end of RTC
} // end of PAC
#endif // end of #if USING_RTC
