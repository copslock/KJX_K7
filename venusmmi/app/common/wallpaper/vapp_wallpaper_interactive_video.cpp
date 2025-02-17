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
 *  vapp_wallpaper_interactive_video.cpp
 *
 * Project:
 * --------
 *  Venus
 *
 * Description:
 * ------------
 *  Home screen interactive super fast video wallpaper class
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "MMI_features.h"

#ifdef __MMI_VUI_HOMESCREEN_LIVE_WALLPAPER_INTERACTIVE_VIDEO__

/*****************************************************************************
 * Include
 *****************************************************************************/
#include "vapp_wallpaper_interactive_video.h"
//#include "HomeScreen/vadp_v2p_hs.h"
#include "mmi_rp_app_venus_wallpaper_frame_video_def.h"

#include "vfx_cpp_base.h"
#include "vfx_object.h"
#include "vfx_sys_memory.h"
#include "vapp_wallpaper.h"
#include "vfx_class_info.h"
#include "vfx_datatype.h"
#include "vfx_primitive_frame.h"
#include "vapp_hs_def.h"
#include "vfx_basic_type.h"
#include "vrt_datatype.h"
#include "vfx_animation.h"
#include "vrt_canvas.h"
#include "vfx_input_event.h"
#include "vfx_frame.h"
#include "vfx_owner_draw.h"
#include "vfx_image_src.h"
#include "vadp_asm.h"
#include "vapp_wallpaper_file.h"

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef __MMI_USB_SUPPORT__
#include "USBSrvGProt.h"
#include "mmi_rp_app_usbsrv_def.h"
#endif

// for reg gpio event
#include "gpiosrvgprot.h"
#include "UcmSrvGprot.h"

#include "gdi_primitive.h"

#include "FileMgrSrvGProt.h"

#include "App_mem_med.h"

#include "gdi_primitive.h"

#include "vrt_mutex.h"
#ifdef __cplusplus
}
#endif

extern "C"
{
// memory related
#ifdef __COSMOS_MMI_PACKAGE__
#include "app_mem_med.h"
#else
#include "med_utility.h"
#endif
}

// restore wallpaper related
#ifdef __COSMOS_MMI_PACKAGE__
#include "vapp_wallpaper_setting_method_gprot.h"
#include "vapp_usb_gprot.h"
#else
extern "C"
{
#include "SettingGprots.h"
#include "PhoneSetupGprots.h"
}
#endif

#ifndef VAPP_WALLPAPER_MAX_NAME_LEN
#define VAPP_WALLPAPER_MAX_NAME_LEN (30)
#endif

#if defined(__MTK_INTERNAL__) && defined(__MTK_TARGET__)
#ifdef __cplusplus
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#ifdef __cplusplus
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* defined(__MM_DEBUG_MEASURE__) */
#define VAPP_IWP_START_LOGGING(_symbol_)
#define VAPP_IWP_STOP_LOGGING(_symbol_)
#endif /* defined(__MM_DEBUG_MEASURE__) */

struct VappWallpaperInteractiveVideoFPEUserData
{
    VappInteractiveVideoDraw *m_draw;
    VfxObjHandle m_drawHandle;
};

VfxU8 g_vapp_wallpaper_IO_flag = 0;
static vrt_mutex_struct g_vapp_wallpaper_mutex;

static void async_get_frame_callback(VAPP_WP_DEC_STATUS error_code, void *callback_para)
{
    VAPP_IWP_START_LOGGING("ACB");

    vrt_mutex_lock(&g_vapp_wallpaper_mutex);
    g_vapp_wallpaper_IO_flag = 1;
    vrt_mutex_unlock(&g_vapp_wallpaper_mutex);

    VAPP_IWP_STOP_LOGGING("ACB");
}

/*****************************************************************************
 * Home screen UI componet: interactive video wallpaper
 *****************************************************************************/
VFX_IMPLEMENT_CLASS("Interactive Video Wallpaper", VappWallpaperInteractiveVideo, VappWallpaper);

VfxObjHandle VappWallpaperInteractiveVideo::s_instance = NULL;

VappWallpaperInteractiveVideo::VappWallpaperInteractiveVideo() :
    m_draw(NULL)
    ,m_timeline(NULL)
    ,m_isFileValid(VFX_FALSE)
    ,m_asmGroupId(0)
{
    kal_mem_set(&m_sourceFileName[0], 0, sizeof(m_sourceFileName));
}

void VappWallpaperInteractiveVideo::onSerializeView()
{
    onReleaseView();
}

void VappWallpaperInteractiveVideo::onRestoreView()
{
    onCreateView();
}

void VappWallpaperInteractiveVideo::onCreateView()
{
    vrt_mutex_init(&g_vapp_wallpaper_mutex);
    setSize(LCD_WIDTH, LCD_HEIGHT);
    setBgColor(VFX_COLOR_TRANSPARENT);
    setOpaqueMode(VFX_FRAME_OPAQUE_MODE_FULLY_OPAQUE);

    m_isFileValid = VFX_FALSE;

    if(initASMScreenGroup())
    {
        VFX_OBJ_CREATE(m_draw, VappInteractiveVideoDraw, this);
        // start filter timeline
        VFX_OBJ_CREATE(m_timeline, VfxFloatTimeline, this);
        m_timeline->setFromValue(0.0f);
        m_timeline->setToValue(1.0f);
        m_timeline->setDurationTime(1000);
        m_timeline->setAutoReversed(VFX_FALSE);
        m_timeline->setRepeatCount(VFX_TIMELINE_REPEAT_INFINITE);
        m_timeline->setTarget(this);
        m_timeline->setTargetPropertyId(VRT_FRAME_PROPERTY_ID_FILTER_TIMING);
        m_timeline->start();

        checkPlay();

        registerEvents(VFX_TRUE);
    }
    else
    {
        // no memory, use fallback image
        showDefaultWallpaperFrame(VFX_TRUE);
    }

}

