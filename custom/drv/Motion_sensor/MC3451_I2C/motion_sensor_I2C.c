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
 *   Capacitive_TP_ITE_7250AFN.c
 *
 *
 * Description:
 * ------------
 *   Capacitive Touch Panel I2C read/write Driver
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************/
#ifdef __CUST_NEW__
#include "kal_release.h"
#include "dcl.h"
#include "motion_sensor_I2C.h"
#include "us_timer.h"               /* For ust_get_current_time() API*/

kal_bool ms_i2c_configure_done = KAL_FALSE;
	
extern const char gpio_ms_i2c_data_pin;
extern const char gpio_ms_i2c_clk_pin;
extern kal_uint32 MS_DELAY_TIME;

DCL_HANDLE ms_i2c_handle;
DCL_HANDLE ms_pmu_handle;

#define MS_I2C_DELAY \
{\
	volatile int count=0;\
	for(;count<MS_DELAY_TIME;count++);\
	for(;count<MS_DELAY_TIME;count++);\
	for(;count<MS_DELAY_TIME;count++);\
}

void ms_i2c_udelay(kal_uint32 delay)
{
	kal_uint32 ust = 0; //ust_get_current_time
	kal_uint32 count = 0;
	kal_uint32 break_count = 0;
	
	ust = ust_get_current_time();
	do{
		if(ust_get_current_time() != ust)
			count++;
		else
			break_count++;
	}while((count < delay) && (break_count < 0xFFFFFF));
}

void ms_i2c_configure(kal_uint32 slave_addr, kal_uint32 speed)
{
	DCL_HANDLE sda_handle, scl_handle;
	I2C_CONFIG_T cfg;
	
	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{
		if(!ms_i2c_configure_done)
		{
			ms_i2c_handle = DclSI2C_Open(DCL_I2C, DCL_I2C_OWNER_MS);
		}
		cfg.eOwner = DCL_I2C_OWNER_MS;
		cfg.fgGetHandleWait = KAL_TRUE;
		cfg.u1SlaveAddress = slave_addr;
		cfg.u1DelayLen = 0;
		cfg.eTransactionMode = DCL_I2C_TRANSACTION_FAST_MODE;
		cfg.u4FastModeSpeed = speed;
		cfg.u4HSModeSpeed = 0;
		cfg.fgEnableDMA = KAL_FALSE;
  	
		DclSI2C_Configure(ms_i2c_handle, (DCL_CONFIGURE_T *)&cfg);
	}
	else
	{
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
	}
	
	
	ms_i2c_configure_done = KAL_TRUE;
}

void ms_i2c_power_on(kal_bool ON, kal_uint32 ldo, kal_uint32 ldo_volt)
{
	PMU_CTRL_LDO_BUCK_SET_VOLTAGE_EN pmu_ldo_voltage_en;
	PMU_CTRL_LDO_BUCK_SET_EN pmu_ldo_en;
		
	if (ms_pmu_handle==DCL_HANDLE_NONE)
		ms_pmu_handle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
	
	if( ON && (ldo_volt != 0) )
	{
		pmu_ldo_voltage_en.mod = (PMU_LDO_BUCK_LIST_ENUM)ldo;
		pmu_ldo_voltage_en.voltage = (PMU_VOLTAGE_ENUM)ldo_volt;
		DclPMU_Control(ms_pmu_handle, LDO_BUCK_SET_VOLTAGE_EN,(DCL_CTRL_DATA_T *)& pmu_ldo_voltage_en);
	}
	else if( ON && (ldo_volt == 0) )
	{
		pmu_ldo_en.mod = (PMU_LDO_BUCK_LIST_ENUM)ldo;
		pmu_ldo_en.enable = KAL_TRUE;
		DclPMU_Control(ms_pmu_handle, LDO_BUCK_SET_EN,(DCL_CTRL_DATA_T *)&pmu_ldo_en);
	}
	else
	{
		pmu_ldo_en.mod = (PMU_LDO_BUCK_LIST_ENUM)ldo;
		pmu_ldo_en.enable = KAL_FALSE;
		DclPMU_Control(ms_pmu_handle, LDO_BUCK_SET_EN,(DCL_CTRL_DATA_T *)&pmu_ldo_en);
	}
}

