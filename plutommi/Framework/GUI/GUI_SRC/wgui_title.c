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
 *  wgui_title.c
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  title related funtions
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/*****************************************************************************
 * Include
 *****************************************************************************/

#include "MMI_features.h"
#include "MMIDataType.h"
#include "gui_themes.h"
#include "gui_setting.h"
#include "wgui.h"
#include "gui_menu_shortcut.h"
#include "gdi_include.h"        /* include for graphic lib */
#include "wgui_touch_screen.h"  /* for touch screen apis */
#include "MMIThemes.h"
#include "wgui_categories_util.h"
#include "Wgui_title.h"
#include "gui_title.h"
#include "wgui_tab_bars.h"
#include "wgui_include.h"


/*****************************************************************************
 * Define
 *****************************************************************************/

/*****************************************************************************
* Typedef
*****************************************************************************/

/*****************************************************************************
 * Variable
 *****************************************************************************/
/** Store the struct of title */
gui_title_struct g_wgui_title_bar;

/** Store the title string of current main lcd scrren */
UI_string_type MMI_title_string = NULL;

/** Store the address of title icon display on current main lcd scrren title bar */
PU8 MMI_title_icon = NULL;

/** Store the address of title icon display on current main lcd scrren title bar */
PU8 MMI_title_icon2 = NULL;


MMI_BOOL g_wgui_use_thick;

extern U16 title_bg_id; /* added for customized title background image */



/*****************************************************************************
 * Local Function
 *****************************************************************************/
static void wgui_title_set_parameter(void);
static void wgui_title_timer_callback(void);
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__	
static void wgui_title_shortcut_show_background(S32 x1, S32 y1, S32 x2, S32 y2);
#else
//#define wgui_title_shortcut_show_background(_arg1, _arg2, _arg3, _arg4) 0
#define wgui_title_shortcut_show_background 
#endif
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__
static void wgui_title_pre_key_down(void);
#else
#define wgui_title_pre_key_down() 
#endif
static void wgui_title_1_key_down(void);
static void wgui_title_2_key_down(void);
static void wgui_title_3_key_down(void);
static void wgui_title_4_key_down(void);
static void wgui_title_5_key_down(void);
static void wgui_title_6_key_down(void);
static void wgui_title_7_key_down(void);
static void wgui_title_8_key_down(void);
static void wgui_title_9_key_down(void);
static void wgui_title_0_key_down(void);

