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
 * mre_gameloft_games_gb_package4.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * GameLoft games package4 having following games for global billing system
 * ASPHALT6
 * Assassin Creed
 * Brain Challenge
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "mmi_features.h"
#include "vmsys.h"
#include "vmswitch.h"


#if defined __MMI_MRE_APP_GAMELOFT_GB_PACKAGE4__

#ifdef WIN32

#define __align(x)
const __align(4) VMUINT8 mre_app_gl_asphalt6[] = {0x00};
const __align(4) VMUINT8 mre_app_gl_assassincreed[] = {0x00};
const __align(4) VMUINT8 mre_app_gl_brainchallenge[] = {0x00};

#else

#if defined (__MMI_MAINLCD_240X320__)

#include "include\Asphalt6_QVGA.h"
#include "include\BrainChallenge3_GB_QVGA.h"
#include "include\AssassinCreed_GB_QVGA.h"

#endif

#if defined (__MMI_MAINLCD_240X400__)

#include "include\Asphalt6_WQVGA.h"
#include "include\BrainChallenge3_GB_WQVGA.h"
#include "include\AssassinCreed_GB_WQVGA.h"

#endif

#if defined (__MMI_MAINLCD_320X480__)

#include "include\Asphalt6_HVGA.h"
#include "include\BrainChallenge3_GB_HVGA.h"
#include "include\AssassinCreed_GB_HVGA.h"

#endif

#if defined (__MMI_MAINLCD_480X800__)

#include "include\Asphalt6_WVGA.h"
#include "include\BrainChallenge3_GB_WVGA.h"
#include "include\AssassinCreed_GB_WVGA.h"

#endif

#endif /* WIN32 */

#endif /* __MMI_MRE_APP_GAMELOFT_GB_PACKAGE4__ */

