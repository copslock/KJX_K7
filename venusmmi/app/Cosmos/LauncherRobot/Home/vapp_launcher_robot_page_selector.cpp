/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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
 *  vapp_launcher_robot_page_selector.cpp
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  This file implements the page selector.
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

#include "MMI_features.h"

/*****************************************************************************
 * Include
 *****************************************************************************/

#include "vfx_uc_include.h"
#include "vapp_launcher_robot_def.h"
#include "vapp_launcher_robot_primitive.h"
#include "vapp_launcher_robot_page_selector.h"

#include "mmi_rp_vapp_launcher_robot_def.h"


/*****************************************************************************
 * Page Selector Debug Panel
 *****************************************************************************/

#if defined(VAPP_LAUNCHER_ROBOT_UT_PAGE_SELECTOR_DEBUG_PANEL)

const VfxFloat VappLauncherRobotPageSelectorDebugPanel::s_opacity = 0.6f;


VappLauncherRobotPageSelectorDebugPanel::VappLauncherRobotPageSelectorDebugPanel() :
    m_isOn(VFX_FALSE),
    m_aniTime(0),
    m_aniTimeText(NULL),
    m_aniTimeIncBtn(NULL),
    m_aniTimeDecBtn(NULL),
    m_aniTimeDiff(0),
    m_aniTimeDiffChangeCount(0),
    m_aniTimeAdjustTimer(NULL)
{
    // Do nothing.
}


void VappLauncherRobotPageSelectorDebugPanel::onInit()
{
    VfxControl::onInit();

    VfxFrame *parent = getParentFrame();
    VFX_OBJ_ASSERT_VALID(parent);

    //
    // Animation Time
    //
    VFX_OBJ_CREATE(m_aniTimeText, VfxTextFrame, this);
    m_aniTimeText->setFont(VfxFontDesc(VFX_FONT_DESC_VF_SIZE(FONT_SIZE)));
    m_aniTimeText->setPos(GAP_X, GAP_Y);

    VfxSize textSize = m_aniTimeText->getMeasureBounds().size;
    VfxSize buttonSize = VfxSize(textSize.height, textSize.height);

    VFX_OBJ_CREATE(m_aniTimeIncBtn, VfxFrame, this);
    m_aniTimeIncBtn->setBgColor(VFX_COLOR_WHITE);
    m_aniTimeIncBtn->setSize(buttonSize);
    m_aniTimeIncBtn->setAnchor(1.0f, 0.0f);
    m_aniTimeIncBtn->setPos(WIDTH - GAP_X, GAP_Y);

    VFX_OBJ_CREATE(m_aniTimeDecBtn, VfxFrame, this);
    m_aniTimeDecBtn->setBgColor(VFX_COLOR_GREY);
    m_aniTimeDecBtn->setSize(buttonSize);
    m_aniTimeDecBtn->setAnchor(1.0f, 0.0f);
    m_aniTimeDecBtn->setPos(WIDTH - GAP_X - buttonSize.width - GAP_X, GAP_Y);

    VFX_OBJ_CREATE(m_aniTimeAdjustTimer, VfxTimer, this);
    m_aniTimeAdjustTimer->setStartDelay(ANI_TIME_ADJUST_TIMER_START_DELAY);
    m_aniTimeAdjustTimer->setDuration(ANI_TIME_ADJUST_TIMER_DURATION);
    m_aniTimeAdjustTimer->m_signalTick.connect(this, &VappLauncherRobotPageSelectorDebugPanel::onAniTimeAdjustTimer);

    //
    // This
    //
    setAutoAnimate(VFX_TRUE);
    setBgColor(VFX_COLOR_BLACK);
    setOpacity(0.0f);
    setSize(WIDTH, m_aniTimeDecBtn->getRect().getMaxY() + GAP_Y);
    setAnchor(0.0f, 1.0f);
    setPos(0, parent->getBounds().getHeight());
}


void VappLauncherRobotPageSelectorDebugPanel::onDeinit()
{
    VfxControl::onDeinit();
}


VfxBool VappLauncherRobotPageSelectorDebugPanel::onContainPoint(
    const VfxPoint &point) const
{
    if (m_isOn)
    {
        return VfxControl::onContainPoint(point);
    }
    else
    {
        VfxRect bounds = getBounds();

        if (point.x >= 0 &&
            point.x < bounds.getWidth() &&
            point.y >= bounds.getHeight() - TOGGLE_AREA_HEIGHT &&
            point.y < bounds.getHeight())
        {
            return VFX_TRUE;
        }
    }

    return VFX_FALSE;
}


VfxBool VappLauncherRobotPageSelectorDebugPanel::onPenInput(VfxPenEvent &event)
{
    if (!m_isOn && event.type == VFX_PEN_EVENT_TYPE_DOWN)
    {
        setOpacity(s_opacity);
        m_isOn = VFX_TRUE;

        return VfxControl::onPenInput(event);
    }

    if (m_isOn)
    {
        if (onAniTimePenInput(event))
        {
            return VFX_TRUE;
        }
    }

    if (m_isOn && event.type == VFX_PEN_EVENT_TYPE_DOWN)
    {
        setOpacity(0.0f);
        m_isOn = VFX_FALSE;

        return VfxControl::onPenInput(event);
    }

    return VfxControl::onPenInput(event);
}


