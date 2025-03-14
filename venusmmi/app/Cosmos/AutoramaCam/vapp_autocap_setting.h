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

#ifndef __VAPP_AUTOCAP_SETTING__
#define __VAPP_AUTOCAP_SETTING__

#ifdef __cplusplus
extern "C"
{
#endif
#include "MMI_include.h"

#include "MMI_features_camcorder.h"
#include "mdi_datatype.h"
#include "mdi_camera.h"
#include "mdi_video.h"

#ifdef __cplusplus
}
#endif

#if defined(__MMI_CAMCORDER__) && (defined(__MMI_CAMCO_FEATURE_CAM_AUTORAMA_SHOT__) || defined(__MMI_CAMCO_FEATURE_CAM_MULTI_ANGLE_VIEW_SHOT__))

#include "Mmi_rp_vapp_autocap_common_def.h"
#include "FileMgrGProt.h"
#include "FileManagerResDef.h"

/****************************************************************************
 * Define
 ****************************************************************************/
#define VAPP_AUTOCAP_SETTING_NULL              (0xff)
#define VAPP_AUTOCAP_MAX_SETTING_ITEM_COUNT    (25)        /* this value currently is bound by effect */
typedef mdi_camera_fun_info vapp_autocap_cap_info;
typedef mdi_camera_zoom_info vapp_autocap_zoom_info;

/****************************************************************************
 * Enum 
 ****************************************************************************/

typedef enum
{
    VAPP_AUTOCAP_SETTING_DUMMY,           // 0
    VAPP_AUTOCAP_SETTING_CAPMODE,         // 1
    VAPP_AUTOCAP_SETTING_CAMSCENEMODE,    // 2
    VAPP_AUTOCAP_SETTING_CAPSIZE,         // 3
    VAPP_AUTOCAP_SETTING_HIGHLIGHT,       // 4
    VAPP_AUTOCAP_SETTING_AFRANGE,         // 5
    VAPP_AUTOCAP_SETTING_ISO,             // 6
    VAPP_AUTOCAP_SETTING_WB,              // 7
    VAPP_AUTOCAP_SETTING_EFFECT,          // 8
    VAPP_AUTOCAP_SETTING_CAMSTORAGE,      // 9
    VAPP_AUTOCAP_SETTING_CAPQTY,          // 10
    VAPP_AUTOCAP_SETTING_AFZONE,          // 11    
    VAPP_AUTOCAP_SETTING_AEMETER,         // 12    
    VAPP_AUTOCAP_SETTING_SHARPNESS,       // 13    
    VAPP_AUTOCAP_SETTING_CONTRAST,        // 14
    VAPP_AUTOCAP_SETTING_SATURATION,      // 15
    VAPP_AUTOCAP_SETTING_SHUTTERSOUND,    // 16
    VAPP_AUTOCAP_SETTING_BANDING,         // 17
    VAPP_AUTOCAP_SETTING_CAMEV,           // 18
    VAPP_AUTOCAP_SETTING_CAMZOOM,         // 19
    VAPP_AUTOCAP_SETTING_MISC,            // 20
    VAPP_AUTOCAP_SETTING_RESTOREDEFAULT,  // 21
    VAPP_AUTOCAP_SETTING_ACT_CAM,         // 22
    VAPP_AUTOCAP_SETTING_PANORAMA_DIRECTION,//23   
    VAPP_AUTOCAP_SETTING_END
} vapp_autocap_setting_enum;

/* isp */
typedef enum
{
    VAPP_AUTOCAP_SENSOR_MAIN_CAMERA,
    VAPP_AUTOCAP_SENSOR_SUB_CAMERA,

    VAPP_AUTOCAP_SENSOR_END
} vapp_autocap_sensor_enum;

/* app */
typedef enum
{
    VAPP_AUTOCAP_APP_CAMERA,
    VAPP_AUTOCAP_APP_RECORDER,

    VAPP_AUTOCAP_APP_END
} vapp_autocap_app_enum;

