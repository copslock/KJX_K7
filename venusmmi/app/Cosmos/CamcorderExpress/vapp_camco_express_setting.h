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

#ifndef __VAPP_CAMCO_EXPRESS_SETTING__
#define __VAPP_CAMCO_EXPRESS_SETTING__

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

#ifdef __VAPP_CAMCO_EXPRESS__

#include "mmi_rp_vapp_camco_def.h"
#include "FileMgrGProt.h"
#include "FileManagerResDef.h"

/****************************************************************************
 * Define
 ****************************************************************************/
#define VAPP_CAMCO_SETTING_NULL              (0xff)
#define VAPP_CAMCO_MAX_SETTING_ITEM_COUNT    (25)        /* this value currently is bound by effect */
#define VAPP_CMACO_MAX_SETTING_LIST_SIZE     (12)
typedef mdi_camera_fun_info vapp_camco_cap_info;
typedef mdi_camera_zoom_info vapp_camco_zoom_info;

/****************************************************************************
 * Enum
 ****************************************************************************/

typedef enum
{
    VAPP_CAMCO_SETTING_DUMMY,           // 0  : becuase shift flag view 0 as enabled, so we need to make first setting tag starts from 1
    VAPP_CAMCO_SETTING_CAMSCENEMODE,    // 1
    VAPP_CAMCO_SETTING_CAPSIZE,         // 2
    VAPP_CAMCO_SETTING_FLASH,           // 3
    VAPP_CAMCO_SETTING_SELFTIMER,       // 4
    VAPP_CAMCO_SETTING_ISO,             // 5
    VAPP_CAMCO_SETTING_WB,              // 6
    VAPP_CAMCO_SETTING_EFFECT,          // 7
    VAPP_CAMCO_SETTING_CAMSTORAGE,      // 8
    VAPP_CAMCO_SETTING_CAMEV,           // 9
    VAPP_CAMCO_SETTING_CAMZOOM,         // 10
    VAPP_CAMCO_SETTING_CAPQTY,          // 11
    VAPP_CAMCO_SETTING_VDOSCENEMODE,    // 12
    VAPP_CAMCO_SETTING_RECSIZE,         // 13
    VAPP_CAMCO_SETTING_TIMELAPSE,       // 14
    VAPP_CAMCO_SETTING_TIMELAPSEPERIOD, // 15
    VAPP_CAMCO_SETTING_LIMIT,           // 16
    VAPP_CAMCO_SETTING_VISQTY,          // 17
    VAPP_CAMCO_SETTING_VISCODEC,        // 18
    VAPP_CAMCO_SETTING_VDOSTORAGE,      // 19
    VAPP_CAMCO_SETTING_VDOEV,           // 20
    VAPP_CAMCO_SETTING_VDOZOOM,         // 21
    VAPP_CAMCO_SETTING_SD,              // 22
    VAPP_CAMCO_SETTING_ASD,             // 23
    VAPP_CAMCO_SETTING_ZSD,             // 24
    VAPP_CAMCO_SETTING_ACT_APP,         // 25
    VAPP_CAMCO_SETTING_ACT_CAM,         // 26
    VAPP_CAMCO_SETTING_END
} vapp_camco_setting_enum;

/* isp */
typedef enum
{
    VAPP_CAMCO_SENSOR_MAIN_CAMERA,
    VAPP_CAMCO_SENSOR_SUB_CAMERA,

    VAPP_CAMCO_SENSOR_END
} vapp_camco_sensor_enum;

/* app */
typedef enum
{
    VAPP_CAMCO_APP_CAMERA,
    VAPP_CAMCO_APP_RECORDER,

    VAPP_CAMCO_APP_END
} vapp_camco_app_enum;

/* capture mode */
typedef enum
{
    VAPP_CAMCO_CAPMODE_NORMAL,
    VAPP_CAMCO_CAPMODE_ZSD_SHOT,
    VAPP_CAMCO_CAPMODE_SMILE_SHOT,

    VAPP_CAMCO_CAPMODE_END
} vapp_camco_capmode_enum;

