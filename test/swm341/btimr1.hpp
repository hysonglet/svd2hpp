#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_BTIMR1) && (USING_BTIMR1 != 0))
namespace PAC {
    namespace BTIMR1 {
        namespace LOAD {
            // LOAD register
            typedef reg_t<uint32_t, 0x40048840, rw_t<uint32_t>> r_LOAD;
        } // end of LOAD
        namespace VALUE {
            // VALUE register
            typedef reg_t<uint32_t, 0x40048844, ro_t<uint32_t>> r_VALUE;
        } // end of VALUE
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x40048848, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_CLKSRC     = 0x00000002,
                MASK_MODE       = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CLKSRC     = 0,
                OFFSET_MODE       = 2,
            }; // endof offset_t
            enum width_t{
                WIDTH_CLKSRC     = 2,
                WIDTH_MODE       = 2,
            }; // endof width_t
            // CLKSRC field
            typedef field_t<uint32_t, 0x40048848, 0x3, 0, rw_t<uint32_t>> f_CLKSRC;
            // MODE field
            typedef field_t<uint32_t, 0x40048848, 0x3, 2, rw_t<uint32_t>> f_MODE;
        } // end of CR
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x40048850, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_TO         = 0x00000001,
                MASK_OC0        = 0x00000002,
                MASK_OC1        = 0x00000004,
                MASK_ICR        = 0x00000008,
                MASK_ICF        = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TO         = 0,
                OFFSET_OC0        = 1,
                OFFSET_OC1        = 2,
                OFFSET_ICR        = 3,
                OFFSET_ICF        = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_TO         = 1,
                WIDTH_OC0        = 1,
                WIDTH_OC1        = 1,
                WIDTH_ICR        = 1,
                WIDTH_ICF        = 1,
            }; // endof width_t
            // TO field
            typedef field_t<uint32_t, 0x40048850, 0x1, 0, rw_t<uint32_t>> f_TO;
            // OC0 field
            typedef field_t<uint32_t, 0x40048850, 0x1, 1, rw_t<uint32_t>> f_OC0;
            // OC1 field
            typedef field_t<uint32_t, 0x40048850, 0x1, 2, rw_t<uint32_t>> f_OC1;
            // ICR field
            typedef field_t<uint32_t, 0x40048850, 0x1, 3, rw_t<uint32_t>> f_ICR;
            // ICF field
            typedef field_t<uint32_t, 0x40048850, 0x1, 4, rw_t<uint32_t>> f_ICF;
        } // end of IE
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x40048854, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_TO         = 0x00000001,
                MASK_OC0        = 0x00000002,
                MASK_OC1        = 0x00000004,
                MASK_ICR        = 0x00000008,
                MASK_ICF        = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TO         = 0,
                OFFSET_OC0        = 1,
                OFFSET_OC1        = 2,
                OFFSET_ICR        = 3,
                OFFSET_ICF        = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_TO         = 1,
                WIDTH_OC0        = 1,
                WIDTH_OC1        = 1,
                WIDTH_ICR        = 1,
                WIDTH_ICF        = 1,
            }; // endof width_t
            // TO field
            typedef field_t<uint32_t, 0x40048854, 0x1, 0, rw_t<uint32_t>> f_TO;
            // OC0 field
            typedef field_t<uint32_t, 0x40048854, 0x1, 1, rw_t<uint32_t>> f_OC0;
            // OC1 field
            typedef field_t<uint32_t, 0x40048854, 0x1, 2, rw_t<uint32_t>> f_OC1;
            // ICR field
            typedef field_t<uint32_t, 0x40048854, 0x1, 3, rw_t<uint32_t>> f_ICR;
            // ICF field
            typedef field_t<uint32_t, 0x40048854, 0x1, 4, rw_t<uint32_t>> f_ICF;
        } // end of IF
        namespace HALT {
            // HALT register
            typedef reg_t<uint32_t, 0x40048858, rw_t<uint32_t>> r_HALT;
        } // end of HALT
        namespace OCCR {
            // OCCR register
            typedef reg_t<uint32_t, 0x4004885c, rw_t<uint32_t>> r_OCCR;
            enum mask_t{
                MASK_FORCELVL   = 0x00000001,
                MASK_INITLVL    = 0x00000002,
                MASK_FORCEEN    = 0x00000004,
            }; // endof mask_t
            enum offset_t{
                OFFSET_FORCELVL   = 0,
                OFFSET_INITLVL    = 1,
                OFFSET_FORCEEN    = 2,
            }; // endof offset_t
            enum width_t{
                WIDTH_FORCELVL   = 1,
                WIDTH_INITLVL    = 1,
                WIDTH_FORCEEN    = 1,
            }; // endof width_t
            // FORCELVL field
            typedef field_t<uint32_t, 0x4004885c, 0x1, 0, rw_t<uint32_t>> f_FORCELVL;
            // INITLVL field
            typedef field_t<uint32_t, 0x4004885c, 0x1, 1, rw_t<uint32_t>> f_INITLVL;
            // FORCEEN field
            typedef field_t<uint32_t, 0x4004885c, 0x1, 2, rw_t<uint32_t>> f_FORCEEN;
        } // end of OCCR
        namespace OCMAT {
            // OCMAT register
            typedef reg_t<uint32_t, 0x40048860, rw_t<uint32_t>> r_OCMAT;
        } // end of OCMAT
        namespace RESERVED2 {
            // RESERVED2 register
            typedef reg_t<uint32_t, 0x40048864, rw_t<uint32_t>> r_RESERVED2;
        } // end of RESERVED2
        namespace ICLOW {
            // ICLOW register
            typedef reg_t<uint32_t, 0x40048868, rw_t<uint32_t>> r_ICLOW;
        } // end of ICLOW
        namespace ICHIGH {
            // ICHIGH register
            typedef reg_t<uint32_t, 0x4004886c, rw_t<uint32_t>> r_ICHIGH;
        } // end of ICHIGH
        namespace PREDIV {
            // PREDIV register
            typedef reg_t<uint32_t, 0x40048870, rw_t<uint32_t>> r_PREDIV;
        } // end of PREDIV
    } // end of TIMR0
} // end of PAC
#endif // end of #if USING_TIMR0
