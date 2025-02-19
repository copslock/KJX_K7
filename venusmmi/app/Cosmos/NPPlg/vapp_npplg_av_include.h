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
 *  vapp_npplg_av_include.h
 *
 * Project:
 * --------
 *  Cosmos
 *
 * Description:
 * ------------
 *  This is header file for NPPlg Cosmos part.
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
#ifndef __VAPP_NPPLG_AV_INCLUDE_H__
#define __VAPP_NPPLG_AV_INCLUDE_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "MMI_features.h"
#include "MMIDataType.h"
#include "gdi_include.h"

#ifdef __MMI_VIDEO_PLAY_SUPPORT__
gdi_handle vapp_npplg_av_video_create_vdo_layer(U8 app_id, U32 instance_id, S32 x, S32 y, S32 w, S32 h, gdi_color transparent_color);
void vapp_npplg_av_video_free_vdo_layer(U8 app_id, U32 instance_id);
U32 vapp_npplg_av_video_get_display_layer_flag(void);
U32 vapp_npplg_av_video_get_hw_layer_flag(void);
void vapp_npplg_av_video_update_vdo_layer(U8 app_id, U32 instance_id, S32 x, S32 y, S32 w, S32 h, gdi_color transparent_color);
gdi_handle vapp_npplg_av_video_get_vdo_layer_handle(void);
void vapp_npplg_av_video_unprepare_vdo_layer(U8 app_id, U32 instance_id);
void vapp_npplg_av_video_prepare_vdo_layer(U8 app_id, U32 instance_id, S32 x, S32 y, S32 w, S32 h, gdi_color transparent_color);
#endif /* __MMI_VIDEO_PLAY_SUPPORT__ */

#ifdef __cplusplus
}
#endif

#endif /* __VAPP_NPPLG_AV_INCLUDE_H__ */