/* asd mode */
typedef enum
{
    VAPP_CAMCO_SCENE_DETECT_OFF,
    VAPP_CAMCO_SCENE_DETECT_ON,

    VAPP_CAMCO_SCENE_DETECT_END
} vapp_camco_scenedetect_enum;

/* sd mode */
typedef enum
{
    VAPP_CAMCO_SMILE_DETECT_OFF,
    VAPP_CAMCO_SMILE_DETECT_ON,

    VAPP_CAMCO_SMILE_DETECT_END
} vapp_camco_smiledetect_enum;

/* asd mode */
typedef enum
{
    VAPP_CAMCO_ZERO_DELAY_OFF,
    VAPP_CAMCO_ZERO_DELAY_ON,

    VAPP_CAMCO_ZERO_DELAY_END
} vapp_camco_zerodelay_enum;

/* camera scene mode */
typedef enum
{
    VAPP_CAMCO_CAMSCENEMODE_AUTO,
    VAPP_CAMCO_CAMSCENEMODE_NIGHT,
    VAPP_CAMCO_CAMSCENEMODE_SPORT,
    VAPP_CAMCO_CAMSCENEMODE_PORTRAIT,
    VAPP_CAMCO_CAMSCENEMODE_LANDSCAPE,
    VAPP_CAMCO_CAMSCENEMODE_DOCUMENT,
    VAPP_CAMCO_CAMSCENEMODE_ANTI_SHAKE,
    VAPP_CAMCO_CAMSCENEMODE_ASD_AUTO,
    VAPP_CAMCO_CAMSCENEMODE_ASD_BACKLIGHT,
    VAPP_CAMCO_CAMSCENEMODE_ASD_BACKLIGHT_PORTRAIT,
    VAPP_CAMCO_CAMSCENEMODE_ASD_LANDSCAPE,
    VAPP_CAMCO_CAMSCENEMODE_ASD_NIGHT,
    VAPP_CAMCO_CAMSCENEMODE_ASD_NIGHT_PORTRAIT,
    VAPP_CAMCO_CAMSCENEMODE_ASD_PORTRAIT,

    VAPP_CAMCO_CAMSCENEMODE_END
} vapp_camco_camscenemode_enum;

/* capture size */
typedef enum
{
    VAPP_CAMCO_CAPSIZE_WALLPAPER,
    VAPP_CAMCO_CAPSIZE_VGA,
    VAPP_CAMCO_CAPSIZE_1MP,
    VAPP_CAMCO_CAPSIZE_2MP,
    VAPP_CAMCO_CAPSIZE_3MP,
    VAPP_CAMCO_CAPSIZE_4MP,
    VAPP_CAMCO_CAPSIZE_5MP,

    VAPP_CAMCO_CAPSIZE_END
} vapp_camco_capsize_enum;

/* flash */
typedef enum
{
    VAPP_CAMCO_FLASH_AUTO,
    VAPP_CAMCO_FLASH_OFF,
    VAPP_CAMCO_FLASH_FORCE_ON,
    VAPP_CAMCO_FLASH_RED_EYE,

    VAPP_CAMCO_FLASH_END
} vapp_camco_flash_enum;

/* capture quality */
typedef enum
{
    VAPP_CAMCO_CAPQTY_FINE,
    VAPP_CAMCO_CAPQTY_GOOD,
    VAPP_CAMCO_CAPQTY_NORMAL,
    VAPP_CAMCO_CAPQTY_LOW,

    VAPP_CAMCO_CAPQTY_END
} vapp_camco_capqty_enum;

