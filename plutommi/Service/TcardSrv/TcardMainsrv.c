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
 *  TcardMainSrv.c
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  T Card service file config
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
*****************************************************************************/

#include "MMI_features.h"

#ifdef __SRV_TCARD_DATA_STORE__
#include "MMIDataType.h"
#include "kal_general_types.h"
#include "custom_mmi_default_value.h"
#include "ps_public_enum.h"
#include "stack_config.h"
#include "customer_ps_inc.h"
#include "nvram_common_defs.h"
#include "Fs_gprot.h"
#include "TcardSrvGprot.h"
#include "TcardSrvprot.h"
#include "TcardUtilSrv.h"
#include "Unicodexdcl.h"
#include "Mmi_frm_mem_gprot.h"
#include "MMI_common_app_trc.h"
#include "FileMgrSrvGProt.h"
#include "mmi_frm_timer_gprot.h"

#ifdef __MMI_USB_SUPPORT__
#include "UsbSrvGProt.h"
#endif /* __MMI_USB_SUPPORT__ */








#define SRV_TCARD_START_INIT_FOR_USB_IN_TIME	        3000

#define srv_tcard_checksum_fcs(fcs, c)  ((fcs >> 8) ^ tcard_stor_fcstab[(fcs ^ c) & 0x00ff])
#define SRV_TCARD_CHECKSUM_START        (0xffff)
#define SRV_TCARD_OPEN_FILE_TOTAL  10
typedef struct
{
    srv_tcard_app_index_enum  app_index;                          
    U32 file_index;                  
    MMI_BOOL is_backup;                                                                 
} srv_tcard_file_name_info_struct;

typedef struct
{
    MMI_BOOL is_backup;
    U32  offset; 
    CHAR * set_point;
    CHAR * default_value;
    U32 size; 
    U32 record_size;
    FS_HANDLE hd;
    FS_HANDLE hd1;
} srv_tcard_op_info_struct;


typedef struct
{
    MMI_BOOL init_stat[SRV_TCARD_APP_TOTAL];
    MMI_BOOL is_ready;
    FS_HANDLE file_hd[SRV_TCARD_OPEN_FILE_TOTAL];
} srv_tcard_cntx_struct;

typedef struct
{
    U16 remain_num;
    srv_tcard_file_entry_struct *record;
    FS_HANDLE file_hd;
    void *user_data;
    SrvTcardCallbackFunc callback_func;
} srv_tcard_reset_file_cntx_struct;

typedef struct
{
    FS_HANDLE file_hd;
    srv_tcard_file_index_enum file_id;
    void *user_data;
    SrvTcardCallbackFunc callback_func;
} srv_tcard_set_default_value_cntx_struct;





static CHAR cache_buff[SRV_TCARD_CACHE_LEN]; 

static srv_tcard_cntx_struct tcard_handle;

static const unsigned short tcard_stor_fcstab[256] = 
{
    0x0000, 0x1189, 0x2312, 0x329b, 0x4624, 0x57ad, 0x6536, 0x74bf, 0x8c48, 0x9dc1, 0xaf5a, 0xbed3, 0xca6c, 0xdbe5,
    0xe97e, 0xf8f7, 0x1081, 0x0108, 0x3393, 0x221a, 0x56a5, 0x472c, 0x75b7, 0x643e, 0x9cc9, 0x8d40, 0xbfdb, 0xae52,
    0xdaed, 0xcb64, 0xf9ff, 0xe876, 0x2102, 0x308b, 0x0210, 0x1399, 0x6726, 0x76af, 0x4434, 0x55bd, 0xad4a, 0xbcc3,
    0x8e58, 0x9fd1, 0xeb6e, 0xfae7, 0xc87c, 0xd9f5, 0x3183, 0x200a, 0x1291, 0x0318, 0x77a7, 0x662e, 0x54b5, 0x453c,
    0xbdcb, 0xac42, 0x9ed9, 0x8f50, 0xfbef, 0xea66, 0xd8fd, 0xc974, 0x4204, 0x538d, 0x6116, 0x709f, 0x0420, 0x15a9,
    0x2732, 0x36bb, 0xce4c, 0xdfc5, 0xed5e, 0xfcd7, 0x8868, 0x99e1, 0xab7a, 0xbaf3, 0x5285, 0x430c, 0x7197, 0x601e,
    0x14a1, 0x0528, 0x37b3, 0x263a, 0xdecd, 0xcf44, 0xfddf, 0xec56, 0x98e9, 0x8960, 0xbbfb, 0xaa72, 0x6306, 0x728f,
    0x4014, 0x519d, 0x2522, 0x34ab, 0x0630, 0x17b9, 0xef4e, 0xfec7, 0xcc5c, 0xddd5, 0xa96a, 0xb8e3, 0x8a78, 0x9bf1,
    0x7387, 0x620e, 0x5095, 0x411c, 0x35a3, 0x242a, 0x16b1, 0x0738, 0xffcf, 0xee46, 0xdcdd, 0xcd54, 0xb9eb, 0xa862,
    0x9af9, 0x8b70, 0x8408, 0x9581, 0xa71a, 0xb693, 0xc22c, 0xd3a5, 0xe13e, 0xf0b7, 0x0840, 0x19c9, 0x2b52, 0x3adb,
    0x4e64, 0x5fed, 0x6d76, 0x7cff, 0x9489, 0x8500, 0xb79b, 0xa612, 0xd2ad, 0xc324, 0xf1bf, 0xe036, 0x18c1, 0x0948,
    0x3bd3, 0x2a5a, 0x5ee5, 0x4f6c, 0x7df7, 0x6c7e, 0xa50a, 0xb483, 0x8618, 0x9791, 0xe32e, 0xf2a7, 0xc03c, 0xd1b5,
    0x2942, 0x38cb, 0x0a50, 0x1bd9, 0x6f66, 0x7eef, 0x4c74, 0x5dfd, 0xb58b, 0xa402, 0x9699, 0x8710, 0xf3af, 0xe226,
    0xd0bd, 0xc134, 0x39c3, 0x284a, 0x1ad1, 0x0b58, 0x7fe7, 0x6e6e, 0x5cf5, 0x4d7c, 0xc60c, 0xd785, 0xe51e, 0xf497,
    0x8028, 0x91a1, 0xa33a, 0xb2b3, 0x4a44, 0x5bcd, 0x6956, 0x78df, 0x0c60, 0x1de9, 0x2f72, 0x3efb, 0xd68d, 0xc704,
    0xf59f, 0xe416, 0x90a9, 0x8120, 0xb3bb, 0xa232, 0x5ac5, 0x4b4c, 0x79d7, 0x685e, 0x1ce1, 0x0d68, 0x3ff3, 0x2e7a,
    0xe70e, 0xf687, 0xc41c, 0xd595, 0xa12a, 0xb0a3, 0x8238, 0x93b1, 0x6b46, 0x7acf, 0x4854, 0x59dd, 0x2d62, 0x3ceb,
    0x0e70, 0x1ff9, 0xf78f, 0xe606, 0xd49d, 0xc514, 0xb1ab, 0xa022, 0x92b9, 0x8330, 0x7bc7, 0x6a4e, 0x58d5, 0x495c,
    0x3de3, 0x2c6a, 0x1ef1, 0x0f78
};

MMI_BOOL srv_tcard_query_app_stauts(srv_tcard_app_index_enum app_index);
static void srv_tcard_write_record_int_callback(srv_tcard_callback_struct *callback_data);

static U32 srv_tcard_get_file_size(srv_tcard_file_entry_struct *file_record);
static S32 srv_tcard_check_space_for_file(srv_tcard_file_entry_struct *file_record, MMI_BOOL is_sig);
static void srv_tcard_write_record_int(
                srv_tcard_op_info_struct *write_info,
                SrvTcardCallbackFunc callback_func,
                void *user_data);

#if 0
/* under construction !*/
#endif
static void srv_tcard_file_init_int(srv_tcard_init_cnxt_struct *init_cntx);
static void srv_tcard_file_init_int_callback(srv_tcard_callback_struct *callback_data);

static void srv_tcard_get_file_name(
                srv_tcard_file_name_info_struct *name_info,
                WCHAR* ucs2_buff);

static void srv_tcard_get_folder_name(
                srv_tcard_app_index_enum app_id,
                WCHAR* ucs2_buff);


static void srv_tcard_read_record_int(
                srv_tcard_op_info_struct *read_info,
                SrvTcardCallbackFunc callback_func,
                void *user_data);

static void srv_tcard_read_record_int_callback(srv_tcard_callback_struct *callback_data);



static void srv_tcard_reset_file(
                srv_tcard_reset_file_cntx_struct *reset_cntx,
                SrvTcardCallbackFunc callback_func,
                void *user_data);
static void srv_tcard_reset_file_callback(srv_tcard_callback_struct *callback_data);


static void srv_tcard_set_file_by_default(
                    srv_tcard_set_default_value_cntx_struct* cntx,
                    SrvTcardCallbackFunc callback_func,
                    void *user_data);
static void srv_tcard_set_file_by_default_callback(srv_tcard_callback_struct *callback_data);


/**************************************************************
* Function Defination
**************************************************************/
mmi_ret srv_tcard_event_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    switch (evt->evt_id)
    {
        case EVT_ID_SRV_FMGR_NOTIFICATION_DEV_PLUG_IN:
        {
            
            srv_tcard_init();
            break;
        }

        case EVT_ID_SRV_FMGR_NOTIFICATION_DEV_PLUG_OUT:
        {
            srv_tcard_deinit();
            break;
        }

        default:
            return MMI_RET_OK;
    }
    

    return MMI_RET_OK;
}

