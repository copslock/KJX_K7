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
 *  vapp_sync_remote_accnt_edit_server.h
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __VAPP_SYNC_REMOTE_ACCNT_EDIT_SERVER_H__
#define __VAPP_SYNC_REMOTE_ACCNT_EDIT_SERVER_H__


/***************************************************************************** 
 * Include
 *****************************************************************************/
#include "vfx_datatype.h"
#include "vfx_signal.h"
#include "vfx_page.h"

#include "vapp_sync_accnt_list_menu.h"
/***************************************************************************** 
 * Define
 *****************************************************************************/
#define ID_TOOLBAR_SYNC_ACCNT_SERVER_SAVE		'SAVE'

/***************************************************************************** 
 * Typedef
 *****************************************************************************/

/***************************************************************************** 
 * Class VappSyncRemoteAccntEditServerPage
 *****************************************************************************/
class VcpFunctionBar;
class VcpForm;
class VappSyncRemoteAccntEditServerPage : public VfxPage
{
	VFX_DECLARE_CLASS(VappSyncRemoteAccntEditServerPage);

public:
	VappSyncRemoteAccntEditServerPage(const VfxS32 &accntIndex = 0);
	virtual ~VappSyncRemoteAccntEditServerPage(){}

	enum 
	{
		ID_FORM_CELL_SERVER_CUSTOM,
		ID_FORM_CELL_SERVER_ADDR,
		ID_FORM_CELL_SERVER_USERNAME,
		ID_FORM_CELL_SERVER_PASSWORD,
		ID_FORM_CELL_SERVER_TOTAL		
	};

	VfxSignal2<VfxObject *, VfxS32> m_signalEditDone;
	
protected:
	virtual void onInit(void);
	virtual void onDeinit(void);
	virtual void onSave(void);
	virtual void onCancel(void);
	virtual void onFuncBarClick(VfxObject *sender, VfxId id);
	virtual void onFocusChange(VfxObject *obj, VfxId id, VfxBool isActive);

private:
	void onToolbarClick(VfxObject* obj, VfxId id);

protected:
	VcpFunctionBar *m_funcBar;
	VcpForm *m_form;
	VfxS32  m_accntIndex;
	VfxId m_activeId;
};

#endif /* __VAPP_SYNC_REMOTE_ACCNT_EDIT_SERVER_H__ */