#define wgui_title_dummy_function UI_dummy_function
#define wgui_title_dummy_goto_item UI_dummy_function_s32

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_parameter
 * DESCRIPTION
 *  Dummy function used in MMI
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_set_parameter(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if ((gOnFullScreen & MMI_IN_FULL_SCREEN || gOnFullScreen & MMI_LEAVE_FULL_SCREEN) &&
        !(gOnFullScreen & MMI_LEAVE_FULL_IDLE_SCREEN) && !(gOnFullScreen & MMI_IN_JAVA_SCREEN))
    {
        gui_title_move(&g_wgui_title_bar, MMI_title_x, 0);
    }
    else
    {
        gui_title_move(&g_wgui_title_bar, MMI_title_x, MMI_title_y);
    }


    wgui_title_resize(MMI_title_width, MMI_title_height);
    gui_shortcut_set_index(&g_wgui_title_bar.sc, wgui_title_get_menu_shortcut_number());
#ifndef	__MMI_TITLE_BAR_NO_ICON_SHCT__

    if (MMI_title_icon2)
    {
        wgui_title_disable_menu_shortcut_display(MMI_TRUE);
    }
#endif
    gui_title_change(&g_wgui_title_bar, MMI_title_icon, MMI_title_icon2, (U8*) MMI_title_string);
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    if (!mmi_fe_get_r2l_state())
    {
        gui_shortcut_move(&g_wgui_title_bar.sc, g_wgui_title_bar.width - g_wgui_title_bar.sc.width, g_wgui_title_bar.y);
    }
    else
    {
        gui_shortcut_move(&g_wgui_title_bar.sc, g_wgui_title_bar.x, g_wgui_title_bar.y);
    }
#endif	
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_timer_callback
 * DESCRIPTION
 *  This function is called when the menu shortcut handler times out
 *
 *  Internal function
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_timer_callback(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    wgui_title_set_menu_shortcut_handler_display(MMI_FALSE);
    g_wgui_title_bar.sc.display = MMI_FALSE;
    #endif
    g_wgui_title_bar.sc.input_buffer[0] = 0;

    if ((!gui_shortcut_is_goto_callback()) || (gui_shortcut_get_index(&g_wgui_title_bar.sc) > gui_shortcut_get_max_number(&g_wgui_title_bar.sc)))
    {
        gui_shortcut_set_index(&g_wgui_title_bar.sc, wgui_title_get_menu_shortcut_number());
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
        gdi_layer_lock_frame_buffer();
        if (!g_wgui_title_bar.sc.display_disabled)
        {
            g_wgui_title_bar.sc.hide_callback(
                g_wgui_title_bar.sc.x,
                g_wgui_title_bar.sc.y,
                g_wgui_title_bar.sc.x + g_wgui_title_bar.sc.width - 1,
                g_wgui_title_bar.sc.y + g_wgui_title_bar.sc.height - 1);

            gui_shortcut_show(&g_wgui_title_bar.sc);
        }

        gdi_layer_unlock_frame_buffer();
        /* BLT together with the previous BLT region */
        if (!mmi_fe_get_r2l_state())
        {
        #ifdef __MMI_VUI_ENGINE__
            if(g_wgui_title_bar.venus_update_screen_callback)
            {
                g_wgui_title_bar.venus_update_screen_callback(g_wgui_title_bar.venus_update_screen_handle);
            }
            else
            {
         #endif
                gdi_layer_blt_previous(
                    g_wgui_title_bar.sc.x - GUI_SHORTCUT_INSERT_GAP,
                    g_wgui_title_bar.sc.y,
                    g_wgui_title_bar.sc.x + g_wgui_title_bar.sc.width - 1,
                    g_wgui_title_bar.sc.y + g_wgui_title_bar.sc.height - 1);
        #ifdef __MMI_VUI_ENGINE__
            }            
        #endif
        }
        else
        {
        #ifdef __MMI_VUI_ENGINE__
            if(g_wgui_title_bar.venus_update_screen_callback)
            {
                g_wgui_title_bar.venus_update_screen_callback(g_wgui_title_bar.venus_update_screen_handle);
            }
            else
            {
        #endif
                gdi_layer_blt_previous(
                    g_wgui_title_bar.sc.x + GUI_SHORTCUT_INSERT_GAP,
                    g_wgui_title_bar.sc.y,
                    g_wgui_title_bar.sc.x + g_wgui_title_bar.sc.width - 1,
                    g_wgui_title_bar.sc.y + g_wgui_title_bar.sc.height - 1);
        #ifdef __MMI_VUI_ENGINE__
            }
        #endif
        }
 #endif       
        return;
    }

////does not act when index < 0
    if(gui_shortcut_get_index(&g_wgui_title_bar.sc) - 1 < 0)
  		return;

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    gdi_layer_lock_frame_buffer();
#endif
    g_wgui_title_bar.pre_goto_callback(gui_shortcut_get_index(&g_wgui_title_bar.sc) - 1);

    if (wgui_title_dummy_goto_item != g_wgui_title_bar.pre_goto_callback)
    {
        gui_shortcut_set_index(&g_wgui_title_bar.sc, wgui_title_get_menu_shortcut_number());
    }
    
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    if (g_wgui_title_bar.icon2 == NULL)
    {
        wgui_title_show(GUI_TITLE_PART_SHORTCUT);
    }
    
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__
    if (is_enable_animated_title_effect())
    {
        wgui_title_start_animation();
    }
#endif /* __MMI_UI_ANIMATED_TITLE_EFFECT__ */
    gdi_layer_unlock_frame_buffer();
#endif
    g_wgui_title_bar.goto_callback(gui_shortcut_get_index(&g_wgui_title_bar.sc) - 1);
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    /* BLT together with the previous BLT region */
#ifdef __MMI_VUI_ENGINE__
    if(g_wgui_title_bar.venus_update_screen_callback)
    {
        g_wgui_title_bar.venus_update_screen_callback(g_wgui_title_bar.venus_update_screen_handle);
    }
    else
    {
#endif
        gdi_layer_blt_previous(
            MMI_content_x,
            MMI_content_y,
            MMI_content_x + MMI_content_width - 1,
            MMI_content_y + MMI_content_height - 1);
#ifdef __MMI_VUI_ENGINE__
    }
#endif
#endif
}

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
/*****************************************************************************
 * FUNCTION
 *  wgui_title_shortcut_show_background
 * DESCRIPTION
 *  This function is called when the menu shortcut handler times out
 *
 *  Internal function
 * PARAMETERS
 *  x       [IN]
 *  y       [IN]
 *  w       [IN]
 *  h       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_shortcut_show_background(S32 x1, S32 y1, S32 x2, S32 y2)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_wgui_title_bar.icon2 == NULL)
    {
        gui_title_show_background(&g_wgui_title_bar, x1, y1, x2 - x1 + 1, y2 - y1 + 1);
    }
}
#endif
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__
/*****************************************************************************
 * FUNCTION
 *  wgui_title_pre_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_pre_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (is_enable_animated_title_effect())
    {
        wgui_stop_animate_title();
    }

}
#endif /* __MMI_UI_ANIMATED_TITLE_EFFECT__ */


/*****************************************************************************
 * FUNCTION
 *  wgui_title_1_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_1_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '1');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_2_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_2_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '2');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_3_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_3_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '3');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_4_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_4_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '4');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_5_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_5_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '5');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_6_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_6_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '6');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_7_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_7_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '7');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_8_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_8_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/	
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '8');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_9_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_9_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '9');
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_0_key_down
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void wgui_title_0_key_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__	
    wgui_title_pre_key_down();
#endif
    gui_shortcut_handler_keyinput(&g_wgui_title_bar.sc, (UI_character_type) '0');
}

/*****************************************************************************
 * Extern Global Function
 *****************************************************************************/


/*****************************************************************************
 * FUNCTION
 *  wgui_title_create_ex
 * DESCRIPTION
 *  create title bar
 * PARAMETERS
 *  target_lcd       [IN]   the target lcd of title
 *  target_layer     [IN]   the target layer of title
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_create_ex(gdi_handle target_lcd, gdi_handle target_layer, gdi_handle alpha_blend_layer)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_create_ex(&g_wgui_title_bar, MMI_title_x, MMI_title_y, MMI_title_width, MMI_title_height, target_lcd, target_layer, alpha_blend_layer);

    gui_shortcut_register_callback(
        &g_wgui_title_bar.sc,
        wgui_title_timer_callback,
 #ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
        wgui_title_shortcut_show_background);
 #else
     NULL); 
 #endif
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_create
 * DESCRIPTION
 *  create title bar
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_create(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_create_ex(GDI_NULL_HANDLE, GDI_NULL_HANDLE, GDI_NULL_HANDLE);
    }


/*****************************************************************************
 * FUNCTION
 *  wgui_title_close
 * DESCRIPTION
 *  close title bar
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_close(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    MMI_title_icon = NULL;
    MMI_title_icon2 = NULL;
#endif	
    MMI_title_string = NULL;
    gui_title_close(&g_wgui_title_bar);
    wgui_reset_touch_title_bar_buttons();
    g_wgui_title_bar.pre_goto_callback = wgui_title_dummy_goto_item;
    g_wgui_title_bar.goto_callback = wgui_title_dummy_goto_item;
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_close
 * DESCRIPTION
 *  create title bar
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_thick(MMI_BOOL thick)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (thick != g_wgui_use_thick)
    {
        if (thick)
        {
            wgui_title_resize(MMI_title_width, MMI_THICK_TITLE_HEIGHT);
            gui_title_set_theme(&g_wgui_title_bar, current_thick_title_theme);
        }
        else
        {
            wgui_title_resize(MMI_title_width, MMI_THIN_TITLE_HEIGHT);
            gui_title_set_theme(&g_wgui_title_bar, current_window_title_theme);
        }

    }
    g_wgui_use_thick = thick;

}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_show
 * DESCRIPTION
 *  draw the title
 * PARAMETERS
 *  part        [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_show(U32 part)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL bitblt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    bitblt = gui_title_show(&g_wgui_title_bar, part);
    if (bitblt)
    {
    #ifdef __MMI_VUI_ENGINE__
        if(g_wgui_title_bar.venus_update_screen_callback)
        {
            g_wgui_title_bar.venus_update_screen_callback(g_wgui_title_bar.venus_update_screen_handle);
        }
        else
        {
    #endif        
            gdi_layer_blt_previous(
                g_wgui_title_bar.x,
                g_wgui_title_bar.y,
                g_wgui_title_bar.x + g_wgui_title_bar.width - 1,
                g_wgui_title_bar.y + g_wgui_title_bar.height - 1);
    #ifdef __MMI_VUI_ENGINE__
        }
    #endif
    }   

}

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__	
/*****************************************************************************
 * FUNCTION
 *  wgui_title_stop_icon_animation
 * DESCRIPTION
 *  stop animation on title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_stop_icon_animation(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_stop_icon1_animation();
    wgui_title_stop_icon2_animation();
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_stop_icon1_animation
 * DESCRIPTION
 *  stop left icon animation on title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_stop_icon1_animation(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 x1, x2, h;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_wgui_title_bar.icon_ani_handle != GDI_ERROR_HANDLE)
    {
        gdi_image_stop_animation(g_wgui_title_bar.icon_ani_handle);
        g_wgui_title_bar.icon_ani_handle = GDI_ERROR_HANDLE;
        gdi_layer_push_clip();
        gui_title_measure(&g_wgui_title_bar, GUI_TITLE_PART_ICON, &x1, &x2, &h);
        gui_title_show_background(&g_wgui_title_bar, x1, g_wgui_title_bar.y, x2 - x1 + 1, g_wgui_title_bar.height);
        gdi_layer_set_clip(
            x1,
            g_wgui_title_bar.y,
            x2,
            g_wgui_title_bar.y + g_wgui_title_bar.height);
        gdi_image_draw_animation_single_frame(
            x1,
            g_wgui_title_bar.y + ((g_wgui_title_bar.height - h) >> 1),
            (U8*) MMI_title_icon,
            0);
        gdi_layer_pop_clip();
    #ifdef __MMI_VUI_ENGINE__
        if(g_wgui_title_bar.venus_update_screen_callback)
        {
            g_wgui_title_bar.venus_update_screen_callback(g_wgui_title_bar.venus_update_screen_handle);
        }
        else
        {
    #endif
            gdi_layer_blt_previous(
                x1,
                g_wgui_title_bar.y,
                x2,
                g_wgui_title_bar.y + g_wgui_title_bar.height);
    #ifdef __MMI_VUI_ENGINE__
        }
    #endif
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_stop_icon2_animation
 * DESCRIPTION
 *  stop right icon animation on title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_stop_icon2_animation(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 x1, x2, h;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_wgui_title_bar.icon2_ani_handle != GDI_ERROR_HANDLE)
    {
        gdi_image_stop_animation(g_wgui_title_bar.icon2_ani_handle);
        g_wgui_title_bar.icon2_ani_handle = GDI_ERROR_HANDLE;
        gdi_layer_push_clip();
        gui_title_measure(&g_wgui_title_bar, GUI_TITLE_PART_ICON2, &x1, &x2, &h);
        gui_title_show_background(&g_wgui_title_bar, x1, g_wgui_title_bar.y, x2 - x1 + 1, g_wgui_title_bar.height);
        gdi_layer_set_clip(
            x1,
            g_wgui_title_bar.y,
            x2,
            g_wgui_title_bar.y + g_wgui_title_bar.height);
        gdi_image_draw_animation_single_frame(
            x1,
            g_wgui_title_bar.y + ((g_wgui_title_bar.height - h) >> 1),
            (U8*) MMI_title_icon2,
            0);
        gdi_layer_pop_clip();
    #ifdef __MMI_VUI_ENGINE__
        if(g_wgui_title_bar.venus_update_screen_callback)
        {
            g_wgui_title_bar.venus_update_screen_callback(g_wgui_title_bar.venus_update_screen_handle);
        }
        else
        {
    #endif
            gdi_layer_blt_previous(
                x1,
                g_wgui_title_bar.y,
                x2,
                g_wgui_title_bar.y + g_wgui_title_bar.height);
    #ifdef __MMI_VUI_ENGINE__
        }
    #endif
    }
}
#endif

/*****************************************************************************
 * FUNCTION
 *  wgui_title_move
 * DESCRIPTION
 *  move the title bar
 * PARAMETERS
 *  x       [IN]
 *  y       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_move(S32 x, S32 y)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_title_x = x;
    MMI_title_y = y;
    gui_title_move(&g_wgui_title_bar, x, y);
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__		
    if (!mmi_fe_get_r2l_state())
    {
        gui_shortcut_move(&g_wgui_title_bar.sc, g_wgui_title_bar.width - g_wgui_title_bar.sc.width, g_wgui_title_bar.y);
    }
    else
    {
        gui_shortcut_move(&g_wgui_title_bar.sc, g_wgui_title_bar.x, g_wgui_title_bar.y);
    }
#endif	
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_resize
 * DESCRIPTION
 *  resize the title bar
 * PARAMETERS
 *  width       [IN]
 *  height      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_resize(S32 width, S32 height)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_title_width = width;
    MMI_title_height = height;

    gui_title_resize(&g_wgui_title_bar, width, height);
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__		
    gui_shortcut_auto_resize(&g_wgui_title_bar.sc, height);
    if (!mmi_fe_get_r2l_state())
    {
        gui_shortcut_move(&g_wgui_title_bar.sc, g_wgui_title_bar.width - g_wgui_title_bar.sc.width, g_wgui_title_bar.y);
    }
    else
    {
        gui_shortcut_move(&g_wgui_title_bar.sc, g_wgui_title_bar.x, g_wgui_title_bar.y);
    }
#endif	
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_string
 * DESCRIPTION
 *  Get title's string
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
U8* wgui_title_get_string(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return (U8*)MMI_title_string;
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_style
 * DESCRIPTION
 *  set title bar style
 * PARAMETERS
 *  style       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_style(U32 style)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_set_style(&g_wgui_title_bar, style);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_unset_style
 * DESCRIPTION
 *  set title bar style
 * PARAMETERS
 *  style       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_unset_style(U32 style)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_unset_style(&g_wgui_title_bar, style);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_change
 * DESCRIPTION
 *  change the string and icon on title
 * PARAMETERS
 *  icon_ID         [IN]
 *  icon2_ID        [IN]
 *  text            [IN]
 *  flag            [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_change(U16 icon_ID, U16 icon2_ID, U8 *text, U32 flag)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__		
    if (flag & WGUI_TITLE_CHANGE_ICON)
    {
        MMI_title_icon = (PU8) get_image(icon_ID);
    }
    if (flag & WGUI_TITLE_CHANGE_ICON2)
    {
        MMI_title_icon2 = (PU8) get_image(icon2_ID);
        if (MMI_title_icon2)
        {
            wgui_title_disable_menu_shortcut_display(MMI_TRUE);
        }
        else
        {
            wgui_title_disable_menu_shortcut_display(MMI_FALSE);
        }
    }
#endif	
    if (flag & WGUI_TITLE_CHANGE_TEXT)
    {
        MMI_title_string = (UI_string_type) text;
    }
    gui_title_change(&g_wgui_title_bar, MMI_title_icon, MMI_title_icon2, (U8*) MMI_title_string);

}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_start_scrolling
 * DESCRIPTION
 *  start scrolling in title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_start_scrolling(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_style(GUI_TITLE_STYLE_SCROLLING);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_stop_scrolling
 * DESCRIPTION
 *  stop the scrolling in title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_stop_scrolling(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_unset_style(GUI_TITLE_STYLE_SCROLLING);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_register_keys
 * DESCRIPTION
 *  Registers the keys used by the menu shortcut handler
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_register_keys(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_keypads_enum i;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    SetKeyHandler(wgui_title_0_key_down, KEY_0, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_1_key_down, KEY_1, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_2_key_down, KEY_2, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_3_key_down, KEY_3, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_4_key_down, KEY_4, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_5_key_down, KEY_5, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_6_key_down, KEY_6, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_7_key_down, KEY_7, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_8_key_down, KEY_8, KEY_EVENT_DOWN);
    SetKeyHandler(wgui_title_9_key_down, KEY_9, KEY_EVENT_DOWN);
    for(i=KEY_0; i<=KEY_9; i++)
		SetKeyHandler(wgui_title_dummy_function, i, KEY_EVENT_REPEAT);


}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_register_callback
 * DESCRIPTION
 *  Registers the keys used by the menu shortcut handler
 * PARAMETERS
 *  pre_goto_funcptr        [IN]
 *  goto_funcptr            [IN]
 *  flag                    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_register_callback(void (*pre_goto_funcptr) (S32 i), void (*goto_funcptr) (S32 i), U32 flag)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_register_callback(&g_wgui_title_bar, pre_goto_funcptr, goto_funcptr, flag);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_shortcut_count
 * DESCRIPTION
 *  Sets the number of digits allowed in the menu shortcut
 *  handler. This is based on the number of items in the menu.
 * PARAMETERS
 *  n_items     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_shortcut_count(S32 n_items)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    S32 width;
#endif
    gui_title_struct *current_title;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        current_title = &MMI_horizontal_tab_bar.title;
    }
    else
    {
        current_title = &g_wgui_title_bar;
    }
    gui_shortcut_set_item_count(&(current_title->sc), n_items);
	#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
    width = gui_shortcut_auto_resize(&(current_title->sc), current_title->height);
    if (!mmi_fe_get_r2l_state())
    {
        gui_shortcut_move(&(current_title->sc), current_title->width - width, current_title->y);
    }
    else
    {
        gui_shortcut_move(&(current_title->sc), current_title->x, current_title->y);
    }
    #endif
    if (current_title == &g_wgui_title_bar)
    {
        if (current_title->has_title == MMI_TRUE)
        {
            wgui_title_show(GUI_TITLE_PART_ALL);
        }
    }
    
    /*if(pre_width != width)
    {
        if(current_title->show_text == MMI_TRUE)
        {
            wgui_title_show(GUI_TITLE_PART_ALL);
        }
    }*/
}