S32 srv_tcard_sync_write_record(srv_tcard_op_struct *read_cntx, CHAR *buff)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    U32 Offset;
    S32 result;
    srv_tcard_file_index_enum file_index;        
    U32 table_index;
    TCARD_CHECKSUM checksum;
    srv_tcard_file_entry_struct *record;
    srv_tcard_file_name_info_struct name_info;   
    WCHAR ucs2_buff[SRV_TCARD_MAX_PATH_LEN];
    FS_HANDLE hd = -1;
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    if(buff != NULL )
    {
        file_index = read_cntx->file_index;
        table_index = srv_tcard_get_table_index(file_index);
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_1,file_index,table_index);
        if(table_index != SRV_TCARD_OP_INVALID_INDEX)
        {
            record = &tcard_file_mgr_common_table[table_index];
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_2,tcard_handle.init_stat[record->app_index -1]);
            if(tcard_handle.init_stat[record->app_index - 1])
            {
                if(read_cntx->start_record_id >= 0 && read_cntx->start_record_id < record->record_number)
                {
                    if(record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE)
                    {
                        hd = tcard_handle.file_hd[record->file_index - 1];
                        Offset = read_cntx->start_record_id * (sizeof(TCARD_CHECKSUM) + record->record_size);
                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_3,hd,Offset);
                    }
                    else
                    {
                        name_info.app_index = record->app_index;
                        name_info.file_index = record->file_index;
                        name_info.is_backup = MMI_FALSE;
                        srv_tcard_get_file_name(&name_info, ucs2_buff);
                        hd = FS_Open((U16*)ucs2_buff, FS_READ_WRITE);
                        Offset = read_cntx->start_record_id * record->record_size + sizeof(TCARD_CHECKSUM);
                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_4,hd,Offset);
                    }

                    if( hd >= 0)
                    {
                        
                        if(record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE)
                        {
                            FS_Seek(hd,Offset,FS_FILE_BEGIN);
                            checksum = srv_tcard_checksum_compute_by_buffer(buff, record->record_size);
                            result = FS_Write(hd, &checksum, sizeof(TCARD_CHECKSUM), &size);
                            FS_Seek(hd,Offset+sizeof(TCARD_CHECKSUM),FS_FILE_BEGIN);
                            result = FS_Write(hd, buff, record->record_size, &size);
                            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_5,result);
                            //need to commit the data is the data is not about 512byte ali
                            FS_Close(hd);
                            name_info.app_index = record->app_index;
                            name_info.file_index = record->file_index;
                            name_info.is_backup = MMI_FALSE;
                            srv_tcard_get_file_name(&name_info, ucs2_buff);
                            hd = FS_Open((U16*)ucs2_buff, FS_READ_WRITE);
                            tcard_handle.file_hd[record->file_index - 1] = hd;
                            if(result >= 0)
                            {
                                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_6,record->record_size,size);
                                if(record->record_size == size)
                                {
                                    return SRV_TCARD_OP_SUCC;
                                }
                                else
                                {
                                    return SRV_TCARD_OP_FS_ERROR;
                                }
                            }
                            else
                            {
                                return SRV_TCARD_OP_FS_ERROR;
                            }
                            
                        }
                        else
                        {
                            FS_Seek(hd,Offset,FS_FILE_BEGIN);
                            result = FS_Write(hd, buff, record->record_size, &size);
                            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_7,result);
                            if (result >= 0 )
                            {
                                checksum = srv_tcard_checksum_compute_by_hd(hd, sizeof(TCARD_CHECKSUM));
                                FS_Seek(hd, 0, FS_FILE_BEGIN);
                                result = FS_Write(hd, &checksum, sizeof(TCARD_CHECKSUM), &size);
                                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_8,result);
                            }
                            /*write backup file*/
                            if(result >= 0)
                            {                       
                                FS_Close(hd);
                                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_9,size);
                                if(sizeof(TCARD_CHECKSUM) == size)
                                {
                                    name_info.app_index = record->app_index;
                                    name_info.file_index = record->file_index;
                                    name_info.is_backup = MMI_TRUE;
                                    srv_tcard_get_file_name(&name_info, ucs2_buff);
                                    hd = FS_Open((U16*)ucs2_buff, FS_READ_WRITE);
                                    Offset = read_cntx->start_record_id * record->record_size + sizeof(TCARD_CHECKSUM);
                                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_10,hd,Offset);
                                    if(hd >= 0)
                                    {
                                        FS_Seek(hd,Offset,FS_FILE_BEGIN);
                                        result = FS_Write(hd, buff, record->record_size, &size);
                                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_11,result);
                                        if (result >= 0 )
                                        {
                                            checksum = srv_tcard_checksum_compute_by_hd(hd, sizeof(TCARD_CHECKSUM));
                                            FS_Seek(hd, 0, FS_FILE_BEGIN);
                                            result = FS_Write(hd, &checksum, sizeof(TCARD_CHECKSUM), &size);
                                            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_WRITE_RECORD_12,result);
                                            if(result >= 0)
                                            {
                                                FS_Close(hd);
                                                return SRV_TCARD_OP_SUCC;
                                            }
                                        }
                                        else
                                        {
                                            FS_Close(hd);
                                            return SRV_TCARD_OP_FS_ERROR;
                                        }
                                    }
                                    else
                                    {
                                        return SRV_TCARD_OP_FS_ERROR;
                                    }
                                    
                                }
                                else
                                {
                                    return SRV_TCARD_OP_FS_ERROR;
                                }
                            }
                            else
                            {
                                FS_Close(hd);
                                return SRV_TCARD_OP_FS_ERROR;
                            }
                                
                        }
                    
                    }
                    else
                    {
                        return SRV_TCARD_OP_FS_ERROR;
                    }
                }
                else
                {
                    return SRV_TCARD_OP_INVALID_PARA;
                }
            }
            else
            {
                return SRV_TCARD_OP_NOT_AVAILABLE;
            }
        }
        else
        {
            return SRV_TCARD_OP_INVALID_PARA;
        }
    }
    else
    {
        return SRV_TCARD_OP_INVALID_PARA;
    }
  
}


S32 srv_tcard_sync_read_record(srv_tcard_op_struct *read_cntx, CHAR *buff)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    U32 Offset;
    S32 result;
    srv_tcard_file_index_enum file_index;        
    U32 table_index;
    srv_tcard_file_entry_struct *record;
    srv_tcard_file_name_info_struct name_info;   
    WCHAR ucs2_buff[SRV_TCARD_MAX_PATH_LEN];
    FS_HANDLE hd = -1;
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_0,buff);
    if(buff != NULL )
    {
        file_index = read_cntx->file_index;
        table_index = srv_tcard_get_table_index(file_index);
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_1,file_index,table_index);
        if(table_index != SRV_TCARD_OP_INVALID_INDEX)
        {
            record = &tcard_file_mgr_common_table[table_index];
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_2,tcard_handle.init_stat[record->app_index - 1]);
            if(tcard_handle.init_stat[record->app_index - 1])
            {
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_3,read_cntx->start_record_id);
                if(read_cntx->start_record_id >= 0 && read_cntx->start_record_id < record->record_number)
                {
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_4,record->file_attr);
                    if(record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE)
                    {
                        hd = tcard_handle.file_hd[record->file_index - 1];
                        Offset = read_cntx->start_record_id * (sizeof(TCARD_CHECKSUM) + record->record_size) + sizeof(TCARD_CHECKSUM);
                    }
                    else
                    {
                        name_info.app_index = record->app_index;
                        name_info.file_index = record->file_index;
                        name_info.is_backup = MMI_FALSE;
                        srv_tcard_get_file_name(&name_info, ucs2_buff);
                        hd = FS_Open((U16*)ucs2_buff, FS_READ_ONLY);
                        Offset = read_cntx->start_record_id * record->record_size + sizeof(TCARD_CHECKSUM)  ;
                    }
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_5,hd,Offset);

                    if( hd >= 0)
                    {
                        FS_Seek(hd,Offset,FS_FILE_BEGIN);
                        result = FS_Read(hd, buff, record->record_size, &size);
                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_6,result);
                        if(result >= 0)
                        {
                            if(record->record_size == size)
                            {
                                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_7,size);
                                if(record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE)
                                {
                                    TCARD_CHECKSUM checksum;
                                    FS_Seek(hd,Offset - sizeof(TCARD_CHECKSUM),FS_FILE_BEGIN);
                                    result = FS_Read(hd, &checksum, sizeof(TCARD_CHECKSUM), &size);
                                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_8,result);
                                    if(result >= 0)
                                    {
                                        if (checksum != srv_tcard_checksum_compute_by_buffer(buff, record->record_size))
                                        {
                                            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_SYNC_READ_RECORD_9,checksum);
                                            memcpy(buff, record->default_value, sizeof(record->record_size));
                                            return SRV_TCARD_OP_SUCC;
                                        }
                                        else
                                        {
                                            return SRV_TCARD_OP_SUCC;
                                        }
                                         
                                    }
                                    else
                                    {
                                        return SRV_TCARD_OP_FS_ERROR;
                                    }
                                }
                                else
                                {
                                    FS_Close(hd);
                                    return SRV_TCARD_OP_SUCC;
                                }
                            }
                            else
                            {
                                if(record->file_attr & SRV_TCARD_ATTR_NEED_BACKUP)
                                {
                                FS_Close(hd);
                                }   
                                return SRV_TCARD_OP_FS_ERROR;
                            }
                        }
                        else
                        {
                            FS_Close(hd);
                            return SRV_TCARD_OP_FS_ERROR;
                        }
                       
                    }
                    else
                    {
                        return SRV_TCARD_OP_FS_ERROR;
                    }
                }
                else
                {
                    return SRV_TCARD_OP_INVALID_PARA;
                }
            }
            else
            {
                return SRV_TCARD_OP_NOT_AVAILABLE;
            }
        }
        else
        {
            return SRV_TCARD_OP_INVALID_PARA;
        }
    }
    else
    {
        return SRV_TCARD_OP_INVALID_PARA;
    }
  
}


