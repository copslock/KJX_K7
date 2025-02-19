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
 *   mmi_rp_srv_wallpaper_def.h
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


#ifndef _MMI_RP_SRV_WALLPAPER_DEF_H
#define _MMI_RP_SRV_WALLPAPER_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_SETTING_WALLPAPER = 40998 + 1, /* BASE_ID + 1 */
    MENU_SETTING_WALLPAPER_HOMESCREEN,
    MENU_SETTING_WALLPAPER_LOCKSCREEN,
    MENU_SETTING_WALLPAPER_SYSTEM,
    MENU_SETTING_WALLPAPER_DOWNLOAD,
    MENU_SETTING_STATIC_WALLPAPER,
    MENU_ID_FMGR_FWD_WALLPAPER,
    MMI_RP_SRV_WALLPAPER_MENU_MAX
}mmi_rp_srv_wallpaper_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_WALLPAPER_SYSTEM = 40998 + 1, /* BASE_ID + 1 */
    STR_WALLPAPER_DOWNLOAD,
    STR_WP_IDLE_WP_DECODE_ERR,
    STR_ID_DISPCHAR_THEME_WALLPAPER,
    STR_ID_WALLPAPER_GALLERY,
    STR_ID_STATIC_WALLPAPER,
    STR_ID_VIDEO_WALLPAPER,
    STR_ID_HOMESCREEN_WALLPAPER,
    STR_ID_LOCKSCREEN_WALLPAPER,
    MMI_RP_SRV_WALLPAPER_STR_MAX
}mmi_rp_srv_wallpaper_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    SCR_MAIN_WALLPAPER = 40998 + 1, /* BASE_ID + 1 */
    SCR_MAIN_WALLPAPER_FIX,
    SCR_WALLPAPER_SYSTEM_LIST,
    SCR_WALLPAPER_VIEW,
    SCR_WALLPAPER_VIEW_2,
    SCR_WALLPAPER_DOWNLOAD_VIEW,
    SCR_ID_PHNSET_IDLE_CLOCK_TYPE,
    SCR_IDLE_SCR_DISP_WP_PREVIEW,
    SCR_IDLE_SCR_DISP_WPSS_WAITING,
    GRP_ID_DISPLAY_FMGR_COMMON,
    GRP_ID_WALLPAPER_MAIN,
    GRP_ID_WALLPAPER_SYSTEM,
    GRP_ID_WALLPAPER_SYSTEM_SUB,
    GRP_ID_WALLPAPER_PREVIEW,
    GRP_ID_WALLPAPER_LIVE_WALLPAPER,
    GRP_ID_WALLPAPER_ROTATE,
    GRP_ID_WALLPAPER_HOME_WALLPAPER,
    GRP_ID_WALLPAPER_LOCK_WALLPAPER,
    MMI_RP_SRV_WALLPAPER_SCR_MAX
}mmi_rp_srv_wallpaper_scr_enum;
/******************** Screen resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_SRV_WALLPAPER_VXML_LAYOUT_MAX
} mmi_rp_srv_wallpaper_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NVRAM_DISPCHAR_AVATAR_WPSS = 40998 + 1, /* BASE_ID + 1 */   /*       DOUBLE */ 
    NARAM_DISPCHAR_AVATAR_ONOFF,                                /*       DOUBLE */ 
    NVRAM_DISPCHAR_AVATAR_WPSS_SERIALNUM,                       /*       DOUBLE */ 
    NVRAM_DISPCHAR_AVATAR_ONOFF_SERIALNUM,                      /*       DOUBLE */ 
    NVRAM_WALLPAPER_ROTATE_STATUS,                              /*         BYTE */ 
    NVRAM_PHNSET_LIVE_WALLPAPER,                                /*         BYTE */ 
    NVRAM_FUNANDGAMES_SETWALLPAPER,                             /*        SHORT */ 
    RESTORE_DEFAULT_FUNANDGAMES_SETWALLPAPER,                   /*        SHORT */ 
    NVRAM_SETWALLPAPER_SUB,                                     /*        SHORT */ 
    RESTORE_DEFAULT_SETWALLPAPER_SUB,                           /*        SHORT */ 
    MMI_RP_SRV_WALLPAPER_MMI_CACHE_MAX
} mmi_rp_srv_wallpaper_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


#endif /* _MMI_RP_SRV_WALLPAPER_DEF_H */