#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__	
/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_no_icon_shct
 * DESCRIPTION
 *  Sets the number of digits allowed in the menu shortcut
 *  handler. This is based on the number of items in the menu.
 * PARAMETERS
 *  no_icon_shct        [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_no_icon_shct(MMI_BOOL no_icon_shct)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_FTE_SUPPORT__
    /* don't allow shortcut show in FTE project */
    no_icon_shct = MMI_TRUE;
#endif /* __MMI_FTE_SUPPORT__ */

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_set_no_icon_shct(&MMI_horizontal_tab_bar.title, no_icon_shct);
    }
    else
    {
        gui_title_set_no_icon_shct(&g_wgui_title_bar, no_icon_shct);
    }
}
#endif

#ifdef __MMI_UI_TITLE_TRANSITION__


/*****************************************************************************
 * FUNCTION
 *  wgui_title_in_transition_blocking
 * DESCRIPTION
 *  is title transition in non block
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL wgui_title_in_transition_blocking(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return gui_title_in_transition_blocking(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_transition_enable
 * DESCRIPTION
 *  enable transition
 * PARAMETERS
 *  enable      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_transition_enable(MMI_BOOL enable)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_set_transition_enable(&g_wgui_title_bar, enable);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_is_transition_enable
 * DESCRIPTION
 *  is title transition enalbed
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL wgui_title_is_transition_enable(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return gui_title_is_transition_enable(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_transition
 * DESCRIPTION
 *  This functions sets the transition style for title
 * PARAMETERS
 *  style       [IN]        The style in which the title should transiate R2L or L2R
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_transition(gui_title_transition_enum style)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_set_transition(&g_wgui_title_bar, style);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_transition
 * DESCRIPTION
 *  This functions sets the transition style for title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
gui_title_transition_enum wgui_title_get_transition(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return gui_title_get_transition(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_transition_on_keys
 * DESCRIPTION
 *  This functions returns the transition style for title
 * PARAMETERS
 *  on_key      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_transition_on_keys(MMI_BOOL on_key)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_set_transition_on_keys(&g_wgui_title_bar, on_key);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_transition_on_keys
 * DESCRIPTION
 *  This functions returns the transition style for title
 * PARAMETERS
 *  void
 * RETURNS
 *  The style in which the title is transiating R2L or L2R
 *****************************************************************************/
