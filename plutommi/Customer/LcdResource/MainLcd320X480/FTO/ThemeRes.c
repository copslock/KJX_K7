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
/********************************************************************************
* Filename:
* ---------
*	ThemeRes.c
*
* Project:
* --------
*	MAUI
*
* Description:
* ------------
*	This file contains all themes
*
* Version:
* ------------
*	DEVELOPER VERSION
*
*******************************************************************************/
/******************************************************************************
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *============================================================================== 
*******************************************************************************/
#include "PixtelDatatypes.h"
#include "MMI_features.h"
#include "gui_themes.h"
#include "ThemeComponents.h"


#define MAX_MMI_THEMES 1
#if defined(__MMI_THEME_MAX_NUMBER__)
    #if (MAX_MMI_THEMES > __MMI_THEME_MAX_NUMBER__)
      #undef MAX_MMI_THEMES
      #define MAX_MMI_THEMES __MMI_THEME_MAX_NUMBER__
    #endif
#endif

const S32 mtk_n_themes=MAX_MMI_THEMES;
const MMI_theme theme_defaultTheme={
/*inputbox_filler*/
(UI_filled_area*)&inputbox_filler_defaultTheme,
/*scrollbar_background_filler*/
(UI_filled_area*)&scrollbar_background_filler_defaultTheme,
/*scrollbar_indicator_filler*/
(UI_filled_area*)&scrollbar_indicator_filler_defaultTheme,
/*title_filler*/
(UI_filled_area*)&title_filler_defaultTheme,
/*list_background_filler*/
(UI_filled_area*)&list_background_filler_defaultTheme,
/*list_normal_item_filler*/
(UI_filled_area*)&list_normal_item_filler_defaultTheme,
/*list_selected_item_filler*/
(UI_filled_area*)&list_selected_item_filler_defaultTheme,
/*list_disabled_item_filler*/
(UI_filled_area*)&list_disabled_item_filler_defaultTheme,
/*matrix_selected_item_filler*/
(UI_filled_area*)&matrix_selected_item_filler_defaultTheme,
/*list_main_menu_normal_item_filler*/
(UI_filled_area*)&list_main_menu_normal_item_filler_defaultTheme,
/*list_main_menu_selected_item_filler*/
(UI_filled_area*)&list_main_menu_selected_item_filler_defaultTheme,
/*list_main_menu_disabled_item_filler*/
(UI_filled_area*)&list_main_menu_disabled_item_filler_defaultTheme,
/*matrix_main_menu_selected_item_filler*/
(UI_filled_area*)&matrix_main_menu_selected_item_filler_defaultTheme,
/*general_background_filler*/
(UI_filled_area*)&general_background_filler_defaultTheme,
/*popup_description_background_filler*/
(UI_filled_area*)&popup_description_background_filler_defaultTheme,
/*inline_list_normal_item_filler*/
(UI_filled_area*)&inline_list_normal_item_filler_defaultTheme,
/*inline_list_selected_item_filler*/
(UI_filled_area*)&inline_list_selected_item_filler_defaultTheme,
/*inline_list_disabled_item_filler*/
(UI_filled_area*)&inline_list_disabled_item_filler_defaultTheme,
/*inline_edit_focussed_filler*/
(UI_filled_area*)&inline_edit_focussed_filler_defaultTheme,
/*inline_edit_unfocussed_filler*/
(UI_filled_area*)&inline_edit_unfocussed_filler_defaultTheme,
/*inline_edit_noboundary_filler*/
(UI_filled_area*)&inline_edit_noboundary_filler_defaultTheme,
/*PIN_inputbox_background_filler*/
(UI_filled_area*)&PIN_inputbox_background_filler_defaultTheme,
/*PIN_screen_background_filler*/
(UI_filled_area*)&PIN_screen_background_filler_defaultTheme,
/*network_screen_background_filler*/
(UI_filled_area*)&network_screen_background_filler_defaultTheme,
/*CM_screen_background_filler*/
(UI_filled_area*)&CM_screen_background_filler_defaultTheme,
/*dialer_inputbox_background_filler*/
(UI_filled_area*)&dialer_inputbox_background_filler_defaultTheme,
/*virtual_keyboard_key_down_filler*/
(UI_filled_area*)&virtual_keyboard_key_down_filler_defaultTheme,
/*small_list_menu_normal_filler*/
(UI_filled_area*)&small_list_menu_normal_filler_defaultTheme,
/*small_list_screen_border_filler*/
(UI_filled_area*)&small_list_screen_border_filler_defaultTheme,
/*lite_disp_scr_bg_color*/
(color*)&lite_disp_scr_bg_color_defaultTheme,
/*LSK_up_text_color*/
(color*)&LSK_up_text_color_defaultTheme,
/*LSK_down_text_color*/
(color*)&LSK_down_text_color_defaultTheme,
/*LSK_disabled_text_color*/
(color*)&LSK_disabled_text_color_defaultTheme,
/*RSK_up_text_color*/
//(color*)&RSK_up_text_color_defaultTheme,
/*RSK_down_text_color*/
//(color*)&RSK_down_text_color_defaultTheme,
/*RSK_disabled_text_color*/
//(color*)&RSK_disabled_text_color_defaultTheme,
/*inputbox_normal_text_color*/
(color*)&inputbox_normal_text_color_defaultTheme,
/*inputbox_selected_text_color*/
(color*)&inputbox_selected_text_color_defaultTheme,
/*inputbox_selector_color*/
(color*)&inputbox_selector_color_defaultTheme,
/*inputbox_cursor_color*/
(color*)&inputbox_cursor_color_defaultTheme,
/*title_text_color*/
(color*)&title_text_color_defaultTheme,
/*title_text_border_color*/
(color*)&title_text_border_color_defaultTheme,
/*title_shortcut_text_color*/
(color*)&title_shortcut_text_color_defaultTheme,
/*list_normal_text_color*/
(color*)&list_normal_text_color_defaultTheme,
/*list_selected_text_color*/
(color*)&list_selected_text_color_defaultTheme,
/*list_disabled_text_color*/
(color*)&list_disabled_text_color_defaultTheme,
/*matrix_normal_text_color*/
(color*)&matrix_normal_text_color_defaultTheme,
/*matrix_selected_text_color*/
(color*)&matrix_selected_text_color_defaultTheme,
/*matrix_disabled_text_color*/
(color*)&matrix_disabled_text_color_defaultTheme,
/*formatted_inputbox_cursor_color*/
//(color*)&formatted_inputbox_cursor_color_defaultTheme,
/*list_main_menu_normal_text_color*/
(color*)&list_main_menu_normal_text_color_defaultTheme,
/*list_main_menu_selected_text_color*/
(color*)&list_main_menu_selected_text_color_defaultTheme,
/*list_main_menu_disabled_text_color*/
(color*)&list_main_menu_disabled_text_color_defaultTheme,
/*matrix_main_menu_normal_text_color*/
(color*)&matrix_main_menu_normal_text_color_defaultTheme,
/*matrix_main_menu_selected_text_color*/
(color*)&matrix_main_menu_selected_text_color_defaultTheme,
/*matrix_main_menu_disabled_text_color*/
(color*)&matrix_main_menu_disabled_text_color_defaultTheme,
/*popup_description_text_color*/
(color*)&popup_description_text_color_defaultTheme,
/*CM_screen_text_color*/
(color*)&CM_screen_text_color_defaultTheme,
/*datetime_bar_background_color*/
(color*)&datetime_bar_background_color_defaultTheme,
/*datetime_bar_duration_background_color*/
(color*)&datetime_bar_duration_background_color_defaultTheme,
/*datetime_bar_date_text_color*/
(color*)&datetime_bar_date_text_color_defaultTheme,
/*datetime_bar_time_text_color*/
(color*)&datetime_bar_time_text_color_defaultTheme,
/*datetime_bar_duration_text_color*/
(color*)&datetime_bar_duration_text_color_defaultTheme,
/*datetime_bar_AOC_text_color*/
(color*)&datetime_bar_AOC_text_color_defaultTheme,
/*information_bar_color*/
(color*)&information_bar_color_defaultTheme,
/*input_method_text_color*/
(color*)&input_method_text_color_defaultTheme,
/*remaining_length_text_color*/
(color*)&remaining_length_text_color_defaultTheme,
/*inline_edit_focussed_text_color*/
(color*)&inline_edit_focussed_text_color_defaultTheme,
/*inline_edit_unfocussed_text_color*/
(color*)&inline_edit_unfocussed_text_color_defaultTheme,
/*inline_edit_selected_text_color*/
(color*)&inline_edit_selected_text_color_defaultTheme,
/*inline_edit_selector_color*/
(color*)&inline_edit_selector_color_defaultTheme,
/*inline_edit_cursor_color*/
(color*)&inline_edit_cursor_color_defaultTheme,
/*inline_list_normal_text_color*/
(color*)&inline_list_normal_text_color_defaultTheme,
/*inline_list_selected_text_color*/
(color*)&inline_list_selected_text_color_defaultTheme,
/*inline_list_disabled_text_color*/
(color*)&inline_list_disabled_text_color_defaultTheme,
/*PIN_inputbox_normal_text_color*/
(color*)&PIN_inputbox_normal_text_color_defaultTheme,
/*PIN_inputbox_selected_text_color*/
(color*)&PIN_inputbox_selected_text_color_defaultTheme,
/*PIN_inputbox_selector_color*/
(color*)&PIN_inputbox_selector_color_defaultTheme,
/*PIN_inputbox_cursor_color*/
(color*)&PIN_inputbox_cursor_color_defaultTheme,
/*dialer_inputbox_normal_text_color*/
(color*)&dialer_inputbox_normal_text_color_defaultTheme,
/*dialer_inputbox_selected_text_color*/
(color*)&dialer_inputbox_selected_text_color_defaultTheme,
/*dialer_inputbox_selector_color*/
(color*)&dialer_inputbox_selector_color_defaultTheme,
/*dialer_inputbox_cursor_color*/
(color*)&dialer_inputbox_cursor_color_defaultTheme,
/*virtual_keyboard_key_down_text_color*/
(color*)&virtual_keyboard_key_down_text_color_defaultTheme,
/*virtual_keyboard_key_up_text_color*/
(color*)&virtual_keyboard_key_up_text_color_defaultTheme,
/*virtual_keyboard_dead_key_down_text_color*/
(color*)&virtual_keyboard_dead_key_down_text_color_defaultTheme,
/*virtual_keyboard_dead_key_up_text_color*/
(color*)&virtual_keyboard_dead_key_up_text_color_defaultTheme,
/*virtual_keyboard_disp_area_text_color*/
(color*)&virtual_keyboard_disp_area_text_color_defaultTheme,
/*idle_scr_date_color*/
(color*)&idle_scr_date_color_defaultTheme,
/*idle_scr_time_color*/
(color*)&idle_scr_time_color_defaultTheme,
/*idle_scr_date_border_color*/
(color*)&idle_scr_date_border_color_defaultTheme,
/*idle_scr_time_border_color*/
(color*)&idle_scr_time_border_color_defaultTheme,
/*idle_scr_network_name_color*/
(color*)&idle_scr_network_name_color_defaultTheme,
/*idle_scr_network_name_border_color*/
(color*)&idle_scr_network_name_border_color_defaultTheme,
/*idle_scr_network_status_color*/
(color*)&idle_scr_network_status_color_defaultTheme,
/*idle_scr_network_status_border_color*/
(color*)&idle_scr_network_status_border_color_defaultTheme,
/*idle_scr_network_extra_color*/
(color*)&idle_scr_network_extra_color_defaultTheme,
/*idle_scr_network_extra_border_color*/
(color*)&idle_scr_network_extra_border_color_defaultTheme,
/*scrollbar_size*/
6,
/*bg_opacity_full*/
255,
/*bg_opacity_high*/
120,
/*bg_opacity_medium*/
//120,
/*bg_opacity_low*/
150,
/*menuitem_single_line_highlight_filler*/
(UI_filled_area*)&menuitem_single_line_highlight_filler_defaultTheme,
/*menuitem_two_line_highlight_filler*/
(UI_filled_area*)&menuitem_two_line_highlight_filler_defaultTheme,
/*menuitem_multirow_highlight_filler*/
(UI_filled_area*)&menuitem_multirow_highlight_filler_defaultTheme,
/*menuitem_thick_highlight_filler*/
(UI_filled_area*)&menuitem_thick_highlight_filler_defaultTheme,
/*menuitem_thick_with_tab_highlight_filler*/
(UI_filled_area*)&menuitem_thick_with_tab_highlight_filler_defaultTheme,
/*symbol_picker_highlight_filler*/
(UI_filled_area*)&symbol_picker_highlight_filler_defaultTheme,
/*matrix_highlight_filler*/
(UI_filled_area*)&matrix_highlight_filler_defaultTheme,
/*main_menu_bkg_filler*/
(UI_filled_area*)&main_menu_bkg_filler_defaultTheme,
/*sub_menu_bkg_filler*/
(UI_filled_area*)&sub_menu_bkg_filler_defaultTheme,
/*idle_bkg_filler*/
(UI_filled_area*)&idle_bkg_filler_defaultTheme,
/*popup_text_color*/
(color*)&popup_text_color_defaultTheme,
/*idle_scr_weekday_color*/
(color*)&idle_scr_weekday_color_defaultTheme,
/*idle_scr_weekday_border_color*/
(color*)&idle_scr_weekday_border_color_defaultTheme,
/*date_text_color*/
(color*)&date_text_color_defaultTheme,
/*date_text_border_color*/
(color*)&date_text_border_color_defaultTheme,
/*time_text_color*/
(color*)&time_text_color_defaultTheme,
/*time_text_border_color*/
(color*)&time_text_border_color_defaultTheme,
/*analog_hand_hour_color*/
(color*)&analog_hand_hour_color_defaultTheme,
/*analog_hand_min_color*/
(color*)&analog_hand_min_color_defaultTheme,
/*analog_axis_color*/
(color*)&analog_axis_color_defaultTheme,
/*softkey_text_border_color*/
(color*)&softkey_text_border_color_defaultTheme,
/*softkey_bar_bkg_filler*/
(UI_filled_area*)&softkey_bar_bkg_filler_defaultTheme,
/*tab_title_filler*/
(UI_filled_area*)&tab_title_filler_defaultTheme,
/*tab_title_text_color*/
(color*)&tab_title_text_color_defaultTheme,
/*tab_title_text_border_color*/
(color*)&tab_title_text_border_color_defaultTheme,
/*tab_title_shortcut_text_color*/
(color*)&tab_title_shortcut_text_color_defaultTheme,
/*calendar_title_text_color*/
(color*)&calendar_title_text_color_defaultTheme,
/*calendar_horizontal_text_color*/
(color*)&calendar_horizontal_text_color_defaultTheme,
/*calendar_horizontal_border_color*/
(color*)&calendar_horizontal_border_color_defaultTheme,
/*calendar_vertical_text_color*/
(color*)&calendar_vertical_text_color_defaultTheme,
/*calendar_horizontal_string_text_color*/
(color*)&calendar_horizontal_string_text_color_defaultTheme,
/*calendar_one_task_color*/
(color*)&calendar_one_task_color_defaultTheme,
/*calendar_more_task_color*/
(color*)&calendar_multi_task_color_defaultTheme,
/*calendar_menstrual_color*/
(color*)&calendar_menstrual_color_defaultTheme,
/*calendar_PP_color*/
(color*)&calendar_PP_color_defaultTheme,
/*calendar_danger_color*/
(color*)&calendar_danger_color_defaultTheme,
/*calendar_invalid_color*/
(color*)&calendar_invalid_color_defaultTheme,
/*calendar_valid_text_color*/
(color*)&calendar_valid_text_color_defaultTheme,
/*calendar_invalid_text_color*/
(color*)&calendar_invalid_text_color_defaultTheme,
/*calendar_highlight_color*/
(color*)&calendar_highlight_color_defaultTheme,
/*calendar_infobox_bg_color*/
(color*)&calendar_infobox_bg_color_defaultTheme,
/*calendar_infobox_entry_bg_color*/
(color*)&calendar_infobox_entry_bg_color_defaultTheme,
/*calendar_infobox_text_color*/
(color*)&calendar_infobox_text_color_defaultTheme,
/*status_icon_bar_filler*/
NULL,
/*thick_title_filler*/
(UI_filled_area*)&thick_title_filler_defaultTheme,
/*thick_title_text_color*/
(color*)&thick_title_text_color_defaultTheme,
/*thick_title_text_border_color*/
(color*)&thick_title_text_border_color_defaultTheme,
/*thick_title_shortcut_text_color*/
(color*)&thick_title_shortcut_text_color_defaultTheme,
/*rotated_bkg_filler*/
(UI_filled_area*)&rotated_bkg_filler_defaultTheme,
/*rotated_title_filler*/
(UI_filled_area*)&rotated_title_filler_defaultTheme,
/*small_screen_title_filler*/
(UI_filled_area*)&small_screen_title_filler_defaultTheme,
/*tab_normal_tab_filler*/
(UI_filled_area*)&tab_normal_tab_filler_defaultTheme,
/*tab_highlight_tab_filler*/
(UI_filled_area*)&tab_highlight_tab_filler_defaultTheme,
/*tab_blink_tab_filler*/
/*main_menu_bidegree_tab_highlight_filler*/
NULL,
/*matrix_main_menu_highlight_image*/
NULL,
(PU8)img_matrix_main_menu_highlight_image_defaultTheme,
/*main_menu_bidegree_tab_background_filler*/
(UI_filled_area*)&main_menu_bidegree_tab_background_filler_defaultTheme,
/*list_separator_color*/
//(color*)&list_separator_color_defaultTheme,
/*cascade_menu_separator_color*/
(color*)&cascade_menu_separator_color_defaultTheme,
/*cascade_menu_normal_text_color*/
(color*)&cascade_menu_normal_text_color_defaultTheme,
/*cascade_menu_selected_text_color*/
(color*)&cascade_menu_selected_text_color_defaultTheme,
/*cascade_menu_disabled_text_color*/
(color*)&cascade_menu_disabled_text_color_defaultTheme,
/*cascade_menu_border_color*/
(color*)&cascade_menu_border_color_defaultTheme,
/*cascade_menu_background_filler*/
(UI_filled_area*)&cascade_menu_background_filler_defaultTheme,
/*cascade_menu_highlight_filler*/
(UI_filled_area*)&cascade_menu_highlight_filler_defaultTheme,
/*cascade_menu_submenu_left_arrow_image*/
(PU8)img_cascade_menu_submenu_left_arrow_image_defaultTheme,
/*cascade_menu_submenu_right_arrow_image*/
(PU8)img_cascade_menu_submenu_right_arrow_image_defaultTheme,
/*list_check_selected_image*/
NULL,
/*list_check_unselected_image*/
NULL,
/*list_radio_selected_image*/
NULL,
/*list_radio_unselected_image*/
NULL,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img1_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img2_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img3_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img4_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img5_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img6_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img7_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img8_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img9_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img10_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img11_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img12_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img13_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img14_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img15_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img16_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img17_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img18_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img19_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img20_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img21_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img22_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img23_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img24_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img25_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img26_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img27_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img28_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img29_defaultTheme,
/*list menuitem auto number image 1*/
(PU8)img_list_menuitem_auto_number_img30_defaultTheme,

/*inline_edit_left_arrow_image*/
NULL,
/*inline_edit_right_arrow_image*/
NULL,
/*inputbox_base_line_color*/
(color*)&inputbox_base_line_color_defaultTheme,
/*inputbox_ems_cr_base_line_color*/
(color*)&inputbox_ems_cr_base_line_color_defaultTheme,
/*dialer_inputbox_text_color*/
(color*)&dialer_inputbox_text_color_defaultTheme,
/*dialer_inputbox_text_border_color*/
(color*)&dialer_inputbox_text_border_color_defaultTheme,
/*softkey_lsk_down_filler*/
/*softkey_lsk_up_filler*/
NULL,
/*softkey_rsk_down_filler*/
//(UI_filled_area*)&softkey_rsk_down_filler_defaultTheme,
/*softkey_rsk_up_filler*/
NULL,
/*calendar_title_bg_color*/
(color*)&calendar_title_bg_color_defaultTheme,
/*calendar_horizontal_string_bg_color*/
(color*)&calendar_horizontal_string_bg_color_defaultTheme,
/*calendar_vertical_select_bg_color*/
(color*)&calendar_vertical_select_bg_color_defaultTheme,
/*calendar_cell_array_bg_color*/
(color*)&calendar_cell_array_bg_color_defaultTheme,
/*calendar_frame_line_color*/
(color*)&calendar_frame_line_color_defaultTheme,
/*calendar_cell_line_color*/
(color*)&calendar_cell_line_color_defaultTheme,
/*calendar_cell_current_text_color*/
(color*)&calendar_cell_current_text_color_defaultTheme,
/*calendar_popup_text_color*/
(color*)&calendar_popup_text_color_defaultTheme,
/*calendar_popup_bg_color*/
(color*)&calendar_popup_bg_color_defaultTheme,
/*calendar_popup_border_color*/
(color*)&calendar_popup_border_color_defaultTheme,
/*calendar_infobox_bg_alpha*/
10,
/*calendar_title_bg_alpha*/
70,
60,
/*calendar_horizontal_string_bg_alpha*/
0,
/*calendar_vertical_select_bg_alpha*/
60,
/*calendar_cell_array_bg_alpha*/
100,
/*calendar_frame_line_alpha*/
/*calendar_horizontal_string_text_for_idle_color*/
(color*)&calendar_horizontal_string_text_for_idle_color_defaultTheme,
/*calendar_horizontal_string_bg_for_idle_color*/
(color*)&calendar_horizontal_string_bg_for_idle_color_defaultTheme,
/*calendar_cell_valid_text_for_idle_color*/
(color*)&calendar_cell_valid_text_for_idle_color_defaultTheme,
/*calendar_cell_invalid_text_for_idle_color*/
(color*)&calendar_cell_invalid_text_for_idle_color_defaultTheme,
/*calendar_cell_array_bg_for_idle_color*/
(color*)&calendar_cell_array_bg_for_idle_color_defaultTheme,
/*calendar_cell_current_text_for_idle_color*/
(color*)&calendar_cell_current_text_for_idle_color_defaultTheme,
/*calendar_cell_highlight_for_idle_color*/
(color*)&calendar_cell_highlight_for_idle_color_defaultTheme,
/*calendar_frame_line_for_idle_color*/
(color*)&calendar_frame_line_for_idle_color_defaultTheme,
/*calendar_cell_line_for_idle_color*/
(color*)&calendar_cell_line_for_idle_color_defaultTheme,
/*calendar_horizontal_string_bg_for_idle_alpha*/
60,
/*calendar_cell_array_bg_for_idle_alpha*/
50,
/*calendar_cell_current_bg_for_idle_alpha*/
100,
/*calendar_cell_highlight_for_idle_alpha*/
0,
/*calendar_frame_line_for_idle_alpha*/
50,
/*calendar_cell_line_for_idle_alpha*/
30,
/*arrow_indication_color*/
(color*)&arrow_indication_color_defaultTheme,
/*arrow_indication_border_color*/
(color*)&arrow_indication_border_color_defaultTheme,
/*dcd_idle_bkg_filler*/
NULL,
/*dcd_idle_read_text_color*/
(color*)&dcd_idle_read_text_color_defaultTheme,
/*dcd_idle_unread_text_color*/
(color*)&dcd_idle_unread_text_color_defaultTheme,
/*dcd_channel_list_highlight_filler*/
NULL,
/*dcd_story_text_color*/
(color*)&dcd_story_text_color_defaultTheme,
/*dcd_story_visited_text_color*/
(color*)&dcd_story_visited_text_color_defaultTheme,
/*dcd_story_unvisited_text_color*/
(color*)&dcd_story_unvisited_text_color_defaultTheme,
/*dcd_story_highlight_bar_color*/
(color*)&dcd_story_highlight_bar_color_defaultTheme,
/*idle_scr_sim2_network_name_color*/
(color*)&idle_scr_sim2_network_name_color_defaultTheme,
/*idle_scr_sim2_network_name_border_color*/
(color*)&idle_scr_sim2_network_name_border_color_defaultTheme,
/*idle_scr_sim2_network_status_color*/
(color*)&idle_scr_sim2_network_status_color_defaultTheme,
/*idle_scr_sim2_network_status_border_color*/
(color*)&idle_scr_sim2_network_status_border_color_defaultTheme,
/*popup_full_height_bkg_image*/
NULL,
/*popup_content_text_color*/
//(color*)&popup_content_text_color_defaultTheme,
/*main_menu_title_color*/
(color*)&main_menu_title_color_defaultTheme,
/*main_menu_title_border_color*/
(color*)&main_menu_title_border_color_defaultTheme,
/*ime_underline_color*/
(color*)&ime_underline_color_defaultTheme,
/*ime_indicator_color*/
(color*)&ime_indicator_color_defaultTheme,
/*ime_focused_background_filler*/
(UI_filled_area*)&ime_focused_background_filler_defaultTheme,
/*ime_background_filler*/
(UI_filled_area*)&ime_background_filler_defaultTheme,
/*ime_focused_border_color*/
(color*)&ime_focused_border_color_defaultTheme,
/*ime_border_color*/
(color*)&ime_border_color_defaultTheme,
/*ime_separator_width*/
0,
/*ime_separator_normal_color*/
(color*)&ime_separator_normal_color_defaultTheme,
/*ime_focused_separator_color*/
(color*)&ime_focused_separator_color_defaultTheme,
/*ime_text_space*/
3,
/*ime_label_color*/
(color*)&ime_label_color_defaultTheme,
/*ime_cursor_color*/
(color*)&ime_cursor_color_defaultTheme,
/*ime_arrow_disable_color*/
(color*)&ime_arrow_disable_color_defaultTheme,
/*ime_arrow_down_color*/
(color*)&ime_arrow_down_color_defaultTheme,
/*ime_arrow_up_color*/
(color*)&ime_arrow_up_color_defaultTheme,
/*ime_cand_text_color*/
(color*)&ime_cand_text_color_defaultTheme,
/*ime_cand_highlighted_text_color*/
(color*)&ime_cand_highlighted_text_color_defaultTheme,
/*ime_cand_highlight_color*/
(color*)&ime_cand_highlight_color_defaultTheme,
/*ime_comp_text_color*/
(color*)&ime_comp_text_color_defaultTheme,
/*ime_comp_highlighted_text_color*/
(color*)&ime_comp_highlighted_text_color_defaultTheme,
/*ime_comp_highlight_color*/
(color*)&ime_comp_highlight_color_defaultTheme,
/*ime_input_text_color*/
(color*)&ime_input_text_color_defaultTheme,
/*ime_input_highlighted_text_color*/
(color*)&ime_input_highlighted_text_color_defaultTheme,
/*ime_input_highlight_color*/
(color*)&ime_input_highlight_color_defaultTheme,
/*ime_stroke_color*/
(color*)&ime_stroke_color_defaultTheme,
/*ime_highlighted_stroke_color*/
(color*)&ime_highlighted_stroke_color_defaultTheme,
/*ime_stroke_highlight_color*/
(color*)&ime_stroke_highlight_color_defaultTheme,
/*tab_special_filler*/
NULL,
/*mini_indicator_bg_color*/
//(color*)&mini_indicator_bg_color_defaultTheme,
/*mini_indicator_normal_color*/
//(color*)&mini_indicator_normal_color_defaultTheme,
/*mini_indicator_tab_color*/
//(color*)&mini_indicator_tab_color_defaultTheme,
/*media_player_content_text_color*/
(color*)&media_player_content_text_color_defaultTheme,
/*media_player_content_text_border_color*/
(color*)&media_player_content_text_border_color_defaultTheme,
/*two_line_first_line_text_color*/
//(color*)&two_line_first_line_text_color_defaultTheme,
/*two_line_first_line_highlight_text_color*/
//(color*)&two_line_first_line_highlight_text_color_defaultTheme,
/*two_line_second_line_text_color*/
(color*)&two_line_second_line_text_color_defaultTheme,
/*two_line_second_line_highlight_text_color*/
(color*)&two_line_second_line_highlight_text_color_defaultTheme,
/*two_line_second_line_selector_filler*/
//NULL,
/*two_line_second_line_selector_text_color*/
//(color*)&two_line_second_line_selector_text_color_defaultTheme,
/*multirow_first_line_text_color*/
//(color*)&multirow_first_line_text_color_defaultTheme,
/*multirow_first_line_highlight_text_color*/
//(color*)&multirow_first_line_highlight_text_color_defaultTheme,
/*multirow_second_line_text_color*/
//(color*)&multirow_second_line_text_color_defaultTheme,
/*multirow_second_line_highlight_text_color*/
//(color*)&multirow_second_line_highlight_text_color_defaultTheme,
/*multirow_third_line_text_color*/
(color*)&multirow_third_line_text_color_defaultTheme,
/*multirow_third_line_highlight_text_color*/
(color*)&multirow_third_line_highlight_text_color_defaultTheme,
/*list_grid_line_color*/
(color*)&list_grid_line_color_defaultTheme,
/*list_grid_line_alpha*/
30,
/*menuitem_single_line_highlight_without_scroll_filler*/
//(UI_filled_area*)&menuitem_single_line_highlight_filler_defaultTheme,
/*menuitem_two_line_highlight_without_scroll_filler*/
//(UI_filled_area*)&menuitem_two_line_highlight_filler_defaultTheme,
/*menuitem_multirow_highlight_without_scroll_filler*/
//(UI_filled_area*)&menuitem_multirow_highlight_filler_defaultTheme,
/*menuitem_thick_highlight_without_scroll_filler*/
//(UI_filled_area*)&menuitem_thick_highlight_filler_defaultTheme,
/*menuitem_thick_with_tab_highlight_without_scroll_filler*/
//(UI_filled_area*)&menuitem_thick_with_tab_highlight_filler_defaultTheme,
/*dialing_screen_bg_image*/
NULL,
/*dialing_screen_skey_up_image*/
NULL,
/*dialing_screen_skey_down_image*/
NULL,
/*dialing_screen_lkey_up_image*/
NULL,
/*dialing_screen_lkey_down_image*/
NULL,
/*voip_dialer_editor_text_color*/
(color*)&voip_dialer_editor_text_color_defaultTheme,
/*header_information_text_color*/
(color*)&header_information_text_color_defaultTheme,
/*CM_screen_popup_bkg_image*/
NULL,
/*popup_embedded_lsk_normal_up_filler*/
(UI_filled_area*)&popup_embedded_lsk_normal_up_filler_defaultTheme,
/*popup_embedded_lsk_normal_down_filler*/
(UI_filled_area*)&popup_embedded_lsk_normal_down_filler_defaultTheme,
/*popup_embedded_rsk_normal_up_filler*/
(UI_filled_area*)&popup_embedded_rsk_normal_up_filler_defaultTheme,
/*popup_embedded_rsk_normal_down_filler*/
(UI_filled_area*)&popup_embedded_rsk_normal_down_filler_defaultTheme,
/*popup_embedded_softkey_text_color*/
(color*)&popup_embedded_softkey_text_color_defaultTheme,
/*popup_embedded_softkey_text_border_color*/
(color*)&popup_embedded_softkey_text_border_color_defaultTheme,
/*popup_softkey_bar_filler*/
NULL,
/*small_list_menu_highlight_filler*/
(UI_filled_area*)&small_list_menu_highlight_filler_defaultTheme,
/*small_list_menu_highlight_text_color*/
(color*)&small_list_menu_highlight_text_color_defaultTheme,
/*small_list_menu_text_color*/
(color*)&small_list_menu_text_color_defaultTheme,
/*calendar_idle_large_current_day_text_color*/
(color*)&calendar_idle_large_current_day_text_color_defaultTheme,
/*calendar_idle_large_current_date_text_color*/
(color*)&calendar_idle_large_current_date_text_color_defaultTheme,
/*calendar_infobox_entry_alpha*/
50,
/*calendar_idle_bg_image*/
NULL,
/*icon_bar_hint_text_color*/
(color*)&icon_bar_hint_text_color_defaultTheme,
/*icon_bar_hint_filler*/
(UI_filled_area*)&icon_bar_hint_filler_defaultTheme,
/*alphabet_bar_highlight_color*/
//(color*)&alphabet_bar_highlight_color_defaultTheme,
/*alphabet_bar_highlight_alpha*/
//0,
/*virtual_keyboard_key_disabled_bg_color*/
(color*)&virtual_keyboard_key_disabled_bg_color_defaultTheme,
/*virtual_keyboard_key_disabled_bg_alpha*/
60,
/*virtual_keyboard_key_disabled_text_color*/
(color*)&virtual_keyboard_key_disabled_text_color_defaultTheme,
/*virtual_keyboard_key_large_icon_left_image*/
NULL,
/*virtual_keyboard_key_large_icon_right_image*/
NULL,
/*information_bar_alpha*/
20,
/*special_screen_bkg_filler*/
(UI_filled_area*)&special_screen_bkg_filler_defaultTheme,
/*small_list_menu_highlight_without_scrollbar_filler*/
//(UI_filled_area*)&small_list_menu_highlight_without_scrollbar_filler_defaultTheme,
/*virtual_keyboard_bg_color*/
//(color*)&virtual_keyboard_bg_color_defaultTheme,
/*virtual_keyboard_bg_alpha*/
//0,
/*virtual_keyboard_key_bg_color*/
//(color*)&virtual_keyboard_key_bg_color_defaultTheme,
/*virtual_keyboard_key_bg_alpha*/
//0,
/*virtual_keyboard_key_border_color*/
//(color*)&virtual_keyboard_key_border_color_defaultTheme,
/*virtual_keyboard_key_border_alpha*/
//0,
/*virtual_keyboard_key_disable_color*/
//(color*)&virtual_keyboard_key_disable_color_defaultTheme,
/*virtual_keyboard_key_disable_alpha*/
//0,
/*virtual_keyboard_key_disable_border_color*/
//(color*)&virtual_keyboard_key_disable_border_color_defaultTheme,
/*virtual_keyboard_key_disable_border_alpha*/
//0,
/*virtual_keyboard_key_highlight_bg_color*/
//(color*)&virtual_keyboard_key_highlight_bg_color_defaultTheme,
/*virtual_keyboard_key_highlight_bg_alpha*/
//0,
/*virtual_keyboard_key_highlight_border_color*/
//(color*)&virtual_keyboard_key_highlight_border_color_defaultTheme,
/*virtual_keyboard_key_highlight_border_alpha*/
//0,
/*virtual_keyboard_key_popup_hint_text_color*/
//(color*)&virtual_keyboard_key_popup_hint_text_color_defaultTheme,
/*dialing_screen_lkey_disable_image*/
NULL,
/*ime_information_bar_background_filler*/
(UI_filled_area*)&ime_information_bar_background_filler_defaultTheme,
/*inline_datatime_focussed_filler*/
(UI_filled_area*)&inline_datetime_focussed_filler_defaultTheme,
/*inline_datatime_unfocussed_filler*/
(UI_filled_area*)&inline_datetime_unfocussed_filler_defaultTheme,
/*cascade_menu_submenu_highlight_left_arrow_image*/
NULL,
/*cascade_menu_submenu_highlight_right_arrow_image*/
NULL,
/*uce_screen_subject_color*/
(color*)&uce_screen_subject_color_defaultTheme,
/*inline_multiline_readonly_bg_alpha*/
50,
/*inline_multiline_readonly_bg_color*/
(color*)&inline_multiline_readonly_bg_color_defaultTheme,
/*cascade_menu_submenu_disabled_left_arrow_image*/
NULL,
/*cascade_menu_submenu_disabled_right_arrow_image*/
/* the image of pre button in UCE screen */
/* the disabled image of pre button in UCE screen */
/* the image of next button in UCE screen */
/* the disabled image of next button in UCE screen */
/*tab_normal_l_tab_filler*/
NULL,
/*tab_normal_r_tab_filler*/
NULL,
/*tab_highlight_l_tab_filler*/
NULL,
/*tab_highlight_r_tab_filler*/
//(UI_filled_area*)NULL,
/*tab_blink_l_tab_filler*/
NULL,
/*tab_blink_r_tab_filler*/
NULL,
/* icon_bar_item_text_normal_color */
(color*)&icon_bar_item_text_normal_color_defaultTheme,
/* icon_bar_item_text_disable_color */
(color*)&icon_bar_item_text_disable_color_defaultTheme,
/* icon_bar_item_normal_left_background */
(PU8)img_icon_bar_item_normal_left_background_defaultTheme,
/* icon_bar_item_pressed_left_background */
(PU8)img_icon_bar_item_pressed_left_background_defaultTheme,
/* icon_bar_item_normal_right_background */
(PU8)img_icon_bar_item_normal_right_background_defaultTheme,
/* icon_bar_item_pressed_right_background */
(PU8)img_icon_bar_item_pressed_right_background_defaultTheme,
/* icon_bar_item_normal_left_right_background */
NULL,
/* icon_bar_item_pressed_left_right_background */
NULL,
/* icon_bar_item_normal_center_background */
(PU8)img_icon_bar_item_normal_center_background_defaultTheme,
/* icon_bar_item_pressed_center_background */
(PU8)img_icon_bar_item_pressed_center_background_defaultTheme,
/* calendar_title_text_color_for_idle */
(color*)&calendar_title_text_color_for_idle_defaultTheme,
/* calendar_cell_event_text_color_for_idle */
(color*)&calendar_cell_event_text_color_for_idle_defaultTheme,
/* DOW_normal_background_filler */
NULL,//(UI_filled_area*)&DOW_normal_background_filler_defaultTheme,
/* DOW_highlight_background_filler */
NULL,//(UI_filled_area*)&DOW_highlight_background_filler_defaultTheme,
/* DOW_cell_normal_selected_filler */
NULL,//(UI_filled_area*)&DOW_cell_normal_selected_filler_defaultTheme,
/* DOW_cell_focus_selected_filler */
NULL,//(UI_filled_area*)&DOW_cell_focus_selected_filler_defaultTheme,
/* DOW_cell_highlight_filler */
NULL,//(UI_filled_area*)&DOW_cell_highlight_filler_defaultTheme,
/* virtual_keyboard_normal_popup_background */
NULL,
/* inline_item_color_select_highlighted_index_image */
(PU8)img_inline_item_color_select_highlighted_index_image_defaultTheme,
/* inline_item_color_select_highlighted_bg_image */
(PU8)img_inline_item_color_select_highlighted_bg_image_defaultTheme,
/* inline_item_color_select_unhighlighted_bg_image */
(PU8)img_inline_item_color_select_unhighlighted_bg_image_defaultTheme,
/* inilne_item_select_left_arrow_push_image */
NULL,
/* inilne_item_select_right_arrow_push_image */
NULL,
/* ime_cand_background_small */
NULL,
/* ime_cand_background_medium */
NULL,
/* ime_cand_background_large */
NULL,
/* ime_cand_focus_frame_small */
NULL,
/* ime_cand_focus_frame_medium */
NULL,
/* ime_cand_focus_frame_large */
NULL,
/* ime_cand_separator_small */
NULL,
/* ime_cand_separator_medium */
NULL,
/* ime_cand_separator_large */
NULL,
/* ime_cand_left_arrow_down_small */
NULL,
/* ime_cand_left_arrow_down_medium */
NULL,
/* ime_cand_left_arrow_down_large */
NULL,
/* ime_cand_left_arrow_up_small */
NULL,
/* ime_cand_left_arrow_up_medium */
NULL,
/* ime_cand_left_arrow_up_large */
NULL,
/* ime_cand_left_arrow_disable_small */
NULL,
/* ime_cand_left_arrow_disable_medium */
NULL,
/* ime_cand_left_arrow_disable_large */
NULL,
/* ime_cand_right_arrow_down_small */
NULL,
/* ime_cand_right_arrow_down_medium */
NULL,
/* ime_cand_right_arrow_down_large */
NULL,
/* ime_cand_right_arrow_up_small */
NULL,
/* ime_cand_right_arrow_up_medium */
NULL,
/* ime_cand_right_arrow_up_large */
NULL,
/* ime_cand_right_arrow_disable_small */
NULL,
/* ime_cand_right_arrow_disable_medium */
NULL,
/* ime_cand_right_arrow_disable_large */
NULL,
/* ime_cand_highlight_small */
NULL,
/* ime_cand_highlight_medium */
NULL,
/* ime_cand_highlight_large */
NULL,
/* ime_cand_dull_highlight_small */
NULL,
/* ime_cand_dull_highlight_medium */
NULL,
/* ime_cand_dull_highlight_large */
NULL,
/* ime_input_background_small */
NULL,
/* ime_input_background_medium */
NULL,
/* ime_input_background_large */
NULL,
/* thin vertical scrollbar image */
(PU8)img_scrollbar_v_scroll_button_image_defaultTheme,
/* thin horizontal scrollbar image */
(PU8)img_scrollbar_v_scroll_button_image_defaultTheme,
/* wider vertical scrollbar top button image */
NULL,
/* wider vertical scrollbar top clicked button image */
NULL,
/* wider vertical scrollbar bottom button image */
NULL,
/* wider vertical scrollbar bottom clicked button image */
NULL,
/* wider vertical scrollbar middle background image */
(PU8)img_wider_scrollbar_v_background_button_image_defaultTheme,
/* wider vertical scrollbar scroll button image */
(PU8)img_wider_scrollbar_v_scroll_button_image_defaultTheme,
/* wider vertical scrollbar scroll clicked button image */
(PU8)img_wider_scrollbar_v_scroll_clicked_button_image_defaultTheme,
/* wider horizontal scrollbar left button image */
NULL,
/* wider horizontal scrollbar left clicked button image */
NULL,
/* wider horizontal scrollbar right button image */
NULL,
/* wider horizontal scrollbar right clicked button image */
NULL,
/* wider horizontal scrollbar middle background image */
(PU8)img_wider_scrollbar_v_background_button_image_defaultTheme,
/* wider horizontal scrollbar scroll button image */
(PU8)img_wider_scrollbar_v_scroll_button_image_defaultTheme,
/* wider horizontal scrollbar scroll clicked button image */
(PU8)img_wider_scrollbar_v_scroll_clicked_button_image_defaultTheme,

NULL,
/* slide bar background image */
/* slide bar indicator image */
NULL,
/* tab bar left button image */
NULL,
/* tab bar right button image */
NULL,
/* inputbox_default_text_color */
(color*)&inputbox_default_text_color_defaultTheme,
/* clipboard_floating_menu_1_menu_button_normal_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_normal_bg_defaultTheme,
/* clipboard_floating_menu_1_menu_button_pressed_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_pressed_bg_defaultTheme,
/* clipboard_floating_menu_2_menu_left_button_normal_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_normal_bg_defaultTheme,
/* clipboard_floating_menu_2_menu_left_button_pressed_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_pressed_bg_defaultTheme,
/* clipboard_floating_menu_2_menu_right_button_normal_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_normal_bg_defaultTheme,
/* clipboard_floating_menu_2_menu_right_button_pressed_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_pressed_bg_defaultTheme,
/* clipboard_floating_menu_3_menu_middle_button_normal_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_normal_bg_defaultTheme,
/* clipboard_floating_menu_3_menu_middle_button_pressed_bg */
(PU8)img_clipboard_floating_menu_1_menu_button_pressed_bg_defaultTheme,
/* clipboard_floating_menu_arrow_button_normal_bg */
(PU8)img_clipboard_floating_menu_down_arrow_button_normal_bg_defaultTheme,
/* clipboard_floating_menu_arrow_button_pressed_bg */
(PU8)img_clipboard_floating_menu_down_arrow_button_pressed_bg_defaultTheme,
/* clipboard_floating_menu_text_color */
(color*)&clipboard_floating_menu_text_color_defaultTheme,
/* inputbox_remaining_counter_bg */
NULL,
/* inputbox_highlighter_alpha */
0,
/* icon_bar_item_text_border_normal_color */
(color*)&icon_bar_item_text_border_normal_color_defaultTheme,
/* icon_bar_item_text_border_disable_color */
(color*)&icon_bar_item_text_border_disable_color_defaultTheme,
/* softkey_down_text_border_color */
(color*)&softkey_down_text_border_color_defaultTheme,
/* softkey_disabled_text_border_color */
(color*)&softkey_disabled_text_border_color_defaultTheme,
/* CM_screen_text_border_color */
(color*)&CM_screen_text_border_color_defaultTheme,
/* ime_cand_dull_highlighted_text_color */
//(color*)&lite_disp_scr_bg_color_defaultTheme,
/* slide_bar_focused_bg_image */
NULL,
/* slide_bar_focused_indicator_image */
NULL,
/* horizontal_select_bg_filler */
(UI_filled_area*)&horizontal_select_bg_filler_defaultTheme,
/* horizontal_select_focused_bg_filler */
(UI_filled_area*)&horizontal_select_focused_bg_filler_defaultTheme,
/* inline_item_progress_bar_highlight_bg_filler */
NULL,
/* inline_item_progress_bar_unhighlight_bg_filler */
NULL,
/* inline_item_progress_bar_gradient_progress_filler */
NULL,
/* inline_item_progress_bar_normal_progress_filler */
NULL,
/* inline_item_progress_bar_step_filler */
NULL,
/* inline_item_progress_bar_button_pressed_filler */
NULL,
/* inline_item_progress_bar_button_normal_filler */
NULL,
/* inline_item_progress_bar_text_color */
(color*)&inline_item_progress_bar_text_color_defaultTheme,
/* inline_item_displayonly_rdonly_style_bg_filler */
NULL,
/* inline_item_button_highlighted_pressed_bg_filler */
(UI_filled_area*)&inline_item_button_highlighted_pressed_bg_filler_defaultTheme,
/* inline_item_button_highlighted_normal_bg_filler */
(UI_filled_area*)&inline_item_button_highlighted_normal_bg_filler_defaultTheme,
/* inline_item_button_unhighlighted_pressed_bg_filler */
(UI_filled_area*)&inline_item_button_unhighlighted_pressed_bg_filler_defaultTheme,
/* inline_item_button_unhighlighted_normal_bg_filler */
(UI_filled_area*)&inline_item_button_unhighlighted_normal_bg_filler_defaultTheme,
/* inline_item_textedit_highlighted_bg_filler */
(UI_filled_area*)&inline_item_textedit_highlighted_bg_filler_defaultTheme,
/* inline_item_textedit_unhighlighted_bg_filler */
(UI_filled_area*)&inline_item_textedit_unhighlighted_bg_filler_defaultTheme,
/* clipboard_floating_menu_up_arrow_button_normal_bg_image */
(PU8)img_clipboard_floating_menu_down_arrow_button_normal_bg_defaultTheme,
/* clipboard_floating_menu_up_arrow_button_pressed_bg_image */
(PU8)img_clipboard_floating_menu_down_arrow_button_pressed_bg_defaultTheme,
/* calendar_current_bg_filler */
(UI_filled_area*)&calendar_current_bg_filler_defaultTheme,
/* calendar_current_bg_for_idle_filler */
(UI_filled_area*)&calendar_current_bg_for_idle_filler_defaultTheme,
/* popup_screen_bg_filler */
(UI_filled_area*)&popup_screen_bg_filler_defaultTheme,
/* rotated_popup_screen_bg_filler */
(UI_filled_area*)&rotated_popup_screen_bg_filler_defaultTheme,
/* editor_small_screen_border_color */
(color*)&editor_small_screen_border_color_defaultTheme,
/* editor_recipient_button_image */
NULL,
/* editor_recipient_button_text_color */
(color*)&editor_recipient_button_text_color_defaultTheme,
/* singleline_editor_bg_filler */
(UI_filled_area*)&singleline_editor_bg_filler_defaultTheme,
/* stopwatch_active_timer_text_color */
(color*)&stopwatch_active_timer_text_color_defaultTheme,
/* stopwatch_inactive_timer_text_color */
(color*)&stopwatch_inactive_timer_text_color_defaultTheme,
/* mms_viewer_progress_bar_img */
NULL
};

#ifndef __MMI_THEMES_V2_SUPPORT__
const MMI_theme* const mtk_MMI_themes[MAX_MMI_THEMES]={
#if (MAX_MMI_THEMES >= 1)
(MMI_theme *)&theme_defaultTheme
#endif
};
#else
const theme_details_struct mtk_MMI_themes[MAX_MMI_THEMES]={
#if (MAX_MMI_THEMES >= 1)
{
(MMI_theme *)&theme_defaultTheme,
NULL,
NULL
}
#endif
};
#endif
const char theme_phone_model[]="Pluto";

#ifdef __MTK_TARGET__
#pragma arm section rodata = "RESOURCE_1ST_CONTENT"
#endif

#ifdef __MMI_THEMES_V2_SUPPORT__
const CUSTPACK_THEME_HEADER mtk_theme_header =
{
    MAX_MMI_THEMES,
    (theme_details_struct *) mtk_MMI_themes,
    (char*) theme_phone_model
};
#else
const CUSTPACK_THEME_HEADER mtk_theme_header =
{
    MAX_MMI_THEMES,
    (MMI_theme **) mtk_MMI_themes,
    (char*) theme_phone_model
};
#endif

#ifdef __MTK_TARGET__
#pragma arm section rodata
#endif