/* camera switch to */
typedef enum
{
    VAPP_AUTOCAP_CAMSWITCHTO_VIDEO_RECORDER,
    VAPP_AUTOCAP_CAMSWITCHTO_SUBLCD_CAPTURE,
    VAPP_AUTOCAP_CAMSWITCHTO_MAIN_CAMERA,
    VAPP_AUTOCAP_CAMSWITCHTO_SUB_CAMERA,

    VAPP_AUTOCAP_CAMSWITCHTO_END
} vapp_autocap_camswitchto_enum;

/* capture mode */
typedef enum
{
    VAPP_AUTOCAP_CAPMODE_PANORAMA,

    VAPP_AUTOCAP_CAPMODE_END
} vapp_autocap_capmode_enum;

/* panorama direction */
typedef enum
{
    VAPP_AUTOCAP_PANORAMA_DIRECTION_UP,
    VAPP_AUTOCAP_PANORAMA_DIRECTION_DOWN,
    VAPP_AUTOCAP_PANORAMA_DIRECTION_LEFT,
    VAPP_AUTOCAP_PANORAMA_DIRECTION_RIGHT,

    VAPP_AUTOCAP_PANORAMA_DIRECTION_END
} vapp_autocap_panorama_direction_enum;

typedef enum
{
    VAPP_AUTOCAP_AUXILIRY_ON,
    VAPP_AUTOCAP_AUXILIRY_OFF,

    VAPP_AUTOCAP_AUXILIRY_END
} vapp_autocap_auxiliary_enum;

typedef enum
{
    VAPP_AUTOCAP_ADDFRAME_FRAME0,
    VAPP_AUTOCAP_ADDFRAME_FRAME1,
    VAPP_AUTOCAP_ADDFRAME_FRAME2,
    VAPP_AUTOCAP_ADDFRAME_FRAME3,
    VAPP_AUTOCAP_ADDFRAME_FRAME4,
    VAPP_AUTOCAP_ADDFRAME_FRAME5,
    VAPP_AUTOCAP_ADDFRAME_FRAME6,
    VAPP_AUTOCAP_ADDFRAME_FRAME7,
    VAPP_AUTOCAP_ADDFRAME_FRAME8,
    VAPP_AUTOCAP_ADDFRAME_FRAME9,
    
    VAPP_AUTOCAP_ADDFRAME_END    
} vapp_autocap_addframe_frame_enum;


/* camera scene mode */
typedef enum
{
    VAPP_AUTOCAP_CAMSCENEMODE_NIGHT,
    VAPP_AUTOCAP_CAMSCENEMODE_SPORT,
    VAPP_AUTOCAP_CAMSCENEMODE_AUTO,
    VAPP_AUTOCAP_CAMSCENEMODE_PORTRAIT,
    VAPP_AUTOCAP_CAMSCENEMODE_LANDSCAPE,    
    VAPP_AUTOCAP_CAMSCENEMODE_DOCUMENT,
    VAPP_AUTOCAP_CAMSCENEMODE_ANTI_SHAKE,

    VAPP_AUTOCAP_CAMSCENEMODE_END
} vapp_autocap_camscenemode_enum;

/* capture size */
typedef enum
{
    VAPP_AUTOCAP_CAPSIZE_WALLPAPER,
    VAPP_AUTOCAP_CAPSIZE_HLCD,
    VAPP_AUTOCAP_CAPSIZE_VGA,
    VAPP_AUTOCAP_CAPSIZE_1MP,
    VAPP_AUTOCAP_CAPSIZE_2MP,
    VAPP_AUTOCAP_CAPSIZE_3MP,
    VAPP_AUTOCAP_CAPSIZE_4MP,
    VAPP_AUTOCAP_CAPSIZE_5MP,

    VAPP_AUTOCAP_CAPSIZE_END
} vapp_autocap_capsize_enum;