MMI_BOOL wgui_title_get_transition_on_keys(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return gui_title_get_transition_on_keys(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  set_title_transition
 * DESCRIPTION
 *  This functions sets the transition style for title
 * PARAMETERS
 *  style       [IN]        The style in which the title should transiate R2L or L2R
 * RETURNS
 *  void
 *****************************************************************************/
void set_title_transition(wgui_transition_styles style)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_transition(style);
}


/*****************************************************************************
 * FUNCTION
 *  get_title_transition
 * DESCRIPTION
 *  This functions returns the transition style for title
 * PARAMETERS
 *  void
 * RETURNS
 *  The style in which the title is transiating R2L or L2R
 *****************************************************************************/
S32 get_title_transition(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return wgui_title_get_transition();
}


/*****************************************************************************
 * FUNCTION
 *  reset_title_transition
 * DESCRIPTION
 *  This functions resets the transition style for title to none
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void reset_title_transition(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_transition(WGUI_TRANSITION_NONE);
}


/*****************************************************************************
 * FUNCTION
 *  set_title_transition_based_on_keys
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void set_title_transition_based_on_keys(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_transition_on_keys(MMI_TRUE);
    wgui_title_set_transition(WGUI_TRANSITION_R2L);
}


/*****************************************************************************
 * FUNCTION
 *  is_mmi_title_transition_on_keys
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
S32 is_mmi_title_transition_on_keys(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return wgui_title_get_transition_on_keys();
}


/*****************************************************************************
 * FUNCTION
 *  reset_mmi_title_transition_on_keys
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void reset_mmi_title_transition_on_keys(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_transition_on_keys(MMI_FALSE);
}

#if(TITLE_TRANSITION_STYLE_NON_BLOCKING)

extern S32 g_title_prev_menu_shortcut;
extern S32 g_title_temp_last_shortcut;


/*****************************************************************************
 * FUNCTION
 *  wgui_title_tranisition_abort_cleanup_function
 * DESCRIPTION
 *  This functions is for clean up for title transition with timer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_tranisition_abort_cleanup_function(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_stop_transition_non_blocking();
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_stop_transition_non_blocking
 * DESCRIPTION
 *  This functions is for clean up for title transition with timer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_stop_transition_non_blocking(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_stop_transition_non_blocking(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_stop_transition_title_non_blocking
 * DESCRIPTION
 *  This functions is for stopping the transition title with timer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_stop_transition_title_non_blocking(void)
{

    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_stop_transition_non_blocking();

}


/*****************************************************************************
 * FUNCTION
 *  save_copy_original_title_x
 * DESCRIPTION
 *  This functions is for restoring the original title position.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void save_copy_original_title_x(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_wgui_title_bar.prev_title_x = g_wgui_title_bar.x;
}


/*****************************************************************************
 * FUNCTION
 *  is_in_nonblocking_title_transition
 * DESCRIPTION
 *  This functions returns the flag for nonblocking effect
 * PARAMETERS
 *  void
 * RETURNS
 *  S32
 *****************************************************************************/
S32 is_in_nonblocking_title_transition(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return (S32) wgui_title_in_transition_blocking();
}


/*****************************************************************************
 * FUNCTION
 *  enable_title_transition
 * DESCRIPTION
 *  This functions is to enable title transition
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void enable_title_transition(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_transition_enable(MMI_TRUE);
    save_copy_original_title_x();
}


/*****************************************************************************
 * FUNCTION
 *  disable_title_transition
 * DESCRIPTION
 *  This functions is to disable title transition
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void disable_title_transition(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_transition_enable(MMI_FALSE);
    reset_title_transition();
    reset_mmi_title_transition_on_keys();
}


/*****************************************************************************
 * FUNCTION
 *  is_enable_title_transition
 * DESCRIPTION
 *  This functions is to check title transition enable/disable
 * PARAMETERS
 *  void
 * RETURNS
 *  S32
 *****************************************************************************/
S32 is_enable_title_transition(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return wgui_title_is_transition_enable();
}

#ifdef TITLE_TRANSITION_WITH_PREVIOUS_TITLE_MOVEMENT


/*****************************************************************************
 * FUNCTION
 *  get_prev_menu_shortcut
 * DESCRIPTION
 *  This functions is to get previous menu shortcut value
 * PARAMETERS
 *  void
 * RETURNS
 *  S32
 *****************************************************************************/
S32 get_prev_menu_shortcut(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return g_title_prev_menu_shortcut;
}


/*****************************************************************************
 * FUNCTION
 *  reset_prev_menu_shortcut
 * DESCRIPTION
 *  This functions is to reset prev_menu_shortcut value
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void reset_prev_menu_shortcut(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_title_prev_menu_shortcut = -1;
}


/*****************************************************************************
 * FUNCTION
 *  set_prev_menu_shortcut
 * DESCRIPTION
 *  This functions is to set prev_menu_shortcut value
 * PARAMETERS
 *  menu_shortcut_index     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void set_prev_menu_shortcut(S32 menu_shortcut_index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_title_prev_menu_shortcut = menu_shortcut_index;
}
#else /* TITLE_TRANSITION_WITH_PREVIOUS_TITLE_MOVEMENT */


/*****************************************************************************
 * FUNCTION
 *  set_previous_title_shortcut
 * DESCRIPTION
 *
 * PARAMETERS
 *  shortcut_no     [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void set_previous_title_shortcut(S32 shortcut_no)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_title_temp_last_shortcut = shortcut_no;
}

#endif /* TITLE_TRANSITION_WITH_PREVIOUS_TITLE_MOVEMENT */
#endif /* (TITLE_TRANSITION_STYLE_NON_BLOCKING) */
#endif /* __MMI_UI_TITLE_TRANSITION__ */

#ifdef __MMI_UI_ANIMATED_TITLE_EFFECT__


/*****************************************************************************
 * FUNCTION
 *  wgui_title_stop_animation
 * DESCRIPTION
 *  Close the move title timer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_stop_animation(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_stop_animation(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_start_animation
 * DESCRIPTION
 *  Start to move title timer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_start_animation(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_start_animation(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_show_animate_image_frame_0
 * DESCRIPTION
 *  Displays the first frame of moving image for moving title
 * PARAMETERS
 *  x1      [IN]
 *  y1      [IN]
 *  x2      [IN]
 *  y2      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_show_animate_image_frame_0(S32 x1, S32 y1, S32 x2, S32 y2)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_show_animate_image_frame_0(&g_wgui_title_bar, x1, y1, x2, y2);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_is_animation_enabled
 * DESCRIPTION
 *  Displays the first frame of moving image for moving title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL wgui_title_is_animation_enabled(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return gui_title_is_animation_enabled(&g_wgui_title_bar);

}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_enable_animation
 * DESCRIPTION
 *  Displays the first frame of moving image for moving title
 * PARAMETERS
 *  enable_animation        [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_enable_animation(MMI_BOOL enable_animation)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_enable_animation(&g_wgui_title_bar, enable_animation);

}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_unset_animation_style
 * DESCRIPTION
 *  unset animation style
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_unset_animation_style(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_unset_animation_style(&g_wgui_title_bar);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_animation_style
 * DESCRIPTION
 *  unset animation style
 * PARAMETERS
 *  animated_style      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_animation_style(wgui_title_effect_styles animated_style)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_set_animation_style(&g_wgui_title_bar, animated_style);

}


/*****************************************************************************
 * FUNCTION
 *  wgui_draw_animate_title_image_frame_0
 * DESCRIPTION
 *  Displays the first frame of moving image for moving title
 * PARAMETERS
 *  x1      [IN]
 *  y1      [IN]
 *  x2      [IN]
 *  y2      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_draw_animate_title_image_frame_0(S32 x1, S32 y1, S32 x2, S32 y2)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_show_animate_image_frame_0(x1, y1, x2, y2);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_stop_animate_title
 * DESCRIPTION
 *  Close the move title timer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_stop_animate_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_stop_animation();
}


/*****************************************************************************
 * FUNCTION
 *  wgui_start_awnimate_title
 * DESCRIPTION
 *  Start to move title timer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_start_awnimate_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_start_animation();
}


/*****************************************************************************
 * FUNCTION
 *  is_enable_animated_title_effect
 * DESCRIPTION
 *  Tell about enabling or disabling of Title effect.
 * PARAMETERS
 *  void
 * RETURNS
 *  S32 enable_animated_title_effect
 *****************************************************************************/
S32 is_enable_animated_title_effect(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return wgui_title_is_animation_enabled();
}


/*****************************************************************************
 * FUNCTION
 *  disable_animated_title_effect
 * DESCRIPTION
 *  Disables animation effect
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void disable_animated_title_effect(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_enable_animation(MMI_FALSE);
}


/*****************************************************************************
 * FUNCTION
 *  enable_animated_title_effect
 * DESCRIPTION
 *  Disables animation effect
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void enable_animated_title_effect(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_enable_animation(MMI_TRUE);
}

#endif /* __MMI_UI_ANIMATED_TITLE_EFFECT__ */


/*****************************************************************************
 * FUNCTION
 *  draw_title_wap
 * DESCRIPTION
 *  Displays the title in wap
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void draw_title_wap(void)
{
#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__	
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL icon_shct_state;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    icon_shct_state = g_wgui_title_bar.no_icon_shct;
    wgui_title_set_no_icon_shct(MMI_FALSE);
#endif
    wgui_title_set_parameter();

    wgui_title_show(GUI_TITLE_PART_ALL);

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__	
    wgui_title_set_no_icon_shct(icon_shct_state);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  draw_title
 * DESCRIPTION
 *  Displays the title
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void draw_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_style(GUI_TITLE_STYLE_NORMAL);
    wgui_title_set_parameter();
    wgui_title_show(GUI_TITLE_PART_ALL);

}

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__	
/*****************************************************************************
 * FUNCTION
 *  wgui_stop_title_animation
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_stop_title_animation(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_stop_icon_animation();
}
#endif

/*****************************************************************************
 * FUNCTION
 *  draw_title_left_align
 * DESCRIPTION
 *  draw title left align
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void draw_title_left_align(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_style(GUI_TITLE_STYLE_LEFTALIGN);
    wgui_title_set_parameter();
    wgui_title_show(GUI_TITLE_PART_ALL);
}

/* For Draw Manager  */


/*****************************************************************************
 * FUNCTION
 *  move_title
 * DESCRIPTION
 *  Change the position of title
 * PARAMETERS
 *  x       [IN]
 *  y       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void move_title(S32 x, S32 y)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_move(x, y);
}

/* Add for Draw Manager */


/*****************************************************************************
 * FUNCTION
 *  resize_title
 * DESCRIPTION
 *  Change the size of title
 * PARAMETERS
 *  s32Width        [IN]
 *  s32Height       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void resize_title(S32 s32Width, S32 s32Height)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_resize(s32Width, s32Height);
}


/*****************************************************************************
 * FUNCTION
 *  ChangeTitleString
 * DESCRIPTION
 *  Chaneg title stribg
 * PARAMETERS
 *  string      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void ChangeTitleString(U8 *string)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_change(0, 0, string, WGUI_TITLE_CHANGE_TEXT);
}
	
/*****************************************************************************
 * FUNCTION
 *  ChangeTitleIcon
 * DESCRIPTION
 *  Chaneg title icon
 * PARAMETERS
 *  image_ID        [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void ChangeTitleIcon(U16 image_ID)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_change(image_ID, 0, NULL, WGUI_TITLE_CHANGE_ICON);
}


/*****************************************************************************
 * FUNCTION
 *  ChangeTitle
 * DESCRIPTION
 *  Chaneg title icon and string
 * PARAMETERS
 *  image_ID        [IN]
 *  string          [IN]        Of title bar
 * RETURNS
 *  void
 *****************************************************************************/
void ChangeTitle(U16 image_ID, U8 *string)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_change(image_ID, 0, string, WGUI_TITLE_CHANGE_ICON | WGUI_TITLE_CHANGE_TEXT);
}

