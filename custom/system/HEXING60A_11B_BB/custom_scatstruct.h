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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_scatstruct.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file declares the scatter file dependent APIs
 *
 * Author:
 * -------
 *   Claudia Lo (mtk01876)     system auto generator v1.66 + sysGenUtility v0.40
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 * 04 25 2012 carina.liao
 *  [SystemService][Auto-Gen][scatGen][Sys Gen][Request For Design Change] Phase in ALICE to 11B
 * scatGen.pl
 * scatGenLib.pl v5.92 & v6.01
 * ckscatter.pl v0.48
 * sysgen2.pl v1.54
 * custom_scatstruct.c.template
 * custom_scatstruct.h.template
 *
 * 02 15 2012 qmei.yang
 *  [SystemService][Auto-Gen][Sys Gen][scatGen][Internal Refinement] Support cmmgen sync with sysgen2
 * Modify custom_query_dump_region() API
 *
 * 01 30 2012 qmei.yang
 *  [SystemService][Auto-Gen][Sys Gen][scatGen][Internal Refinement] Refactory sysgen2.pl
 * sysgen2.pl v1.42
 * scatInfo.pm v0.01
 * sysgenUtility.pm v0.15
 * FileInfo.pm v0.04
 * custom_demp.h.template
 * custom_scatstruct.c.template
 * custom_scatstruct.h.template
 * custom_blconfig.c.template
 *
 * 01 30 2012 qmei.yang
 *  [SystemService][Auto-Gen][Sys Gen][scatGen][Internal Refinement] Refactory sysgen2.pl
 * sysgen2.pl v1.42
 * scatInfo.pm v0.01
 * sysgenUtility.pm v0.15
 * FileInfo.pm v0.04
 * custom_demp.h.template
 * custom_scatstruct.c.template
 * custom_scatstruct.h.template
 * custom_blconfig.c.template
 * 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_general_types.h"
#include "init.h"

#ifdef __MTK_TARGET__
#define DUMP_REGION_COUNT 15
extern kal_uint32 custom_query_dump_region(EXTSRAM_REGION_INFO_T* region);

#if defined(__ARM9_MMU__) || defined(__ARM11_MMU__)
#if defined(__ARM9_MMU__)
extern kal_int32 custom_query_fpt_pool(kal_uint32 **pool, kal_uint32 *pool_size);
#endif /* __ARM9_MMU__ */
extern kal_int32 custom_query_cpt_pool(kal_uint32 **pool, kal_uint32 *pool_size);
#endif /* __ARM9_MMU__ || __ARM11_MMU__ */

#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
extern kal_int32 custom_query_dynamic_cached_extsram_default_nc_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_dynamic_cached_extsram_default_c_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_cached_extsram_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_cached_extsram_code_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_noncached_extsram_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_noncached_extsram_ro_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_cached_extcode_region(EXTSRAM_REGION_INFO_T **region);
#endif /* __DYNAMIC_SWITCH_CACHEABILITY__ */

extern kal_uint32 custom_query_multi_rom_load_region(EXTSRAM_REGION_INFO_T **region);

#if defined(__DSP_FCORE4__)
extern kal_int32 custom_query_mcu_cacheable_dsp_cacheable_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_mcu_cacheable_dsp_noncacheable_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_mcu_noncacheable_dsp_cacheable_region(EXTSRAM_REGION_INFO_T **region);
extern kal_int32 custom_query_mcu_noncacheable_dsp_noncacheable_region(EXTSRAM_REGION_INFO_T **region);
#endif /* __DSP_FCORE4__ */

extern kal_uint32 custom_get_1st_ROM_ROMBase(void);
extern kal_uint32 custom_get_1st_ROM_ROMLength(void);
extern kal_uint32 custom_get_1st_ROM_RAMBase(void);
extern kal_uint32 custom_get_1st_ROM_RAMLength(void);
extern kal_uint32 custom_get_1st_ROM_RAMEnd(void);
extern kal_uint32 custom_get_1st_ROM_LoadEnd(void);

extern kal_uint32 custom_get_2nd_ROM_ROMBase(void);
extern kal_uint32 custom_get_2nd_ROM_ROMLength(void);
extern kal_uint32 custom_get_2nd_ROM_RAMBase(void);
extern kal_uint32 custom_get_2nd_ROM_RAMLength(void);
extern kal_uint32 custom_get_2nd_ROM_RAMEnd(void);
extern kal_uint32 custom_get_2nd_ROM_LoadEnd(void);