void VappWallpaperInteractiveVideo::onReleaseView()
{
    setOwnerDraw(NULL);
    setPropertyEffectCallback(this, NULL, NULL, NULL, VRT_FPE_TRIGGER_TYPE_CONTENT_DIRTY);

    VFX_OBJ_CLOSE(m_draw);
    VFX_OBJ_CLOSE(m_timeline);

    registerEvents(VFX_FALSE);

    deinitASMScreenGroup();
}

VfxBool VappWallpaperInteractiveVideo::getThumbnailImage(VfxImageBuffer &output)
{
    VfxWString path((VfxWChar*)m_sourceFileName);
    return VappWallpaperFileBase::decodeFileThumb(path, output);
}

// Get Name, but not ext.
void VappWallpaperInteractiveVideo::getName(VfxWString &wallpaperName)
{
    const WCHAR *srcFile = &m_sourceFileName[0];
    SRV_FMGR_FILEINFO_HANDLE hInfo = NULL;
    if(0 != srv_fmgr_fileinfo_create(srcFile, &hInfo))
    {
        wallpaperName.setEmpty();
        return;
    }
    // the length returned does not include terminating NULL.
    const S32 reqLen = vfxMin(VAPP_WALLPAPER_MAX_NAME_LEN, (4 + srv_fmgr_fileinfo_get_display_name(hInfo, NULL, 0)));
    WCHAR *pBuf = wallpaperName.lockBuf(reqLen);
    if(pBuf)
    {
        srv_fmgr_fileinfo_get_display_name(hInfo, pBuf, reqLen * sizeof(WCHAR));
        // remove suffix
        WCHAR* ext = srv_fmgr_path_get_extension_ptr(pBuf);
        if(ext && ext > pBuf)
        {
            --ext;
            *ext = NULL;
        }
    }
    wallpaperName.unlockBuf();
    srv_fmgr_fileinfo_destroy(hInfo);
    hInfo = NULL;
}

void VappWallpaperInteractiveVideo::setSourceFile(WCHAR *srcFile)
{
    if(srcFile)
    {
        mmi_wcscpy(m_sourceFileName, srcFile);
    }
    else
    {
        kal_mem_set(&m_sourceFileName[0], 0, sizeof(m_sourceFileName));
    }
}

VfxBool VappWallpaperInteractiveVideo::onAllowSuspendOnSwipe()
{
    // if it is interactive wallpaper, the desktop transition still need to update content
    if(m_draw && m_draw->m_partitionCount == 1)
    {
        return VFX_TRUE;
    }
    else
    {
        return VFX_FALSE;
    }
}

VfxBool VappWallpaperInteractiveVideo::onAllowSuspendOnPenDown()
{
    // if it is interactive wallpaper, the desktop transition still need to update content
    if(m_draw && m_draw->m_partitionCount == 1)
    {
        return VFX_TRUE;
    }
    else
    {
        return VFX_FALSE;
    }
}

void VappWallpaperInteractiveVideo::onSuspend()
{
    if(m_draw && m_draw->m_partitionCount == 1)
    {
        m_draw->m_isSuspend = VFX_TRUE;
        m_timeline->stop();
    }
    else if(m_draw && m_draw->m_partitionCount != 1)
    {
        if(!m_draw->m_isMovingBetweenPage)
        {
            m_draw->m_isSuspend = VFX_TRUE;
            m_timeline->stop();
        }
    }
}

void VappWallpaperInteractiveVideo::onResume()
{
    if(m_timeline)
        m_timeline->start();
    if(m_draw && m_draw->m_partitionCount == 1)
    {
        m_draw->m_isSuspend = VFX_FALSE;
    }
    else if(m_draw && m_draw->m_partitionCount != 1)
    {
        if(m_draw->m_isSuspend)
            m_draw->m_isSuspend = VFX_FALSE;
    }

    invalidate();
}

VfxBool VappWallpaperInteractiveVideo::onPenInput(VfxPenEvent &event)
{
    switch (event.type)
    {
        case VFX_PEN_EVENT_TYPE_DOWN:
        {
            return VFX_TRUE;
        }
    }
    return VFX_TRUE;

}

void VappWallpaperInteractiveVideo::onDesktopCursorChanged(
        VfxFloat curPos,     
        VfxFloat oldPos)
{

    VAPP_IWP_START_LOGGING("ADS");

    if(NULL == m_draw)
    {
        return;
    }

    VfxSize screenSize = getScreenSize();
    VfxU32 pageNumber = getTotalPage();
    VfxS32 x = curPos * (pageNumber- 1) * screenSize.width;
    VfxS32 state = (x % screenSize.width) * STATE_SCALE / screenSize.width;
    state += ((x/screenSize.width)* STATE_SCALE);

    // exception handle for wallpaper page nuber is different from HS page number
    VfxU32 wallpaperPageNumber = (m_draw->m_partitionCount >> 1) + 1;
    if(pageNumber != wallpaperPageNumber)
    {
        state = state - (pageNumber >> 1)*STATE_SCALE + (wallpaperPageNumber >> 1)*STATE_SCALE;

        if(state < 0)
        {
            state = 0;
        }

        if(state > (wallpaperPageNumber - 1)*STATE_SCALE)
        {
            state = (wallpaperPageNumber - 1)*STATE_SCALE;
        }
    }

    VfxAutoAnimate::begin();
    setAutoAnimate(VFX_TRUE);
    VfxAutoAnimate::setDisable(VFX_FALSE);
    VfxAutoAnimate::setDuration(200);
    VfxAutoAnimate::setTimingFunc(VFX_TIMING_FUNC_ID_EASE_OUT);
    setFpeUser0(state);
    VfxAutoAnimate::commit();

    invalidate();

    VAPP_IWP_STOP_LOGGING("ADS");
}

