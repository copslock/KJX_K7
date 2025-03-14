/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
*  LAWS PRINCIPLES. ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *  vapp_sync_remote_accnt_edit.h
 *
 * Project:
 * --------
 *  Venus
 *
 * Description:
 * ------------
 *  
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __VAPP_SYNC_REMOTE_ACCNT_EDIT_H__
#define __VAPP_SYNC_REMOTE_ACCNT_EDIT_H__


/***************************************************************************** 
 * Include
 *****************************************************************************/
extern "C"
{
	#include "MMIDataType.h"
}

#include "vfx_datatype.h"
#include "vfx_signal.h"
#include "vfx_page.h"

/***************************************************************************** 
 * Define
 *****************************************************************************/

/***************************************************************************** 
 * Typedef
 *****************************************************************************/

/***************************************************************************** 
 * Class VappSyncRemoteAccntEditPage
 *****************************************************************************/
class VfxObject;
class VcpFormItemCell;
class VcpFormItemSwitchCell;
class VcpForm;
class VappSyncRemoteAccntEditPage : public VfxPage
{
	VFX_DECLARE_CLASS(VappSyncRemoteAccntEditPage);

public:
	VappSyncRemoteAccntEditPage(const VfxU8 &accntIndex = 0);
	~VappSyncRemoteAccntEditPage(){}

	enum 
	{	
		ID_FORM_CELL_EDIT_LAUNCH_ACCNT_NAME = (50 + 1),
		ID_FORM_CELL_EDIT_LAUNCH_SERVER_ADDR,
		ID_FORM_CELL_EDIT_LAUNCH_DATABASE_SELECT,
		ID_FORM_CELL_EDIT_LAUNCH_DATABASE_ADDR,
		ID_FORM_CELL_EDIT_SWITCH_WIFI_ONLY,
		ID_FORM_CELL_EDIT_LAUNCH_DATA_ACCNT,
		ID_FORM_CELL_EDIT_LAUNCH_REGULAR_SYNC,
		ID_FORM_CELL_EDIT_SWITCH_REPORT,
		ID_FORM_CELL_EDIT_TOTAL		
	};

	VfxSignal3<VfxObject *, VfxId, VfxS32> m_signalAction;

	VfxU8 getCurrAccntID(void) const { return m_accntIndex; }
	void closeRelativePage(void);
	mmi_ret onSrvEvt(mmi_event_struct *evt);
	static mmi_ret onEvt(mmi_event_struct *evt);
	
protected:
	void onInit(void);
	void onDeinit(void);
    void onEnter(VfxBool isBackward);
	mmi_ret onProc(mmi_event_struct *evt);
	
private:
	void onToolbarClick(VfxObject* obj, VfxId id);
	void onFormCellClick(VcpFormItemCell *obj, VfxId id);
	void onFormCellSwitchReq(VcpFormItemSwitchCell *obj, VfxId id, VfxBool newState);
	void onNameEditDone(VfxObject *obj, VfxS32 index);
	void onServerEditDone(VfxObject *obj, VfxS32 index);
	void onSelectDatabaseDone(VfxObject *obj, VfxU32 mask);
	void ontDatabaseEditDone(VfxObject *obj, VfxS32 index, VfxU32 dbMask);
	void onRegularSelectDone(VfxObject *obj, VfxU8 regular);
	VfxWString genDatabaseAddrString(void);
	void onCmdCallback(VfxObject *obj, VfxId id);
	void checkItemState(void);

protected:
	VcpForm *m_form;
	
private:
	VfxU8 m_accntIndex;
	mmi_id m_cuiId;
};

#endif /* __VAPP_SYNC_REMOTE_ACCNT_EDIT_H__ */

