
/*******************************************************************
*
* CAUTION: This file is automatically generated by HSI.
* Version: 2018.3
* DO NOT EDIT.
*
* Copyright (C) 2010-2019 Xilinx, Inc. All Rights Reserved.*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the Software), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
* 
*THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
*XILINX BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
*OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
*Except as contained in this notice, the name of the Xilinx shall not be used
*in advertising or otherwise to promote the sale, use or other dealings in
*this Software without prior written authorization from Xilinx.
*

* 
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xrfdc.h"

/*
* The configuration table for devices
*/

XRFdc_Config XRFdc_ConfigTable[XPAR_XRFDC_NUM_INSTANCES] =
{
	{
		XPAR_USP_RF_DATA_CONVERTER_0_DEVICE_ID,
		XPAR_USP_RF_DATA_CONVERTER_0_BASEADDR,
		XPAR_USP_RF_DATA_CONVERTER_0_HIGH_SPEED_ADC,
		XPAR_USP_RF_DATA_CONVERTER_0_SYSREF_MASTER,
		XPAR_USP_RF_DATA_CONVERTER_0_SYSREF_MASTER,
		XPAR_USP_RF_DATA_CONVERTER_0_SYSREF_SOURCE,
		XPAR_USP_RF_DATA_CONVERTER_0_SYSREF_SOURCE,
		{
			{
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC0_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE00_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL00,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE00,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE00,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE01_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL01,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE01,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE01,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE02_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL02,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE02,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE02,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE03_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL03,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE03,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE03,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE00,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH00,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE00,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO00_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER00_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE00,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE01,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH01,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE01,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO01_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER01_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE01,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE02,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH02,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE02,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO02_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER02_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE02,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE03,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH03,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE03,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO03_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER03_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE03,
					},
				},
			},
			{
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC1_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE10_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL10,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE10,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE10,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE11_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL11,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE11,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE11,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE12_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL12,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE12,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE12,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE13_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL13,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE13,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE13,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE10,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH10,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE10,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO10_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER10_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE10,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE11,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH11,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE11,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO11_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER11_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE11,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE12,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH12,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE12,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO12_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER12_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE12,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE13,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH13,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE13,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO13_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER13_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE13,
					},
				},
			},
			{
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC2_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE20_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL20,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE20,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE20,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE21_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL21,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE21,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE21,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE22_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL22,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE22,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE22,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE23_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL23,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE23,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE23,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE20,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH20,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE20,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO20_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER20_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE20,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE21,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH21,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE21,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO21_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER21_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE21,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE22,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH22,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE22,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO22_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER22_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE22,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE23,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH23,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE23,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO23_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER23_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE23,
					},
				},
			},
			{
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_DAC3_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE30_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL30,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE30,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE30,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE31_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL31,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE31,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE31,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE32_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL32,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE32,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE32,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_SLICE33_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INVSINC_CTRL33,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_MODE33,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DECODER_MODE33,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE30,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH30,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE30,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO30_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER30_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE30,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE31,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH31,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE31,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO31_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER31_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE31,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE32,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH32,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE32,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO32_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER32_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE32,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_TYPE33,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_DATA_WIDTH33,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_INTERPOLATION_MODE33,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_FIFO33_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_ADDER33_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_DAC_MIXER_TYPE33,
					},
				},
			},
		},
		{
			{
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC0_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE00_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE00,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE01_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE01,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE02_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE02,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE03_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE03,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE00,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH00,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE00,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO00_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE00,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE01,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH01,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE01,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO01_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE01,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE02,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH02,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE02,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO02_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE02,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE03,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH03,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE03,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO03_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE03,
					},
				},
			},
			{
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC1_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE10_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE10,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE11_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE11,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE12_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE12,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE13_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE13,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE10,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH10,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE10,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO10_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE10,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE11,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH11,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE11,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO11_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE11,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE12,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH12,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE12,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO12_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE12,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE13,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH13,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE13,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO13_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE13,
					},
				},
			},
			{
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC2_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE20_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE20,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE21_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE21,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE22_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE22,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE23_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE23,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE20,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH20,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE20,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO20_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE20,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE21,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH21,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE21,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO21_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE21,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE22,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH22,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE22,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO22_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE22,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE23,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH23,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE23,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO23_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE23,
					},
				},
			},
			{
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_PLL_ENABLE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_SAMPLING_RATE,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_REFCLK_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_FABRIC_FREQ,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_FBDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_OUTDIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_REFCLK_DIV,
				XPAR_USP_RF_DATA_CONVERTER_0_ADC3_BAND,
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE30_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE30,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE31_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE31,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE32_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE32,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_SLICE33_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_MODE33,
					},
				},
				{
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE30,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH30,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE30,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO30_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE30,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE31,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH31,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE31,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO31_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE31,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE32,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH32,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE32,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO32_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE32,
					},
					{
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_TYPE33,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DATA_WIDTH33,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_DECIMATION_MODE33,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_FIFO33_ENABLE,
						XPAR_USP_RF_DATA_CONVERTER_0_ADC_MIXER_TYPE33,
					},
				},
			},
		}
	}
};


