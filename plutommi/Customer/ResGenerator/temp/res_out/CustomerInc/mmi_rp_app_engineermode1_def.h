/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*******************************************************************************
 * Filename:
 * ---------
 *   mmi_rp_app_engineermode1_def.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Resource populate function generated by XML resgen
 *
 * Author:
 * -------
 *   MTK resgenerator XML parser
 *
 *******************************************************************************/


#ifndef _MMI_RP_APP_ENGINEERMODE1_DEF_H
#define _MMI_RP_APP_ENGINEERMODE1_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_EM_MISC_ON = 11918 + 1, /* BASE_ID + 1 */
    MENU_ID_EM_MISC_OFF,
    MENU_ID_EM_TRUE,
    MENU_ID_EM_FALSE,
    MENU_ID_EM_MAIN_MENU,
    MENU_ID_EM_DEVICE,
    MENU_ID_EM_MM_COLOR,
    MENU_ID_EM_DEV_SET_UART,
    MENU_ID_EM_DEV_UART_SETTING,
    MENU_ID_EM_DEV_DCM_MODE,
    MENU_ID_EM_DEV_DCM_MODE_ON,
    MENU_ID_EM_DEV_DCM_MODE_OFF,
    MENU_ID_EM_AUDIO,
    MENU_ID_EM_AUD_VM_SUPPORT,
    MENU_ID_EM_AUD_AUTO_VM_SPH,
    MENU_ID_EM_AUD_AUTO_VM_SETTING,
    MENU_ID_EM_MISC,
    MENU_ID_EM_MISC_MEMORY_DUMP,
    MENU_ID_EM_MRE,
    MENU_ID_EM_PROFILING,
    MENU_ID_EM_PROFILING_SWLA,
    MENU_ID_EM_PROFILING_SWLA_ON,
    MENU_ID_EM_PROFILING_SWLA_OFF,
    MENU_ID_EM_PROFILING_FRAMEWORK,
    MENU_ID_EM_PROFILING_OPTION,
    MENU_ID_EM_PROFILING_START,
    MENU_ID_EM_PROFILING_SETTING,
    MMI_RP_APP_ENGINEERMODE1_MENU_MAX
}mmi_rp_app_engineermode1_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_EM_GLOBAL_PROCESSING = 11918 + 1, /* BASE_ID + 1 */
    STR_ID_EM_SIM_CARD_IS_NOT_AVAILABLE,
    STR_ID_EM_WARNING,
    STR_ID_EM_SET_LSK,
    STR_ID_EM_NOTICE_SUCCESS_REBOO,
    STR_ID_EM_GLOBAL_AUTO,
    STR_ID_EM_TRUE,
    STR_ID_EM_FALSE,
    STR_ID_EM_APP_NAME,
    STR_ID_EM_DEVICE,
    STR_ID_EM_DEV_MM_COLOR,
    STR_ID_EM_DEV_SHARP,
    STR_ID_EM_DEV_CONTRAST,
    STR_ID_EM_DEV_SATURATION,
    STR_ID_EM_DEV_SET_UART,
    STR_ID_EM_DEV_SET_UART_SETTING,
    STR_ID_EM_DEV_SET_UART_TST_PS,
    STR_ID_EM_DEV_SET_UART_TST_L1,
    STR_ID_EM_DEV_SET_UART_PS,
    STR_ID_EM_DEV_USB_PORT,
    STR_ID_EM_DEV_USB_PORT2,
    STR_ID_EM_DEV_UART_1,
    STR_ID_EM_DEV_UART_2,
    STR_ID_EM_DEV_UART_3,
    STR_ID_EM_DEV_DCM_MODE,
    STR_ID_EM_AUDIO,
    STR_ID_EM_AUD_AUTO_VM_SETTING,
    STR_ID_EM_AUD_VM_SUPPORT,
    STR_ID_EM_AUD_AUTO_VM_SPH,
    STR_ID_EM_MISC,
    STR_ID_EM_MISC_MEMORY_DUMP,
    STR_ID_EM_MRE,
    STR_ID_EM_BT_BD_ADDR,
    STR_ID_EM_PROFILING,
    STR_ID_EM_PROFILING_SWLA,
    STR_ID_EM_PROFILING_SWLA_RESUILT_INFOR,
    STR_ID_EM_PROFILING_FRM,
    STR_ID_EM_PROFILING_FRM_DISPLAY_TIME_TEXT,
    STR_ID_EM_PROFILING_FRM_GDI_PROFILE_TEXT,
    STR_ID_EM_PROFILING_FRM_SCREEN_DELAY_TEXT,
    STR_ID_EM_PROFILING_FRM_MATRIX_DELAY_TEXT,
    STR_ID_EM_PROFILING_FRM_LIST_DELAY_TEXT,
    STR_ID_EM_PROFILING_FRM_DELAY_OFFSET_TEXT,
    STR_ID_EM_PROFILING_EXTRA_LAYER,
    STR_ID_EM_PROFILING_ROTATE,
    STR_ID_EM_PROFILING_PLAY_SIZE,
    STR_ID_EM_PROFILING_TVOUT_MODE,
    STR_ID_EM_PROFILING_ROTATE_0,
    STR_ID_EM_PROFILING_ROTATE_90,
    STR_ID_EM_PROFILING_ROTATE_180,
    STR_ID_EM_PROFILING_ROTATE_270,
    STR_ID_EM_PROFILING_TV_FULL_SCREEN,
    STR_ID_EM_PROFILING_TV_LCD_SCREEN,
    STR_ID_EM_PROFILING_SIZE_SQCIF,
    STR_ID_EM_PROFILING_SIZE_QCIF,
    STR_ID_EM_PROFILING_SIZE_CIF,
    STR_ID_EM_PROFILING_SIZE_QQVGA,
    STR_ID_EM_PROFILING_SIZE_QVGA,
    STR_ID_EM_PROFILING_SIZE_VGA,
    STR_ID_EM_PROFILING_SIZE_LCD,
    STR_ID_EM_PROFILING_RECORD_SIZE,
    STR_ID_EM_PROFILING_PREVIEW_SIZE,
    STR_ID_EM_PROFILING_SETTING,
    STR_ID_EM_RF_TEST_GSM_CONFIRM_NOTIFY_TEST,
    MMI_RP_APP_ENGINEERMODE1_STR_MAX
}mmi_rp_app_engineermode1_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_EM_ROOT = 11918 + 1, /* BASE_ID + 1 */
    SCR_ID_EM_CMN_SCRN,
    SCR_ID_EM_DUALMODE_SWITCH_PROGRESS,
    SCR_ID_EM_DEV_UART_POWER_ONOFF_MENU,
    SCR_ID_EM_MISC_MRE_INFO,
    GRP_ID_EM_MISC_MEDIA_MEMORY_SETTING,
    GRP_ID_EM_PROFILING_SWLA_RESULT_INFOR_GROUP,
    SCR_ID_EM_PROFILING_SWLA_RESULT_INFOR_SCRN,
    SCR_ID_EM_PROFILING_FRM,
    GRP_ID_EM_PROFILING_AUTO_PLAY,
    GRP_ID_EM_PROFILING_VDOPLY,
    GRP_ID_EM_PROFILING_CAMERA,
    GRP_ID_EM_PROFILING_CAMERA_APP_CAPTURE,
    GRP_ID_EM_PROFILING_IMAGE_DECODE,
    GRP_ID_EM_PROFILING_VDOREC,
    MMI_RP_APP_ENGINEERMODE1_SCR_MAX
}mmi_rp_app_engineermode1_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    EM_NOTIFYDURATION_TIMER = 11918 + 1, /* BASE_ID + 1 */
    EM_RINGTONE_HIGHLIGHT_TIMER,
    EM_GPRS_PING_TIMER,
    EM_GPRS_SOC_DEMO_APP_TIMER,
    MMI_RP_APP_ENGINEERMODE1_TIMER_MAX
}mmi_rp_app_engineermode1_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_ENGINEERMODE1_VXML_LAYOUT_MAX
} mmi_rp_app_engineermode1_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NVRAM_AUDIO_DEBUG_INFO1 = 11918 + 1, /* BASE_ID + 1 */      /*       DOUBLE */ 
    NVRAM_AUDIO_DEBUG_INFO2,                                    /*       DOUBLE */ 
    NVRAM_AUDIO_DEBUG_INFO3,                                    /*       DOUBLE */ 
    NVRAM_AUDIO_DEBUG_INFO4,                                    /*       DOUBLE */ 
    MMI_RP_APP_ENGINEERMODE1_MMI_CACHE_MAX
} mmi_rp_app_engineermode1_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_EM_MAIN_ICON = 11918 + 1, /* BASE_ID + 1 */
    MMI_RP_APP_ENGINEERMODE1_IMG_MAX
}mmi_rp_app_engineermode1_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_ENGINEERMODE1_DEF_H */
