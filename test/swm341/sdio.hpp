#pragma once
#include "reg.hpp"
#include "pac_config.h"
#if ((defined USING_SDIO) && (USING_SDIO != 0))
namespace PAC {
    namespace SDIO {
        namespace DMA_MEM_ADDR {
            // DMA_MEM_ADDR register
            typedef reg_t<uint32_t, 0x40001800, rw_t<uint32_t>> r_DMA_MEM_ADDR;
        } // end of DMA_MEM_ADDR
        namespace BLK {
            // BLK register
            typedef reg_t<uint32_t, 0x40001804, rw_t<uint32_t>> r_BLK;
            enum mask_t{
                MASK_SIZE       = 0x00000800,
                MASK_COUNT      = 0x08000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_SIZE       = 0,
                OFFSET_COUNT      = 16,
            }; // endof offset_t
            enum width_t{
                WIDTH_SIZE       = 12,
                WIDTH_COUNT      = 12,
            }; // endof width_t
            // SIZE field
            typedef field_t<uint32_t, 0x40001804, 0xfff, 0, rw_t<uint32_t>> f_SIZE;
            // COUNT field
            typedef field_t<uint32_t, 0x40001804, 0xfff, 16, rw_t<uint32_t>> f_COUNT;
        } // end of BLK
        namespace ARG {
            // ARG register
            typedef reg_t<uint32_t, 0x40001808, rw_t<uint32_t>> r_ARG;
        } // end of ARG
        namespace CMD {
            // CMD register
            typedef reg_t<uint32_t, 0x4000180c, rw_t<uint32_t>> r_CMD;
            enum mask_t{
                MASK_DMAEN      = 0x00000001,
                MASK_BLKCNTEN   = 0x00000002,
                MASK_AUTOCMD12  = 0x00000004,
                MASK_DIRREAD    = 0x00000010,
                MASK_MULTBLK    = 0x00000020,
                MASK_RESPTYPE   = 0x00020000,
                MASK_CRCCHECK   = 0x00080000,
                MASK_IDXCHECK   = 0x00100000,
                MASK_HAVEDATA   = 0x00200000,
                MASK_CMDTYPE    = 0x00800000,
                MASK_CMDINDX    = 0x20000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_DMAEN      = 0,
                OFFSET_BLKCNTEN   = 1,
                OFFSET_AUTOCMD12  = 2,
                OFFSET_DIRREAD    = 4,
                OFFSET_MULTBLK    = 5,
                OFFSET_RESPTYPE   = 16,
                OFFSET_CRCCHECK   = 19,
                OFFSET_IDXCHECK   = 20,
                OFFSET_HAVEDATA   = 21,
                OFFSET_CMDTYPE    = 22,
                OFFSET_CMDINDX    = 24,
            }; // endof offset_t
            enum width_t{
                WIDTH_DMAEN      = 1,
                WIDTH_BLKCNTEN   = 1,
                WIDTH_AUTOCMD12  = 1,
                WIDTH_DIRREAD    = 1,
                WIDTH_MULTBLK    = 1,
                WIDTH_RESPTYPE   = 2,
                WIDTH_CRCCHECK   = 1,
                WIDTH_IDXCHECK   = 1,
                WIDTH_HAVEDATA   = 1,
                WIDTH_CMDTYPE    = 2,
                WIDTH_CMDINDX    = 6,
            }; // endof width_t
            // DMAEN field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 0, rw_t<uint32_t>> f_DMAEN;
            // BLKCNTEN field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 1, rw_t<uint32_t>> f_BLKCNTEN;
            // AUTOCMD12 field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 2, rw_t<uint32_t>> f_AUTOCMD12;
            // DIRREAD field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 4, rw_t<uint32_t>> f_DIRREAD;
            // MULTBLK field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 5, rw_t<uint32_t>> f_MULTBLK;
            // RESPTYPE field
            typedef field_t<uint32_t, 0x4000180c, 0x3, 16, rw_t<uint32_t>> f_RESPTYPE;
            // CRCCHECK field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 19, rw_t<uint32_t>> f_CRCCHECK;
            // IDXCHECK field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 20, rw_t<uint32_t>> f_IDXCHECK;
            // HAVEDATA field
            typedef field_t<uint32_t, 0x4000180c, 0x1, 21, rw_t<uint32_t>> f_HAVEDATA;
            // CMDTYPE field
            typedef field_t<uint32_t, 0x4000180c, 0x3, 22, rw_t<uint32_t>> f_CMDTYPE;
            // CMDINDX field
            typedef field_t<uint32_t, 0x4000180c, 0x3f, 24, rw_t<uint32_t>> f_CMDINDX;
        } // end of CMD
        namespace RESP {
            // RESP register
            typedef reg_t<uint32_t, 0x40001810, rw_t<uint32_t>> r_RESP_0;
            typedef reg_t<uint32_t, 0x40001814, rw_t<uint32_t>> r_RESP_1;
            typedef reg_t<uint32_t, 0x40001818, rw_t<uint32_t>> r_RESP_2;
            typedef reg_t<uint32_t, 0x4000181c, rw_t<uint32_t>> r_RESP_3;
        } // end of RESP[%s]
        namespace DATA {
            // DATA register
            typedef reg_t<uint32_t, 0x40001820, rw_t<uint32_t>> r_DATA;
        } // end of DATA
        namespace STAT {
            // STAT register
            typedef reg_t<uint32_t, 0x40001824, rw_t<uint32_t>> r_STAT;
        } // end of STAT
        namespace CR1 {
            // CR1 register
            typedef reg_t<uint32_t, 0x40001828, rw_t<uint32_t>> r_CR1;
            enum mask_t{
                MASK__4BIT      = 0x00000002,
                MASK__8BIT      = 0x00000020,
                MASK_CDBIT      = 0x00000040,
                MASK_CDSRC      = 0x00000080,
                MASK_PWRON      = 0x00000100,
                MASK_VOLT       = 0x00000800,
            }; // endof mask_t
            enum offset_t{
                OFFSET__4BIT      = 1,
                OFFSET__8BIT      = 5,
                OFFSET_CDBIT      = 6,
                OFFSET_CDSRC      = 7,
                OFFSET_PWRON      = 8,
                OFFSET_VOLT       = 9,
            }; // endof offset_t
            enum width_t{
                WIDTH__4BIT      = 1,
                WIDTH__8BIT      = 1,
                WIDTH_CDBIT      = 1,
                WIDTH_CDSRC      = 1,
                WIDTH_PWRON      = 1,
                WIDTH_VOLT       = 3,
            }; // endof width_t
            // _4BIT field
            typedef field_t<uint32_t, 0x40001828, 0x1, 1, rw_t<uint32_t>> f__4BIT;
            // _8BIT field
            typedef field_t<uint32_t, 0x40001828, 0x1, 5, rw_t<uint32_t>> f__8BIT;
            // CDBIT field
            typedef field_t<uint32_t, 0x40001828, 0x1, 6, rw_t<uint32_t>> f_CDBIT;
            // CDSRC field
            typedef field_t<uint32_t, 0x40001828, 0x1, 7, rw_t<uint32_t>> f_CDSRC;
            // PWRON field
            typedef field_t<uint32_t, 0x40001828, 0x1, 8, rw_t<uint32_t>> f_PWRON;
            // VOLT field
            typedef field_t<uint32_t, 0x40001828, 0x7, 9, rw_t<uint32_t>> f_VOLT;
        } // end of CR1
        namespace CR2 {
            // CR2 register
            typedef reg_t<uint32_t, 0x4000182c, rw_t<uint32_t>> r_CR2;
            enum mask_t{
                MASK_CLKEN      = 0x00000001,
                MASK_CLKRDY     = 0x00000002,
                MASK_SDCLKEN    = 0x00000004,
                MASK_SDCLKDIV   = 0x00008000,
                MASK_TIMEOUT    = 0x00080000,
                MASK_RSTALL     = 0x01000000,
                MASK_RSTCMD     = 0x02000000,
                MASK_RSTDAT     = 0x04000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CLKEN      = 0,
                OFFSET_CLKRDY     = 1,
                OFFSET_SDCLKEN    = 2,
                OFFSET_SDCLKDIV   = 8,
                OFFSET_TIMEOUT    = 16,
                OFFSET_RSTALL     = 24,
                OFFSET_RSTCMD     = 25,
                OFFSET_RSTDAT     = 26,
            }; // endof offset_t
            enum width_t{
                WIDTH_CLKEN      = 1,
                WIDTH_CLKRDY     = 1,
                WIDTH_SDCLKEN    = 1,
                WIDTH_SDCLKDIV   = 8,
                WIDTH_TIMEOUT    = 4,
                WIDTH_RSTALL     = 1,
                WIDTH_RSTCMD     = 1,
                WIDTH_RSTDAT     = 1,
            }; // endof width_t
            // CLKEN field
            typedef field_t<uint32_t, 0x4000182c, 0x1, 0, rw_t<uint32_t>> f_CLKEN;
            // CLKRDY field
            typedef field_t<uint32_t, 0x4000182c, 0x1, 1, rw_t<uint32_t>> f_CLKRDY;
            // SDCLKEN field
            typedef field_t<uint32_t, 0x4000182c, 0x1, 2, rw_t<uint32_t>> f_SDCLKEN;
            // SDCLKDIV field
            typedef field_t<uint32_t, 0x4000182c, 0xff, 8, rw_t<uint32_t>> f_SDCLKDIV;
            // TIMEOUT field
            typedef field_t<uint32_t, 0x4000182c, 0xf, 16, rw_t<uint32_t>> f_TIMEOUT;
            // RSTALL field
            typedef field_t<uint32_t, 0x4000182c, 0x1, 24, rw_t<uint32_t>> f_RSTALL;
            // RSTCMD field
            typedef field_t<uint32_t, 0x4000182c, 0x1, 25, rw_t<uint32_t>> f_RSTCMD;
            // RSTDAT field
            typedef field_t<uint32_t, 0x4000182c, 0x1, 26, rw_t<uint32_t>> f_RSTDAT;
        } // end of CR2
        namespace IF {
            // IF register
            typedef reg_t<uint32_t, 0x40001830, rw_t<uint32_t>> r_IF;
            enum mask_t{
                MASK_CMDDONE    = 0x00000001,
                MASK_TRXDONE    = 0x00000002,
                MASK_BLKGAP     = 0x00000004,
                MASK_DMADONE    = 0x00000008,
                MASK_BUFWRRDY   = 0x00000010,
                MASK_BUFRDRDY   = 0x00000020,
                MASK_CARDINSR   = 0x00000040,
                MASK_CARDRMOV   = 0x00000080,
                MASK_CARD       = 0x00000100,
                MASK_ERROR      = 0x00008000,
                MASK_CMDTIMEOUT = 0x00010000,
                MASK_CMDCRCERR  = 0x00020000,
                MASK_CMDENDERR  = 0x00040000,
                MASK_CMDIDXERR  = 0x00080000,
                MASK_DATTIMEOUT = 0x00100000,
                MASK_DATCRCERR  = 0x00200000,
                MASK_DATENDERR  = 0x00400000,
                MASK_CURLIMERR  = 0x00800000,
                MASK_CMD12ERR   = 0x01000000,
                MASK_DMAERR     = 0x02000000,
                MASK_RESPERR    = 0x10000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CMDDONE    = 0,
                OFFSET_TRXDONE    = 1,
                OFFSET_BLKGAP     = 2,
                OFFSET_DMADONE    = 3,
                OFFSET_BUFWRRDY   = 4,
                OFFSET_BUFRDRDY   = 5,
                OFFSET_CARDINSR   = 6,
                OFFSET_CARDRMOV   = 7,
                OFFSET_CARD       = 8,
                OFFSET_ERROR      = 15,
                OFFSET_CMDTIMEOUT = 16,
                OFFSET_CMDCRCERR  = 17,
                OFFSET_CMDENDERR  = 18,
                OFFSET_CMDIDXERR  = 19,
                OFFSET_DATTIMEOUT = 20,
                OFFSET_DATCRCERR  = 21,
                OFFSET_DATENDERR  = 22,
                OFFSET_CURLIMERR  = 23,
                OFFSET_CMD12ERR   = 24,
                OFFSET_DMAERR     = 25,
                OFFSET_RESPERR    = 28,
            }; // endof offset_t
            enum width_t{
                WIDTH_CMDDONE    = 1,
                WIDTH_TRXDONE    = 1,
                WIDTH_BLKGAP     = 1,
                WIDTH_DMADONE    = 1,
                WIDTH_BUFWRRDY   = 1,
                WIDTH_BUFRDRDY   = 1,
                WIDTH_CARDINSR   = 1,
                WIDTH_CARDRMOV   = 1,
                WIDTH_CARD       = 1,
                WIDTH_ERROR      = 1,
                WIDTH_CMDTIMEOUT = 1,
                WIDTH_CMDCRCERR  = 1,
                WIDTH_CMDENDERR  = 1,
                WIDTH_CMDIDXERR  = 1,
                WIDTH_DATTIMEOUT = 1,
                WIDTH_DATCRCERR  = 1,
                WIDTH_DATENDERR  = 1,
                WIDTH_CURLIMERR  = 1,
                WIDTH_CMD12ERR   = 1,
                WIDTH_DMAERR     = 1,
                WIDTH_RESPERR    = 1,
            }; // endof width_t
            // CMDDONE field
            typedef field_t<uint32_t, 0x40001830, 0x1, 0, rw_t<uint32_t>> f_CMDDONE;
            // TRXDONE field
            typedef field_t<uint32_t, 0x40001830, 0x1, 1, rw_t<uint32_t>> f_TRXDONE;
            // BLKGAP field
            typedef field_t<uint32_t, 0x40001830, 0x1, 2, rw_t<uint32_t>> f_BLKGAP;
            // DMADONE field
            typedef field_t<uint32_t, 0x40001830, 0x1, 3, rw_t<uint32_t>> f_DMADONE;
            // BUFWRRDY field
            typedef field_t<uint32_t, 0x40001830, 0x1, 4, rw_t<uint32_t>> f_BUFWRRDY;
            // BUFRDRDY field
            typedef field_t<uint32_t, 0x40001830, 0x1, 5, rw_t<uint32_t>> f_BUFRDRDY;
            // CARDINSR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 6, rw_t<uint32_t>> f_CARDINSR;
            // CARDRMOV field
            typedef field_t<uint32_t, 0x40001830, 0x1, 7, rw_t<uint32_t>> f_CARDRMOV;
            // CARD field
            typedef field_t<uint32_t, 0x40001830, 0x1, 8, rw_t<uint32_t>> f_CARD;
            // ERROR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 15, rw_t<uint32_t>> f_ERROR;
            // CMDTIMEOUT field
            typedef field_t<uint32_t, 0x40001830, 0x1, 16, rw_t<uint32_t>> f_CMDTIMEOUT;
            // CMDCRCERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 17, rw_t<uint32_t>> f_CMDCRCERR;
            // CMDENDERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 18, rw_t<uint32_t>> f_CMDENDERR;
            // CMDIDXERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 19, rw_t<uint32_t>> f_CMDIDXERR;
            // DATTIMEOUT field
            typedef field_t<uint32_t, 0x40001830, 0x1, 20, rw_t<uint32_t>> f_DATTIMEOUT;
            // DATCRCERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 21, rw_t<uint32_t>> f_DATCRCERR;
            // DATENDERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 22, rw_t<uint32_t>> f_DATENDERR;
            // CURLIMERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 23, rw_t<uint32_t>> f_CURLIMERR;
            // CMD12ERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 24, rw_t<uint32_t>> f_CMD12ERR;
            // DMAERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 25, rw_t<uint32_t>> f_DMAERR;
            // RESPERR field
            typedef field_t<uint32_t, 0x40001830, 0x1, 28, rw_t<uint32_t>> f_RESPERR;
        } // end of IF
        namespace IM {
            // IM register
            typedef reg_t<uint32_t, 0x40001834, rw_t<uint32_t>> r_IM;
            enum mask_t{
                MASK_CMDDONE    = 0x00000001,
                MASK_TRXDONE    = 0x00000002,
                MASK_BLKGAP     = 0x00000004,
                MASK_DMADONE    = 0x00000008,
                MASK_BUFWRRDY   = 0x00000010,
                MASK_BUFRDRDY   = 0x00000020,
                MASK_CARDINSR   = 0x00000040,
                MASK_CARDRMOV   = 0x00000080,
                MASK_CARD       = 0x00000100,
                MASK_CMDTIMEOUT = 0x00010000,
                MASK_CMDCRCERR  = 0x00020000,
                MASK_CMDENDERR  = 0x00040000,
                MASK_CMDIDXERR  = 0x00080000,
                MASK_DATTIMEOUT = 0x00100000,
                MASK_DATCRCERR  = 0x00200000,
                MASK_DATENDERR  = 0x00400000,
                MASK_CURLIMERR  = 0x00800000,
                MASK_CMD12ERR   = 0x01000000,
                MASK_DMAERR     = 0x02000000,
                MASK_RESPERR    = 0x10000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CMDDONE    = 0,
                OFFSET_TRXDONE    = 1,
                OFFSET_BLKGAP     = 2,
                OFFSET_DMADONE    = 3,
                OFFSET_BUFWRRDY   = 4,
                OFFSET_BUFRDRDY   = 5,
                OFFSET_CARDINSR   = 6,
                OFFSET_CARDRMOV   = 7,
                OFFSET_CARD       = 8,
                OFFSET_CMDTIMEOUT = 16,
                OFFSET_CMDCRCERR  = 17,
                OFFSET_CMDENDERR  = 18,
                OFFSET_CMDIDXERR  = 19,
                OFFSET_DATTIMEOUT = 20,
                OFFSET_DATCRCERR  = 21,
                OFFSET_DATENDERR  = 22,
                OFFSET_CURLIMERR  = 23,
                OFFSET_CMD12ERR   = 24,
                OFFSET_DMAERR     = 25,
                OFFSET_RESPERR    = 28,
            }; // endof offset_t
            enum width_t{
                WIDTH_CMDDONE    = 1,
                WIDTH_TRXDONE    = 1,
                WIDTH_BLKGAP     = 1,
                WIDTH_DMADONE    = 1,
                WIDTH_BUFWRRDY   = 1,
                WIDTH_BUFRDRDY   = 1,
                WIDTH_CARDINSR   = 1,
                WIDTH_CARDRMOV   = 1,
                WIDTH_CARD       = 1,
                WIDTH_CMDTIMEOUT = 1,
                WIDTH_CMDCRCERR  = 1,
                WIDTH_CMDENDERR  = 1,
                WIDTH_CMDIDXERR  = 1,
                WIDTH_DATTIMEOUT = 1,
                WIDTH_DATCRCERR  = 1,
                WIDTH_DATENDERR  = 1,
                WIDTH_CURLIMERR  = 1,
                WIDTH_CMD12ERR   = 1,
                WIDTH_DMAERR     = 1,
                WIDTH_RESPERR    = 1,
            }; // endof width_t
            // CMDDONE field
            typedef field_t<uint32_t, 0x40001834, 0x1, 0, rw_t<uint32_t>> f_CMDDONE;
            // TRXDONE field
            typedef field_t<uint32_t, 0x40001834, 0x1, 1, rw_t<uint32_t>> f_TRXDONE;
            // BLKGAP field
            typedef field_t<uint32_t, 0x40001834, 0x1, 2, rw_t<uint32_t>> f_BLKGAP;
            // DMADONE field
            typedef field_t<uint32_t, 0x40001834, 0x1, 3, rw_t<uint32_t>> f_DMADONE;
            // BUFWRRDY field
            typedef field_t<uint32_t, 0x40001834, 0x1, 4, rw_t<uint32_t>> f_BUFWRRDY;
            // BUFRDRDY field
            typedef field_t<uint32_t, 0x40001834, 0x1, 5, rw_t<uint32_t>> f_BUFRDRDY;
            // CARDINSR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 6, rw_t<uint32_t>> f_CARDINSR;
            // CARDRMOV field
            typedef field_t<uint32_t, 0x40001834, 0x1, 7, rw_t<uint32_t>> f_CARDRMOV;
            // CARD field
            typedef field_t<uint32_t, 0x40001834, 0x1, 8, rw_t<uint32_t>> f_CARD;
            // CMDTIMEOUT field
            typedef field_t<uint32_t, 0x40001834, 0x1, 16, rw_t<uint32_t>> f_CMDTIMEOUT;
            // CMDCRCERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 17, rw_t<uint32_t>> f_CMDCRCERR;
            // CMDENDERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 18, rw_t<uint32_t>> f_CMDENDERR;
            // CMDIDXERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 19, rw_t<uint32_t>> f_CMDIDXERR;
            // DATTIMEOUT field
            typedef field_t<uint32_t, 0x40001834, 0x1, 20, rw_t<uint32_t>> f_DATTIMEOUT;
            // DATCRCERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 21, rw_t<uint32_t>> f_DATCRCERR;
            // DATENDERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 22, rw_t<uint32_t>> f_DATENDERR;
            // CURLIMERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 23, rw_t<uint32_t>> f_CURLIMERR;
            // CMD12ERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 24, rw_t<uint32_t>> f_CMD12ERR;
            // DMAERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 25, rw_t<uint32_t>> f_DMAERR;
            // RESPERR field
            typedef field_t<uint32_t, 0x40001834, 0x1, 28, rw_t<uint32_t>> f_RESPERR;
        } // end of IM
        namespace IE {
            // IE register
            typedef reg_t<uint32_t, 0x40001838, rw_t<uint32_t>> r_IE;
            enum mask_t{
                MASK_CMDDONE    = 0x00000001,
                MASK_TRXDONE    = 0x00000002,
                MASK_BLKGAP     = 0x00000004,
                MASK_DMADONE    = 0x00000008,
                MASK_BUFWRRDY   = 0x00000010,
                MASK_BUFRDRDY   = 0x00000020,
                MASK_CARDINSR   = 0x00000040,
                MASK_CARDRMOV   = 0x00000080,
                MASK_CARD       = 0x00000100,
                MASK_CMDTIMEOUT = 0x00010000,
                MASK_CMDCRCERR  = 0x00020000,
                MASK_CMDENDERR  = 0x00040000,
                MASK_CMDIDXERR  = 0x00080000,
                MASK_DATTIMEOUT = 0x00100000,
                MASK_DATCRCERR  = 0x00200000,
                MASK_DATENDERR  = 0x00400000,
                MASK_CURLIMERR  = 0x00800000,
                MASK_CMD12ERR   = 0x01000000,
                MASK_DMAERR     = 0x02000000,
                MASK_RESPERR    = 0x10000000,
            }; // endof mask_t
            enum offset_t{
                OFFSET_CMDDONE    = 0,
                OFFSET_TRXDONE    = 1,
                OFFSET_BLKGAP     = 2,
                OFFSET_DMADONE    = 3,
                OFFSET_BUFWRRDY   = 4,
                OFFSET_BUFRDRDY   = 5,
                OFFSET_CARDINSR   = 6,
                OFFSET_CARDRMOV   = 7,
                OFFSET_CARD       = 8,
                OFFSET_CMDTIMEOUT = 16,
                OFFSET_CMDCRCERR  = 17,
                OFFSET_CMDENDERR  = 18,
                OFFSET_CMDIDXERR  = 19,
                OFFSET_DATTIMEOUT = 20,
                OFFSET_DATCRCERR  = 21,
                OFFSET_DATENDERR  = 22,
                OFFSET_CURLIMERR  = 23,
                OFFSET_CMD12ERR   = 24,
                OFFSET_DMAERR     = 25,
                OFFSET_RESPERR    = 28,
            }; // endof offset_t
            enum width_t{
                WIDTH_CMDDONE    = 1,
                WIDTH_TRXDONE    = 1,
                WIDTH_BLKGAP     = 1,
                WIDTH_DMADONE    = 1,
                WIDTH_BUFWRRDY   = 1,
                WIDTH_BUFRDRDY   = 1,
                WIDTH_CARDINSR   = 1,
                WIDTH_CARDRMOV   = 1,
                WIDTH_CARD       = 1,
                WIDTH_CMDTIMEOUT = 1,
                WIDTH_CMDCRCERR  = 1,
                WIDTH_CMDENDERR  = 1,
                WIDTH_CMDIDXERR  = 1,
                WIDTH_DATTIMEOUT = 1,
                WIDTH_DATCRCERR  = 1,
                WIDTH_DATENDERR  = 1,
                WIDTH_CURLIMERR  = 1,
                WIDTH_CMD12ERR   = 1,
                WIDTH_DMAERR     = 1,
                WIDTH_RESPERR    = 1,
            }; // endof width_t
            // CMDDONE field
            typedef field_t<uint32_t, 0x40001838, 0x1, 0, rw_t<uint32_t>> f_CMDDONE;
            // TRXDONE field
            typedef field_t<uint32_t, 0x40001838, 0x1, 1, rw_t<uint32_t>> f_TRXDONE;
            // BLKGAP field
            typedef field_t<uint32_t, 0x40001838, 0x1, 2, rw_t<uint32_t>> f_BLKGAP;
            // DMADONE field
            typedef field_t<uint32_t, 0x40001838, 0x1, 3, rw_t<uint32_t>> f_DMADONE;
            // BUFWRRDY field
            typedef field_t<uint32_t, 0x40001838, 0x1, 4, rw_t<uint32_t>> f_BUFWRRDY;
            // BUFRDRDY field
            typedef field_t<uint32_t, 0x40001838, 0x1, 5, rw_t<uint32_t>> f_BUFRDRDY;
            // CARDINSR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 6, rw_t<uint32_t>> f_CARDINSR;
            // CARDRMOV field
            typedef field_t<uint32_t, 0x40001838, 0x1, 7, rw_t<uint32_t>> f_CARDRMOV;
            // CARD field
            typedef field_t<uint32_t, 0x40001838, 0x1, 8, rw_t<uint32_t>> f_CARD;
            // CMDTIMEOUT field
            typedef field_t<uint32_t, 0x40001838, 0x1, 16, rw_t<uint32_t>> f_CMDTIMEOUT;
            // CMDCRCERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 17, rw_t<uint32_t>> f_CMDCRCERR;
            // CMDENDERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 18, rw_t<uint32_t>> f_CMDENDERR;
            // CMDIDXERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 19, rw_t<uint32_t>> f_CMDIDXERR;
            // DATTIMEOUT field
            typedef field_t<uint32_t, 0x40001838, 0x1, 20, rw_t<uint32_t>> f_DATTIMEOUT;
            // DATCRCERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 21, rw_t<uint32_t>> f_DATCRCERR;
            // DATENDERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 22, rw_t<uint32_t>> f_DATENDERR;
            // CURLIMERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 23, rw_t<uint32_t>> f_CURLIMERR;
            // CMD12ERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 24, rw_t<uint32_t>> f_CMD12ERR;
            // DMAERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 25, rw_t<uint32_t>> f_DMAERR;
            // RESPERR field
            typedef field_t<uint32_t, 0x40001838, 0x1, 28, rw_t<uint32_t>> f_RESPERR;
        } // end of IE
        namespace CMD12ERR {
            // CMD12ERR register
            typedef reg_t<uint32_t, 0x4000183c, rw_t<uint32_t>> r_CMD12ERR;
            enum mask_t{
                MASK_NE         = 0x00000001,
                MASK_TO         = 0x00000002,
                MASK_CRC        = 0x00000004,
                MASK_END        = 0x00000008,
                MASK_INDEX      = 0x00000010,
            }; // endof mask_t
            enum offset_t{
                OFFSET_NE         = 0,
                OFFSET_TO         = 1,
                OFFSET_CRC        = 2,
                OFFSET_END        = 3,
                OFFSET_INDEX      = 4,
            }; // endof offset_t
            enum width_t{
                WIDTH_NE         = 1,
                WIDTH_TO         = 1,
                WIDTH_CRC        = 1,
                WIDTH_END        = 1,
                WIDTH_INDEX      = 1,
            }; // endof width_t
            // NE field
            typedef field_t<uint32_t, 0x4000183c, 0x1, 0, rw_t<uint32_t>> f_NE;
            // TO field
            typedef field_t<uint32_t, 0x4000183c, 0x1, 1, rw_t<uint32_t>> f_TO;
            // CRC field
            typedef field_t<uint32_t, 0x4000183c, 0x1, 2, rw_t<uint32_t>> f_CRC;
            // END field
            typedef field_t<uint32_t, 0x4000183c, 0x1, 3, rw_t<uint32_t>> f_END;
            // INDEX field
            typedef field_t<uint32_t, 0x4000183c, 0x1, 4, rw_t<uint32_t>> f_INDEX;
        } // end of CMD12ERR
    } // end of SDIO
} // end of PAC
#endif // end of #if USING_SDIO
