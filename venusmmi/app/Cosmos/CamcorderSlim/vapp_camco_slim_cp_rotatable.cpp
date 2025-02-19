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

#include "vapp_camco_slim_cp_rotatable.h"

#pragma arm section code = "DYNAMIC_CODE_CAMCO_ROCODE", rodata = "DYNAMIC_CODE_CAMCO_RODATA"

#ifdef __VAPP_CAMCO_SLIM__

void VappCamcoCpRotatableFrame::onInit(void)
{
    VfxFrame::onInit();
    setFuzzy(VFX_TRUE);
}

void VappCamcoCpRotatableFrame::initProperty(VfxResId Id)
{
    setAnchor(0.5, 0.5);
    setContentPlacement(VFX_FRAME_CONTENT_PLACEMENT_TYPE_RESIZE);
    setImgContent(VfxImageSrc(Id));
    setIsUnhittable(VFX_TRUE);
}

void VappCamcoCpRotatableButton::onInit(void)
{
    VcpButton::onInit();
    setFuzzy(VFX_TRUE);
}

void VappCamcoCpRotatableButton::initProperty(VfxResId Id)
{
    VcpStateImage SI = VcpStateImage(Id,Id,Id,Id);
    setAnchor(0.5, 0.5);
    setImage(SI);
    setSize(SI.getImageNormal().getSize().width, SI.getImageNormal().getSize().height);
    setAutoAnimate(VFX_FALSE);
}

void VappCamcoCpRotatableImageButton::onInit(void)
{
    VcpImageButton::onInit();
    setFuzzy(VFX_TRUE);
}

void VappCamcoCpRotatableImageButton::initProperty(VfxResId Id)
{
    VcpStateImage SI = VcpStateImage(Id,Id,Id,Id);
    setAnchor(0.5, 0.5);
    setImage(SI);
    setSize(SI.getImageNormal().getSize().width, SI.getImageNormal().getSize().height);
    setAutoAnimate(VFX_FALSE);
    setIsEffect(VFX_TRUE);
    setEffectSize(VfxSize(getSize()));
}

void VappCamcoCpRotatableImageFrame::onInit(void)
{
    VfxImageFrame::onInit();
    setFuzzy(VFX_TRUE);
}

void VappCamcoCpRotatableImageFrame::initProperty(VfxResId Id)
{
    setAnchor(0.5, 0.5);
    setAutoAnimate(VFX_FALSE);
    setResId(Id);
}

void VappCamcoCpRotatableTextFrame::onInit(void)
{
    VfxTextFrame::onInit();
    setFuzzy(VFX_TRUE);
}

void VappCamcoCpRotatableTextFrame::initProperty(VfxFontDesc font)
{
    setFont(font);
    setAnchor(0.5, 0.5);
    setAutoAnimate(VFX_FALSE);
    setColor(VFX_COLOR_WHITE);
    setOpacity(0.8);
}
#pragma arm section code, rodata

#endif /*__VAPP_CAMCO_SLIM__*/
