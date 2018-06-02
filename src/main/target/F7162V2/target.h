/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define TARGET_BOARD_IDENTIFIER "F7162"

#define USEMCO2ASOSDCLOCK

//this FC doesnt actually have a bepper output
//but i cant enable esc beacon without defining this

#define USE_BEEPER

#define USBD_PRODUCT_STRING "F7 162"

#define LED0_PIN                PC13
#define LED1_PIN                PC4

// MPU interrupt
#define USE_EXTI
#define MPU_INT_EXTI            PC14
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW

#define MPU6500_CS_PIN          SPI3_NSS_PIN
#define MPU6500_SPI_INSTANCE    SPI3

#define USE_ACC
#define USE_ACC_SPI_MPU6500
#define ACC_MPU6500_ALIGN       CW270_DEG

#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define GYRO_MPU6500_ALIGN      CW270_DEG

#define USE_VCP

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART4
#define UART4_RX_PIN            PA1

#define USE_UART5
#define UART5_TX_PIN            PA1

#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT       7

#define USE_ESCSERIAL
#define ESCSERIAL_TIMER_TX_PIN  PA8 // (Hardware=0, PPM/LED_STRIP) XXX Crash if using an LED strip.

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3

#define SPI1_NSS_PIN            PC15
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PC2
#define SPI2_MOSI_PIN           PC3

#define SPI3_NSS_PIN            PA15
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

//CAMERA CONTROL----------------------------
//define camera control
#define CAMERA_CONTROL_PIN      PB9 // Camera control.

//OSD----------------------------------------
#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI1
#define MAX7456_SPI_CS_PIN      SPI1_NSS_PIN
#define MAX7456_SPI_CLK         (SPI_CLOCK_STANDARD) // 10MHz
#define MAX7456_RESTORE_CLK     (SPI_CLOCK_STANDARD)

#define USE_ADC
#define ADC1_DMA_STREAM         DMA2_Stream0
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define VBAT_ADC_PIN            PC0
#define CURRENT_METER_ADC_PIN   PC1
#define RSSI_ADC_PIN            PC4

#define CURRENT_METER_OFFSET_DEFAULT 2500                      // ACS712/714-30A - 0A = 2.5V
#define CURRENT_METER_SCALE_DEFAULT -667                       // ACS712/714-30A - 66.666 mV/A inverted mode

#define USE_DSHOT_DMAR	

#define DEFAULT_FEATURES        (FEATURE_AIRMODE) | (FEATURE_OSD) | (FEATURE_LED_STRIP) |  FEATURE_TELEMETRY | FEATURE_ANTI_GRAVITY
#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART2
#define RX_CHANNELS_TAER

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define USABLE_TIMER_CHANNEL_COUNT  7    
#define USED_TIMERS             ( TIM_N(1) | TIM_N(3) | TIM_N(4) | TIM_N(5) | TIM_N(8)  | TIM_N(10))

     
