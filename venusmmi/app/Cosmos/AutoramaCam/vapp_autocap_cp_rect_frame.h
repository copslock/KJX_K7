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

#include "vadp_mmi_frm.h"
#include "vfx_uc_include.h"
#include "vcp_app_scr.h"
#include "vcp_include.h"
#include "MMI_include.h"
#include "MMI_features.h"
#include "MMI_features_camcorder.h"

#if defined(__MMI_CAMCORDER__) && (defined(__MMI_CAMCO_FEATURE_CAM_AUTORAMA_SHOT__) || defined(__MMI_CAMCO_FEATURE_CAM_MULTI_ANGLE_VIEW_SHOT__))

#include "Mmi_rp_vapp_autocap_common_def.h"

typedef enum
{
    VAPP_AUTOCAP_CP_RECT_MODE_NORMAL = 0,
    VAPP_AUTOCAP_CP_RECT_MODE_SUCCESS = 1,
    VAPP_AUTOCAP_CP_RECT_MODE_FAIL = 2,        
    VAPP_AUTOCAP_CP_RECT_MODE_END
    
}vapp_autocap_cp_rect_mode_enum;

typedef enum
{
    VAPP_AUTOCAP_CP_RECT_TYPE_FD = 0,
    VAPP_AUTOCAP_CP_RECT_TYPE_SD = 1,
    VAPP_AUTOCAP_CP_RECT_TYPE_AF = 2,        
    VAPP_AUTOCAP_CP_RECT_TYPE_END
    
}vapp_autocap_cp_rect_type_enum;

class VappAutoCapCpRect : public VfxControl
{

public:
    VappAutoCapCpRect(){}   
    virtual ~VappAutoCapCpRect(){}
    
    virtual void onInit();

    void setSize(VfxS32 width, VfxS32 height);
    void setMode(vapp_autocap_cp_rect_type_enum type, vapp_autocap_cp_rect_mode_enum mode);    

    void updateLayout(void);

private:
    vapp_autocap_cp_rect_mode_enum            m_mode;
    vapp_autocap_cp_rect_type_enum            m_type;    
    VfxImageFrame                          *m_leftTop;
    VfxImageFrame                          *m_rightTop;
    VfxImageFrame                          *m_leftToe;
    VfxImageFrame                          *m_rightToe;    
    
};    

#endif
