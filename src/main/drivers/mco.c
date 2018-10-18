/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "platform.h"

#ifdef USE_MCO

#include "drivers/io.h"
#include "pg/mco.h"

void mcoInit(const mcoConfig_t *mcoConfig)
{
    // Only configure MCO2 with PLLI2SCLK as source for now.
    // Other MCO1 and other sources can easily be added.

    if (mcoConfig->ioTag[1]) {
        IO_t io = IOGetByTag(mcoConfig->ioTag[1]);
#ifdef STM32F7
        HAL_RCC_MCOConfig(RCC_MCO2, RCC_MCO2SOURCE_PLLI2SCLK, RCC_MCODIV_4);
        IOConfigGPIOAF(io, IO_CONFIG(GPIO_MODE_OUTPUT_PP, GPIO_SPEED_FREQ_VERY_HIGH,  GPIO_NOPULL), GPIO_AF0_MCO);
#endif
    }
}
#endif