/* flash */
typedef enum
{
    VAPP_AUTOCAP_FLASH_FORCE_ON,
    VAPP_AUTOCAP_FLASH_OFF,        
    VAPP_AUTOCAP_FLASH_AUTO,    
    VAPP_AUTOCAP_FLASH_RED_EYE,

    VAPP_AUTOCAP_FLASH_END
} vapp_autocap_flash_enum;

/* highlight */
typedef enum
{
    VAPP_AUTOCAP_HIGHLIGHT_OFF,
    VAPP_AUTOCAP_HIGHLIGHT_ON,

    VAPP_AUTOCAP_HIGHLIGHT_END
} vapp_autocap_highlight_enum;

/* af range */
typedef enum
{
    VAPP_AUTOCAP_AFRANGE_AUTO,
    VAPP_AUTOCAP_AFRANGE_MACRO,
    VAPP_AUTOCAP_AFRANGE_INFINTE,

    VAPP_AUTOCAP_AFRANGE_END
} vapp_autocap_afrange_enum;

/* capture quality */
typedef enum
{
    VAPP_AUTOCAP_CAPQTY_FINE,
    VAPP_AUTOCAP_CAPQTY_GOOD,
    VAPP_AUTOCAP_CAPQTY_NORMAL,
    VAPP_AUTOCAP_CAPQTY_LOW,    

    VAPP_AUTOCAP_CAPQTY_END
} vapp_autocap_capqty_enum;

/* af zone */
typedef enum
{
    VAPP_AUTOCAP_AFZONE_SINGLE,
    VAPP_AUTOCAP_AFZONE_MULTI,
    VAPP_AUTOCAP_AFZONE_CONTINUE,

    VAPP_AUTOCAP_AFZONE_END
} vapp_autocap_afzone_enum;

/* iso */
typedef enum
{
    
    VAPP_AUTOCAP_ISO_AUTO = MDI_CAMERA_ISO_AUTO,
    VAPP_AUTOCAP_ISO_100 = MDI_CAMERA_ISO_100,
    VAPP_AUTOCAP_ISO_200 = MDI_CAMERA_ISO_200,
    VAPP_AUTOCAP_ISO_400 = MDI_CAMERA_ISO_400,
    VAPP_AUTOCAP_ISO_800 = MDI_CAMERA_ISO_800,
    VAPP_AUTOCAP_ISO_1600 = MDI_CAMERA_ISO_1600,

    VAPP_AUTOCAP_ISO_END
} vapp_autocap_iso_enum;

/* sharpness */
typedef enum
{
    VAPP_AUTOCAP_SHARPNESS_ENHANCE,
    VAPP_AUTOCAP_SHARPNESS_NORMAL,
    VAPP_AUTOCAP_SHARPNESS_REDUCE,

    VAPP_AUTOCAP_SHARPNESS_END
} vapp_autocap_sharpness_enum;

/* contrast */
typedef enum
{
    VAPP_AUTOCAP_CONTRAST_ENHANCE,
    VAPP_AUTOCAP_CONTRAST_NORMAL,
    VAPP_AUTOCAP_CONTRAST_REDUCE,

    VAPP_AUTOCAP_CONTRAST_END
} vapp_autocap_contrast_enum;

/* saturation */
typedef enum
{
    VAPP_AUTOCAP_SATURATION_ENHANCE,
    VAPP_AUTOCAP_SATURATION_NORMAL,
    VAPP_AUTOCAP_SATURATION_REDUCE,

    VAPP_AUTOCAP_SATURATION_END
} vapp_autocap_saturation_enum;

/* time stamp */
typedef enum
{
    VAPP_AUTOCAP_TIMESTAMP_OFF,
    VAPP_AUTOCAP_TIMESTAMP_ON,

    VAPP_AUTOCAP_TIMESTAMP_END
} vapp_autocap_timestamp_enum;