/* iso */
typedef enum
{

    VAPP_CAMCO_ISO_AUTO = MDI_CAMERA_ISO_AUTO,
    VAPP_CAMCO_ISO_100 = MDI_CAMERA_ISO_100,
    VAPP_CAMCO_ISO_200 = MDI_CAMERA_ISO_200,
    VAPP_CAMCO_ISO_400 = MDI_CAMERA_ISO_400,
    VAPP_CAMCO_ISO_800 = MDI_CAMERA_ISO_800,
    VAPP_CAMCO_ISO_1600 = MDI_CAMERA_ISO_1600,

    VAPP_CAMCO_ISO_END
} vapp_camco_iso_enum;

/* wb */
typedef enum
{
    VAPP_CAMCO_WB_AUTO,
    VAPP_CAMCO_WB_DAYLIGHT,
    VAPP_CAMCO_WB_TUNGSTEN,
    VAPP_CAMCO_WB_FLUORESCENT,
    VAPP_CAMCO_WB_CLOUDY,
    VAPP_CAMCO_WB_INCANDESCENT,

    VAPP_CAMCO_WB_END
} vapp_camco_wb_enum;

/* self-timer */
typedef enum
{
    VAPP_CAMCO_SELFTIMER_OFF,
    VAPP_CAMCO_SELFTIMER_5_SEC,
    VAPP_CAMCO_SELFTIMER_10_SEC,

    VAPP_CAMCO_SELFTIMER_END
} vapp_camco_selftimer_enum;

/* effect */
typedef enum
{
    VAPP_CAMCO_EFFECT_NORMAL,
    VAPP_CAMCO_EFFECT_GRAYSCALE,
    VAPP_CAMCO_EFFECT_SEPIA,
    VAPP_CAMCO_EFFECT_COLOR_INVERT,
    VAPP_CAMCO_EFFECT_SKETCH,
    VAPP_CAMCO_EFFECT_OIL,
    VAPP_CAMCO_EFFECT_LOMO,
    VAPP_CAMCO_EFFECT_COLOR_RED,
    VAPP_CAMCO_EFFECT_COLOR_YELLOW,
    VAPP_CAMCO_EFFECT_COLOR_GREEN,
    VAPP_CAMCO_EFFECT_COLOR_BLUE,

    VAPP_CAMCO_EFFECT_END
} vapp_camco_effect_enum;

/* storage */
typedef enum
{
    VAPP_CAMCO_STORAGE_END = SRV_FMGR_DRV_TOTAL
} vapp_camco_storage_enum;

/* video scene mode */
typedef enum
{
    VAPP_CAMCO_VDOSCENEMODE_AUTO,
    VAPP_CAMCO_VDOSCENEMODE_NIGHT,

    VAPP_CAMCO_VDOSCENEMODE_END
} vapp_camco_vdoscenemode_enum;

/* record size */
typedef enum
{
    VAPP_CAMCO_RECSIZE_SQCIF,
    VAPP_CAMCO_RECSIZE_QQVGA,
    VAPP_CAMCO_RECSIZE_QCIF,
    VAPP_CAMCO_RECSIZE_QVGA,
    VAPP_CAMCO_RECSIZE_CIF,
    VAPP_CAMCO_RECSIZE_WQVGA,
    VAPP_CAMCO_RECSIZE_CIF2,
    VAPP_CAMCO_RECSIZE_HVGA,
    VAPP_CAMCO_RECSIZE_NHD,
    VAPP_CAMCO_RECSIZE_VGA,
    VAPP_CAMCO_RECSIZE_4CIF,
    VAPP_CAMCO_RECSIZE_D1,
    VAPP_CAMCO_RECSIZE_D12,
    VAPP_CAMCO_RECSIZE_WVGA,
    VAPP_CAMCO_RECSIZE_SVGA,
    VAPP_CAMCO_RECSIZE_WVGA2,
    VAPP_CAMCO_RECSIZE_FWVGA,
    VAPP_CAMCO_RECSIZE_XGA,
    VAPP_CAMCO_RECSIZE_720P,
    VAPP_CAMCO_RECSIZE_4VGA,
    VAPP_CAMCO_RECSIZE_SXGA,
    VAPP_CAMCO_RECSIZE_16CIF,
    VAPP_CAMCO_RECSIZE_4SVGA,
    VAPP_CAMCO_RECSIZE_FHD,

    VAPP_CAMCO_RECSIZE_END
} vapp_camco_recsize_enum;