VfxBool VappLauncherRobotPageSelectorDebugPanel::onAniTimePenInput(VfxPenEvent &event)
{
    switch (event.type)
    {
        case VFX_PEN_EVENT_TYPE_DOWN:
            m_aniTimeDiff = 0;
            m_aniTimeDiffChangeCount = 0;

            if (m_aniTimeIncBtn->containPoint(event.getRelPos(m_aniTimeIncBtn)))
            {
                m_aniTimeDiff = ANI_TIME_STEP;
            }

            if (m_aniTimeDecBtn->containPoint(event.getRelPos(m_aniTimeDecBtn)))
            {
                m_aniTimeDiff = -ANI_TIME_STEP;
            }

            if (m_aniTimeDiff != 0)
            {
                updateAniTime(m_aniTimeDiff);
                m_aniTimeAdjustTimer->start();

                return VFX_TRUE;
            }

            break;

        case VFX_PEN_EVENT_TYPE_UP:         // fall through
        case VFX_PEN_EVENT_TYPE_ABORT:
            m_aniTimeAdjustTimer->stop();
            return VFX_TRUE;

            break;

        default:
            break;
    }

    return VFX_FALSE;
}


void VappLauncherRobotPageSelectorDebugPanel::initAnimationTime(VfxS32 time)
{
    m_aniTime = time;

    updateAniTime(0);
}


void VappLauncherRobotPageSelectorDebugPanel::updateAniTime(VfxS32 diff)
{
    // Update animation time value.
    m_aniTime += diff;

    if (m_aniTime < ANI_TIME_STEP)
    {
        m_aniTime = ANI_TIME_STEP;
    }

    // Update text frame.
    VfxWChar buf[128];

    kal_wsprintf(buf, "Ani. Time: %d", m_aniTime);
    m_aniTimeText->setString((buf));

    // Notify the change.
    m_signalAnimationTimeChanged.emit(m_aniTime);
}


void VappLauncherRobotPageSelectorDebugPanel::onAniTimeAdjustTimer(VfxTimer *timer)
{
    updateAniTime(m_aniTimeDiff);

    if (++m_aniTimeDiffChangeCount >= ANI_TIME_STEP_ACCELERATE_CRITERIA)
    {
        m_aniTimeDiffChangeCount = 0;

        if (m_aniTimeDiff > 0)
        {
            m_aniTimeDiff += ANI_TIME_STEP;
        }
        else
        {
            m_aniTimeDiff -= ANI_TIME_STEP;
        }
    }
}
#endif /* defined(VAPP_LAUNCHER_ROBOT_UT_PAGE_SELECTOR_DEBUG_PANEL) */


/*****************************************************************************
 * Page Snapshot Class
 *****************************************************************************/

const VfxColor VappLauncherRobotPageSnapshot::s_alertFilterMin(0, 128, 0, 0);    // ARGB
const VfxColor VappLauncherRobotPageSnapshot::s_alertFilterMax(255, 255, 0, 0);  // ARGB
const VfxFloat VappLauncherRobotPageSnapshot::s_highlightOpacity = 0.6f;


VappLauncherRobotPageSnapshot::VappLauncherRobotPageSnapshot() :
    m_id(0),
    m_bgImg(NULL),
    m_sourceRect(VFX_RECT_ZERO),
#if defined(__COSMOS_3D_V10__)
    m_alertMaterial(NULL),
#else
    m_alertFilter(NULL),
#endif
    m_objList()
{
    // Do nothing.
}


void VappLauncherRobotPageSnapshot::onInit()
{
    VfxControl::onInit();

    //
    // Background Image. Image is a 9-slices image.
    //
    VFX_OBJ_CREATE(m_bgImg, VfxImageFrame, this);
    m_bgImg->setAutoAnimate(VFX_TRUE);
    m_bgImg->setResId(IMG_ID_VAPP_LAUNCHER_ROBOT_SNAPSHOT_BG);
    m_bgImg->setContentPlacement(VFX_FRAME_CONTENT_PLACEMENT_TYPE_RESIZE);

#if defined(__COSMOS_3D_V10__)
    //
    // Color Material
    //
    VFX_OBJ_CREATE(m_alertMaterial, VappLauncherRobotColorMaterial, this);
#else
    //
    // Color Filter
    //
    VFX_OBJ_CREATE(m_alertFilter, VappLauncherRobotColorFilter, this);
    m_alertFilter->setColorFilter(s_alertFilterMin, s_alertFilterMax);
#endif /* defined(__COSMOS_3D_V10__) */

    //
    // This Frame
    //
    setAutoAnimate(VFX_TRUE);
}


void VappLauncherRobotPageSnapshot::onDeinit()
{
    VfxControl::onDeinit();
}


VfxBool VappLauncherRobotPageSnapshot::onPreviewPenInput(VfxPenEvent &event)
{
    return VfxControl::onPreviewPenInput(event);
}


VfxBool VappLauncherRobotPageSnapshot::onPenInput(VfxPenEvent &event)
{
    switch (event.type)
    {
        case VFX_PEN_EVENT_TYPE_DOWN:
            setHighlight(VFX_TRUE);
            break;

        case VFX_PEN_EVENT_TYPE_MOVE:
            if (containPoint(event.getRelPos(this)))
            {
                setHighlight(VFX_TRUE);
            }
            else
            {
                setHighlight(VFX_FALSE);
            }
            break;

        case VFX_PEN_EVENT_TYPE_LONG_TAP:
            break;

        case VFX_PEN_EVENT_TYPE_UP:
            setHighlight(VFX_FALSE);

            if (containPoint(event.getRelPos(this)))
            {
                m_signalTapped.emit(this);
            }
            break;

        case VFX_PEN_EVENT_TYPE_ABORT:
            setHighlight(VFX_FALSE);
            break;

        default:
            break;
    }

    return VFX_TRUE;
}


