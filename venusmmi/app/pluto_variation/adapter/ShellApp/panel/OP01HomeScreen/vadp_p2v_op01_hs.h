/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
*  LAWS PRINCIPLES. ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *  vadp_p2v_op11_hs.h
 *
 * Project:
 * --------
 *  Venus
 *
 * Description:
 * ------------
 *  This file provides the adaptation functions from the Pluto MMI to the Venus
 *  MMI.
 *
 *      Pluto APP ---> p2v adaptor ---> Venus APP
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __VADP_P2V_OP01_HS_H__
#define __VADP_P2V_OP01_HS_H__

#include "MMI_features.h"

#ifdef __MMI_VUI_SHELL_OP01_HOMESCREEN__

/* Venus MMI headers: */
#include "ui_core\base\vfx_base.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* Pluto MMI headers: */
#include "MMIDataType.h"

/**********************************************************************
 * External Interfaces:
 **********************************************************************/

extern void vadp_p2v_hs_set_network_name(const U8 *name);

extern void vadp_p2v_hs_set_network_status(const U8 *status);

extern void vadp_p2v_hs_set_network_name_2(const U8 *name);

extern void vadp_p2v_hs_set_network_status_2(const U8 *status);

extern void vadp_p2v_hs_set_idle_mode_text(const U8 *text);

extern void vadp_p2v_hs_set_idle_mode_icon(const U8 *icon);

extern void vadp_p2v_hs_update_wlan_button(void);
extern void vadp_p2v_hs_update_hint_button(VfxS32 id, VfxS32 num);

#ifdef __MMI_OP01_DCD_V30__
extern void vadp_p2v_hs_update_dcd_news_img(void);
extern void vadp_p2v_hs_update_dcd_news_content(void);
extern void vadp_p2v_hs_update_dcd_whether_area(void);
#endif

extern void vadp_p2v_hs_suspend_wallpaper(void);
extern void vadp_p2v_hs_resume_wallpaper(void);

#ifdef __cplusplus
}   /* extern "C" */
#endif

#endif /* __MMI_VUI_SHELL_OP01_HOMESCREEN__ */
#endif /* __VADP_P2V_OP01_HS_H__ */
