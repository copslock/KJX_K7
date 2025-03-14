#include "CustomCfg.h"
#ifdef FIRST_PASS
#include "BuildCfg.h"
#endif
#include "MMI_features.h"
#include "MMIDataType.h"
#include "lcd_sw_inc.h"
#include "MMI_features_camcorder.h"
#include "custresdef.h"

#if defined(__MMI_CAMCORDER__) && (defined(__MMI_CAMCO_FEATURE_CAM_AUTORAMA_SHOT__) || defined(__MMI_CAMCO_FEATURE_CAM_MULTI_ANGLE_VIEW_SHOT__))

<?xml version="1.0" encoding="UTF-8"?>

<APP id="VAPP_AUTOCAP_COMMON"  package_name="native.mtk.autocap_common" name="STR_ID_VAPP_AUTOCAP_COMMON_APP_NAME" hidden_in_mainmenu="true" type="venus">

    <INCLUDE file = "PopulateRes.h"/>
    <INCLUDE file = "ImageViewerResDef.h"/>
    <INCLUDE file = "CustResDef.h"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_EV"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVP4"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVP3"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVP2"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVP1"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVZ0"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVN1"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVN2"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVN3"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EVN4"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_NORMAL"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_BEST_SHOT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_CONT_SHOT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_BURST_SHOT_SEL"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_EV_BRACKET_SEL"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_PANORAMA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_ADD_FRAME"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_SMILE_SHOT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPMODE_LCE_SHOT"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE_AUTO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE_PORTRAIT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE_LANDSCAPE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE_NIGHT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE_SPORT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE_DOCUMENT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SCENEMODE_ANTI_SHAKE"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_WALLPAPER"/>