void VappLauncherRobotPageSnapshot::setBounds(const VfxRect &value)
{
    VfxControl::setBounds(value);
    setBgImgRect(value);
    setContentRect(value, VFX_TRUE);
}


void VappLauncherRobotPageSnapshot::setId(VfxId id)
{
    m_id = id;
}


VfxId VappLauncherRobotPageSnapshot::getId() const
{
    return m_id;
}


void VappLauncherRobotPageSnapshot::setLayout(const VfxRect &sourceRect)
{
    m_sourceRect = sourceRect;

    m_bgImg->setSize(m_sourceRect.size);
    setSize(m_sourceRect.size);
}


void VappLauncherRobotPageSnapshot::getLayout(VfxRect &sourceRect) const
{
    sourceRect = m_sourceRect;
}


void VappLauncherRobotPageSnapshot::addToContainer(VfxFrame *frame)
{
    if (frame)
    {
        frame->setIsUnhittable(VFX_TRUE);

        VfxPoint pos = frame->getPos();

        VfxAutoAnimate::begin();
        VfxAutoAnimate::setDisable(VFX_TRUE);

        frame->setPos(pos);

        VfxAutoAnimate::commit();

        addChildFrame(frame);
        m_objList.append(frame);
    }
}


void VappLauncherRobotPageSnapshot::removeFromContainer(VfxObjList &objList)
{
    for (VfxObjListEntry *entry = m_objList.getHead();
         entry != NULL;
         entry = entry->getNext())
    {
        VfxFrame *frame = VFX_OBJ_DYNAMIC_CAST(entry->get(), VfxFrame);

        if (frame)
        {
            frame->setIsUnhittable(VFX_FALSE);

            VfxPoint pos = frame->getPos();

            VfxAutoAnimate::begin();
            VfxAutoAnimate::setDisable(VFX_TRUE);

            frame->setPos(pos);
            frame->setTransform(VFX_TRANSFORM_IDENTITY);

            VfxAutoAnimate::commit();

            frame->removeFromParentFrame();
            objList.append(frame);
        }
    }

    m_objList.clear();
}


VfxBool VappLauncherRobotPageSnapshot::isEmpty()
{
    return m_objList.isEmpty();
}


void VappLauncherRobotPageSnapshot::setHighlight(VfxBool isOn)
{
    // The performance will be very bad if we change the opacity of a frame with
    // a filter because it needs to redraw the frame.
    if (getFilter())
    {
        return;
    }

    VfxAutoAnimate::begin();
    VfxAutoAnimate::setDisable(VFX_TRUE);

    if (isOn)
    {
        setOpacity(s_highlightOpacity);
    }
    else
    {
        setOpacity(1.0f);
    }

    VfxAutoAnimate::commit();
}


void VappLauncherRobotPageSnapshot::setAlert(VfxBool isOn)
{
#if defined(__COSMOS_3D_V10__)
    if (isOn)
    {
        setMaterial(m_alertMaterial->get());
    }
    else
    {
        setMaterial(NULL);
    }
#else
    if (isOn)
    {
        setFilter(m_alertFilter);
    }
    else
    {
        setFilter(NULL);
    }
#endif /* defined(__COSMOS_3D_V10__) */
}


void VappLauncherRobotPageSnapshot::setObjectHidden(VfxBool isHidden)
{
    for (VfxObjListEntry *entry = m_objList.getHead();
         entry != NULL;
         entry = entry->getNext())
    {
        VfxFrame *frame = VFX_OBJ_DYNAMIC_CAST(entry->get(), VfxFrame);

        if (frame)
        {
            frame->setHidden(isHidden);
        }
    }
}


void VappLauncherRobotPageSnapshot::setBgImgOpacity(VfxFloat value)
{
    VFX_OBJ_ASSERT_VALID(m_bgImg);
    m_bgImg->setOpacity(value);
}


void VappLauncherRobotPageSnapshot::setBgImgHidden(VfxBool isHidden)
{
    VFX_OBJ_ASSERT_VALID(m_bgImg);
    m_bgImg->setHidden(isHidden);
}


void VappLauncherRobotPageSnapshot::setBgImgRect(const VfxRect &rect)
{
    VFX_OBJ_ASSERT_VALID(m_bgImg);
    m_bgImg->setRect(rect);
}


void VappLauncherRobotPageSnapshot::setContentRect(
    const VfxRect &rect,
    VfxBool inner9SlicesEdge)
{
    VfxRect widgetRect = rect;

    if (inner9SlicesEdge)
    {
        getInner9SliceRect(widgetRect);
    }

    VfxFPoint ratio = getResizeRatio(widgetRect, m_sourceRect);

    for (VfxObjListEntry *entry = m_objList.getHead();
         entry != NULL;
         entry = entry->getNext())
    {
        VfxFrame *frame = VFX_OBJ_DYNAMIC_CAST(entry->get(), VfxFrame);

        if (frame)
        {
            // Calculate the new position.
            VfxPoint srcPos = frame->getPos();
            VfxPoint dstPos, offset;

            dstPos.x = (VfxS32)(srcPos.x * ratio.x + 0.5f);
            dstPos.y = (VfxS32)(srcPos.y * ratio.y + 0.5f);

            offset.x = dstPos.x - srcPos.x;
            offset.y = dstPos.y - srcPos.y;

            // Transform this frame.
            VfxTransform trans;

            trans.init(VRT_TRANSFORM_TYPE_AFFINE);
            trans.data.affine.sx = ratio.x;
            trans.data.affine.sy = ratio.y;
            trans.data.affine.tx = (VfxFloat)(widgetRect.origin.x + offset.x);
            trans.data.affine.ty = (VfxFloat)(widgetRect.origin.y + offset.y);

            frame->setTransform(trans);
        }
    }
}