/* Start scrolling title control */


/*****************************************************************************
 * FUNCTION
 *  draw_scrolling_title
 * DESCRIPTION
 *  Show scrolling title on title bar
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void draw_scrolling_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_set_style(GUI_TITLE_STYLE_SCROLLING);
    wgui_title_set_parameter();
    wgui_title_show(GUI_TITLE_PART_ALL);

}


/*****************************************************************************
 * FUNCTION
 *  setup_scrolling_title
 * DESCRIPTION
 *  set all parameters of scrolling title bar like scrolling text,width,icon
 *  scrolling timer call back .
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void setup_scrolling_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_change(0, 0, (U8*) MMI_title_string, WGUI_TITLE_CHANGE_TEXT);
    wgui_title_start_scrolling();
    //return;
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*****************************************************************************
 * FUNCTION
 *  wgui_set_title_bknd_display
 * DESCRIPTION
 *  set the display state of title background
 * PARAMETERS
 *  state       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_set_title_bknd_display(MMI_BOOL state)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (state)
    {
        wgui_title_unset_style(GUI_TITLE_STYLE_DISABLEBG);
    }
    else
    {
        wgui_title_set_style(GUI_TITLE_STYLE_DISABLEBG);
    }
}


/*****************************************************************************
 * FUNCTION
 *  register_menu_shortcut_handler
 * DESCRIPTION
 *  Registers the function to be called when a shortcut
 *  is being entered.
 * PARAMETERS
 *  f       [IN]        Is the function that is called as the user enters each
 * RETURNS
 *  void
 *****************************************************************************/
