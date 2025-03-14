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
 *  SimCtrlSrvAdp.c
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  Protocol adaptor to SIM control and bootup.
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
 *============================================================================
 ****************************************************************************/

/****************************************************************************
 * Include
 ****************************************************************************/

#include "SimCtrlSrv.h"
#include "BootupSrvGprot.h"
#include "UtilitySrvGprot.h"
#include "MMIDataType.h"
#include "kal_general_types.h"
#include "stack_config.h"
#include "stack_msgs.h"
#include "mmi_frm_events_gprot.h"
#include "mmi_frm_utility_gprot.h"


/****************************************************************************
 * Functions
 ****************************************************************************/

static MMI_BOOL srv_sim_ctrl_adp_password_required_ind_hdlr(void *msg, S32 src_mod);
static MMI_BOOL srv_sim_ctrl_adp_smu_fail_ind_hdlr(void *msg, S32 src_mod);


/*****************************************************************************
 * FUNCTION
 *  srv_sim_ctrl_adp_init
 * DESCRIPTION
 *  Initialize the adaptor service of SIM control.
 * PARAMETERS
 *  evt     [IN] srv_bootup_early_init_evt_struct*
 * RETURNS
 *  void
 *****************************************************************************/
mmi_ret srv_sim_ctrl_adp_init(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_set_protocol_event_handler(MSG_ID_MMI_SMU_PASSWORD_REQUIRED_IND, (PsIntFuncPtr)srv_sim_ctrl_adp_password_required_ind_hdlr, MMI_TRUE);
    mmi_frm_set_protocol_event_handler(MSG_ID_MMI_SMU_FAIL_IND, (PsIntFuncPtr)srv_sim_ctrl_adp_smu_fail_ind_hdlr, MMI_TRUE);

    return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  srv_sim_ctrl_password_required_ind_hdlr
 * DESCRIPTION
 *  The handler of MMI_SMU_PASSWORD_REQUIRED_IND. This handle is used to
 *  guarantee the order of the receivers for this message.
 * PARAMETERS
 *  sim     [IN] From which protocol layer
 *  msg     [IN] mmi_smu_password_required_ind_struct*
 * RETURNS
 *  Always MMI_FALSE, means continue event routing
 *****************************************************************************/
static MMI_BOOL srv_sim_ctrl_adp_password_required_ind_hdlr(void *msg, S32 src_mod)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_sim_enum sim = mmi_frm_l4c_mod_to_sim((module_type)src_mod);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /*
     * We should guarantee SIM ctrl receives this message first.
     * So that the fields or the states can be updated before other modules.
     */
    srv_sim_ctrl_password_required_ind_hdlr(sim, msg);


    /* Bootup depends on SIM ctrl's states */
    srv_bootup_sec_password_required_ind_hdlr(sim, msg);

    return MMI_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  srv_sim_ctrl_smu_fail_ind_hdlr
 * DESCRIPTION
 *  The handler of MMI_SMU_FAIL_IND. This handle is used to guarantee the order
 *  of the receivers for this message.
 * PARAMETERS
 *  sim     [IN] From which protocol layer
 *  msg     [IN] mmi_smu_fail_ind_struct*
 * RETURNS
 *  Always MMI_FALSE, means continue event routing
 *****************************************************************************/
static MMI_BOOL srv_sim_ctrl_adp_smu_fail_ind_hdlr(void *msg, S32 src_mod)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_sim_enum sim = mmi_frm_l4c_mod_to_sim((module_type)src_mod);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /*
     * We should guarantee SIM ctrl receives this message first.
     * So that the fields or the states can be updated before other modules.
     */
    srv_sim_ctrl_smu_fail_ind_hdlr(sim, msg);

    /* Bootup depends on SIM ctrl's states */
    srv_bootup_sec_smu_fail_ind_hdlr(sim, msg);

    return MMI_FALSE;
}