VfxPoint VappLauncherRobotPageSnapshot::getRectOffset(
    const VfxRect &dst,
    const VfxRect &src) const
{
    return VfxPoint(dst.origin.x - src.origin.x, dst.origin.y - src.origin.y);
}


void VappLauncherRobotPageSnapshot::getInner9SliceRect(VfxRect &rect)
{
    const VfxRect original(rect);

    //
    // Calculate the rectangle inner this 9 slice image.
    //
    rect.origin.x += BG_IMG_9SLICES_LEFT;
    rect.origin.y += BG_IMG_9SLICES_TOP;
    rect.size.width -= BG_IMG_9SLICES_LEFT + BG_IMG_9SLICES_RIGHT;
    rect.size.height -= BG_IMG_9SLICES_TOP + BG_IMG_9SLICES_BOTTOM;

    //
    // Keep the ratio of the new rectangle the same as the old rectangle.
    //
    VfxFloat ratioW = (VfxFloat)rect.size.width / original.size.width;
    VfxFloat ratioH = (VfxFloat)rect.size.height / original.size.height;

    if (ratioW < ratioH)
    {
        VfxS32 oldHeight = rect.size.height;

        rect.size.height = (VfxS32)(original.size.height * ratioW + 0.5f);

        VfxS32 diff = oldHeight - rect.size.height;
        if (diff > 0)
        {
            rect.origin.y += diff / 2;
        }
    }
    else
    {
        VfxS32 oldWidth = rect.size.width;

        rect.size.width = (VfxS32)(original.size.width * ratioH + 0.5f);

        VfxS32 diff = oldWidth - rect.size.width;
        if (diff > 0)
        {
            rect.origin.x += diff / 2;
        }
    }
}


VfxFPoint VappLauncherRobotPageSnapshot::getResizeRatio(
    const VfxRect &dst,
    const VfxRect &src) const
{
    VFX_ASSERT(src.size.width > 0 && src.size.height > 0);

    VfxFloat sx = (VfxFloat)dst.size.width / src.size.width;
    VfxFloat sy = (VfxFloat)dst.size.height / src.size.height;

    return VfxFPoint(sx, sy);
}


/*****************************************************************************
 * Page Selector Class
 *****************************************************************************/

VfxS32 VappLauncherRobotPageSelector::s_autoAnimationTime = 400;


VappLauncherRobotPageSelector::VappLauncherRobotPageSelector() :
    m_innerBorderVertiWidth(INNER_BORDER_HORIZ_WIDTH),
    m_innerBorderHorizWidth(INNER_BORDER_VERTI_WIDTH),
    m_outerBorderTopWidth(OUTER_BORDER_TOP_WIDTH),
    m_outerBorderBottomWidth(OUTER_BORDER_BOTTOM_WIDTH),
    m_outerBorderLeftWidth(OUTER_BORDER_LEFT_WIDTH),
    m_outerBorderRightWidth(OUTER_BORDER_RIGHT_WIDTH),
    m_state(STATE_DISMISSED),
    m_isResponseProvided(VFX_FALSE),
    m_id(0),
    m_lastSelectedIndex(-1),
    m_focusSnapshotIndex(0),
    m_assembleTimer(NULL),
    m_dismissTimer(NULL),
    m_delayAbortTimer(NULL)
#if defined(VAPP_LAUNCHER_ROBOT_UT_PAGE_SELECTOR_DEBUG_PANEL)
    ,
    m_debugPanel(NULL)
#endif /* defined(VAPP_LAUNCHER_ROBOT_UT_PAGE_SELECTOR_DEBUG_PANEL) */
{
    VFX_ASSERT(VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM >= SNAPSHOT_PER_ROW);

    m_totalRowNum = (VfxS32)vfx_sys_ceil((VfxFloat)VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM / SNAPSHOT_PER_ROW);

    VFX_ALLOC_MEM(m_snapshotPerRow, sizeof(VfxS32) * m_totalRowNum, this);

    //
    // Calculate the number of snapshots on each row.
    //
    VfxS32 snapshotNum = VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM;
    VfxS32 idx = 0;

    while (snapshotNum > 0)
    {
        VFX_ASSERT(idx < m_totalRowNum);

        if (snapshotNum >= SNAPSHOT_PER_ROW)
        {
            m_snapshotPerRow[idx] = SNAPSHOT_PER_ROW;
            snapshotNum -= SNAPSHOT_PER_ROW;
        }
        else
        {
            m_snapshotPerRow[idx] = snapshotNum;
            snapshotNum = 0;
        }

        ++idx;
    }

    //
    // Init.
    //
    for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
    {
        m_snapshot[i] = NULL;
    }
}


VappLauncherRobotPageSelector::~VappLauncherRobotPageSelector()
{
    if (m_snapshotPerRow)
    {
        VFX_FREE_MEM(m_snapshotPerRow);
    }
}


