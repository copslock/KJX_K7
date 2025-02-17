/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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
 *  vapp_screen_lock_hello_world.res
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  This file defines the launcher resources. Note that this file is for the
 *  launcher framework. Don't populate the resource of each individual launcher
 *  here. 
 *
 * Author:
 * -------
 *  Cheng-Hung Ko (mtk01585)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 02 27 2012 kavin.ma
 * [MAUI_03136373] Screen Lock Zipper Setting Screenshot
 * .
 *
 * 02 20 2012 kavin.ma
 * [MAUI_03133666] screen lock zipper
 * .
 *
 * 01 04 2012 ch.ko
 * [MAUI_03105491] [Cosmos 2.0] Check-in launcher framework
 * Wrap codes with compile options.
 *
 * 01 02 2012 ch.ko
 * [MAUI_03105491] [Cosmos 2.0] Check-in launcher framework
 * Check-in patch for launcher and screen lock factory.
 *
 * 12 26 2011 ch.ko
 * [MAUI_03105491] [Cosmos 2.0] Check-in launcher framework
 * Check-in patch.
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "MMI_features.h"

#if defined(__MMI_VUI_SCREEN_LOCK_FACTORY__)

/*****************************************************************************
 * Include
 *****************************************************************************/

#include "CustResDef.h"


/*****************************************************************************
 * XML
 *****************************************************************************/

<?xml version="1.0" encoding="UTF-8"?>

<APP id="VAPP_SCREEN_LOCK_ZIPPER">

	#ifdef __MMI_VUI_SCREEN_LOCK_ZIPPER__
    <!-- System Resource Area -------------------------------------------------->


    <!-- String Resource Area-------------------------------------------------->
	<STRING id="STR_ID_VAPP_SCREEN_LOCK_ZIPPER_SETTING_NAME"/>

    <!-- Image Resource Area--------------------------------------------------->
    #define ROOT_PATH RES_THEME_ROOT"\\\\Default\\\\ScreenLock\\\\\ScreenLockZipper\\\\"
	<IMAGE id="IMG_ID_VAPP_SCREEN_LOCK_ZIPPER_SETTING_ICON">ROOT_PATH"bfd.png"</IMAGE>
	<IMAGE id="IMG_ID_VAPP_SCREEN_LOCK_ZIPPER_SETTING_SNAPSHOT">ROOT_PATH"screenshot.jpg"</IMAGE>
	<IMAGE id="IMG_ID_VAPP_SCREEN_LOCK_ZIPPER_LEFT">ROOT_PATH"zipper_left.png"</IMAGE>
	<IMAGE id="IMG_ID_VAPP_SCREEN_LOCK_ZIPPER_RIGHT">ROOT_PATH"zipper_right.png"</IMAGE>
	<IMAGE id="IMG_ID_VAPP_SCREEN_LOCK_ZIPPER_BFD">ROOT_PATH"bfd.png"</IMAGE>
	<IMAGE id="IMG_ID_VAPP_SCREEN_LOCK_ZIPPER_FULL_LOCKED">ROOT_PATH"lock.jpg"</IMAGE>
	<IMAGE id="IMG_ID_VAPP_SCREEN_LOCK_ZIPPER_STATUS_BAR_BG">ROOT_PATH"StatusBar_BG.9slice.png"</IMAGE>


    <!-- Event Area (Sender) -------------------------------------------------->


    <!-- Event Area (Receiver) ------------------------------------------------>

    <RECEIVER id="EVT_ID_VAPP_SCREEN_LOCK_SYS_INIT" proc="VappScreenLockZipperPublisher"/>
    #endif /* ifdef __MMI_VUI_SCREEN_LOCK_ZIPPER__ */

</APP>

#endif /* defined(__MMI_VUI_SCREEN_LOCK_FACTORY__) */


