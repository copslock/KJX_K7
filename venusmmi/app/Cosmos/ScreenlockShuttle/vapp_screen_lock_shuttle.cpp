/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/*******************************************************************************
 * Filename:
 * ---------
 *  vapp_screen_lock_shuttle.cpp
 *
 * Project:
 * --------
 *  Venus
 *
 * Description:
 * ------------
 *  Quick Launch Screen Lock app
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "MMI_features.h" 

/***************************************************************************** 
 * Include
 *****************************************************************************/
#include "vapp_setting_launcher_scr_lock_gprot.h"
#include "vapp_screen_lock_shuttle.h"
#include "mmi_rp_vapp_screen_lock_shuttle_def.h"


/***************************************************************************** 
 * Define
 *****************************************************************************/ 

/***************************************************************************** 
 * Typedef
 *****************************************************************************/

/***************************************************************************** 
 * Global Variable
 *****************************************************************************/

/***************************************************************************** 
 * Function
 *****************************************************************************/

extern "C" void vapp_screen_lock_shuttle_launch(void)
{
    mmi_id shuttle_id = VfxAppLauncher::launch( 
        VAPP_SCREEN_LOCK_SHUTTLE,
        VFX_OBJ_CLASS_INFO(VappScreenLockShuttle),
        GRP_ID_ROOT);
}


extern "C" mmi_ret vapp_screen_lock_shuttle_proc(mmi_event_struct* param)
{
    return MMI_RET_DONT_CARE;
}


VFX_IMPLEMENT_CLASS("VappScreenLockShuttle", VappScreenLockShuttle, VfxApp);

void VappScreenLockShuttle::onRun(void * args, VfxU32 argSize)
{
    mmi_id cui_id = vapp_scr_lock_setting_launch(VAPP_SCREEN_LOCK_SHUTTLE);
    vapp_dlui_setting_run(cui_id);

}


void VappScreenLockShuttle::onDeinit()
{
    VfxApp::onDeinit();
}
