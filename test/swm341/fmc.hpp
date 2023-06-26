#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_FMC) && (USING_FMC != 0))
namespace PAC {
    namespace FMC {
        namespace DATA {
            // DATA register
            typedef reg_t<uint32_t, 0x4004a000, rw_t<uint32_t>> r_DATA;
        } // end of DATA
        namespace ADDR {
            // ADDR register
            typedef reg_t<uint32_t, 0x4004a004, rw_t<uint32_t>> r_ADDR;
        } // end of ADDR
        namespace ERASE {
            // ERASE register
            typedef reg_t<uint32_t, 0x4004a008, rw_t<uint32_t>> r_ERASE;
            enum mask_t{
                MASK_ADDR       = 0x00040000,
                MASK_REQ        = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ADDR       = 0,
                OFFSET_REQ        = 27,
            }; // endof offset_t
            enum width_t{
                WIDTH_ADDR       = 19,
                WIDTH_REQ        = 5,
            }; // endof width_t
            // ADDR field
            typedef field_t<uint32_t, 0x4004a008, 0x7ffff, 0, rw_t<uint32_t>> f_ADDR;
            // REQ field
            typedef field_t<uint32_t, 0x4004a008, 0x1f, 27, rw_t<uint32_t>> f_REQ;
        } // end of ERASE
        namespace CACHE {
            // CACHE register
            typedef reg_t<uint32_t, 0x4004a00c, rw_t<uint32_t>> r_CACHE;
            enum mask_t{
                MASK_PROGEN     = 0x00000001,
                MASK_CEN        = 0x00010000,
                MASK_CPEN       = 0x00020000,
                MASK_CCLR       = 0x00040000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_PROGEN     = 0,
                OFFSET_CEN        = 16,
                OFFSET_CPEN       = 17,
                OFFSET_CCLR       = 18,
            }; // endof offset_t
            enum width_t{
                WIDTH_PROGEN     = 1,
                WIDTH_CEN        = 1,
                WIDTH_CPEN       = 1,
                WIDTH_CCLR       = 1,
            }; // endof width_t
            // PROGEN field
            typedef field_t<uint32_t, 0x4004a00c, 0x1, 0, rw_t<uint32_t>> f_PROGEN;
            // CEN field
            typedef field_t<uint32_t, 0x4004a00c, 0x1, 16, rw_t<uint32_t>> f_CEN;
            // CPEN field
            typedef field_t<uint32_t, 0x4004a00c, 0x1, 17, rw_t<uint32_t>> f_CPEN;
            // CCLR field
            typedef field_t<uint32_t, 0x4004a00c, 0x1, 18, rw_t<uint32_t>> f_CCLR;
        } // end of CACHE
        namespace CFG0 {
            // CFG0 register
            typedef reg_t<uint32_t, 0x4004a010, rw_t<uint32_t>> r_CFG0;
        } // end of CFG0
        namespace CFG1 {
            // CFG1 register
            typedef reg_t<uint32_t, 0x4004a014, rw_t<uint32_t>> r_CFG1;
        } // end of CFG1
        namespace CFG2 {
            // CFG2 register
            typedef reg_t<uint32_t, 0x4004a018, rw_t<uint32_t>> r_CFG2;
        } // end of CFG2
        namespace CFG3 {
            // CFG3 register
            typedef reg_t<uint32_t, 0x4004a01c, rw_t<uint32_t>> r_CFG3;
        } // end of CFG3
        namespace CFG4 {
            // CFG4 register
            typedef reg_t<uint32_t, 0x4004a020, rw_t<uint32_t>> r_CFG4;
        } // end of CFG4
        namespace STAT {
            // STAT register
            typedef reg_t<uint32_t, 0x4004a024, rw_t<uint32_t>> r_STAT;
            enum mask_t{
                MASK_ERASEBUSY  = 0x00000001,
                MASK_PROGBUSY   = 0x00000002,
                MASK_READBUSY   = 0x00000004,
                MASK_FIFOEMPTY  = 0x00000008,
                MASK_FIFOFULL   = 0x00000010,
                MASK_IDLE       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ERASEBUSY  = 0,
                OFFSET_PROGBUSY   = 1,
                OFFSET_READBUSY   = 2,
                OFFSET_FIFOEMPTY  = 3,
                OFFSET_FIFOFULL   = 4,
                OFFSET_IDLE       = 31,
            }; // endof offset_t
            enum width_t{
                WIDTH_ERASEBUSY  = 1,
                WIDTH_PROGBUSY   = 1,
                WIDTH_READBUSY   = 1,
                WIDTH_FIFOEMPTY  = 1,
                WIDTH_FIFOFULL   = 1,
                WIDTH_IDLE       = 1,
            }; // endof width_t
            // ERASEBUSY field
            typedef field_t<uint32_t, 0x4004a024, 0x1, 0, rw_t<uint32_t>> f_ERASEBUSY;
            // PROGBUSY field
            typedef field_t<uint32_t, 0x4004a024, 0x1, 1, rw_t<uint32_t>> f_PROGBUSY;
            // READBUSY field
            typedef field_t<uint32_t, 0x4004a024, 0x1, 2, rw_t<uint32_t>> f_READBUSY;
            // FIFOEMPTY field
            typedef field_t<uint32_t, 0x4004a024, 0x1, 3, rw_t<uint32_t>> f_FIFOEMPTY;
            // FIFOFULL field
            typedef field_t<uint32_t, 0x4004a024, 0x1, 4, rw_t<uint32_t>> f_FIFOFULL;
            // IDLE field
            typedef field_t<uint32_t, 0x4004a024, 0x1, 31, rw_t<uint32_t>> f_IDLE;
        } // end of STAT
    } // end of FMC
} // end of PAC
#endif // end of #if USING_FMC
