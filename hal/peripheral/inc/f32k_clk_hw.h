/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *    f32k_clk_hw.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is intended for F32K_CLK driver.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef F32K_CLK_HW_H
#define F32K_CLK_HW_H

#include "drv_features_f32k.h"
#include "reg_base.h"

#if !defined(DRV_F32K_CLK_OFF)
#if defined(DRV_F32K_FQMTR_AS_6255)
#define FQMTR_BASE  (PLL_base+0x0000)
#define FQMTR_CON0  (PLL_base+0x1080)
#define FQMTR_CON1  (PLL_base+0x1084)
#define FQMTR_CON2  (PLL_base+0x1088)
#define FQMTR_CON3  (PLL_base+0x108c)
#define FQMTR_CON4  (PLL_base+0x1090)
#elif (defined(DRV_F32K_FQMTR_AS_6250) || defined(DRV_F32K_FQMTR_AS_6260))
#define FQMTR_CON0  (PMU_base+0x0ff0)
#define FQMTR_CON1  (PMU_base+0x0ff4)
#define FQMTR_CON2  (PMU_base+0x0ff8)
#define FQMTR_CON3  (PMU_base+0x0ffc)
#endif

#if defined(DRV_F32K_FQMTR_AS_6255)

#define FQMTR_EN                (0x8000)
#define FQMTR_RST               (0x4000)

#define FQMTR_TCKSEL_CLKSQ13M   (0x1)
#define FQMTR_TCKSEL_EOSC32K    (0xe)

#define FQMTR_FCKSEL_CLKSQ13M   (0x00)
#define FQMTR_FCKSEL_DCXO32K    (0x10)
#define FQMTR_FCKSEL_EOSC32K    (0x20)

#define FQMTR_COND_ON           (0x0)
#define FQMTR_BUSY              (0x8000)

#define FQMTR_WINSET_LV1        (0x1)
#define FQMTR_WINSET_LV2        (0x10)

#elif defined(DRV_F32K_FQMTR_AS_6250)

#define FQMTR_BUSY              (0x8000)
#define FQMTR_EN                (0x4000)
#define FQMTR_RST               (0x2000)

// for 50E1 FQMTR
#define FQMTR_TCKSEL_DCXO32K    (0x3)
#define FQMTR_TCKSEL_EOSC32K    (0x4)
// for 50E2 FQMTR
#define FQMTR_TCKSEL_DCXO26M    (0x1)

// for 50E1 FQMTR
#define HW_E1_FQMTR_WINSET_LV1  (0xFFFF)
// for 50E2 FQMTR
#define HW_E2_FQMTR_WINSET_LV1  (0x1)
#define HW_E2_FQMTR_WINSET_LV2  (0x10) 

#elif defined(DRV_F32K_FQMTR_AS_6260)

#define FQMTR_BUSY              (0x8000)
#define FQMTR_EN                (0x4000)
#define FQMTR_RST               (0x2000)

#define FQMTR_FCKSEL_DCXO32K    (0x100)
#define FQMTR_FCKSEL_EOSC32K    (0x0)

#define FQMTR_TCKSEL_DCXO26M    (0x1)

#define FQMTR_WINSET_LV1  (0x1)
#define FQMTR_WINSET_LV2  (0x10) 

#endif

#if defined(DRV_F32K_XOSC_CALI_DEF_9)
#define F32K_XOSCCALI_DEF_VAL   (0x9)
#elif defined(DRV_F32K_XOSC_CALI_DEF_F)
#define F32K_XOSCCALI_DEF_VAL   (0xf)
#endif

#define F32K_EOSCCALI_DEF_VAL   (0xF)

#endif /*!defined(DRV_F32K_CLK_OFF)*/

#endif //#ifndef F32K_CLK_HW_H
 