/* wb */
typedef enum
{
    VAPP_AUTOCAP_WB_DAYLIGHT,
    VAPP_AUTOCAP_WB_TUNGSTEN,
    VAPP_AUTOCAP_WB_AUTO,
    VAPP_AUTOCAP_WB_FLUORESCENT,
    VAPP_AUTOCAP_WB_CLOUDY,
    VAPP_AUTOCAP_WB_INCANDESCENT,

    VAPP_AUTOCAP_WB_END
} vapp_autocap_wb_enum;

/* self-timer */
typedef enum
{
    VAPP_AUTOCAP_SELFTIMER_OFF,
    VAPP_AUTOCAP_SELFTIMER_5_SEC,
    VAPP_AUTOCAP_SELFTIMER_10_SEC,
    VAPP_AUTOCAP_SELFTIMER_15_SEC,

    VAPP_AUTOCAP_SELFTIMER_END
} vapp_autocap_selftimer_enum;

/* shutter sound */
typedef enum
{
    VAPP_AUTOCAP_SHUTTERSOUND_OFF,
    VAPP_AUTOCAP_SHUTTERSOUND_SOUND_1,
    VAPP_AUTOCAP_SHUTTERSOUND_SOUND_2,
    VAPP_AUTOCAP_SHUTTERSOUND_SOUND_3,

    VAPP_AUTOCAP_SHUTTERSOUND_END
} vapp_autocap_shuttersound_enum;

/* banding */
typedef enum
{
    VAPP_AUTOCAP_BANDING_50HZ,
    VAPP_AUTOCAP_BANDING_60HZ,

    VAPP_AUTOCAP_BANDING_END
} vapp_autocap_banding_enum;

/* effect */
typedef enum
{
    VAPP_AUTOCAP_EFFECT_NORMAL,
    VAPP_AUTOCAP_EFFECT_GRAYSCALE,
    VAPP_AUTOCAP_EFFECT_SEPIA,
    VAPP_AUTOCAP_EFFECT_SEPIA_GREEN,
    VAPP_AUTOCAP_EFFECT_SEPIA_BLUE,
    VAPP_AUTOCAP_EFFECT_COLOR_INVERT,
    VAPP_AUTOCAP_EFFECT_GRAY_INVERT,
    VAPP_AUTOCAP_EFFECT_BLACKBOARD,
    VAPP_AUTOCAP_EFFECT_WHITEBOARD,
    VAPP_AUTOCAP_EFFECT_COPPER_CARVING,
    VAPP_AUTOCAP_EFFECT_BLUE_CARVING,
    VAPP_AUTOCAP_EFFECT_EMBOSSMENT,
    VAPP_AUTOCAP_EFFECT_CONTRAST,
    VAPP_AUTOCAP_EFFECT_JEAN,
    VAPP_AUTOCAP_EFFECT_SKETCH,
    VAPP_AUTOCAP_EFFECT_OIL,

    VAPP_AUTOCAP_EFFECT_END
} vapp_autocap_effect_enum;

/* aemeter */
typedef enum
{
    VAPP_AUTOCAP_AEMETER_AUTO,
    VAPP_AUTOCAP_AEMETER_SPOT,
    VAPP_AUTOCAP_AEMETER_CENTER_WEIGHT,
    VAPP_AUTOCAP_AEMETER_AVERAGE,

    VAPP_AUTOCAP_AEMETER_END
} vapp_autocap_aemeter_enum;

/* storage */
typedef enum
{
    VAPP_AUTOCAP_STORAGE_END = SRV_FMGR_DRV_TOTAL
} vapp_autocap_storage_enum;

/* video switch to */
typedef enum
{
    VAPP_AUTOCAP_VDOSWITCHTO_CAMERA,
    VAPP_AUTOCAP_VDOSWITCHTO_MAIN_CAMERA,
    VAPP_AUTOCAP_VDOSWITCHTO_SUB_CAMERA,

    VAPP_AUTOCAP_VDOSWITCHTO_END
} vapp_autocap_vdoswitchto_enum;