void VappWallpaperInteractiveVideo::checkPlay(void)
{
    VfxBool currntFileStatus = VappWallpaperFileBase::isFileusable(m_sourceFileName);

    if(m_isFileValid)
    {
        if(VFX_FALSE == currntFileStatus)
        {
            restoreWallpaperSetting();
            m_draw->m_errorCode = 5001;

            showDefaultWallpaperFrame(VFX_TRUE);
            setOwnerDraw(NULL);
            setPropertyEffectCallback(this, NULL, NULL, NULL, VRT_FPE_TRIGGER_TYPE_CONTENT_DIRTY);
            if(m_draw)
            {
                m_draw->destoryFileInfo();
            }
        }
    }
    else
    {
        if(currntFileStatus)
        {
            showDefaultWallpaperFrame(VFX_FALSE);

            setOwnerDraw(m_draw);

            VappWallpaperInteractiveVideoFPEUserData data;
            data.m_draw = m_draw;
            data.m_drawHandle = m_draw->getObjHandle();
            setPropertyEffectCallback(this, m_draw->onUpdate, &data, sizeof(data), VRT_FPE_TRIGGER_TYPE_CONTENT_DIRTY);

            m_draw->setFileSrc(m_sourceFileName);
            if(!m_draw->createFileInfo())
            {
                setPropertyEffectCallback(this, NULL, NULL, NULL, VRT_FPE_TRIGGER_TYPE_CONTENT_DIRTY);

                showDefaultWallpaperFrame(VFX_TRUE);

                currntFileStatus = VFX_FALSE;
            }
        }
        else
        {
            restoreWallpaperSetting();
            m_draw->m_errorCode = 5000;

            showDefaultWallpaperFrame(VFX_TRUE);
            setOwnerDraw(NULL);
            setPropertyEffectCallback(this, NULL, NULL, NULL, VRT_FPE_TRIGGER_TYPE_CONTENT_DIRTY);
            if(m_draw)
            {
                m_draw->destoryFileInfo();
            }
        }
    }
    m_isFileValid = currntFileStatus;

}

mmi_ret VappWallpaperInteractiveVideo::handleEvent(mmi_event_struct *param)
{
    if(NULL == param)
    {
        return MMI_RET_OK;
    }

    switch(param->evt_id)
    {
        case EVT_ID_SRV_FMGR_NOTIFICATION_DEV_PLUG_OUT:
            restoreWallpaperSetting();
            m_draw->m_errorCode = 4001;

            showDefaultWallpaperFrame(VFX_TRUE);
            setOwnerDraw(NULL);
            setPropertyEffectCallback(this, NULL, NULL, NULL, VRT_FPE_TRIGGER_TYPE_CONTENT_DIRTY);
            if(m_draw)
            {
                m_draw->destoryFileInfo();
            }
            break;

    #ifdef __MMI_USB_SUPPORT__
        case EVT_ID_USB_ENTER_MS_MODE:
        case EVT_ID_USB_EXIT_MS_MODE:
            checkPlay();
            break;
    #endif // #ifdef __MMI_USB_SUPPORT__

    }
    return MMI_RET_OK;
}

VfxBool VappWallpaperInteractiveVideo::checkResource()
{
    // if already playing, use current state
    if(NULL != m_draw)
    {
        const VfxBool playOk = (m_draw->m_errorCode == 0);
        return playOk;
    }

    // otherwise exame the file again
    const VfxBool fileOk = VappWallpaperFileBase::checkFile(VFX_WSTR_MEM((WCHAR*)m_sourceFileName));
    return fileOk;
}

void * VappWallpaperInteractiveVideo::unzip_mem_malloc(void *opaque, unsigned int items, unsigned int size)
{
    unsigned int total_bytes;
    void *buffer_ptr;

    if (opaque)
    {
        items += size - size;   /// make compiler happy
    }
    total_bytes = items * size;

#ifdef __COSMOS_MMI_PACKAGE__
    VFX_ASSERT(s_instance);
    VappWallpaperInteractiveVideo *pThis = (VappWallpaperInteractiveVideo*)VfxObject::handleToObject(s_instance);
    VFX_ASSERT(pThis);
    buffer_ptr = applib_asm_alloc_r(pThis->m_asmGroupId, total_bytes);
    ASSERT(buffer_ptr != NULL);
#else
    buffer_ptr = med_alloc_ext_mem_cacheable(total_bytes);
#endif

    return buffer_ptr;
}

void VappWallpaperInteractiveVideo::unzip_mem_free(void *opaque, void *address)
{
#ifdef __COSMOS_MMI_PACKAGE__
    VFX_ASSERT(s_instance);
    VappWallpaperInteractiveVideo *pThis = (VappWallpaperInteractiveVideo*)VfxObject::handleToObject(s_instance);
    VFX_ASSERT(pThis);
    applib_asm_free_r(pThis->m_asmGroupId, address);
#else
    med_free_ext_mem((void**)&address);
#endif

   return;
}

// Prepare ASM Memory for App
VfxBool VappWallpaperInteractiveVideo::initASMScreenGroup()
{
#ifdef __COSMOS_MMI_PACKAGE__
    VFX_ASSERT(0 == m_asmGroupId);
    VFX_ASSERT(s_instance == NULL);

        s_instance = getObjHandle();
        VadpAsmProperty p;

        if(0 != getExternalMemorySource())
        {
            // use external-assigned group first
            m_asmGroupId = getExternalMemorySource();
            return VFX_TRUE;
        }
        else
        {
            // create a hidden group with our own APP id
            m_asmGroupId = mmi_frm_group_create(GRP_ID_ROOT,
                                              APP_VENUS_WALLPAPER_FRAME_VIDEO,
                                              &onScreenGroupEvent,
                                              getObjHandle());
            if(GRP_ID_INVALID != m_asmGroupId)
            {
                U32 size = mmi_res_get_app_base_mem_size(APP_VENUS_WALLPAPER_FRAME_VIDEO) + 
                           mmi_res_get_app_fg_mem_size(APP_VENUS_WALLPAPER_FRAME_VIDEO);
                if (mmi_frm_asm_check_enough(m_asmGroupId, size) == MMI_FALSE)
                {
                    mmi_frm_group_close(m_asmGroupId);
                    m_asmGroupId = GRP_ID_INVALID;
                    s_instance = NULL;
                    MMI_TRACE(TRACE_GROUP_2, TRC_VAPP_WALLPAPER_INTERACTIVE_VIDEO_VAPP_WALLPAPER_INTERACTIVE_VIDEO_INIT_ASMSCREEN_GROUP_FAIL_MMI_FRM_ASM_CHECK_ENOUGH);
                    return VFX_FALSE;
                }
                VadpAsm::getProperty(m_asmGroupId, p);
                p.f_prepare_w_reserve = 0;
                p.f_hide_in_oom = 0;
                VadpAsm::setProperty(m_asmGroupId, p);
                return VFX_TRUE;
            }
            else
            {
                // cannot create asm group e.g. during small screen redraw
                s_instance = NULL;
                return VFX_FALSE;
            }
        }
#else
    return VFX_TRUE;
#endif
}