/*****************************************************************************
 * FUNCTION
 *  srv_tcard_query_app_stauts
 * DESCRIPTION
 *  should be used with tcard ready status
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/
MMI_BOOL srv_tcard_query_app_stauts(srv_tcard_app_index_enum app_index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL result;
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    ASSERT(app_index > 0);
    MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_query_app_stauts %d , is_ready = %d",tcard_handle.init_stat[app_index-1],tcard_handle.is_ready);
   // kal_promt_trace(MOD_MMI,"srv_tcard_query_app_stauts %d , is_ready = %d",tcard_handle.init_stat[app_index-1],tcard_handle.is_ready);
    if(tcard_handle.is_ready)
    {
        result = tcard_handle.init_stat[app_index-1];
    }
    else
    {
        result = MMI_FALSE;
    }
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_QUERY_APP_STATUS,tcard_handle.is_ready,result);
    return result;
}




/*****************************************************************************
 * FUNCTION
 *  srv_tcard_check_space_for_file
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

TCARD_HANDLE srv_tcard_read_record(
                srv_tcard_op_struct *read_cntx, 
                CHAR *buff,
                SrvTcardCallbackFunc callback_func,
                void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    S32 result;
    srv_tcard_file_index_enum file_index;         /* where to backup or restore the sms */
    U32 start_record_id;
    U32 record_num;
    U32 table_index;
    srv_tcard_file_entry_struct *record;
    srv_tcard_file_name_info_struct name_info;
    FS_HANDLE hd = -1;
    srv_tcard_op_info_struct read_info;
    srv_tcard_read_cntx_struct *read_hdl = NULL; 
    WCHAR ucs2_buff[SRV_TCARD_MAX_PATH_LEN];
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_1,buff,read_cntx->file_index);
    if( buff != NULL )
    {

        file_index = read_cntx->file_index;
        table_index = srv_tcard_get_table_index(file_index);
        if(table_index != SRV_TCARD_OP_INVALID_INDEX)
        {
            record = &tcard_file_mgr_common_table[table_index];
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_2,tcard_handle.init_stat[record->app_index - 1]);
            if(tcard_handle.init_stat[record->app_index -1])
            {
                if(srv_tcard_check_op_para(read_cntx, record))
                {
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_3,record->file_attr);
                    if(record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE)
                    {
                        hd = tcard_handle.file_hd[record->file_index - 1];
                    }
                    else
                    {
                        name_info.app_index = record->app_index;
                        name_info.file_index = record->file_index;
                        name_info.is_backup = MMI_FALSE;
                        srv_tcard_get_file_name(&name_info, ucs2_buff);
                        hd = FS_Open(ucs2_buff, FS_READ_ONLY);
                    }
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_4,hd);
                    if(hd >= 0)
                    {
                        read_hdl = (srv_tcard_read_cntx_struct*)srv_tcard_alloc_cntx(
                                        sizeof(srv_tcard_read_cntx_struct),
                                        SRV_TCARD_READ,
                                        callback_func,
                                        user_data);
                        if(read_hdl != NULL)
                        {                        
                            read_hdl->start_index = read_cntx->start_record_id;
                            read_hdl->record_num = read_cntx->record_num;
                            read_hdl->hd = hd;
                            read_hdl->action_buff = buff;
                            read_hdl->curr_ptr = buff;
                            read_hdl->record_size = record->record_size;
                            //read_info = (srv_tcard_op_info_struct*)OslMalloc(sizeof(srv_tcard_op_info_struct));
                            //read_info->offset = read_cntx->start_record_id * (record->record_size + 4);
                            read_info.set_point = buff;
                            if(record->file_attr & SRV_TCARD_ATTR_NEED_BACKUP)
                            {
                                read_info.offset = sizeof(TCARD_CHECKSUM) + read_cntx->start_record_id * record->record_size; 
                                read_info.is_backup = MMI_TRUE;
                                read_hdl->is_backup = MMI_TRUE;
                                if(read_hdl->record_num < sizeof(cache_buff)/(record->record_size))
                                {    
                                    read_hdl->remain_num = 0;
                                    read_hdl->next_ptr = NULL;
                                    read_info.size = record->record_size * read_hdl->record_num;
                                }
                                else
                                {
                                    read_hdl->remain_num = read_hdl->record_num - sizeof(cache_buff)/(record->record_size);
                                    read_info.size = sizeof(cache_buff)/(record->record_size)*(record->record_size);
                                    //read_hdl->start_index += sizeof(cache_buff)/(record->record_size); 
                                    read_hdl->next_ptr = buff + read_info.size;
                                }
                            
                            }
                            else
                            {
                                read_info.offset = read_cntx->start_record_id * (sizeof(TCARD_CHECKSUM) + record->record_size);
                                read_info.is_backup = MMI_FALSE;
                                read_hdl->is_backup = MMI_FALSE;
                                if(read_hdl->record_num < sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + record->record_size))
                                {
                                    read_hdl->remain_num = 0;
                                    read_hdl->next_ptr = NULL;
                                    read_info.size = (sizeof(TCARD_CHECKSUM) + record->record_size) * read_hdl->record_num;
                                }
                                else
                                {
                                    read_hdl->remain_num = read_hdl->record_num - sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + record->record_size);
                                    read_info.size = sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + record->record_size)*(sizeof(TCARD_CHECKSUM) + record->record_size);
                                    read_hdl->start_index += sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM)+record->record_size); 
                                    read_hdl->next_ptr = buff + sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + record->record_size)*(record->record_size);;
                                }
                            
                            }
                            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_5,read_info.offset);
                            read_info.record_size = record->record_size;
                            read_info.default_value = (CHAR *)record->default_value;
                            read_info.hd = hd;
                            srv_tcard_read_record_int(
                                &read_info,
                                srv_tcard_read_record_int_callback,
                                read_hdl);
                         }
                         else
                         {
                              result = SRV_TCARD_OP_MEM_INSUFFICIENT;
                              srv_tcard_async_callback(
                                  SRV_TCARD_READ,
                                  result,
                                  NULL,
                                  0,
                                  user_data,
                                  callback_func);
                         }
                    }
                    else
                    {
                        result = SRV_TCARD_OP_INVALID_PARA;
                        srv_tcard_async_callback(
                            SRV_TCARD_READ,
                            result,
                            NULL,
                            0,
                            user_data,
                            callback_func);
                    }
                     
                     
                }
                else
                {
                    result = SRV_TCARD_OP_INVALID_PARA;
                    srv_tcard_async_callback(
                        SRV_TCARD_READ,
                        result,
                        NULL,
                        0,
                        user_data,
                        callback_func);
                }
            }
            else
            {
                result = SRV_TCARD_OP_NOT_AVAILABLE;
                srv_tcard_async_callback(
                    SRV_TCARD_READ,
                    result,
                    NULL,
                    0,
                    user_data,
                    callback_func);
            }
            
        }
        else
        {
            result = SRV_TCARD_OP_INVALID_PARA;
            srv_tcard_async_callback(
                SRV_TCARD_READ,
                result,
                NULL,
                0,
                user_data,
                callback_func);
        }
    }
    else
    {
        result = SRV_TCARD_OP_INVALID_PARA;
        srv_tcard_async_callback(
            SRV_TCARD_READ,
            result,
            NULL,
            0,
            user_data,
            callback_func);
    }
    return read_hdl;
}



/*****************************************************************************
 * FUNCTION
 *  srv_tcard_write_record
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

TCARD_HANDLE srv_tcard_write_record(
                        srv_tcard_op_struct *write_cntx,
                        CHAR *buff,
                        SrvTcardCallbackFunc callback_func,
                        void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    U32 table_index;
    S32 result;
    srv_tcard_file_index_enum file_index;
    srv_tcard_file_entry_struct *record;
    srv_tcard_file_name_info_struct name_info;
    WCHAR ucs2_buff[SRV_TCARD_MAX_PATH_LEN];
    srv_tcard_write_cntx_struct *write_hdl = NULL;
    srv_tcard_op_info_struct write_info;
    FS_HANDLE hd = -1;
    FS_HANDLE hd1 = -1;
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_RECORD_1,buff);
    if(buff != NULL)
    {
        file_index = write_cntx->file_index;
        table_index = srv_tcard_get_table_index(file_index);
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_RECORD_2,file_index);
        if(table_index != SRV_TCARD_OP_INVALID_INDEX)
        {
            record = &tcard_file_mgr_common_table[table_index];
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_RECORD_3,tcard_handle.init_stat[record->app_index - 1]);
            if(tcard_handle.init_stat[record->app_index - 1])
            {
                if(srv_tcard_check_op_para(write_cntx, record))
                {
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_RECORD_4);
                    if(record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE)
                    {
                        hd = tcard_handle.file_hd[record->file_index - 1];
                    }
                    else
                    {
                        name_info.app_index = record->app_index;
                        name_info.file_index = record->file_index;
                        name_info.is_backup = MMI_FALSE;
                        srv_tcard_get_file_name(&name_info, ucs2_buff);
                        hd = FS_Open(ucs2_buff, FS_READ_WRITE);
                    }
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_RECORD_5,hd);
                    if(hd >= 0)
                    {
                        write_hdl = (srv_tcard_write_cntx_struct*)srv_tcard_alloc_cntx(
                                                                        sizeof(srv_tcard_write_cntx_struct),
                                                                        SRV_TCARD_WRITE,
                                                                        callback_func,
                                                                        user_data);
                        if(write_hdl != NULL)
                        {
                            write_hdl->hd = hd;
                            write_hdl->record = record;
                            write_hdl->record_size = record->record_size;
                            write_hdl->record_num = write_cntx->record_num;
                            write_hdl->start_index = write_cntx->start_record_id;
                            write_hdl->curr_ptr = buff;
                            write_hdl->action_buff = buff;
                            write_hdl->is_backup = record->file_attr;
                            write_info.hd = hd;
                            write_hdl->callback_func = callback_func;
                            write_hdl->user_data = user_data;
                            if(record->file_attr & SRV_TCARD_ATTR_NEED_BACKUP)
                            {
                                write_info.is_backup = MMI_TRUE;
                                write_hdl->is_backup = MMI_TRUE;
                                if(write_hdl->record_num <= sizeof(cache_buff)/record->record_size)
                                {
                                    write_hdl->remain_num= 0;
                                    write_hdl->next_ptr = NULL;
                                    write_info.size = write_hdl->record_num * write_hdl->record_size;
                                }
                                else
                                {
                                    write_hdl->remain_num = write_hdl->record_num - sizeof(cache_buff)/record->record_size;
                                    write_hdl->next_ptr = write_hdl->curr_ptr + sizeof(cache_buff)/record->record_size * record->record_size;
                                    write_info.size = sizeof(cache_buff)/record->record_size * record->record_size;
                                }
                                write_hdl->is_org = MMI_TRUE;
                                write_info.offset = write_hdl->start_index * (record->record_size) + sizeof(TCARD_CHECKSUM);
                            }
                            else
                            {
                                write_info.is_backup = MMI_FALSE;
                                write_hdl->is_backup = MMI_FALSE;
                                if(write_hdl->record_num <= sizeof(cache_buff)/(record->record_size + sizeof(TCARD_CHECKSUM)) * (record->record_size + sizeof(TCARD_CHECKSUM)))
                                {
                                    write_hdl->remain_num= 0;
                                    write_hdl->next_ptr= NULL;
                                    write_info.size = write_hdl->record_num * (write_hdl->record_size + sizeof(TCARD_CHECKSUM));
                                }
                                else
                                {
                                    write_hdl->remain_num= write_hdl->record_num - sizeof(cache_buff)/record->record_size;
                                    write_hdl->next_ptr= write_hdl->curr_ptr + sizeof(cache_buff)/record->record_size * record->record_size;
                                    write_info.size = sizeof(cache_buff)/(record->record_size + sizeof(TCARD_CHECKSUM))* (record->record_size + sizeof(TCARD_CHECKSUM));
                                }
                                write_info.offset = write_hdl->start_index * (record->record_size + sizeof(TCARD_CHECKSUM));
                            }
                            write_info.set_point = write_hdl->curr_ptr;
                            write_info.record_size = record->record_size;
                            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_RECORD_6,write_info.offset);
                            srv_tcard_write_record_int(
                                    &write_info,
                                    srv_tcard_write_record_int_callback,
                                    write_hdl);
                        }
                        else
                        {
                            result = SRV_TCARD_OP_MEM_INSUFFICIENT;
                            srv_tcard_async_callback(
                                SRV_TCARD_READ,
                                result,
                                NULL,
                                0,
                                user_data,
                                callback_func);
                        }
                    }
                    else
                    {
                        result = SRV_TCARD_OP_FS_ERROR;
                        srv_tcard_async_callback(
                            SRV_TCARD_READ,
                            result,
                            NULL,
                            0,
                            user_data,
                            callback_func);
                    }
                    
                }
                else
                {
                    result = SRV_TCARD_OP_INVALID_PARA;
                    srv_tcard_async_callback(
                        SRV_TCARD_READ,
                        result,
                        NULL,
                        0,
                        user_data,
                        callback_func);
                }
            }
            else
            {
                result = SRV_TCARD_OP_NOT_AVAILABLE;
                srv_tcard_async_callback(
                    SRV_TCARD_READ,
                    result,
                    NULL,
                    0,
                    user_data,
                    callback_func);
            }
             
             
        }
        else
        {
            result = SRV_TCARD_OP_INVALID_PARA;
            srv_tcard_async_callback(
                SRV_TCARD_READ,
                result,
                NULL,
                0,
                user_data,
                callback_func);
        }
        
    }
    else
    {
        result = SRV_TCARD_OP_INVALID_PARA;
        srv_tcard_async_callback(
            SRV_TCARD_READ,
            result,
            NULL,
            0,
            user_data,
            callback_func);
    }
    return write_hdl;
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_check_space_for_file
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

static U32 srv_tcard_get_file_size(srv_tcard_file_entry_struct *file_record)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    size = file_record->record_size * file_record->record_number;
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_SIZE,size,file_record->file_attr);
    if(file_record->file_attr & 0x0001)
    {
        return (size += sizeof(TCARD_CHECKSUM));
    }
    else
    {
        return (size + sizeof(TCARD_CHECKSUM) * file_record->record_number);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_check_space_for_file
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/
static S32 srv_tcard_check_space_for_file(srv_tcard_file_entry_struct *file_record , MMI_BOOL is_sig)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 result;
    U32 size;
    FS_DiskInfo disc_info;
    CHAR file_path[SRV_TCARD_MAX_PATH_LEN];
    WCHAR usc_dir[5]; 
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    sprintf(
            file_path, 
            "%c:\\", 
            (S8)SRV_FMGR_CARD_DRV);
    size = srv_tcard_get_file_size(file_record);
    
    if(file_record->file_attr & 0x0001)
    {
        if(is_sig == MMI_FALSE)
        {
            size = 2 * size;
        }    
    }
    mmi_asc_to_ucs2((S8*)usc_dir, (S8*)file_path);
    result = FS_GetDiskInfo((kal_wchar*) usc_dir, &disc_info, FS_DI_BASIC_INFO | FS_DI_FREE_SPACE);
    if (result >= 0)
    {
        if ((disc_info.FreeClusters * disc_info.SectorsPerCluster * disc_info.BytesPerSector) <= size)
        {
            return FS_DISK_FULL;
        }
        else
        {
            return 0;
        }
    }
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_CHECK_SPACE_FOR_SIZE,result);
    return result;
}




/*****************************************************************************
 * FUNCTION
 *  srv_tcard_file_init_int_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/
static void srv_tcard_file_init_int_callback(srv_tcard_callback_struct *callback_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tcard_init_cnxt_struct *init_cntx;
    U32 size;
    S32 ret;
    char* ucs2_buff[SRV_TCARD_MAX_PATH_LEN * ENCODING_LENGTH];
    srv_tcard_file_entry_struct *file_record;
    srv_tcard_file_name_info_struct *name_info;
    FS_HANDLE fd = -1;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    init_cntx = (srv_tcard_init_cnxt_struct*)callback_data->user_data;
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_FILE_INIT_INT_CALLBACK_1,init_cntx->curr_index);
    if(init_cntx->curr_index < init_cntx->total_num)
    {
        srv_tcard_file_init_int(init_cntx);
    }
    else
    {
        srv_tcard_event_tcard_ready_struct ready_event_info;
        tcard_handle.is_ready = MMI_TRUE;
        ready_event_info.is_tcard_ready = MMI_TRUE;
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_FILE_INIT_INT_CALLBACK_2);
        srv_tcard_emit_event(EVT_ID_SRV_TCARD_READY, &ready_event_info);
    }
    
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_get_file_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

static void srv_tcard_get_file_name(
                srv_tcard_file_name_info_struct *name_info,
                WCHAR* ucs2_buff)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    CHAR file_path[SRV_TCARD_MAX_PATH_LEN];
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_NAME);
    if(name_info->is_backup)
    {
        sprintf(
            file_path, 
            "%c:%s%d\\%d%s", 
            (S8)SRV_FMGR_CARD_DRV, 
            SRV_TCARD_SERVICE_FOLDER_NAME,
            name_info->app_index, 
            name_info->file_index,
            SRV_TCARD_BACKUP_FILE_EXT_NAME);
    }
    else
    {
        sprintf(
            file_path, 
            "%c:%s%d\\%d%s", 
            (S8)SRV_FMGR_CARD_DRV, 
            SRV_TCARD_SERVICE_FOLDER_NAME,
            name_info->app_index, 
            name_info->file_index,
            SRV_TCARD_ORIGINAL_FILE_EXT_NAME);
    }
    mmi_asc_to_ucs2((CHAR*)ucs2_buff, file_path);
    
}


static void srv_tcard_get_folder_name(
                srv_tcard_app_index_enum app_id,
                WCHAR* ucs2_buff)

{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    CHAR file_path[SRV_TCARD_MAX_PATH_LEN];
    /*----------------------------------------------------------------*/
    /* Code Body                                                       */
    /*----------------------------------------------------------------*/
    sprintf(
            file_path, 
            "%c:%s%d\\", 
            (S8)SRV_FMGR_CARD_DRV, 
            SRV_TCARD_SERVICE_FOLDER_NAME,
            app_id);
    mmi_asc_to_ucs2((CHAR*)ucs2_buff, file_path);
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_file_init_int
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

