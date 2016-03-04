################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/Events.c \
../Sources/delay.c \
../Sources/gpio.c \
../Sources/gps.c \
../Sources/i2c.c \
../Sources/main.c \
../Sources/uart.c 

OBJS += \
./Sources/Events.o \
./Sources/delay.o \
./Sources/gpio.o \
./Sources/gps.o \
./Sources/i2c.o \
./Sources/main.o \
./Sources/uart.o 

C_DEPS += \
./Sources/Events.d \
./Sources/delay.d \
./Sources/gpio.d \
./Sources/gps.d \
./Sources/i2c.d \
./Sources/main.d \
./Sources/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"FSL_OSA_BM_TIMER_CONFIG=2" -D"CPU_MKL02Z32VFG4" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/hal/inc" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/hal/src/sim/MKL02Z4" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/system/src/clock/MKL02Z4" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/system/inc" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/osa/inc" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/CMSIS/Include" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/devices" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/devices/MKL02Z4/include" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/devices/MKL02Z4/startup" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/Generated_Code/SDK/platform/devices/MKL02Z4/startup" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/Sources" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/Generated_Code" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/utilities/inc" -I"C:/Users/rhb/git/Xadow_GPS_v2/xadow_phone_gps_v2/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