void VappWallpaperInteractiveVideo::deinitASMScreenGroup()
{
#ifdef __COSMOS_MMI_PACKAGE__
    // since video CP depends on group id,
    // make sure it is destroyed.
    if(m_asmGroupId)
    {
        setOwnerDraw(NULL);
        VFX_OBJ_CLOSE(m_draw);
        VFX_OBJ_CLOSE(m_timeline);
        if(0 != getExternalMemorySource())
        {
            // no need to close external group
            m_asmGroupId = NULL;
        }
        else
        {
            // close group if we created it.
            VFX_ASSERT(0 == applib_mem_ap_get_single_usage(m_asmGroupId));
            mmi_frm_group_close(m_asmGroupId);
            m_asmGroupId = NULL;
        }
        s_instance = NULL;
    }
#endif
}

mmi_ret VappWallpaperInteractiveVideo::onScreenGroupEvent(mmi_event_struct *evt)
{
    mmi_ret ret = MMI_RET_OK;
    switch(evt->evt_id)
    {
    case EVT_ID_DELETE_DANGLE_GROUP_REQ:
        // keep dangle group
        return MMI_RET_ERR;
    case EVT_ID_ASM_FREE_REQ:   // volunteer free
    case EVT_ID_ASM_FREE_REQ_NO_WAIT: // volunteer free
    case EVT_ID_ASM_FORCE_FREE: // force free
        {
            VappWallpaperInteractiveVideo *pThis = (VappWallpaperInteractiveVideo*)VfxObject::handleToObject(evt->user_data);
            if(pThis)
            {
                pThis->onReleaseView();
                pThis->showDefaultWallpaperFrame(VFX_TRUE);
            }
        }
        return MMI_FRM_ASM_FREED;
    }
    return ret;
}

/*****************************************************************************
 * Class VappInteractiveVideoDraw
 *****************************************************************************/
VappInteractiveVideoDraw::VappInteractiveVideoDraw() : m_isSuspend(VFX_FALSE), m_lastUpdateTiming(-1.0), m_timeOffset(0)
{
    m_framePtr = 0;
    m_decodedFramePtr = (VfxU32)-1;
    m_state = -1;
    m_previousState = m_state;
    m_currentState = m_state;
    m_currentTimeOffset = 0;
    m_currentDuration = 10;
    m_errorCode = 0;
    m_bpp = 2;
    m_cf = VRT_COLOR_TYPE_RGB565;
    m_isMovingBetweenPage = VFX_FALSE;
    m_isFirstFrameGen = VFX_FALSE;
}

void VappInteractiveVideoDraw::onInit()
{
    VfxOwnerDraw::onInit();

#if defined(MAIN_MEDIA_LAYER_BITS_PER_PIXEL) && (24 == MAIN_MEDIA_LAYER_BITS_PER_PIXEL)
    const VfxU32 BPP = 3;
#else
    const VfxU32 BPP = 2;
#endif

    const VfxU32 needMemSize = LCD_WIDTH*LCD_HEIGHT*BPP + VIDEO_HEADER_LEN;
#ifdef __COSMOS_MMI_PACKAGE__
    m_contentBuffer = (VfxU8*)VappWallpaperInteractiveVideo::unzip_mem_malloc(NULL, 1, needMemSize);
    ASSERT(m_contentBuffer != NULL);
    m_sourceBuffer = (VfxU8*)VappWallpaperInteractiveVideo::unzip_mem_malloc(NULL, 1, needMemSize);
    ASSERT(m_sourceBuffer != NULL);
    m_sourceBuffer2 = (VfxU8*)VappWallpaperInteractiveVideo::unzip_mem_malloc(NULL, 1, needMemSize);
    ASSERT(m_sourceBuffer2 != NULL);
#else
    m_contentBuffer = (VfxU8*)med_alloc_ext_mem_cacheable(needMemSize);
    m_sourceBuffer = (VfxU8*)med_alloc_ext_mem_cacheable(needMemSize);
    m_sourceBuffer2 = (VfxU8*)med_alloc_ext_mem_cacheable(needMemSize);
#endif
    m_fistNotUesedBuffer = m_sourceBuffer;
    memset(m_contentBuffer, 0, needMemSize);

    m_fileHandle = 0;
    m_isErrorHappended = VFX_FALSE;
    m_isSuspend = ((VappWallpaperInteractiveVideo*)getParent())->isSuspended();
}


void VappInteractiveVideoDraw::onDeinit()
{
    destoryFileInfo();

#ifdef __COSMOS_MMI_PACKAGE__
    VappWallpaperInteractiveVideo::unzip_mem_free(NULL, m_contentBuffer);
    VappWallpaperInteractiveVideo::unzip_mem_free(NULL, m_sourceBuffer);
    VappWallpaperInteractiveVideo::unzip_mem_free(NULL, m_sourceBuffer2);
#else
    med_free_ext_mem((void**)&m_contentBuffer);
    med_free_ext_mem((void**)&m_sourceBuffer);
    med_free_ext_mem((void**)&m_sourceBuffer2);
#endif

    VfxOwnerDraw::onDeinit();
}

void VappInteractiveVideoDraw::setFileSrc(WCHAR* src)
{
    mmi_wcscpy(m_sourceFileName, src);
    const int decType = wallpaperDecGetTypeFromFileName(src);
    if(-1 != decType)
    {
        wallpaperDecSetType(decType);
    }
}