// Start bit of I2C waveform
void ms_i2c_start(void)
{
	DCL_HANDLE sda_handle, scl_handle;
	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{

	}
	else
	{	
	#if 1
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_clk_pin);
		
		//DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		//DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		//DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);		
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
	
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
	
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;
	#else
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);		
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
	
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
	
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;
	#endif
	
	}
}

// Stop bit of I2C waveform
void ms_i2c_stop(void)
{
	DCL_HANDLE sda_handle, scl_handle;
	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{

	}
	else
	{		
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
	
		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;


		MS_I2C_DELAY;
		MS_I2C_DELAY;
		MS_I2C_DELAY;
		MS_I2C_DELAY;
		MS_I2C_DELAY;
		MS_I2C_DELAY;
		
	}
}

// Send one byte from host to client
kal_bool ms_i2c_send_byte(kal_uint8 ucData)
{
	//kal_bool bRet;
	int i;
	kal_bool ret;
	kal_uint8 ucMask;
	DCL_STATUS status = STATUS_INVALID_OPERATION;
	GPIO_CTRL_READ_T sda_read;
	I2C_CTRL_CONT_WRITE_T write;
	DCL_HANDLE sda_handle, scl_handle;
	sda_read.u1IOData = GPIO_IO_HIGH;

	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{
		if(ms_i2c_configure_done)
		{
			write.pu1Data = &ucData;
			write.u4DataLen = 1;
			write.u4TransferNum = 1;
			status = DclSI2C_Control(ms_i2c_handle, I2C_CMD_CONT_WRITE, (DCL_CTRL_DATA_T *)&write);
		}
		ret = (status == STATUS_OK)?KAL_TRUE:KAL_FALSE;
	}
	else
	{
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		for(i = 0, ucMask = 0x80; i < 8; i++, ucMask >>= 1)
		{
			if(ucData & ucMask)
				DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
			else
				DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
			MS_I2C_DELAY;
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
			MS_I2C_DELAY;
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
			MS_I2C_DELAY;
		}
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_IN, NULL);

		//ms_i2c_udelay(150);		//add by_tyw
		for(i = 0; i < 20; i++)
		{
			MS_I2C_DELAY;		// 7 us
		}



		DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
		
		DclGPIO_Control(sda_handle, GPIO_CMD_READ, (DCL_CTRL_DATA_T *)&sda_read);
		
//		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
//		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;

		
		for(i = 0; i < 15; i++)
		{
			MS_I2C_DELAY;
		}
	
		ret = (sda_read.u1IOData == GPIO_IO_HIGH)?KAL_TRUE:KAL_FALSE;
	}
	return ret;
}

// Receive one byte form client to host 
kal_uint8 ms_i2c_receive_byte(kal_bool bAck)
{
	kal_uint8 ucRet = 0;
	int i;
	I2C_CTRL_CONT_READ_T read;
	GPIO_CTRL_READ_T sda_read;
	DCL_STATUS status;
	DCL_HANDLE sda_handle, scl_handle;
	
	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{
		if(ms_i2c_configure_done)
		{
			read.pu1Data = &ucRet;
			read.u4DataLen = 1;
			read.u4TransferNum = 1;
			status = DclSI2C_Control(ms_i2c_handle, I2C_CMD_CONT_READ, (DCL_CTRL_DATA_T *)&read);
			if(status != STATUS_OK)
				return 0;
		}
	}
	else
	{
		sda_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_data_pin);
		scl_handle = DclGPIO_Open(DCL_GPIO, gpio_ms_i2c_clk_pin);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_MODE_0, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_MODE_0, NULL);
		
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_IN, NULL);
		DclGPIO_Control(scl_handle, GPIO_CMD_SET_DIR_OUT, NULL);
		
		for(i = 7; i >= 0; i--)
		{

	
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
			MS_I2C_DELAY;

			DclGPIO_Control(sda_handle, GPIO_CMD_READ, (DCL_CTRL_DATA_T *)&sda_read);
			ucRet |= sda_read.u1IOData << i;
			
			DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
			MS_I2C_DELAY;
		}
	
		DclGPIO_Control(sda_handle, GPIO_CMD_SET_DIR_OUT, NULL);

		//ms_i2c_udelay(150);		//add by_tyw
		for(i = 0; i < 30; i++)
		{
			MS_I2C_DELAY;
		}
		

		if(bAck)
			DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_HIGH, NULL);
		else
			DclGPIO_Control(sda_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;
	
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_HIGH, NULL);
		MS_I2C_DELAY;
		DclGPIO_Control(scl_handle, GPIO_CMD_WRITE_LOW, NULL);
		MS_I2C_DELAY;

		for(i = 0; i < 30; i++)
		{
			MS_I2C_DELAY;
		}


	}
	return ucRet;
}

