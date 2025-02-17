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
 *   mmi_rp_app_am_def.h
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


#ifndef _MMI_RP_APP_AM_DEF_H
#define _MMI_RP_APP_AM_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_AM_OPTION_DOWNLOAD = 32797 + 1, /* BASE_ID + 1 */
    MENU_ID_AM_OPTION_OPEN,
    MENU_ID_AM_OPTION_CREATE_SHORTCUT,
    MENU_ID_AM_OPTION_DELETE_SHORTCUT,
    MENU_ID_AM_OPTION_DELETE,
    MENU_ID_AM_OPTION_DETAILS,
    MENU_ID_AM_OPTION_UNINSTALL,
    MENU_ID_AM_OPTION_SETTINGS,
    MENU_ID_AM_OPTION_PSMGR,
    MENU_ID_AM_OPTIONS,
    MENU_ID_DLA_OPTION_MAIN,
    MENU_ID_DLA_OPTION_MAIN_DETAIL,
    MENU_ID_DLA_OPTION_MAIN_LIST,
    MENU_ID_DLA_OPTION_LIST,
    MENU_ID_DLA_OPTION_LIST_NONE,
    MENU_ID_DLA_OPTION_LIST_DETAIL,
    MENU_ID_DLA_OPTION_LIST_RETRY,
    MENU_ID_DLA_OPTION_LIST_PAUSE,
    MENU_ID_DLA_OPTION_LIST_RESUME,
    MENU_ID_DLA_OPTION_LIST_REMOVE,
    MENU_ID_AM_PSMGR_OPTION_BG_LIST,
    MENU_ID_AM_PSMGR_OPTION_BG_LIST_LAUNCH,
    MENU_ID_AM_PSMGR_OPTION_BG_LIST_EXIT,
    MMI_RP_APP_AM_MENU_MAX
}mmi_rp_app_am_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_ID_AM_APP_NAME_CALCULATOR = 32797 + 1, /* BASE_ID + 1 */
    STR_ID_AM_APP_NAME_HEALTH,
    STR_ID_AM_APP_NAME_STOPWATCH,
    STR_ID_AM_APP_NAME_CONVERTER,
    STR_ID_AM_APP_NAME_ZAKAT,
    STR_ID_AM_APP_NAME_EGYPTCODE,
    STR_ID_AM_APP_NAME_GIRLSLOT,
    STR_ID_AM_APP_NAME_GOLDMINER,
    STR_ID_AM_APP_NAME_HAPPYEGG,
    STR_ID_AM_APP_NAME_HAPPYWAR,
    STR_ID_AM_APP_NAME_KINGCOMBAT,
    STR_ID_AM_APP_NAME_MOTO,
    STR_ID_AM_APP_NAME_PARKOUR,
    STR_ID_AM_APP_NAME_TWITTER,
    STR_ID_AM_APP_NAME_GAMELOFT_GLIVE,
    STR_ID_AM_APP_NAME_GMOBI_APPSTORE,
    STR_ID_AM_APP_NAME_MBOUNCE_APPSTORE,
    STR_ID_APP_MRE_AM,
    STR_ID_AM_UNINSTALL,
    STR_ID_AM_APP_NAME,
    STR_ID_AM_OPTION_CREATE_SHORTCUT,
    STR_ID_AM_OPTION_DELETE_SHORTCUT,
    STR_ID_AM_DETAILS_INFO,
    STR_ID_AM_DETAILS_SIZE,
    STR_ID_AM_DETAILS_PATH,
    STR_ID_AM_DETAILS_DEVELOPER,
    STR_ID_AM_DETAILS_TEL,
    STR_ID_AM_DETAILS_STORAGE_PHONE,
    STR_ID_AM_DETAILS_STORAGE_ROM,
    STR_ID_AM_DETAILS_STORAGE_MEMORY_CARD,
    STR_ID_AM_CDR_NEW_VERSION,
    STR_ID_AM_CDR_UPDATE_SUCC,
    STR_ID_AM_CDR_UPDATE_FAIL,
    STR_ID_AM_USER_BALANCE,
    STR_ID_AM_FILE_OVERFLOW,
    STR_ID_AM_MRE_INIT_FAILURE,
    STR_ID_AM_DELETE_APP_QUERY,
    STR_ID_AM_DELETE_APP_FAILURE,
    STR_ID_AM_SHORTCUT_SET_DONE,
    STR_ID_AM_SHORTCUT_SET_DUPLICATE,
    STR_ID_AM_SHORTCUT_OLD_VER_SET_FAILURE,
    STR_ID_AM_SHORTCUT_SET_FAILURE,
    STR_ID_AM_SHORTCUT_SET_MAX,
    STR_ID_AM_SHORTCUT_DEL_QUERY,
    STR_ID_AM_SHORTCUT_DEL_DONE,
    STR_ID_AM_SHORTCUT_HS_DEL,
    STR_ID_AM_FAIL_TO_START,
    STR_ID_AM_FILE_NOT_EXIST,
    STR_ID_AM_TAG_ERR_FAIL_TO_START,
    STR_ID_AM_DATE_ERR_FAIL_TO_START,
    STR_ID_AM_INVALID_SIM_FAIL_TO_START,
    STR_ID_AM_CERT_EXPIRED_FAIL_TO_START,
    STR_ID_AM_POPUP_LIMITATION_APP,
    STR_ID_AM_APP_NAME_DEFAULT,
    STR_ID_AM_APP_NAME_MRE20,
    STR_ID_AM_DLA_OPTION_LAUNCH,
    STR_ID_AM_DLA_OPTION_DOWNLOAD_STATUS,
    STR_ID_AM_DLA_OPTION_DOWNLOAD_LIST,
    STR_ID_AM_DLA_LIST_OPTION_RETRY,
    STR_ID_AM_DLA_POP_LIST_FULL,
    STR_ID_AM_DLA_TXT_STATUS,
    STR_ID_AM_DLA_TXT_EXIST,
    STR_ID_AM_DLA_TXT_TOTAL,
    STR_ID_AM_DLA_TXT_REASON,
    STR_ID_AM_DLA_TXT_DOWNLOADING,
    STR_ID_AM_DLA_TXT_WAITING,
    STR_ID_AM_DLA_TXT_PAUSED,
    STR_ID_AM_DLA_TXT_FAILURE,
    STR_ID_AM_DLA_TXT_FAILED_TO_DOWNLOAD,
    STR_ID_AM_PSMGR_TXT_TITLE,
    STR_ID_AM_PSMGR_TXT_OPTION_LAUNCH,
    STR_ID_AM_MEDIA_MEMORY_UNAVAIBLE,
    STR_ID_VAPP_AM_POPUP_NO_AUTH,
    STR_ID_VAPP_AM_INSTALL_POPUP_NO_AUTH,
    MMI_RP_APP_AM_STR_MAX
}mmi_rp_app_am_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_AM = 32797 + 1, /* BASE_ID + 1 */
    SCR_ID_AM_LOADING,
    SCR_ID_AM_LAUNCH_APP_LOADING,
    SCR_ID_AM_MAIN,
    SCR_ID_AM_UPDATE_CDR,
    SCR_ID_AM_UPDATE_CDR_WAIT,
    SCR_ID_AM_DETAILS,
    SCR_ID_DLA_APP,
    SCR_ID_DLA_MAIN,
    SCR_ID_DLA_LIST,
    SCR_ID_DLA_LIST_DETAIL,
    SCR_ID_AM_PSMGR_APP,
    SCR_ID_AM_PSMGR_MAIN,
    MMI_RP_APP_AM_SCR_MAX
}mmi_rp_app_am_scr_enum;
/******************** Screen resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_APP_AM_VXML_LAYOUT_MAX
} mmi_rp_app_am_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_AM_APP_CALCULATOR_SHORTCUT = 32797 + 1, /* BASE_ID + 1 */
    IMG_ID_AM_APP_HEALTH_SHORTCUT,
    IMG_ID_AM_APP_STOPWATCH_SHORTCUT,
    IMG_ID_AM_APP_CONVERTER_SHORTCUT,
    IMG_ID_AM_APP_ZAKAT_SHORTCUT,
    IMG_ID_AM_APP_EGYPTCODE_SHORTCUT,
    IMG_ID_AM_APP_GIRLSLOT_SHORTCUT,
    IMG_ID_AM_APP_GOLDMINER_SHORTCUT,
    IMG_ID_AM_APP_HAPPYEGG_SHORTCUT,
    IMG_ID_AM_APP_HAPPYWAR_SHORTCUT,
    IMG_ID_AM_APP_KINGCOMBAT_SHORTCUT,
    IMG_ID_AM_APP_MOTO_SHORTCUT,
    IMG_ID_AM_APP_PARKOUR_SHORTCUT,
    IMG_ID_AM_APP_TWITTER_SHORTCUT,
    IMG_ID_AM_APP_GAMELOFT_GLIVE_SHORTCUT,
    IMG_ID_AM_APP_GMOBI_APPSTORE_SHORTCUT,
    IMG_ID_AM_APP_MBOUNCE_APPSTORE_SHORTCUT,
    IMG_ID_AM_TITLE,
    IMG_ID_AM_STATE_UNDOWNLOAD,
    IMG_ID_AM_STATE_BG,
    IMG_ID_AM_STATE_SHORTCUT,
    IMG_ID_AM_HIGHLIGHT,
    IMG_ID_AM_HIGHLIGHT_SCROLLBAR,
    IMG_ID_AM_APP_DEFAULT,
    IMG_ID_AM_LOADING,
    MMI_RP_APP_AM_IMG_MAX
}mmi_rp_app_am_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_APP_AM_DEF_H */
