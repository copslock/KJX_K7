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
 *   mmi_rp_srv_editor_def.h
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


#ifndef _MMI_RP_SRV_EDITOR_DEF_H
#define _MMI_RP_SRV_EDITOR_DEF_H




/******************** Menu resource IDs - begin ********************/
typedef enum
{
    MENU_ID_EDITOR_OPT_INSERT_SYMBOL = 26130 + 1, /* BASE_ID + 1 */
    MENU_ID_EDITOR_OPT_INPUT_METHOD,
    MENU_ID_EDITOR_OPT_INPUT_METHOD_OPTIONS,
    MENU_ID_EDIT_OPTS,
    MENU_ID_EDITOR_CUI_OPT_DONE,
    MENU_ID_EDITOR_CUI_OPT_CANCEL,
    MENU_ID_EDITOR_CUI_OPT,
    MENU_ID_INLINE_EDITOR_OPT_DONE,
    MENU_ID_INLINE_EDITOR_OPT,
    MMI_RP_SRV_EDITOR_MENU_MAX
}mmi_rp_srv_editor_menu_enum;
/******************** Menu resource IDs - finish ********************/


/******************** String resource IDs - begin ********************/
typedef enum
{
    STR_INPUT_METHOD_MENU_INSERT_SYMBOLS = 26130 + 1, /* BASE_ID + 1 */
    STR_INPUT_METHOD_MENU_SELECT_SYMBOL,
    STR_INPUT_METHOD_OPTIONS,
    STR_INPUT_METHOD_ADVANCED_OPTIONS,
    STR_INPUT_METHOD_HANDWRITING_SPEED,
    STR_INPUT_METHOD_SETTINGS,
    STR_ID_INPUT_MODE_PINYIN,
    STR_ID_INPUT_MODE_BIHUA,
    STR_INPUT_METHOD_PREFERED_INPUT_METHOD,
    MMI_RP_SRV_EDITOR_STR_MAX
}mmi_rp_srv_editor_str_enum;
/******************** String resource IDs - finish ********************/


/******************** Screen resource IDs - begin ********************/
typedef enum
{
    GRP_ID_PHNSET_HANDWRITING = 26130 + 1, /* BASE_ID + 1 */
    MMI_RP_SRV_EDITOR_SCR_MAX
}mmi_rp_srv_editor_scr_enum;
/******************** Screen resource IDs - finish ********************/


/******************** Timer resource IDs - begin ********************/
typedef enum
{
    POPUP_TIMER = 26130 + 1, /* BASE_ID + 1 */
    POPUP_SUBLCD,
    MMI_RP_SRV_EDITOR_TIMER_MAX
}mmi_rp_srv_editor_timer_enum;
/******************** Timer resource IDs - finish ********************/
/******************** Template resource IDs - Begin ********************/
/******************** Template resource IDs - End ********************/

/******************** Venus XML resource IDs - Begin ********************/
typedef enum 
{

    MMI_RP_SRV_EDITOR_VXML_LAYOUT_MAX
} mmi_rp_srv_editor_vxml_layout_enum;
/******************** Venus XML resource IDs - End ********************/



/******************** MMI Cache IDs - Begin ********************/
typedef enum
{
    NVRAM_IME_SMART_MODE_CONFIG = 26130 + 1, /* BASE_ID + 1 */   /*         BYTE */ 
    NVRAM_IME_AUTO_CAPITALIZATION_FLAG,                         /*         BYTE */ 
    NVRAM_IME_AUTO_COMPLETION_FLAG,                             /*         BYTE */ 
    NVRAM_IME_ALPHABETIC_WORD_PREDICTION_FLAG,                  /*         BYTE */ 
    NVRAM_IME_CHINESE_WORD_PREDICTION_FLAG,                     /*         BYTE */ 
    NVRAM_IME_AUTO_SPACE_FLAG,                                  /*         BYTE */ 
    NVRAM_IME_VIBRATION_FLAG,                                   /*         BYTE */ 
    NVRAM_IME_SOUND_FEEDBACK_FLAG,                              /*         BYTE */ 
    NVRAM_IME_INPUT_PATTERN,                                    /*         BYTE */ 
    NVRAM_SETTING_PREFER_INPUT_METHOD,                          /*        SHORT */ 
    RESTORE_PREFER_INPUT_METHOD,                                /*        SHORT */ 
    NVRAM_SETTING_WRITING_LANG,                                 /*        SHORT */ 
    NVRAM_SETTING_WRITING_LANG_SUB,                             /*        SHORT */ 
    NVRAM_SETTING_ENABLED_WRITING_LANGUAGE,                     /*        SHORT */ 
    NVRAM_SETTING_PEN_SPEED,                                    /*         BYTE */ 
    NVRAM_SETTING_LANGUAGE_FOLLOW_VK,                           /*         BYTE */ 
    NVRAM_SETTING_HANDWRITING_ON,                               /*         BYTE */ 
    NVRAM_SETTING_PEN_WIDTH,                                    /*         BYTE */ 
    NVRAM_SETTING_STROKE_COLOR_INDEX,                           /*         BYTE */ 
    MMI_RP_SRV_EDITOR_MMI_CACHE_MAX
} mmi_rp_srv_editor_mmi_cache_enum;
/******************** MMI Cache IDs - End ********************/


/******************** Image resource IDs - begin ********************/
typedef enum
{
    IMG_ID_IME_VK_CHANGE_MODE = 26130 + 1, /* BASE_ID + 1 */
    IMG_ID_IME_VK_CHANGE_SETTING,
    MMI_RP_SRV_EDITOR_IMG_MAX
}mmi_rp_srv_editor_img_enum;
/******************** Image resource IDs - finish ********************/


#endif /* _MMI_RP_SRV_EDITOR_DEF_H */
