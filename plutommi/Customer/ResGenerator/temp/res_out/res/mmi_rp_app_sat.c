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
 *   mmi_rp_app_sat.c
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
#include "CustDataProts.h"
#include "mmi_rp_app_sat_def.h"

/* Application specified header files for using old res IDs */
#include "MMI_features.h"
#include "MMIDataType.h"    /* for resource base */

#include "CustResDef.h"         /* for image/audio path */
#include "GlobalMenuItems.h"    /* for menu resource */

#include "GlobalResDef.h"
#include "mmi_rp_srv_editor_def.h"
#include "mmi_rp_srv_sat_def.h"
#include "mmi_rp_app_mainmenu_def.h"


/*****************************************************************************
* FUNCTION
*  mmi_rp_app_sat_populate
* DESCRIPTION
*  Automatically generated populate function for mmi_rp_app_sat_populate
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_rp_app_sat_populate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

/******************** Menu resource IDs - begin ********************/
    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SAT1_ENTRY,
        MAIN_MENU_SERVICES_MENUID,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_ID_SAT_MENU_TITLE,
        IMG_ID_SAT_SIM1_TITLE));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SAT_INPUT_DONE_OPT,
        MENU_ID_SAT_INPUT_OPTION,
        0,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_ORIGINAL,
        STR_GLOBAL_DONE,
        0));

    ADD_APPLICATION_MENUITEM5((
        MENU_ID_SAT_INPUT_OPTION,
        0,
        4,
        MENU_ID_SAT_INPUT_DONE_OPT,
        MENU_ID_EDITOR_OPT_INSERT_SYMBOL,
        MENU_ID_EDITOR_OPT_INPUT_METHOD,
        MENU_ID_EDITOR_OPT_INPUT_METHOD_OPTIONS,
        SHOW,
        NONMOVEABLE,
        MMI_RG_MENU_TYPE_OPTION,
        STR_GLOBAL_OPTIONS,
        0));

/******************** Menu resource IDs - finish ********************/

/******************** Menu Hilite/Hint Handlers - begin ********************/
    ADD_APPLICATION_MENUITEM_HILITE_HANDLER(MENU_ID_SAT1_ENTRY, mmi_service_hilite_sat_hdlr);
/******************** Menu Hilite/Hint Handlers - finish ********************/
}
