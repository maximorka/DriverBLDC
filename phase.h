#ifndef PHASE_H
#define PHASE_H

#include "stm32f030x6.h"

#define A_HI GPIOA->ODR = GPIO_ODR_8
#define B_HI GPIOA->ODR = GPIO_ODR_9
#define C_HI GPIOA->ODR = GPIO_ODR_10

#define A_LO GPIOB->ODR = GPIO_ODR_13
#define B_LO GPIOB->ODR = GPIO_ODR_14
#define C_LO GPIOB->ODR = GPIO_ODR_15

#endif