VfxBool VappInteractiveVideoDraw::createFileInfo(void)
{
    VAPP_WP_DEC_STATUS status;
    VAPP_WP_COLOR_FORMAT srcFormat;
    VAPP_IWP_START_LOGGING("ACF");

    if (FSAL_Open(&m_fsal, (void *)(m_sourceFileName), FSAL_READ)!= FSAL_OK)
    {
       restoreWallpaperSetting(1001);
       return VFX_FALSE;
    }

    status = wallpaperDecGetHandle(&m_fileHandle);
    if (status != VAPP_WP_DEC_STATUS_OK)
    {
       restoreWallpaperSetting(1002);
       return VFX_FALSE;

    }

    status = wallpaperDecSetAllocAndFree(m_fileHandle, &VappWallpaperInteractiveVideo::unzip_mem_malloc, &VappWallpaperInteractiveVideo::unzip_mem_free);
    if (status != VAPP_WP_DEC_STATUS_OK)
    {
       restoreWallpaperSetting(1003);
       return VFX_FALSE;
    }

    status = wallpaperDecSetSrcFile(m_fileHandle, &m_fsal);
    if (status != VAPP_WP_DEC_STATUS_OK)
    {
       restoreWallpaperSetting(1004);
       return VFX_FALSE;
    }


    status = wallpaperDecQuerySrcResolution(m_fileHandle, &m_FrameWidth, &m_FrameHeight);
    if ((status != VAPP_WP_DEC_STATUS_OK) || (m_FrameWidth != LCD_WIDTH) || (m_FrameHeight != LCD_HEIGHT))
    {
       restoreWallpaperSetting(1005);
       return VFX_FALSE;
    }

    #if defined(MAIN_MEDIA_LAYER_BITS_PER_PIXEL) && (24 == MAIN_MEDIA_LAYER_BITS_PER_PIXEL)

    const int decType = wallpaperDecGetTypeFromFileName(m_sourceFileName);
    if(1 == decType)
    {
        status = wallpaperDecSetDstFormat(m_fileHandle, VAPP_WP_RGB888);
        m_bpp = 3;
        m_cf = VRT_COLOR_TYPE_RGB888;
    }
    else
    {
        status = wallpaperDecSetDstFormat(m_fileHandle, VAPP_WP_RGB565);
        m_bpp = 2;
        m_cf = VRT_COLOR_TYPE_RGB565;
    }
    #else
    status = wallpaperDecSetDstFormat(m_fileHandle, VAPP_WP_RGB565);
    m_bpp = 2;
    #endif

    if (status != VAPP_WP_DEC_STATUS_OK)
    {
       restoreWallpaperSetting(1006);
       return VFX_FALSE;
    }

    status = wallpaperDecQuerySrcFormat(m_fileHandle, &srcFormat);
    if (status != VAPP_WP_DEC_STATUS_OK)
    {
       restoreWallpaperSetting(1006);
       return VFX_FALSE;
    }

    if(srcFormat != VAPP_WP_RGB565)
    {
        restoreWallpaperSetting(1007);
    }

    status = wallpaperDecQueryPartitionCount(m_fileHandle, &m_partitionCount);
    if (status != VAPP_WP_DEC_STATUS_OK)
    {
        restoreWallpaperSetting(1008);
        return VFX_FALSE;
    }

    if(m_partitionCount > MAX_SUPPORT_PARTITION_NUM)
        m_partitionCount = MAX_SUPPORT_PARTITION_NUM;

    for(VfxU32 i = 0; i < m_partitionCount; i++)
    {
        status = wallpaperDecQueryPartitionInfo(
            m_fileHandle,
            i,
            &m_partitionFrameCount[i],
            &m_partitionFrameStartPtr[i]);

        if (status != VAPP_WP_DEC_STATUS_OK)
        {
            restoreWallpaperSetting(1009);
            return VFX_FALSE;
        }
    }

    status = wallpaperDecQueryFrameCount(m_fileHandle, &m_frameCnt);
    if (status != VAPP_WP_DEC_STATUS_OK)
    {
       restoreWallpaperSetting(1010);
       return VFX_FALSE;
    }

    status = wallpaperDecQueryFrameHeaderLength(m_fileHandle, &m_frameHeaderLen);
    if (status != VAPP_WP_DEC_STATUS_OK)
    {
       restoreWallpaperSetting(1011);
       return VFX_FALSE;
    }

    vrt_mutex_lock(&g_vapp_wallpaper_mutex);
    g_vapp_wallpaper_IO_flag = 1;
    vrt_mutex_unlock(&g_vapp_wallpaper_mutex);

    VAPP_IWP_STOP_LOGGING("ACF");

    return VFX_TRUE;
}

VfxBool VappInteractiveVideoDraw::destoryFileInfo(void)
{
    if(m_fileHandle != 0)
    {
        // restore decoder type. this is hot fix for MAUI_03207293,
        // where thumbnail decode may reset the underlying GLOBAL decoder type.
        const int decType = wallpaperDecGetTypeFromFileName(m_sourceFileName);
        if(-1 != decType)
        {
            wallpaperDecSetType(decType);
        }
        
        wallpaperDecReleaseHandle(&m_fileHandle);
        m_fileHandle = NULL;

        FSAL_Close(&m_fsal);
    }

    return VFX_TRUE;
}

void VappInteractiveVideoDraw::errHandler(VfxU32 errCode, void* userData)
{
    m_isErrorHappended = VFX_TRUE;
    m_errorCode = errCode;
    vrt_invoke_mmi_rpc(onVRTError, userData);
    memset(m_contentBuffer, 0, LCD_WIDTH*LCD_HEIGHT*m_bpp);
}

