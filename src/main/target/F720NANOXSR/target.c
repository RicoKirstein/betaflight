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

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM1, CH1,  PA8,  TIM_USE_ANY,                0, 1), // esc serial
    DEF_TIM(TIM8, CH2N,  PB0,  TIM_USE_MOTOR,             0, 0), // PWM1  - DMA2_ST3
    DEF_TIM(TIM2, CH3,  PB10,  TIM_USE_MOTOR,             0, 0), // PWM2  - DMA1_ST5   
    DEF_TIM(TIM2, CH4,  PB11,  TIM_USE_MOTOR,             0, 0), // PWM3  - DMA1_ST4
    DEF_TIM(TIM8, CH3,  PC8,  TIM_USE_MOTOR,             0, 0), // PWM4  - DMA2_ST4   
    DEF_TIM(TIM4, CH3,  PB8,  TIM_USE_LED,             0, 0), // LED strip - DMA1_ST7
    DEF_TIM(TIM4, CH4,  PB9,  TIM_USE_ANY
,             0, 0), // CAM ctl - DMA_NONE
};