void register_menu_shortcut_handler(void (*f) (S32 i))
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        wgui_horizontal_tab_bar_shortcut_register_callback(
            f,
            wgui_title_dummy_goto_item,
            WGUI_TITLE_SHORTCUT_CHANGE_ALL);
    }
    else
    {
        wgui_title_register_callback(f, wgui_title_dummy_goto_item, WGUI_TITLE_SHORTCUT_CHANGE_ALL);
    }

}


/*****************************************************************************
 * FUNCTION
 *  register_menu_shortcut_selected
 * DESCRIPTION
 *  Registers the function to be called when menuitem is selected.
 * PARAMETERS
 *  f       [IN]        Is the function that is called when menuitem is selected.
 * RETURNS
 *  void
 *****************************************************************************/
void register_menu_shortcut_selected(void (*f) (S32 i))
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        wgui_horizontal_tab_bar_shortcut_register_callback(NULL, f, WGUI_TITLE_SHORTCUT_CHANGE_GOTO);
    }
    else
    {
        wgui_title_register_callback(NULL, f, WGUI_TITLE_SHORTCUT_CHANGE_GOTO);
    }

}


/*****************************************************************************
 * FUNCTION
 *  register_menu_shortcut_selected_only
 * DESCRIPTION
 *  Registers the function to be called to load items on demand.
 * PARAMETERS
 *  f       [IN]        Is the function that is called to load items on demand.
 * RETURNS
 *  void
 *****************************************************************************/
/* for category184screen to load items on demand */
void register_menu_shortcut_selected_only(void (*f) (S32 i))
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        wgui_horizontal_tab_bar_shortcut_register_callback(
            wgui_title_dummy_goto_item,
            f,
            WGUI_TITLE_SHORTCUT_CHANGE_ALL);
    }
    else
    {
        wgui_title_register_callback(wgui_title_dummy_goto_item, f, WGUI_TITLE_SHORTCUT_CHANGE_ALL);
    }

}

MMI_BOOL gMMI_touch_title_buttons = MMI_FALSE;


/*****************************************************************************
 * FUNCTION
 *  wgui_set_touch_title_bar_buttons
 * DESCRIPTION
 *  Sets the flag for showing the buttons in title bar.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_set_touch_title_bar_buttons(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gMMI_touch_title_buttons = MMI_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  wgui_reset_touch_title_bar_buttons
 * DESCRIPTION
 *  Resets the flag for showing the buttons in title bar.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_reset_touch_title_bar_buttons(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gMMI_touch_title_buttons = MMI_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  wgui_is_touch_title_bar_buttons
 * DESCRIPTION
 *  Checks for the flag for showing the buttons in title bar.
 * PARAMETERS
 *  void
 * RETURNS
 *  TRUE/FALSE
 *****************************************************************************/
MMI_BOOL wgui_is_touch_title_bar_buttons(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return (gMMI_touch_title_buttons);
}

#if defined(__MMI_TOUCH_SCREEN__)
/* function pointers for storing the title buttons handlers */
FuncPtr gMMI_touch_title_button1_down_handler;
FuncPtr gMMI_touch_title_button1_up_handler;
FuncPtr gMMI_touch_title_button2_down_handler;
FuncPtr gMMI_touch_title_button2_up_handler;


/*****************************************************************************
 * FUNCTION
 *  register_touch_button_handlers
 * DESCRIPTION
 *  Register the button handlers for UP and DOWN event.
 * PARAMETERS
 *  f1_up       [IN]        UP event handler of 1st button.
 *  f1_down     [IN]        DOWN event handler of 1st button.
 *  f2_up       [IN]        UP event handler of 2nd button.
 *  f2_down     [IN]        DOWN event handler of 2nd button.
 * RETURNS
 *  void
 *****************************************************************************/
