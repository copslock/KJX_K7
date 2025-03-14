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
/*****************************************************************************
 *
 * Filename:
 * ---------
 *  UCMGProt.h
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  UCM 3.0 UCM App's external interfaces
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef UCM_GPROT_H
#define UCM_GPROT_H

#include "MMI_features.h"
#ifdef __MMI_UCM__

/* Include files---------------------------------------------------------------------------- */
#ifndef _CUSTOM_EVENTS_NOTIFY_H
#include "custom_events_notify.h"
#endif
#include "UcmSrvGProt.h"

#include "mmi_res_range_def.h"
#include "MMIDataType.h"
#include "mmi_frm_events_gprot.h"
#include "wgui_categories_list.h"
#include "GlobalConstants.h"

/* ENUM------------------------------------------------------------------------------------- */
/* define event structure */ 
typedef enum
{
    EVT_ID_VAPP_UCM_BG_RUN_START = GET_RESOURCE_BASE(VAPP_UCM) + 1, 
    EVT_ID_VAPP_UCM_BG_RUN_END,
    MMI_UCM_EVENT_END_OF_ENUM
} vapp_ucm_event_enum;

/* Result code enum , just a wrapper for URI agent app which use this enum before ucm revise */
typedef enum
{
    MMI_UCM_RESULT_OK = SRV_UCM_RESULT_OK, /* OK */
    MMI_UCM_RESULT_USER_ABORT = SRV_UCM_RESULT_USER_ABORT, /* User abort */
    MMI_UCM_RESULT_INVALID_NUMBER = SRV_UCM_RESULT_INVALID_NUMBER, /* Invalid number */
    MMI_UCM_RESULT_EMPTY_NUMBER = SRV_UCM_RESULT_EMPTY_NUMBER, /* Empty number */
    MMI_UCM_RESULT_CALLED_PARTY_BUSY = SRV_UCM_RESULT_CALLED_PARTY_BUSY, /* Called party busy */
    MMI_UCM_RESULT_NETWORK_NOT_AVAILABLE = SRV_UCM_RESULT_NETWORK_NOT_AVAILABLE, /* Network not available */
    MMI_UCM_RESULT_CALLED_PARTY_NOT_ANSWERED = SRV_UCM_RESULT_CALLED_PARTY_NOT_ANSWERED, /* Called party not answered */
    MMI_UCM_RESULT_UCM_BUSY = SRV_UCM_RESULT_UCM_BUSY, /* Busy */
    MMI_UCM_RESULT_CANCEL = SRV_UCM_RESULT_CANCEL, /* Cancel */
    MMI_UCM_RESULT_FLIGHT_MODE_PROHIBIT = SRV_UCM_RESULT_FLIGHT_MODE_PROHIBIT, /* Flight mode prohibit */
    MMI_UCM_RESULT_PREFERRED_MODE_PROHIBIT = SRV_UCM_RESULT_PREFERRED_MODE_PROHIBIT, /* Preferred mode prohibit */
    MMI_UCM_RESULT_SOS_CALL_EXISTS = SRV_UCM_RESULT_SOS_CALL_EXISTS, /* Exist SOS call */
    MMI_UCM_RESULT_SOS_NUMBER_ONLY = SRV_UCM_RESULT_SOS_NUMBER_ONLY, /* SOS number only */
    MMI_UCM_RESULT_NO_ACTIVE_VOICE_CALL = SRV_UCM_RESULT_NO_ACTIVE_CALL, /* No active voice call */
    MMI_UCM_RESULT_UNSPECIFIED_ERROR = SRV_UCM_RESULT_UNSPECIFIED_ERROR, /* Unspecified error */
    MMI_UCM_RESULT_END_OF_ENUM /* end of the enum */
} mmi_ucm_result_enum;


