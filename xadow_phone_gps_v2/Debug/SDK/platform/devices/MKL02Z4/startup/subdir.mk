################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/devices/MKL02Z4/startup/system_MKL02Z4.c 

OBJS += \
./SDK/platform/devices/MKL02Z4/startup/system_MKL02Z4.o 

C_DEPS += \
./SDK/platform/devices/MKL02Z4/startup/system_MKL02Z4.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/devices/MKL02Z4/startup/%.o: ../SDK/platform/devices/MKL02Z4/startup/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"FSL_OSA_BM_TIMER_CONFIG=2" -D"CPU_MKL02Z32VFG4" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/hal/inc" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/hal/src/sim/MKL02Z4" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/system/src/clock/MKL02Z4" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/system/inc" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/osa/inc" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/CMSIS/Include" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/devices" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/devices/MKL02Z4/include" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/devices/MKL02Z4/startup" -I"D:/Freescale/workspace/xadow_phone_gps_v2/Generated_Code/SDK/platform/devices/MKL02Z4/startup" -I"D:/Freescale/workspace/xadow_phone_gps_v2/Sources" -I"D:/Freescale/workspace/xadow_phone_gps_v2/Generated_Code" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/utilities/inc" -I"D:/Freescale/workspace/xadow_phone_gps_v2/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