void VappLauncherRobotPageSelector::onInit()
{
    VfxFrame::onInit();

    //
    // Timer
    //
    VFX_OBJ_CREATE(m_assembleTimer, VfxTimer, this);
    m_assembleTimer->setStartDelay(s_autoAnimationTime);
    m_assembleTimer->m_signalTick.connect(this, &VappLauncherRobotPageSelector::onTimerAssembled);

    VFX_OBJ_CREATE(m_dismissTimer, VfxTimer, this);
    m_dismissTimer->setStartDelay(s_autoAnimationTime);
    m_dismissTimer->m_signalTick.connect(this, &VappLauncherRobotPageSelector::onTimerDismissed);

    VFX_OBJ_CREATE(m_delayAbortTimer, VfxTimer, this);
    m_delayAbortTimer->setStartDelay(1);
    m_delayAbortTimer->m_signalTick.connect(this, &VappLauncherRobotPageSelector::onTimerDelayAbortCallback);

    //
    // This frame
    //
    vrt_size_struct screenSize;
    vrt_color_type_enum colorFormat;

    vrt_sys_get_main_screen_info(&screenSize, &colorFormat);

    setIsOpaque(VFX_FALSE);
    setSize(screenSize.width, screenSize.height);
    setIsZSortChild(VFX_TRUE);

    //
    // Snapshot
    //
    for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
    {
        VFX_OBJ_CREATE(m_snapshot[i], VappLauncherRobotPageSnapshot, this);

        m_snapshot[i]->setId((VfxId)i);
        m_snapshot[i]->m_signalTapped.connect(this, &VappLauncherRobotPageSelector::onSnapshotTapped);
    }

#if defined(VAPP_LAUNCHER_ROBOT_UT_PAGE_SELECTOR_DEBUG_PANEL)
    createDebugPanel();
#endif
}


void VappLauncherRobotPageSelector::onDeinit()
{
    VfxFrame::onDeinit();
}


VfxBool VappLauncherRobotPageSelector::onPenInput(VfxPenEvent &event)
{
    return VFX_TRUE;
}


VfxBool VappLauncherRobotPageSelector::onKeyInput(VfxKeyEvent &event)
{
    if (event.keyCode == VFX_KEY_CODE_BACK &&
        event.type == VFX_KEY_EVENT_TYPE_DOWN)
    {
        emitSignalAbort(ABORT_CAUSE_BACK_KEY);
        return VFX_TRUE;
    }
    else if (event.keyCode == VFX_KEY_CODE_HOME &&
             event.type == VFX_KEY_EVENT_TYPE_DOWN)
    {
        emitSignalAbort(ABORT_CAUSE_HOME_KEY);
        return VFX_TRUE;
    }

    return VfxControl::onKeyInput(event);
}


void VappLauncherRobotPageSelector::setInnerBorder(VfxS32 horizWidth, VfxS32 vertiWidth)
{
    m_innerBorderHorizWidth = horizWidth;
    m_innerBorderVertiWidth = vertiWidth;
}


void VappLauncherRobotPageSelector::setOuterBorder(
    VfxS32 topWidth,
    VfxS32 bottomWidth,
    VfxS32 leftWidth,
    VfxS32 rightWidth)
{
    m_outerBorderTopWidth = topWidth;
    m_outerBorderBottomWidth = bottomWidth;
    m_outerBorderLeftWidth = leftWidth;
    m_outerBorderRightWidth = rightWidth;
}


void VappLauncherRobotPageSelector::setLayout(
    const VfxS32 *snapshotPerRow,
    VfxS32 totalRowNum)
{
    if (m_snapshotPerRow)
    {
        VFX_FREE_MEM(m_snapshotPerRow);
    }

    m_totalRowNum = totalRowNum;

    VFX_ALLOC_MEM(m_snapshotPerRow, sizeof(VfxS32) * m_totalRowNum, this);

    VfxS32 totalSnapshot = 0;

    for (VfxS32 i = 0; i < m_totalRowNum; i++)
    {
        m_snapshotPerRow[i] = snapshotPerRow[i];
        totalSnapshot += snapshotPerRow[i];
    }

    VFX_ASSERT(totalSnapshot == VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM);
}


VfxBool VappLauncherRobotPageSelector::doPenInput(VfxPenEvent &event)
{
    switch (event.type)
    {
        case VFX_PEN_EVENT_TYPE_DOWN:
            break;

        case VFX_PEN_EVENT_TYPE_MOVE:
            for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
            {
                if (isSnapshotHitted(event, i))
                {
                    m_snapshot[i]->setHighlight(VFX_TRUE);
                }
                else
                {
                    m_snapshot[i]->setHighlight(VFX_FALSE);
                }
            }
            break;

        case VFX_PEN_EVENT_TYPE_LONG_TAP:
            break;

        case VFX_PEN_EVENT_TYPE_UP:
            // Find if the pen is released on any snapshot. On yes, it means the
            // user selects this snapshot.
            for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
            {
                if (isSnapshotHitted(event, i))
                {
                    m_snapshot[i]->setHighlight(VFX_FALSE);
                    emitSignalSelected(m_snapshot[i]->getId());
                    return VFX_TRUE;
                }
            }

            // If the pen position is not on any snapshot, we consider it is an
            // abort operation.
            emitSignalAbort(ABORT_CAUSE_DROP_OUTSIDE);
            break;

        case VFX_PEN_EVENT_TYPE_ABORT:

            // [MAUI_03200061] small screen snapshot timing is after pen abort, 
            // page selector will disappear suddenly which close by director if emit abort directly,
            // so delay emit the abort event, the the small screen snapshot will be correct
            //
            // To do: the general solution is framework timing adjustment, 
            //        pen abort should emit after screen snapshot,
            //        or the snapshot will always wrong
            m_delayAbortTimer->start();
            break;

        default:
            break;
    }

    return VFX_TRUE;
}


void VappLauncherRobotPageSelector::setId(VfxId id)
{
    m_id = id;
}


VfxId VappLauncherRobotPageSelector::getId() const
{
    return m_id;
}


VfxS32 VappLauncherRobotPageSelector::getLastSelectedIndex() const
{
    return m_lastSelectedIndex;
}


void VappLauncherRobotPageSelector::setFocusSnapshot(VfxS32 idx)
{
    m_focusSnapshotIndex = idx;
}


VfxS32 VappLauncherRobotPageSelector::getFocusSnapshot() const
{
    return m_focusSnapshotIndex;
}


void VappLauncherRobotPageSelector::setSnapshotLayout(
    VfxS32 idx,
    const VfxRect &sourceRect)
{
    VFX_ASSERT(idx >= 0 && idx < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM);

    m_snapshot[idx]->setLayout(sourceRect);
}


void VappLauncherRobotPageSelector::addToSnapshot(VfxS32 idx, VfxFrame *frame)
{
    if (idx < 0 || idx >= VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM)
    {
        return;
    }

    m_snapshot[idx]->addToContainer(frame);
}


void VappLauncherRobotPageSelector::removeFromSnapshot(VfxS32 idx, VfxObjList &objList)
{
    if (idx < 0 || idx >= VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM)
    {
        return;
    }

    m_snapshot[idx]->removeFromContainer(objList);
}


void VappLauncherRobotPageSelector::assemble()
{
    //
    // Already assembled. Do nothing and return directly.
    //
    if (m_state == STATE_ASSEMBLING || m_state == STATE_ASSEMBLED)
    {
        return;
    }

    //
    // Abort the ongoing dismissing operation.
    //
    if (m_state == STATE_DISMISSING)
    {
        m_dismissTimer->stop();
    }

    //
    // Ready to assemble it.
    //
    m_state = STATE_ASSEMBLING;

    for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
    {
        VfxRect room = getSnapshotRoom(i);
        VfxRect outsideRoom = getSnapshotOutsideRoom(i);

        //
        // Init
        //
        VfxAutoAnimate::begin();
        VfxAutoAnimate::setDisable(VFX_TRUE);

        m_snapshot[i]->setRect(outsideRoom);

        if (i == m_focusSnapshotIndex)
        {
            m_snapshot[i]->bringToFront();

            // Set the initial rectangle of the snapshot content.
            VfxRect rect = m_snapshot[i]->convertRectFrom(outsideRoom, this);
            m_snapshot[i]->setContentRect(rect, VFX_FALSE);

            // For performance, we do not animate the size of the background
            // image during the assembling animation.
            rect = m_snapshot[i]->convertRectFrom(room, this);
            m_snapshot[i]->setBgImgRect(rect);
        }
        else
        {
            m_snapshot[i]->setObjectHidden(VFX_TRUE);
        }

        VfxAutoAnimate::commit();

        //
        // Animate
        //
        VfxAutoAnimate::begin();
        VfxAutoAnimate::setDuration(s_autoAnimationTime);
        VfxAutoAnimate::setTimingFunc(VFX_TIMING_FUNC_ID_EASE_OUT);

        if (i == m_focusSnapshotIndex)
        {
            // Animate the snapshot content to its final rectangle.
            VfxRect rect = m_snapshot[i]->convertRectFrom(room, this);
            m_snapshot[i]->setContentRect(rect, VFX_TRUE);
        }
        else
        {
            m_snapshot[i]->setPos(room.origin);
        }

        VfxAutoAnimate::commit();

        //
        // Misc properties
        //
        m_snapshot[i]->setIsUnhittable(VFX_TRUE);
    }

    m_assembleTimer->start();
}


