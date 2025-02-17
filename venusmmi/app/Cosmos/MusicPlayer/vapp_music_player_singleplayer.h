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
 *  vapp_music_player_singleplayer.h
 *
 * Project:
 * --------
 *  Venus
 *
 * Description:
 * ------------
 *  FTO Music Player single player app
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "mmi_features.h"
#ifdef __COSMOS_MUSICPLY__

#ifndef __VAPP_MUSIC_PLAYER_SINGLEPLAYER_H__
#define __VAPP_MUSIC_PLAYER_SINGLEPLAYER_H__

/***************************************************************************** 
 * Include
 *****************************************************************************/

#include "vfx_mc_include.h"
#include "vcp_include.h"
#include "vapp_music_player_ctrlplayback.h"
#include "vapp_music_player_datatype.h"


/***************************************************************************** 
 * Enumeration
 *****************************************************************************/

typedef struct
{
    VfxWChar filePath[SRV_FMGR_PATH_MAX_LEN + 1];
    VfxWChar title[SRV_FMGR_PATH_MAX_LEN + 1];
}VappMusicPlayerSinglePlayerArgStruct;


/***************************************************************************** 
 * Music Player UI componet: Music player single player class
 *****************************************************************************/

class VappMusicPlayerSinglePlayerApp : public VfxApp
{
    VFX_DECLARE_CLASS(VappMusicPlayerSinglePlayerApp);

private:
    mmi_id m_cuiID;

public:
    VappMusicPlayerSinglePlayerApp()
    {};

// Override
public:
    virtual void onInit();
    virtual void onRun(void* args, VfxU32 argSize);
    virtual void onDeinit();

// Public methods
public:
    mmi_id getCuiID()
    {
        return m_cuiID;
    };

// Protected methods
protected:
    virtual mmi_ret onProc(mmi_event_struct *evt);
    
// Implementation
private:
};


/***************************************************************************** 
 * Music Player UI componet: Music player single player screen
 *****************************************************************************/

class VappMusicPlayerSinglePlayerScreen : public VappMusicPlayerScreen
{
    VFX_DECLARE_CLASS(VappMusicPlayerSinglePlayerScreen);

public:
    VappMusicPlayerSinglePlayerScreen()
    {};

// Override
public:
    virtual mmi_ret onProc(mmi_event_struct *evt);
};


#endif /* __VAPP_MUSIC_PLAYER_SINGLEPLAYER_H__ */

#endif //__COSMOS_MUSICPLY__
