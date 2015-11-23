/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pin_mux.c
**     Project     : xadow_phone_gps_v2
**     Processor   : MKL02Z32VFG4
**     Component   : PinSettings
**     Version     : Component 1.2.0, Driver 1.4, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-07-29, 19:53, # CodeGen: 14
**     Abstract    :
**
**     Settings    :
**          Component name                                 : pin_mux
**          PinSettings IP Block                           : PinSettings
**          Processor                                      : MKL02Z32FG4_4SDK
**          Pin settings                                   : 
**            Routing                                      : 
**              Peripheral Type ADC                        : 
**                Custom name                              : ADC0
**                ADC0                                     : 
**                  Analog single-ended channel 1          : <Automatic>
**                  Analog single-ended channel 4          : <Automatic>
**                  Analog single-ended channel 5          : <Automatic>
**                  Analog single-ended channel 6          : <Automatic>
**                  Analog single-ended channel 7          : <Automatic>
**                  Analog single-ended channel 12         : <Automatic>
**                  ADC analog single-ended channel 27     : Bandgap
**                  Trigger A input                        : <Automatic>
**                  Trigger B input                        : <Automatic>
**                  Voltage reference high single-ended channel 29 plus channel 29: VDD/VREFH
**                  Voltage reference low single-ended channel 30 minus channel 29: VREFL/VSS
**                Bool_ADC0                                : yes
**              Peripheral Type BP                         : 
**              Peripheral Type CMP                        : 
**                Custom name                              : CMP0
**                CMP0                                     : 
**                  Comparator input 1                     : <Automatic>
**                  Comparator input 2                     : <Automatic>
**                  Comparator input 3                     : <Automatic>
**                  Output                                 : <Automatic>
**                Bool_CMP0                                : yes
**              Peripheral Type CoreDebug                  : 
**                Custom name                              : CoreDebug
**                CoreDebug                                : 
**                  Serial wire debug clock                : <Automatic>
**                  Serial wire debug data input output    : <Automatic>
**                Bool_CoreDebug                           : yes
**              Peripheral Type DWT                        : 
**              Peripheral Type FGPIO                      : 
**              Peripheral Type FTFA                       : 
**                Custom name                              : FTFA
**              Peripheral Type GPIO                       : 
**                Custom name                              : GPIOA
**                GPIOA                                    : 
**                  General purpose IO pin 0               : <Automatic>
**                  Direction                              : <Automatic>
**                  General purpose IO pin 1               : <Automatic>
**                  Direction                              : <Automatic>
**                  General purpose IO pin 2               : <Automatic>
**                  Direction                              : <Automatic>
**                  General purpose IO pin 3               : EXTAL0/PTA3/I2C0_SCL/I2C1_SDA
**                  Direction                              : Input
**                  General purpose IO pin 4               : XTAL0/PTA4/I2C0_SDA/I2C1_SCL
**                  Direction                              : Input
**                  General purpose IO pin 5               : PTA5/TPM0_CH1/SPI0_SS_b
**                  Direction                              : Output
**                  General purpose IO pin 6               : PTA6/TPM0_CH0/SPI0_MISO
**                  Direction                              : Output
**                  General purpose IO pin 7               : ADC0_SE7/PTA7/IRQ_4/SPI0_MISO/SPI0_MOSI
**                  Direction                              : Input
**                Bool_GPIOA                               : yes
**                Custom name                              : GPIOB
**                GPIOB                                    : 
**                  General purpose IO pin 0               : ADC0_SE6/PTB0/IRQ_5/EXTRG_IN/SPI0_SCK
**                  Direction                              : Input
**                  General purpose IO pin 1               : <Automatic>
**                  Direction                              : <Automatic>
**                  General purpose IO pin 2               : <Automatic>
**                  Direction                              : <Automatic>
**                  General purpose IO pin 3               : <Automatic>
**                  Direction                              : <Automatic>
**                  General purpose IO pin 4               : <Automatic>
**                  Direction                              : <Automatic>
**                  General purpose IO pin 5               : ADC0_SE1/CMP0_IN1/PTB5/IRQ_12/TPM1_CH1/NMI_b
**                  Direction                              : Output
**                Bool_GPIOB                               : yes
**              Peripheral Type I2C                        : 
**                Custom name                              : I2C0
**                I2C0                                     : 
**                  Serial clock line                      : PTB3/IRQ_10/I2C0_SCL/UART0_TX
**                  Serial data line                       : PTB4/IRQ_11/I2C0_SDA/UART0_RX
**                Bool_I2C0                                : yes
**                Custom name                              : I2C1
**                I2C1                                     : 
**                  Serial clock line                      : <Automatic>
**                  Serial data line                       : <Automatic>
**                Bool_I2C1                                : yes
**              Peripheral Type LPTMR                      : 
**                Custom name                              : LPTMR0
**                LPTMR0                                   : 
**                  Pulse counter input 1                  : <Automatic>
**                Bool_LPTMR0                              : yes
**              Peripheral Type MCG                        : 
**                Custom name                              : MCG
**              Peripheral Type MCM                        : 
**                Custom name                              : MCM
**              Peripheral Type MTB                        : 
**              Peripheral Type MTBDWT                     : 
**              Peripheral Type NV                         : 
**                Custom name                              : FTFA_FlashConfig
**              Peripheral Type NVIC                       : 
**                Custom name                              : NVIC
**              Peripheral Type OSC                        : 
**                Custom name                              : OSC0
**                OSC0                                     : 
**                  Oscillator 0 input                     : <Automatic>
**                  Oscillator 0 output                    : <Automatic>
**                Bool_OSC0                                : yes
**              Peripheral Type PMC                        : 
**                Custom name                              : PMC
**                PMC                                      : 
**                  MCU power supply                       : VDD/VREFH
**                  MCU ground                             : VREFL/VSS
**                Bool_PMC                                 : yes
**              Peripheral Type PORT                       : 
**                Custom name                              : PORTA
**                Custom name                              : PORTB
**              Peripheral Type RCM                        : 
**                Custom name                              : RCM
**                RCM                                      : 
**                  Reset input                            : <Automatic>
**                Bool_RCM                                 : yes
**              Peripheral Type ROM                        : 
**              Peripheral Type SCB                        : 
**                Custom name                              : SystemControl
**                SystemControl                            : 
**                  Non-maskable interrupt request pin     : <Automatic>
**                Bool_SystemControl                       : yes
**              Peripheral Type SIM                        : 
**                Custom name                              : SIM
**                SIM                                      : 
**                  UART0 transmit data modulator input    : <Automatic>
**                  UART0 transmit data modulated with TPM channel 0 output: <Automatic>
**                Bool_SIM                                 : yes
**              Peripheral Type SMC                        : 
**                Custom name                              : SMC
**              Peripheral Type SPI                        : 
**                Custom name                              : SPI0
**                SPI0                                     : 
**                  Master data input and slave data output: <Automatic>
**                  Direction                              : <Automatic>
**                  Master data output and slave data input: <Automatic>
**                  Direction                              : <Automatic>
**                  Serial clock                           : <Automatic>
**                  Direction                              : <Automatic>
**                  Peripheral chip select 0               : <Automatic>
**                  Direction                              : <Automatic>
**                Bool_SPI0                                : yes
**              Peripheral Type SysTick                    : 
**                Custom name                              : SysTick
**              Peripheral Type TPM                        : 
**                Custom name                              : TPM0
**                TPM0                                     : 
**                  Channel 0                              : <Automatic>
**                  Direction                              : <Automatic>
**                  Channel 1                              : <Automatic>
**                  Direction                              : <Automatic>
**                  External clock input                   : <Automatic>
**                  External trigger                       : <Automatic>
**                Bool_TPM0                                : yes
**                Custom name                              : TPM1
**                TPM1                                     : 
**                  Channel 0                              : <Automatic>
**                  Direction                              : <Automatic>
**                  Channel 1                              : <Automatic>
**                  Direction                              : <Automatic>
**                  External clock input                   : <Automatic>
**                  External trigger                       : <Automatic>
**                Bool_TPM1                                : yes
**              Peripheral Type UART0                      : 
**                Custom name                              : UART0
**                UART0                                    : 
**                  Receive data                           : ADC0_SE5/CMP0_IN3/PTB1/IRQ_6/UART0_TX/UART0_RX
**                  Transmit data                          : ADC0_SE4/PTB2/IRQ_7/UART0_RX/UART0_TX
**                Bool_UART0                               : yes
**              Non-peripheral pins                        : 
**            Electrical properties                        : 
**              Pin 1: VDD/VREFH                           : 
**                Custom name, Signal name                 : VDD/VREFH
**              Pin 2: VREFL/VSS                           : 
**                Custom name, Signal name                 : VREFL/VSS
**              Pin 3: EXTAL0/PTA3/I2C0_SCL/I2C1_SDA       : 
**                Custom name, Signal name                 : EXTAL0/PTA3/I2C0_SCL/I2C1_SDA
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**                Open drain                               : <Automatic>
**              Pin 4: XTAL0/PTA4/I2C0_SDA/I2C1_SCL        : 
**                Custom name, Signal name                 : XTAL0/PTA4/I2C0_SDA/I2C1_SCL
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**                Open drain                               : <Automatic>
**              Pin 5: PTA5/TPM0_CH1/SPI0_SS_b             : 
**                Custom name, Signal name                 : PTA5/TPM0_CH1/SPI0_SS_b
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**              Pin 6: PTA6/TPM0_CH0/SPI0_MISO             : 
**                Custom name, Signal name                 : PTA6/TPM0_CH0/SPI0_MISO
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**              Pin 7: ADC0_SE7/PTA7/IRQ_4/SPI0_MISO/SPI0_MOSI: 
**                Custom name, Signal name                 : ADC0_SE7/PTA7/IRQ_4/SPI0_MISO/SPI0_MOSI
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**              Pin 8: ADC0_SE6/PTB0/IRQ_5/EXTRG_IN/SPI0_SCK: 
**                Custom name, Signal name                 : ADC0_SE6/PTB0/IRQ_5/EXTRG_IN/SPI0_SCK
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**              Pin 9: ADC0_SE5/CMP0_IN3/PTB1/IRQ_6/UART0_TX/UART0_RX: 
**                Custom name, Signal name                 : ADC0_SE5/CMP0_IN3/PTB1/IRQ_6/UART0_TX/UART0_RX
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**                Open drain                               : <Automatic>
**              Pin 10: ADC0_SE4/PTB2/IRQ_7/UART0_RX/UART0_TX: 
**                Custom name, Signal name                 : ADC0_SE4/PTB2/IRQ_7/UART0_RX/UART0_TX
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**                Open drain                               : <Automatic>
**              Pin 11: PTB3/IRQ_10/I2C0_SCL/UART0_TX      : 
**                Custom name, Signal name                 : PTB3/IRQ_10/I2C0_SCL/UART0_TX
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**                Open drain                               : <Automatic>
**              Pin 12: PTB4/IRQ_11/I2C0_SDA/UART0_RX      : 
**                Custom name, Signal name                 : PTB4/IRQ_11/I2C0_SDA/UART0_RX
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**                Open drain                               : <Automatic>
**              Pin 13: ADC0_SE1/CMP0_IN1/PTB5/IRQ_12/TPM1_CH1/NMI_b: 
**                Custom name, Signal name                 : ADC0_SE1/CMP0_IN1/PTB5/IRQ_12/TPM1_CH1/NMI_b
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**              Pin 14: ADC0_SE12/CMP0_IN2/PTA0/IRQ_0/TPM1_CH0/SWD_CLK: 
**                Custom name, Signal name                 : ADC0_SE12/CMP0_IN2/PTA0/IRQ_0/TPM1_CH0/SWD_CLK
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**              Pin 15: PTA1/IRQ_1/LPTMR0_ALT1/TPM_CLKIN0/RESET_b: 
**                Custom name, Signal name                 : PTA1/IRQ_1/LPTMR0_ALT1/TPM_CLKIN0/RESET_b
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**                Passive filter                           : <Automatic>
**              Pin 16: PTA2/CMP0_OUT/SWD_DIO              : 
**                Custom name, Signal name                 : PTA2/CMP0_OUT/SWD_DIO
**                Slew rate                                : <Automatic>
**                Open drain                               : <Automatic>
**                Drive strength                           : <Automatic>
**                Passive filter                           : <Automatic>
**                Pull select                              : <Automatic>
**                Pull enable                              : <Automatic>
**          Settings                                       : 
**            Clock gates initialization mode              : SIM HAL (fsl_sim_hal component)
**            Inherited HAL components                     : 
**              fsl_port_hal                               : fsl_port_hal
**              fsl_sim_hal                                : fsl_sim_hal
**              fsl_mcg_hal                                : fsl_mcg_hal
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file pin_mux.c
** @version 1.4
** @brief
**
*/         
/*!
**  @addtogroup pin_mux_module pin_mux module documentation
**  @{
*/         

#if !defined(__BOARD_H__)
#define __BOARD_H__

#include <stdint.h>
#include "pin_mux.h"


#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

void hardware_init(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* __BOARD_H__ */