static void srv_tcard_file_init_int(srv_tcard_init_cnxt_struct *init_cntx)
{
    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tcard_file_entry_struct *file_record;
    srv_tcard_file_name_info_struct name_info;
    U32 file_size;
    S32 ret;
    S32 size;
    U32 position;
    CHAR file_path[SRV_TCARD_MAX_PATH_LEN];

    TCARD_CHECKSUM checksum;
    TCARD_CHECKSUM temp_checksum;

    FS_HANDLE fd = -1;
    FS_HANDLE temp_fd = -1;
    WCHAR ucs2_buff_org[SRV_TCARD_MAX_PATH_LEN];
    WCHAR ucs2_buff_backup[SRV_TCARD_MAX_PATH_LEN];
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_1,init_cntx->curr_index);
    file_record = &tcard_file_mgr_common_table[init_cntx->curr_index];
    if (!tcard_handle.init_stat[file_record->app_index - 1])
    {
        MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"[sms]srv_tcard_file_init_int file_record->app_index%d = fail",file_record->app_index);
        init_cntx->curr_index ++;
        srv_tcard_async_callback(
            SRV_TCARD_INIT,
            MMI_TRUE,
            NULL,
            0,
            init_cntx,
            srv_tcard_file_init_int_callback);

		return;
    }
    name_info.app_index = file_record->app_index;
    name_info.file_index = file_record->file_index;
    srv_tcard_get_folder_name(file_record->app_index,ucs2_buff_org);
    /*check the app folder*/
    temp_fd = FS_Open((WCHAR*)ucs2_buff_org, FS_OPEN_DIR | FS_READ_ONLY);
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_2,temp_fd);
    if(temp_fd < 0)
    {
        FS_HANDLE file_handle = -1;
        U32 i;
        file_handle = FS_CreateDir((const WCHAR*)ucs2_buff_org);
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_3,file_handle);
        if(file_handle < 0)
        {
            srv_tcard_event_tcard_ready_struct ready_event_info;
            srv_tcard_file_entry_struct *temp_file_record;
            
            for (i = init_cntx->curr_index; i < SRV_TCARD_FILE_INDEX_TOTAL; i++)
            {
                temp_file_record = &tcard_file_mgr_common_table[init_cntx->curr_index];
                tcard_handle.init_stat[temp_file_record->app_index - 1] = MMI_FALSE;
            }
            tcard_handle.is_ready = MMI_TRUE;
            ready_event_info.is_tcard_ready = MMI_TRUE;
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_4);
            srv_tcard_emit_event(EVT_ID_SRV_TCARD_READY, &ready_event_info);
        }
        else
        {
            MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int1 app folder is ok");
            FS_Close(file_handle);
        }
    }
    else
    {
        MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int2 app folder is ok");
        FS_Close(temp_fd);
    }
    
    /*file need backup*/
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_5,file_record->file_attr);
    if (file_record->file_attr & SRV_TCARD_ATTR_NEED_BACKUP)
    {
        MMI_BOOL ori_file_ok;
        MMI_BOOL bak_file_ok;
                
        /*check the .o file size*/
        name_info.is_backup = MMI_FALSE;
        srv_tcard_get_file_name(&name_info, ucs2_buff_org);
        if ((FS_GetAttributes(ucs2_buff_org) >= 0))
        {
            /*check the ori file first*/
            fd = FS_Open(ucs2_buff_org, FS_READ_ONLY);
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_6,fd);
            if(fd >= FS_NO_ERROR)
            {    
                position = sizeof(TCARD_CHECKSUM);
                checksum = srv_tcard_checksum_compute_by_hd(fd, position);
                FS_Seek(fd, 0, FS_FILE_BEGIN);
                FS_Read(fd,&temp_checksum,sizeof(TCARD_CHECKSUM),&size);
                if(size == sizeof(TCARD_CHECKSUM))
                {
                    if(temp_checksum == checksum)
                    {
                        ori_file_ok = MMI_TRUE;
                    }
                    else
                    {
                        ori_file_ok = MMI_FALSE;
                    }
                }
                else
                {
					
                    ori_file_ok = MMI_FALSE;
                }
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_7,ori_file_ok);
                FS_Close(fd);
            }
            else
            {
                ori_file_ok = MMI_FALSE;
            }
        }
        else
        {
            ori_file_ok = MMI_FALSE;
        }
        /*check the backup file*/
        name_info.is_backup = MMI_TRUE;
        srv_tcard_get_file_name(&name_info, ucs2_buff_backup);
        if (FS_GetAttributes(ucs2_buff_backup) >= 0)
        {

            if((fd = FS_Open(ucs2_buff_backup, FS_READ_ONLY)) >= FS_NO_ERROR)
            {
				position = sizeof(TCARD_CHECKSUM);
                checksum = srv_tcard_checksum_compute_by_hd(fd, position);
                FS_Seek(fd, 0, FS_FILE_BEGIN);
                FS_Read(fd,&temp_checksum,sizeof(TCARD_CHECKSUM),&size);
                if(size == sizeof(TCARD_CHECKSUM))
                {
                    if(temp_checksum == checksum)
                    {
                        
                        bak_file_ok = MMI_TRUE;
                    }
                    else
                    {
                        
                        bak_file_ok = MMI_FALSE;
                    }
                }
                else
                {
                    bak_file_ok = MMI_FALSE;
                }
                FS_Close(fd);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_8,bak_file_ok);
            }
            else
            {
                bak_file_ok = MMI_FALSE;
            }
        }
        else
        {
            bak_file_ok = MMI_FALSE;
        }

        if(ori_file_ok && bak_file_ok)
        {
            init_cntx->curr_index ++;
            srv_tcard_async_callback(
                SRV_TCARD_INIT,
                MMI_TRUE,
                NULL,
                0,
                init_cntx,
                srv_tcard_file_init_int_callback);
            
        }
        else if(ori_file_ok || bak_file_ok)
        {
            if(ori_file_ok)
            {
                S32 result;
                FS_Delete(ucs2_buff_backup);
                result = srv_tcard_check_space_for_file(file_record , MMI_TRUE);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_9,result);
                if(result == 0)
                {
                    fd = FS_Open(ucs2_buff_backup,FS_CREATE_ALWAYS);
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_10,fd);
                    if(fd >= 0)
                    {
                        FS_Close(fd);
                        ret = FS_Move(ucs2_buff_org, ucs2_buff_backup, FS_MOVE_COPY | FS_MOVE_OVERWRITE, NULL, NULL, 0);
                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_11,ret);
                        if(ret == FS_NO_ERROR)
                        {
                            init_cntx->curr_index ++;
                            srv_tcard_async_callback(
                                SRV_TCARD_INIT,
                                MMI_TRUE,
                                NULL,
                                0,
                                init_cntx,
                                srv_tcard_file_init_int_callback);
                        }
                        else
                        {
                            tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
							MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int1 file_record->app_index = fail");
                            init_cntx->curr_index ++;
                            srv_tcard_async_callback(
                                SRV_TCARD_INIT,
                                MMI_TRUE,
                                NULL,
                                0,
                                init_cntx,
                                srv_tcard_file_init_int_callback);
                        }
                    }
                    
                }
                else
                {
                    tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
					MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int2 file_record->app_index = fail");
                    init_cntx->curr_index ++;
                    srv_tcard_async_callback(
                        SRV_TCARD_INIT,
                        MMI_TRUE,
                        NULL,
                        0,
                        init_cntx,
                        srv_tcard_file_init_int_callback);
                }
            }
            else
            {
                S32 result;
                FS_Delete(ucs2_buff_org);
                result = srv_tcard_check_space_for_file(file_record, MMI_TRUE);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_12,result);
                if(result == 0)
                {
                    fd = FS_Open(ucs2_buff_org,FS_CREATE_ALWAYS);
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_13,fd);
                    if(fd >= 0)
                    {
                        FS_Close(fd);
                        ret = FS_Move(ucs2_buff_backup, ucs2_buff_org, FS_MOVE_COPY | FS_MOVE_OVERWRITE, NULL, NULL, 0);
                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_14,ret);

                        if(ret == FS_NO_ERROR)
                        {
                            init_cntx->curr_index ++;
                            srv_tcard_async_callback(
                                SRV_TCARD_INIT,
                                MMI_TRUE,
                                NULL,
                                0,
                                init_cntx,
                                srv_tcard_file_init_int_callback);
                        }
                        else
                        {
                            tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
							MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int3 app_index = fail,curr_index = %d",init_cntx->curr_index);
                            init_cntx->curr_index ++;
                            srv_tcard_async_callback(
                                SRV_TCARD_INIT,
                                MMI_TRUE,
                                NULL,
                                0,
                                init_cntx,
                                srv_tcard_file_init_int_callback);
                        }
                    }
                    else
                    {
                        tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
						MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int4 app_index = fail,curr_index = %d",init_cntx->curr_index);
                        init_cntx->curr_index ++;
                        srv_tcard_async_callback(
                            SRV_TCARD_INIT,
                            MMI_TRUE,
                            NULL,
                            0,
                            init_cntx,
                            srv_tcard_file_init_int_callback);
                    }
                    
                }
                else
                {
                    tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
					
					MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int5 app_index = fail,curr_index = %d",init_cntx->curr_index);
                    init_cntx->curr_index ++;
                    srv_tcard_async_callback(
                        SRV_TCARD_INIT,
                        MMI_TRUE,
                        NULL,
                        0,
                        init_cntx,
                        srv_tcard_file_init_int_callback);
                }
            }
        }
        else/*Both .o and .bak file are wrong*/
        {
            S32 result;
            if(FS_GetAttributes(ucs2_buff_org) >= 0)
            {
                FS_Delete(ucs2_buff_org);
            }
            if(FS_GetAttributes(ucs2_buff_backup) >= 0)
            {

                FS_Delete(ucs2_buff_org);
            }
            result = srv_tcard_check_space_for_file(file_record, MMI_FALSE);
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_15,result);
            if(result >= 0)
            {
                fd = FS_Open(ucs2_buff_org,FS_CREATE_ALWAYS | FS_READ_WRITE);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_16,fd);
                if(fd < 0)
                {
                    tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
    				MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int9 app_index = fail,curr_index = %d",init_cntx->curr_index);
                    init_cntx->curr_index ++;
                    srv_tcard_async_callback(
                        SRV_TCARD_INIT,
                        MMI_TRUE,
                        NULL,
                        0,
                        init_cntx,
                        srv_tcard_file_init_int_callback);
                }
                else
                {
                    srv_tcard_set_default_value_cntx_struct *cntx;
                    cntx = (srv_tcard_set_default_value_cntx_struct*)OslMalloc(sizeof(srv_tcard_set_default_value_cntx_struct));
                    cntx->file_hd = fd;
                    cntx->file_id = file_record->file_index;
                    srv_tcard_set_file_by_default(
                        cntx,
                        srv_tcard_file_init_int_callback,
                        init_cntx);
                }
            }
            else
            {
                tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
				MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int6 app_index = fail,curr_index = %d",init_cntx->curr_index);
                init_cntx->curr_index ++;
                srv_tcard_async_callback(
                    SRV_TCARD_INIT,
                    MMI_TRUE,
                    NULL,
                    0,
                    init_cntx,
                    srv_tcard_file_init_int_callback);
            }
            
        }
    }
    else/*not need backup*/
    {
        U32 tmp_file_size;
        MMI_BOOL is_file_ok;
        
        name_info.is_backup = MMI_FALSE;
        srv_tcard_get_file_name(&name_info, ucs2_buff_org);
        file_size = srv_tcard_get_file_size(file_record);
        /*check whether the file is exist*/
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_17);
        if((FS_GetAttributes(ucs2_buff_org) >= 0))
        {
            fd = FS_Open(ucs2_buff_org, FS_READ_WRITE);
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_18,fd);
            if(fd >= 0)
            {
                FS_GetFileSize(fd,&tmp_file_size);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_19,file_record->file_attr);
                if(tmp_file_size == file_size)
                {
                    if(file_record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE)
                    {
                        tcard_handle.file_hd[init_cntx->curr_index] = fd;
                        init_cntx->curr_index ++;
                        srv_tcard_async_callback(
                            SRV_TCARD_INIT,
                            MMI_TRUE,
                            NULL,
                            0,
                            init_cntx,
                            srv_tcard_file_init_int_callback);
                        
                    }
                    
                }
                else
                {
                    S32 ret;
					S32 delete_set;
                    FS_Close(fd);
                    delete_set = FS_Delete(ucs2_buff_org);
                    ret = srv_tcard_check_space_for_file(file_record , MMI_FALSE);
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_20,ret);
                    if(ret == FS_NO_ERROR)
                    {
                        fd = FS_Open(ucs2_buff_org,FS_CREATE_ALWAYS | FS_READ_WRITE);
                        if(fd >= 0)
                        {
                            srv_tcard_set_default_value_cntx_struct *cntx;
                            cntx = (srv_tcard_set_default_value_cntx_struct*)OslMalloc(sizeof(srv_tcard_set_default_value_cntx_struct));
                            cntx->file_hd = fd;
                            tcard_handle.file_hd[init_cntx->curr_index] = fd;
                            cntx->file_id = file_record->file_index;
                            srv_tcard_set_file_by_default(
                                    cntx,
                                    srv_tcard_file_init_int_callback,
                                    init_cntx);
                        }
                        else
                        {
                            tcard_handle.init_stat[file_record->app_index-1] = MMI_FALSE;
    						MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int10 app_index = fail,curr_index = %d",init_cntx->curr_index);
                            init_cntx->curr_index ++;
                            srv_tcard_async_callback(
                                SRV_TCARD_INIT,
                                MMI_TRUE,
                                NULL,
                                0,
                                init_cntx,
                                srv_tcard_file_init_int_callback);
                        }
                    }
                    else
                    {
                        tcard_handle.init_stat[file_record->app_index-1] = MMI_FALSE;
						MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int7 app_index = fail,curr_index = %d",init_cntx->curr_index);
                        init_cntx->curr_index ++;
                        srv_tcard_async_callback(
                            SRV_TCARD_INIT,
                            MMI_TRUE,
                            NULL,
                            0,
                            init_cntx,
                            srv_tcard_file_init_int_callback);
                    }
                    
                }
            }
            else/*the file exist but can not open*/
            {
                S32 ret;
                FS_Delete(ucs2_buff_org);
                ret = srv_tcard_check_space_for_file(file_record , MMI_FALSE);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_21,ret);
                if(ret == FS_NO_ERROR)
                {
                    fd = FS_Open(ucs2_buff_org,FS_CREATE_ALWAYS | FS_READ_WRITE);
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_22,ret);
                    if(fd >= 0)
                    {
                        srv_tcard_set_default_value_cntx_struct *cntx;
                        cntx = (srv_tcard_set_default_value_cntx_struct*)OslMalloc(sizeof(srv_tcard_set_default_value_cntx_struct));
                        cntx->file_hd = fd;
                        cntx->file_id = file_record->file_index;
                        srv_tcard_set_file_by_default(
                                cntx,
                                srv_tcard_file_init_int_callback,
                                init_cntx);
                    }
                    else
                    {
                        tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
    					MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int11 app_index = fail,curr_index = %d",init_cntx->curr_index);
                        init_cntx->curr_index ++;
                        srv_tcard_async_callback(
                            SRV_TCARD_INIT,
                            MMI_TRUE,
                            NULL,
                            0,
                            init_cntx,
                            srv_tcard_file_init_int_callback);
                    }
                }
                else
                {
                    tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
					MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int8 app_index = fail,curr_index = %d",init_cntx->curr_index);
                    init_cntx->curr_index ++;
                    srv_tcard_async_callback(
                        SRV_TCARD_INIT,
                        MMI_TRUE,
                        NULL,
                        0,
                        init_cntx,
                        srv_tcard_file_init_int_callback);
                }
            }
            
        }
        else/*the file is not exist*/
        {
            S32 ret;
            ret = srv_tcard_check_space_for_file(file_record, MMI_FALSE);
            /*if there is enough space, create the file, or false*/
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_23,ret);
            if(ret == FS_NO_ERROR)
            {   
                fd = FS_Open(ucs2_buff_org,FS_CREATE_ALWAYS | FS_READ_WRITE);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_GET_FILE_INIT_INT_24,fd);
                if(fd >= 0)
                {
                    srv_tcard_set_default_value_cntx_struct *cntx;
                    cntx = (srv_tcard_set_default_value_cntx_struct*)OslMalloc(sizeof(srv_tcard_set_default_value_cntx_struct));
                    tcard_handle.file_hd[init_cntx->curr_index] = fd;
                    cntx->file_hd = fd;
                    cntx->file_id = file_record->file_index;
                    srv_tcard_set_file_by_default(
                            cntx,
                            srv_tcard_file_init_int_callback,
                            init_cntx);
                }
                else
                {
                    tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
					MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int12 app_index = fail,curr_index = %d",init_cntx->curr_index);
                    init_cntx->curr_index ++;
                    srv_tcard_async_callback(
                        SRV_TCARD_INIT,
                        MMI_TRUE,
                        NULL,
                        0,
                        init_cntx,
                        srv_tcard_file_init_int_callback);
                }
            }
            else
            {
                tcard_handle.init_stat[file_record->app_index - 1] = MMI_FALSE;
				MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_file_init_int9 app_index = fail,curr_index = %d",init_cntx->curr_index);
                init_cntx->curr_index ++;
                srv_tcard_async_callback(
                    SRV_TCARD_INIT,
                    MMI_TRUE,
                    NULL,
                    0,
                    init_cntx,
                    srv_tcard_file_init_int_callback);
            }
        }   
    }

}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_checksum_compute_by_hd
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