/* video scene mode */
typedef enum
{
    VAPP_AUTOCAP_VDOSCENEMODE_AUTO,
    VAPP_AUTOCAP_VDOSCENEMODE_NIGHT,

    VAPP_AUTOCAP_VDOSCENEMODE_END
} vapp_autocap_vdoscenemode_enum;

/* record size */
typedef enum
{
    VAPP_AUTOCAP_RECSIZE_SQCIF,
    VAPP_AUTOCAP_RECSIZE_QQVGA,        
    VAPP_AUTOCAP_RECSIZE_QCIF,
    VAPP_AUTOCAP_RECSIZE_QVGA,
    VAPP_AUTOCAP_RECSIZE_CIF,
    VAPP_AUTOCAP_RECSIZE_WQVGA,       
    VAPP_AUTOCAP_RECSIZE_CIF2, 
    VAPP_AUTOCAP_RECSIZE_HVGA,           
    VAPP_AUTOCAP_RECSIZE_NHD,        
    VAPP_AUTOCAP_RECSIZE_VGA,
    VAPP_AUTOCAP_RECSIZE_D1,    
    VAPP_AUTOCAP_RECSIZE_D12,       
    VAPP_AUTOCAP_RECSIZE_WVGA,      
    VAPP_AUTOCAP_RECSIZE_SVGA,    
    VAPP_AUTOCAP_RECSIZE_WVGA2,          
    VAPP_AUTOCAP_RECSIZE_XGA,
    VAPP_AUTOCAP_RECSIZE_720P,
    VAPP_AUTOCAP_RECSIZE_4VGA,
    VAPP_AUTOCAP_RECSIZE_SXGA,
    VAPP_AUTOCAP_RECSIZE_16CIF,
    VAPP_AUTOCAP_RECSIZE_4SVGA,
    VAPP_AUTOCAP_RECSIZE_FHD,      
    VAPP_AUTOCAP_RECSIZE_END
} vapp_autocap_recsize_enum;

/* visual quality */
typedef enum
{
    VAPP_AUTOCAP_VISQTY_FINE,
    VAPP_AUTOCAP_VISQTY_GOOD,
    VAPP_AUTOCAP_VISQTY_NORMAL,
    VAPP_AUTOCAP_VISQTY_LOW,

    VAPP_AUTOCAP_VISQTY_END
} vapp_autocap_visqty_enum;

/* af mode */
typedef enum
{
    VAPP_AUTOCAP_AFMODE_OFF,
    VAPP_AUTOCAP_AFMODE_SINGLE,
    VAPP_AUTOCAP_AFMODE_CONT,

    VAPP_AUTOCAP_AFMODE_END
} vapp_autocap_afmode_enum;


/* limit */
typedef enum
{
    VAPP_AUTOCAP_LIMIT_NO_LIMIT,
    VAPP_AUTOCAP_LIMIT_TIME_15S,
    VAPP_AUTOCAP_LIMIT_TIME_30S,
    VAPP_AUTOCAP_LIMIT_TIME_60S,
    VAPP_AUTOCAP_LIMIT_SIZE_95K,
    VAPP_AUTOCAP_LIMIT_SIZE_195K,
    VAPP_AUTOCAP_LIMIT_SIZE_295K,

    VAPP_AUTOCAP_LIMIT_END
} vapp_autocap_limit_enum;

/* visual codec format */
typedef enum
{
    VAPP_AUTOCAP_VISCODEC_MP4,
    VAPP_AUTOCAP_VISCODEC_3GP,
    VAPP_AUTOCAP_VISCODEC_MJPG,
    VAPP_AUTOCAP_VISCODEC_H264,    
    VAPP_AUTOCAP_VISCODEC_END
} vapp_autocap_viscodec_enum;