void register_touch_button_handlers(FuncPtr f1_up, FuncPtr f1_down, FuncPtr f2_up, FuncPtr f2_down)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gMMI_touch_title_button1_up_handler = f1_up;
    gMMI_touch_title_button1_down_handler = f1_down;
    gMMI_touch_title_button2_up_handler = f2_up;
    gMMI_touch_title_button2_down_handler = f2_down;
}
#endif /* defined(__MMI_TOUCH_SCREEN__) */

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
/*****************************************************************************
 * FUNCTION
 *  gui_hide_menu_shortcut
 * DESCRIPTION
 *  Hide the menu shortcut
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void gui_hide_menu_shortcut(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_wgui_title_bar.sc.hide_callback(
                            g_wgui_title_bar.sc.x,
                            g_wgui_title_bar.sc.y,
                            g_wgui_title_bar.sc.width,
                            g_wgui_title_bar.sc.height);
}


/*****************************************************************************
 * FUNCTION
 *  show_menu_shortcut
 * DESCRIPTION
 *  Displays the shortcut number of the highlighted item
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void show_menu_shortcut(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_shortcut_show(&g_wgui_title_bar.sc);
}


/*****************************************************************************
 * FUNCTION
 *  gui_redraw_menu_shortcut
 * DESCRIPTION
 *  Displays the shortcut number of the highlighted item
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void gui_redraw_menu_shortcut(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        wgui_horizontal_redraw();
    }
    else if (g_wgui_title_bar.has_title)
    {
        gui_shortcut_set_index(&g_wgui_title_bar.sc, wgui_title_get_menu_shortcut_number());
        if (!g_wgui_title_bar.no_icon_shct)//
        {
            wgui_title_show(GUI_TITLE_PART_SHORTCUT);
        }
    }
}
#endif

/*****************************************************************************
 * FUNCTION
 *  create_menu_shortcut_handler
 * DESCRIPTION
 *  Creates the menu shortcut handler
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void create_menu_shortcut_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_shortcut_create_ex(
        &g_wgui_title_bar.sc,
        g_wgui_title_bar.x,
        g_wgui_title_bar.y,
        g_wgui_title_bar.width,
        g_wgui_title_bar.height,
        g_wgui_title_bar.target_lcd,
        g_wgui_title_bar.target_layer,
        g_wgui_title_bar.alpha_blend_layer);
}


/*****************************************************************************
 * FUNCTION
 *  register_menu_shortcut_keys
 * DESCRIPTION
 *  Registers the keys used by the menu shortcut handler
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void register_menu_shortcut_keys(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        wgui_horizontal_tab_bar_register_keys();
    }
    else
    {
        wgui_title_register_keys();
    }

}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
/*****************************************************************************
 * FUNCTION
 *  set_menu_item_count
 * DESCRIPTION
 *  Sets the number of digits allowed in the menu shortcut
 *  handler. This is based on the number of items in the menu.
 * PARAMETERS
 *  n_items     [IN]        Is the number of menu items in a screen
 * RETURNS
 *  Width in pixels of the rectangle required to
 *  display the menu shortcut number.
 *****************************************************************************/
S32 set_menu_item_count(S32 n_items)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        wgui_horizontal_set_shortcut_count(n_items);
    }
    else
    {
        wgui_title_set_shortcut_count(n_items);
    }

    return 0;
}
#endif

#ifndef __MMI_TITLE_BAR_NO_ICON_SHCT__
/*****************************************************************************
 * FUNCTION
 *  wgui_set_disable_shortcut_display
 * DESCRIPTION
 *  set the flag of shortcut display
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_set_disable_shortcut_display(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_disable_menu_shortcut_display(MMI_TRUE);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_reset_disable_shortcut_display
 * DESCRIPTION
 *  reset the flag of shortcut display
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_reset_disable_shortcut_display(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_title_disable_menu_shortcut_display(MMI_FALSE);
}


/*****************************************************************************
 * FUNCTION
 *  wgui_is_disable_shortcut_display
 * DESCRIPTION
 *  is the flag of shortcut display set?
 * PARAMETERS
 *  void
 * RETURNS
 * BOOL
 *****************************************************************************/
BOOL wgui_is_disable_shortcut_display(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return wgui_title_is_disable_shortcut_display();
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_menu_shortcut_handler_display
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_menu_shortcut_handler_display(MMI_BOOL menu_shortcut_handler_display)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        MMI_horizontal_tab_bar.title.sc.display = menu_shortcut_handler_display;
    }
    else
    {
        g_wgui_title_bar.sc.display = menu_shortcut_handler_display;
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_menu_shortcut_handler_display
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  BOOL
 *****************************************************************************/
MMI_BOOL wgui_title_get_menu_shortcut_handler_display(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        return MMI_horizontal_tab_bar.title.sc.display;
    }
    else
    {
        return g_wgui_title_bar.sc.display;
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_disable_menu_shortcut_display
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_disable_menu_shortcut_display(MMI_BOOL disable_displaye_menu_shortcut)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_FTE_SUPPORT__
    /* don't allow shortcut show in FTE project */
    disable_displaye_menu_shortcut = MMI_TRUE;
#endif /* __MMI_FTE_SUPPORT__ */

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        MMI_horizontal_tab_bar.title.sc.display_disabled = disable_displaye_menu_shortcut;
    }
    else if(dm_check_control_exist(g_dm_data.s32CatId, DM_TITLE1))
    {
        g_wgui_title_bar.sc.display_disabled = disable_displaye_menu_shortcut;
		g_wgui_title_bar.no_icon_shct = disable_displaye_menu_shortcut;
    }
	else
	{
	    g_wgui_title_bar.sc.display_disabled = disable_displaye_menu_shortcut;
		g_wgui_title_bar.no_icon_shct = disable_displaye_menu_shortcut;
	}
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_is_disable_shortcut_display
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *  BOOL
 *****************************************************************************/
MMI_BOOL wgui_title_is_disable_shortcut_display(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_FTE_SUPPORT__
    /* don't allow shortcut show in FTE project */
    return MMI_TRUE;
#else /* __MMI_FTE_SUPPORT__ */

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        return MMI_horizontal_tab_bar.title.sc.display_disabled;
    }
    else
    {
        return g_wgui_title_bar.sc.display_disabled;
    }
#endif	
}
#endif

/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_menu_shortcut_number
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_menu_shortcut_number(S32 menu_shortcut_number)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        MMI_horizontal_tab_bar.title.sc.input_number= menu_shortcut_number;
    }
    else
    {
        g_wgui_title_bar.sc.input_number = menu_shortcut_number;
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_menu_shortcut_number
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *
 *****************************************************************************/
S32 wgui_title_get_menu_shortcut_number(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        return MMI_horizontal_tab_bar.title.sc.input_number;
    }
    else
    {
        return g_wgui_title_bar.sc.input_number;
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_area
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *
 *****************************************************************************/
void wgui_title_get_area(S32 *x, S32 *y, S32 *width, S32 *height)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    *x = g_wgui_title_bar.x;
    *y = g_wgui_title_bar.y;
    *width = g_wgui_title_bar.width;
    *height = g_wgui_title_bar.height;
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_register_hide_callback
 * DESCRIPTION
 *  set title 's hide callback function
 * PARAMETERS
 *  hide_callback       [IN]        the title's new hide callback function
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_register_hide_callback(
        void (*hide_callback)(S32 x, S32 y, S32 w, S32 h))
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_register_hide_callback(&MMI_horizontal_tab_bar.title, hide_callback);
    }
    else
    {
        gui_title_register_hide_callback(&g_wgui_title_bar, hide_callback);
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_reset_hide_callback
 * DESCRIPTION
 *  reset title 's hide callback function
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_reset_hide_callback(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_reset_hide_callback(&MMI_horizontal_tab_bar.title);
    }
    else
    {
        gui_title_reset_hide_callback(&g_wgui_title_bar);
    }
}


#ifdef __MMI_SCREEN_SWITCH_EFFECT__
/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_text_info
 * DESCRIPTION
 *  get title's size and string
 * PARAMETERS
 *  text_width      [OUT]    the width of title's text
 *  text_height     [OUT]    the height of title's text
 *  text_content    [OUT]    the string of title's text
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_get_text_info(S32 *text_width, S32 *text_height, PU8 *text_content)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_get_text_info(&MMI_horizontal_tab_bar.title, text_width, text_height, text_content);
    }
    else
    {
        gui_title_get_text_info(&g_wgui_title_bar, text_width, text_height, text_content);
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_offset
 * DESCRIPTION
 *  set title's offset coordinate
 * PARAMETERS
 *  offset_x      [IN]    the new offset_x value of title
 *  offset_y      [IN]    the new offset_y value of title
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_offset(S32 offset_x, S32 offset_y)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        MMI_horizontal_tab_bar.title.offset_x = offset_x;
        MMI_horizontal_tab_bar.title.offset_y = offset_y;
    }
    else
    {
        g_wgui_title_bar.offset_x = offset_x;
        g_wgui_title_bar.offset_y = offset_y;
    }
}
#endif /* __MMI_SCREEN_SWITCH_EFFECT__ */


