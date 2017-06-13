/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2016, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
/* PORT A:*/
    PA_0  = 0x00,
    PA_1  = 0x01,
    PA_2  = 0x02,
    PA_3  = 0x03,
    PA_4  = 0x04,
    PA_5  = 0x05,
    PA_6  = 0x06,
    PA_7  = 0x07,
    PA_8  = 0x08,
    PA_9  = 0x09,
    PA_10 = 0x0A,
    PA_11 = 0x0B,
    PA_12 = 0x0C,
    PA_13 = 0x0D,
    PA_14 = 0x0E,
    PA_15 = 0x0F,

/* PORT B:*/
    PB_0  = 0x10,
    PB_1  = 0x11,
    PB_2  = 0x12,
    PB_3  = 0x13,
    PB_4  = 0x14,
    PB_5  = 0x15,
    PB_6  = 0x16,
    PB_7  = 0x17,
    PB_8  = 0x18,
    PB_9  = 0x19,
    PB_10 = 0x1A,
    PB_11 = 0x1B,
    PB_12 = 0x1C,
    PB_13 = 0x1D,
    PB_14 = 0x1E,
    PB_15 = 0x1F,

/* PORT C:*/
    PC_0  = 0x20,
    PC_1  = 0x21,
    PC_2  = 0x22,
    PC_3  = 0x23,
    PC_4  = 0x24,
    PC_5  = 0x25,
    PC_6  = 0x26,
    PC_7  = 0x27,
    PC_8  = 0x28,
    PC_9  = 0x29,
    PC_10 = 0x2A,
    PC_11 = 0x2B,
    PC_12 = 0x2C,
    PC_13 = 0x2D,
    PC_14 = 0x2E,
    PC_15 = 0x2F,

/* PORT D:*/
    PD_0  = 0x30,
    PD_1  = 0x31,
    PD_2  = 0x32,
    PD_3  = 0x33,
    PD_4  = 0x34,
    PD_5  = 0x35,
    PD_6  = 0x36,
    PD_7  = 0x37,
    PD_8  = 0x38,
    PD_9  = 0x39,
    PD_10 = 0x3A,
    PD_11 = 0x3B,
    PD_12 = 0x3C,
    PD_13 = 0x3D,
    PD_14 = 0x3E,
    PD_15 = 0x3F,

/* PORT D:*/
    PE_0  = 0x40,
    PE_1  = 0x41,
    PE_2  = 0x42,
    PE_3  = 0x43,
    PE_4  = 0x44,
    PE_5  = 0x45,
    PE_6  = 0x46,
    PE_7  = 0x47,
    PE_8  = 0x48,
    PE_9  = 0x49,
    PE_10 = 0x4A,
    PE_11 = 0x4B,
    PE_12 = 0x4C,
    PE_13 = 0x4D,
    PE_14 = 0x4E,
    PE_15 = 0x4F,

/* PORT H:*/
    PH_0  = 0x70,
    PH_1  = 0x71,

/* ADC internal channels: */

    ADC_TEMP = 0xF0,
    ADC_VREF = 0xF1,
    ADC_VBAT = 0xF2,

/* Internal ADC channels : */
    /* NOTE: the analog channels are shared for the 3 ADC modules, the current
            configuration uses ADC_1 (multiplexing), it's possible to use 3 of them
            to sample in simultaneous
     */
    AI_2        = PC_0, //ADC_1/2/3_IN10
    AI_3        = PC_1, //ADC_1/2/3_IN11
    AI_4        = PC_2, //ADC_1/2/3_IN12
    AI_5        = PC_3, //ADC_1/2/3_IN13


/* Indication LEDs: */
    LED1        = PD_0,  //Orange
    LED2        = PD_1,  //Green
    LED3        = PD_2,  //Red
    LED4        = PD_3,  //Yellow

/* TTL Input / Ouputs */
    IO1         = PD_14,
    IO2         = PD_13,
    IO3         = PD_12,
    IO4         = PD_11,
    IO5         = PD_10,
    IO6         = PD_9,
    PWM1        = PD_14, //pin IO1, TIM4_CH3
    PWM2        = PD_13, //pin IO2, TIM4_CH2
    PWM3        = PD_12, //pin IO3, TIM4_CH1

/* USART to USB connections: */
    FTDI_UARTA_TX   = PA_0, //UART4_TX --> FTDI_UART_A_RXD
    FTDI_UARTA_RX   = PA_1, //UART4_RX --> FTDI_UART_A_TXD
    FTDI_UARTB_TX   = PB_13, //UART5_TX --> FTDI_UART_B_RXD
    FTDI_UARTB_RX   = PB_12, //UART5_RX --> FTDI_UART_B_TXD
    /*We have to point stdio somewhere, consider using an extra USART for the next board revision.*/
    USBTX       = PB_13, //PD_8, // Virtual Com Port, used by GreenteaSerial::GreenteaSerial() : mbed::RawSerial
    USBRX       = PB_12, //PD_9, // Virtual Com Port

/* ADS8901x Connections: */
    //ADC0, SPI_1:
    CH0_CS     = PA_4,  //#Chip_select, SPI_1_NS
    CH0_MOSI    = PB_5,  //ADC_SDI0, Master Output / slave input
    CH0_MISO    = PB_4,  //ADC_SDO0,  Master Input / slave ouput
    CH0_CLK     = PB_3,  //ADC_SCLK0, Clock
    CH0_CONVST  = PB_0,  //Start_conversion
    CH0_RVS     = PB_1,  //Conversion STATUS (high-to-low -> start, low-to-high -> end)

    //ADC1, SPI_4:
    CH1_CS     = PE_4,  //#Chip_select
    CH1_MOSI    = PE_6,  //ADC_SDI1, Master Output / slave input
    CH1_MISO    = PE_5,  //ADC_SDO1,  Master Input / slave ouput
    CH1_CLK     = PE_2,  //ADC_SCLK1, Clock
    CH1_CONVST  = PE_7,  //Start_conversion
    CH1_RVS     = PE_8,  //Conversion STATUS (high-to-low -> start, low-to-high -> end)

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif
