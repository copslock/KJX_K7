/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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
 *  vapp_widget_key_musicplayer_def.h
 *
 * Project:
 * --------
 *  MAUI
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifdef __cplusplus
extern "C" 
{
#endif
//#include "Meta_tag_api.h"
#define KL_WG_COVER_WIDTH    VAPP_WG_KEY_MUSIC_PLAYER_COVER_WIDTH
#define KL_WG_COVER_HEIGHT   VAPP_WG_KEY_MUSIC_PLAYER_COVER_HEIGHT

#define KL_WG_ARTWORK_MEMORY_SIZE (((KL_WG_COVER_WIDTH*KL_WG_COVER_HEIGHT*2)/4 + 1)*4)  /* artwork */
//#define KL_WG_MP_PASER_HDL_SIZE   META_TAG_PARSE_MIN_SIZE     /* meta paser */
//#define KL_WG_MP_PASER_HDL_SIZE KL_WG_ARTWORK_MEMORY_SIZE
#define KL_WG_MP_PASER_HDL_SIZE   3000

//#if defined(__MMI_MEDIA_PLAYER__) || defined(__MMI_AUDIO_PLAYER__) /* cover raw data */
#if defined(__MMI_AUDIO_PLAYER__) && !defined(__MMI_MEDIA_PLAYER__)
#define KL_WG_MP_PASER_DATA_SIZE    KL_WG_ARTWORK_MEMORY_SIZE
#endif

#if !defined(__MMI_AUDIO_PLAYER__) && defined(__MMI_MEDIA_PLAYER__)
#if defined(__MMI_MEDIA_PLAYER_PLST_DB_STYLE__) 
#define KL_WG_MP_PASER_DATA_SIZE  (176*176*2)//KL_WG_ARTWORK_MEMORY_SIZE // 
#else 
#define KL_WG_MP_PASER_DATA_SIZE  (UI_DEVICE_HEIGHT*UI_DEVICE_WIDTH *2)
#endif
#endif

//#define KL_WG_MP_MEMORY_SIZE  KL_WG_ARTWORK_MEMORY_SIZE*3 + 520 
#define KL_WG_MP_MEMORY_SIZE    KL_WG_MP_PASER_HDL_SIZE + KL_WG_ARTWORK_MEMORY_SIZE + KL_WG_MP_PASER_DATA_SIZE + 520


#ifdef __MMI_MAINLCD_320X480__
#define  VAPP_WG_KEY_MUSIC_PLAYER_WIDTH   (248)
#define  VAPP_WG_KEY_MUSIC_PLAYER_HEIGHT  (258)

#define  VAPP_WG_KEY_MUSIC_PLAYER_CD_X  (14)
#define  VAPP_WG_KEY_MUSIC_PLAYER_CD_Y  (15)

#define  VAPP_WG_KEY_MUSIC_PLAYER_VIDEO_X  (9 - 9)
#define  VAPP_WG_KEY_MUSIC_PLAYER_VIDEO_Y  (15 - 15)

#define  VAPP_WG_KEY_MUSIC_PLAYER_COVER_WIDTH  (220)
#define  VAPP_WG_KEY_MUSIC_PLAYER_COVER_HEIGHT  (207)

#define  VAPP_WG_KEY_MUSIC_PLAYER_START_X         (81)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_Y         (65+14 - 4)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_WIDTH     (85)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_HEIGHT    (85)

#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_WIDTH      (65)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_HEIGHT      (65)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_OFFSET_X      (0)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_OFFSET_Y     (-2)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_FONT      (20)
#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_FONT      (16)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_X       (3)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_Y       (6+71+ 28 +85 -3) //(258 - 3 - 28 - 35)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_WIDTH   (242)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_HEIGHT  (35)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_X   (13)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_Y   (6+71+85+28+8)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_WIDTH   (241 - 10*2)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_HEIGHT   (32 - 8)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_TIP      (4)
#define  VAPP_WG_KEY_MUSIC_PLAYER_ARTIST_SIZE      (4)


#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_X   (3)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_Y   (6+71+85+28+32)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_WIDTH   (242)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_HEIGHT  (28)

#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_X    (13)
#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_Y    (5)

#elif defined(__MMI_MAINLCD_240X320__)||defined(__MMI_MAINLCD_240X400__)

#define  VAPP_WG_KEY_MUSIC_PLAYER_WIDTH   (186)
#define  VAPP_WG_KEY_MUSIC_PLAYER_HEIGHT  (194)

#define  VAPP_WG_KEY_MUSIC_PLAYER_CD_X  (13)
#define  VAPP_WG_KEY_MUSIC_PLAYER_CD_Y  (7)

#define  VAPP_WG_KEY_MUSIC_PLAYER_VIDEO_X  (13-13)
#define  VAPP_WG_KEY_MUSIC_PLAYER_VIDEO_Y  (7-7)

#define  VAPP_WG_KEY_MUSIC_PLAYER_COVER_WIDTH  (160)
#define  VAPP_WG_KEY_MUSIC_PLAYER_COVER_HEIGHT  (160)

#define  VAPP_WG_KEY_MUSIC_PLAYER_START_X         (60)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_Y         (55)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_WIDTH     (65)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_HEIGHT    (65)

#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_WIDTH      (50)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_HEIGHT      (50)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_OFFSET_X      ( 0)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_OFFSET_Y     (0)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_FONT      (15)
#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_FONT      (12)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_X       (3)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_Y       (143) //(258 - 3 - 28 - 35)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_WIDTH   (181)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_HEIGHT  (25)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_X   (10)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_Y   (148)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_WIDTH   (181 - 8*2)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_HEIGHT   (25)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_TIP      (4)
#define  VAPP_WG_KEY_MUSIC_PLAYER_ARTIST_SIZE      (4)

#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_X   (3)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_Y   (143 + 25)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_WIDTH   (181)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_HEIGHT  (21)

#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_X    (11 - 3)
#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_Y    (3)

#elif defined(__MMI_MAINLCD_320X240__)

#define  VAPP_WG_KEY_MUSIC_PLAYER_WIDTH   (205)
#define  VAPP_WG_KEY_MUSIC_PLAYER_HEIGHT  (142)

#define  VAPP_WG_KEY_MUSIC_PLAYER_CD_X  (25)
#define  VAPP_WG_KEY_MUSIC_PLAYER_CD_Y  (16)

#define  VAPP_WG_KEY_MUSIC_PLAYER_VIDEO_X  (10 - 17)
#define  VAPP_WG_KEY_MUSIC_PLAYER_VIDEO_Y  (16-16)

#define  VAPP_WG_KEY_MUSIC_PLAYER_COVER_WIDTH  (105)
#define  VAPP_WG_KEY_MUSIC_PLAYER_COVER_HEIGHT  (105)


#define  VAPP_WG_KEY_MUSIC_PLAYER_START_X         (60)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_Y         (50)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_WIDTH     (35)
#define  VAPP_WG_KEY_MUSIC_PLAYER_START_HEIGHT    (35)

#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_WIDTH      (44)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_HEIGHT      (44)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_OFFSET_X      ( 0)
#define  VAPP_WG_KEY_MUSIC_PLAYER_LOADING_OFFSET_Y     (0)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_FONT      (15)
#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_FONT      (10)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_X       (6)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_Y       (99) //(258 - 3 - 28 - 35)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_WIDTH   (205 - 12)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_BG_HEIGHT  (24)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_X   (16)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_Y   (104)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_WIDTH   (205-32)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_HEIGHT   (24)

#define  VAPP_WG_KEY_MUSIC_PLAYER_NAME_TIP      (4)
#define  VAPP_WG_KEY_MUSIC_PLAYER_ARTIST_SIZE      (4)


#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_X   (6+3)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_Y   (99+24)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_WIDTH   (205-18)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PROGRESS_BG_HEIGHT  (14)

#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_X    (25 - 9)
#define  VAPP_WG_KEY_MUSIC_PLAYER_TIME_Y    (3)

#define  VAPP_WG_KEY_MUSIC_PLAYER_PREV_X     (17+121+30)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PREV_Y     (25)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NEXT_X     (17+121+30)
#define  VAPP_WG_KEY_MUSIC_PLAYER_NEXT_Y     (25+25+14)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PICK_WIDTH     (20)
#define  VAPP_WG_KEY_MUSIC_PLAYER_PICK_HEIGHT     (25)
#endif

#ifdef __cplusplus
}
#endif


