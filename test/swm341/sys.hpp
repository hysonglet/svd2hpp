#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_SYS) && (USING_SYS != 0))
namespace PAC {
    namespace SYS {
        namespace CLKSEL {
            // CLKSEL register
            typedef reg_t<uint32_t, 0x40000000, rw_t<uint32_t>> r_CLKSEL;
            enum mask_t{
                MASK_SYS        = 0x00000001,
                MASK_CLK_DIVX   = 0x00000002,
                MASK_CLK        = 0x00000010,
                MASK_RTC        = 0x00000020,
                MASK_IOFILT     = 0x00000080,
                MASK_SDIO       = 0x00000800,
                MASK_WDT        = 0x00002000,
                MASK_AD0        = 0x00020000,
                MASK_AD0DIV     = 0x00080000,
                MASK_AD1        = 0x00200000,
                MASK_AD1DIV     = 0x00800000,
                MASK_SLEEP      = 0x01000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SYS        = 0,
                OFFSET_CLK_DIVX   = 1,
                OFFSET_CLK        = 2,
                OFFSET_RTC        = 5,
                OFFSET_IOFILT     = 6,
                OFFSET_SDIO       = 10,
                OFFSET_WDT        = 12,
                OFFSET_AD0        = 16,
                OFFSET_AD0DIV     = 18,
                OFFSET_AD1        = 20,
                OFFSET_AD1DIV     = 22,
                OFFSET_SLEEP      = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_SYS        = 1,
                WIDTH_CLK_DIVX   = 1,
                WIDTH_CLK        = 3,
                WIDTH_RTC        = 1,
                WIDTH_IOFILT     = 2,
                WIDTH_SDIO       = 2,
                WIDTH_WDT        = 2,
                WIDTH_AD0        = 2,
                WIDTH_AD0DIV     = 2,
                WIDTH_AD1        = 2,
                WIDTH_AD1DIV     = 2,
                WIDTH_SLEEP      = 1,
            }; // endof width_t
            // SYS field
            typedef field_t<uint32_t, 0x40000000, 0x1, 0, rw_t<uint32_t>> f_SYS;
            // CLK_DIVx field
            typedef field_t<uint32_t, 0x40000000, 0x1, 1, rw_t<uint32_t>> f_CLK_DIVX;
            // CLK field
            typedef field_t<uint32_t, 0x40000000, 0x7, 2, rw_t<uint32_t>> f_CLK;
            // RTC field
            typedef field_t<uint32_t, 0x40000000, 0x1, 5, rw_t<uint32_t>> f_RTC;
            // IOFILT field
            typedef field_t<uint32_t, 0x40000000, 0x3, 6, rw_t<uint32_t>> f_IOFILT;
            // SDIO field
            typedef field_t<uint32_t, 0x40000000, 0x3, 10, rw_t<uint32_t>> f_SDIO;
            // WDT field
            typedef field_t<uint32_t, 0x40000000, 0x3, 12, rw_t<uint32_t>> f_WDT;
            // AD0 field
            typedef field_t<uint32_t, 0x40000000, 0x3, 16, rw_t<uint32_t>> f_AD0;
            // AD0DIV field
            typedef field_t<uint32_t, 0x40000000, 0x3, 18, rw_t<uint32_t>> f_AD0DIV;
            // AD1 field
            typedef field_t<uint32_t, 0x40000000, 0x3, 20, rw_t<uint32_t>> f_AD1;
            // AD1DIV field
            typedef field_t<uint32_t, 0x40000000, 0x3, 22, rw_t<uint32_t>> f_AD1DIV;
            // SLEEP field
            typedef field_t<uint32_t, 0x40000000, 0x1, 24, rw_t<uint32_t>> f_SLEEP;
        } // end of CLKSEL
        namespace CLKDIVX_ON {
            // CLKDIVx_ON register
            typedef reg_t<uint32_t, 0x40000004, rw_t<uint32_t>> r_CLKDIVX_ON;
        } // end of CLKDIVx_ON
        namespace CLKEN0 {
            // CLKEN0 register
            typedef reg_t<uint32_t, 0x40000008, rw_t<uint32_t>> r_CLKEN0;
            enum mask_t{
                MASK_GPIOA      = 0x00000001,
                MASK_GPIOB      = 0x00000002,
                MASK_GPIOC      = 0x00000004,
                MASK_GPIOD      = 0x00000008,
                MASK_GPIOM      = 0x00000010,
                MASK_GPION      = 0x00000020,
                MASK_UART0      = 0x00000040,
                MASK_UART1      = 0x00000080,
                MASK_UART2      = 0x00000100,
                MASK_UART3      = 0x00000200,
                MASK_WDT        = 0x00000400,
                MASK_TIMR       = 0x00000800,
                MASK_PWM        = 0x00001000,
                MASK_SPI0       = 0x00002000,
                MASK_SPI1       = 0x00004000,
                MASK_I2C0       = 0x00008000,
                MASK_I2C1       = 0x00010000,
                MASK_CRC        = 0x00080000,
                MASK_CORDIC     = 0x00100000,
                MASK_DIV        = 0x00200000,
                MASK_SDIO       = 0x00400000,
                MASK_USB        = 0x01000000,
                MASK_ANAC       = 0x02000000,
                MASK_ADC0       = 0x04000000,
                MASK_CAN0       = 0x10000000,
                MASK_DMA2D      = 0x20000000,
                MASK_LCD        = 0x40000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_GPIOA      = 0,
                OFFSET_GPIOB      = 1,
                OFFSET_GPIOC      = 2,
                OFFSET_GPIOD      = 3,
                OFFSET_GPIOM      = 4,
                OFFSET_GPION      = 5,
                OFFSET_UART0      = 6,
                OFFSET_UART1      = 7,
                OFFSET_UART2      = 8,
                OFFSET_UART3      = 9,
                OFFSET_WDT        = 10,
                OFFSET_TIMR       = 11,
                OFFSET_PWM        = 12,
                OFFSET_SPI0       = 13,
                OFFSET_SPI1       = 14,
                OFFSET_I2C0       = 15,
                OFFSET_I2C1       = 16,
                OFFSET_CRC        = 19,
                OFFSET_CORDIC     = 20,
                OFFSET_DIV        = 21,
                OFFSET_SDIO       = 22,
                OFFSET_USB        = 24,
                OFFSET_ANAC       = 25,
                OFFSET_ADC0       = 26,
                OFFSET_CAN0       = 28,
                OFFSET_DMA2D      = 29,
                OFFSET_LCD        = 30,
            }; // endof offset_t
            enum width_t{
                WIDTH_GPIOA      = 1,
                WIDTH_GPIOB      = 1,
                WIDTH_GPIOC      = 1,
                WIDTH_GPIOD      = 1,
                WIDTH_GPIOM      = 1,
                WIDTH_GPION      = 1,
                WIDTH_UART0      = 1,
                WIDTH_UART1      = 1,
                WIDTH_UART2      = 1,
                WIDTH_UART3      = 1,
                WIDTH_WDT        = 1,
                WIDTH_TIMR       = 1,
                WIDTH_PWM        = 1,
                WIDTH_SPI0       = 1,
                WIDTH_SPI1       = 1,
                WIDTH_I2C0       = 1,
                WIDTH_I2C1       = 1,
                WIDTH_CRC        = 1,
                WIDTH_CORDIC     = 1,
                WIDTH_DIV        = 1,
                WIDTH_SDIO       = 1,
                WIDTH_USB        = 1,
                WIDTH_ANAC       = 1,
                WIDTH_ADC0       = 1,
                WIDTH_CAN0       = 1,
                WIDTH_DMA2D      = 1,
                WIDTH_LCD        = 1,
            }; // endof width_t
            // GPIOA field
            typedef field_t<uint32_t, 0x40000008, 0x1, 0, rw_t<uint32_t>> f_GPIOA;
            // GPIOB field
            typedef field_t<uint32_t, 0x40000008, 0x1, 1, rw_t<uint32_t>> f_GPIOB;
            // GPIOC field
            typedef field_t<uint32_t, 0x40000008, 0x1, 2, rw_t<uint32_t>> f_GPIOC;
            // GPIOD field
            typedef field_t<uint32_t, 0x40000008, 0x1, 3, rw_t<uint32_t>> f_GPIOD;
            // GPIOM field
            typedef field_t<uint32_t, 0x40000008, 0x1, 4, rw_t<uint32_t>> f_GPIOM;
            // GPION field
            typedef field_t<uint32_t, 0x40000008, 0x1, 5, rw_t<uint32_t>> f_GPION;
            // UART0 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 6, rw_t<uint32_t>> f_UART0;
            // UART1 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 7, rw_t<uint32_t>> f_UART1;
            // UART2 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 8, rw_t<uint32_t>> f_UART2;
            // UART3 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 9, rw_t<uint32_t>> f_UART3;
            // WDT field
            typedef field_t<uint32_t, 0x40000008, 0x1, 10, rw_t<uint32_t>> f_WDT;
            // TIMR field
            typedef field_t<uint32_t, 0x40000008, 0x1, 11, rw_t<uint32_t>> f_TIMR;
            // PWM field
            typedef field_t<uint32_t, 0x40000008, 0x1, 12, rw_t<uint32_t>> f_PWM;
            // SPI0 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 13, rw_t<uint32_t>> f_SPI0;
            // SPI1 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 14, rw_t<uint32_t>> f_SPI1;
            // I2C0 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 15, rw_t<uint32_t>> f_I2C0;
            // I2C1 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 16, rw_t<uint32_t>> f_I2C1;
            // CRC field
            typedef field_t<uint32_t, 0x40000008, 0x1, 19, rw_t<uint32_t>> f_CRC;
            // CORDIC field
            typedef field_t<uint32_t, 0x40000008, 0x1, 20, rw_t<uint32_t>> f_CORDIC;
            // DIV field
            typedef field_t<uint32_t, 0x40000008, 0x1, 21, rw_t<uint32_t>> f_DIV;
            // SDIO field
            typedef field_t<uint32_t, 0x40000008, 0x1, 22, rw_t<uint32_t>> f_SDIO;
            // USB field
            typedef field_t<uint32_t, 0x40000008, 0x1, 24, rw_t<uint32_t>> f_USB;
            // ANAC field
            typedef field_t<uint32_t, 0x40000008, 0x1, 25, rw_t<uint32_t>> f_ANAC;
            // ADC0 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 26, rw_t<uint32_t>> f_ADC0;
            // CAN0 field
            typedef field_t<uint32_t, 0x40000008, 0x1, 28, rw_t<uint32_t>> f_CAN0;
            // DMA2D field
            typedef field_t<uint32_t, 0x40000008, 0x1, 29, rw_t<uint32_t>> f_DMA2D;
            // LCD field
            typedef field_t<uint32_t, 0x40000008, 0x1, 30, rw_t<uint32_t>> f_LCD;
        } // end of CLKEN0
        namespace CLKEN1 {
            // CLKEN1 register
            typedef reg_t<uint32_t, 0x4000000c, rw_t<uint32_t>> r_CLKEN1;
            enum mask_t{
                MASK_GPIOE      = 0x00000001,
                MASK_SPI2       = 0x00000100,
                MASK_SDRAM      = 0x00001000,
                MASK_SFC        = 0x00002000,
                MASK_ADC1       = 0x00010000,
                MASK_CAN1       = 0x00020000,
                MASK_RTC        = 0x00080000,
                MASK_IOFILT     = 0x00100000,
                MASK_BTIMR      = 0x00400000,
                MASK_JPEG       = 0x02000000,
                MASK_DAC        = 0x04000000,
                MASK_QEI        = 0x08000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_GPIOE      = 0,
                OFFSET_SPI2       = 8,
                OFFSET_SDRAM      = 12,
                OFFSET_SFC        = 13,
                OFFSET_ADC1       = 16,
                OFFSET_CAN1       = 17,
                OFFSET_RTC        = 19,
                OFFSET_IOFILT     = 20,
                OFFSET_BTIMR      = 22,
                OFFSET_JPEG       = 25,
                OFFSET_DAC        = 26,
                OFFSET_QEI        = 27,
            }; // endof offset_t
            enum width_t{
                WIDTH_GPIOE      = 1,
                WIDTH_SPI2       = 1,
                WIDTH_SDRAM      = 1,
                WIDTH_SFC        = 1,
                WIDTH_ADC1       = 1,
                WIDTH_CAN1       = 1,
                WIDTH_RTC        = 1,
                WIDTH_IOFILT     = 1,
                WIDTH_BTIMR      = 1,
                WIDTH_JPEG       = 1,
                WIDTH_DAC        = 1,
                WIDTH_QEI        = 1,
            }; // endof width_t
            // GPIOE field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 0, rw_t<uint32_t>> f_GPIOE;
            // SPI2 field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 8, rw_t<uint32_t>> f_SPI2;
            // SDRAM field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 12, rw_t<uint32_t>> f_SDRAM;
            // SFC field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 13, rw_t<uint32_t>> f_SFC;
            // ADC1 field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 16, rw_t<uint32_t>> f_ADC1;
            // CAN1 field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 17, rw_t<uint32_t>> f_CAN1;
            // RTC field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 19, rw_t<uint32_t>> f_RTC;
            // IOFILT field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 20, rw_t<uint32_t>> f_IOFILT;
            // BTIMR field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 22, rw_t<uint32_t>> f_BTIMR;
            // JPEG field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 25, rw_t<uint32_t>> f_JPEG;
            // DAC field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 26, rw_t<uint32_t>> f_DAC;
            // QEI field
            typedef field_t<uint32_t, 0x4000000c, 0x1, 27, rw_t<uint32_t>> f_QEI;
        } // end of CLKEN1
        namespace SLEEP {
            // SLEEP register
            typedef reg_t<uint32_t, 0x40000010, rw_t<uint32_t>> r_SLEEP;
            enum mask_t{
                MASK_SLEEP      = 0x00000001,
                MASK_STOP       = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SLEEP      = 0,
                OFFSET_STOP       = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_SLEEP      = 1,
                WIDTH_STOP       = 1,
            }; // endof width_t
            // SLEEP field
            typedef field_t<uint32_t, 0x40000010, 0x1, 0, rw_t<uint32_t>> f_SLEEP;
            // STOP field
            typedef field_t<uint32_t, 0x40000010, 0x1, 1, rw_t<uint32_t>> f_STOP;
        } // end of SLEEP
        namespace RSTSR {
            // RSTSR register
            typedef reg_t<uint32_t, 0x40000024, rw_t<uint32_t>> r_RSTSR;
            enum mask_t{
                MASK_POR        = 0x00000001,
                MASK_WDT        = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_POR        = 0,
                OFFSET_WDT        = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_POR        = 1,
                WIDTH_WDT        = 1,
            }; // endof width_t
            // POR field
            typedef field_t<uint32_t, 0x40000024, 0x1, 0, rw_t<uint32_t>> f_POR;
            // WDT field
            typedef field_t<uint32_t, 0x40000024, 0x1, 1, rw_t<uint32_t>> f_WDT;
        } // end of RSTSR
        namespace RTCWKCR {
            // RTCWKCR register
            typedef reg_t<uint32_t, 0x40000030, rw_t<uint32_t>> r_RTCWKCR;
            enum mask_t{
                MASK_EN         = 0x00000001,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x40000030, 0x1, 0, rw_t<uint32_t>> f_EN;
        } // end of RTCWKCR
        namespace RTCWKSR {
            // RTCWKSR register
            typedef reg_t<uint32_t, 0x40000034, rw_t<uint32_t>> r_RTCWKSR;
            enum mask_t{
                MASK_FLAG       = 0x00000001,
            }; // endof mask_t
            enum offset_t{
                OFFSET_FLAG       = 0,
            }; // endof offset_t
            enum width_t{
                WIDTH_FLAG       = 1,
            }; // endof width_t
            // FLAG field
            typedef field_t<uint32_t, 0x40000034, 0x1, 0, rw_t<uint32_t>> f_FLAG;
        } // end of RTCWKSR
        namespace USBPHYCR {
            // USBPHYCR register
            typedef reg_t<uint32_t, 0x40000070, rw_t<uint32_t>> r_USBPHYCR;
            enum mask_t{
                MASK_IDEN       = 0x00000001,
                MASK_OPMODE     = 0x00000004,
                MASK_XCVR       = 0x00000020,
                MASK_PLLEN      = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_IDEN       = 0,
                OFFSET_OPMODE     = 1,
                OFFSET_XCVR       = 4,
                OFFSET_PLLEN      = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_IDEN       = 1,
                WIDTH_OPMODE     = 2,
                WIDTH_XCVR       = 2,
                WIDTH_PLLEN      = 1,
            }; // endof width_t
            // IDEN field
            typedef field_t<uint32_t, 0x40000070, 0x1, 0, rw_t<uint32_t>> f_IDEN;
            // OPMODE field
            typedef field_t<uint32_t, 0x40000070, 0x3, 1, rw_t<uint32_t>> f_OPMODE;
            // XCVR field
            typedef field_t<uint32_t, 0x40000070, 0x3, 4, rw_t<uint32_t>> f_XCVR;
            // PLLEN field
            typedef field_t<uint32_t, 0x40000070, 0x1, 7, rw_t<uint32_t>> f_PLLEN;
        } // end of USBPHYCR
        namespace USBCR {
            // USBCR register
            typedef reg_t<uint32_t, 0x40000074, rw_t<uint32_t>> r_USBCR;
            enum mask_t{
                MASK_RST48M     = 0x00000001,
                MASK_RST12M     = 0x00000002,
                MASK_RSTPLL     = 0x00000004,
                MASK_ROLE       = 0x00000010,
                MASK_VBUS       = 0x00000020,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RST48M     = 0,
                OFFSET_RST12M     = 1,
                OFFSET_RSTPLL     = 2,
                OFFSET_ROLE       = 3,
                OFFSET_VBUS       = 5,
            }; // endof offset_t
            enum width_t{
                WIDTH_RST48M     = 1,
                WIDTH_RST12M     = 1,
                WIDTH_RSTPLL     = 1,
                WIDTH_ROLE       = 2,
                WIDTH_VBUS       = 1,
            }; // endof width_t
            // RST48M field
            typedef field_t<uint32_t, 0x40000074, 0x1, 0, rw_t<uint32_t>> f_RST48M;
            // RST12M field
            typedef field_t<uint32_t, 0x40000074, 0x1, 1, rw_t<uint32_t>> f_RST12M;
            // RSTPLL field
            typedef field_t<uint32_t, 0x40000074, 0x1, 2, rw_t<uint32_t>> f_RSTPLL;
            // ROLE field
            typedef field_t<uint32_t, 0x40000074, 0x3, 3, rw_t<uint32_t>> f_ROLE;
            // VBUS field
            typedef field_t<uint32_t, 0x40000074, 0x1, 5, rw_t<uint32_t>> f_VBUS;
        } // end of USBCR
        namespace CHIPID {
            // CHIPID register
            typedef reg_t<uint32_t, 0x40000080, ro_t<uint32_t>> r_CHIPID_0;
            typedef reg_t<uint32_t, 0x40000084, ro_t<uint32_t>> r_CHIPID_1;
            typedef reg_t<uint32_t, 0x40000088, ro_t<uint32_t>> r_CHIPID_2;
            typedef reg_t<uint32_t, 0x4000008c, ro_t<uint32_t>> r_CHIPID_3;
        } // end of CHIPID[%s]
        namespace BACKUP {
            // BACKUP register
            typedef reg_t<uint32_t, 0x40000090, rw_t<uint32_t>> r_BACKUP_0;
            typedef reg_t<uint32_t, 0x40000094, rw_t<uint32_t>> r_BACKUP_1;
            typedef reg_t<uint32_t, 0x40000098, rw_t<uint32_t>> r_BACKUP_2;
            typedef reg_t<uint32_t, 0x4000009c, rw_t<uint32_t>> r_BACKUP_3;
        } // end of BACKUP[%s]
        namespace PRNGCR {
            // PRNGCR register
            typedef reg_t<uint32_t, 0x400000d0, rw_t<uint32_t>> r_PRNGCR;
            enum mask_t{
                MASK_CLR        = 0x00000001,
                MASK_MODE       = 0x00000004,
                MASK_RDY        = 0x00000100,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CLR        = 0,
                OFFSET_MODE       = 1,
                OFFSET_RDY        = 8,
            }; // endof offset_t
            enum width_t{
                WIDTH_CLR        = 1,
                WIDTH_MODE       = 2,
                WIDTH_RDY        = 1,
            }; // endof width_t
            // CLR field
            typedef field_t<uint32_t, 0x400000d0, 0x1, 0, rw_t<uint32_t>> f_CLR;
            // MODE field
            typedef field_t<uint32_t, 0x400000d0, 0x3, 1, rw_t<uint32_t>> f_MODE;
            // RDY field
            typedef field_t<uint32_t, 0x400000d0, 0x1, 8, rw_t<uint32_t>> f_RDY;
        } // end of PRNGCR
        namespace PRNGDL {
            // PRNGDL register
            typedef reg_t<uint32_t, 0x400000d4, rw_t<uint32_t>> r_PRNGDL;
        } // end of PRNGDL
        namespace PRNGDH {
            // PRNGDH register
            typedef reg_t<uint32_t, 0x400000d8, rw_t<uint32_t>> r_PRNGDH;
        } // end of PRNGDH
        namespace PAWKEN {
            // PAWKEN register
            typedef reg_t<uint32_t, 0x40000100, rw_t<uint32_t>> r_PAWKEN;
        } // end of PAWKEN
        namespace PBWKEN {
            // PBWKEN register
            typedef reg_t<uint32_t, 0x40000104, rw_t<uint32_t>> r_PBWKEN;
        } // end of PBWKEN
        namespace PCWKEN {
            // PCWKEN register
            typedef reg_t<uint32_t, 0x40000108, rw_t<uint32_t>> r_PCWKEN;
        } // end of PCWKEN
        namespace PDWKEN {
            // PDWKEN register
            typedef reg_t<uint32_t, 0x4000010c, rw_t<uint32_t>> r_PDWKEN;
        } // end of PDWKEN
        namespace PEWKEN {
            // PEWKEN register
            typedef reg_t<uint32_t, 0x40000110, rw_t<uint32_t>> r_PEWKEN;
        } // end of PEWKEN
        namespace PMWKEN {
            // PMWKEN register
            typedef reg_t<uint32_t, 0x40000120, rw_t<uint32_t>> r_PMWKEN;
        } // end of PMWKEN
        namespace PNWKEN {
            // PNWKEN register
            typedef reg_t<uint32_t, 0x40000124, rw_t<uint32_t>> r_PNWKEN;
        } // end of PNWKEN
        namespace PAWKSR {
            // PAWKSR register
            typedef reg_t<uint32_t, 0x40000130, rw_t<uint32_t>> r_PAWKSR;
        } // end of PAWKSR
        namespace PBWKSR {
            // PBWKSR register
            typedef reg_t<uint32_t, 0x40000134, rw_t<uint32_t>> r_PBWKSR;
        } // end of PBWKSR
        namespace PCWKSR {
            // PCWKSR register
            typedef reg_t<uint32_t, 0x40000138, rw_t<uint32_t>> r_PCWKSR;
        } // end of PCWKSR
        namespace PDWKSR {
            // PDWKSR register
            typedef reg_t<uint32_t, 0x4000013c, rw_t<uint32_t>> r_PDWKSR;
        } // end of PDWKSR
        namespace PEWKSR {
            // PEWKSR register
            typedef reg_t<uint32_t, 0x40000140, rw_t<uint32_t>> r_PEWKSR;
        } // end of PEWKSR
        namespace PMWKSR {
            // PMWKSR register
            typedef reg_t<uint32_t, 0x40000150, rw_t<uint32_t>> r_PMWKSR;
        } // end of PMWKSR
        namespace PNWKSR {
            // PNWKSR register
            typedef reg_t<uint32_t, 0x40000154, rw_t<uint32_t>> r_PNWKSR;
        } // end of PNWKSR
        namespace IOFILT0 {
            // IOFILT0 register
            typedef reg_t<uint32_t, 0x40000400, rw_t<uint32_t>> r_IOFILT0;
        } // end of IOFILT0
        namespace IOFILT1 {
            // IOFILT1 register
            typedef reg_t<uint32_t, 0x40000404, rw_t<uint32_t>> r_IOFILT1;
        } // end of IOFILT1
        namespace PRSTEN {
            // PRSTEN register
            typedef reg_t<uint32_t, 0x40000720, rw_t<uint32_t>> r_PRSTEN;
        } // end of PRSTEN
        namespace PRSTR0 {
            // PRSTR0 register
            typedef reg_t<uint32_t, 0x40000724, rw_t<uint32_t>> r_PRSTR0;
            enum mask_t{
                MASK_GPIOA      = 0x00000001,
                MASK_GPIOB      = 0x00000002,
                MASK_GPIOC      = 0x00000004,
                MASK_GPIOD      = 0x00000008,
                MASK_GPIOM      = 0x00000010,
                MASK_GPION      = 0x00000020,
                MASK_UART0      = 0x00000040,
                MASK_UART1      = 0x00000080,
                MASK_UART2      = 0x00000100,
                MASK_UART3      = 0x00000200,
                MASK_WDT        = 0x00000400,
                MASK_TIMR       = 0x00000800,
                MASK_PWM        = 0x00001000,
                MASK_SPI0       = 0x00002000,
                MASK_SPI1       = 0x00004000,
                MASK_I2C0       = 0x00008000,
                MASK_I2C1       = 0x00010000,
                MASK_CRC        = 0x00080000,
                MASK_CORDIC     = 0x00100000,
                MASK_DIV        = 0x00200000,
                MASK_SDIO       = 0x00400000,
                MASK_USB        = 0x01000000,
                MASK_ANAC       = 0x02000000,
                MASK_ADC0       = 0x04000000,
                MASK_CAN0       = 0x10000000,
                MASK_DMA2D      = 0x20000000,
                MASK_LCD        = 0x40000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_GPIOA      = 0,
                OFFSET_GPIOB      = 1,
                OFFSET_GPIOC      = 2,
                OFFSET_GPIOD      = 3,
                OFFSET_GPIOM      = 4,
                OFFSET_GPION      = 5,
                OFFSET_UART0      = 6,
                OFFSET_UART1      = 7,
                OFFSET_UART2      = 8,
                OFFSET_UART3      = 9,
                OFFSET_WDT        = 10,
                OFFSET_TIMR       = 11,
                OFFSET_PWM        = 12,
                OFFSET_SPI0       = 13,
                OFFSET_SPI1       = 14,
                OFFSET_I2C0       = 15,
                OFFSET_I2C1       = 16,
                OFFSET_CRC        = 19,
                OFFSET_CORDIC     = 20,
                OFFSET_DIV        = 21,
                OFFSET_SDIO       = 22,
                OFFSET_USB        = 24,
                OFFSET_ANAC       = 25,
                OFFSET_ADC0       = 26,
                OFFSET_CAN0       = 28,
                OFFSET_DMA2D      = 29,
                OFFSET_LCD        = 30,
            }; // endof offset_t
            enum width_t{
                WIDTH_GPIOA      = 1,
                WIDTH_GPIOB      = 1,
                WIDTH_GPIOC      = 1,
                WIDTH_GPIOD      = 1,
                WIDTH_GPIOM      = 1,
                WIDTH_GPION      = 1,
                WIDTH_UART0      = 1,
                WIDTH_UART1      = 1,
                WIDTH_UART2      = 1,
                WIDTH_UART3      = 1,
                WIDTH_WDT        = 1,
                WIDTH_TIMR       = 1,
                WIDTH_PWM        = 1,
                WIDTH_SPI0       = 1,
                WIDTH_SPI1       = 1,
                WIDTH_I2C0       = 1,
                WIDTH_I2C1       = 1,
                WIDTH_CRC        = 1,
                WIDTH_CORDIC     = 1,
                WIDTH_DIV        = 1,
                WIDTH_SDIO       = 1,
                WIDTH_USB        = 1,
                WIDTH_ANAC       = 1,
                WIDTH_ADC0       = 1,
                WIDTH_CAN0       = 1,
                WIDTH_DMA2D      = 1,
                WIDTH_LCD        = 1,
            }; // endof width_t
            // GPIOA field
            typedef field_t<uint32_t, 0x40000724, 0x1, 0, rw_t<uint32_t>> f_GPIOA;
            // GPIOB field
            typedef field_t<uint32_t, 0x40000724, 0x1, 1, rw_t<uint32_t>> f_GPIOB;
            // GPIOC field
            typedef field_t<uint32_t, 0x40000724, 0x1, 2, rw_t<uint32_t>> f_GPIOC;
            // GPIOD field
            typedef field_t<uint32_t, 0x40000724, 0x1, 3, rw_t<uint32_t>> f_GPIOD;
            // GPIOM field
            typedef field_t<uint32_t, 0x40000724, 0x1, 4, rw_t<uint32_t>> f_GPIOM;
            // GPION field
            typedef field_t<uint32_t, 0x40000724, 0x1, 5, rw_t<uint32_t>> f_GPION;
            // UART0 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 6, rw_t<uint32_t>> f_UART0;
            // UART1 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 7, rw_t<uint32_t>> f_UART1;
            // UART2 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 8, rw_t<uint32_t>> f_UART2;
            // UART3 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 9, rw_t<uint32_t>> f_UART3;
            // WDT field
            typedef field_t<uint32_t, 0x40000724, 0x1, 10, rw_t<uint32_t>> f_WDT;
            // TIMR field
            typedef field_t<uint32_t, 0x40000724, 0x1, 11, rw_t<uint32_t>> f_TIMR;
            // PWM field
            typedef field_t<uint32_t, 0x40000724, 0x1, 12, rw_t<uint32_t>> f_PWM;
            // SPI0 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 13, rw_t<uint32_t>> f_SPI0;
            // SPI1 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 14, rw_t<uint32_t>> f_SPI1;
            // I2C0 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 15, rw_t<uint32_t>> f_I2C0;
            // I2C1 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 16, rw_t<uint32_t>> f_I2C1;
            // CRC field
            typedef field_t<uint32_t, 0x40000724, 0x1, 19, rw_t<uint32_t>> f_CRC;
            // CORDIC field
            typedef field_t<uint32_t, 0x40000724, 0x1, 20, rw_t<uint32_t>> f_CORDIC;
            // DIV field
            typedef field_t<uint32_t, 0x40000724, 0x1, 21, rw_t<uint32_t>> f_DIV;
            // SDIO field
            typedef field_t<uint32_t, 0x40000724, 0x1, 22, rw_t<uint32_t>> f_SDIO;
            // USB field
            typedef field_t<uint32_t, 0x40000724, 0x1, 24, rw_t<uint32_t>> f_USB;
            // ANAC field
            typedef field_t<uint32_t, 0x40000724, 0x1, 25, rw_t<uint32_t>> f_ANAC;
            // ADC0 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 26, rw_t<uint32_t>> f_ADC0;
            // CAN0 field
            typedef field_t<uint32_t, 0x40000724, 0x1, 28, rw_t<uint32_t>> f_CAN0;
            // DMA2D field
            typedef field_t<uint32_t, 0x40000724, 0x1, 29, rw_t<uint32_t>> f_DMA2D;
            // LCD field
            typedef field_t<uint32_t, 0x40000724, 0x1, 30, rw_t<uint32_t>> f_LCD;
        } // end of PRSTR0
        namespace PRSTR1 {
            // PRSTR1 register
            typedef reg_t<uint32_t, 0x40000728, rw_t<uint32_t>> r_PRSTR1;
            enum mask_t{
                MASK_GPIOE      = 0x00000001,
                MASK_SPI2       = 0x00000100,
                MASK_SDRAM      = 0x00001000,
                MASK_ADC1       = 0x00010000,
                MASK_RTC        = 0x00080000,
                MASK_IOFILT     = 0x00100000,
                MASK_BTIMR      = 0x00400000,
                MASK_JPEG       = 0x02000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_GPIOE      = 0,
                OFFSET_SPI2       = 8,
                OFFSET_SDRAM      = 12,
                OFFSET_ADC1       = 16,
                OFFSET_RTC        = 19,
                OFFSET_IOFILT     = 20,
                OFFSET_BTIMR      = 22,
                OFFSET_JPEG       = 25,
            }; // endof offset_t
            enum width_t{
                WIDTH_GPIOE      = 1,
                WIDTH_SPI2       = 1,
                WIDTH_SDRAM      = 1,
                WIDTH_ADC1       = 1,
                WIDTH_RTC        = 1,
                WIDTH_IOFILT     = 1,
                WIDTH_BTIMR      = 1,
                WIDTH_JPEG       = 1,
            }; // endof width_t
            // GPIOE field
            typedef field_t<uint32_t, 0x40000728, 0x1, 0, rw_t<uint32_t>> f_GPIOE;
            // SPI2 field
            typedef field_t<uint32_t, 0x40000728, 0x1, 8, rw_t<uint32_t>> f_SPI2;
            // SDRAM field
            typedef field_t<uint32_t, 0x40000728, 0x1, 12, rw_t<uint32_t>> f_SDRAM;
            // ADC1 field
            typedef field_t<uint32_t, 0x40000728, 0x1, 16, rw_t<uint32_t>> f_ADC1;
            // RTC field
            typedef field_t<uint32_t, 0x40000728, 0x1, 19, rw_t<uint32_t>> f_RTC;
            // IOFILT field
            typedef field_t<uint32_t, 0x40000728, 0x1, 20, rw_t<uint32_t>> f_IOFILT;
            // BTIMR field
            typedef field_t<uint32_t, 0x40000728, 0x1, 22, rw_t<uint32_t>> f_BTIMR;
            // JPEG field
            typedef field_t<uint32_t, 0x40000728, 0x1, 25, rw_t<uint32_t>> f_JPEG;
        } // end of PRSTR1
        namespace HRCCR {
            // HRCCR register
            typedef reg_t<uint32_t, 0x400aa000, rw_t<uint32_t>> r_HRCCR;
            enum mask_t{
                MASK_ON         = 0x00000001,
                MASK_DBL        = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ON         = 0,
                OFFSET_DBL        = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_ON         = 1,
                WIDTH_DBL        = 1,
            }; // endof width_t
            // ON field
            typedef field_t<uint32_t, 0x400aa000, 0x1, 0, rw_t<uint32_t>> f_ON;
            // DBL field
            typedef field_t<uint32_t, 0x400aa000, 0x1, 1, rw_t<uint32_t>> f_DBL;
        } // end of HRCCR
        namespace BODCR {
            // BODCR register
            typedef reg_t<uint32_t, 0x400aa010, rw_t<uint32_t>> r_BODCR;
            enum mask_t{
                MASK_IE         = 0x00000002,
                MASK_INTLVL     = 0x00000040,
                MASK_RSTLVL     = 0x00000200,
            }; // endof mask_t
            enum offset_t{
                OFFSET_IE         = 1,
                OFFSET_INTLVL     = 4,
                OFFSET_RSTLVL     = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_IE         = 1,
                WIDTH_INTLVL     = 3,
                WIDTH_RSTLVL     = 3,
            }; // endof width_t
            // IE field
            typedef field_t<uint32_t, 0x400aa010, 0x1, 1, rw_t<uint32_t>> f_IE;
            // INTLVL field
            typedef field_t<uint32_t, 0x400aa010, 0x7, 4, rw_t<uint32_t>> f_INTLVL;
            // RSTLVL field
            typedef field_t<uint32_t, 0x400aa010, 0x7, 7, rw_t<uint32_t>> f_RSTLVL;
        } // end of BODCR
        namespace BODSR {
            // BODSR register
            typedef reg_t<uint32_t, 0x400aa014, rw_t<uint32_t>> r_BODSR;
            enum mask_t{
                MASK_IF         = 0x00000001,
                MASK_ST         = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET_IF         = 0,
                OFFSET_ST         = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH_IF         = 1,
                WIDTH_ST         = 1,
            }; // endof width_t
            // IF field
            typedef field_t<uint32_t, 0x400aa014, 0x1, 0, rw_t<uint32_t>> f_IF;
            // ST field
            typedef field_t<uint32_t, 0x400aa014, 0x1, 1, rw_t<uint32_t>> f_ST;
        } // end of BODSR
        namespace ADCCR {
            // ADCCR register
            typedef reg_t<uint32_t, 0x400aa018, rw_t<uint32_t>> r_ADCCR;
            enum mask_t{
                MASK__0IVREN    = 0x00000001,
                MASK__1IVREN    = 0x00000002,
                MASK__0IVRSEL   = 0x00000004,
                MASK__1IVRSEL   = 0x00000008,
                MASK_IVRFLT     = 0x00000010,
                MASK_IVROUA     = 0x00000020,
                MASK_IVRLVL     = 0x00000100,
                MASK_IVRTRIM    = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET__0IVREN    = 0,
                OFFSET__1IVREN    = 1,
                OFFSET__0IVRSEL   = 2,
                OFFSET__1IVRSEL   = 3,
                OFFSET_IVRFLT     = 4,
                OFFSET_IVROUA     = 5,
                OFFSET_IVRLVL     = 6,
                OFFSET_IVRTRIM    = 9,
            }; // endof offset_t
            enum width_t{
                WIDTH__0IVREN    = 1,
                WIDTH__1IVREN    = 1,
                WIDTH__0IVRSEL   = 1,
                WIDTH__1IVRSEL   = 1,
                WIDTH_IVRFLT     = 1,
                WIDTH_IVROUA     = 1,
                WIDTH_IVRLVL     = 3,
                WIDTH_IVRTRIM    = 3,
            }; // endof width_t
            // _0IVREN field
            typedef field_t<uint32_t, 0x400aa018, 0x1, 0, rw_t<uint32_t>> f__0IVREN;
            // _1IVREN field
            typedef field_t<uint32_t, 0x400aa018, 0x1, 1, rw_t<uint32_t>> f__1IVREN;
            // _0IVRSEL field
            typedef field_t<uint32_t, 0x400aa018, 0x1, 2, rw_t<uint32_t>> f__0IVRSEL;
            // _1IVRSEL field
            typedef field_t<uint32_t, 0x400aa018, 0x1, 3, rw_t<uint32_t>> f__1IVRSEL;
            // IVRFLT field
            typedef field_t<uint32_t, 0x400aa018, 0x1, 4, rw_t<uint32_t>> f_IVRFLT;
            // IVROuA field
            typedef field_t<uint32_t, 0x400aa018, 0x1, 5, rw_t<uint32_t>> f_IVROUA;
            // IVRLVL field
            typedef field_t<uint32_t, 0x400aa018, 0x7, 6, rw_t<uint32_t>> f_IVRLVL;
            // IVRTRIM field
            typedef field_t<uint32_t, 0x400aa018, 0x7, 9, rw_t<uint32_t>> f_IVRTRIM;
        } // end of ADCCR
        namespace XTALCR {
            // XTALCR register
            typedef reg_t<uint32_t, 0x400aa020, rw_t<uint32_t>> r_XTALCR;
            enum mask_t{
                MASK__32KON     = 0x00000001,
                MASK_ON         = 0x00000002,
                MASK__32KDET    = 0x00000010,
                MASK_DET        = 0x00000020,
                MASK__32KDRV    = 0x00000800,
                MASK_DRV        = 0x00100000,
            }; // endof mask_t
            enum offset_t{
                OFFSET__32KON     = 0,
                OFFSET_ON         = 1,
                OFFSET__32KDET    = 4,
                OFFSET_DET        = 5,
                OFFSET__32KDRV    = 8,
                OFFSET_DRV        = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH__32KON     = 1,
                WIDTH_ON         = 1,
                WIDTH__32KDET    = 1,
                WIDTH_DET        = 1,
                WIDTH__32KDRV    = 4,
                WIDTH_DRV        = 5,
            }; // endof width_t
            // _32KON field
            typedef field_t<uint32_t, 0x400aa020, 0x1, 0, rw_t<uint32_t>> f__32KON;
            // ON field
            typedef field_t<uint32_t, 0x400aa020, 0x1, 1, rw_t<uint32_t>> f_ON;
            // _32KDET field
            typedef field_t<uint32_t, 0x400aa020, 0x1, 4, rw_t<uint32_t>> f__32KDET;
            // DET field
            typedef field_t<uint32_t, 0x400aa020, 0x1, 5, rw_t<uint32_t>> f_DET;
            // _32KDRV field
            typedef field_t<uint32_t, 0x400aa020, 0xf, 8, rw_t<uint32_t>> f__32KDRV;
            // DRV field
            typedef field_t<uint32_t, 0x400aa020, 0x1f, 16, rw_t<uint32_t>> f_DRV;
        } // end of XTALCR
        namespace XTALSR {
            // XTALSR register
            typedef reg_t<uint32_t, 0x400aa024, rw_t<uint32_t>> r_XTALSR;
            enum mask_t{
                MASK__32KSTOP   = 0x00000001,
                MASK_STOP       = 0x00000002,
            }; // endof mask_t
            enum offset_t{
                OFFSET__32KSTOP   = 0,
                OFFSET_STOP       = 1,
            }; // endof offset_t
            enum width_t{
                WIDTH__32KSTOP   = 1,
                WIDTH_STOP       = 1,
            }; // endof width_t
            // _32KSTOP field
            typedef field_t<uint32_t, 0x400aa024, 0x1, 0, rw_t<uint32_t>> f__32KSTOP;
            // STOP field
            typedef field_t<uint32_t, 0x400aa024, 0x1, 1, rw_t<uint32_t>> f_STOP;
        } // end of XTALSR
        namespace PLLCR {
            // PLLCR register
            typedef reg_t<uint32_t, 0x400aa040, rw_t<uint32_t>> r_PLLCR;
            enum mask_t{
                MASK_OUTEN      = 0x00000001,
                MASK_INSEL      = 0x00000002,
                MASK_OFF        = 0x00000004,
                MASK_RST        = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_OUTEN      = 0,
                OFFSET_INSEL      = 1,
                OFFSET_OFF        = 2,
                OFFSET_RST        = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_OUTEN      = 1,
                WIDTH_INSEL      = 1,
                WIDTH_OFF        = 1,
                WIDTH_RST        = 1,
            }; // endof width_t
            // OUTEN field
            typedef field_t<uint32_t, 0x400aa040, 0x1, 0, rw_t<uint32_t>> f_OUTEN;
            // INSEL field
            typedef field_t<uint32_t, 0x400aa040, 0x1, 1, rw_t<uint32_t>> f_INSEL;
            // OFF field
            typedef field_t<uint32_t, 0x400aa040, 0x1, 2, rw_t<uint32_t>> f_OFF;
            // RST field
            typedef field_t<uint32_t, 0x400aa040, 0x1, 3, rw_t<uint32_t>> f_RST;
        } // end of PLLCR
        namespace PLLDIV {
            // PLLDIV register
            typedef reg_t<uint32_t, 0x400aa044, rw_t<uint32_t>> r_PLLDIV;
            enum mask_t{
                MASK_FBDIV      = 0x00000100,
                MASK_INDIV      = 0x00100000,
                MASK_OUTDIV     = 0x02000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_FBDIV      = 0,
                OFFSET_INDIV      = 16,
                OFFSET_OUTDIV     = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_FBDIV      = 9,
                WIDTH_INDIV      = 5,
                WIDTH_OUTDIV     = 2,
            }; // endof width_t
            // FBDIV field
            typedef field_t<uint32_t, 0x400aa044, 0x1ff, 0, rw_t<uint32_t>> f_FBDIV;
            // INDIV field
            typedef field_t<uint32_t, 0x400aa044, 0x1f, 16, rw_t<uint32_t>> f_INDIV;
            // OUTDIV field
            typedef field_t<uint32_t, 0x400aa044, 0x3, 24, rw_t<uint32_t>> f_OUTDIV;
        } // end of PLLDIV
        namespace PLLLOCK {
            // PLLLOCK register
            typedef reg_t<uint32_t, 0x400aa04c, rw_t<uint32_t>> r_PLLLOCK;
        } // end of PLLLOCK
        namespace LRCCR {
            // LRCCR register
            typedef reg_t<uint32_t, 0x400aa050, rw_t<uint32_t>> r_LRCCR;
            enum mask_t{
                MASK_ON         = 0x00000001,
            }; // endof mask_t
            enum offset_t{
                OFFSET_ON         = 0,
            }; // endof offset_t
            enum width_t{
                WIDTH_ON         = 1,
            }; // endof width_t
            // ON field
            typedef field_t<uint32_t, 0x400aa050, 0x1, 0, rw_t<uint32_t>> f_ON;
        } // end of LRCCR
        namespace OPACR {
            // OPACR register
            typedef reg_t<uint32_t, 0x400aa070, rw_t<uint32_t>> r_OPACR;
            enum mask_t{
                MASK_OPA0ON     = 0x00000001,
                MASK_OPA1ON     = 0x00000002,
                MASK_OPA2ON     = 0x00000004,
                MASK_OPA3ON     = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_OPA0ON     = 0,
                OFFSET_OPA1ON     = 1,
                OFFSET_OPA2ON     = 2,
                OFFSET_OPA3ON     = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_OPA0ON     = 1,
                WIDTH_OPA1ON     = 1,
                WIDTH_OPA2ON     = 1,
                WIDTH_OPA3ON     = 1,
            }; // endof width_t
            // OPA0ON field
            typedef field_t<uint32_t, 0x400aa070, 0x1, 0, rw_t<uint32_t>> f_OPA0ON;
            // OPA1ON field
            typedef field_t<uint32_t, 0x400aa070, 0x1, 1, rw_t<uint32_t>> f_OPA1ON;
            // OPA2ON field
            typedef field_t<uint32_t, 0x400aa070, 0x1, 2, rw_t<uint32_t>> f_OPA2ON;
            // OPA3ON field
            typedef field_t<uint32_t, 0x400aa070, 0x1, 3, rw_t<uint32_t>> f_OPA3ON;
        } // end of OPACR
        namespace ACMPCR {
            // ACMPCR register
            typedef reg_t<uint32_t, 0x400aa080, rw_t<uint32_t>> r_ACMPCR;
            enum mask_t{
                MASK_CMP0ON     = 0x00000001,
                MASK_CMP1ON     = 0x00000002,
                MASK_CMP2ON     = 0x00000004,
                MASK_CMP0HYS    = 0x00000100,
                MASK_CMP1HYS    = 0x00000200,
                MASK_CMP2HYS    = 0x00000400,
                MASK__0NVREF    = 0x00010000,
                MASK__1NVREF    = 0x00020000,
                MASK__2NVREF    = 0x00040000,
                MASK_CMP0IE     = 0x01000000,
                MASK_CMP1IE     = 0x02000000,
                MASK_CMP2IE     = 0x04000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CMP0ON     = 0,
                OFFSET_CMP1ON     = 1,
                OFFSET_CMP2ON     = 2,
                OFFSET_CMP0HYS    = 8,
                OFFSET_CMP1HYS    = 9,
                OFFSET_CMP2HYS    = 10,
                OFFSET__0NVREF    = 16,
                OFFSET__1NVREF    = 17,
                OFFSET__2NVREF    = 18,
                OFFSET_CMP0IE     = 24,
                OFFSET_CMP1IE     = 25,
                OFFSET_CMP2IE     = 26,
            }; // endof offset_t
            enum width_t{
                WIDTH_CMP0ON     = 1,
                WIDTH_CMP1ON     = 1,
                WIDTH_CMP2ON     = 1,
                WIDTH_CMP0HYS    = 1,
                WIDTH_CMP1HYS    = 1,
                WIDTH_CMP2HYS    = 1,
                WIDTH__0NVREF    = 1,
                WIDTH__1NVREF    = 1,
                WIDTH__2NVREF    = 1,
                WIDTH_CMP0IE     = 1,
                WIDTH_CMP1IE     = 1,
                WIDTH_CMP2IE     = 1,
            }; // endof width_t
            // CMP0ON field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 0, rw_t<uint32_t>> f_CMP0ON;
            // CMP1ON field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 1, rw_t<uint32_t>> f_CMP1ON;
            // CMP2ON field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 2, rw_t<uint32_t>> f_CMP2ON;
            // CMP0HYS field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 8, rw_t<uint32_t>> f_CMP0HYS;
            // CMP1HYS field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 9, rw_t<uint32_t>> f_CMP1HYS;
            // CMP2HYS field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 10, rw_t<uint32_t>> f_CMP2HYS;
            // _0NVREF field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 16, rw_t<uint32_t>> f__0NVREF;
            // _1NVREF field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 17, rw_t<uint32_t>> f__1NVREF;
            // _2NVREF field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 18, rw_t<uint32_t>> f__2NVREF;
            // CMP0IE field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 24, rw_t<uint32_t>> f_CMP0IE;
            // CMP1IE field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 25, rw_t<uint32_t>> f_CMP1IE;
            // CMP2IE field
            typedef field_t<uint32_t, 0x400aa080, 0x1, 26, rw_t<uint32_t>> f_CMP2IE;
        } // end of ACMPCR
        namespace ACMPSR {
            // ACMPSR register
            typedef reg_t<uint32_t, 0x400aa084, rw_t<uint32_t>> r_ACMPSR;
            enum mask_t{
                MASK_CMP0OUT    = 0x00000001,
                MASK_CMP1OUT    = 0x00000002,
                MASK_CMP2OUT    = 0x00000004,
                MASK_CMP0IF     = 0x00000100,
                MASK_CMP1IF     = 0x00000200,
                MASK_CMP2IF     = 0x00000400,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CMP0OUT    = 0,
                OFFSET_CMP1OUT    = 1,
                OFFSET_CMP2OUT    = 2,
                OFFSET_CMP0IF     = 8,
                OFFSET_CMP1IF     = 9,
                OFFSET_CMP2IF     = 10,
            }; // endof offset_t
            enum width_t{
                WIDTH_CMP0OUT    = 1,
                WIDTH_CMP1OUT    = 1,
                WIDTH_CMP2OUT    = 1,
                WIDTH_CMP0IF     = 1,
                WIDTH_CMP1IF     = 1,
                WIDTH_CMP2IF     = 1,
            }; // endof width_t
            // CMP0OUT field
            typedef field_t<uint32_t, 0x400aa084, 0x1, 0, rw_t<uint32_t>> f_CMP0OUT;
            // CMP1OUT field
            typedef field_t<uint32_t, 0x400aa084, 0x1, 1, rw_t<uint32_t>> f_CMP1OUT;
            // CMP2OUT field
            typedef field_t<uint32_t, 0x400aa084, 0x1, 2, rw_t<uint32_t>> f_CMP2OUT;
            // CMP0IF field
            typedef field_t<uint32_t, 0x400aa084, 0x1, 8, rw_t<uint32_t>> f_CMP0IF;
            // CMP1IF field
            typedef field_t<uint32_t, 0x400aa084, 0x1, 9, rw_t<uint32_t>> f_CMP1IF;
            // CMP2IF field
            typedef field_t<uint32_t, 0x400aa084, 0x1, 10, rw_t<uint32_t>> f_CMP2IF;
        } // end of ACMPSR
        namespace ACMPCR2 {
            // ACMPCR2 register
            typedef reg_t<uint32_t, 0x400aa088, rw_t<uint32_t>> r_ACMPCR2;
            enum mask_t{
                MASK_BRK0       = 0x00000001,
                MASK_BRK1       = 0x00000002,
                MASK_BRK2       = 0x00000004,
                MASK_VREF       = 0x00000100,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRK0       = 0,
                OFFSET_BRK1       = 1,
                OFFSET_BRK2       = 2,
                OFFSET_VREF       = 3,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRK0       = 1,
                WIDTH_BRK1       = 1,
                WIDTH_BRK2       = 1,
                WIDTH_VREF       = 6,
            }; // endof width_t
            // BRK0 field
            typedef field_t<uint32_t, 0x400aa088, 0x1, 0, rw_t<uint32_t>> f_BRK0;
            // BRK1 field
            typedef field_t<uint32_t, 0x400aa088, 0x1, 1, rw_t<uint32_t>> f_BRK1;
            // BRK2 field
            typedef field_t<uint32_t, 0x400aa088, 0x1, 2, rw_t<uint32_t>> f_BRK2;
            // VREF field
            typedef field_t<uint32_t, 0x400aa088, 0x3f, 3, rw_t<uint32_t>> f_VREF;
        } // end of ACMPCR2
        namespace DACCR {
            // DACCR register
            typedef reg_t<uint32_t, 0x400aa090, rw_t<uint32_t>> r_DACCR;
            enum mask_t{
                MASK_VRADJ      = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_VRADJ      = 0,
            }; // endof offset_t
            enum width_t{
                WIDTH_VRADJ      = 5,
            }; // endof width_t
            // VRADJ field
            typedef field_t<uint32_t, 0x400aa090, 0x1f, 0, rw_t<uint32_t>> f_VRADJ;
        } // end of DACCR
        namespace TEMPCR {
            // TEMPCR register
            typedef reg_t<uint32_t, 0x400aa098, rw_t<uint32_t>> r_TEMPCR;
            enum mask_t{
                MASK_EN         = 0x00000001,
                MASK_TRIM       = 0x00000200,
                MASK_AD0CH7     = 0x00020000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_EN         = 0,
                OFFSET_TRIM       = 4,
                OFFSET_AD0CH7     = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_EN         = 1,
                WIDTH_TRIM       = 6,
                WIDTH_AD0CH7     = 2,
            }; // endof width_t
            // EN field
            typedef field_t<uint32_t, 0x400aa098, 0x1, 0, rw_t<uint32_t>> f_EN;
            // TRIM field
            typedef field_t<uint32_t, 0x400aa098, 0x3f, 4, rw_t<uint32_t>> f_TRIM;
            // AD0CH7 field
            typedef field_t<uint32_t, 0x400aa098, 0x3, 16, rw_t<uint32_t>> f_AD0CH7;
        } // end of TEMPCR
    } // end of SYS
} // end of PAC
#endif // end of #if USING_SYS
