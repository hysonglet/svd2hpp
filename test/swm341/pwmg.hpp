#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_PWMG) && (USING_PWMG != 0))
namespace PAC {
    namespace PWMG {
        namespace START {
            // START register
            typedef reg_t<uint32_t, 0x40046400, rw_t<uint32_t>> r_START;
            enum mask_t{
                MASK_PWM0       = 0x00000001,
                MASK_PWM1       = 0x00000002,
                MASK_PWM2       = 0x00000004,
                MASK_PWM3       = 0x00000008,
                MASK_PWM4       = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PWM0       = 0,
                OFFSET_PWM1       = 1,
                OFFSET_PWM2       = 2,
                OFFSET_PWM3       = 3,
                OFFSET_PWM4       = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_PWM0       = 1,
                WIDTH_PWM1       = 1,
                WIDTH_PWM2       = 1,
                WIDTH_PWM3       = 1,
                WIDTH_PWM4       = 1,
            }; // endof width_t
            // PWM0 field
            typedef field_t<uint32_t, 0x40046400, 0x1, 0, rw_t<uint32_t>> f_PWM0;
            // PWM1 field
            typedef field_t<uint32_t, 0x40046400, 0x1, 1, rw_t<uint32_t>> f_PWM1;
            // PWM2 field
            typedef field_t<uint32_t, 0x40046400, 0x1, 2, rw_t<uint32_t>> f_PWM2;
            // PWM3 field
            typedef field_t<uint32_t, 0x40046400, 0x1, 3, rw_t<uint32_t>> f_PWM3;
            // PWM4 field
            typedef field_t<uint32_t, 0x40046400, 0x1, 4, rw_t<uint32_t>> f_PWM4;
        } // end of START
        namespace SWBRK {
            // SWBRK register
            typedef reg_t<uint32_t, 0x40046404, rw_t<uint32_t>> r_SWBRK;
            enum mask_t{
                MASK_PWM0A      = 0x00000001,
                MASK_PWM1A      = 0x00000002,
                MASK_PWM2A      = 0x00000004,
                MASK_PWM3A      = 0x00000008,
                MASK_PWM4A      = 0x00000010,
                MASK_PWM0B      = 0x00000100,
                MASK_PWM1B      = 0x00000200,
                MASK_PWM2B      = 0x00000400,
                MASK_PWM3B      = 0x00000800,
                MASK_PWM4B      = 0x00001000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PWM0A      = 0,
                OFFSET_PWM1A      = 1,
                OFFSET_PWM2A      = 2,
                OFFSET_PWM3A      = 3,
                OFFSET_PWM4A      = 4,
                OFFSET_PWM0B      = 8,
                OFFSET_PWM1B      = 9,
                OFFSET_PWM2B      = 10,
                OFFSET_PWM3B      = 11,
                OFFSET_PWM4B      = 12,
            }; // endof offset_t
            enum width_t{
                WIDTH_PWM0A      = 1,
                WIDTH_PWM1A      = 1,
                WIDTH_PWM2A      = 1,
                WIDTH_PWM3A      = 1,
                WIDTH_PWM4A      = 1,
                WIDTH_PWM0B      = 1,
                WIDTH_PWM1B      = 1,
                WIDTH_PWM2B      = 1,
                WIDTH_PWM3B      = 1,
                WIDTH_PWM4B      = 1,
            }; // endof width_t
            // PWM0A field
            typedef field_t<uint32_t, 0x40046404, 0x1, 0, rw_t<uint32_t>> f_PWM0A;
            // PWM1A field
            typedef field_t<uint32_t, 0x40046404, 0x1, 1, rw_t<uint32_t>> f_PWM1A;
            // PWM2A field
            typedef field_t<uint32_t, 0x40046404, 0x1, 2, rw_t<uint32_t>> f_PWM2A;
            // PWM3A field
            typedef field_t<uint32_t, 0x40046404, 0x1, 3, rw_t<uint32_t>> f_PWM3A;
            // PWM4A field
            typedef field_t<uint32_t, 0x40046404, 0x1, 4, rw_t<uint32_t>> f_PWM4A;
            // PWM0B field
            typedef field_t<uint32_t, 0x40046404, 0x1, 8, rw_t<uint32_t>> f_PWM0B;
            // PWM1B field
            typedef field_t<uint32_t, 0x40046404, 0x1, 9, rw_t<uint32_t>> f_PWM1B;
            // PWM2B field
            typedef field_t<uint32_t, 0x40046404, 0x1, 10, rw_t<uint32_t>> f_PWM2B;
            // PWM3B field
            typedef field_t<uint32_t, 0x40046404, 0x1, 11, rw_t<uint32_t>> f_PWM3B;
            // PWM4B field
            typedef field_t<uint32_t, 0x40046404, 0x1, 12, rw_t<uint32_t>> f_PWM4B;
        } // end of SWBRK
        namespace RESET {
            // RESET register
            typedef reg_t<uint32_t, 0x40046408, rw_t<uint32_t>> r_RESET;
            enum mask_t{
                MASK_PWM0       = 0x00000001,
                MASK_PWM1       = 0x00000002,
                MASK_PWM2       = 0x00000004,
                MASK_PWM3       = 0x00000008,
                MASK_PWM4       = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PWM0       = 0,
                OFFSET_PWM1       = 1,
                OFFSET_PWM2       = 2,
                OFFSET_PWM3       = 3,
                OFFSET_PWM4       = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_PWM0       = 1,
                WIDTH_PWM1       = 1,
                WIDTH_PWM2       = 1,
                WIDTH_PWM3       = 1,
                WIDTH_PWM4       = 1,
            }; // endof width_t
            // PWM0 field
            typedef field_t<uint32_t, 0x40046408, 0x1, 0, rw_t<uint32_t>> f_PWM0;
            // PWM1 field
            typedef field_t<uint32_t, 0x40046408, 0x1, 1, rw_t<uint32_t>> f_PWM1;
            // PWM2 field
            typedef field_t<uint32_t, 0x40046408, 0x1, 2, rw_t<uint32_t>> f_PWM2;
            // PWM3 field
            typedef field_t<uint32_t, 0x40046408, 0x1, 3, rw_t<uint32_t>> f_PWM3;
            // PWM4 field
            typedef field_t<uint32_t, 0x40046408, 0x1, 4, rw_t<uint32_t>> f_PWM4;
        } // end of RESET
        namespace RELOADEN {
            // RELOADEN register
            typedef reg_t<uint32_t, 0x4004640c, rw_t<uint32_t>> r_RELOADEN;
            enum mask_t{
                MASK_PWM0       = 0x00000001,
                MASK_PWM1       = 0x00000002,
                MASK_PWM2       = 0x00000004,
                MASK_PWM3       = 0x00000008,
                MASK_PWM4       = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PWM0       = 0,
                OFFSET_PWM1       = 1,
                OFFSET_PWM2       = 2,
                OFFSET_PWM3       = 3,
                OFFSET_PWM4       = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_PWM0       = 1,
                WIDTH_PWM1       = 1,
                WIDTH_PWM2       = 1,
                WIDTH_PWM3       = 1,
                WIDTH_PWM4       = 1,
            }; // endof width_t
            // PWM0 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 0, rw_t<uint32_t>> f_PWM0;
            // PWM1 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 1, rw_t<uint32_t>> f_PWM1;
            // PWM2 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 2, rw_t<uint32_t>> f_PWM2;
            // PWM3 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 3, rw_t<uint32_t>> f_PWM3;
            // PWM4 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 4, rw_t<uint32_t>> f_PWM4;
        } // end of RELOADEN
        namespace RESTART {
            // RESTART register
            typedef reg_t<uint32_t, 0x4004640c, rw_t<uint32_t>> r_RESTART;
            enum mask_t{
                MASK_PWM0       = 0x00000100,
                MASK_PWM1       = 0x00000200,
                MASK_PWM2       = 0x00000400,
                MASK_PWM3       = 0x00000800,
                MASK_PWM4       = 0x00001000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PWM0       = 8,
                OFFSET_PWM1       = 9,
                OFFSET_PWM2       = 10,
                OFFSET_PWM3       = 11,
                OFFSET_PWM4       = 12,
            }; // endof offset_t
            enum width_t{
                WIDTH_PWM0       = 1,
                WIDTH_PWM1       = 1,
                WIDTH_PWM2       = 1,
                WIDTH_PWM3       = 1,
                WIDTH_PWM4       = 1,
            }; // endof width_t
            // PWM0 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 8, rw_t<uint32_t>> f_PWM0;
            // PWM1 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 9, rw_t<uint32_t>> f_PWM1;
            // PWM2 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 10, rw_t<uint32_t>> f_PWM2;
            // PWM3 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 11, rw_t<uint32_t>> f_PWM3;
            // PWM4 field
            typedef field_t<uint32_t, 0x4004640c, 0x1, 12, rw_t<uint32_t>> f_PWM4;
        } // end of RESTART
        namespace PULSE {
            // PULSE register
            typedef reg_t<uint32_t, 0x40046410, rw_t<uint32_t>> r_PULSE;
            enum mask_t{
                MASK_EDGE0      = 0x00000001,
                MASK_EDGE1      = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EDGE0      = 0,
                OFFSET_EDGE1      = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_EDGE0      = 1,
                WIDTH_EDGE1      = 1,
            }; // endof width_t
            // EDGE0 field
            typedef field_t<uint32_t, 0x40046410, 0x1, 0, rw_t<uint32_t>> f_EDGE0;
            // EDGE1 field
            typedef field_t<uint32_t, 0x40046410, 0x1, 1, rw_t<uint32_t>> f_EDGE1;
        } // end of PULSE
        namespace FILTER {
            // FILTER register
            typedef reg_t<uint32_t, 0x40046414, rw_t<uint32_t>> r_FILTER;
        } // end of FILTER
        namespace BRKPOL {
            // BRKPOL register
            typedef reg_t<uint32_t, 0x40046418, rw_t<uint32_t>> r_BRKPOL;
            enum mask_t{
                MASK_BRK0       = 0x00000001,
                MASK_BRK1       = 0x00000002,
                MASK_BRK2       = 0x00000004,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRK0       = 0,
                OFFSET_BRK1       = 1,
                OFFSET_BRK2       = 2,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRK0       = 1,
                WIDTH_BRK1       = 1,
                WIDTH_BRK2       = 1,
            }; // endof width_t
            // BRK0 field
            typedef field_t<uint32_t, 0x40046418, 0x1, 0, rw_t<uint32_t>> f_BRK0;
            // BRK1 field
            typedef field_t<uint32_t, 0x40046418, 0x1, 1, rw_t<uint32_t>> f_BRK1;
            // BRK2 field
            typedef field_t<uint32_t, 0x40046418, 0x1, 2, rw_t<uint32_t>> f_BRK2;
        } // end of BRKPOL
        namespace BRKIE {
            // BRKIE register
            typedef reg_t<uint32_t, 0x4004641c, rw_t<uint32_t>> r_BRKIE;
            enum mask_t{
                MASK_BRK0       = 0x00000001,
                MASK_BRK1       = 0x00000002,
                MASK_BRK2       = 0x00000004,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRK0       = 0,
                OFFSET_BRK1       = 1,
                OFFSET_BRK2       = 2,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRK0       = 1,
                WIDTH_BRK1       = 1,
                WIDTH_BRK2       = 1,
            }; // endof width_t
            // BRK0 field
            typedef field_t<uint32_t, 0x4004641c, 0x1, 0, rw_t<uint32_t>> f_BRK0;
            // BRK1 field
            typedef field_t<uint32_t, 0x4004641c, 0x1, 1, rw_t<uint32_t>> f_BRK1;
            // BRK2 field
            typedef field_t<uint32_t, 0x4004641c, 0x1, 2, rw_t<uint32_t>> f_BRK2;
        } // end of BRKIE
        namespace BRKIF {
            // BRKIF register
            typedef reg_t<uint32_t, 0x40046420, rw_t<uint32_t>> r_BRKIF;
            enum mask_t{
                MASK_BRK0       = 0x00000001,
                MASK_BRK1       = 0x00000002,
                MASK_BRK2       = 0x00000004,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRK0       = 0,
                OFFSET_BRK1       = 1,
                OFFSET_BRK2       = 2,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRK0       = 1,
                WIDTH_BRK1       = 1,
                WIDTH_BRK2       = 1,
            }; // endof width_t
            // BRK0 field
            typedef field_t<uint32_t, 0x40046420, 0x1, 0, rw_t<uint32_t>> f_BRK0;
            // BRK1 field
            typedef field_t<uint32_t, 0x40046420, 0x1, 1, rw_t<uint32_t>> f_BRK1;
            // BRK2 field
            typedef field_t<uint32_t, 0x40046420, 0x1, 2, rw_t<uint32_t>> f_BRK2;
        } // end of BRKIF
        namespace BRKSR {
            // BRKSR register
            typedef reg_t<uint32_t, 0x40046420, rw_t<uint32_t>> r_BRKSR;
            enum mask_t{
                MASK_BRK0       = 0x00000010,
                MASK_BRK1       = 0x00000020,
                MASK_BRK2       = 0x00000040,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRK0       = 4,
                OFFSET_BRK1       = 5,
                OFFSET_BRK2       = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRK0       = 1,
                WIDTH_BRK1       = 1,
                WIDTH_BRK2       = 1,
            }; // endof width_t
            // BRK0 field
            typedef field_t<uint32_t, 0x40046420, 0x1, 4, rw_t<uint32_t>> f_BRK0;
            // BRK1 field
            typedef field_t<uint32_t, 0x40046420, 0x1, 5, rw_t<uint32_t>> f_BRK1;
            // BRK2 field
            typedef field_t<uint32_t, 0x40046420, 0x1, 6, rw_t<uint32_t>> f_BRK2;
        } // end of BRKSR
        namespace EVSR {
            // EVSR register
            typedef reg_t<uint32_t, 0x40046424, rw_t<uint32_t>> r_EVSR;
            enum mask_t{
                MASK_EV0        = 0x00000001,
                MASK_EV1        = 0x00000002,
                MASK_EV2        = 0x00000004,
                MASK_EV3        = 0x00000008,
                MASK_EV4        = 0x00000010,
                MASK_EV5        = 0x00000020,
                MASK_EV6        = 0x00000040,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EV0        = 0,
                OFFSET_EV1        = 1,
                OFFSET_EV2        = 2,
                OFFSET_EV3        = 3,
                OFFSET_EV4        = 4,
                OFFSET_EV5        = 5,
                OFFSET_EV6        = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_EV0        = 1,
                WIDTH_EV1        = 1,
                WIDTH_EV2        = 1,
                WIDTH_EV3        = 1,
                WIDTH_EV4        = 1,
                WIDTH_EV5        = 1,
                WIDTH_EV6        = 1,
            }; // endof width_t
            // EV0 field
            typedef field_t<uint32_t, 0x40046424, 0x1, 0, rw_t<uint32_t>> f_EV0;
            // EV1 field
            typedef field_t<uint32_t, 0x40046424, 0x1, 1, rw_t<uint32_t>> f_EV1;
            // EV2 field
            typedef field_t<uint32_t, 0x40046424, 0x1, 2, rw_t<uint32_t>> f_EV2;
            // EV3 field
            typedef field_t<uint32_t, 0x40046424, 0x1, 3, rw_t<uint32_t>> f_EV3;
            // EV4 field
            typedef field_t<uint32_t, 0x40046424, 0x1, 4, rw_t<uint32_t>> f_EV4;
            // EV5 field
            typedef field_t<uint32_t, 0x40046424, 0x1, 5, rw_t<uint32_t>> f_EV5;
            // EV6 field
            typedef field_t<uint32_t, 0x40046424, 0x1, 6, rw_t<uint32_t>> f_EV6;
        } // end of EVSR
    } // end of PWMG
} // end of PAC
#endif // end of #if USING_PWMG