/* visual quality */
typedef enum
{
    VAPP_CAMCO_VISQTY_FINE,
    VAPP_CAMCO_VISQTY_GOOD,
    VAPP_CAMCO_VISQTY_NORMAL,
    VAPP_CAMCO_VISQTY_LOW,
    VAPP_CAMCO_VISQTY_LCD,

    VAPP_CAMCO_VISQTY_END
} vapp_camco_visqty_enum;

/* time lapse */
typedef enum
{
    VAPP_CAMCO_TIME_LAPSE_OFF,
    VAPP_CAMCO_TIME_LAPSE_ON,

    VAPP_CAMCO_TIME_LAPSE_END
} vapp_camco_time_lapse_enum;

/* time lapse period */
typedef enum
{
    VAPP_CAMCO_TIME_LAPSE_PERIOD_1,

    VAPP_CAMCO_TIME_LAPSE_PERIOD_END
} vapp_camco_time_lapse_period_enum;

/* limit */
typedef enum
{
    VAPP_CAMCO_LIMIT_NO_LIMIT,
    VAPP_CAMCO_LIMIT_TIME_15S,
    VAPP_CAMCO_LIMIT_TIME_30S,
    VAPP_CAMCO_LIMIT_TIME_60S,
    VAPP_CAMCO_LIMIT_TIME_300S,
    VAPP_CAMCO_LIMIT_TIME_600S,
    VAPP_CAMCO_LIMIT_SIZE_95K,
    VAPP_CAMCO_LIMIT_SIZE_195K,
    VAPP_CAMCO_LIMIT_SIZE_295K,

    VAPP_CAMCO_LIMIT_END
} vapp_camco_limit_enum;

/* visual codec format */
typedef enum
{
    VAPP_CAMCO_VISCODEC_3GP,
    VAPP_CAMCO_VISCODEC_MP4,
    VAPP_CAMCO_VISCODEC_MJPG,
    VAPP_CAMCO_VISCODEC_H264,
    VAPP_CAMCO_VISCODEC_END
} vapp_camco_viscodec_enum;

/* ev */
typedef enum
{
    VAPP_CAMCO_EV_N4,
    VAPP_CAMCO_EV_N3,
    VAPP_CAMCO_EV_N2,
    VAPP_CAMCO_EV_N1,
    VAPP_CAMCO_EV_0,
    VAPP_CAMCO_EV_P1,
    VAPP_CAMCO_EV_P2,
    VAPP_CAMCO_EV_P3,
    VAPP_CAMCO_EV_P4,

    VAPP_CAMCO_EV_END
} vapp_camco_ev_enum;

/* capability */
typedef enum
{
    VAPP_CAMCO_SETTING_CAP_ENABLED,
    VAPP_CAMCO_SETTING_CAP_DISABLED,         /* driver not support - disable all the time */
    VAPP_CAMCO_SETTING_CAP_DRV_NOT_SUPPORT,  /* driver not support - disable all the time */

    VAPP_CAMCO_SETTING_CAP_END
} vapp_camco_setting_cap_enum;