extern kal_uint32 custom_get_INTSRAMCODE_Base(void);
extern kal_uint32 custom_get_INTSRAMCODE_End(void);
extern kal_uint32 custom_get_INTSRAMDATA_Base(void);
extern kal_uint32 custom_get_INTSRAMDATA_End(void);
extern kal_uint32 custom_get_SysRam_Base(void);
extern kal_uint32 custom_get_SysRam_End(void);
extern kal_uint32 custom_get_SysRam_MaxSize(void);
extern kal_int32 custom_get_PROTECTED_RES_Base(void);
extern kal_int32 custom_get_PROTECTED_RES_Length(void);
extern kal_uint32 custom_get_BOOTCERT_StartAddr(void);
extern kal_uint32 custom_get_BOOTCERT_Length(void);

extern kal_uint32 custom_get_SECUREMAC_Base(void);
extern kal_uint32 custom_get_SECUREMAC_Length(void);
extern kal_uint32 custom_get_SECURERO_Base(void);
extern kal_uint32 custom_get_SECURERO_Length(void);

extern kal_uint32 custom_get_SINGLEBANKCODE_and_VectorTable_Base(void);
extern kal_uint32 custom_get_SINGLEBANKCODE_Base(void);
extern kal_uint32 custom_get_SINGLEBANKCODE_End(void);

#if defined(__ALICE_SUPPORT__)
extern kal_uint32 custom_get_EXTSRAM_ALICE_End(void);
extern kal_uint32 custom_get_ALICE_Base(void);
extern kal_uint32 custom_get_ALICE_Length(void);
#endif /* __ALICE_SUPPORT__ */

extern kal_int32 custom_get_DSPTXRX_Base(void);
extern kal_uint32 custom_get_FAT_StartAddr(void);
extern kal_uint32 custom_get_FAT_Length(void);
extern kal_uint32 custom_get_NVRAM_LTABLE_Base(void);
extern kal_uint32 custom_get_NVRAM_LTABLE_Length(void);

extern void custom_get_MaxAvailableMemorySegment(kal_uint32 **Return_begin_addr, kal_uint32 *Return_segment_size);

#if defined(__CR4__)
extern kal_uint32 custom_get_INTSRAM_PHYSICAL_BOUNDARY_Base(void);
extern kal_uint32 custom_get_INTSRAM_PHYSICAL_BOUNDARY_MaxSize(void);
#endif /*__CR4__*/

#if defined(__ARM9_MMU__) || defined(__ARM11_MMU__) || defined(__MTK_MMU__) || defined(__CR4__) 
extern kal_int32 custom_mk_ram_info(void);
#endif /* __ARM9_MMU__ || __ARM11_MMU__ || __MTK_MMU__ || __CR4__ */

#if defined(__DSP_FCORE4__)
extern kal_int32 custom_mk_mcu_dsp_sharemem_info(void);
#endif /* __DSP_FCORE4__ */

#if defined(__ARM9_MMU__) || defined(__ARM11_MMU__)
kal_uint32 custom_get_FLMM_PASPACE_Base(void);
kal_uint32 custom_get_FLMM_PASPACE_End(void);
kal_uint32 custom_get_FLMM_VASPACE_Base(void);
kal_uint32 custom_get_FLMM_VASPACE_End(void);
kal_uint32 custom_get_FLMM_STACKSPACE_Base(void);
kal_uint32 custom_get_FLMM_STACKSPACE_End(void);
#endif

#if defined(MT6256)
extern kal_int32 custom_get_DSPEXTRO_Base(void);
extern kal_int32 custom_get_DSPEXTRO_Length(void);
extern kal_int32 custom_get_DSPEXTRW_Base(void);
extern kal_int32 custom_get_DSPEXTRW_Length(void);
extern kal_bool custom_get_DSP_DMA_RegionInfo(kal_uint32 *TX_Base, kal_uint32 *RX_Base, kal_uint32 *CS, kal_uint32 *TX_Size, kal_uint32 *RX_Size);
#else //!defined(MT6256)
extern kal_uint32 custom_get_DSP_ROM_ROMBase(void);
extern kal_uint32 custom_get_DSP_ROM_ROMLength(void);
#endif //defined(MT6256)

#endif /* __MTK_TARGET__ */
