#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_SFC) && (USING_SFC != 0))
namespace PAC {
    namespace SFC {
        namespace CFG {
            // CFG register
            typedef reg_t<uint32_t, 0x4004a800, rw_t<uint32_t>> r_CFG;
            enum mask_t{
                MASK_CMDTYPE    = 0x00000008,
                MASK_CMDWREN    = 0x00000020,
                MASK_CLKDIV     = 0x00000080,
                MASK_ADDR4L     = 0x00000100,
                MASK_DATA4L_PP  = 0x00000200,
                MASK_DATA4L_RD  = 0x00000800,
                MASK_WREN       = 0x00001000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CMDTYPE    = 0,
                OFFSET_CMDWREN    = 5,
                OFFSET_CLKDIV     = 6,
                OFFSET_ADDR4L     = 8,
                OFFSET_DATA4L_PP  = 9,
                OFFSET_DATA4L_RD  = 10,
                OFFSET_WREN       = 12,
            }; // endof offset_t
            enum width_t{
                WIDTH_CMDTYPE    = 4,
                WIDTH_CMDWREN    = 1,
                WIDTH_CLKDIV     = 2,
                WIDTH_ADDR4L     = 1,
                WIDTH_DATA4L_PP  = 1,
                WIDTH_DATA4L_RD  = 2,
                WIDTH_WREN       = 1,
            }; // endof width_t
            // CMDTYPE field
            typedef field_t<uint32_t, 0x4004a800, 0xf, 0, rw_t<uint32_t>> f_CMDTYPE;
            // CMDWREN field
            typedef field_t<uint32_t, 0x4004a800, 0x1, 5, rw_t<uint32_t>> f_CMDWREN;
            // CLKDIV field
            typedef field_t<uint32_t, 0x4004a800, 0x3, 6, rw_t<uint32_t>> f_CLKDIV;
            // ADDR4L field
            typedef field_t<uint32_t, 0x4004a800, 0x1, 8, rw_t<uint32_t>> f_ADDR4L;
            // DATA4L_PP field
            typedef field_t<uint32_t, 0x4004a800, 0x1, 9, rw_t<uint32_t>> f_DATA4L_PP;
            // DATA4L_RD field
            typedef field_t<uint32_t, 0x4004a800, 0x3, 10, rw_t<uint32_t>> f_DATA4L_RD;
            // WREN field
            typedef field_t<uint32_t, 0x4004a800, 0x1, 12, rw_t<uint32_t>> f_WREN;
        } // end of CFG
        namespace TIM {
            // TIM register
            typedef reg_t<uint32_t, 0x4004a804, rw_t<uint32_t>> r_TIM;
            enum mask_t{
                MASK_WIP_CHK_ITV = 0x00000080,
                MASK_WIP_CHK_LMT = 0x00008000,
                MASK_IDLETO     = 0x00200000,
                MASK_CSHIGH     = 0x00800000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_WIP_CHK_ITV = 0,
                OFFSET_WIP_CHK_LMT = 8,
                OFFSET_IDLETO     = 16,
                OFFSET_CSHIGH     = 22,
            }; // endof offset_t
            enum width_t{
                WIDTH_WIP_CHK_ITV = 8,
                WIDTH_WIP_CHK_LMT = 8,
                WIDTH_IDLETO     = 6,
                WIDTH_CSHIGH     = 2,
            }; // endof width_t
            // WIP_CHK_ITV field
            typedef field_t<uint32_t, 0x4004a804, 0xff, 0, rw_t<uint32_t>> f_WIP_CHK_ITV;
            // WIP_CHK_LMT field
            typedef field_t<uint32_t, 0x4004a804, 0xff, 8, rw_t<uint32_t>> f_WIP_CHK_LMT;
            // IDLETO field
            typedef field_t<uint32_t, 0x4004a804, 0x3f, 16, rw_t<uint32_t>> f_IDLETO;
            // CSHIGH field
            typedef field_t<uint32_t, 0x4004a804, 0x3, 22, rw_t<uint32_t>> f_CSHIGH;
        } // end of TIM
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x4004a808, ro_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_BUSY       = 0x00000001,
                MASK_FIFOLVL    = 0x04000000,
                MASK_FIFOEMPTY  = 0x08000000,
                MASK_FIFOHFULL  = 0x10000000,
                MASK_FIFOFULL   = 0x20000000,
                MASK_FIFOOVF    = 0x40000000,
                MASK_FIFOUVF    = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BUSY       = 0,
                OFFSET_FIFOLVL    = 24,
                OFFSET_FIFOEMPTY  = 27,
                OFFSET_FIFOHFULL  = 28,
                OFFSET_FIFOFULL   = 29,
                OFFSET_FIFOOVF    = 30,
                OFFSET_FIFOUVF    = 31,
            }; // endof offset_t
            enum width_t{
                WIDTH_BUSY       = 1,
                WIDTH_FIFOLVL    = 3,
                WIDTH_FIFOEMPTY  = 1,
                WIDTH_FIFOHFULL  = 1,
                WIDTH_FIFOFULL   = 1,
                WIDTH_FIFOOVF    = 1,
                WIDTH_FIFOUVF    = 1,
            }; // endof width_t
            // BUSY field
            typedef field_t<uint32_t, 0x4004a808, 0x1, 0, ro_t<uint32_t>> f_BUSY;
            // FIFOLVL field
            typedef field_t<uint32_t, 0x4004a808, 0x7, 24, ro_t<uint32_t>> f_FIFOLVL;
            // FIFOEMPTY field
            typedef field_t<uint32_t, 0x4004a808, 0x1, 27, ro_t<uint32_t>> f_FIFOEMPTY;
            // FIFOHFULL field
            typedef field_t<uint32_t, 0x4004a808, 0x1, 28, ro_t<uint32_t>> f_FIFOHFULL;
            // FIFOFULL field
            typedef field_t<uint32_t, 0x4004a808, 0x1, 29, ro_t<uint32_t>> f_FIFOFULL;
            // FIFOOVF field
            typedef field_t<uint32_t, 0x4004a808, 0x1, 30, ro_t<uint32_t>> f_FIFOOVF;
            // FIFOUVF field
            typedef field_t<uint32_t, 0x4004a808, 0x1, 31, ro_t<uint32_t>> f_FIFOUVF;
        } // end of SR
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x4004a80c, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_OVER       = 0x00000001,
                MASK_ERR        = 0x00000002,
                MASK_TO         = 0x00000004,
                MASK_FIFOEMPTY  = 0x08000000,
                MASK_FIFOHFULL  = 0x10000000,
                MASK_FIFOFULL   = 0x20000000,
                MASK_FIFOOVF    = 0x40000000,
                MASK_FIFOUVF    = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_OVER       = 0,
                OFFSET_ERR        = 1,
                OFFSET_TO         = 2,
                OFFSET_FIFOEMPTY  = 27,
                OFFSET_FIFOHFULL  = 28,
                OFFSET_FIFOFULL   = 29,
                OFFSET_FIFOOVF    = 30,
                OFFSET_FIFOUVF    = 31,
            }; // endof offset_t
            enum width_t{
                WIDTH_OVER       = 1,
                WIDTH_ERR        = 1,
                WIDTH_TO         = 1,
                WIDTH_FIFOEMPTY  = 1,
                WIDTH_FIFOHFULL  = 1,
                WIDTH_FIFOFULL   = 1,
                WIDTH_FIFOOVF    = 1,
                WIDTH_FIFOUVF    = 1,
            }; // endof width_t
            // OVER field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 0, rw_t<uint32_t>> f_OVER;
            // ERR field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 1, rw_t<uint32_t>> f_ERR;
            // TO field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 2, rw_t<uint32_t>> f_TO;
            // FIFOEMPTY field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 27, rw_t<uint32_t>> f_FIFOEMPTY;
            // FIFOHFULL field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 28, rw_t<uint32_t>> f_FIFOHFULL;
            // FIFOFULL field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 29, rw_t<uint32_t>> f_FIFOFULL;
            // FIFOOVF field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 30, rw_t<uint32_t>> f_FIFOOVF;
            // FIFOUVF field
            typedef field_t<uint32_t, 0x4004a80c, 0x1, 31, rw_t<uint32_t>> f_FIFOUVF;
        } // end of IF
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x4004a810, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_OVER       = 0x00000001,
                MASK_ERR        = 0x00000002,
                MASK_TO         = 0x00000004,
                MASK_FIFOEMPTY  = 0x08000000,
                MASK_FIFOHFULL  = 0x10000000,
                MASK_FIFOFULL   = 0x20000000,
                MASK_FIFOOVF    = 0x40000000,
                MASK_FIFOUVF    = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_OVER       = 0,
                OFFSET_ERR        = 1,
                OFFSET_TO         = 2,
                OFFSET_FIFOEMPTY  = 27,
                OFFSET_FIFOHFULL  = 28,
                OFFSET_FIFOFULL   = 29,
                OFFSET_FIFOOVF    = 30,
                OFFSET_FIFOUVF    = 31,
            }; // endof offset_t
            enum width_t{
                WIDTH_OVER       = 1,
                WIDTH_ERR        = 1,
                WIDTH_TO         = 1,
                WIDTH_FIFOEMPTY  = 1,
                WIDTH_FIFOHFULL  = 1,
                WIDTH_FIFOFULL   = 1,
                WIDTH_FIFOOVF    = 1,
                WIDTH_FIFOUVF    = 1,
            }; // endof width_t
            // OVER field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 0, rw_t<uint32_t>> f_OVER;
            // ERR field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 1, rw_t<uint32_t>> f_ERR;
            // TO field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 2, rw_t<uint32_t>> f_TO;
            // FIFOEMPTY field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 27, rw_t<uint32_t>> f_FIFOEMPTY;
            // FIFOHFULL field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 28, rw_t<uint32_t>> f_FIFOHFULL;
            // FIFOFULL field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 29, rw_t<uint32_t>> f_FIFOFULL;
            // FIFOOVF field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 30, rw_t<uint32_t>> f_FIFOOVF;
            // FIFOUVF field
            typedef field_t<uint32_t, 0x4004a810, 0x1, 31, rw_t<uint32_t>> f_FIFOUVF;
        } // end of IE
        namespace GO {
            // GO register
            typedef reg_t<uint32_t, 0x4004a814, rw_t<uint32_t>> r_GO;
        } // end of GO
        namespace ADDR {
            // ADDR register
            typedef reg_t<uint32_t, 0x4004a818, rw_t<uint32_t>> r_ADDR;
        } // end of ADDR
        namespace DATA {
            // DATA register
            typedef reg_t<uint32_t, 0x4004a81c, rw_t<uint32_t>> r_DATA;
        } // end of DATA
        namespace CMDAHB {
            // CMDAHB register
            typedef reg_t<uint32_t, 0x4004a820, rw_t<uint32_t>> r_CMDAHB;
            enum mask_t{
                MASK_WREN       = 0x00000080,
                MASK_PP         = 0x00008000,
                MASK_RDSRL      = 0x00800000,
                MASK_READ       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_WREN       = 0,
                OFFSET_PP         = 8,
                OFFSET_RDSRL      = 16,
                OFFSET_READ       = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_WREN       = 8,
                WIDTH_PP         = 8,
                WIDTH_RDSRL      = 8,
                WIDTH_READ       = 8,
            }; // endof width_t
            // WREN field
            typedef field_t<uint32_t, 0x4004a820, 0xff, 0, rw_t<uint32_t>> f_WREN;
            // PP field
            typedef field_t<uint32_t, 0x4004a820, 0xff, 8, rw_t<uint32_t>> f_PP;
            // RDSRL field
            typedef field_t<uint32_t, 0x4004a820, 0xff, 16, rw_t<uint32_t>> f_RDSRL;
            // READ field
            typedef field_t<uint32_t, 0x4004a820, 0xff, 24, rw_t<uint32_t>> f_READ;
        } // end of CMDAHB
        namespace CMD {
            // CMD register
            typedef reg_t<uint32_t, 0x4004a824, rw_t<uint32_t>> r_CMD;
        } // end of CMD
    } // end of SFC
} // end of PAC
#endif // end of #if USING_SFC