VfxU32 VappInteractiveVideoDraw::decodeFirstFrame(const vrt_frame_visual_property_struct* watch_frame, const VfxU32 lcdFrameSize)
    {
    // find first Frame index
    if(m_partitionCount != 1)
    {
        m_framePtr = m_partitionFrameStartPtr[(((VfxU32)(watch_frame->fpe_user_0) /STATE_SCALE) << 1) + 1];
    }
    else
    {
        m_framePtr = 0;
    }    

    VfxU32 errCode = 0;
    VAPP_WP_DEC_STATUS status;
    do {
        // query buffer size for cur frame    
        status = wallpaperDecQuerySrcFrameBufSize(m_fileHandle, m_framePtr, &m_sourceBufferRealSize);    
        if (status != VAPP_WP_DEC_STATUS_OK || (m_sourceBufferRealSize > (lcdFrameSize + VIDEO_HEADER_LEN)))
        {
            errCode = 1013;
            break;
        }

        // read content from cur frame
        VfxU32 actual_rd_size = 0;
        status = wallpaperDecGetFrameSrcBuf(
                    m_fileHandle,
                    VAPP_WP_READ_FILE_SYNC,
                    m_framePtr,
                    m_sourceBuffer,
                    m_sourceBufferRealSize,
                    &actual_rd_size,
                    NULL,
                    NULL);

        if (status != VAPP_WP_DEC_STATUS_OK)
        {
            errCode = 1014;
            break;
        }

        // decode cur frame
        status = wallpaperDecGetFramePixelData(
                    m_fileHandle,
                    m_sourceBuffer,
                    m_sourceBufferRealSize,
                    m_contentBuffer,
                    m_FrameWidth * m_FrameHeight * m_bpp + m_frameHeaderLen);

        m_fistNotUesedBuffer = m_sourceBuffer;

        if (status != VAPP_WP_DEC_STATUS_OK)
        {
            errCode = 1012;        
            break;
        }
    
    }while(0);

    return errCode;
}