void VappLauncherRobotPageSelector::dismiss()
{
    //
    // Already dismissed. Do nothing and return directly.
    //
    if (m_state == STATE_DISMISSING || m_state == STATE_DISMISSED)
    {
        return;
    }

    //
    // Abort the ongoing assembling operation.
    //
    if (m_state == STATE_ASSEMBLING)
    {
        for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
        {
            m_snapshot[i]->setObjectHidden(VFX_FALSE);
        }

        m_assembleTimer->stop();
    }

    //
    // Ready to dismiss it.
    //
    m_state = STATE_DISMISSING;

    for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
    {
        VfxRect room = getSnapshotRoom(i);
        VfxRect outsideRoom = getSnapshotOutsideRoom(i);

        //
        // Init
        //
        VfxAutoAnimate::begin();
        VfxAutoAnimate::setDisable(VFX_TRUE);

        if (i == m_focusSnapshotIndex)
        {
            m_snapshot[i]->bringToFront();
            m_snapshot[i]->setBgImgHidden(VFX_TRUE);

            m_snapshot[i]->setRect(outsideRoom);

            // Calculate the initial rectangle of the snapshot.
            VfxRect rect = m_snapshot[i]->convertRectFrom(room, this);
            m_snapshot[i]->setContentRect(rect, VFX_TRUE);
        }
        else
        {
            if (m_snapshot[m_focusSnapshotIndex]->isEmpty())
            {
                m_snapshot[i]->setRect(room);
                m_snapshot[i]->setCacheMode(VFX_CACHE_MODE_FREEZE);
            }
            else
            {
                m_snapshot[i]->setHidden(VFX_TRUE);
            }
        }

        VfxAutoAnimate::commit();

        //
        // Animate.
        //
        VfxAutoAnimate::begin();
        VfxAutoAnimate::setDuration(s_autoAnimationTime);

        if (i == m_focusSnapshotIndex)
        {
            VfxAutoAnimate::setTimingFunc(VFX_TIMING_FUNC_ID_EASE_OUT);

            // Set the final rectangle of the snapshot content. And, for
            // performance, we do not animate the size of the background image
            // during the dismissing animation.
            VfxRect rect = m_snapshot[i]->convertRectFrom(outsideRoom, this);
            m_snapshot[i]->setContentRect(rect, VFX_FALSE);
        }
        else
        {
            VfxAutoAnimate::setTimingFunc(VFX_TIMING_FUNC_ID_EASE_IN);

            if (m_snapshot[m_focusSnapshotIndex]->isEmpty())
            {
                m_snapshot[i]->setPos(outsideRoom.origin);
            }
        }

        VfxAutoAnimate::commit();

        //
        // Misc properties
        //
        m_snapshot[i]->setIsUnhittable(VFX_TRUE);
    }

    m_dismissTimer->start();
}


void VappLauncherRobotPageSelector::revive()
{
    m_isResponseProvided = VFX_FALSE;
}


void VappLauncherRobotPageSelector::setSnapshotAlert(VfxS32 idx, VfxBool isOn)
{
    VFX_ASSERT(idx >= 0 && idx < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM);

    m_snapshot[idx]->setAlert(isOn);
}


void VappLauncherRobotPageSelector::disableSnapshotAlert()
{
    for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
    {
        m_snapshot[i]->setAlert(VFX_FALSE);
    }
}


void VappLauncherRobotPageSelector::emitSignalSelected(VfxS32 idx)
{
    //
    // Guarantee that we only provide the response (i.e., either 'selected' or
    // 'aborted') once.
    //
    if (!m_isResponseProvided)
    {
        m_isResponseProvided = VFX_TRUE;
        m_lastSelectedIndex = idx;

        // Signal handler might call 'revive' to revive this page selector.
        m_signalSelected.emit(this, idx);
    }
}


void VappLauncherRobotPageSelector::emitSignalAbort(AbortCauseEnum cause)
{
    //
    // Guarantee that we only provide the response (i.e., either 'selected' or
    // 'aborted') once.
    //
    if (!m_isResponseProvided)
    {
        m_isResponseProvided = VFX_TRUE;
        m_lastSelectedIndex = -1;

        // Signal handler might call 'revive' to revive this page selector.
        m_signalAborted.emit(this, cause);
    }
}


VfxBool VappLauncherRobotPageSelector::isSnapshotHitted(VfxPenEvent &event, VfxS32 idx)
{
    VfxPoint pos = event.getRelPos(m_snapshot[idx]);

    return m_snapshot[idx]->containPoint(pos);
}


VfxS32 VappLauncherRobotPageSelector::getMaxSnapshotNumPerRow() const
{
    VfxS32 max = 0;

    for (VfxS32 i = 0; i < m_totalRowNum; i++)
    {
        max = vfxMax(max, m_snapshotPerRow[i]);
    }

    return max;
}


void VappLauncherRobotPageSelector::getCoordinate(VfxS32 idx, VfxS32 &x, VfxS32 &y) const
{
    x = idx;
    y = 0;

    while (x >= m_snapshotPerRow[y])
    {
        x -= m_snapshotPerRow[y];
        y++;

        VFX_ASSERT(y < m_totalRowNum);
    }
}


VfxSize VappLauncherRobotPageSelector::getSnapshotSize() const
{
    //
    // Find the max number of snapshots on all rows.
    //
    VfxS32 maxColumnNum = getMaxSnapshotNumPerRow();

    //
    // Calculate a suitable snapshot size.
    //
    VFX_ASSERT(maxColumnNum > 0 && m_totalRowNum > 0);

    VfxSize size = getBounds().size;

    size.width -= m_outerBorderLeftWidth + m_outerBorderRightWidth;
    size.width -= m_innerBorderHorizWidth * (maxColumnNum - 1);
    size.width /= maxColumnNum;

    size.height -= m_outerBorderTopWidth + m_outerBorderBottomWidth;
    size.height -= m_innerBorderVertiWidth * (m_totalRowNum - 1);
    size.height /= m_totalRowNum;

    return size;
}


