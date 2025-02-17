/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2006
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
 *
 * Filename:
 * ---------
 *  custom_events_notify.c
 *
 * Project:
 * --------
 *   MAUI Project
 *
 * Description:
 * ------------
 *   
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifdef PLUTO_MMI
#include "MMI_features.h"
#include "Custom_events_notify.h"
#include "mmi_rp_app_sms_def.h"
#include "mmi_frm_scenario_gprot.h"
#include "ProfilesSrvGprot.h"
#include "GlobalResDef.h"
#include "NotificationGprot.h"
#include "mmi_frm_events_gprot.h"
#include "mmi_rp_app_alarm_def.h"
#include "MMIDataType.h"
#include "kal_public_api.h"
#include "DebugInitDef_Int.h"
#ifdef __MMI_NCENTER_SUPPORT__
#include "mmi_rp_app_sat_def.h"
#endif
#ifdef __MMI_EMAIL__
#include "mmi_rp_app_email_def.h"
#endif

/***************************************************************************** 
 * Define
 *****************************************************************************/


/***************************************************************************** 
 * Local variable
 *****************************************************************************/
static const mmi_scenario_attribute_struct mmi_scenario_attribute_tbl[] = 
{
#ifdef MMI_NOTI_MGR_UT
    {SCENARIO_ID_UT_UCM_INCOMING_CALL,  (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_HIGH)},
    {SCENARIO_ID_UT_ALM_REMINDER,       (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_LOW | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {SCENARIO_ID_UT_INCOMING_MSG,       (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_LOW | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {SCENARIO_ID_UT_BT_ACCESS_REQ,      (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {SCENARIO_ID_UT_DEFAULT,            (mmi_scen_attr_prio_enum)(MMI_SCEN_PRIO_DEFAULT)},
    /* screen priority case */
    {SCENARIO_ID_UT_HIGHEST_SCRN,       (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {SCENARIO_ID_UT_HIGH_SCRN,          (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {SCENARIO_ID_UT_MEDIUM_SCRN,        (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {SCENARIO_ID_UT_LOW_SCRN,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    /* sound priority case */
    {SCENARIO_ID_UT_HIGHEST_SND,        (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {SCENARIO_ID_UT_HIGH_SND,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {SCENARIO_ID_UT_MEDIUM_SND,         (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_MEDIUM | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {SCENARIO_ID_UT_LOW_SND,            (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_LOW | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    /* vibrator priority case */
    {SCENARIO_ID_UT_HIGH_VIB,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_DEFAULT)},
    {SCENARIO_ID_UT_MEDIUM_VIB,         (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_DEFAULT)},
    /* backlight priority case */
    {SCENARIO_ID_UT_HIGH_BL,            (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_HIGH)},
    {SCENARIO_ID_UT_MEDIUM_BL,          (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif /* MMI_NOTI_MGR_UT */
    /* Scenario priority: Highest */
    {MMI_SCENARIO_ID_HIGHEST_SCRN,      (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {MMI_SCENARIO_ID_UCM_INCOMING_CALL, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_HIGH)},
#ifdef __OP01_FWPBW__
    {MMI_SCENARIO_ID_DIALER_HOLD_ON,    (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_HIGH)},
#endif
    {MMI_SCENARIO_ID_UCM_OUTGOING_CALL, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_DEFAULT)},
    {MMI_SCENARIO_ID_UCM_CALL_DIVERTED, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {MMI_SCENARIO_ID_BATTERY_HIGHEST,   (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    #ifdef __OP01__
    {MMI_SCENARIO_ID_VDO_REC,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_MEDIUM)}, /* BD special rule: Can't play vibrator & sound in video recorder screen except incoming call. */
    #else
    {MMI_SCENARIO_ID_VDO_REC,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_MEDIUM)}, /* BD special rule: Can't play vibrator & sound in video recorder screen except incoming call. */
    #endif
    {MMI_SCENARIO_ID_USB_WEBCAM,        (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_MEDIUM)}, /* BD special rule: Can't play vibrator in webcam screen. */
    #ifdef __OP01__
    {MMI_SCENARIO_ID_CAMCO_NONPREEMPTION, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_MEDIUM)}, /* BD special rule: Can't play vibrator & sound in video recorder screen except incoming call.play sound when mms come */
    #else
    {MMI_SCENARIO_ID_CAMCO_NONPREEMPTION, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGHEST | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_MEDIUM)}, /* BD special rule: Can't play vibrator & sound in video recorder screen except incoming call. */
    #endif
    /* Scenario priority: High */
        /* Notification scenario */
    {MMI_SCENARIO_ID_HIGH_SCRN,         (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    {MMI_SCENARIO_ID_REMINDER_ALARM,    (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH    | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
#ifdef __MMI_AZAAN_ALARM__
    {MMI_SCENARIO_ID_REMINDER_AZAAN,    (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH    | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
#endif /* __MMI_AZAAN_ALARM__ */    
#ifdef __OP01_3G__    
	{MMI_SCENARIO_ID_REMINDER_OTHER,    (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
#else
	{MMI_SCENARIO_ID_REMINDER_OTHER,    (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
#endif
	{MMI_SCENARIO_ID_SCHEDULE_POWER_OFF, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH    | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},        
    {MMI_SCENARIO_ID_AUTO_SYNC,         (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
#ifdef __MMI_BT_SUPPORT__
    {MMI_SCENARIO_ID_BT_ACCESS_REQ,     (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif
    {MMI_SCENARIO_ID_SHOW_WLAN_AP_LIST, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_HIGH | MMI_SCEN_SND_PRIO_HIGH    | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
    /* Scenario priority: Medium - default priority */
    {MMI_SCENARIO_ID_DEFAULT,           (mmi_scen_attr_prio_enum)(MMI_SCEN_PRIO_DEFAULT)},
    {MMI_SCENARIO_ID_IN_CALL,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_DEFAULT)},
    {MMI_SCENARIO_ID_SND_REC,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_HIGHEST | MMI_SCEN_VIB_PRIO_HIGH | MMI_SCEN_BL_PRIO_DEFAULT)}, /* BD special rule: Can't play vibrator & sound in sound recorder screen except incoming call. */
    {MMI_SCENARIO_ID_SYNC_FINISH,       (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM  | MMI_SCEN_SND_PRIO_MEDIUM | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)}, 
 
#ifdef __OP02__    
    {MMI_SCENARIO_ID_NEW_CLASS0_SMS, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#else    
    {MMI_SCENARIO_ID_NEW_CLASS0_SMS, (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif
    
    /* Scenario priority: Low */
    {MMI_SCENARIO_ID_IDLE,              (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_MEDIUM)},
    {MMI_SCENARIO_ID_JAVA_MID_INSTALL,  (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_DEFAULT | MMI_SCEN_VIB_PRIO_DEFAULT | MMI_SCEN_BL_PRIO_DEFAULT)},
        /* Idle nmgr registered scenario */

#if defined(__OP01__) || defined(__OP02__)
    {MMI_SCENARIO_ID_NEW_SMS,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#ifdef __MMI_MMS_2__
    {MMI_SCENARIO_ID_NEW_MMS,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif
#ifdef WAP_SUPPORT
    {MMI_SCENARIO_ID_WAP_PUSH,          (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif
    {MMI_SCENARIO_ID_SIM_SMS,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {MMI_SCENARIO_ID_PROVISIOING,       (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#ifdef __MMI_EMAIL__
    {MMI_SCENARIO_ID_NEW_EMAIL,         (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif
#else
    {MMI_SCENARIO_ID_NEW_SMS,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#ifdef __MMI_MMS_2__
    {MMI_SCENARIO_ID_NEW_MMS,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif
#ifdef WAP_SUPPORT
    #ifndef __MMI_NCENTER_SUPPORT__
    {MMI_SCENARIO_ID_WAP_PUSH,          (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    #else
	{MMI_SCENARIO_ID_WAP_PUSH,          (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_MEDIUM | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    #endif
#endif
    {MMI_SCENARIO_ID_SIM_SMS,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {MMI_SCENARIO_ID_PROVISIOING,       (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#ifdef __MMI_EMAIL__
    {MMI_SCENARIO_ID_NEW_EMAIL,         (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif
#endif

	{MMI_SCENARIO_ID_MISSED_CALL,       (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_MEDIUM | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
	{MMI_SCENARIO_ID_CELL_BROADCAST,    (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {MMI_SCENARIO_ID_MESSAGE_WAITING,   (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {MMI_SCENARIO_ID_CCA,               (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {MMI_SCENARIO_ID_VOBJECT,           (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
    {MMI_SCENARIO_ID_NEW_SMS_REPORT,    (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#ifdef __MRE_SAL_PN__
    {MMI_SCENARIO_ID_MRE_PUSH,          (mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_DEFAULT | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif        
#ifdef __MMI_MMS_2__
    {MMI_SCENARIO_ID_NEW_MMS_REPORT,	(mmi_scen_attr_prio_enum)(MMI_SCEN_SCRN_PRIO_LOW | MMI_SCEN_SND_PRIO_HIGH | MMI_SCEN_VIB_PRIO_MEDIUM | MMI_SCEN_BL_PRIO_MEDIUM)},
#endif 
    {MMI_SCENARIO_ID_INVALID,           (mmi_scen_attr_prio_enum)(MMI_SCEN_PRIO_NONE)}
};


static const mmi_events_notify_struct mmi_events_notify_tbl[]={
    /* !!!This default item must be the first one!!! */
    {MMI_EVENT_DEFAULT,             MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
#ifdef MMI_NOTI_MGR_UT
    {MMI_EVENT_UT_INFO,             MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_INFO,             MMI_SCENARIO_ID_IN_CALL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_QUERY,            MMI_SCENARIO_ID_IN_CALL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_QUERY,            MMI_SCENARIO_ID_POWER_ON,   GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_QUERY,            MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_WARNING,          MMI_SCENARIO_ID_IN_CALL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_WARNING,          MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_WARNING,          MMI_SCENARIO_ID_POWER_ON,   GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_UT_ALARM,            MMI_SCENARIO_ID_IN_CALL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_SND_SUBTLE},
    {MMI_EVENT_UT_ALARM,            MMI_SCENARIO_ID_POWER_ON,   GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_UT_ALARM,            MMI_SCENARIO_ID_POWER_OFF,  GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_BL_TWINKLE},
    {MMI_EVENT_UT_ALARM,            MMI_SCENARIO_ID_LOW_BATTERY,  GENERAL_TONE,         IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_SCRN_NO_DEFER},
    {MMI_EVENT_UT_ALARM,            MMI_SCENARIO_ID_EARPHONE,   GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE|MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_UT_ALARM,            MMI_SCENARIO_ID_AUTO_SYNC,   GENERAL_TONE,          IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE|MMI_BEHAVIOR_BL_TWINKLE|MMI_BEHAVIOR_SCRN_NO_DEFER)},
    {MMI_EVENT_UT_ALARM,            MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
#endif /* MMI_NOTI_MGR_UT */
    {MMI_EVENT_FAILURE,             MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_FAIL,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_INFO,                MMI_SCENARIO_ID_GENERAL,    AUX_TONE,               IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_WARNING,             MMI_SCENARIO_ID_GENERAL,    WARNING_TONE,           IMG_GLOBAL_WARNING, MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_SUCCESS,             MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_GLOBAL_SUCCESS, MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_PROGRESS,            MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_GLOBAL_PROGRESS,MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_QUERY,               MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_GLOBAL_QUESTION,MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_MESSAGE_SENT,        MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_GLOBAL_SUCCESS, MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL}, /* success event */
    {MMI_EVENT_PROPLEM,             MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_FAIL,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL}, /* failure event */
    {MMI_EVENT_EXPLICITLY_SAVED,    MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_GLOBAL_SUCCESS, MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL}, /* success event */
    {MMI_EVENT_EXPLICITLY_DELETED,  MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_GLOBAL_SUCCESS, MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL}, /* success event */
    {MMI_EVENT_CONFIRM,             MMI_SCENARIO_ID_GENERAL,    AUX_TONE,               IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},   /* info event */
    {MMI_EVENT_BATTERY_WARNING,     MMI_SCENARIO_ID_GENERAL,    BATTERY_WARNING_TONE,   IMG_GLOBAL_WARNING, MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL}, /* warning event */
    {MMI_EVENT_NOT_AVAILABLE,       MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_GLOBAL_FAIL,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},   /* failure event */
    {MMI_EVENT_ANSPHONE,            MMI_SCENARIO_ID_GENERAL,    SUCCESS_TONE,           IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_REMIND,              MMI_SCENARIO_ID_GENERAL,    ALARM_TONE,             IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_BATTERY_NOTIFY,      MMI_SCENARIO_ID_GENERAL,    AUX_TONE,               IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},    /* info event*/
    /* Configure behavior */
    {MMI_EVENT_NON_TONE,            MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_NONE,           MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_INCOMING_CALL,       MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_NONE,           MMI_NO_DURATION_TIME,               MMI_BEHAVIOR_BL_ALWAYS_ON},
    /* Alarm in in-call scenario */
#ifdef __MMI_ALARM_SLIM__
		{MMI_EVENT_REMINDER_ALARM,		MMI_SCENARIO_ID_GENERAL,	ALARM_TONE, 			IMG_NONE, MMI_NO_DURATION_TIME, (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_CUSTOM | MMI_BEHAVIOR_VIB_CUSTOM)},
		{MMI_EVENT_REMINDER_OTHER,		MMI_SCENARIO_ID_GENERAL,	ALARM_TONE, 			IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_ON},
		{MMI_EVENT_SCHEDULE_POWER_OFF,	MMI_SCENARIO_ID_GENERAL,	ALARM_TONE, 			IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_GENERAL},
#else
    {MMI_EVENT_REMINDER_ALARM,      MMI_SCENARIO_ID_GENERAL,    ALARM_TONE,             ALARM_ANIMATION_INDICATION_IMAGEID, MMI_NO_DURATION_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_CUSTOM | MMI_BEHAVIOR_VIB_CUSTOM)},
    {MMI_EVENT_REMINDER_OTHER,      MMI_SCENARIO_ID_GENERAL,    ALARM_TONE,             ALARM_ANIMATION_INDICATION_IMAGEID, MMI_NO_DURATION_TIME,   MMI_BEHAVIOR_VIB_ON},
    {MMI_EVENT_SCHEDULE_POWER_OFF,  MMI_SCENARIO_ID_GENERAL,    ALARM_TONE,             ALARM_ANIMATION_INDICATION_IMAGEID, MMI_NO_DURATION_TIME,   MMI_BEHAVIOR_GENERAL},
#endif
    {MMI_EVENT_VOBJECT,             MMI_SCENARIO_ID_IN_CALL,    GENERAL_TONE,           IMG_NONE,           MMI_NO_DURATION_TIME,			    (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_VOBJECT,             MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,           IMG_NONE,           MMI_NO_DURATION_TIME,			    MMI_BEHAVIOR_VIB_SMS},

    {MMI_EVENT_SIM1_SMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM1_SMS,   MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
#ifdef __GENERAL_TTS__
    {MMI_EVENT_SIM1_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_CUSTOM | MMI_BEHAVIOR_VIB_SMS)},
#else
    {MMI_EVENT_SIM1_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},
#endif
#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 2)
    {MMI_EVENT_SIM2_SMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM2_SMS,   MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
#ifdef __GENERAL_TTS__
    {MMI_EVENT_SIM2_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD2,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_CUSTOM | MMI_BEHAVIOR_VIB_SMS)},
#else
    {MMI_EVENT_SIM2_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD2,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},
#endif
#endif

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 3)
    {MMI_EVENT_SIM3_SMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM3_SMS,   MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
#ifdef __GENERAL_TTS__
    {MMI_EVENT_SIM3_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD3,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_CUSTOM | MMI_BEHAVIOR_VIB_SMS)},
#else
    {MMI_EVENT_SIM3_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD3,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},
#endif
#endif

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 4)
    {MMI_EVENT_SIM4_SMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM4_SMS,   MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
#ifdef __GENERAL_TTS__
    {MMI_EVENT_SIM4_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD4,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_CUSTOM | MMI_BEHAVIOR_VIB_SMS)},
#else
    {MMI_EVENT_SIM4_SMS,   MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD4,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,   MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},
#endif
#endif

    {MMI_EVENT_MESSAGE_SIM1_WAITING, MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM1_WAITING, MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM1_WAITING, MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS,        IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 2)
    {MMI_EVENT_MESSAGE_SIM2_WAITING, MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM2_WAITING, MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM2_WAITING, MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD2,  IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
#endif

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 3)
    {MMI_EVENT_MESSAGE_SIM3_WAITING, MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM3_WAITING, MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM3_WAITING, MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD3,  IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
#endif

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 4)
    {MMI_EVENT_MESSAGE_SIM4_WAITING, MMI_SCENARIO_ID_UCM_OUTGOING_CALL, SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM4_WAITING, MMI_SCENARIO_ID_IN_CALL,           SRV_PROF_TONE_SMS_INCALL, IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
    {MMI_EVENT_MESSAGE_SIM4_WAITING, MMI_SCENARIO_ID_GENERAL,           SRV_PROF_TONE_SMS_CARD3,  IMG_NONE, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
#endif
#if defined(__MMI_EMAIL__)
    {MMI_EVENT_EMAIL, MMI_SCENARIO_ID_GENERAL, SRV_PROF_TONE_EMAIL, IMG_EMAIL_EMN_NOTIFY_ID, MMI_NO_DURATION_TIME, MMI_BEHAVIOR_VIB_SMS},
#endif

#ifdef __MMI_MMS_2__
    {MMI_EVENT_SIM1_MMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL,  SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM1_MMS,   MMI_SCENARIO_ID_IN_CALL,            SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM1_MMS,   MMI_SCENARIO_ID_GENERAL,            SRV_PROF_TONE_MMS,        IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 2)
    {MMI_EVENT_SIM2_MMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL,  SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM2_MMS,   MMI_SCENARIO_ID_IN_CALL,            SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM2_MMS,   MMI_SCENARIO_ID_GENERAL,            SRV_PROF_TONE_MMS_CARD2,  IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},
#endif

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 3)
    {MMI_EVENT_SIM3_MMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL,  SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM3_MMS,   MMI_SCENARIO_ID_IN_CALL,            SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM3_MMS,   MMI_SCENARIO_ID_GENERAL,            SRV_PROF_TONE_SMS_CARD3,  IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},
#endif

#if defined(MMI_MAX_SIM_NUM) && (MMI_MAX_SIM_NUM >= 4)
    {MMI_EVENT_SIM4_MMS,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL,  SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM4_MMS,   MMI_SCENARIO_ID_IN_CALL,            SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
    {MMI_EVENT_SIM4_MMS,   MMI_SCENARIO_ID_GENERAL,            SRV_PROF_TONE_MMS_CARD4,  IMG_NEW_MESSAGE_NOTIFICATION_MSG,      MMI_POPUP_DURATION_INFINITE_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_VIB_THEN_RING | MMI_BEHAVIOR_VIB_SMS)},
#endif
#endif

    {MMI_EVENT_SYNC_FINISH, MMI_SCENARIO_ID_GENERAL,            GENERAL_TONE,        IMG_NONE , MMI_NO_DURATION_TIME,   MMI_BEHAVIOR_GENERAL},
    
    {MMI_EVENT_EARPHONE_PLUG_INOUT, MMI_SCENARIO_ID_GENERAL,    NONE_TONE,               IMG_GLOBAL_INFO,    MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_GENERAL},
    {MMI_EVENT_LAUNCH_APP,            MMI_SCENARIO_ID_GENERAL,    NONE_TONE,              IMG_NONE,           MMI_POPUP_DURATION_DEFAULT_TIME,    MMI_BEHAVIOR_SCRN_DEFER_FIRST},
#ifdef WAP_SUPPORT
	{MMI_EVENT_UNKNOWN_WAP_PUSH,   MMI_SCENARIO_ID_UCM_OUTGOING_CALL,  SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,		MMI_POPUP_DURATION_INFINITE_TIME,	(mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
	{MMI_EVENT_UNKNOWN_WAP_PUSH,   MMI_SCENARIO_ID_IN_CALL, 		   SRV_PROF_TONE_SMS_INCALL, IMG_NEW_MESSAGE_NOTIFICATION_MSG,		MMI_POPUP_DURATION_INFINITE_TIME,	(mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_SUBTLE | MMI_BEHAVIOR_VIB_SMS)},
	{MMI_EVENT_UNKNOWN_WAP_PUSH,   MMI_SCENARIO_ID_GENERAL, 		   SRV_PROF_TONE_MMS,		 IMG_NEW_MESSAGE_NOTIFICATION_MSG,		MMI_POPUP_DURATION_INFINITE_TIME,	MMI_BEHAVIOR_VIB_SMS},
#endif

	#ifdef __MMI_NCENTER_SUPPORT__
	{MMI_EVENT_SAT_IDLE_TEXT, MMI_SCENARIO_ID_GENERAL, NONE_TONE, IMG_ID_APP_SAT_PREVIEW, MMI_POPUP_DURATION_INFINITE_TIME, MMI_BEHAVIOR_GENERAL},
	#endif
#ifdef __MRE_SAL_PN__
    {MMI_EVENT_MRE_PUSH,            MMI_SCENARIO_ID_GENERAL,    GENERAL_TONE,              IMG_NONE, MMI_NO_DURATION_TIME,   (mmi_nmgr_behavior_enum)(MMI_BEHAVIOR_SND_DEFAULT | MMI_BEHAVIOR_VIB_SMS)},
#endif
/* Think about background case! */
};

#ifdef __MMI_OP11_PROF_SOUND__
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
#endif /*__MMI_OP11_PROF_SOUND__*/

#define MMI_EVENTS_NOTIFY_TBL_SIZE  (sizeof(mmi_events_notify_tbl) / sizeof(mmi_events_notify_tbl[0]))
#define MMI_SCEN_ATTR_TBL_SIZE      (sizeof(mmi_scenario_attribute_tbl) / sizeof(mmi_scenario_attribute_tbl[0]))

/*****************************************************************************
 * FUNCTION
 *  mmi_nmgr_get_event_notify_info
 * DESCRIPTION
 *  This function could search from start_idx to find one matched notify event 
 *  information by event_id, and return found cound to tell how many items for this event_id;
 * PARAMETERS
 *  event_id        [IN]        
 *  active_scen_id  [IN]
 * RETURNS
 *  
 *****************************************************************************/
const mmi_events_notify_struct *mmi_nmgr_get_event_notify_info(mmi_event_notify_enum event_id, mmi_scenario_id active_scen_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 idx;
    const mmi_events_notify_struct *found_info = NULL;
    const mmi_events_notify_struct *current_info = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (idx = 0; idx < MMI_EVENTS_NOTIFY_TBL_SIZE; idx++)
    {
        if (mmi_events_notify_tbl[idx].event_id == event_id)
        {
            current_info = &mmi_events_notify_tbl[idx];

            if (current_info->scenario_id == active_scen_id)
            {/* If find the matched active scenario id, don't need to check others. */
                found_info = current_info;
                break;
            }
            else if (NULL != found_info && found_info->scenario_id == MMI_SCENARIO_ID_GENERAL)
            {/* If previous item's scenario id is general and didn't find the matched scenario id, check next. */
                continue;
            }
            else if (NULL == found_info || current_info->scenario_id == MMI_SCENARIO_ID_GENERAL || current_info->scenario_id != found_info->scenario_id)
            {/* 
              * 1. First time to set info pointer.
			  * 2. The newly item's scenario is general and didn't find the matched scenario id, update to general. 
              * 3. Current scenario id isn't equal to previous id and doesn't match the input id.
              */
                found_info = current_info;
            }
            else
            {
                MMI_ASSERT(0);
            }
        }
    }

    /* Set intem to the first one for default event information if can't find matched item. */
    return (found_info == NULL) ? &mmi_events_notify_tbl[0] : found_info;
}


/*****************************************************************************
 * FUNCTION
 *  get_event_based_sound
 * DESCRIPTION
 *  
 * PARAMETERS
 *  event_id      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
srv_prof_tone_enum mmi_get_event_based_sound(mmi_event_notify_enum event_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16  count;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    //MMI_TRACE(MMI_MEDIA_TRC_G2_APP,MMI_USER_PROF_TRC_GET_EVENT_SOUND, event_id);

#ifdef __MMI_OP11_PROF_SOUND__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    for(count=0;  count < MMI_EVENT_TOTAL_NUM ;count++)
    {
        if(mmi_events_notify_tbl[count].event_id == event_id)
        {
            return mmi_events_notify_tbl[count].tone_id;
        }
    }

    return NONE_TONE ;
}


/*****************************************************************************
 * FUNCTION
 *  get_event_based_image
 * DESCRIPTION
 *  
 * PARAMETERS
 *  event_id      [IN]
 * RETURNS
 *  
 *****************************************************************************/

U16 mmi_get_event_based_image(mmi_event_notify_enum event_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16  count;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    //MMI_TRACE(MMI_MEDIA_TRC_G2_APP,MMI_USER_PROF_TRC_GET_EVENT_IMG, event_id);

#ifdef __MMI_OP11_PROF_SOUND__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __MMI_BASIC_UI_STYLE__
	return 0;
#endif
    for(count=0;  count < MMI_EVENT_TOTAL_COUNT ;count++)
    {
        if(mmi_events_notify_tbl[count].event_id == event_id)
        {
            return mmi_events_notify_tbl[count].img_id;
        }
    }

    return IMG_GLOBAL_OK ;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_get_event_based_duration
 * DESCRIPTION
 *  
 * PARAMETERS
 *  event_id      [IN]
 * RETURNS
 *  
 *****************************************************************************/

U32 mmi_get_event_based_duration(mmi_event_notify_enum event_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16  count;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    //MMI_TRACE(MMI_MEDIA_TRC_G2_APP,MMI_USER_PROF_TRC_GET_EVENT_IMG, event_id);

#ifdef __MMI_OP11_PROF_SOUND__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    for(count=0;  count < MMI_EVENT_TOTAL_NUM ;count++)
    {
        if(mmi_events_notify_tbl[count].event_id == event_id)
        {
            return mmi_events_notify_tbl[count].duration;
        }
    }

    return MMI_POPUP_DURATION_DEFAULT_TIME ;
}


mmi_scen_attr_prio_enum mmi_get_scenario_default_prio(mmi_scenario_id scenario_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 idx;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (idx = 0; idx < MMI_SCEN_ATTR_TBL_SIZE; idx++)
    {
        if (mmi_scenario_attribute_tbl[idx].scenario_id == scenario_id)
        {
            return mmi_scenario_attribute_tbl[idx].notify_priority;
        }
    }
    /* If can't find scenario in this table means it is a normal one and return default priority infomation */
    return MMI_SCEN_PRIO_DEFAULT;
}


#endif /* PLUTO_MMI */
