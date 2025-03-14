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
 *  vapp_setting_wallpaper_setting_gprot.h
 *
 * Project:
 * --------
 *  Venus
 *
 * Description:
 * ------------
 *  
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
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __VAPP_SETTING_WALLPAPER_SETTING_GPROT_H__
#define __VAPP_SETTING_WALLPAPER_SETTING_GPROT_H__

/***************************************************************************** 
 * Include
 *****************************************************************************/
#include "mmi_features.h"
#include "vfx_mc_include.h"
#include "vcp_include.h"

/***************************************************************************** 
 * Typedef
 *****************************************************************************/
extern void vapp_setting_home_screen_wallpaper_setting_launch(VfxMainScr *mainScr);
extern void vapp_setting_lock_screen_wallpaper_setting_launch(VfxMainScr *mainScr);

/***************************************************************************** 
 * Class VappPowerOnAnimationSettingCell
 *****************************************************************************/
#ifdef __MMI_VUI_HOMESCREEN_VIDEO_WALLPAPER__ 
class VappPowerOnAnimationSettingCell : public VcpFormItemLauncherCell
{
    VFX_DECLARE_CLASS(VappPowerOnAnimationSettingCell);

    // Constructor
    public:
        VappPowerOnAnimationSettingCell();
    
    // Override
    protected:
        virtual void onInit();
    
    // Methods
    private:
        void onTap(VcpFormItemCell* sender, VfxId senderId);
};
/***************************************************************************** 
 * Class VappPowerOnAnimationSettingCell
 *****************************************************************************/
class VappPowerOffAnimationSettingCell : public VcpFormItemLauncherCell
{
    VFX_DECLARE_CLASS(VappPowerOffAnimationSettingCell);

    // Constructor
    public:
        VappPowerOffAnimationSettingCell();
    
    // Override
    protected:
        virtual void onInit();
    
    // Methods
    private:
        void onTap(VcpFormItemCell* sender, VfxId senderId);
};
#endif

/***************************************************************************** 
 * Class VappWallpaperIconCell
 *****************************************************************************/

class VappWallpaperIconCell : public VcpFormItemLauncherCell
{
    VFX_DECLARE_CLASS(VappWallpaperIconCell);
    
    protected:
#if defined(__MMI_MAINLCD_320X480__)
    enum
    {
        TEXT_LEFT_GAPS   = 0,
        TEXT_RIGHT_GAPS  = 10,
        IMG_LEFT_GAPS    = 3,
        IMG_RIGHT_GAPS   = 3,
        IMG_MAX_WIDTH    = 45,
        // Add for setting framework cell
        IMG_MAX_HEIGHT    = 45,        
        ACCESSORY_WIDTH  = 30,
        ACCESSORY_RIGHT_GAPS = 8
    };
#elif defined(__MMI_MAINLCD_480X800__)
    enum
    {
        TEXT_LEFT_GAPS   = 0,
        TEXT_RIGHT_GAPS  = 18,
        IMG_LEFT_GAPS    = 7,
        IMG_RIGHT_GAPS   = 7,
        IMG_MAX_WIDTH    = 72,
        // Add for setting framework cell
        IMG_MAX_HEIGHT    = 72,        
        ACCESSORY_WIDTH  = 30,
        ACCESSORY_RIGHT_GAPS = 8        
    };
#else
    enum
{
        TEXT_LEFT_GAPS   = 0,
        TEXT_RIGHT_GAPS  = 8,
        IMG_LEFT_GAPS    = 3,
        IMG_RIGHT_GAPS   = 3,
        IMG_MAX_WIDTH    = 35,
        // Add for setting framework cell        
        IMG_MAX_HEIGHT    = 35,
        ACCESSORY_WIDTH  = 30,
        ACCESSORY_RIGHT_GAPS = 8        
    };
#endif       

    // Overrides
    public:
    virtual void onInit();
    void setIconSrc(VfxImageSrc imageSrc);
    virtual void onUpdate();
    // Variables
    private:
    VfxImageFrame *m_imageFrame;
};

class VappWallpaperHomeScreenCell : public VappWallpaperIconCell
{
    VFX_DECLARE_CLASS(VappWallpaperHomeScreenCell);
    // Overrides
    protected:
    virtual void onInit();

    virtual VfxImageSrc getItemImage(U8 type);
    virtual void onDeinit();

    // Methods
    public:
    VappWallpaperHomeScreenCell();
    virtual void updateCell();
    virtual void onTap(VcpFormItemCell *cell, VfxId selectIdx);
    virtual const VfxImageSrc getThumbnail(const VfxWString& userFile, VfxBool isVideo = VFX_TRUE);
    // Variables
    protected:
    U8 m_type;
    VfxWString m_userVideoFile;
    VfxImageSrc m_userVideoThumb;
    U8* m_recThumbBuffer;
    //const U32 m_iconBufSize;
    mmi_id m_appGroupId;
};

class VappWallpaperLockScreenCell : public VappWallpaperHomeScreenCell
{
    VFX_DECLARE_CLASS(VappWallpaperLockScreenCell);
    // Overrides
    protected:
    virtual void onInit();
};
#endif /* __VAPP_SETTING_WALLPAPER_SETTING_GPROT_H__ */
 
