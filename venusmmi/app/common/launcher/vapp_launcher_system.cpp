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
 *  vapp_launcher_system.cpp
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  This file implements the parts related to the launcher system, e.g., the
 *  initialization, deinitialization, event handling, and etc.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "MMI_features.h"

#if defined(__MMI_VUI_LAUNCHER_FACTORY__)

/*****************************************************************************
 * Include
 *****************************************************************************/

extern "C"
{
#include "mmi_frm_events_gprot.h"
#include "mmi_cb_mgr_gprot.h"
}

#include "vfx_datatype.h"
#include "vapp_launcher_def.h"
#include "vapp_launcher_primitive.h"
#include "vapp_launcher_kit.h"
#include "vapp_launcher_setting_provider.h"
#include "vapp_launcher_system.h"
#include "vapp_launcher_mre.h"
#include "mmi_rp_vapp_launcher_system_def.h"


/*****************************************************************************
 * Function
 *****************************************************************************/

/* Please refer to vapp_launcher_system.h. */
void vapp_launcher_sys_init(void)
{
    static VfxBool s_isInitialized = VFX_FALSE;

    if (!s_isInitialized)
    {
        vapp_launcher_sys_init_evt_struct evt;

        MMI_FRM_INIT_EVENT(&evt, EVT_ID_VAPP_LAUNCHER_SYS_INIT);
        MMI_FRM_CB_EMIT_EVENT(&evt);
        s_isInitialized = VFX_TRUE;

    #if defined(__MMI_VUI_LAUNCHER_MRE__) && defined(__MMI_VUI_DOWNLOADABLE_APP_ICON__)
        vapp_launcher_mre_activate_dlt_app_icon_mgr();
    #endif
    }
}


/* Please refer to vapp_launcher_system.h. */
MMI_BOOL vapp_launcher_activate_by_vm(CHAR *packageName)
{
#if !defined(__MMI_VUI_LAUNCHER_MRE__)
    return MMI_FALSE;
#else
    VappLauncherId id(VAPP_LAUNCHER_SRC_MRE, packageName);

    //
    // Check if ID is valid.
    //
    VappLauncherKit *kit;
    kit = VFX_OBJ_GET_INSTANCE(VappLauncherKit);

    if (!kit->isIdValid(id))
    {
        return MMI_FALSE;
    }

    //
    // Activate.
    //
    VappLauncherSettingProvider *provider;
    provider = VFX_OBJ_GET_INSTANCE(VappLauncherSettingProvider);
    provider->updateDefaultLauncher(id);

    return MMI_TRUE;
#endif /* !defined(__MMI_VUI_LAUNCHER_MRE__) */
}


/* Please refer to vapp_launcher_system.h. */
MMI_BOOL vapp_launcher_mre_is_activated(CHAR *packageName)
{
#if !defined(__MMI_VUI_LAUNCHER_MRE__)
    return MMI_FALSE;
#else
    VappLauncherSettingProvider *provider;
    provider = VFX_OBJ_GET_INSTANCE(VappLauncherSettingProvider);

    VappLauncherId id(VAPP_LAUNCHER_SRC_MRE, packageName);
    VappLauncherId defaultId = provider->getDefaultLauncher();

    return defaultId == id ? MMI_TRUE : MMI_FALSE;
#endif /* !defined(__MMI_VUI_LAUNCHER_MRE__) */
}

#endif /* defined(__MMI_VUI_LAUNCHER_FACTORY__) */

