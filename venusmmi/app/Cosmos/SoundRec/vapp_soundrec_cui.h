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
 *  vapp_soundrec_cui.h
 *
 * Project:
 * --------
 *  Cosmos
 *
 * Description:
 * ------------
 *  
 *
 * Author:
 * -------
 *  
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __VAPP_SOUNDREC_CUI_H__
#define __VAPP_SOUNDREC_CUI_H__

#include "MMI_features.h" 

/***************************************************************************** 
 * Include
 *****************************************************************************/
#ifdef __MMI_SOUNDREC_CUI__

#include "vfx_mc_include.h"
#include "vcp_include.h"

#include "vcp_Form.h"
#include "vcp_list_menu.h"

#ifdef __cplusplus
extern "C"
{
#endif
#include "vcui_soundrec_gprot.h"
#include "FileMgrSrvGProt.h"
#ifdef __cplusplus
}
#endif

/***************************************************************************** 
 * Define
 *****************************************************************************/

/***************************************************************************** 
 * Typedef
 *****************************************************************************/
typedef enum
{
    VCUI_SNDREC_PARAM_SIZE,
    VCUI_SNDREC_PARAM_TIME,
    VCUI_SNDREC_PARAM_QUALITY,    
    VCUI_SNDREC_PARAM_PAGE_MODE
}vcui_sndrec_param_enum;

/***************************************************************************** 
 * Class 
 *****************************************************************************/

/***************************************************************************** 
 * Class VcuiSoundRecorderScreen
 *****************************************************************************/
class VcuiSoundRecorderScreen : public VfxMainScr
{
    VFX_DECLARE_CLASS(VcuiSoundRecorderScreen);

// Override
public:

    virtual void on1stReady();
    void notifyTopPage(mmi_event_struct *evt);
};

/***************************************************************************** 
 * Class VcuiSoundRecorder
 *****************************************************************************/
class VcuiSoundRecorder : public VfxCui
{
    VFX_DECLARE_CLASS(VcuiSoundRecorder);

public:
    VcuiSoundRecorder() :
    m_record_time(0),
    m_record_size(0),
    m_record_quality(VCUI_SOUNDREC_QUALITY_BY_SETTING),    
    m_param(0)
    {}

    virtual void onRun(void* args, VfxU32 argSize);
    virtual void onInit();
    
    virtual void onDeinit();
    void setParam(vcui_sndrec_param_enum param, VfxU32 value);
    VfxU32 getParam(vcui_sndrec_param_enum param);

    static mmi_ret eventHandler(mmi_event_struct *param);

private:
    VcuiSoundRecorderScreen *scr;

    VfxU32 m_record_time;
    VfxU32 m_record_size;
    VfxU32 m_record_quality;
    VfxU32 m_param;    
};

#endif

#endif /* __VAPP_SOUNDREC_CUI_H__ */

