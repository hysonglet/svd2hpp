#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_ADC0) && (USING_ADC0 != 0))
namespace PAC {
    namespace ADC0 {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x40049000, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_EN         = 0x00000001,
                MASK_AVG        = 0x00000004,
                MASK_RESET      = 0x00000008,
                MASK_DMAEN      = 0x00000080,
                MASK_FFCLR      = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
                OFFSET_AVG        = 1,
                OFFSET_RESET      = 3,
                OFFSET_DMAEN      = 4,
                OFFSET_FFCLR      = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_AVG        = 2,
                WIDTH_RESET      = 1,
                WIDTH_DMAEN      = 4,
                WIDTH_FFCLR      = 4,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x40049000, 0x1, 0, rw_t<uint32_t>> f_EN;
            // AVG field
            typedef field_t<uint32_t, 0x40049000, 0x3, 1, rw_t<uint32_t>> f_AVG;
            // RESET field
            typedef field_t<uint32_t, 0x40049000, 0x1, 3, rw_t<uint32_t>> f_RESET;
            // DMAEN field
            typedef field_t<uint32_t, 0x40049000, 0xf, 4, rw_t<uint32_t>> f_DMAEN;
            // FFCLR field
            typedef field_t<uint32_t, 0x40049000, 0xf, 8, rw_t<uint32_t>> f_FFCLR;
        } // end of CR
        namespace GO {
            // GO register
            typedef reg_t<uint32_t, 0x40049004, rw_t<uint32_t>> r_GO;
            enum mask_t{
                MASK_SEQ0       = 0x00000001,
                MASK_SEQ1       = 0x00000002,
                MASK_SEQ2       = 0x00000004,
                MASK_SEQ3       = 0x00000008,
                MASK_BUSY       = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ0       = 0,
                OFFSET_SEQ1       = 1,
                OFFSET_SEQ2       = 2,
                OFFSET_SEQ3       = 3,
                OFFSET_BUSY       = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ0       = 1,
                WIDTH_SEQ1       = 1,
                WIDTH_SEQ2       = 1,
                WIDTH_SEQ3       = 1,
                WIDTH_BUSY       = 1,
            }; // endof width_t
            // SEQ0 field
            typedef field_t<uint32_t, 0x40049004, 0x1, 0, rw_t<uint32_t>> f_SEQ0;
            // SEQ1 field
            typedef field_t<uint32_t, 0x40049004, 0x1, 1, rw_t<uint32_t>> f_SEQ1;
            // SEQ2 field
            typedef field_t<uint32_t, 0x40049004, 0x1, 2, rw_t<uint32_t>> f_SEQ2;
            // SEQ3 field
            typedef field_t<uint32_t, 0x40049004, 0x1, 3, rw_t<uint32_t>> f_SEQ3;
            // BUSY field
            typedef field_t<uint32_t, 0x40049004, 0x1, 4, rw_t<uint32_t>> f_BUSY;
        } // end of GO
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x40049008, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_SEQ0EOC    = 0x00000001,
                MASK_SEQ0OVF    = 0x00000002,
                MASK_SEQ0HALF   = 0x00000004,
                MASK_SEQ0FULL   = 0x00000008,
                MASK_SEQ0CMPMAX = 0x00000010,
                MASK_SEQ0CMPMIN = 0x00000020,
                MASK_SEQ1EOC    = 0x00000100,
                MASK_SEQ1OVF    = 0x00000200,
                MASK_SEQ1HALF   = 0x00000400,
                MASK_SEQ1FULL   = 0x00000800,
                MASK_SEQ1CMPMAX = 0x00001000,
                MASK_SEQ1CMPMIN = 0x00002000,
                MASK_SEQ2EOC    = 0x00010000,
                MASK_SEQ2OVF    = 0x00020000,
                MASK_SEQ2HALF   = 0x00040000,
                MASK_SEQ2FULL   = 0x00080000,
                MASK_SEQ2CMPMAX = 0x00100000,
                MASK_SEQ2CMPMIN = 0x00200000,
                MASK_SEQ3EOC    = 0x01000000,
                MASK_SEQ3OVF    = 0x02000000,
                MASK_SEQ3HALF   = 0x04000000,
                MASK_SEQ3FULL   = 0x08000000,
                MASK_SEQ3CMPMAX = 0x10000000,
                MASK_SEQ3CMPMIN = 0x20000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ0EOC    = 0,
                OFFSET_SEQ0OVF    = 1,
                OFFSET_SEQ0HALF   = 2,
                OFFSET_SEQ0FULL   = 3,
                OFFSET_SEQ0CMPMAX = 4,
                OFFSET_SEQ0CMPMIN = 5,
                OFFSET_SEQ1EOC    = 8,
                OFFSET_SEQ1OVF    = 9,
                OFFSET_SEQ1HALF   = 10,
                OFFSET_SEQ1FULL   = 11,
                OFFSET_SEQ1CMPMAX = 12,
                OFFSET_SEQ1CMPMIN = 13,
                OFFSET_SEQ2EOC    = 16,
                OFFSET_SEQ2OVF    = 17,
                OFFSET_SEQ2HALF   = 18,
                OFFSET_SEQ2FULL   = 19,
                OFFSET_SEQ2CMPMAX = 20,
                OFFSET_SEQ2CMPMIN = 21,
                OFFSET_SEQ3EOC    = 24,
                OFFSET_SEQ3OVF    = 25,
                OFFSET_SEQ3HALF   = 26,
                OFFSET_SEQ3FULL   = 27,
                OFFSET_SEQ3CMPMAX = 28,
                OFFSET_SEQ3CMPMIN = 29,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ0EOC    = 1,
                WIDTH_SEQ0OVF    = 1,
                WIDTH_SEQ0HALF   = 1,
                WIDTH_SEQ0FULL   = 1,
                WIDTH_SEQ0CMPMAX = 1,
                WIDTH_SEQ0CMPMIN = 1,
                WIDTH_SEQ1EOC    = 1,
                WIDTH_SEQ1OVF    = 1,
                WIDTH_SEQ1HALF   = 1,
                WIDTH_SEQ1FULL   = 1,
                WIDTH_SEQ1CMPMAX = 1,
                WIDTH_SEQ1CMPMIN = 1,
                WIDTH_SEQ2EOC    = 1,
                WIDTH_SEQ2OVF    = 1,
                WIDTH_SEQ2HALF   = 1,
                WIDTH_SEQ2FULL   = 1,
                WIDTH_SEQ2CMPMAX = 1,
                WIDTH_SEQ2CMPMIN = 1,
                WIDTH_SEQ3EOC    = 1,
                WIDTH_SEQ3OVF    = 1,
                WIDTH_SEQ3HALF   = 1,
                WIDTH_SEQ3FULL   = 1,
                WIDTH_SEQ3CMPMAX = 1,
                WIDTH_SEQ3CMPMIN = 1,
            }; // endof width_t
            // SEQ0EOC field
            typedef field_t<uint32_t, 0x40049008, 0x1, 0, rw_t<uint32_t>> f_SEQ0EOC;
            // SEQ0OVF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 1, rw_t<uint32_t>> f_SEQ0OVF;
            // SEQ0HALF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 2, rw_t<uint32_t>> f_SEQ0HALF;
            // SEQ0FULL field
            typedef field_t<uint32_t, 0x40049008, 0x1, 3, rw_t<uint32_t>> f_SEQ0FULL;
            // SEQ0CMPMAX field
            typedef field_t<uint32_t, 0x40049008, 0x1, 4, rw_t<uint32_t>> f_SEQ0CMPMAX;
            // SEQ0CMPMIN field
            typedef field_t<uint32_t, 0x40049008, 0x1, 5, rw_t<uint32_t>> f_SEQ0CMPMIN;
            // SEQ1EOC field
            typedef field_t<uint32_t, 0x40049008, 0x1, 8, rw_t<uint32_t>> f_SEQ1EOC;
            // SEQ1OVF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 9, rw_t<uint32_t>> f_SEQ1OVF;
            // SEQ1HALF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 10, rw_t<uint32_t>> f_SEQ1HALF;
            // SEQ1FULL field
            typedef field_t<uint32_t, 0x40049008, 0x1, 11, rw_t<uint32_t>> f_SEQ1FULL;
            // SEQ1CMPMAX field
            typedef field_t<uint32_t, 0x40049008, 0x1, 12, rw_t<uint32_t>> f_SEQ1CMPMAX;
            // SEQ1CMPMIN field
            typedef field_t<uint32_t, 0x40049008, 0x1, 13, rw_t<uint32_t>> f_SEQ1CMPMIN;
            // SEQ2EOC field
            typedef field_t<uint32_t, 0x40049008, 0x1, 16, rw_t<uint32_t>> f_SEQ2EOC;
            // SEQ2OVF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 17, rw_t<uint32_t>> f_SEQ2OVF;
            // SEQ2HALF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 18, rw_t<uint32_t>> f_SEQ2HALF;
            // SEQ2FULL field
            typedef field_t<uint32_t, 0x40049008, 0x1, 19, rw_t<uint32_t>> f_SEQ2FULL;
            // SEQ2CMPMAX field
            typedef field_t<uint32_t, 0x40049008, 0x1, 20, rw_t<uint32_t>> f_SEQ2CMPMAX;
            // SEQ2CMPMIN field
            typedef field_t<uint32_t, 0x40049008, 0x1, 21, rw_t<uint32_t>> f_SEQ2CMPMIN;
            // SEQ3EOC field
            typedef field_t<uint32_t, 0x40049008, 0x1, 24, rw_t<uint32_t>> f_SEQ3EOC;
            // SEQ3OVF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 25, rw_t<uint32_t>> f_SEQ3OVF;
            // SEQ3HALF field
            typedef field_t<uint32_t, 0x40049008, 0x1, 26, rw_t<uint32_t>> f_SEQ3HALF;
            // SEQ3FULL field
            typedef field_t<uint32_t, 0x40049008, 0x1, 27, rw_t<uint32_t>> f_SEQ3FULL;
            // SEQ3CMPMAX field
            typedef field_t<uint32_t, 0x40049008, 0x1, 28, rw_t<uint32_t>> f_SEQ3CMPMAX;
            // SEQ3CMPMIN field
            typedef field_t<uint32_t, 0x40049008, 0x1, 29, rw_t<uint32_t>> f_SEQ3CMPMIN;
        } // end of IE
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x4004900c, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_SEQ0EOC    = 0x00000001,
                MASK_SEQ0OVF    = 0x00000002,
                MASK_SEQ0HALF   = 0x00000004,
                MASK_SEQ0FULL   = 0x00000008,
                MASK_SEQ0CMPMAX = 0x00000010,
                MASK_SEQ0CMPMIN = 0x00000020,
                MASK_SEQ1EOC    = 0x00000100,
                MASK_SEQ1OVF    = 0x00000200,
                MASK_SEQ1HALF   = 0x00000400,
                MASK_SEQ1FULL   = 0x00000800,
                MASK_SEQ1CMPMAX = 0x00001000,
                MASK_SEQ1CMPMIN = 0x00002000,
                MASK_SEQ2EOC    = 0x00010000,
                MASK_SEQ2OVF    = 0x00020000,
                MASK_SEQ2HALF   = 0x00040000,
                MASK_SEQ2FULL   = 0x00080000,
                MASK_SEQ2CMPMAX = 0x00100000,
                MASK_SEQ2CMPMIN = 0x00200000,
                MASK_SEQ3EOC    = 0x01000000,
                MASK_SEQ3OVF    = 0x02000000,
                MASK_SEQ3HALF   = 0x04000000,
                MASK_SEQ3FULL   = 0x08000000,
                MASK_SEQ3CMPMAX = 0x10000000,
                MASK_SEQ3CMPMIN = 0x20000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ0EOC    = 0,
                OFFSET_SEQ0OVF    = 1,
                OFFSET_SEQ0HALF   = 2,
                OFFSET_SEQ0FULL   = 3,
                OFFSET_SEQ0CMPMAX = 4,
                OFFSET_SEQ0CMPMIN = 5,
                OFFSET_SEQ1EOC    = 8,
                OFFSET_SEQ1OVF    = 9,
                OFFSET_SEQ1HALF   = 10,
                OFFSET_SEQ1FULL   = 11,
                OFFSET_SEQ1CMPMAX = 12,
                OFFSET_SEQ1CMPMIN = 13,
                OFFSET_SEQ2EOC    = 16,
                OFFSET_SEQ2OVF    = 17,
                OFFSET_SEQ2HALF   = 18,
                OFFSET_SEQ2FULL   = 19,
                OFFSET_SEQ2CMPMAX = 20,
                OFFSET_SEQ2CMPMIN = 21,
                OFFSET_SEQ3EOC    = 24,
                OFFSET_SEQ3OVF    = 25,
                OFFSET_SEQ3HALF   = 26,
                OFFSET_SEQ3FULL   = 27,
                OFFSET_SEQ3CMPMAX = 28,
                OFFSET_SEQ3CMPMIN = 29,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ0EOC    = 1,
                WIDTH_SEQ0OVF    = 1,
                WIDTH_SEQ0HALF   = 1,
                WIDTH_SEQ0FULL   = 1,
                WIDTH_SEQ0CMPMAX = 1,
                WIDTH_SEQ0CMPMIN = 1,
                WIDTH_SEQ1EOC    = 1,
                WIDTH_SEQ1OVF    = 1,
                WIDTH_SEQ1HALF   = 1,
                WIDTH_SEQ1FULL   = 1,
                WIDTH_SEQ1CMPMAX = 1,
                WIDTH_SEQ1CMPMIN = 1,
                WIDTH_SEQ2EOC    = 1,
                WIDTH_SEQ2OVF    = 1,
                WIDTH_SEQ2HALF   = 1,
                WIDTH_SEQ2FULL   = 1,
                WIDTH_SEQ2CMPMAX = 1,
                WIDTH_SEQ2CMPMIN = 1,
                WIDTH_SEQ3EOC    = 1,
                WIDTH_SEQ3OVF    = 1,
                WIDTH_SEQ3HALF   = 1,
                WIDTH_SEQ3FULL   = 1,
                WIDTH_SEQ3CMPMAX = 1,
                WIDTH_SEQ3CMPMIN = 1,
            }; // endof width_t
            // SEQ0EOC field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 0, rw_t<uint32_t>> f_SEQ0EOC;
            // SEQ0OVF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 1, rw_t<uint32_t>> f_SEQ0OVF;
            // SEQ0HALF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 2, rw_t<uint32_t>> f_SEQ0HALF;
            // SEQ0FULL field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 3, rw_t<uint32_t>> f_SEQ0FULL;
            // SEQ0CMPMAX field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 4, rw_t<uint32_t>> f_SEQ0CMPMAX;
            // SEQ0CMPMIN field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 5, rw_t<uint32_t>> f_SEQ0CMPMIN;
            // SEQ1EOC field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 8, rw_t<uint32_t>> f_SEQ1EOC;
            // SEQ1OVF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 9, rw_t<uint32_t>> f_SEQ1OVF;
            // SEQ1HALF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 10, rw_t<uint32_t>> f_SEQ1HALF;
            // SEQ1FULL field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 11, rw_t<uint32_t>> f_SEQ1FULL;
            // SEQ1CMPMAX field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 12, rw_t<uint32_t>> f_SEQ1CMPMAX;
            // SEQ1CMPMIN field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 13, rw_t<uint32_t>> f_SEQ1CMPMIN;
            // SEQ2EOC field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 16, rw_t<uint32_t>> f_SEQ2EOC;
            // SEQ2OVF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 17, rw_t<uint32_t>> f_SEQ2OVF;
            // SEQ2HALF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 18, rw_t<uint32_t>> f_SEQ2HALF;
            // SEQ2FULL field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 19, rw_t<uint32_t>> f_SEQ2FULL;
            // SEQ2CMPMAX field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 20, rw_t<uint32_t>> f_SEQ2CMPMAX;
            // SEQ2CMPMIN field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 21, rw_t<uint32_t>> f_SEQ2CMPMIN;
            // SEQ3EOC field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 24, rw_t<uint32_t>> f_SEQ3EOC;
            // SEQ3OVF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 25, rw_t<uint32_t>> f_SEQ3OVF;
            // SEQ3HALF field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 26, rw_t<uint32_t>> f_SEQ3HALF;
            // SEQ3FULL field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 27, rw_t<uint32_t>> f_SEQ3FULL;
            // SEQ3CMPMAX field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 28, rw_t<uint32_t>> f_SEQ3CMPMAX;
            // SEQ3CMPMIN field
            typedef field_t<uint32_t, 0x4004900c, 0x1, 29, rw_t<uint32_t>> f_SEQ3CMPMIN;
        } // end of IF
        namespace SEQ0 {
            // register cluster
            namespace SR {
                typedef reg_t<uint32_t, 0x40049010, rw_t<uint32_t>> r_SR;
            } // end of SR
            namespace DR {
                typedef reg_t<uint32_t, 0x40049014, rw_t<uint32_t>> r_DR;
            } // end of DR
            namespace CMP {
                typedef reg_t<uint32_t, 0x40049018, rw_t<uint32_t>> r_CMP;
            } // end of CMP
        } // end of SEQ0
        namespace SEQ1 {
            // register cluster
            namespace SR {
                typedef reg_t<uint32_t, 0x40049020, rw_t<uint32_t>> r_SR;
            } // end of SR
            namespace DR {
                typedef reg_t<uint32_t, 0x40049024, rw_t<uint32_t>> r_DR;
            } // end of DR
            namespace CMP {
                typedef reg_t<uint32_t, 0x40049028, rw_t<uint32_t>> r_CMP;
            } // end of CMP
        } // end of SEQ1
        namespace SEQ2 {
            // register cluster
            namespace SR {
                typedef reg_t<uint32_t, 0x40049030, rw_t<uint32_t>> r_SR;
            } // end of SR
            namespace DR {
                typedef reg_t<uint32_t, 0x40049034, rw_t<uint32_t>> r_DR;
            } // end of DR
            namespace CMP {
                typedef reg_t<uint32_t, 0x40049038, rw_t<uint32_t>> r_CMP;
            } // end of CMP
        } // end of SEQ2
        namespace SEQ3 {
            // register cluster
            namespace SR {
                typedef reg_t<uint32_t, 0x40049040, rw_t<uint32_t>> r_SR;
            } // end of SR
            namespace DR {
                typedef reg_t<uint32_t, 0x40049044, rw_t<uint32_t>> r_DR;
            } // end of DR
            namespace CMP {
                typedef reg_t<uint32_t, 0x40049048, rw_t<uint32_t>> r_CMP;
            } // end of CMP
        } // end of SEQ3
        namespace SEQCHN0 {
            // SEQCHN0 register
            typedef reg_t<uint32_t, 0x4004908c, rw_t<uint32_t>> r_SEQCHN0;
            enum mask_t{
                MASK_SEQ0       = 0x00000800,
                MASK_SEQ1       = 0x08000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ0       = 0,
                OFFSET_SEQ1       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ0       = 12,
                WIDTH_SEQ1       = 12,
            }; // endof width_t
            // SEQ0 field
            typedef field_t<uint32_t, 0x4004908c, 0xfff, 0, rw_t<uint32_t>> f_SEQ0;
            // SEQ1 field
            typedef field_t<uint32_t, 0x4004908c, 0xfff, 16, rw_t<uint32_t>> f_SEQ1;
        } // end of SEQCHN0
        namespace SEQCHN1 {
            // SEQCHN1 register
            typedef reg_t<uint32_t, 0x40049090, rw_t<uint32_t>> r_SEQCHN1;
            enum mask_t{
                MASK_SEQ2       = 0x00000800,
                MASK_SEQ3       = 0x08000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ2       = 0,
                OFFSET_SEQ3       = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ2       = 12,
                WIDTH_SEQ3       = 12,
            }; // endof width_t
            // SEQ2 field
            typedef field_t<uint32_t, 0x40049090, 0xfff, 0, rw_t<uint32_t>> f_SEQ2;
            // SEQ3 field
            typedef field_t<uint32_t, 0x40049090, 0xfff, 16, rw_t<uint32_t>> f_SEQ3;
        } // end of SEQCHN1
        namespace SEQTRG {
            // SEQTRG register
            typedef reg_t<uint32_t, 0x40049094, rw_t<uint32_t>> r_SEQTRG;
            enum mask_t{
                MASK_SEQ0       = 0x00000010,
                MASK_SEQ1       = 0x00001000,
                MASK_SEQ2       = 0x00100000,
                MASK_SEQ3       = 0x10000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ0       = 0,
                OFFSET_SEQ1       = 8,
                OFFSET_SEQ2       = 16,
                OFFSET_SEQ3       = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ0       = 5,
                WIDTH_SEQ1       = 5,
                WIDTH_SEQ2       = 5,
                WIDTH_SEQ3       = 5,
            }; // endof width_t
            // SEQ0 field
            typedef field_t<uint32_t, 0x40049094, 0x1f, 0, rw_t<uint32_t>> f_SEQ0;
            // SEQ1 field
            typedef field_t<uint32_t, 0x40049094, 0x1f, 8, rw_t<uint32_t>> f_SEQ1;
            // SEQ2 field
            typedef field_t<uint32_t, 0x40049094, 0x1f, 16, rw_t<uint32_t>> f_SEQ2;
            // SEQ3 field
            typedef field_t<uint32_t, 0x40049094, 0x1f, 24, rw_t<uint32_t>> f_SEQ3;
        } // end of SEQTRG
        namespace SEQCOV {
            // SEQCOV register
            typedef reg_t<uint32_t, 0x40049098, rw_t<uint32_t>> r_SEQCOV;
            enum mask_t{
                MASK_SEQ0       = 0x00000080,
                MASK_SEQ1       = 0x00008000,
                MASK_SEQ2       = 0x00800000,
                MASK_SEQ3       = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ0       = 0,
                OFFSET_SEQ1       = 8,
                OFFSET_SEQ2       = 16,
                OFFSET_SEQ3       = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ0       = 8,
                WIDTH_SEQ1       = 8,
                WIDTH_SEQ2       = 8,
                WIDTH_SEQ3       = 8,
            }; // endof width_t
            // SEQ0 field
            typedef field_t<uint32_t, 0x40049098, 0xff, 0, rw_t<uint32_t>> f_SEQ0;
            // SEQ1 field
            typedef field_t<uint32_t, 0x40049098, 0xff, 8, rw_t<uint32_t>> f_SEQ1;
            // SEQ2 field
            typedef field_t<uint32_t, 0x40049098, 0xff, 16, rw_t<uint32_t>> f_SEQ2;
            // SEQ3 field
            typedef field_t<uint32_t, 0x40049098, 0xff, 24, rw_t<uint32_t>> f_SEQ3;
        } // end of SEQCOV
        namespace SEQSMP {
            // SEQSMP register
            typedef reg_t<uint32_t, 0x4004909c, rw_t<uint32_t>> r_SEQSMP;
            enum mask_t{
                MASK_SEQ0       = 0x00000004,
                MASK_SEQ1       = 0x00000040,
                MASK_SEQ2       = 0x00000400,
                MASK_SEQ3       = 0x00004000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEQ0       = 0,
                OFFSET_SEQ1       = 4,
                OFFSET_SEQ2       = 8,
                OFFSET_SEQ3       = 12,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEQ0       = 3,
                WIDTH_SEQ1       = 3,
                WIDTH_SEQ2       = 3,
                WIDTH_SEQ3       = 3,
            }; // endof width_t
            // SEQ0 field
            typedef field_t<uint32_t, 0x4004909c, 0x7, 0, rw_t<uint32_t>> f_SEQ0;
            // SEQ1 field
            typedef field_t<uint32_t, 0x4004909c, 0x7, 4, rw_t<uint32_t>> f_SEQ1;
            // SEQ2 field
            typedef field_t<uint32_t, 0x4004909c, 0x7, 8, rw_t<uint32_t>> f_SEQ2;
            // SEQ3 field
            typedef field_t<uint32_t, 0x4004909c, 0x7, 12, rw_t<uint32_t>> f_SEQ3;
        } // end of SEQSMP
        namespace CR2 {
            // CR2 register
            typedef reg_t<uint32_t, 0x400490b0, rw_t<uint32_t>> r_CR2;
            enum mask_t{
                MASK_ENLDO      = 0x00000004,
                MASK_BITS       = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ENLDO      = 2,
                OFFSET_BITS       = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_ENLDO      = 1,
                WIDTH_BITS       = 2,
            }; // endof width_t
            // ENLDO field
            typedef field_t<uint32_t, 0x400490b0, 0x1, 2, rw_t<uint32_t>> f_ENLDO;
            // BITS field
            typedef field_t<uint32_t, 0x400490b0, 0x3, 6, rw_t<uint32_t>> f_BITS;
        } // end of CR2
        namespace CALIB {
            // CALIB register
            typedef reg_t<uint32_t, 0x400490f0, rw_t<uint32_t>> r_CALIB;
            enum mask_t{
                MASK_RESET      = 0x00000001,
                MASK_START      = 0x00000002,
                MASK_BUSY       = 0x00000004,
                MASK_LOAD       = 0x00000008,
                MASK_BYPASS     = 0x00000010,
                MASK_RESULT     = 0x00004000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RESET      = 0,
                OFFSET_START      = 1,
                OFFSET_BUSY       = 2,
                OFFSET_LOAD       = 3,
                OFFSET_BYPASS     = 4,
                OFFSET_RESULT     = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_RESET      = 1,
                WIDTH_START      = 1,
                WIDTH_BUSY       = 1,
                WIDTH_LOAD       = 1,
                WIDTH_BYPASS     = 1,
                WIDTH_RESULT     = 7,
            }; // endof width_t
            // RESET field
            typedef field_t<uint32_t, 0x400490f0, 0x1, 0, rw_t<uint32_t>> f_RESET;
            // START field
            typedef field_t<uint32_t, 0x400490f0, 0x1, 1, rw_t<uint32_t>> f_START;
            // BUSY field
            typedef field_t<uint32_t, 0x400490f0, 0x1, 2, rw_t<uint32_t>> f_BUSY;
            // LOAD field
            typedef field_t<uint32_t, 0x400490f0, 0x1, 3, rw_t<uint32_t>> f_LOAD;
            // BYPASS field
            typedef field_t<uint32_t, 0x400490f0, 0x1, 4, rw_t<uint32_t>> f_BYPASS;
            // RESULT field
            typedef field_t<uint32_t, 0x400490f0, 0x7f, 8, rw_t<uint32_t>> f_RESULT;
        } // end of CALIB
    } // end of ADC0
} // end of PAC
#endif // end of #if USING_ADC0
