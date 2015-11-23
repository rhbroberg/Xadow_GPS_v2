/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : clockMan1.c
**     Project     : xadow_phone_gps_v2
**     Processor   : MKL02Z32VFG4
**     Component   : fsl_clock_manager
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-07-29, 10:33, # CodeGen: 2
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
** @file clockMan1.c
** @version 01.00
*/         
/*!
**  @addtogroup clockMan1_module clockMan1 module documentation
**  @{
*/         

/* clockMan1. */

#include "clockMan1.h"


/* ************************************************************************* 
 * Configuration structure for Clock Configuration 0
 * ************************************************************************* */
/*! @brief User Configuration structure SpeedMode0 */  
clock_manager_user_config_t clockMan1_InitConfig0 = {
    /*! @brief Configuration of MCG */
    .mcgConfig =
    {
        .mcg_mode = kMcgModeFEI, /*!< FEI mode */
        /* ------------------ MCGIRCCLK settings ---------------------- */
        .irclkEnable = true, /*!< MCGIRCLK enable */
        .irclkEnableInStop = false, /*!< MCGIRCLK enable in stop mode */
        .ircs = kMcgIrcSlow, /*!< Slow internal reference clock selected */
        .fcrdiv = 0U,
            
        /* -------------------- MCG FLL settings ---------------------- */    
        .frdiv = 0, /*!< MCG_C1[FRDIV] */
        .drs = kMcgDcoRangeSelLow, /*!< MCG_C4[DRST_DRS] */
        .dmx32 = kMcgDmx32Default, /*!< MCG_C4[DMX32] */
            
    },       
     
    /*! @brief Configuration of OSCERCLK */
    .oscerConfig = 
    {
        .enable = true, /*!< OSCERCLK enable or not */
        .enableInStop = false, /*!< OSCERCLK enable or not in stop mode */
    },
    
    /*! @brief Configuration of SIM module */  
    .simConfig = 
    {
        .outdiv1 = 0U, /*!< OUTDIV1 setting */
        .outdiv4 = 0U, /*!< OUTDIV4 setting */
    }
};     

/*! @brief Array of pointers to User configuration structures */
clock_manager_user_config_t const * g_clockManConfigsArr[] = {
    &clockMan1_InitConfig0
};
/*! @brief Array of pointers to User defined Callbacks configuration structures */
clock_manager_callback_user_config_t * g_clockManCallbacksArr[] = {NULL};
/* END clockMan1. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
