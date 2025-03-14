/*
 * Generated by MTK DrvGen Version 10.01.0 for MT6260NP. Copyright MediaTek Inc. (C) 2012.
 * Wed Dec 02 16:34:00 2020
 * Do Not Modify the File.
 */

#ifdef __CUST_NEW__
#include "kal_release.h"
#include "gpio_drv.h"
#include "custom_em.h"
#include "custom_equipment.h"


const kal_uint8 GPIO_LABELID_MAX = 24;
kal_uint8 EmGpioIdxMenu2Tbl[24];
const unsigned char netname[][MAX_NETNAME_TEXT] = {
"I2S_CLK",
"CAM_SCL",
"CAM_SDA",
"KCOL4",
"KCOL3",
"KCOL2",
"KCOL1",
"KCOL0",
"KROW4",
"KROW3",
"KROW2",
"KROW1",
"KROW0",
"WIFI_RST",
"ATV_POWER_EN",
"I2S_WS",
"ATV_RST",
"WIFI_32K",
"SPK_EN",
"LCD_TE",
"CAM_PDN",
"CAM_MCLK",
"CAM_RST",
"I2S_DATA",
};
GPIO_MAP_ENTRY gpio_map_tbl[] = {
{GPIO_VALID, GPIO_PORT_0, netname[0], NULL},
{GPIO_VALID, GPIO_PORT_1, netname[1], NULL},
{GPIO_VALID, GPIO_PORT_2, netname[2], NULL},
{GPIO_VALID, GPIO_PORT_5, netname[3], NULL},
{GPIO_VALID, GPIO_PORT_6, netname[4], NULL},
{GPIO_VALID, GPIO_PORT_7, netname[5], NULL},
{GPIO_VALID, GPIO_PORT_8, netname[6], NULL},
{GPIO_VALID, GPIO_PORT_9, netname[7], NULL},
{GPIO_VALID, GPIO_PORT_11, netname[8], NULL},
{GPIO_VALID, GPIO_PORT_12, netname[9], NULL},
{GPIO_VALID, GPIO_PORT_13, netname[10], NULL},
{GPIO_VALID, GPIO_PORT_14, netname[11], NULL},
{GPIO_VALID, GPIO_PORT_15, netname[12], NULL},
{GPIO_VALID, GPIO_PORT_16, netname[13], NULL},
{GPIO_VALID, GPIO_PORT_17, netname[14], NULL},
{GPIO_VALID, GPIO_PORT_18, netname[15], NULL},
{GPIO_VALID, GPIO_PORT_19, netname[16], NULL},
{GPIO_VALID, GPIO_PORT_21, netname[17], NULL},
{GPIO_VALID, GPIO_PORT_43, netname[18], NULL},
{GPIO_VALID, GPIO_PORT_45, netname[19], NULL},
{GPIO_VALID, GPIO_PORT_57, netname[20], NULL},
{GPIO_VALID, GPIO_PORT_58, netname[21], NULL},
{GPIO_VALID, GPIO_PORT_60, netname[22], NULL},
{GPIO_VALID, GPIO_PORT_61, netname[23], NULL},
};


const kal_uint8 EINT_LABELID_MAX = 5;
const unsigned char eintname[][MAX_NETNAME_TEXT] = {
"MCINS",
"WIFI_EINT",
"SIM_EINT",
"KEYPAD_WAKEUP_EINT_NO",
"POWER_KEY_EINT_NO",
};
GPIO_MAP_ENTRY eint_map_tbl[] = {
{GPIO_VALID, 5, eintname[0], NULL},
{GPIO_VALID, 6, eintname[1], NULL},
{GPIO_VALID, 35, eintname[2], NULL},
{GPIO_VALID, 11, eintname[3], NULL},
{GPIO_VALID, 20, eintname[4], NULL},
};


const kal_uint8 ADC_LABELID_MAX = 5;
const unsigned char adcname[][MAX_NETNAME_TEXT] = {
"ACCDET",
"ADC_VBAT",
"ADC_VISENSE",
"ADC_VCHARGER",
"ADC_VBATTMP",
};
GPIO_MAP_ENTRY adc_map_tbl[] = {
{GPIO_VALID, 5, adcname[0], NULL},
{GPIO_VALID, 0, adcname[1], NULL},
{GPIO_VALID, 1, adcname[2], NULL},
{GPIO_VALID, 2, adcname[3], NULL},
{GPIO_VALID, 3, adcname[4], NULL},
};


#endif /* __CUST_NEW__ */