// I2C send data fuction
kal_bool ms_i2c_send(kal_uint8 ucDeviceAddr, kal_uint8 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	kal_uint8 write_buf[9];
	kal_bool bRet = KAL_TRUE;
	I2C_CTRL_CONT_WRITE_T write;
	DCL_STATUS status;

	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{
		if(ms_i2c_configure_done)
		{
			write_buf[0] = ucBufferIndex;
			for(i=0;i<unDataLength;i++)
			{
				write_buf[i+1] = *(pucData+i);
			}
			write.pu1Data = write_buf;
			write.u4DataLen = unDataLength+1;
			write.u4TransferNum = 1;
			status = DclSI2C_Control(ms_i2c_handle, I2C_CMD_CONT_WRITE, (DCL_CTRL_DATA_T *)&write);
			if(status != STATUS_OK)
				return KAL_FALSE;
		}
	}
	else
	{
		ms_i2c_start();
	
		if(ms_i2c_send_byte(ucDeviceAddr & 0xFE) == MS_I2C_ACK) ///   MS_I2C_ACK  = 0
		{
			if(ms_i2c_send_byte(ucBufferIndex) == MS_I2C_ACK)
			{
				for(i = 0; i < unDataLength; i++)
				{
					if(ms_i2c_send_byte(pucData[i]) == MS_I2C_NAK)   //   MS_I2C_NAK  = 1
					{
						bRet = KAL_FALSE;
						break;
					}
				}
			}
			else
			{
				bRet = KAL_FALSE;
			}
		}
		else
		{
			bRet = KAL_FALSE;
		}
		ms_i2c_stop();
	}
	return bRet;
}

kal_bool ms_i2c_send_ext(kal_uint8 ucDeviceAddr, kal_uint16 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	kal_uint8 write_buf[10];
	kal_bool bRet = KAL_TRUE;
	I2C_CTRL_CONT_WRITE_T write;
	DCL_STATUS status;
	kal_uint8 addr_h = ( ucBufferIndex >> 8 )& 0xFF;
	kal_uint8 addr_l = ucBufferIndex&0xFF;
	kal_uint32 offset = 0;
	kal_uint8  pkt_len;

	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{
		if(ms_i2c_configure_done)
		{
			while ( offset <= unDataLength )
			{
				write_buf[0] = ((ucBufferIndex + offset)>>8)&0xFF;
				write_buf[1] = (ucBufferIndex + offset)&0xFF;
          			if ( unDataLength - offset > 6 )
				{
					pkt_len = 6;
				}
				else
				{
					pkt_len = unDataLength - offset;
				}
				memcpy( &write_buf[2], &pucData[offset], pkt_len );
				offset += pkt_len;
				write.pu1Data = write_buf;
				write.u4DataLen = pkt_len+2;
				write.u4TransferNum = 1;
				status = DclSI2C_Control(ms_i2c_handle, I2C_CMD_CONT_WRITE, (DCL_CTRL_DATA_T *)&write);
				if(status != STATUS_OK)
					return KAL_FALSE;
					
				if ( offset == unDataLength )
					break;					
			}
		}
	}
	else
	{
		ms_i2c_start();
	
		if(ms_i2c_send_byte(ucDeviceAddr & 0xFE) == MS_I2C_ACK)
		{
			if ( (ms_i2c_send_byte(addr_h) == MS_I2C_ACK) &&
				(ms_i2c_send_byte(addr_l) == MS_I2C_ACK) )
			{
				for(i = 0; i < unDataLength; i++)
				{
					if(ms_i2c_send_byte(pucData[i]) == MS_I2C_NAK)
					{
						bRet = KAL_FALSE;
						break;
					}
				}
			}
			else
			{
				bRet = KAL_FALSE;
			}
		}
		else
		{
			bRet = KAL_FALSE;
		}
		ms_i2c_stop();
	}
	return bRet;
}

