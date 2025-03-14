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
 * widget_paint_action.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * MsfAction button paint routines (aka. softkey)
 *
 * Author:
 * -------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#include "widget_linklist.h"
#include "widget.h"
#include "WguiCategoryGprot.h"
#include "wgui_softkeys.h"
#include "gui_typedef.h"
/****************************************************************
 paint action
 ***************************************************************/

/*****************************************************************************
 * FUNCTION
 *  widget_paint_action
 * DESCRIPTION
 *  
 * PARAMETERS
 *  parent      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void widget_paint_action(widget_header_struct *parent)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    widget_action_struct *action, *action_LSK, *action_RSK;
    void *first_key = NULL, *second_key = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (IS_CTK_TYPE(parent))
    {
        /* MsfAction for CTK window are dummy. They are left to be backward-compatible */
        WIDGET_LOG(WIDGET_LOG_GROUP, MMI_WIDGET_PAINT_ACTION_IN_CTK);
        return;
    }

    WGUI_CTX->LSK_mask = WGUI_CTX->RSK_mask = 0;
    action_LSK = action_RSK = NULL;

    foreach(parent, ACTION, action,
            {
                switch (action->action_mask)
                {
                    case (1 << MsfHelp):
                    case (1 << MsfBack):
                    case (1 << MsfCancel):
                    case (1 << MsfStop):
                    case (1 << MsfExit):
                        if (!second_key)
                        {
                            second_key = widget_string_content(action->text);
                            WGUI_CTX->RSK_mask = action->action_mask;
                            action_RSK = action;
                        }
                        break;
                    case (1 << MsfMenu):
                    case (1 << MsfSelect):
                    case (1 << MsfOk):
                        if (!first_key)
                        {
                            first_key = widget_string_content(action->text);
                            WGUI_CTX->LSK_mask = action->action_mask;
                            action_LSK = action;
                        }
                        break;
                }
            }
           );

    if (((action_RSK && action_RSK->priority == -1) && (action_LSK && action_LSK->priority == -1))/* action->priority == -1*/||
		((action_RSK && action_RSK->priority == -1) && (action_LSK == NULL)) ||
		((action_RSK == NULL) && (action_LSK && action_LSK->priority == -1)))
    {
        /* we don't want to update the action */
        return;
    }

#ifdef __MMI_TOUCH_SCREEN__
    if (action_LSK)
    {
        WPEN_CTX->current_LSK = _H(action_LSK);
    }
    if (action_RSK)
    {
        WPEN_CTX->current_RSK = _H(action_RSK);
    }
#endif /* __MMI_TOUCH_SCREEN__ */ 

    /*
     * Set action mask before this line (No visible changes yet) 
     * * Note that MsfEditor use another MMI category instead of widget screen, 
     * * and we do not draw MsfAction for MsfEditor on leaving the full-screen editor.
     */
    if (IS_EDITOR_TYPE(parent))
    {
        return;
    }

//     if (!((widget_browserv2_check_version() == WIDGET_BROWSER_V1) || (widget_browserv2_check_version() == WIDGET_BROWSER_V2_WITH_MMSV01_CALLER_MMS) || (!(IS_DIALOG_TYPE(parent)))))
    if (IS_DIALOG_TYPE(parent))
    {
        return;
    }
    set_left_softkey_label((UI_string_type) first_key);
    set_left_softkey_icon(NULL);
    SetLeftSoftkeyFunction(widget_MMI_key_handler, KEY_EVENT_UP);

    set_right_softkey_label((UI_string_type) second_key);
    set_right_softkey_icon(NULL);
    SetRightSoftkeyFunction(widget_MMI_key_handler, KEY_EVENT_UP);
#ifndef WIDGET_VIDEO_TWO_LAYER_SUPPORT
    widget_copy_bar_from_base_layer(WGUI_CTX->top_gdi_layer);
#endif
}
#ifdef WIDGET_CTK_MSF_MENU

/*****************************************************************************
 * FUNCTION
 *  widget_paint_ctk_action
 * DESCRIPTION
 *  set the LSK and RSK handler function for CTK Msf Menu screen.
 * PARAMETERS
 *  node        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void widget_paint_ctk_action(widget_header_struct *node)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    widget_action_struct *action, *action_LSK, *action_RSK;
    void *first_key = NULL, *second_key = NULL;
    ctk_string_id string_LSK = 0, string_RSK = 0;
    ctk_screen_handle scrid;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    WGUI_CTX->LSK_mask = WGUI_CTX->RSK_mask = 0;
    action_LSK = action_RSK = NULL;

    /* get the scrid by using ctk window handle */
    scrid = HDIa_widgetCtkGetScreenHandle((MsfWindowHandle)node);

    foreach(node, ACTION, action,
            {
                switch (action->action_mask)
                {
                    case (1 << MsfHelp):
                    case (1 << MsfBack):
                    case (1 << MsfCancel):
                    case (1 << MsfStop):
                    case (1 << MsfExit):
                        if (!second_key)
                        {
                            second_key = widget_string_content(action->text);
                            string_RSK = (ctk_string_id)widget_get_string_id(action->text);
                            WGUI_CTX->RSK_mask = action->action_mask;
                            action_RSK = action;
                        }
                        break;
                    case (1 << MsfMenu):
                    case (1 << MsfSelect):
                    case (1 << MsfOk):
                        if (!first_key)
                        {
                            first_key = widget_string_content(action->text);
                            string_LSK = (ctk_string_id)widget_get_string_id(action->text);
                            WGUI_CTX->LSK_mask = action->action_mask;
                            action_LSK = action;
                        }
                        break;
                    default:
                        ASSERT(0);
                        break;
                }
            }
           );

    if (((action_RSK && action_RSK->priority == -1) && (action_LSK && action_LSK->priority == -1))/* action->priority == -1*/||
        ((action_RSK && action_RSK->priority == -1) && (action_LSK == NULL)) ||
        ((action_RSK == NULL) && (action_LSK && action_LSK->priority == -1)))
    {
        /* we don't want to update the action */
        return;
    }

#ifdef __MMI_TOUCH_SCREEN__
    if (action_LSK)
    {
        WPEN_CTX->current_LSK = _H(action_LSK);
    }
    if (action_RSK)
    {
        WPEN_CTX->current_RSK = _H(action_RSK);
    }
#endif /* __MMI_TOUCH_SCREEN__ */ 

    set_left_softkey_label((UI_string_type) first_key);
    set_right_softkey_label((UI_string_type) second_key);
    /* set LSK and RSK handler function for ctk screen */
    ctk_screen_addLSK_UA(scrid, string_LSK, 0, NULL, widget_ctk_msf_menu_LSK_hdlr, KAL_TRUE);
    ctk_screen_addRSK_UA(scrid, string_RSK, 0, NULL, widget_ctk_msf_menu_RSK_hdlr, KAL_TRUE);
}

#endif /* WIDGET_CTK_MSF_MENU */ 