vrt_render_dirty_type_enum VappInteractiveVideoDraw::onUpdate(
    vrt_frame_visual_property_struct *target_frame,
    const vrt_frame_visual_property_struct *watch_frame,
    void *user_data,
    vrt_u32 user_data_size)
{
    VAPP_IWP_START_LOGGING("AUP");
    ASSERT(user_data && sizeof(VappWallpaperInteractiveVideoFPEUserData) == user_data_size);
    const VappWallpaperInteractiveVideoFPEUserData *data = (VappWallpaperInteractiveVideoFPEUserData*)user_data;
    VappInteractiveVideoDraw *draw = data->m_draw;
    const VfxU32 lcdFrameSize = LCD_WIDTH*LCD_HEIGHT*draw->m_bpp;

    // decode the first frame
    if(!draw->m_isFirstFrameGen)
    {
        VfxU32 errCode = draw->decodeFirstFrame(watch_frame, lcdFrameSize);
        if (0 == errCode)
        {
            draw->m_isFirstFrameGen = VFX_TRUE;
        }
        else
        {
            draw->errHandler(errCode, data->m_drawHandle); 
        }

        return VRT_RENDER_DIRTY_TYPE_CONTENT_DIRTY;
    }

    if(draw->isSuspend())
    {
        VAPP_IWP_STOP_LOGGING("AUP");
        return VRT_RENDER_DIRTY_TYPE_NONE;
    }

    if(draw->m_isErrorHappended)
    {
        memset(draw->m_contentBuffer, 0, lcdFrameSize);
        VAPP_IWP_STOP_LOGGING("AUP");
        return VRT_RENDER_DIRTY_TYPE_NONE;
    }

    vrt_mutex_lock(&g_vapp_wallpaper_mutex);
    VfxU8 done_flag  = g_vapp_wallpaper_IO_flag;
    vrt_mutex_unlock(&g_vapp_wallpaper_mutex);

    // reading content from buffer,
    // so, not read next frame if in page, abort read if moving.
    if(done_flag == 0)
    {
        if(draw->m_isMovingBetweenPage)
        {
            wallpaperDecAbortGetFrameSrcBuf(draw->m_fileHandle);
            vrt_mutex_lock(&g_vapp_wallpaper_mutex);
            g_vapp_wallpaper_IO_flag = 1;
            vrt_mutex_unlock(&g_vapp_wallpaper_mutex);
        }
        else
        {
            return VRT_RENDER_DIRTY_TYPE_NONE;
        }
    }

    // begin frame update
    VAPP_IWP_START_LOGGING("AFU");

    // calculate new state 
    if(draw->m_previousState != watch_frame->fpe_user_0)
        draw->m_state = watch_frame->fpe_user_0;
    else
        draw->m_state = -1;

    draw->m_previousState = watch_frame->fpe_user_0;

    VfxBool backToSync = VFX_FALSE;
    if(((S32)(watch_frame->fpe_user_0) % STATE_SCALE) == 0)
    {
        if(draw->m_isMovingBetweenPage)
        {
            backToSync = VFX_TRUE;
        }

        draw->m_isMovingBetweenPage = VFX_FALSE;
    }
    else
    {
        draw->m_isMovingBetweenPage = VFX_TRUE;
    }

    // Calculate the actual time offset
    const VfxFloat &timing = watch_frame->filter_timing;
    VfxFloat timeOffset = timing - draw->m_lastUpdateTiming;
    if(timeOffset < 0.f)
    {
        // round trip back from FILTER_PROG_MAX
        timeOffset += 1.0f;
    }

    draw->m_timeOffset  = timeOffset;
    draw->m_lastUpdateTiming = timing;
    const VfxBool isMovingBeforeUpdate = draw->m_isMovingBetweenPage;

    if(draw->m_partitionCount == 1)      
    {
        draw->m_framePtr = (draw->m_framePtr+1) % draw->m_frameCnt;
    }
    else
    {
        VfxU32 FPS = VIDEO_FPS;
        // calculate frame Index
        draw->m_framePtr = 0;

        if(draw->m_state != -1)
        {
            VfxU32 partionIdx = (draw->m_state/STATE_SCALE) << 1;
            if(draw->m_state%STATE_SCALE)
            {
                ++partionIdx;
                }

            draw->m_framePtr = draw->m_partitionFrameStartPtr[partionIdx];
            if(draw->m_partitionFrameCount[partionIdx] > FPS)
            {
                draw->m_currentDuration = draw->m_partitionFrameCount[partionIdx] / FPS;
            }
            else
            {
                draw->m_currentDuration = 1;
                FPS = draw->m_partitionFrameCount[partionIdx];
            }

            draw->m_currentState = draw->m_state;
            draw->m_currentTimeOffset = 0;
        }
        else
        {
            VfxU32 curPartitionIdx = (draw->m_currentState/STATE_SCALE) << 1;
            if(draw->m_currentState%STATE_SCALE)
            {
                ++curPartitionIdx;
            }

            if(draw->m_partitionFrameCount[curPartitionIdx] <= FPS)
                FPS = draw->m_partitionFrameCount[curPartitionIdx];

            draw->m_framePtr = draw->m_partitionFrameStartPtr[curPartitionIdx];
        }

        if(draw->m_currentState%STATE_SCALE == 0)
        {
            VfxFloat timeDuration = draw->m_currentTimeOffset + draw->m_timeOffset;
            if(timeDuration < draw->m_currentDuration)
            {
                draw->m_currentTimeOffset = timeDuration;
            }
            else
            {
                draw->m_currentTimeOffset = (VfxFloat)((VfxU32)timeDuration % draw->m_currentDuration);
            }

            draw->m_framePtr += ((VfxU32)(draw->m_currentTimeOffset * FPS));
        }
        else
        {
            VfxFloat ratio =  ((VfxFloat)(draw->m_currentState%STATE_SCALE) / 100.0) * draw->m_currentDuration;
            draw->m_framePtr += ((VfxU32)(ratio * FPS));
        }
    }

    // end frame update
    VAPP_IWP_STOP_LOGGING("AFU");

    // skip same content
    if(draw->m_decodedFramePtr != (VfxU32)-1 &&
       (draw->m_decodedFramePtr == draw->m_framePtr ||
        isMovingBeforeUpdate != draw->m_isMovingBetweenPage))
    {
        return VRT_RENDER_DIRTY_TYPE_NONE;
    }

    // read the next frame data into buffer
    // not moving, async read.
    VfxU8* dstBuff = NULL;
    VfxU32* pDtBuffSize = NULL;
    VAPP_IWP_START_LOGGING("AFS");
    if(!draw->m_isMovingBetweenPage && !backToSync)
    {
        if(draw->m_fistNotUesedBuffer == draw->m_sourceBuffer)
        {
           dstBuff = draw->m_sourceBuffer2;
           pDtBuffSize = &draw->m_sourceBufferRealSize2;
        }
        else
        {
           dstBuff = draw->m_sourceBuffer;
           pDtBuffSize = &draw->m_sourceBufferRealSize; 
        }

        VfxU32 errCode = draw->readNextFrameContent(dstBuff, pDtBuffSize, VAPP_WP_READ_FILE_ASYNC);
        if (errCode != 0)
        {
            draw->errHandler(errCode, data->m_drawHandle);
                VAPP_IWP_STOP_LOGGING("AUP");
            return VRT_RENDER_DIRTY_TYPE_CONTENT_DIRTY;
        }
    }
    else
    {
        // moving or mving to part case, cover decode buffer date, and sync read. 
        VfxU8* backBuff = NULL;
        VfxU32* pBackBuffSize = NULL;
        if(draw->m_fistNotUesedBuffer == draw->m_sourceBuffer)
        {
           dstBuff = draw->m_sourceBuffer;
           pDtBuffSize = &draw->m_sourceBufferRealSize;
           backBuff = draw->m_sourceBuffer2;
           pBackBuffSize = &draw->m_sourceBufferRealSize2;
        }
        else
        {
            dstBuff = draw->m_sourceBuffer2;
            pDtBuffSize = &draw->m_sourceBufferRealSize2;
            backBuff = draw->m_sourceBuffer;
            pBackBuffSize = &draw->m_sourceBufferRealSize;
        }

        VfxU32 errCode = draw->readNextFrameContent(dstBuff, pDtBuffSize, VAPP_WP_READ_FILE_SYNC);
        if (errCode != 0)
        {
            draw->errHandler(errCode, data->m_drawHandle);
            VAPP_IWP_STOP_LOGGING("AUP");
            return VRT_RENDER_DIRTY_TYPE_CONTENT_DIRTY;
        }

        // moving to next part
        if(backToSync)
        {
            memcpy(backBuff, dstBuff, *pDtBuffSize);
            *pBackBuffSize = *pDtBuffSize;
        }

        vrt_mutex_lock(&g_vapp_wallpaper_mutex);
        g_vapp_wallpaper_IO_flag = 1;
        vrt_mutex_unlock(&g_vapp_wallpaper_mutex);
    }
    VAPP_IWP_STOP_LOGGING("AFS");

    // skip same content
    if(isMovingBeforeUpdate != draw->m_isMovingBetweenPage)
    {
        return VRT_RENDER_DIRTY_TYPE_NONE;
    }

    // early abort
    if(draw->isSuspend())
    {
        return VRT_RENDER_DIRTY_TYPE_NONE;
    }

    VAPP_IWP_START_LOGGING("ADE");
    VAPP_WP_DEC_STATUS status;

    if(draw->m_fistNotUesedBuffer == draw->m_sourceBuffer)
    {
        status = wallpaperDecGetFramePixelData(
                                draw->m_fileHandle,
                                draw->m_sourceBuffer,
                                draw->m_sourceBufferRealSize,
                                draw->m_contentBuffer,
                                draw->m_FrameWidth * draw->m_FrameHeight * draw->m_bpp + draw->m_frameHeaderLen);
        draw->m_fistNotUesedBuffer = draw->m_sourceBuffer2;

    }
    else
    {
        status = wallpaperDecGetFramePixelData(
                                draw->m_fileHandle,
                                draw->m_sourceBuffer2,
                                draw->m_sourceBufferRealSize2,
                                draw->m_contentBuffer,
                                draw->m_FrameWidth * draw->m_FrameHeight * draw->m_bpp + draw->m_frameHeaderLen);
        draw->m_fistNotUesedBuffer = draw->m_sourceBuffer;
    }
    VAPP_IWP_STOP_LOGGING("ADE");

    if (status != VAPP_WP_DEC_STATUS_OK)
    {
        draw->errHandler(3003, data->m_drawHandle);
        draw->m_decodedFramePtr = (VfxU32)-1;
    }
    else
    {
        // decoded OK, remember current index
        draw->m_decodedFramePtr = draw->m_framePtr;
    }

    VAPP_IWP_STOP_LOGGING("AUP");
    return VRT_RENDER_DIRTY_TYPE_CONTENT_DIRTY;
}