// I2C receive data function
kal_bool ms_i2c_receive(kal_uint8 ucDeviceAddr, kal_uint8 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	kal_bool bRet = KAL_TRUE;
	I2C_CTRL_WRITE_AND_READE_T write_read;
	DCL_STATUS status;

	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{
		if(ms_i2c_configure_done)
		{
			write_read.pu1InData = pucData;
			write_read.u4InDataLen = unDataLength;
			write_read.pu1OutData = &ucBufferIndex;			
			write_read.u4OutDataLen = 1;
			status = DclSI2C_Control(ms_i2c_handle, I2C_CMD_WRITE_AND_READ, (DCL_CTRL_DATA_T *)&write_read);
			if(status != STATUS_OK)
				return KAL_FALSE;
		}
	}
	else
	{
		ms_i2c_start();
  	
		if(ms_i2c_send_byte(ucDeviceAddr & 0xFE) == MS_I2C_ACK)
		{
			if(ms_i2c_send_byte(ucBufferIndex) == MS_I2C_ACK)
			{
				ms_i2c_start();
  	
				if(ms_i2c_send_byte(ucDeviceAddr | 0x01) == MS_I2C_ACK)
				{
					for(i = 0; i < unDataLength - 1; i++)
					{
						pucData[i] = ms_i2c_receive_byte((kal_bool)MS_I2C_ACK);
					}
					pucData[unDataLength - 1] = ms_i2c_receive_byte((kal_bool)MS_I2C_NAK);
				}
				else
				{
					bRet = KAL_FALSE;
				}
			}
			else
			{
				bRet = KAL_FALSE;
			}
		}
		else
		{
			bRet = KAL_FALSE;
			kal_prompt_trace(MOD_CC,"I2C tranfer  fail NACK ");
		}
		ms_i2c_stop();
	}
	return bRet;
}

// I2C receive data function
kal_bool ms_i2c_receive_ext(kal_uint8 ucDeviceAddr, kal_uint16 ucBufferIndex, kal_uint8* pucData, kal_uint32 unDataLength)
{
	kal_uint32 i;
	kal_bool bRet = KAL_TRUE;
	I2C_CTRL_WRITE_AND_READE_T write_read;
	kal_uint8 write_buf[2];
	kal_uint16 reg_addr = ucBufferIndex;
	kal_uint32 offset = 0;
	kal_uint8  pkt_len;
	kal_uint8 addr_h = ( ucBufferIndex >> 8 )& 0xFF;
	kal_uint8 addr_l = ucBufferIndex&0xFF;

	if(gpio_ms_i2c_data_pin == 0xFF) // HW I2C
	{
		if(ms_i2c_configure_done)
		{
			while ( offset < unDataLength )
			{
				write_buf[0] = ( reg_addr >> 8 )& 0xFF;
				write_buf[1] = reg_addr&0xFF;
				if ( unDataLength - offset > 8 )
				{
					pkt_len = 8;
				}
				else
				{
					pkt_len = unDataLength - offset;
				}
				write_read.pu1InData = pucData + offset;
				write_read.u4InDataLen = pkt_len;
				write_read.pu1OutData = write_buf;			
				write_read.u4OutDataLen = 2;
				DclSI2C_Control(ms_i2c_handle, I2C_CMD_WRITE_AND_READ, (DCL_CTRL_DATA_T *)&write_read);
				offset += pkt_len;
				reg_addr = ucBufferIndex + offset;
			}
		}
	}
	else
	{
		ms_i2c_start();
  	
		if(ms_i2c_send_byte(ucDeviceAddr & 0xFE) == MS_I2C_ACK)
		{
			if ( (ms_i2c_send_byte(addr_h) == MS_I2C_ACK) &&
				(ms_i2c_send_byte(addr_l) == MS_I2C_ACK) )
			{
				ms_i2c_start();
  	
				if(ms_i2c_send_byte(ucDeviceAddr | 0x01) == MS_I2C_ACK)
				{
					for(i = 0; i < unDataLength - 1; i++)
					{
						pucData[i] = ms_i2c_receive_byte((kal_bool)MS_I2C_ACK);
					}
					pucData[unDataLength - 1] = ms_i2c_receive_byte((kal_bool)MS_I2C_NAK);
				}
				else
				{
					bRet = KAL_FALSE;
				}
			}
			else
			{
				bRet = KAL_FALSE;
			}
		}
		else
		{
			bRet = KAL_FALSE;
		}
		ms_i2c_stop();
	}
	return bRet;
}

#endif //#ifdef __CUST_NEW__
