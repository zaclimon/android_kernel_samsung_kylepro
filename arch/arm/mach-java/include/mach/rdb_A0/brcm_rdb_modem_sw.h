/************************************************************************************************/
/*                                                                                              */
/*  Copyright 2013  Broadcom Corporation                                                        */
/*                                                                                              */
/*     Unless you and Broadcom execute a separate written software license agreement governing  */
/*     use of this software, this software is licensed to you under the terms of the GNU        */
/*     General Public License version 2 (the GPL), available at                                 */
/*                                                                                              */
/*          http://www.broadcom.com/licenses/GPLv2.php                                          */
/*                                                                                              */
/*     with the following added to such license:                                                */
/*                                                                                              */
/*     As a special exception, the copyright holders of this software give you permission to    */
/*     link this software with independent modules, and to copy and distribute the resulting    */
/*     executable under terms of your choice, provided that you also meet, for each linked      */
/*     independent module, the terms and conditions of the license of that module.              */
/*     An independent module is a module which is not derived from this software.  The special  */
/*     exception does not apply to any modifications of the software.                           */
/*                                                                                              */
/*     Notwithstanding the above, under no circumstances may you combine this software in any   */
/*     way with any other Broadcom software provided under a license other than the GPL,        */
/*     without Broadcom's express prior written consent.                                        */
/*                                                                                              */
/*     Date     : Generated on 3/4/2013 11:52:5                                             */
/*     RDB file : //JAVA/                                                                   */
/************************************************************************************************/

#ifndef __BRCM_RDB_MODEM_SW_H__
#define __BRCM_RDB_MODEM_SW_H__

#define MODEM_SW_ARARB0_OFFSET                                            0x00000408
#define MODEM_SW_ARARB0_TYPE                                              UInt32
#define MODEM_SW_ARARB0_RESERVED_MASK                                     0x00FF00FF
#define    MODEM_SW_ARARB0_SLAVE_INT_NUM_SHIFT                            24
#define    MODEM_SW_ARARB0_SLAVE_INT_NUM_MASK                             0xFF000000
#define    MODEM_SW_ARARB0_INT_PRIORITY_SHIFT                             8
#define    MODEM_SW_ARARB0_INT_PRIORITY_MASK                              0x0000FF00

#define MODEM_SW_AWARB0_OFFSET                                            0x0000040C
#define MODEM_SW_AWARB0_TYPE                                              UInt32
#define MODEM_SW_AWARB0_RESERVED_MASK                                     0x00FF00FF
#define    MODEM_SW_AWARB0_SLAVE_INT_NUM_SHIFT                            24
#define    MODEM_SW_AWARB0_SLAVE_INT_NUM_MASK                             0xFF000000
#define    MODEM_SW_AWARB0_INT_PRIORITY_SHIFT                             8
#define    MODEM_SW_AWARB0_INT_PRIORITY_MASK                              0x0000FF00

#define MODEM_SW_CONFIG0_OFFSET                                           0x00000FC0
#define MODEM_SW_CONFIG0_TYPE                                             UInt32
#define MODEM_SW_CONFIG0_RESERVED_MASK                                    0xFFFFFF00
#define    MODEM_SW_CONFIG0_SI_PORTS_SHIFT                                0
#define    MODEM_SW_CONFIG0_SI_PORTS_MASK                                 0x000000FF

#define MODEM_SW_CONFIG1_OFFSET                                           0x00000FC4
#define MODEM_SW_CONFIG1_TYPE                                             UInt32
#define MODEM_SW_CONFIG1_RESERVED_MASK                                    0xFFFFFF00
#define    MODEM_SW_CONFIG1_MI_PORTS_SHIFT                                0
#define    MODEM_SW_CONFIG1_MI_PORTS_MASK                                 0x000000FF

#define MODEM_SW_PERID0_OFFSET                                            0x00000FE0
#define MODEM_SW_PERID0_TYPE                                              UInt32
#define MODEM_SW_PERID0_RESERVED_MASK                                     0xFFFFFF00
#define    MODEM_SW_PERID0_PID0_SHIFT                                     0
#define    MODEM_SW_PERID0_PID0_MASK                                      0x000000FF

#define MODEM_SW_PERID1_OFFSET                                            0x00000FE4
#define MODEM_SW_PERID1_TYPE                                              UInt32
#define MODEM_SW_PERID1_RESERVED_MASK                                     0xFFFFFF00
#define    MODEM_SW_PERID1_PID1_SHIFT                                     0
#define    MODEM_SW_PERID1_PID1_MASK                                      0x000000FF

#define MODEM_SW_PERID2_OFFSET                                            0x00000FE8
#define MODEM_SW_PERID2_TYPE                                              UInt32
#define MODEM_SW_PERID2_RESERVED_MASK                                     0xFFFFFF00
#define    MODEM_SW_PERID2_PID2_SHIFT                                     0
#define    MODEM_SW_PERID2_PID2_MASK                                      0x000000FF

#define MODEM_SW_PERID3_OFFSET                                            0x00000FEC
#define MODEM_SW_PERID3_TYPE                                              UInt32
#define MODEM_SW_PERID3_RESERVED_MASK                                     0xFFFFFF00
#define    MODEM_SW_PERID3_PID3_SHIFT                                     0
#define    MODEM_SW_PERID3_PID3_MASK                                      0x000000FF

#define MODEM_SW_COMPID0_OFFSET                                           0x00000FF0
#define MODEM_SW_COMPID0_TYPE                                             UInt32
#define MODEM_SW_COMPID0_RESERVED_MASK                                    0xFFFFFF00
#define    MODEM_SW_COMPID0_CID0_SHIFT                                    0
#define    MODEM_SW_COMPID0_CID0_MASK                                     0x000000FF

#define MODEM_SW_COMPID1_OFFSET                                           0x00000FF4
#define MODEM_SW_COMPID1_TYPE                                             UInt32
#define MODEM_SW_COMPID1_RESERVED_MASK                                    0xFFFFFF00
#define    MODEM_SW_COMPID1_CID1_SHIFT                                    0
#define    MODEM_SW_COMPID1_CID1_MASK                                     0x000000FF

#define MODEM_SW_COMPID2_OFFSET                                           0x00000FF8
#define MODEM_SW_COMPID2_TYPE                                             UInt32
#define MODEM_SW_COMPID2_RESERVED_MASK                                    0xFFFFFF00
#define    MODEM_SW_COMPID2_CID2_SHIFT                                    0
#define    MODEM_SW_COMPID2_CID2_MASK                                     0x000000FF

#define MODEM_SW_COMPID3_OFFSET                                           0x00000FFC
#define MODEM_SW_COMPID3_TYPE                                             UInt32
#define MODEM_SW_COMPID3_RESERVED_MASK                                    0xFFFFFF00
#define    MODEM_SW_COMPID3_CID3_SHIFT                                    0
#define    MODEM_SW_COMPID3_CID3_MASK                                     0x000000FF

#endif /* __BRCM_RDB_MODEM_SW_H__ */