typedef enum
{
    VAPP_CAMCO_SETTING_STATUS_ENABLED,
    VAPP_CAMCO_SETTING_STATUS_DISABLED_CAMSCENEMODE,    // 1
    VAPP_CAMCO_SETTING_STATUS_DISABLED_CAPSIZE,         // 2
    VAPP_CAMCO_SETTING_STATUS_DISABLED_FLASH,           // 3
    VAPP_CAMCO_SETTING_STATUS_DISABLED_SELFTIMER,       // 4
    VAPP_CAMCO_SETTING_STATUS_DISABLED_ISO,             // 5
    VAPP_CAMCO_SETTING_STATUS_DISABLED_WB,              // 6
    VAPP_CAMCO_SETTING_STATUS_DISABLED_EFFECT,          // 7
    VAPP_CAMCO_SETTING_STATUS_DISABLED_CAMSTORAGE,      // 8
    VAPP_CAMCO_SETTING_STATUS_DISABLED_CAMEV,           // 9
    VAPP_CAMCO_SETTING_STATUS_DISABLED_CAMZOOM,         // 10
    VAPP_CAMCO_SETTING_STATUS_DISABLED_CAPQTY,          // 11
    VAPP_CAMCO_SETTING_STATUS_DISABLED_VDOSCENEMODE,    // 12
    VAPP_CAMCO_SETTING_STATUS_DISABLED_RECSIZE,         // 13
    VAPP_CAMCO_SETTING_STATUS_DISABLED_LIMIT,           // 14
    VAPP_CAMCO_SETTING_STATUS_DISABLED_VISQTY,          // 15
    VAPP_CAMCO_SETTING_STATUS_DISABLED_VISCODEC,        // 16
    VAPP_CAMCO_SETTING_STATUS_DISABLED_VDOSTORAGE,      // 17
    VAPP_CAMCO_SETTING_STATUS_DISABLED_VDOEV,           // 18
    VAPP_CAMCO_SETTING_STATUS_DISABLED_VDOZOOM,         // 19
    VAPP_CAMCO_SETTING_STATUS_DISABLED_SD,              // 20
    VAPP_CAMCO_SETTING_STATUS_DISABLED_ASD,             // 21
    VAPP_CAMCO_SETTING_STATUS_DISABLED_ZSD,             // 22
    VAPP_CAMCO_SETTING_STATUS_DISABLED_ACT_APP,         // 23
    VAPP_CAMCO_SETTING_STATUS_DISABLED_ACT_CAM,         // 24
    VAPP_CAMCO_SETTING_STATUS_DRV_NOT_SUPPORT,

    VAPP_CAMCO_SETTING_STATUS_END
} vapp_camco_setting_status_enum;

/* main list type */
typedef enum
{
    VAPP_CAMCO_SETTING_MAINLIST_CAMERA,
    VAPP_CAMCO_SETTING_MAINLIST_RECORDER,
    VAPP_CAMCO_SETTING_MAINLIST_FLASH_ONLY,

    VAPP_CAMCO_SETTING_MAINLIST_TYPE_END
} vapp_camco_setting_mainlist_type_enum;

typedef enum
{
    VAPP_CAMCO_FLASH_TYPE_NONE,
    VAPP_CAMCO_FLASH_TYPE_LED,

    VAPP_CAMCO_FLASH_TYPE_END
} vapp_camco_setting_flash_type_enum;

typedef struct
{
    VfxU16 active_app;
    VfxU16 active_cam;
    VfxU16 smile_detect;
    VfxU16 scene_detect;
    VfxU16 zero_delay;
    VfxU16 camscenemode;
    VfxU16 capsize;
    VfxU16 flash;
    VfxU16 selftimer;
    VfxU16 iso;
    VfxU16 wb;
    VfxU16 effect;
    VfxU16 storage;
    VfxU16 capqty;
    VfxU16 vdoscenemode;
    VfxU16 recsize;
    VfxU16 limit;
    VfxU16 visqty;
    VfxU16 viscodec;
}vapp_camco_setting_set_struct;

#define VAPP_CAMCO_SETTING_DUMMY_VALUE   (0xFFFF)

#endif /*__VAPP_CAMCO_EXPRESS__*/
#endif /*__VAPP_CAMCO_EXPRESS_SETTING__*/