/* Old call type enum */
typedef enum
{
    MMI_UCM_VOICE_CALL_TYPE = SRV_UCM_VOICE_CALL_TYPE, /* SIM1 voice call type */
    MMI_UCM_VOICE_CALL_TYPE_SIM2 = SRV_UCM_VOICE_CALL_TYPE_SIM2, /* SIM2 voice call type */
    MMI_UCM_DATA_CALL_TYPE = SRV_UCM_DATA_CALL_TYPE, /* SIM1 data call type */
    MMI_UCM_DATA_CALL_TYPE_SIM2 = SRV_UCM_DATA_CALL_TYPE_SIM2, /* SIM2 data call type */
    MMI_UCM_CSD_CALL_TYPE = SRV_UCM_CSD_CALL_TYPE, /* SIM1 csd call type */
    MMI_UCM_CSD_CALL_TYPE_SIM2S = SRV_UCM_CSD_CALL_TYPE_SIM2, /* SIM2 csd call type */
    MMI_UCM_VOIP_CALL_TYPE = SRV_UCM_VOIP_CALL_TYPE, /* VoIP call type */
    MMI_UCM_VIDEO_CALL_TYPE = SRV_UCM_VIDEO_CALL_TYPE, /* Video call type*/
    MMI_UCM_CALL_TYPE_END_OF_ENUM /* End of the enum */
} mmi_ucm_call_type_enum;

#define MMI_UCM_SIM1_CALL_TYPE_ALL     SRV_UCM_SIM1_CALL_TYPE_ALL
#define MMI_UCM_SIM2_CALL_TYPE_ALL     SRV_UCM_SIM2_CALL_TYPE_ALL
#define MMI_UCM_VOICE_CALL_TYPE_ALL    SRV_UCM_VOICE_CALL_TYPE_ALL
#define MMI_UCM_DATA_CALL_TYPE_ALL     SRV_UCM_DATA_CALL_TYPE_ALL
#define MMI_UCM_CSD_CALL_TYPE_ALL      SRV_UCM_CSD_CALL_TYPE_ALL
#define MMI_UCM_CALL_TYPE_ALL          SRV_UCM_CALL_TYPE_ALL
#define MMI_UCM_CALL_TYPE_NO_CSD       SRV_UCM_CALL_TYPE_NO_CSD
#define MMI_UCM_CALL_TYPE_NO_DATA_CSD  SRV_UCM_CALL_TYPE_NO_DATA_CSD
#define MMI_UCM_CALL_TYPE_DATA_CSD_ALL SRV_UCM_CALL_TYPE_DATA_CSD_ALL


/* EVENT------------------------------------------------------------------------------------- */
typedef struct
{
	MMI_EVT_PARAM_HEADER
    srv_ucm_result_enum  result; /*make action's result. SRV_UCM_RESULT_CANCEL means user presses back or the screen is deleted without making call.  SRV_UCM_RESULT_OK means call is made successfully. */ 
    void *make_call_user_data; /*bypass user data back to caller*/
}mmi_evt_ucm_after_make_call_struct;


/* STRUCT------------------------------------------------------------------------------------- */
typedef struct
{
    srv_ucm_result_enum result; /*make action's result. SRV_UCM_RESULT_CANCEL means user presses back or the screen is deleted without making call.  SRV_UCM_RESULT_OK means call is made successfully. */ 
    void * user_data; /*bypass user data back to caller*/
} mmi_ucm_after_make_call_cb_struct;


/* Can use event mechanism for notify make call result*/
/* typedef mmi_ret (*mmi_ucm_after_make_call_callback) (mmi_evt_ucm_after_make_call_struct *result_evt); */


typedef void (*mmi_ucm_after_make_call_callback) (mmi_ucm_after_make_call_cb_struct* make_call_cb_para);


/* Make call advanced parameter struct */
typedef struct
{
    srv_ucm_call_type_enum highlight_dial_type; /* Default highlight dial type, currently only for triple/quad sim project */
    srv_ucm_module_origin_enum module_id; /* Module id, only for special app, ex. SAT. common make call can use SRV_UCM_MODULE_ORIGIN_COMMON */
    MMI_BOOL is_ip_dial; /* IP number dial flag */ 
    mmi_ucm_after_make_call_callback after_make_call_callback;/* callback function pointer. This cb will be called in the following cases: 1. succeed to make call 2. fail to make call 3.user selects back */
    void* after_callback_user_data; /* data pointer for make_call_callback, caller can bypass needed info by using this argv */
    void *phb_data; /* Bypass phonebook data for call service to query caller info */
} mmi_ucm_advanced_make_call_para_struct;