TCARD_CHECKSUM srv_tcard_checksum_compute_by_hd(FS_HANDLE hd, U32 position)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    TCARD_CHECKSUM checksum = SRV_TCARD_CHECKSUM_START;
    srv_tcard_init_cnxt_struct *init_cntx;
    CHAR *file_path[SRV_TCARD_MAX_PATH_LEN];
    const WCHAR *ucs2_buff = NULL;
    S32 ret;
    S32 i;
    U32 read_size;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    FS_Seek(hd, position, FS_FILE_BEGIN);
    while (MMI_TRUE)
    {
        memset(cache_buff,0x00,SRV_TCARD_CACHE_LEN);
        ret = FS_Read(hd, cache_buff, SRV_TCARD_CACHE_LEN, &read_size);
        if (ret < FS_NO_ERROR || read_size == 0)
        {
            break;
        }

        for (i = 0; i < read_size; i++)
        {
            checksum = (TCARD_CHECKSUM) srv_tcard_checksum_fcs(checksum, cache_buff[i]);
        }
    }
    return checksum;
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_CHACKSUM_COMPUTE_BY_HD,checksum);
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_checksum_compute_by_buffer
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

TCARD_CHECKSUM srv_tcard_checksum_compute_by_buffer(const CHAR* buf, U32 len)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 i;
    TCARD_CHECKSUM checksum = SRV_TCARD_CHECKSUM_START;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (i = 0; i < len; ++i)
    {
        checksum = (TCARD_CHECKSUM)srv_tcard_checksum_fcs(checksum, buf[i]);
    }

    return checksum;
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_CHACKSUM_COMPUTE_BY_BUFFER,checksum);
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_init
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