#if defined(__MMI_MAINLCD_240X400__)
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_HLCD">"400X240"</STRING>
#elif defined(__MMI_MAINLCD_320X480__)
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_HLCD">"480X320"</STRING>
#elif defined(__MMI_MAINLCD_480X800__)
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_HLCD">"800X480"</STRING>
#else
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_HLCD">"320X240"</STRING>
#endif
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_VGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_1MP"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_2MP"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_3MP"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_4MP"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPSIZE_5MP"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_FLASH"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_FLASH_AUTO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_FLASH_FORCE_ON"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_FLASH_RED_EYE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_HIGHLIGHT"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_AFRANGE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFRANGE_AUTO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFRANGE_MACRO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFRANGE_INFINITE"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_SELFTIMER"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SELFTIMER_5S"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SELFTIMER_10S"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SELFTIMER_15S"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_PANORAMA_DIRECTION"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_PANORAMA_DIRECTION_UP"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_PANORAMA_DIRECTION_DOWN"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_PANORAMA_DIRECTION_LEFT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_PANORAMA_DIRECTION_RIGHT"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_AUXILIARY"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_ISO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_ISO_AUTO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_ISO_100"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_ISO_200"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_ISO_400"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_ISO_800"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_ISO_1600"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_WB"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_WB_AUTO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_WB_DAYLIGHT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_WB_TUNGSTEN"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_WB_FLUORESCENT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_WB_CLOUDY"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_WB_INCANDESCENT"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_GRAYSCALE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_SEPIA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_SEPIA_GREEN"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_SEPIA_BLUE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_COLOR_INVERT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_GRAY_INVERT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_BLACKBOARD"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_WHITEBOARD"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_COPPER_CARVING"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_BLUE_CARVING"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_EMBOSSMENT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_CONTRAST"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_JEAN"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_SKETCH"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_EFFECT_OIL"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_CAPQTY"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPQTY_FINE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPQTY_GOOD"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPQTY_NORMAL"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPQTY_LOW"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_AFZONE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFZONE_SINGLE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFZONE_MULTI"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFZONE_CONTINUE"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_AEMETER"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AEMETER_AUTO"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AEMETER_SPOT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AEMETER_CENTER_WEIGHT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AEMETER_AVERAGE"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_SHARPNESS"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_CONTRAST"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_SATURATION"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_ENHANCE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_REDUCE"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_SHUTTERSOUND"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SHUTTERSOUND_SOUND_1"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SHUTTERSOUND_SOUND_2"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_SHUTTERSOUND_SOUND_3"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_BANDING"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_BANDING_50HZ"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_BANDING_60HZ"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_SQCIF"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_QQVGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_QCIF"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_QVGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_CIF"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_WQVGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_CIF2"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_HVGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_NHD"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_VGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_D1"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_D12"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_WVGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_SVGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_WVGA2"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_XGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_720P"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_4VGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_SXGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_16CIF"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_4SVGA"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECSIZE_FHD"/>


    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT_NO_LIMIT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT_TIME_15S"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT_TIME_30S"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT_TIME_60S"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT_SIZE_95K"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT_SIZE_195K"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_LIMIT_SIZE_295K"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_VISQTY"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_VISQTY_FINE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_VISQTY_GOOD"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_VISQTY_NORMAL"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_VISQTY_LOW"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_AFMODE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFMODE_SINGLE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_AFMODE_CONT"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_RECAUD"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_RECAUD_ON"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_VISCODEC"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_VISCODEC_MP4"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_VISCODEC_3GP"/>


    <STRING id="STR_ID_VAPP_AUTOCAP_DEFAULT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_DEFAULT_COMFIRM"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_DELETE_QUERY"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_CREATE_FOLDER_FAILED"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_PREVIEW_FAILED"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_DISK_FULL"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPTURE_FAILED"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_PAUSE_FAILED"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAMERA_NOT_READY"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CONTINUE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_COUNTDOWN"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_STITCHING"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_CAPTURING"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_BURST_CAPTURING"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_ADDFRAME_IS_ACTIVE"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_WRITE_PROTECT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_HW_NOT_READY"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_STORAGE_NOT_READY"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_ERROR"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_REACH_TIME_LIMIT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_REACH_SIZE_LIMIT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_STORAGE_TOO_SLOW"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_CHANGE_LOW_RECSIZE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_CHANGE_NORMAL_CAPTURE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_MEM_CARD_REMOVE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_MEM_CARD_INSERT"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_FACE_DETECTION"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_BT_IS_WORKING"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_NOTIFY_PICT_IS_WORKING"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_MOVE_TO_START_CAPTURE"/>

    #define AUTOCAP_OSD_PATH    RES_IMG_ROOT"\\\\Autorama\\\\"

    <IMAGE id="MAIN_MENU_AUTOCAP_ENTER_ICON">RES_IMG_ROOT"\\\\Mainmenu_Icon\\\\Camera.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_LEFT_BAR_ICON">AUTOCAP_OSD_PATH"bg_bar_l.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RIGHT_BAR_ICON">AUTOCAP_OSD_PATH"bg_bar_r.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_V_RIGHT_BAR_ICON">AUTOCAP_OSD_PATH"bg_bar_v_r.9slice.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_SETTING_NAME_ICON">AUTOCAP_OSD_PATH"bg_item_name.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_CAPTURE_ICON">AUTOCAP_OSD_PATH"btn_shoot.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_GALLERY_ICON">AUTOCAP_OSD_PATH"last_shot_frame.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_VIEW_SWITCH_ICON">AUTOCAP_OSD_PATH"SwitchDirection.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_DIR_U_ICON">AUTOCAP_OSD_PATH"icon_up.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_DIR_D_ICON">AUTOCAP_OSD_PATH"icon_down.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_DIR_L_ICON">AUTOCAP_OSD_PATH"icon_left.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_DIR_R_ICON">AUTOCAP_OSD_PATH"icon_right.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_NORMAL1_ICON">AUTOCAP_OSD_PATH"focus_sb_1.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_NORMAL2_ICON">AUTOCAP_OSD_PATH"focus_sb_2.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_NORMAL3_ICON">AUTOCAP_OSD_PATH"focus_sb_3.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_NORMAL4_ICON">AUTOCAP_OSD_PATH"focus_sb_4.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_SUCCESS1_ICON">AUTOCAP_OSD_PATH"focus_1.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_SUCCESS2_ICON">AUTOCAP_OSD_PATH"focus_2.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_SUCCESS3_ICON">AUTOCAP_OSD_PATH"focus_3.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_SUCCESS4_ICON">AUTOCAP_OSD_PATH"focus_4.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_FAIL1_ICON">AUTOCAP_OSD_PATH"focus_sf_1.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_FAIL2_ICON">AUTOCAP_OSD_PATH"focus_sf_2.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_FAIL3_ICON">AUTOCAP_OSD_PATH"focus_sf_3.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_RECT_AF_FAIL4_ICON">AUTOCAP_OSD_PATH"focus_sf_4.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_MENU_IND_ICON">AUTOCAP_OSD_PATH"indicator_2.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_ZOOM_IND_ICON">AUTOCAP_OSD_PATH"zoom_ball.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_ZOOM_IN_ICON">AUTOCAP_OSD_PATH"zoom_in.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_ZOOM_OUT_ICON">AUTOCAP_OSD_PATH"zoom_out.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_ZOOM_BAR_ICON">AUTOCAP_OSD_PATH"zoom_track.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_WHEEL_AD_STORAGE_ICON">AUTOCAP_OSD_PATH"Storage.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CANCEL_ICON">AUTOCAP_OSD_PATH"icon_cancel.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_OK_ICON">AUTOCAP_OSD_PATH"icon_cut.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_FOCUS_ICON">AUTOCAP_OSD_PATH"pana_focus.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_DIV_ICON">AUTOCAP_OSD_PATH"bg_bar_r_line.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_LB_ICON">AUTOCAP_OSD_PATH"cut_left.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_RB_ICON">AUTOCAP_OSD_PATH"cut_right.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_UB_ICON">AUTOCAP_OSD_PATH"cut_up.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_DB_ICON">AUTOCAP_OSD_PATH"cut_down.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_SAVE_ICON">AUTOCAP_OSD_PATH"icon_done.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_CANCEL_ICON">AUTOCAP_OSD_PATH"icon_delete.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_BG_ICON">AUTOCAP_OSD_PATH"img_bg_l.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_BG_V_ICON">AUTOCAP_OSD_PATH"img_bg_v.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_BG_SPLIT_ICON">AUTOCAP_OSD_PATH"icon_done_bg_v_line.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_AUTOCAP_PANO_CLIP_BG_V_BG_ICON">AUTOCAP_OSD_PATH"icon_done_bg_v.9slice.png"</IMAGE>

    <IMAGE id="IMG_ID_VAPP_AUTOCAP_STATUS_AF_MACRO_ICON">AUTOCAP_OSD_PATH"Status_Icon\\\\AF\\\\AF_marco.png"</IMAGE>

    #define VAPP_3D_CAMERA_OSD_PATH    RES_IMG_ROOT"\\\\Autorama\\\\"

    <IMAGE id="IMG_ID_VAPP_3D_CAMERA_RIGHT_ARROW_ICON">VAPP_3D_CAMERA_OSD_PATH"arrow.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_3D_CAMERA_CAPTURING_ICON">VAPP_3D_CAMERA_OSD_PATH"lattice_f.png"</IMAGE>
    <IMAGE id="IMG_ID_VAPP_3D_CAMERA_CAPTURED_ICON">VAPP_3D_CAMERA_OSD_PATH"lattice_m.png"</IMAGE>

    <SCREEN id="SCR_ID_VAPP_AUTOCAP_APP"/>
    <SCREEN id="SCR_ID_VAPP_AUTOCAP_EXT_APP"/>
    <SCREEN id="SCR_GROUP_ID_VAPP_AUTOCAP_APP"/>
    <SCREEN id="SCR_GROUP_ID_VAPP_AUTOCAP_PARTIAL_APP"/>
    <SCREEN id="SCR_GROUP_ID_VAPP_AUTOCAP_INT_APP"/>
    <SCREEN id="SCR_GROUP_ID_VAPP_AUTOCAP_EXT_APP"/>

    <AUDIO id="AUD_ID_VAPP_AUTOCAP_COUNTDOWN">CUST_ADO_PATH"\\\\Camcorder\\\\count.wav"</AUDIO>