/* Make call parameter struct */
typedef struct
{
    srv_ucm_call_type_enum dial_type; /* the call types which caller wants to dial, can bitwise. but data call and CSD call is not allowed. if caller does not want to specify call type, can use SRV_UCM_CALL_TYPE_ALL. */
    U16* ucs2_num_uri; /* the dial number, SRV_UCM_MAX_NUM_URI_LEN + 1 , UCS2 number uri with null termination, this input parameter will be copied to another buffer, it won't be modified */
    mmi_ucm_advanced_make_call_para_struct adv_para; /* make call advanced parameter. for advanced use */
} mmi_ucm_make_call_para_struct;


/* DEFINE------------------------------------------------------------------------------------ */
#define MMI_UCM_ERR_IS_BG_CALL              (-600)

/* API-------------------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C"
{
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init
 * DESCRIPTION
 *  Initialize UCM application
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_ucm_init(void);

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_end_key
 * DESCRIPTION
 *  End key behavior function, FW will call this function when there is any call.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_ucm_end_key(void);

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_get_showAOC
 * DESCRIPTION
 *  Get AOC display status
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_TRUE: should display AOC info
 *****************************************************************************/
extern MMI_BOOL mmi_ucm_get_show_aoc(void);

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_call_launch
 * DESCRIPTION
 *  Dial call api
 *  Dial_type is not allowed to be bitwised,
 *  If disallow to make call, will popup error message
 *  Before filling in make_call_para structure, caller can use mmi_ucm_init_call_para or mmi_ucm_init_call_para_for_sendkey
 *  to init structure first, and then fill in specific parameters as required.
 * PARAMETERS
 *  caller_gid:                [IN]      caller screen group id. before group screen mechanism is ready, fill 0 always
 *  make_call_para:            [IN]      Make call parameter.
 * RETURNS
 *  Return ucm app group screen id, before group screen mechanism is ready, return 0 always
 *****************************************************************************/
extern U16 mmi_ucm_call_launch(U16 caller_gid, mmi_ucm_make_call_para_struct *make_call_para);

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init_call_para
 * DESCRIPTION
 * initialize make call parameter. The default value is for common use 
 * PARAMETERS
 *  make_call_para:            [IN]      Make call parameter.
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_ucm_init_call_para(mmi_ucm_make_call_para_struct *make_call_para);

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_get_marker_scrn_id
 * DESCRIPTION
 *  Function to get cm marker screen id
 * PARAMETERS
 *  void
 * RETURNS
 *  Maker screen id.
 *****************************************************************************/
extern U16 mmi_ucm_get_marker_scrn_id(void);

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init_call_para_for_sendkey
 * DESCRIPTION
 * initialize make call parameter for sendkey triggered behaviors. 
 * The default value of dial type will be the type which is decided when pressing send key 
 * PARAMETERS
 *  make_call_para:            [IN]      Make call parameter.
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_ucm_init_call_para_for_sendkey(mmi_ucm_make_call_para_struct *make_call_para);

#ifdef __MMI_URI_AGENT__
extern mmi_ret mmi_ucm_uha_ind_hdlr(mmi_event_struct* para);
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_error_message
 * DESCRIPTION
 *  Error message API for applications which operations are not allowed during in-call
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_ucm_entry_error_message(void);

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_app_entry_error_message
 * DESCRIPTION
 *  a wrapper API for displaying error message API for applications which operations are not 
 *  allowed during in-call (mmi_ucm_entry_error_message)
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

extern void mmi_ucm_app_entry_error_message(void);

#ifdef __cplusplus
}
#endif

#endif /*__MMI_UCM__*/

#endif /* UCM_GPROT_H */ 