/* record aud */
typedef enum
{
    VAPP_AUTOCAP_RECAUD_OFF,
    VAPP_AUTOCAP_RECAUD_ON,

    VAPP_AUTOCAP_RECAUD_END
} vapp_autocap_recaud_enum;

/* misc */
typedef enum
{
    VAPP_AUTOCAP_MISC_END
} vapp_autocap_misc_enum;

/* ev */
typedef enum
{
    VAPP_AUTOCAP_EV_N4,
    VAPP_AUTOCAP_EV_N3,
    VAPP_AUTOCAP_EV_N2,
    VAPP_AUTOCAP_EV_N1,
    VAPP_AUTOCAP_EV_0,
    VAPP_AUTOCAP_EV_P1,
    VAPP_AUTOCAP_EV_P2,
    VAPP_AUTOCAP_EV_P3,
    VAPP_AUTOCAP_EV_P4,

    VAPP_AUTOCAP_EV_END
} vapp_autocap_ev_enum;

/* capability */
typedef enum
{
    VAPP_AUTOCAP_SETTING_CAP_ENABLED,
    VAPP_AUTOCAP_SETTING_CAP_DISABLED,         /* driver not support - disable all the time */
    VAPP_AUTOCAP_SETTING_CAP_DRV_NOT_SUPPORT,  /* driver not support - disable all the time */

    VAPP_AUTOCAP_SETTING_CAP_END
} vapp_autocap_setting_cap_enum;


typedef enum
{
    VAPP_AUTOCAP_SETTING_STATUS_ENABLED,
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CAPMODE,            // 1
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CAMSCENEMODE,       // 2
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CAPSIZE,            // 3
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_HIGHLIGHT,          // 4
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_AFRANGE,            // 5
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_ISO,                // 6
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_WB,                 // 7
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_EFFECT,             // 8
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CAMSTORAGE,         // 9
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CAPQTY,             // 10
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_AFZONE,             // 11    
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_AEMETER,            // 12   
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_SHARPNESS,          // 13   
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CONTRAST,           // 14
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_SATURATION,         // 15
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_SHUTTERSOUND,       // 16
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_BANDING,            // 17
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CAMEV,              // 18
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_CAMZOOM,            // 19
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_MISC,               // 20
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_RESTOREDEFAULT,     // 21
    VAPP_AUTOCAP_SETTING_STATUS_DISABLED_ACT_CAM,            // 22
    VAPP_AUTOCAP_SETTING_STATUS_DRV_NOT_SUPPORT,  

    VAPP_AUTOCAP_SETTING_STATUS_END
} vapp_autocap_setting_status_enum;

/* main list type */
typedef enum
{
    VAPP_AUTOCAP_SETTING_MAINLIST_STIRAGE_ONLY,       

    VAPP_AUTOCAP_SETTING_MAINLIST_TYPE_END
} vapp_autocap_setting_mainlist_type_enum;

typedef enum
{
    VAPP_AUTOCAP_RESTOREDEFAULT_OPTION,

    VAPP_AUTOCAP_RESTOREDEFAULT_END
} vapp_autocap_setting_restore_default_enum;

typedef enum
{
    VAPP_AUTOCAP_FACEDETECT_OFF,
    VAPP_AUTOCAP_FACEDETECT_ON,

    VAPP_AUTOCAP_FACEDETECT_END
} vapp_autocap_setting_face_detect_enum;

typedef enum
{
    VAPP_AUTOCAP_FLASH_TYPE_NONE,
    VAPP_AUTOCAP_FLASH_TYPE_XENON,
    VAPP_AUTOCAP_FLASH_TYPE_LED,

    VAPP_AUTOCAP_FLASH_TYPE_END
} vapp_autocap_setting_flash_type_enum;

#define VAPP_AUTOCAP_SETTING_DUMMY_VALUE   (0xFFFF)

#endif

#endif