void srv_tcard_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tcard_init_cnxt_struct *init_cntx;
    S32 i;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (i = 0; i < SRV_TCARD_APP_TOTAL; i++)
    {
        tcard_handle.init_stat[i] = MMI_TRUE;
    }
    if (srv_fmgr_drv_is_accessible((U8)SRV_FMGR_CARD_DRV))
    {   
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_INIT_1);
        init_cntx = (srv_tcard_init_cnxt_struct*)OslMalloc(sizeof(srv_tcard_init_cnxt_struct));
        init_cntx->total_num = SRV_TCARD_FILE_INDEX_TOTAL - 1;
        init_cntx->curr_index = 0;
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_INIT_2,init_cntx->total_num);
        if(init_cntx->total_num > 0)
        {
            FS_HANDLE file_handle;
            CHAR file_path[SRV_TCARD_MAX_PATH_LEN];
            WCHAR usc_dir[SRV_TCARD_MAX_PATH_LEN*2]; 
   
                sprintf(
            file_path, 
            "%c:%s", 
            (S8)SRV_FMGR_CARD_DRV, 
            SRV_TCARD_SERVICE_FOLDER_NAME);
            mmi_asc_to_ucs2((S8*)usc_dir, (S8*)file_path);
            file_handle = FS_Open((WCHAR*)usc_dir, FS_OPEN_DIR | FS_READ_ONLY);
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_INIT_3,file_handle);
            if(file_handle < 0)
            {
                file_handle = FS_CreateDir((const WCHAR*)usc_dir);
                if(file_handle >= 0)
                {
                    FS_Close(file_handle);
                    srv_tcard_file_init_int(init_cntx);
                }
                else
                {
                    srv_tcard_event_tcard_ready_struct ready_event_info;
                    tcard_handle.is_ready = MMI_FALSE;
                    ready_event_info.is_tcard_ready = MMI_FALSE;
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_INIT_4);
                    srv_tcard_emit_event(EVT_ID_SRV_TCARD_READY, &ready_event_info);
                }
            }
            else
            {
                FS_Close(file_handle);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_INIT_5);
                srv_tcard_file_init_int(init_cntx);
            }
            
        }
        else
        {
            OslMfree(init_cntx);
        
        
        }
    } 
    else
    {
        srv_tcard_event_tcard_ready_struct ready_event_info;
        tcard_handle.is_ready = MMI_FALSE;
        ready_event_info.is_tcard_ready = MMI_FALSE;
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_INIT_6);
        srv_tcard_emit_event(EVT_ID_SRV_TCARD_READY, &ready_event_info);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_deinit
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

void srv_tcard_deinit(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_tcard_event_tcard_ready_struct ready_event_info;
    tcard_handle.is_ready = MMI_FALSE;
    ready_event_info.is_tcard_ready = MMI_FALSE;
    //kal_promt_trace(MOD_MMI,"TCARD not ready");
//    MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"TCARD not ready");
    srv_tcard_emit_event(EVT_ID_SRV_TCARD_READY, &ready_event_info);
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_DEINIT);
    for(i = 0; i < SRV_TCARD_FILE_INDEX_TOTAL; i++)
    {
        if(tcard_handle.file_hd[i] != NULL)
        {
            FS_Close(tcard_handle.file_hd[i]);
			tcard_handle.file_hd[i] = -1;
        }
        
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_read_record_int
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

static void srv_tcard_read_record_int(
                srv_tcard_op_info_struct *read_info,
                SrvTcardCallbackFunc callback_func,
                void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    S32 ret;
    S32 result;
    U32 offset;
    U32 i;
    U32 max_num;
    TCARD_CHECKSUM checksum;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    FS_Seek( read_info->hd, read_info->offset, FS_FILE_BEGIN );
    ret = FS_Read( read_info->hd, cache_buff, read_info->size, &size);
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_INT_1,ret);
    if(ret >= 0)
    {
        if(read_info->size == size)
        {
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_INT_2,read_info->is_backup);
            if(read_info->is_backup)
            {
                memcpy(read_info->set_point,cache_buff,read_info->size);   
            }
            else
            {
                max_num = read_info->size/(read_info->record_size + sizeof(TCARD_CHECKSUM));
                for(i = 0; i < max_num; i++)
                {
                    offset = i*(read_info->record_size + sizeof(TCARD_CHECKSUM));
                    checksum = srv_tcard_checksum_compute_by_buffer(&cache_buff[offset]+sizeof(TCARD_CHECKSUM), read_info->record_size);
                    if(memcmp(&checksum, cache_buff, sizeof(TCARD_CHECKSUM)) == 0)
                    {
                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_RECORD_INT_3);
                        memcpy(&(read_info->set_point[i * read_info->record_size]),&cache_buff[offset]+sizeof(TCARD_CHECKSUM),read_info->record_size);
                    }
                    else
                    {
                        memcpy(&(read_info->set_point[i * read_info->record_size]),read_info->default_value,read_info->record_size);
                    }
                    
                }
                
            }
            memset(cache_buff,0,SRV_TCARD_CACHE_LEN);
            result = SRV_TCARD_OP_SUCC;            
            srv_tcard_async_callback(
                SRV_TCARD_READ,
                result,
                &size,
                sizeof(U32),
                user_data,
                callback_func);
        }
        else
        {
            result = SRV_TCARD_OP_INVALID_PARA;
            srv_tcard_async_callback(
                SRV_TCARD_READ,
                result,
                NULL,
                0,
                user_data,
                callback_func);
        }
    }
    else
    {
        result = SRV_TCARD_OP_INVALID_PARA;
        srv_tcard_async_callback(
            SRV_TCARD_READ,
            ret,
            NULL,
            0,
            user_data,
            callback_func);
    }
   // OslMfree(read_info);
    
}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_read_record_int_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

void srv_tcard_read_record_int_callback(srv_tcard_callback_struct *callback_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tcard_read_cntx_struct *read_cntx;
    srv_tcard_op_info_struct read_info;
    U32 size;
    S32 i;
    TCARD_CHECKSUM checksum;
    S32 result;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    read_cntx = (srv_tcard_read_cntx_struct*)callback_data->user_data;
    //read_info = (srv_tcard_op_info_struct*)OslMalloc(sizeof(srv_tcard_op_info_struct));
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_REACORD_INIT_CALLBACK_1,callback_data->result,read_cntx->remain_num);
    if(callback_data->result >= 0)
    {
        if(read_cntx->remain_num > 0)
        {
            if(read_cntx->is_backup)
            {      
                read_info.offset = (read_cntx->start_index + read_cntx->record_num - read_cntx->remain_num) * read_cntx->record_size + sizeof(TCARD_CHECKSUM); 
                read_info.is_backup = MMI_TRUE;
                if(read_cntx->remain_num < sizeof(cache_buff)/(read_cntx->record_size))
                {
                    read_info.set_point = read_cntx->next_ptr;
                    read_cntx->next_ptr = NULL;
                    read_info.size = read_cntx->record_size * read_cntx->remain_num;
                    read_cntx->remain_num = 0;
                }
                else
                {
                    read_cntx->remain_num = read_cntx->remain_num - sizeof(cache_buff)/(read_cntx->record_size);
                    read_info.size = sizeof(cache_buff)/(read_cntx->record_size)*(read_cntx->record_size);
                    //read_cntx->start_index += sizeof(cache_buff)/(read_cntx->record_size); 
                    read_info.set_point = read_cntx->next_ptr;
                    read_cntx->curr_ptr = read_cntx->next_ptr;
                    read_cntx->next_ptr = read_cntx->next_ptr + read_info.size;
                    
                }
                
            }
            else
            {
                read_info.is_backup = MMI_FALSE;
                read_info.offset = (read_cntx->start_index + read_cntx->record_num - read_cntx->remain_num) * (read_cntx->record_size + sizeof(TCARD_CHECKSUM)); 
                read_info.is_backup = MMI_FALSE;
                if(read_cntx->record_num < sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + read_cntx->record_size))
                {
                    read_info.set_point = read_cntx->next_ptr;
                    read_cntx->remain_num = 0;
                    read_cntx->next_ptr = NULL;
                    read_info.size = ((sizeof(TCARD_CHECKSUM) + read_cntx->record_size)) * read_cntx->record_num;
                }
                else
                {
                    read_info.set_point = read_cntx->next_ptr;
                    read_cntx->remain_num = read_cntx->record_num - sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + read_cntx->record_size);
                    read_info.size = sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + read_cntx->record_size)*(sizeof(TCARD_CHECKSUM) + read_cntx->record_size);
                    //read_cntx->start_index += sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM)+read_cntx->record_size); 
                    read_cntx->curr_ptr = read_cntx->next_ptr;
                    read_cntx->next_ptr = read_cntx->next_ptr + sizeof(cache_buff)/(sizeof(TCARD_CHECKSUM) + read_cntx->record_size)*(read_cntx->record_size);;
                    
                }
                
            }
            read_info.hd = read_cntx->hd;
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_REACORD_INIT_CALLBACK_2,read_cntx->hd);
            srv_tcard_read_record_int(
                        &read_info,
                        srv_tcard_read_record_int_callback,
                        read_cntx);
        }
        else
        {
            
            result = SRV_TCARD_OP_SUCC;
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_READ_REACORD_INIT_CALLBACK_3,result);
            if (read_cntx->is_backup)
            {
                FS_Close(read_cntx->hd);
            }
            srv_tcard_callback(
                SRV_TCARD_READ,
                result,
                NULL,
                0,
                read_cntx->user_data,
                read_cntx->callback_func);
            srv_tcard_free_cntx(read_cntx);
        }
    }
    else
    {
        result = callback_data->result;
        if (read_cntx->is_backup)
        {
            FS_Close(read_cntx->hd);
        }
        srv_tcard_callback(
                SRV_TCARD_READ,
                result,
                NULL,
                0,
                read_cntx->user_data,
                read_cntx->callback_func);
        srv_tcard_free_cntx(read_cntx);
    }
    
}