#if defined(MT6225) || defined(MT6253) || defined(MT6253T) || defined(MT6235) || defined(MT6235B)
    <AUDIO id="AUD_ID_VAPP_AUTOCAP_CAPTURE_1">CUST_ADO_PATH"\\\\Camcorder\\\\pic_.wav"</AUDIO>
#else
    <AUDIO id="AUD_ID_VAPP_AUTOCAP_CAPTURE_1">CUST_ADO_PATH"\\\\Camcorder\\\\pic.wav"</AUDIO>
#endif
    <AUDIO id="AUD_ID_VAPP_AUTOCAP_CAPTURE_2">CUST_ADO_PATH"\\\\Camcorder\\\\pic1.wav"</AUDIO>
    <AUDIO id="AUD_ID_VAPP_AUTOCAP_CAPTURE_3">CUST_ADO_PATH"\\\\Camcorder\\\\pic2.wav"</AUDIO>

</APP>

#if defined(__MMI_CAMCO_FEATURE_CAM_MULTI_ANGLE_VIEW_SHOT__)
<APP id="VAPP_3D_CAMERA"  package_name="native.mtk.3dcamera" name="STR_ID_VAPP_3D_CAMERA_APP_NAME" img = "MAIN_MENU_3D_CAMERA_ICON" launch = "vapp_3d_camera_launch" package_proc = "vapp_3d_camera_package_proc" type="venus">

    <INCLUDE file = "PopulateRes.h"/>
    <INCLUDE file = "ImageViewerResDef.h"/>
    <INCLUDE file = "CustResDef.h"/>
    <MEMORY heap= "512*1024" fg="MMI_AUTOCAP_MAV_APP_MEM_SIZE + total(SRV_MDI_CAMERA_CAP_MAV)" inc="vapp_autocap_gprot.h,vfx_sys_config.h"/>

    <STRING id="STR_ID_VAPP_AUTOCAP_MAV_MODE"/>
    <STRING id="STR_ID_VAPP_AUTOCAP_3D_IMAGE_MODE"/>

    <THEME>
        <IMAGE id="MAIN_MENU_3D_CAMERA_ICON" desc="Main menu 3D camera icon">RES_IMG_ROOT"\\\\"__MMI_MAINMENU_ICON_DEFAULT_PATH__"\\\\mav.png"</IMAGE>
    </THEME>

    <IMAGE id="MAIN_MENU_MAV_MODE_ICON" desc="Main menu 3D camera icon">RES_IMG_ROOT"\\\\Autorama\\\\mav_mode.png"</IMAGE>
    <IMAGE id="MAIN_MENU_3D_IMAGE_MODE_ICON" desc="Main menu 3D camera icon">RES_IMG_ROOT"\\\\Autorama\\\\camera_3D_mode.png"</IMAGE>
    <IMAGE id="IMG_ID_3D_CAMERA_REFLECTION_ICON" desc="reflection icon">RES_IMG_ROOT"\\\\Autorama\\\\reflection.jpg"</IMAGE>
    <IMAGE id="IMG_ID_MAV_MODE_ICON" desc="Main menu 3D camera icon">RES_IMG_ROOT"\\\\Autorama\\\\status_mav_mode.png"</IMAGE>
    <IMAGE id="IMG_ID_3D_IMAGE_MODE_ICON" desc="Main menu 3D camera icon">RES_IMG_ROOT"\\\\Autorama\\\\status_camera_3D_mode.png"</IMAGE>

