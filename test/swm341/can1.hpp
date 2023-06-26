#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_CAN1) && (USING_CAN1 != 0))
namespace PAC {
    namespace CAN1 {
        namespace CR {
            // CR register
            typedef reg_t<uint32_t, 0x400a8800, rw_t<uint32_t>> r_CR;
            enum mask_t{
                MASK_RST        = 0x00000001,
                MASK_LOM        = 0x00000002,
                MASK_STM        = 0x00000004,
                MASK_SLEEP      = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RST        = 0,
                OFFSET_LOM        = 1,
                OFFSET_STM        = 2,
                OFFSET_SLEEP      = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_RST        = 1,
                WIDTH_LOM        = 1,
                WIDTH_STM        = 1,
                WIDTH_SLEEP      = 1,
            }; // endof width_t
            // RST field
            typedef field_t<uint32_t, 0x400a8800, 0x1, 0, rw_t<uint32_t>> f_RST;
            // LOM field
            typedef field_t<uint32_t, 0x400a8800, 0x1, 1, rw_t<uint32_t>> f_LOM;
            // STM field
            typedef field_t<uint32_t, 0x400a8800, 0x1, 2, rw_t<uint32_t>> f_STM;
            // SLEEP field
            typedef field_t<uint32_t, 0x400a8800, 0x1, 4, rw_t<uint32_t>> f_SLEEP;
        } // end of CR
        namespace CMD {
            // CMD register
            typedef reg_t<uint32_t, 0x400a8804, wo_t<uint32_t>> r_CMD;
            enum mask_t{
                MASK_TXREQ      = 0x00000001,
                MASK_ABTTX      = 0x00000002,
                MASK_RRB        = 0x00000004,
                MASK_CLROV      = 0x00000008,
                MASK_SRR        = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TXREQ      = 0,
                OFFSET_ABTTX      = 1,
                OFFSET_RRB        = 2,
                OFFSET_CLROV      = 3,
                OFFSET_SRR        = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_TXREQ      = 1,
                WIDTH_ABTTX      = 1,
                WIDTH_RRB        = 1,
                WIDTH_CLROV      = 1,
                WIDTH_SRR        = 1,
            }; // endof width_t
            // TXREQ field
            typedef field_t<uint32_t, 0x400a8804, 0x1, 0, wo_t<uint32_t>> f_TXREQ;
            // ABTTX field
            typedef field_t<uint32_t, 0x400a8804, 0x1, 1, wo_t<uint32_t>> f_ABTTX;
            // RRB field
            typedef field_t<uint32_t, 0x400a8804, 0x1, 2, wo_t<uint32_t>> f_RRB;
            // CLROV field
            typedef field_t<uint32_t, 0x400a8804, 0x1, 3, wo_t<uint32_t>> f_CLROV;
            // SRR field
            typedef field_t<uint32_t, 0x400a8804, 0x1, 4, wo_t<uint32_t>> f_SRR;
        } // end of CMD
        namespace SR {
            // SR register
            typedef reg_t<uint32_t, 0x400a8808, ro_t<uint32_t>> r_SR;
            enum mask_t{
                MASK_RXDA       = 0x00000001,
                MASK_RXOV       = 0x00000002,
                MASK_TXBR       = 0x00000004,
                MASK_TXOK       = 0x00000008,
                MASK_RXBUSY     = 0x00000010,
                MASK_TXBUSY     = 0x00000020,
                MASK_ERRWARN    = 0x00000040,
                MASK_BUSOFF     = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RXDA       = 0,
                OFFSET_RXOV       = 1,
                OFFSET_TXBR       = 2,
                OFFSET_TXOK       = 3,
                OFFSET_RXBUSY     = 4,
                OFFSET_TXBUSY     = 5,
                OFFSET_ERRWARN    = 6,
                OFFSET_BUSOFF     = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_RXDA       = 1,
                WIDTH_RXOV       = 1,
                WIDTH_TXBR       = 1,
                WIDTH_TXOK       = 1,
                WIDTH_RXBUSY     = 1,
                WIDTH_TXBUSY     = 1,
                WIDTH_ERRWARN    = 1,
                WIDTH_BUSOFF     = 1,
            }; // endof width_t
            // RXDA field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 0, ro_t<uint32_t>> f_RXDA;
            // RXOV field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 1, ro_t<uint32_t>> f_RXOV;
            // TXBR field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 2, ro_t<uint32_t>> f_TXBR;
            // TXOK field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 3, ro_t<uint32_t>> f_TXOK;
            // RXBUSY field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 4, ro_t<uint32_t>> f_RXBUSY;
            // TXBUSY field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 5, ro_t<uint32_t>> f_TXBUSY;
            // ERRWARN field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 6, ro_t<uint32_t>> f_ERRWARN;
            // BUSOFF field
            typedef field_t<uint32_t, 0x400a8808, 0x1, 7, ro_t<uint32_t>> f_BUSOFF;
        } // end of SR
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x400a880c, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_RXDA       = 0x00000001,
                MASK_TXBR       = 0x00000002,
                MASK_ERRWARN    = 0x00000004,
                MASK_RXOV       = 0x00000008,
                MASK_WKUP       = 0x00000010,
                MASK_ERRPASS    = 0x00000020,
                MASK_ARBLOST    = 0x00000040,
                MASK_BUSERR     = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RXDA       = 0,
                OFFSET_TXBR       = 1,
                OFFSET_ERRWARN    = 2,
                OFFSET_RXOV       = 3,
                OFFSET_WKUP       = 4,
                OFFSET_ERRPASS    = 5,
                OFFSET_ARBLOST    = 6,
                OFFSET_BUSERR     = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_RXDA       = 1,
                WIDTH_TXBR       = 1,
                WIDTH_ERRWARN    = 1,
                WIDTH_RXOV       = 1,
                WIDTH_WKUP       = 1,
                WIDTH_ERRPASS    = 1,
                WIDTH_ARBLOST    = 1,
                WIDTH_BUSERR     = 1,
            }; // endof width_t
            // RXDA field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 0, rw_t<uint32_t>> f_RXDA;
            // TXBR field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 1, rw_t<uint32_t>> f_TXBR;
            // ERRWARN field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 2, rw_t<uint32_t>> f_ERRWARN;
            // RXOV field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 3, rw_t<uint32_t>> f_RXOV;
            // WKUP field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 4, rw_t<uint32_t>> f_WKUP;
            // ERRPASS field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 5, rw_t<uint32_t>> f_ERRPASS;
            // ARBLOST field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 6, rw_t<uint32_t>> f_ARBLOST;
            // BUSERR field
            typedef field_t<uint32_t, 0x400a880c, 0x1, 7, rw_t<uint32_t>> f_BUSERR;
        } // end of IF
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x400a8810, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_RXDA       = 0x00000001,
                MASK_TXBR       = 0x00000002,
                MASK_ERRWARN    = 0x00000004,
                MASK_RXOV       = 0x00000008,
                MASK_WKUP       = 0x00000010,
                MASK_ERRPASS    = 0x00000020,
                MASK_ARBLOST    = 0x00000040,
                MASK_BUSERR     = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_RXDA       = 0,
                OFFSET_TXBR       = 1,
                OFFSET_ERRWARN    = 2,
                OFFSET_RXOV       = 3,
                OFFSET_WKUP       = 4,
                OFFSET_ERRPASS    = 5,
                OFFSET_ARBLOST    = 6,
                OFFSET_BUSERR     = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_RXDA       = 1,
                WIDTH_TXBR       = 1,
                WIDTH_ERRWARN    = 1,
                WIDTH_RXOV       = 1,
                WIDTH_WKUP       = 1,
                WIDTH_ERRPASS    = 1,
                WIDTH_ARBLOST    = 1,
                WIDTH_BUSERR     = 1,
            }; // endof width_t
            // RXDA field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 0, rw_t<uint32_t>> f_RXDA;
            // TXBR field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 1, rw_t<uint32_t>> f_TXBR;
            // ERRWARN field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 2, rw_t<uint32_t>> f_ERRWARN;
            // RXOV field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 3, rw_t<uint32_t>> f_RXOV;
            // WKUP field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 4, rw_t<uint32_t>> f_WKUP;
            // ERRPASS field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 5, rw_t<uint32_t>> f_ERRPASS;
            // ARBLOST field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 6, rw_t<uint32_t>> f_ARBLOST;
            // BUSERR field
            typedef field_t<uint32_t, 0x400a8810, 0x1, 7, rw_t<uint32_t>> f_BUSERR;
        } // end of IE
        namespace BT2 {
            // BT2 register
            typedef reg_t<uint32_t, 0x400a8814, rw_t<uint32_t>> r_BT2;
            enum mask_t{
                MASK_BRP        = 0x00000008,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRP        = 0,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRP        = 4,
            }; // endof width_t
            // BRP field
            typedef field_t<uint32_t, 0x400a8814, 0xf, 0, rw_t<uint32_t>> f_BRP;
        } // end of BT2
        namespace BT0 {
            // BT0 register
            typedef reg_t<uint32_t, 0x400a8818, rw_t<uint32_t>> r_BT0;
            enum mask_t{
                MASK_BRP        = 0x00000020,
                MASK_SJW        = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_BRP        = 0,
                OFFSET_SJW        = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_BRP        = 6,
                WIDTH_SJW        = 2,
            }; // endof width_t
            // BRP field
            typedef field_t<uint32_t, 0x400a8818, 0x3f, 0, rw_t<uint32_t>> f_BRP;
            // SJW field
            typedef field_t<uint32_t, 0x400a8818, 0x3, 6, rw_t<uint32_t>> f_SJW;
        } // end of BT0
        namespace BT1 {
            // BT1 register
            typedef reg_t<uint32_t, 0x400a881c, rw_t<uint32_t>> r_BT1;
            enum mask_t{
                MASK_TSEG1      = 0x00000008,
                MASK_TSEG2      = 0x00000040,
                MASK_SAM        = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_TSEG1      = 0,
                OFFSET_TSEG2      = 4,
                OFFSET_SAM        = 7,
            }; // endof offset_t
            enum width_t{
                WIDTH_TSEG1      = 4,
                WIDTH_TSEG2      = 3,
                WIDTH_SAM        = 1,
            }; // endof width_t
            // TSEG1 field
            typedef field_t<uint32_t, 0x400a881c, 0xf, 0, rw_t<uint32_t>> f_TSEG1;
            // TSEG2 field
            typedef field_t<uint32_t, 0x400a881c, 0x7, 4, rw_t<uint32_t>> f_TSEG2;
            // SAM field
            typedef field_t<uint32_t, 0x400a881c, 0x1, 7, rw_t<uint32_t>> f_SAM;
        } // end of BT1
        namespace AFM {
            // AFM register
            typedef reg_t<uint32_t, 0x400a8824, rw_t<uint32_t>> r_AFM;
        } // end of AFM
        namespace AFE {
            // AFE register
            typedef reg_t<uint32_t, 0x400a8828, rw_t<uint32_t>> r_AFE;
        } // end of AFE
        namespace ALC {
            // ALC register
            typedef reg_t<uint32_t, 0x400a882c, ro_t<uint32_t>> r_ALC;
        } // end of ALC
        namespace ECC {
            // ECC register
            typedef reg_t<uint32_t, 0x400a8830, ro_t<uint32_t>> r_ECC;
            enum mask_t{
                MASK_SEGCODE    = 0x00000010,
                MASK_DIR        = 0x00000020,
                MASK_ERRCODE    = 0x00000080,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SEGCODE    = 0,
                OFFSET_DIR        = 5,
                OFFSET_ERRCODE    = 6,
            }; // endof offset_t
            enum width_t{
                WIDTH_SEGCODE    = 5,
                WIDTH_DIR        = 1,
                WIDTH_ERRCODE    = 2,
            }; // endof width_t
            // SEGCODE field
            typedef field_t<uint32_t, 0x400a8830, 0x1f, 0, ro_t<uint32_t>> f_SEGCODE;
            // DIR field
            typedef field_t<uint32_t, 0x400a8830, 0x1, 5, ro_t<uint32_t>> f_DIR;
            // ERRCODE field
            typedef field_t<uint32_t, 0x400a8830, 0x3, 6, ro_t<uint32_t>> f_ERRCODE;
        } // end of ECC
        namespace EWLIM {
            // EWLIM register
            typedef reg_t<uint32_t, 0x400a8834, rw_t<uint32_t>> r_EWLIM;
        } // end of EWLIM
        namespace RXERR {
            // RXERR register
            typedef reg_t<uint32_t, 0x400a8838, rw_t<uint32_t>> r_RXERR;
        } // end of RXERR
        namespace TXERR {
            // TXERR register
            typedef reg_t<uint32_t, 0x400a883c, rw_t<uint32_t>> r_TXERR;
        } // end of TXERR
        namespace FRAME {
            // register cluster
            namespace INFO {
                typedef reg_t<uint32_t, 0x400a8840, rw_t<uint32_t>> r_INFO;
            } // end of INFO
            namespace DATA[%S] {
                typedef reg_t<uint32_t, 0x400a8844, rw_t<uint32_t>> r_DATA[%s];
            } // end of DATA[%S]
        } // end of FRAME
        namespace RMCNT {
            // RMCNT register
            typedef reg_t<uint32_t, 0x400a8874, ro_t<uint32_t>> r_RMCNT;
        } // end of RMCNT
        namespace ACR {
            // ACR register
            typedef reg_t<uint32_t, 0x400a8b00, rw_t<uint32_t>> r_ACR_0;
            typedef reg_t<uint32_t, 0x400a8b04, rw_t<uint32_t>> r_ACR_1;
            typedef reg_t<uint32_t, 0x400a8b08, rw_t<uint32_t>> r_ACR_2;
            typedef reg_t<uint32_t, 0x400a8b0c, rw_t<uint32_t>> r_ACR_3;
            typedef reg_t<uint32_t, 0x400a8b10, rw_t<uint32_t>> r_ACR_4;
            typedef reg_t<uint32_t, 0x400a8b14, rw_t<uint32_t>> r_ACR_5;
            typedef reg_t<uint32_t, 0x400a8b18, rw_t<uint32_t>> r_ACR_6;
            typedef reg_t<uint32_t, 0x400a8b1c, rw_t<uint32_t>> r_ACR_7;
            typedef reg_t<uint32_t, 0x400a8b20, rw_t<uint32_t>> r_ACR_8;
            typedef reg_t<uint32_t, 0x400a8b24, rw_t<uint32_t>> r_ACR_9;
            typedef reg_t<uint32_t, 0x400a8b28, rw_t<uint32_t>> r_ACR_10;
            typedef reg_t<uint32_t, 0x400a8b2c, rw_t<uint32_t>> r_ACR_11;
            typedef reg_t<uint32_t, 0x400a8b30, rw_t<uint32_t>> r_ACR_12;
            typedef reg_t<uint32_t, 0x400a8b34, rw_t<uint32_t>> r_ACR_13;
            typedef reg_t<uint32_t, 0x400a8b38, rw_t<uint32_t>> r_ACR_14;
            typedef reg_t<uint32_t, 0x400a8b3c, rw_t<uint32_t>> r_ACR_15;
        } // end of ACR[%s]
        namespace AMR {
            // AMR register
            typedef reg_t<uint32_t, 0x400a8b80, rw_t<uint32_t>> r_AMR_0;
            typedef reg_t<uint32_t, 0x400a8b84, rw_t<uint32_t>> r_AMR_1;
            typedef reg_t<uint32_t, 0x400a8b88, rw_t<uint32_t>> r_AMR_2;
            typedef reg_t<uint32_t, 0x400a8b8c, rw_t<uint32_t>> r_AMR_3;
            typedef reg_t<uint32_t, 0x400a8b90, rw_t<uint32_t>> r_AMR_4;
            typedef reg_t<uint32_t, 0x400a8b94, rw_t<uint32_t>> r_AMR_5;
            typedef reg_t<uint32_t, 0x400a8b98, rw_t<uint32_t>> r_AMR_6;
            typedef reg_t<uint32_t, 0x400a8b9c, rw_t<uint32_t>> r_AMR_7;
            typedef reg_t<uint32_t, 0x400a8ba0, rw_t<uint32_t>> r_AMR_8;
            typedef reg_t<uint32_t, 0x400a8ba4, rw_t<uint32_t>> r_AMR_9;
            typedef reg_t<uint32_t, 0x400a8ba8, rw_t<uint32_t>> r_AMR_10;
            typedef reg_t<uint32_t, 0x400a8bac, rw_t<uint32_t>> r_AMR_11;
            typedef reg_t<uint32_t, 0x400a8bb0, rw_t<uint32_t>> r_AMR_12;
            typedef reg_t<uint32_t, 0x400a8bb4, rw_t<uint32_t>> r_AMR_13;
            typedef reg_t<uint32_t, 0x400a8bb8, rw_t<uint32_t>> r_AMR_14;
            typedef reg_t<uint32_t, 0x400a8bbc, rw_t<uint32_t>> r_AMR_15;
        } // end of AMR[%s]
    } // end of CAN0
} // end of PAC
#endif // end of #if USING_CAN0
