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
 *  vapp_launcher_mre_factory.cpp
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  This file implements the MRE factory of the launcher.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "MMI_features.h"

#if defined(__MMI_VUI_LAUNCHER_MRE__)

/*****************************************************************************
 * Include
 *****************************************************************************/

extern "C"
{
#include "MREAppMgrSrvGprot.h"
#include "SafeModeSrvGprot.h"
}

#include "vfx_uc_include.h"
#include "vapp_launcher_def.h"
#include "vapp_launcher_mre.h"
#include "vapp_launcher_mre_factory.h"
#include "vapp_launcher_kit.h"


/*****************************************************************************
 * MRE Launcher Factory
 *****************************************************************************/

VAPP_LAUNCHER_SYS_PUBLISH_FACTORY(
    VappLauncherMreFactory,
    VappLauncherMreFactoryPublisher);

VAPP_LAUNCHER_FACTORY_IMPLEMENT_CLASS(VappLauncherMreFactory);


VappLauncherMreFactory::VappLauncherMreFactory()
{
    // Do nothing.
}


VfxS32 VappLauncherMreFactory::getTotalNum() const
{
    if (srv_safe_mode_is_active())
    {
        return 0;
    }

    return srv_mre_appmgr_get_app_num(
            SRV_APPMGR_INSTALLED_LAUNCHER_PACKAGE_FLAG_TYPE);
}


VfxS32 VappLauncherMreFactory::getAllId(VappLauncherId **id, VfxS32 size) const
{
    if (srv_safe_mode_is_active())
    {
        return 0;
    }

    VfxS32 totalNum = getTotalNum();

    if (!id || size < totalNum || totalNum <= 0)
    {
        return 0; // Fail. Cannot get the IDs.
    }

    mmi_app_package_name_struct *package;

    VFX_SYS_ALLOC_MEM(package, totalNum * sizeof(mmi_app_package_name_struct));

    mmi_ret ret = srv_mre_appmgr_get_app_list(
                    SRV_APPMGR_INSTALLED_LAUNCHER_PACKAGE_FLAG_TYPE,
                    package,
                    totalNum);

    VFX_ASSERT(ret == MMI_RET_OK);

    for (VfxS32 i = 0; i < totalNum; i++)
    {
        id[i]->assignWith(VAPP_LAUNCHER_SRC_MRE, package[i]);
    }

    VFX_SYS_FREE_MEM(package);

    return totalNum;
}


VappLauncher *VappLauncherMreFactory::createLauncher(
    const VappLauncherId &id,
    VfxObject *parentObj)
{
    if (srv_safe_mode_is_active() ||
        id.getSource() != VAPP_LAUNCHER_SRC_MRE ||
        id.getTypeKind() != VappLauncherId::TYPE_KIND_STRING)
    {
        return NULL;
    }

    VappLauncherMre *launcher;

    VFX_OBJ_CREATE(launcher, VappLauncherMre, parentObj);

    launcher->setId(id);

    return launcher;
}

#endif /* defined(__MMI_VUI_LAUNCHER_MRE__) */