</APP>
#endif

#if defined(__MMI_CAMCO_FEATURE_CAM_AUTORAMA_SHOT__)
<APP id="VAPP_AUTOCAP"  package_name="native.mtk.autocap" name="STR_ID_VAPP_AUTOCAP_APP_NAME" img = "MAIN_MENU_AUTOCAP_ICON" launch = "vapp_autocap_launch" package_proc = "vapp_autocap_package_proc" type="venus">


    <INCLUDE file = "PopulateRes.h"/>
    <INCLUDE file = "ImageViewerResDef.h"/>
    <INCLUDE file = "CustResDef.h"/>

#ifdef __VENUS_3D_UI_ENGINE__
    <MEMORY heap= "512*1024" fg="MMI_AUTOCAP_APP_MEM_SIZE + total(SRV_MDI_CAMERA_AUTORAMA)" inc="vapp_autocap_gprot.h" vrt_mem_factor="4.0f"/>
#else
    <MEMORY heap= "512*1024" fg="MMI_AUTOCAP_APP_MEM_SIZE + total(SRV_MDI_CAMERA_AUTORAMA)" inc="vapp_autocap_gprot.h"/>
#endif

    <THEME>
        <IMAGE id="MAIN_MENU_AUTOCAP_ICON" desc="Main menu autorama icon">RES_IMG_ROOT"\\\\"__MMI_MAINMENU_ICON_DEFAULT_PATH__"\\\\Autorama.png"</IMAGE>
    </THEME>

</APP>
#endif

#endif

