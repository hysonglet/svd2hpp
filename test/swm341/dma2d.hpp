#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_DMA2D) && (USING_DMA2D != 0))
namespace PAC {
    namespace DMA2D {
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x4000c000, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_DONE       = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DONE       = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_DONE       = 1,
            }; // endof width_t
            // DONE field
            typedef field_t<uint32_t, 0x4000c000, 0x1, 1, rw_t<uint32_t>> f_DONE;
        } // end of IF
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x4000c004, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_DONE       = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DONE       = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_DONE       = 1,
            }; // endof width_t
            // DONE field
            typedef field_t<uint32_t, 0x4000c004, 0x1, 1, rw_t<uint32_t>> f_DONE;
        } // end of IE
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x4000c008, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_START      = 0x00000001,
                MASK_MODE       = 0x00000200,
                MASK_WAIT       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_START      = 0,
                OFFSET_MODE       = 8,
                OFFSET_WAIT       = 22,
            }; // endof offset_t
            enum width_t{
                WIDTH_START      = 1,
                WIDTH_MODE       = 2,
                WIDTH_WAIT       = 10,
            }; // endof width_t
            // START field
            typedef field_t<uint32_t, 0x4000c008, 0x1, 0, rw_t<uint32_t>> f_START;
            // MODE field
            typedef field_t<uint32_t, 0x4000c008, 0x3, 8, rw_t<uint32_t>> f_MODE;
            // WAIT field
            typedef field_t<uint32_t, 0x4000c008, 0x3ff, 22, rw_t<uint32_t>> f_WAIT;
        } // end of CR
        namespace L0 {
            // register cluster
            namespace MAR {
                typedef reg_t<uint32_t, 0x4000c010, rw_t<uint32_t>> r_MAR;
            } // end of MAR
            namespace OR {
                typedef reg_t<uint32_t, 0x4000c014, rw_t<uint32_t>> r_OR;
            } // end of OR
            namespace PFCCR {
                typedef reg_t<uint32_t, 0x4000c018, rw_t<uint32_t>> r_PFCCR;
            } // end of PFCCR
            namespace COLOR {
                typedef reg_t<uint32_t, 0x4000c01c, rw_t<uint32_t>> r_COLOR;
            } // end of COLOR
        } // end of L0
        namespace L1 {
            // register cluster
            namespace MAR {
                typedef reg_t<uint32_t, 0x4000c020, rw_t<uint32_t>> r_MAR;
            } // end of MAR
            namespace OR {
                typedef reg_t<uint32_t, 0x4000c024, rw_t<uint32_t>> r_OR;
            } // end of OR
            namespace PFCCR {
                typedef reg_t<uint32_t, 0x4000c028, rw_t<uint32_t>> r_PFCCR;
            } // end of PFCCR
            namespace COLOR {
                typedef reg_t<uint32_t, 0x4000c02c, rw_t<uint32_t>> r_COLOR;
            } // end of COLOR
        } // end of L1
        namespace L2 {
            // register cluster
            namespace MAR {
                typedef reg_t<uint32_t, 0x4000c030, rw_t<uint32_t>> r_MAR;
            } // end of MAR
            namespace OR {
                typedef reg_t<uint32_t, 0x4000c034, rw_t<uint32_t>> r_OR;
            } // end of OR
            namespace PFCCR {
                typedef reg_t<uint32_t, 0x4000c038, rw_t<uint32_t>> r_PFCCR;
            } // end of PFCCR
            namespace COLOR {
                typedef reg_t<uint32_t, 0x4000c03c, rw_t<uint32_t>> r_COLOR;
            } // end of COLOR
        } // end of L2
        namespace NLR {
            // NLR register
            typedef reg_t<uint32_t, 0x4000c040, rw_t<uint32_t>> r_NLR;
            enum mask_t{
                MASK_NLINE      = 0x00008000,
                MASK_NPIXEL     = 0x20000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_NLINE      = 0,
                OFFSET_NPIXEL     = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_NLINE      = 16,
                WIDTH_NPIXEL     = 14,
            }; // endof width_t
            // NLINE field
            typedef field_t<uint32_t, 0x4000c040, 0xffff, 0, rw_t<uint32_t>> f_NLINE;
            // NPIXEL field
            typedef field_t<uint32_t, 0x4000c040, 0x3fff, 16, rw_t<uint32_t>> f_NPIXEL;
        } // end of NLR
    } // end of DMA2D
} // end of PAC
#endif // end of #if USING_DMA2D