/*****************************************************************************
 * FUNCTION
 *  srv_tcard_write_record_int
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/

static void srv_tcard_write_record_int(
                srv_tcard_op_info_struct *write_info,
                SrvTcardCallbackFunc callback_func,
                void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    S32 i;
    S32 max_num;
    TCARD_CHECKSUM checksum;
    S32 result;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    FS_Seek(write_info->hd, write_info->offset, FS_FILE_BEGIN);
    memset(cache_buff, 0, sizeof(cache_buff));
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_1,write_info->is_backup);
    if(write_info->is_backup)
    {   
        srv_tcard_async_struct *async_cntx;
        memcpy(cache_buff, write_info->set_point,write_info->size);
        FS_Write(write_info->hd, cache_buff, write_info->size,&size);
        if(write_info->size == size)
        {
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_2);
            checksum = srv_tcard_checksum_compute_by_hd(write_info->hd, sizeof(TCARD_CHECKSUM));
            FS_Seek(write_info->hd, 0, FS_FILE_BEGIN);
            FS_Write(write_info->hd, &checksum, sizeof(TCARD_CHECKSUM),&size);
            if(sizeof(TCARD_CHECKSUM) == size)
            {
                result = MMI_TRUE;
                async_cntx = OslMalloc(sizeof(srv_tcard_async_struct));
                async_cntx->result = result;
                async_cntx->action = SRV_TCARD_WRITE;
                async_cntx->action_data = NULL;
                async_cntx->data_size = 0;
                async_cntx->user_data = user_data;
                async_cntx->callback_func = callback_func;
                StartTimerEx(SRV_TCARD_ASYNC_TIMER_ID, 0, srv_tcard_handle_asyc, async_cntx);
            #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
                return;

            }
            else
            {
                result = SRV_TCARD_OP_INVALID_CONTENT;
                async_cntx = OslMalloc(sizeof(srv_tcard_async_struct));
                async_cntx->result = result;
                async_cntx->action = SRV_TCARD_WRITE;
                async_cntx->action_data = NULL;
                async_cntx->data_size = 0;
                async_cntx->user_data = user_data;
                async_cntx->callback_func = callback_func;
                StartTimerEx(SRV_TCARD_ASYNC_TIMER_ID, 0, srv_tcard_handle_asyc, async_cntx);
            #if 0   
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #endif
                return;
            }
        }
        else
        {
            result = SRV_TCARD_OP_INVALID_CONTENT;
            async_cntx = OslMalloc(sizeof(srv_tcard_async_struct));
            async_cntx->result = result;
            async_cntx->action = SRV_TCARD_WRITE;
            async_cntx->action_data = NULL;
            async_cntx->data_size = 0;
            async_cntx->user_data = user_data;
            async_cntx->callback_func = callback_func;
            StartTimerEx(SRV_TCARD_ASYNC_TIMER_ID, 0, srv_tcard_handle_asyc, async_cntx);
        #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
        }
    }
    else
    {
        FS_HANDLE hd = -1;
        srv_tcard_file_name_info_struct name_info;
        WCHAR ucs2_buff[SRV_TCARD_MAX_PATH_LEN];
        srv_tcard_write_cntx_struct *temp_cntx = (srv_tcard_write_cntx_struct*)user_data;    

        max_num = write_info->size/write_info->record_size;
        for(i = 0; i < max_num; i++)
        {
            checksum = srv_tcard_checksum_compute_by_buffer(&(write_info->set_point[i * write_info->record_size]), write_info->record_size);
            memcpy(&(cache_buff[i * (write_info->record_size + sizeof(TCARD_CHECKSUM))]), &checksum,sizeof(TCARD_CHECKSUM));
            memcpy(&(cache_buff[i * (write_info->record_size + sizeof(TCARD_CHECKSUM)) + sizeof(TCARD_CHECKSUM)]), &(write_info->set_point[i * write_info->record_size]),write_info->record_size);
        }
        
        FS_Write(write_info->hd, cache_buff, write_info->size,&size);
        FS_Close(write_info->hd);
        name_info.app_index = (temp_cntx->record)->app_index;
        name_info.file_index = (temp_cntx->record)->file_index;
        name_info.is_backup = MMI_FALSE;
        srv_tcard_get_file_name(&name_info, ucs2_buff);
        hd = FS_Open((U16*)ucs2_buff, FS_READ_WRITE);
        temp_cntx->hd = hd;
        tcard_handle.file_hd[(temp_cntx->record)->file_index - 1] = hd;
        if(write_info->size == size)
        {
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_3);
            srv_tcard_async_callback(
                SRV_TCARD_WRITE,
                MMI_TRUE,
                NULL,
                0,
                user_data,
                callback_func);
        }
        else
        {
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_4);
            result = SRV_TCARD_OP_INVALID_CONTENT;
            srv_tcard_async_callback(
                SRV_TCARD_WRITE,
                result,
                NULL,
                0,
                user_data,
                callback_func);
        }
    }

}

/*****************************************************************************
 * FUNCTION
 *  srv_tcard_write_record_int_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/
static void srv_tcard_write_record_int_callback(srv_tcard_callback_struct *callback_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tcard_write_cntx_struct *write_cntx;
    srv_tcard_op_info_struct write_info;
    U32 size;
    S32 i;
    TCARD_CHECKSUM checksum;
    S32 result;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    write_cntx = (srv_tcard_write_cntx_struct*)callback_data->user_data;
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_CALLBACK_1,callback_data->result);
    
    if(callback_data->result >= 0)
    {
        if(write_cntx->remain_num > 0)
        {
            write_cntx->curr_ptr = write_cntx->next_ptr;
            if(write_cntx->is_backup & SRV_TCARD_ATTR_NEED_BACKUP)
            {
                write_info.offset = (write_cntx->start_index + write_cntx->record_num - write_cntx->remain_num) * write_cntx->record_num + sizeof(sizeof(TCARD_CHECKSUM));
                write_info.is_backup = MMI_TRUE;
               
                if(write_cntx->record_num <= sizeof(cache_buff)/write_cntx->record_size)
                {
                    write_cntx->remain_num= 0;
                    
                    write_cntx->next_ptr = NULL;
                    write_info.size = write_cntx->record_num * write_cntx->record_size;
                }
                else
                {
                    write_cntx->remain_num= write_cntx->record_num - sizeof(cache_buff)/write_cntx->record_size;
                    write_cntx->next_ptr = write_cntx->curr_ptr + sizeof(cache_buff)/write_cntx->record_size * write_cntx->record_size;
                    write_info.size = sizeof(cache_buff)/write_cntx->record_size * write_cntx->record_size;
                }
                
            }
            else
            {
                write_info.offset = (write_cntx->start_index + write_cntx->record_num - write_cntx->remain_num) * (write_cntx->record_size + sizeof(TCARD_CHECKSUM));
                if(write_cntx->record_num <= sizeof(cache_buff)/(write_cntx->record_size + sizeof(TCARD_CHECKSUM)) * (write_cntx->record_size + sizeof(TCARD_CHECKSUM)))
                {
                    write_cntx->remain_num = 0;
                    write_cntx->curr_ptr = write_cntx->next_ptr;
                    write_cntx->next_ptr = NULL;
                    write_info.size = write_cntx->record_num * (write_cntx->record_size + sizeof(TCARD_CHECKSUM));
                }
                else
                {
                    write_cntx->remain_num = write_cntx->record_num - sizeof(cache_buff)/write_cntx->record_size;
                    write_cntx->next_ptr = write_cntx->curr_ptr + sizeof(cache_buff)/write_cntx->record_size * write_cntx->record_size;
                    write_info.size = sizeof(cache_buff)/(write_cntx->record_size + sizeof(TCARD_CHECKSUM))* (write_cntx->record_size + sizeof(TCARD_CHECKSUM));
                }
               
            }
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_CALLBACK_2,write_cntx->is_backup,write_info.offset);
            write_info.set_point = write_cntx->curr_ptr;
            write_info.hd = write_cntx->hd;
            srv_tcard_write_record_int(
                        &write_info,
                        srv_tcard_write_record_int_callback,
                        write_cntx);
        }
        else
        {
            if(write_cntx->is_backup & SRV_TCARD_ATTR_NEED_BACKUP)
            {
                /*to update .bak file*/
                if(write_cntx->is_org)
                {
                    srv_tcard_file_name_info_struct name_info;
                    WCHAR ucs2_buff[SRV_TCARD_MAX_PATH_LEN];
                    FS_HANDLE hd;

                    
                    FS_Close(write_cntx->hd);
                    write_cntx->is_org = MMI_FALSE;
                    name_info.app_index = write_cntx->record->app_index;
                    name_info.file_index = write_cntx->record->file_index;
                    name_info.is_backup = MMI_TRUE;
                    srv_tcard_get_file_name(&name_info, ucs2_buff);
                    hd = FS_Open(ucs2_buff, FS_READ_WRITE);
                    memset(cache_buff,0,SRV_TCARD_CACHE_LEN);
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_CALLBACK_3,hd);
                    if(hd >= 0)
                    {
                        write_cntx->record_size = write_cntx->record_size;
                        write_cntx->record_num = write_cntx->record_num;
                        write_cntx->curr_ptr = write_cntx->action_buff;
                        write_cntx->is_backup = MMI_TRUE;
                        write_info.hd = hd;
                        write_cntx->hd = hd;

                        write_info.is_backup = MMI_TRUE;
                        write_cntx->is_backup = MMI_TRUE;
                        if(write_cntx->record_num <= sizeof(cache_buff)/write_cntx->record_size)
                        {
                            write_cntx->remain_num= 0;
                            write_cntx->next_ptr = NULL;
                            write_info.size = write_cntx->record_num * write_cntx->record_size;
                        }
                        else
                        {
                            write_cntx->remain_num = write_cntx->record_num - sizeof(cache_buff)/write_cntx->record_size;
                            write_cntx->next_ptr = write_cntx->curr_ptr + sizeof(cache_buff)/write_cntx->record_size * write_cntx->record_size;
                            write_info.size = sizeof(cache_buff)/write_cntx->record_size * write_cntx->record_size;
                        }
                        write_info.offset = write_cntx->start_index * (write_cntx->record_size) + sizeof(TCARD_CHECKSUM);

                        
                        write_info.set_point = write_cntx->curr_ptr;
                        write_info.record_size = write_cntx->record_size;
                        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_WRITE_REACORD_INT_CALLBACK_4,write_info.offset);
                        srv_tcard_write_record_int(
                                &write_info,
                        srv_tcard_write_record_int_callback,
                        write_cntx);
                    }
                }
                else
                {
                    result = MMI_TRUE;
                    FS_Close(write_cntx->hd);
                    srv_tcard_async_callback(
                        SRV_TCARD_WRITE,
                        result,
                        NULL,
                        0,
                        write_cntx->user_data,
                        write_cntx->callback_func);
                    srv_tcard_free_cntx(write_cntx);
                }
                
            }
        else
        {
                result = MMI_TRUE;
            srv_tcard_async_callback(
                SRV_TCARD_WRITE,
                result,
                NULL,
                0,
                write_cntx->user_data,
                write_cntx->callback_func);
                srv_tcard_free_cntx(write_cntx);
            }
            
        }
    }
    else
    {
        if (write_cntx->hd >= 0 && write_cntx->is_backup)
        {
            FS_Close(write_cntx->hd);
        }
        srv_tcard_async_callback(
            SRV_TCARD_WRITE,
            callback_data->result,
            NULL,
            0,
            write_cntx->user_data,
            write_cntx->callback_func);
        srv_tcard_free_cntx(write_cntx);
            
    }
}


