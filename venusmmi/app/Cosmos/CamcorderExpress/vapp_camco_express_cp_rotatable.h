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
*  LAWS PRINCIPLES. ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
#ifndef __VAPP_CAMCO_EXPRESS_ROTATABLE_MENU__
#define __VAPP_CAMCO_EXPRESS_ROTATABLE_MENU__

#include "vadp_mmi_frm.h"
#include "vfx_uc_include.h"
#include "vcp_app_scr.h"
#include "vcp_wheel_menu.h"
#include "vtst_rt_main.h"
#include "vcp_include.h"
#include "ui_core\base\vfx_basic_type.h"
#include "MMI_include.h"
#include "mmi_features_camcorder.h"

#ifdef __VAPP_CAMCO_EXPRESS__

#include "mmi_rp_vapp_camco_def.h"
#include "vapp_camco_express_osd.h"

class VappCamcoCpRotatableFrame : public VfxFrame
{
public:
    virtual void onInit(void);
    void initProperty(VfxResId Id);
};

class VappCamcoCpRotatableButton : public VcpButton
{
public:
    virtual void onInit(void);
    void initProperty(VfxResId Id);
};

class VappCamcoCpRotatableImageButton : public VcpImageButton
{
public:
    virtual void onInit(void);
    void initProperty(VfxResId Id);
};

class VappCamcoCpRotatableImageFrame : public VfxImageFrame
{
public:
    virtual void onInit(void);
    void initProperty(VfxResId Id);
};

class VappCamcoCpRotatableTextFrame : public VfxTextFrame
{
public:
    virtual void onInit(void);
    void initProperty(VfxFontDesc font);
};

#endif /*__VAPP_CAMCO_EXPRESS__*/
#endif /*__VAPP_CAMCO_EXPRESS_ROTATABLE_MENU__*/
