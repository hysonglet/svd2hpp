#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_PWM1) && (USING_PWM1 != 0))
namespace PAC {
    namespace PWM1 {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x40046080, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_MODE       = 0x00000002,
                MASK_MULT       = 0x00000004,
                MASK_DIR        = 0x00000008,
                MASK_CLKSRC     = 0x00000020,
                MASK_CLKDIV     = 0x00008000,
                MASK_RPTNUM     = 0x00800000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_MODE       = 0,
                OFFSET_MULT       = 2,
                OFFSET_DIR        = 3,
                OFFSET_CLKSRC     = 4,
                OFFSET_CLKDIV     = 6,
                OFFSET_RPTNUM     = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_MODE       = 2,
                WIDTH_MULT       = 1,
                WIDTH_DIR        = 1,
                WIDTH_CLKSRC     = 2,
                WIDTH_CLKDIV     = 10,
                WIDTH_RPTNUM     = 8,
            }; // endof width_t
            // MODE field
            typedef field_t<uint32_t, 0x40046080, 0x3, 0, rw_t<uint32_t>> f_MODE;
            // MULT field
            typedef field_t<uint32_t, 0x40046080, 0x1, 2, rw_t<uint32_t>> f_MULT;
            // DIR field
            typedef field_t<uint32_t, 0x40046080, 0x1, 3, rw_t<uint32_t>> f_DIR;
            // CLKSRC field
            typedef field_t<uint32_t, 0x40046080, 0x3, 4, rw_t<uint32_t>> f_CLKSRC;
            // CLKDIV field
            typedef field_t<uint32_t, 0x40046080, 0x3ff, 6, rw_t<uint32_t>> f_CLKDIV;
            // RPTNUM field
            typedef field_t<uint32_t, 0x40046080, 0xff, 16, rw_t<uint32_t>> f_RPTNUM;
        } // end of CR
        namespace OCR {
            // OCR register
            typedef reg_t<uint32_t, 0x40046084, rw_t<uint32_t>> r_OCR;
            enum mask_t{
                MASK_IDLEA      = 0x00000001,
                MASK_IDLEB      = 0x00000002,
                MASK_IDLEAN     = 0x00000004,
                MASK_IDLEBN     = 0x00000008,
                MASK_INVA       = 0x00000010,
                MASK_INVB       = 0x00000020,
                MASK_INVAN      = 0x00000040,
                MASK_INVBN      = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_IDLEA      = 0,
                OFFSET_IDLEB      = 1,
                OFFSET_IDLEAN     = 2,
                OFFSET_IDLEBN     = 3,
                OFFSET_INVA       = 4,
                OFFSET_INVB       = 5,
                OFFSET_INVAN      = 6,
                OFFSET_INVBN      = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_IDLEA      = 1,
                WIDTH_IDLEB      = 1,
                WIDTH_IDLEAN     = 1,
                WIDTH_IDLEBN     = 1,
                WIDTH_INVA       = 1,
                WIDTH_INVB       = 1,
                WIDTH_INVAN      = 1,
                WIDTH_INVBN      = 1,
            }; // endof width_t
            // IDLEA field
            typedef field_t<uint32_t, 0x40046084, 0x1, 0, rw_t<uint32_t>> f_IDLEA;
            // IDLEB field
            typedef field_t<uint32_t, 0x40046084, 0x1, 1, rw_t<uint32_t>> f_IDLEB;
            // IDLEAN field
            typedef field_t<uint32_t, 0x40046084, 0x1, 2, rw_t<uint32_t>> f_IDLEAN;
            // IDLEBN field
            typedef field_t<uint32_t, 0x40046084, 0x1, 3, rw_t<uint32_t>> f_IDLEBN;
            // INVA field
            typedef field_t<uint32_t, 0x40046084, 0x1, 4, rw_t<uint32_t>> f_INVA;
            // INVB field
            typedef field_t<uint32_t, 0x40046084, 0x1, 5, rw_t<uint32_t>> f_INVB;
            // INVAN field
            typedef field_t<uint32_t, 0x40046084, 0x1, 6, rw_t<uint32_t>> f_INVAN;
            // INVBN field
            typedef field_t<uint32_t, 0x40046084, 0x1, 7, rw_t<uint32_t>> f_INVBN;
        } // end of OCR
        namespace BRKCR {
            // BRKCR register
            typedef reg_t<uint32_t, 0x40046088, rw_t<uint32_t>> r_BRKCR;
            enum mask_t{
                MASK_OUTA       = 0x00000001,
                MASK_OFFA       = 0x00000002,
                MASK_OUTB       = 0x00000010,
                MASK_OFFB       = 0x00000020,
                MASK_OUTAN      = 0x00000100,
                MASK_OUTBN      = 0x00000200,
                MASK_STPCNT     = 0x00000400,
                MASK_ACTIVE     = 0x00020000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_OUTA       = 0,
                OFFSET_OFFA       = 1,
                OFFSET_OUTB       = 4,
                OFFSET_OFFB       = 5,
                OFFSET_OUTAN      = 8,
                OFFSET_OUTBN      = 9,
                OFFSET_STPCNT     = 10,
                OFFSET_ACTIVE     = 17,
            }; // endof offset_t
            enum width_t{
                WIDTH_OUTA       = 1,
                WIDTH_OFFA       = 1,
                WIDTH_OUTB       = 1,
                WIDTH_OFFB       = 1,
                WIDTH_OUTAN      = 1,
                WIDTH_OUTBN      = 1,
                WIDTH_STPCNT     = 1,
                WIDTH_ACTIVE     = 1,
            }; // endof width_t
            // OUTA field
            typedef field_t<uint32_t, 0x40046088, 0x1, 0, rw_t<uint32_t>> f_OUTA;
            // OFFA field
            typedef field_t<uint32_t, 0x40046088, 0x1, 1, rw_t<uint32_t>> f_OFFA;
            // OUTB field
            typedef field_t<uint32_t, 0x40046088, 0x1, 4, rw_t<uint32_t>> f_OUTB;
            // OFFB field
            typedef field_t<uint32_t, 0x40046088, 0x1, 5, rw_t<uint32_t>> f_OFFB;
            // OUTAN field
            typedef field_t<uint32_t, 0x40046088, 0x1, 8, rw_t<uint32_t>> f_OUTAN;
            // OUTBN field
            typedef field_t<uint32_t, 0x40046088, 0x1, 9, rw_t<uint32_t>> f_OUTBN;
            // STPCNT field
            typedef field_t<uint32_t, 0x40046088, 0x1, 10, rw_t<uint32_t>> f_STPCNT;
            // ACTIVE field
            typedef field_t<uint32_t, 0x40046088, 0x1, 17, rw_t<uint32_t>> f_ACTIVE;
        } // end of BRKCR
        namespace BRKIN {
            // BRKIN register
            typedef reg_t<uint32_t, 0x4004608c, rw_t<uint32_t>> r_BRKIN;
            enum mask_t{
                MASK_BRK0A      = 0x00000001,
                MASK_BRK1A      = 0x00000002,
                MASK_BRK2A      = 0x00000004,
                MASK_BRK0B      = 0x00000010,
                MASK_BRK1B      = 0x00000020,
                MASK_BRK2B      = 0x00000040,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRK0A      = 0,
                OFFSET_BRK1A      = 1,
                OFFSET_BRK2A      = 2,
                OFFSET_BRK0B      = 4,
                OFFSET_BRK1B      = 5,
                OFFSET_BRK2B      = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRK0A      = 1,
                WIDTH_BRK1A      = 1,
                WIDTH_BRK2A      = 1,
                WIDTH_BRK0B      = 1,
                WIDTH_BRK1B      = 1,
                WIDTH_BRK2B      = 1,
            }; // endof width_t
            // BRK0A field
            typedef field_t<uint32_t, 0x4004608c, 0x1, 0, rw_t<uint32_t>> f_BRK0A;
            // BRK1A field
            typedef field_t<uint32_t, 0x4004608c, 0x1, 1, rw_t<uint32_t>> f_BRK1A;
            // BRK2A field
            typedef field_t<uint32_t, 0x4004608c, 0x1, 2, rw_t<uint32_t>> f_BRK2A;
            // BRK0B field
            typedef field_t<uint32_t, 0x4004608c, 0x1, 4, rw_t<uint32_t>> f_BRK0B;
            // BRK1B field
            typedef field_t<uint32_t, 0x4004608c, 0x1, 5, rw_t<uint32_t>> f_BRK1B;
            // BRK2B field
            typedef field_t<uint32_t, 0x4004608c, 0x1, 6, rw_t<uint32_t>> f_BRK2B;
        } // end of BRKIN
        namespace PERIOD {
            // PERIOD register
            typedef reg_t<uint32_t, 0x400460a0, rw_t<uint32_t>> r_PERIOD;
        } // end of PERIOD
        namespace CMPA {
            // CMPA register
            typedef reg_t<uint32_t, 0x400460a4, rw_t<uint32_t>> r_CMPA;
        } // end of CMPA
        namespace CMPB {
            // CMPB register
            typedef reg_t<uint32_t, 0x400460a8, rw_t<uint32_t>> r_CMPB;
        } // end of CMPB
        namespace DZA {
            // DZA register
            typedef reg_t<uint32_t, 0x400460ac, rw_t<uint32_t>> r_DZA;
        } // end of DZA
        namespace DZB {
            // DZB register
            typedef reg_t<uint32_t, 0x400460b0, rw_t<uint32_t>> r_DZB;
        } // end of DZB
        namespace CMPA2 {
            // CMPA2 register
            typedef reg_t<uint32_t, 0x400460b4, rw_t<uint32_t>> r_CMPA2;
        } // end of CMPA2
        namespace CMPB2 {
            // CMPB2 register
            typedef reg_t<uint32_t, 0x400460b8, rw_t<uint32_t>> r_CMPB2;
        } // end of CMPB2
        namespace OVFTRG {
            // OVFTRG register
            typedef reg_t<uint32_t, 0x400460d0, rw_t<uint32_t>> r_OVFTRG;
            enum mask_t{
                MASK_UPEN       = 0x00000001,
                MASK_DNEN       = 0x00000002,
                MASK_MUX        = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_UPEN       = 0,
                OFFSET_DNEN       = 1,
                OFFSET_MUX        = 2,
            }; // endof offset_t
            enum width_t{
                WIDTH_UPEN       = 1,
                WIDTH_DNEN       = 1,
                WIDTH_MUX        = 3,
            }; // endof width_t
            // UPEN field
            typedef field_t<uint32_t, 0x400460d0, 0x1, 0, rw_t<uint32_t>> f_UPEN;
            // DNEN field
            typedef field_t<uint32_t, 0x400460d0, 0x1, 1, rw_t<uint32_t>> f_DNEN;
            // MUX field
            typedef field_t<uint32_t, 0x400460d0, 0x7, 2, rw_t<uint32_t>> f_MUX;
        } // end of OVFTRG
        namespace CMPTRG {
            // CMPTRG register
            typedef reg_t<uint32_t, 0x400460d4, rw_t<uint32_t>> r_CMPTRG;
            enum mask_t{
                MASK_CMP        = 0x00008000,
                MASK_EN         = 0x00010000,
                MASK_MUX        = 0x00080000,
                MASK_WIDTH      = 0x02000000,
                MASK_DIR        = 0x10000000,
                MASK_ATP        = 0x80000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CMP        = 0,
                OFFSET_EN         = 16,
                OFFSET_MUX        = 17,
                OFFSET_WIDTH      = 20,
                OFFSET_DIR        = 28,
                OFFSET_ATP        = 29,
            }; // endof offset_t
            enum width_t{
                WIDTH_CMP        = 16,
                WIDTH_EN         = 1,
                WIDTH_MUX        = 3,
                WIDTH_WIDTH      = 6,
                WIDTH_DIR        = 1,
                WIDTH_ATP        = 3,
            }; // endof width_t
            // CMP field
            typedef field_t<uint32_t, 0x400460d4, 0xffff, 0, rw_t<uint32_t>> f_CMP;
            // EN field
            typedef field_t<uint32_t, 0x400460d4, 0x1, 16, rw_t<uint32_t>> f_EN;
            // MUX field
            typedef field_t<uint32_t, 0x400460d4, 0x7, 17, rw_t<uint32_t>> f_MUX;
            // WIDTH field
            typedef field_t<uint32_t, 0x400460d4, 0x3f, 20, rw_t<uint32_t>> f_WIDTH;
            // DIR field
            typedef field_t<uint32_t, 0x400460d4, 0x1, 28, rw_t<uint32_t>> f_DIR;
            // ATP field
            typedef field_t<uint32_t, 0x400460d4, 0x7, 29, rw_t<uint32_t>> f_ATP;
        } // end of CMPTRG
        namespace EVMUX {
            // EVMUX register
            typedef reg_t<uint32_t, 0x400460e0, rw_t<uint32_t>> r_EVMUX;
            enum mask_t{
                MASK_START      = 0x00000004,
                MASK_STOP       = 0x00000040,
                MASK_PAUSE      = 0x00000400,
                MASK_RELOAD     = 0x00004000,
                MASK_MASKA      = 0x00040000,
                MASK_MASKB      = 0x00400000,
                MASK_MASKAN     = 0x04000000,
                MASK_MASKBN     = 0x40000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_START      = 0,
                OFFSET_STOP       = 4,
                OFFSET_PAUSE      = 8,
                OFFSET_RELOAD     = 12,
                OFFSET_MASKA      = 16,
                OFFSET_MASKB      = 20,
                OFFSET_MASKAN     = 24,
                OFFSET_MASKBN     = 28,
            }; // endof offset_t
            enum width_t{
                WIDTH_START      = 3,
                WIDTH_STOP       = 3,
                WIDTH_PAUSE      = 3,
                WIDTH_RELOAD     = 3,
                WIDTH_MASKA      = 3,
                WIDTH_MASKB      = 3,
                WIDTH_MASKAN     = 3,
                WIDTH_MASKBN     = 3,
            }; // endof width_t
            // START field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 0, rw_t<uint32_t>> f_START;
            // STOP field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 4, rw_t<uint32_t>> f_STOP;
            // PAUSE field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 8, rw_t<uint32_t>> f_PAUSE;
            // RELOAD field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 12, rw_t<uint32_t>> f_RELOAD;
            // MASKA field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 16, rw_t<uint32_t>> f_MASKA;
            // MASKB field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 20, rw_t<uint32_t>> f_MASKB;
            // MASKAN field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 24, rw_t<uint32_t>> f_MASKAN;
            // MASKBN field
            typedef field_t<uint32_t, 0x400460e0, 0x7, 28, rw_t<uint32_t>> f_MASKBN;
        } // end of EVMUX
        namespace EVMSK {
            // EVMSK register
            typedef reg_t<uint32_t, 0x400460e4, rw_t<uint32_t>> r_EVMSK;
            enum mask_t{
                MASK_OUTA       = 0x00000001,
                MASK_OUTB       = 0x00000002,
                MASK_OUTAN      = 0x00000004,
                MASK_OUTBN      = 0x00000008,
                MASK_IMME       = 0x00000010,
                MASK_STPCLR     = 0x00000100,
            }; // endof mask_t
            enum offset_t{
                OFFSET_OUTA       = 0,
                OFFSET_OUTB       = 1,
                OFFSET_OUTAN      = 2,
                OFFSET_OUTBN      = 3,
                OFFSET_IMME       = 4,
                OFFSET_STPCLR     = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_OUTA       = 1,
                WIDTH_OUTB       = 1,
                WIDTH_OUTAN      = 1,
                WIDTH_OUTBN      = 1,
                WIDTH_IMME       = 1,
                WIDTH_STPCLR     = 1,
            }; // endof width_t
            // OUTA field
            typedef field_t<uint32_t, 0x400460e4, 0x1, 0, rw_t<uint32_t>> f_OUTA;
            // OUTB field
            typedef field_t<uint32_t, 0x400460e4, 0x1, 1, rw_t<uint32_t>> f_OUTB;
            // OUTAN field
            typedef field_t<uint32_t, 0x400460e4, 0x1, 2, rw_t<uint32_t>> f_OUTAN;
            // OUTBN field
            typedef field_t<uint32_t, 0x400460e4, 0x1, 3, rw_t<uint32_t>> f_OUTBN;
            // IMME field
            typedef field_t<uint32_t, 0x400460e4, 0x1, 4, rw_t<uint32_t>> f_IMME;
            // STPCLR field
            typedef field_t<uint32_t, 0x400460e4, 0x1, 8, rw_t<uint32_t>> f_STPCLR;
        } // end of EVMSK
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x400460f0, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_UPOVF      = 0x00000001,
                MASK_DNOVF      = 0x00000002,
                MASK_UPCMPA     = 0x00000004,
                MASK_UPCMPB     = 0x00000008,
                MASK_DNCMPA     = 0x00000010,
                MASK_DNCMPB     = 0x00000020,
            }; // endof mask_t
            enum offset_t{
                OFFSET_UPOVF      = 0,
                OFFSET_DNOVF      = 1,
                OFFSET_UPCMPA     = 2,
                OFFSET_UPCMPB     = 3,
                OFFSET_DNCMPA     = 4,
                OFFSET_DNCMPB     = 5,
            }; // endof offset_t
            enum width_t{
                WIDTH_UPOVF      = 1,
                WIDTH_DNOVF      = 1,
                WIDTH_UPCMPA     = 1,
                WIDTH_UPCMPB     = 1,
                WIDTH_DNCMPA     = 1,
                WIDTH_DNCMPB     = 1,
            }; // endof width_t
            // UPOVF field
            typedef field_t<uint32_t, 0x400460f0, 0x1, 0, rw_t<uint32_t>> f_UPOVF;
            // DNOVF field
            typedef field_t<uint32_t, 0x400460f0, 0x1, 1, rw_t<uint32_t>> f_DNOVF;
            // UPCMPA field
            typedef field_t<uint32_t, 0x400460f0, 0x1, 2, rw_t<uint32_t>> f_UPCMPA;
            // UPCMPB field
            typedef field_t<uint32_t, 0x400460f0, 0x1, 3, rw_t<uint32_t>> f_UPCMPB;
            // DNCMPA field
            typedef field_t<uint32_t, 0x400460f0, 0x1, 4, rw_t<uint32_t>> f_DNCMPA;
            // DNCMPB field
            typedef field_t<uint32_t, 0x400460f0, 0x1, 5, rw_t<uint32_t>> f_DNCMPB;
        } // end of IE
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x400460f4, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_UPOVF      = 0x00000001,
                MASK_DNOVF      = 0x00000002,
                MASK_UPCMPA     = 0x00000004,
                MASK_UPCMPB     = 0x00000008,
                MASK_DNCMPA     = 0x00000010,
                MASK_DNCMPB     = 0x00000020,
            }; // endof mask_t
            enum offset_t{
                OFFSET_UPOVF      = 0,
                OFFSET_DNOVF      = 1,
                OFFSET_UPCMPA     = 2,
                OFFSET_UPCMPB     = 3,
                OFFSET_DNCMPA     = 4,
                OFFSET_DNCMPB     = 5,
            }; // endof offset_t
            enum width_t{
                WIDTH_UPOVF      = 1,
                WIDTH_DNOVF      = 1,
                WIDTH_UPCMPA     = 1,
                WIDTH_UPCMPB     = 1,
                WIDTH_DNCMPA     = 1,
                WIDTH_DNCMPB     = 1,
            }; // endof width_t
            // UPOVF field
            typedef field_t<uint32_t, 0x400460f4, 0x1, 0, rw_t<uint32_t>> f_UPOVF;
            // DNOVF field
            typedef field_t<uint32_t, 0x400460f4, 0x1, 1, rw_t<uint32_t>> f_DNOVF;
            // UPCMPA field
            typedef field_t<uint32_t, 0x400460f4, 0x1, 2, rw_t<uint32_t>> f_UPCMPA;
            // UPCMPB field
            typedef field_t<uint32_t, 0x400460f4, 0x1, 3, rw_t<uint32_t>> f_UPCMPB;
            // DNCMPA field
            typedef field_t<uint32_t, 0x400460f4, 0x1, 4, rw_t<uint32_t>> f_DNCMPA;
            // DNCMPB field
            typedef field_t<uint32_t, 0x400460f4, 0x1, 5, rw_t<uint32_t>> f_DNCMPB;
        } // end of IF
        namespace VALUE {
            // VALUE register
            typedef reg_t<uint32_t, 0x400460f8, rw_t<uint32_t>> r_VALUE;
        } // end of VALUE
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x400460fc, rw_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_STAT       = 0x00000002,
                MASK_DIR        = 0x00000010,
                MASK_OUTA       = 0x00000020,
                MASK_OUTB       = 0x00000040,
                MASK_OUTAN      = 0x00000080,
                MASK_OUTBN      = 0x00000100,
            }; // endof mask_t
            enum offset_t{
                OFFSET_STAT       = 0,
                OFFSET_DIR        = 4,
                OFFSET_OUTA       = 5,
                OFFSET_OUTB       = 6,
                OFFSET_OUTAN      = 7,
                OFFSET_OUTBN      = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_STAT       = 2,
                WIDTH_DIR        = 1,
                WIDTH_OUTA       = 1,
                WIDTH_OUTB       = 1,
                WIDTH_OUTAN      = 1,
                WIDTH_OUTBN      = 1,
            }; // endof width_t
            // STAT field
            typedef field_t<uint32_t, 0x400460fc, 0x3, 0, rw_t<uint32_t>> f_STAT;
            // DIR field
            typedef field_t<uint32_t, 0x400460fc, 0x1, 4, rw_t<uint32_t>> f_DIR;
            // OUTA field
            typedef field_t<uint32_t, 0x400460fc, 0x1, 5, rw_t<uint32_t>> f_OUTA;
            // OUTB field
            typedef field_t<uint32_t, 0x400460fc, 0x1, 6, rw_t<uint32_t>> f_OUTB;
            // OUTAN field
            typedef field_t<uint32_t, 0x400460fc, 0x1, 7, rw_t<uint32_t>> f_OUTAN;
            // OUTBN field
            typedef field_t<uint32_t, 0x400460fc, 0x1, 8, rw_t<uint32_t>> f_OUTBN;
        } // end of SR
    } // end of PWM0
} // end of PAC
#endif // end of #if USING_PWM0
