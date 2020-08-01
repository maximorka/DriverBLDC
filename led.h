#ifndef LED_H
#define LED_H

#include "stm32f030x6.h"

#define GREEN_ON GPIOF->BSRR = GPIO_BSRR_BR_0
#define GREEN_OFF GPIOF->BSRR = GPIO_BSRR_BS_0
#define GREEN_TOOGLE GPIOF->ODR ^= GPIO_ODR_0

#endif