VfxU32 VappInteractiveVideoDraw::readNextFrameContent(VfxU8 *dstBuf, VfxU32* dstBufSize, VAPP_WP_READ_FILE_MODE_ENUM readMode)
{
    VAPP_WP_DEC_STATUS status;
    VfxU32 errCode = 0;

    do {        
        status = wallpaperDecQuerySrcFrameBufSize(m_fileHandle, m_framePtr, dstBufSize);
        if (status != VAPP_WP_DEC_STATUS_OK)
        {
            errCode = 3001;        
            break;
        }

        wallpaper_async_get_frame_callback callback = NULL;
        if (VAPP_WP_READ_FILE_ASYNC == readMode)
        {
            vrt_mutex_lock(&g_vapp_wallpaper_mutex);
            g_vapp_wallpaper_IO_flag = 0;
            vrt_mutex_unlock(&g_vapp_wallpaper_mutex);
            
            callback = async_get_frame_callback;
        }

        status = wallpaperDecGetFrameSrcBuf(
                   m_fileHandle,
                   readMode,
                   m_framePtr,
                   dstBuf,
                   *dstBufSize,
                   NULL,    // do NOT pass local variable, it'll write asynchronously
                   callback,
                   NULL);
        if (status != VAPP_WP_DEC_STATUS_OK)
        {
            errCode = 3002;        
            break;
        }
    }while(0);

    return errCode;
}
static VfxU32 getBPP(VfxColorTypeEnum vrtCF)
{
    switch(vrtCF)
    {
        case VRT_COLOR_TYPE_RGB565:
            return 2;
        case VRT_COLOR_TYPE_RGB888:
            return 3;
        case VRT_COLOR_TYPE_PARGB8888:
            return 4;
        case VRT_COLOR_TYPE_ARGB8888:
            return 4;
        default:
            VFX_DEV_ASSERT(VFX_FALSE); // only support ARGB8888 or PARGB8888
            return 2;
    }
}

static gdi_img_buf_color_format_enum getCF(VfxColorTypeEnum vrtCF)
{
    switch(vrtCF)
    {
        case VRT_COLOR_TYPE_RGB565:
            return GDI_IMG_BUF_COLOR_FORMAT_RGB565;
        case VRT_COLOR_TYPE_RGB888:
            return GDI_IMG_BUF_COLOR_FORMAT_RGB888;
        case VRT_COLOR_TYPE_PARGB8888:
            return GDI_IMG_BUF_COLOR_FORMAT_PARGB8888;
        case VRT_COLOR_TYPE_ARGB8888:
            return GDI_IMG_BUF_COLOR_FORMAT_ARGB8888;
        default:
            VFX_DEV_ASSERT(VFX_FALSE); // only support ARGB8888 or PARGB8888
            return GDI_IMG_BUF_COLOR_FORMAT_UNKNOWN;
    }
}

void VappInteractiveVideoDraw::onDraw(VfxImageBuffer &dstBuffer, VfxRect &dstRect, VfxRect &srcRect)
{
    VAPP_IWP_START_LOGGING("ADW");

    if(m_errorCode != 0)
    {
        VAPP_IWP_STOP_LOGGING("ADW");
        memset((VfxU8*)dstBuffer.ptr, 0, dstRect.size.width * dstRect.size.height * m_bpp);
        return;
    }

    VfxU8 *ptr = dstBuffer.ptr;
    VfxU8 *q = m_contentBuffer + m_frameHeaderLen;

    // offset to origin
    ptr +=  dstRect.origin.y * dstBuffer.pitchBytes + dstRect.origin.x * getBPP(dstBuffer.colorFormat);
    q +=  srcRect.origin.y * m_FrameWidth * m_bpp + srcRect.origin.x * m_bpp;

    // copy draw region
    gdi_img_buf_struct dst;
    dst.ptr = ptr;
    dst.pitch_bytes = dstBuffer.pitchBytes;
    dst.color_format = getCF(dstBuffer.colorFormat);
    gdi_img_buf_struct src;
    src.ptr = q;
    src.pitch_bytes = m_FrameWidth * m_bpp;
    src.color_format = getCF(m_cf);
    gdi_img_buf_copy(&dst, &src, dstRect.getWidth(), dstRect.getHeight());

    VAPP_IWP_STOP_LOGGING("ADW");

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}

// this function is called when error happen on VRT stack and send back to MMI to restore
void VappInteractiveVideoDraw::onVRTError(void *arg)
{
    VfxObjHandle drawHandle = (VfxObjHandle)arg;
    VappInteractiveVideoDraw *draw = (VappInteractiveVideoDraw*)VfxObject::handleToObject(drawHandle);
    if(draw)
    {
        draw->restoreWallpaperSetting(draw->m_errorCode);
    }
}

void VappInteractiveVideoDraw::restoreWallpaperSetting(VfxU32 errCode)
{
    m_errorCode = errCode;

    mmi_frm_nmgr_balloon(MMI_SCENARIO_ID_DEFAULT, MMI_EVENT_INFO_BALLOON, MMI_NMGR_BALLOON_TYPE_INFO, VFX_WSTR_RES(STR_GLOBAL_DRM_INVALID_FORMAT));

    VfxObject *parentFrame = getParent();
    VappWallpaper *wp = VFX_OBJ_DYNAMIC_CAST(parentFrame, VappWallpaper);
    if(wp)
    {
        wp->restoreWallpaperSetting();
    }
}

#endif /* __MMI_VUI_HOMESCREEN_LIVE_WALLPAPER_INTERACTIVE_VIDEO__ */