static void srv_tcard_reset_file(                
                srv_tcard_reset_file_cntx_struct *reset_cntx,
                SrvTcardCallbackFunc callback_func,
                void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 size;
    S32 i;
    S32 offset;
    U16 set_num;
    TCARD_CHECKSUM checksum;
    S32 result;
    srv_tcard_file_entry_struct *record;
    srv_tcard_app_index_enum app_index;
    srv_tcard_file_index_enum file_index;
    FS_HANDLE file_hd;
    srv_tcard_op_struct *write_cntx;
    CHAR checksum_buff[2]= {0, 0};
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    record = reset_cntx->record;
    file_hd = reset_cntx->file_hd;
    reset_cntx->user_data = user_data;
    reset_cntx->callback_func = callback_func;
    memset(cache_buff, 0xff, SRV_TCARD_CACHE_LEN);
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_1,record->file_attr,reset_cntx->remain_num);
    if(record->file_attr & SRV_TCARD_ATTR_NEED_BACKUP)
    {
        if(reset_cntx->remain_num * record->record_size > SRV_TCARD_CACHE_LEN)
        {
            set_num = SRV_TCARD_CACHE_LEN/record->record_size;
            for(i = 0; i < set_num; i++)
            {
                memcpy(cache_buff + record->record_size * i,record->default_value,record->record_size);
            }
        
        }
        else
        {
            set_num = reset_cntx->remain_num;
            for(i = 0; i < reset_cntx->remain_num; i++)
            {
                memcpy(cache_buff + record->record_size * i, record->default_value,record->record_size);
            }
            
        }
        //add the checksum first, it only a false check sum, it should be revise in the end of callback
        if (reset_cntx->remain_num == record->record_number)
        {
            FS_Seek(file_hd, 0, FS_FILE_BEGIN);
            FS_Write(file_hd, checksum_buff, sizeof(checksum_buff),&size);
        }
        offset = sizeof(TCARD_CHECKSUM) + (record->record_number - reset_cntx->remain_num) * record->record_size;
        FS_Seek(file_hd, offset, FS_FILE_BEGIN);
        FS_Write(file_hd, cache_buff, set_num * record->record_size,&size);
        if(reset_cntx->remain_num * record->record_size > SRV_TCARD_CACHE_LEN)
        {
            reset_cntx->remain_num = reset_cntx->remain_num - SRV_TCARD_CACHE_LEN/record->record_size;
        }
        else
        {
            reset_cntx->remain_num = 0;
        }

        if(size == set_num * record->record_size)
        {
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_2);
            result = SRV_TCARD_OP_SUCC;
            srv_tcard_async_callback(
                SRV_TCARD_INIT,
                result,
                NULL,
                0,
                reset_cntx,
                srv_tcard_reset_file_callback);
        }
        else
        {
            result = SRV_TCARD_OP_INVALID_CONTENT;
            srv_tcard_async_callback(
                SRV_TCARD_INIT,
                result,
                NULL,
                0,
                reset_cntx,
                srv_tcard_reset_file_callback);
        }
    }
    else
    {
        checksum = srv_tcard_checksum_compute_by_buffer(record->default_value, record->record_size);
        if(reset_cntx->remain_num  * (record->record_size + sizeof(TCARD_CHECKSUM))> SRV_TCARD_CACHE_LEN)
        {
            set_num = SRV_TCARD_CACHE_LEN/(record->record_size + sizeof(TCARD_CHECKSUM));
            for(i = 0; i < set_num; i++)
            {
                memcpy(cache_buff + (sizeof(TCARD_CHECKSUM) + record->record_size)*i, &checksum, sizeof(TCARD_CHECKSUM));
                memcpy(cache_buff + (sizeof(TCARD_CHECKSUM) + record->record_size)*i + sizeof(TCARD_CHECKSUM),record->default_value,record->record_size);
            }
            reset_cntx->remain_num = reset_cntx->remain_num - set_num;
        }
        else
        {
            set_num = reset_cntx->remain_num;
            for(i = 0; i < set_num; i++)
            {
                memcpy(cache_buff + (sizeof(TCARD_CHECKSUM) + record->record_size)*i, &checksum, sizeof(TCARD_CHECKSUM));
                memcpy(cache_buff + (sizeof(TCARD_CHECKSUM) + record->record_size)*i + sizeof(TCARD_CHECKSUM),record->default_value,record->record_size);
            }
            reset_cntx->remain_num = 0;
            
        }
        offset =(record->record_number - reset_cntx->remain_num) * (sizeof(TCARD_CHECKSUM) + record->record_size) - set_num * (sizeof(TCARD_CHECKSUM) + record->record_size);

        FS_Seek(file_hd, offset, FS_FILE_BEGIN);
        FS_Write(file_hd, cache_buff, set_num * (sizeof(TCARD_CHECKSUM) + record->record_size), &size);
        if(size == set_num * (sizeof(TCARD_CHECKSUM) + record->record_size))
        {
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_3,file_hd,offset);
            result = SRV_TCARD_OP_SUCC;
            srv_tcard_async_callback(
                SRV_TCARD_INIT,
                result,
                NULL,
                0,
                reset_cntx,
                srv_tcard_reset_file_callback);
        }
        else
        {
            result = SRV_TCARD_OP_INVALID_CONTENT;
            srv_tcard_async_callback(
                SRV_TCARD_INIT,
                result,
                NULL,
                0,
                reset_cntx,
                srv_tcard_reset_file_callback);
        }
        
    }

}




static void srv_tcard_reset_file_callback(srv_tcard_callback_struct *callback_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 result;
    srv_tcard_reset_file_cntx_struct *reset_cntx;
    srv_tcard_file_entry_struct *record;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    reset_cntx = (srv_tcard_reset_file_cntx_struct*)callback_data->user_data;
    record = reset_cntx->record;
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_CALLBACK_1,callback_data->result,reset_cntx->remain_num );
    if(callback_data->result == SRV_TCARD_OP_SUCC)
    {
        if(reset_cntx->remain_num > 0)
        {
            srv_tcard_reset_file(
                reset_cntx,
                reset_cntx->callback_func,
                reset_cntx->user_data);
        }
        else
        {
        #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #endif
                srv_tcard_callback(
                    SRV_TCARD_INIT,
                    MMI_TRUE,
                    NULL,
                    0,
                    reset_cntx->user_data,
                    reset_cntx->callback_func);
                OslMfree(reset_cntx);
        #if 0
/* under construction !*/
        #endif
        }
    }
    else
    {
        FS_Close(reset_cntx->file_hd);
        srv_tcard_callback(
            SRV_TCARD_INIT,
            MMI_TRUE,
            NULL,
            0,
            reset_cntx->user_data,
            reset_cntx->callback_func);
    }
      
}

static void srv_tcard_set_file_by_default(
                    srv_tcard_set_default_value_cntx_struct* cntx,
                    SrvTcardCallbackFunc callback_func,
                    void *user_data)
{
    srv_tcard_reset_file_cntx_struct *reset_cntx;
    srv_tcard_file_entry_struct *record;

    record = &tcard_file_mgr_common_table[cntx->file_id - 1];
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_DEFAULT_1,cntx->file_id);
    reset_cntx = (srv_tcard_reset_file_cntx_struct*)OslMalloc(sizeof(srv_tcard_reset_file_cntx_struct));
    reset_cntx->file_hd = cntx->file_hd;
    reset_cntx->remain_num = record->record_number;
    reset_cntx->record = record;
    cntx->user_data = user_data;
    cntx->callback_func = callback_func;
    srv_tcard_reset_file(
        reset_cntx,
        srv_tcard_set_file_by_default_callback,
        cntx);  
}



static void srv_tcard_set_file_by_default_callback(srv_tcard_callback_struct *callback_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 result = MMI_TRUE;
    srv_tcard_set_default_value_cntx_struct* cntx;
    srv_tcard_file_entry_struct *record;
    srv_tcard_app_index_enum app_id;
    srv_tcard_init_cnxt_struct *init_cntx;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    cntx = (srv_tcard_set_default_value_cntx_struct*)callback_data->user_data;
    result = callback_data->result;
    record = &tcard_file_mgr_common_table[cntx->file_id - 1];
    
    app_id = record->app_index;
    init_cntx = (srv_tcard_init_cnxt_struct*)cntx->user_data;
    init_cntx->curr_index++;
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_DEFAULT_CALLBACKUP_1,result,cntx->file_id);
    if (!result)
    {
        tcard_handle.init_stat[app_id - 1] = MMI_FALSE;
		MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_set_file_by_default_callback1 app_index = fail,curr_index = %d",app_id);
    }
    else
    {
        MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_DEFAULT_CALLBACKUP_2,record->file_attr);
        if (record->file_attr & SRV_TCARD_ATTR_NEED_BACKUP)
        {
            srv_tcard_file_name_info_struct name_info;
            WCHAR ucs2_buff_org[SRV_TCARD_MAX_PATH_LEN];
            WCHAR ucs2_buff_backup[SRV_TCARD_MAX_PATH_LEN];
            U32 position;
            TCARD_CHECKSUM checksum;
            U32 write_size;
            FS_HANDLE fd = -1;

            
            name_info.app_index = record->app_index;
            name_info.file_index = record->file_index;
            name_info.is_backup = MMI_FALSE;
            srv_tcard_get_file_name(&name_info, ucs2_buff_org);
            name_info.is_backup = MMI_TRUE;
            srv_tcard_get_file_name(&name_info, ucs2_buff_backup);
            fd = FS_Open(ucs2_buff_backup, FS_CREATE_ALWAYS | FS_READ_WRITE);
            position = sizeof(TCARD_CHECKSUM);
            checksum = srv_tcard_checksum_compute_by_hd(cntx->file_hd, position);
            MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_DEFAULT_CALLBACKUP_3,fd,position,app_id);
            if (fd >= 0)
            {
                //add the right checksum
                FS_Seek(cntx->file_hd, 0, FS_FILE_BEGIN);
                result = FS_Write(cntx->file_hd, &checksum, sizeof(TCARD_CHECKSUM), &write_size);
				FS_Close(fd);
                FS_Close(cntx->file_hd);
                MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_DEFAULT_CALLBACKUP_4,result);
                if(result >= 0)
                {
                    
                    result = FS_Move(ucs2_buff_org, ucs2_buff_backup, FS_MOVE_COPY | FS_MOVE_OVERWRITE, NULL, NULL, 0);
                    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_RESET_FILE_DEFAULT_CALLBACKUP_5,result);
                    if(result < 0)
                    {
                        tcard_handle.init_stat[app_id -1] = MMI_FALSE;
						MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_set_file_by_default_callback2 app_index = fail,curr_index = %d",app_id);
                    }
                }
                else
                {
					MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_set_file_by_default_callback3 app_index = fail,curr_index = %d",app_id);
                    tcard_handle.init_stat[app_id - 1] = MMI_FALSE;
                }
                
                
            }
            else
            {
                MMI_PRINT(MOD_MMI_COMMON_APP, MMI_COMMON_TRC_G4_PHB,"srv_tcard_set_file_by_default_callback4 app_index = fail,curr_index = %d",app_id);
                tcard_handle.init_stat[app_id - 1] = MMI_FALSE;
            }
        }
    }
    if(!(record->file_attr & SRV_TCARD_ATTR_NEED_FAST_ACCE))
    {
        //FS_Close(cntx->file_hd);
    }
    srv_tcard_callback(
        SRV_TCARD_INIT,
        result,
        NULL,
        NULL,
        cntx->user_data,
        cntx->callback_func);
    OslMfree(cntx);
}

mmi_ret srv_tcard_usb_evt_proc(mmi_event_struct *evt)
{
#ifdef __MMI_USB_SUPPORT__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G6_MSG, TRC_SRV_TCARD_USB_EVT_PROC,evt->evt_id);
    switch (evt->evt_id)
    {
        case EVT_ID_USB_ENTER_MS_MODE:
        {
            
            srv_tcard_deinit() ;
            break;
        }

        case EVT_ID_USB_EXIT_MS_MODE:
        {
            
            StartTimer(SRV_TCARD_START_INIT_FOR_USB_IN_TIMER_ID, SRV_TCARD_START_INIT_FOR_USB_IN_TIME, srv_tcard_init);
            break;
        }

        default:
            return MMI_RET_OK;
    }
    
#endif /* (defined(__MMI_USB_SUPPORT__)) */

    return MMI_RET_OK;
}



mmi_ret srv_tcard_format_evt_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_tcard_deinit();
    
    srv_tcard_init();

    return MMI_RET_OK;
}


#endif /* __SRV_TCARD_DATA_STORE__*/