VfxRect VappLauncherRobotPageSelector::getSnapshotRoom(VfxS32 idx) const
{
    VFX_ASSERT(idx >= 0 && idx < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM);

    VfxS32 maxColumnNum = getMaxSnapshotNumPerRow();

    //
    // X & Y Index
    //
    VfxS32 x, y;

    getCoordinate(idx, x, y);

    VFX_ASSERT(y >= 0 && y < m_totalRowNum && x >= 0 && x < maxColumnNum);

    //
    // Snapshot position & size
    //
    VfxSize roomSize = getSnapshotSize();

    VfxS32 offset = 0;

    if (m_snapshotPerRow[y] < maxColumnNum)
    {
        VfxS32 remainedWidth = getBounds().getWidth();

        remainedWidth -= m_outerBorderLeftWidth + m_outerBorderRightWidth +
                         roomSize.width * m_snapshotPerRow[y] +
                         m_innerBorderHorizWidth * (m_snapshotPerRow[y] - 1);

        offset = remainedWidth >> 1;
    }

    VfxPoint roomPos;

    roomPos.x = m_outerBorderLeftWidth + offset +
                x * (roomSize.width + m_innerBorderHorizWidth);

    roomPos.y = m_outerBorderTopWidth +
                y * (roomSize.height + m_innerBorderVertiWidth);

    //
    // Fine-tune the snapshot room.
    //
    VfxRect sourceRect;

    m_snapshot[idx]->getLayout(sourceRect);

    return tuneSnapshotRoom(VfxRect(roomPos, roomSize), sourceRect.size);
}


VfxRect VappLauncherRobotPageSelector::getSnapshotOutsideRoom(VfxS32 idx) const
{
    VFX_ASSERT(idx >= 0 && idx < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM);

    VfxRect focusRect, thisRect;

    m_snapshot[idx]->getLayout(thisRect);
    m_snapshot[m_focusSnapshotIndex]->getLayout(focusRect);

    // Shift according to the focused rectangle.
    VfxPoint roomPos;

    roomPos.x = thisRect.origin.x - focusRect.origin.x;
    roomPos.y = thisRect.origin.y;

    // For non-focused one, resize and centralize it.
    VfxSize roomSize = thisRect.size;

    if (idx != m_focusSnapshotIndex)
    {
        VfxSize size = getSnapshotSize();

        roomPos.x += (roomSize.width - size.width) / 2;
        roomPos.y += (roomSize.height - size.height) / 2;

        roomSize = size;
    }

    //
    // Fine-tune the snapshot room.
    //
    return tuneSnapshotRoom(VfxRect(roomPos, roomSize), thisRect.size);
}


VfxRect VappLauncherRobotPageSelector::tuneSnapshotRoom(
    const VfxRect &room,
    const VfxSize &originalSize) const
{
    VfxFloat sx = (VfxFloat)room.getWidth() / originalSize.width;
    VfxFloat sy = (VfxFloat)room.getHeight() / originalSize.height;
    VfxFloat s = vfxMin(sx, sy);

    // Calculate new size that can fit into the room.
    VfxS32 newWidth = (VfxS32)(originalSize.width * s + 0.5f);
    VfxS32 newHeight = (VfxS32)(originalSize.height * s + 0.5f);

    // Centralize
    VfxS32 newX = room.getMinX() + (room.getWidth() - newWidth) / 2;
    VfxS32 newY = room.getMinY() + (room.getHeight() - newHeight) / 2;

    return VfxRect(newX, newY, newWidth, newHeight);
}


void VappLauncherRobotPageSelector::onSnapshotTapped(VappLauncherRobotPageSnapshot *snapshot)
{
    VFX_ASSERT(snapshot && snapshot == m_snapshot[snapshot->getId()]);

    emitSignalSelected(snapshot->getId());
}


void VappLauncherRobotPageSelector::onTimerAssembled(VfxTimer *timer)
{
    m_state = STATE_ASSEMBLED;

    for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
    {
        m_snapshot[i]->setIsUnhittable(VFX_FALSE);
        m_snapshot[i]->setObjectHidden(VFX_FALSE);

        VfxAutoAnimate::begin();
        VfxAutoAnimate::setDisable(VFX_TRUE);

        m_snapshot[i]->setRect(getSnapshotRoom(i));

        VfxAutoAnimate::commit();
    }

    m_signalAssembled.emit(this);
}


void VappLauncherRobotPageSelector::onTimerDismissed(VfxTimer *timer)
{
    m_state = STATE_DISMISSED;

    for (VfxS32 i = 0; i < VAPP_LAUNCHER_ROBOT_MAX_PAGE_NUM; i++)
    {
        m_snapshot[i]->setIsUnhittable(VFX_FALSE);

        VfxAutoAnimate::begin();
        VfxAutoAnimate::setDisable(VFX_TRUE);

        m_snapshot[i]->setRect(getSnapshotOutsideRoom(i));

        VfxAutoAnimate::commit();
    }

    m_signalDismissed.emit(this);
}


void VappLauncherRobotPageSelector::onTimerDelayAbortCallback(VfxTimer *timer)
{
    emitSignalAbort(ABORT_CAUSE_DROP_OUTSIDE);
}


#if defined(VAPP_LAUNCHER_ROBOT_UT_PAGE_SELECTOR_DEBUG_PANEL)
void VappLauncherRobotPageSelector::createDebugPanel()
{
    VFX_OBJ_CREATE(m_debugPanel, VappLauncherRobotPageSelectorDebugPanel, this);

    // Let debug panel always stay on the top-most.
    m_debugPanel->setPosZ(-1.0);

    // Animation Time
    m_debugPanel->initAnimationTime(s_autoAnimationTime);
    m_debugPanel->m_signalAnimationTimeChanged.connect(this, &VappLauncherRobotPageSelector::onAnimationTimeChanged);
}


void VappLauncherRobotPageSelector::onAnimationTimeChanged(VfxS32 time)
{
    s_autoAnimationTime = time;

    m_assembleTimer->setStartDelay(time);
    m_dismissTimer->setStartDelay(time);
}

#endif /* defined(VAPP_LAUNCHER_ROBOT_UT_PAGE_SELECTOR_DEBUG_PANEL) */