#ifdef __MMI_UI_TITLE_MINI_INDICATOR__
/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_mini_indicator_number
 * DESCRIPTION
 *
 * PARAMETERS
 *  S32
 * RETURNS
 * void
 *****************************************************************************/
void wgui_title_set_mini_indicator_number(S32 number)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 temp = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (number > 0)
    {
        temp = number;
    }

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        MMI_horizontal_tab_bar.title.number_of_indicator= temp;
    }
    else
    {
        g_wgui_title_bar.number_of_indicator = temp;
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_mini_indicator_highlight
 * DESCRIPTION
 *
 * PARAMETERS
 *  S32
 * RETURNS
 * void
 *****************************************************************************/
void wgui_title_set_mini_indicator_highlight(S32 highlight)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 temp = -1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (highlight > 0)
    {
        temp = highlight;
    }

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        MMI_horizontal_tab_bar.title.highlight_of_indicator= temp;
    }
    else
    {
        g_wgui_title_bar.highlight_of_indicator = temp;
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_mini_indicator_display
 * DESCRIPTION
 *
 * PARAMETERS
 *  MMI_BOOL
 * RETURNS
 * void
 *****************************************************************************/
void wgui_title_set_mini_indicator_display(MMI_BOOL display)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        MMI_horizontal_tab_bar.title.display_indicator= display;
    }
    else
    {
        g_wgui_title_bar.display_indicator = display;
    }
}

#endif


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_alpha_layer
 * DESCRIPTION
 *  set title alpha layer
 * PARAMETERS
 *  alpha_layer     [IN]    the new alpha layer of title
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_alpha_layer(gdi_handle alpha_layer)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_set_alpha_blend_layer(&MMI_horizontal_tab_bar.title, alpha_layer);
    }
    else
    {
        gui_title_set_alpha_blend_layer(&g_wgui_title_bar, alpha_layer);
    }
}

#ifdef __MMI_SUBLCD__
/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_target_lcd
 * DESCRIPTION
 *  set title target lcd
 * PARAMETERS
 *  target_lcd     [IN]    the new target lcd of title
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_target_lcd(gdi_handle target_lcd)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_set_target_lcd(&MMI_horizontal_tab_bar.title, target_lcd);
    }
    else
    {
        gui_title_set_target_lcd(&g_wgui_title_bar, target_lcd);
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_target_lcd
 * DESCRIPTION
 *  get title target lcd
 * PARAMETERS
 *  void
 * RETURNS
 *  title's target lcd
 *****************************************************************************/
gdi_handle wgui_title_get_target_lcd(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        return gui_title_get_target_lcd(&MMI_horizontal_tab_bar.title);
    }
    else
    {
        return gui_title_get_target_lcd(&g_wgui_title_bar);
    }

}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_reset_target_lcd
 * DESCRIPTION
 *  reset title target lcd
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_reset_target_lcd(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_reset_target_lcd(&MMI_horizontal_tab_bar.title);
    }
    else
    {
        gui_title_reset_target_lcd(&g_wgui_title_bar);
}
}
#endif

/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_target_layer
 * DESCRIPTION
 *  set title target layer
 * PARAMETERS
 *  target_layer     [IN]    the new target layer of title
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_target_layer(gdi_handle target_layer)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_set_target_layer(&MMI_horizontal_tab_bar.title, target_layer);
    }
    else
    {
        gui_title_set_target_layer(&g_wgui_title_bar, target_layer);
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_target_layer
 * DESCRIPTION
 *  get title target layer
 * PARAMETERS
 *  void
 * RETURNS
 *  title's target layer
 *****************************************************************************/
gdi_handle wgui_title_get_target_layer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        return gui_title_get_target_layer(&MMI_horizontal_tab_bar.title);
    }
    else
    {
        return gui_title_get_target_layer(&g_wgui_title_bar);
    }

}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_reset_target_layer
 * DESCRIPTION
 *  reset title target layer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_reset_target_layer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_reset_target_layer(&MMI_horizontal_tab_bar.title);
    }
    else
    {
        gui_title_reset_target_layer(&g_wgui_title_bar);
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_alpha_blend_layer
 * DESCRIPTION
 *  set title alpha_blend_layer
 * PARAMETERS
 *  alpha_blend_layer     [IN]    the new alpha_blend_layer of title
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_alpha_blend_layer(gdi_handle alpha_blend_layer)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_set_alpha_blend_layer(&MMI_horizontal_tab_bar.title, alpha_blend_layer);
    }
    else
    {
        gui_title_set_alpha_blend_layer(&g_wgui_title_bar, alpha_blend_layer);
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_get_alpha_blend_layer
 * DESCRIPTION
 *  get title alpha_blend_layer
 * PARAMETERS
 *  void
 * RETURNS
 *  title's target layer
 *****************************************************************************/
gdi_handle wgui_title_get_alpha_blend_layer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        return gui_title_get_alpha_blend_layer(&MMI_horizontal_tab_bar.title);
    }
    else
    {
        return gui_title_get_alpha_blend_layer(&g_wgui_title_bar);
    }
}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_reset_alpha_blend_layer
 * DESCRIPTION
 *  reset title alpha_blend_layer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_reset_alpha_blend_layer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (dm_check_control_exist(g_dm_data.s32CatId, DM_HORIZONTAL_TAB_BAR))
    {
        gui_title_reset_alpha_blend_layer(&MMI_horizontal_tab_bar.title);
    }
    else
    {
        gui_title_reset_alpha_blend_layer(&g_wgui_title_bar);
    }

}


/*****************************************************************************
 * FUNCTION
 *  wgui_title_set_in_wap
 * DESCRIPTION
 *  Set title in wap or not
 * PARAMETERS
 *  in_wap      [IN]    In wap screen or not
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_set_in_wap(MMI_BOOL in_wap)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_set_in_wap(in_wap);
}


#ifdef __MMI_VUI_ENGINE__

/*****************************************************************************
 * FUNCTION
 *  wgui_title_register_venus_update_screen
 * DESCRIPTION
 *  Register the venus update screen callback function and handle
 * PARAMETERS
 *  venus_update_screen_callback    [IN]    The venus update sceen callback function
 *  venus_update_screen_handle      [IN]    The venus update screen handle
 * RETURNS
 *  void
 *****************************************************************************/
void wgui_title_register_venus_update_screen(
        void (*venus_update_screen_callback)(void *handle),
        void *venus_update_screen_handle)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    gui_title_register_venus_update_screen(
        &g_wgui_title_bar, 
        venus_update_screen_callback,
        venus_update_screen_handle);
}

#endif /* __MMI_VUI_ENGINE__ */


