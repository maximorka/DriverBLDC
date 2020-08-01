#include "init.h"
#include "stm32f030x6.h"


static void Gpio(void);
static void Systick(void);

const struct initFunctions Init = {
	Gpio,
	Systick
};

static void Gpio(void) {
	
	
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;  // Port A
	RCC->AHBENR |= RCC_AHBENR_GPIOBEN;  // Port B
	RCC->AHBENR |= RCC_AHBENR_GPIOFEN;  // Port F
	
	// HS1 PA8
	GPIOA->MODER |= 0x1U << GPIO_MODER_MODER8_Pos; // Output mode
	GPIOA->OTYPER |= 0x0U << 0; // Push-pul
	GPIOA->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR8_Pos; // Very high speed
	GPIOA->PUPDR |= 0x2U << GPIO_PUPDR_PUPDR8_Pos; // Pull-down	

	// HS2 PA9
	GPIOA->MODER |= 0x1U << GPIO_MODER_MODER9_Pos; // Output mode
	GPIOA->OTYPER |= 0x0U << 0; // Push-pul
	GPIOA->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR9_Pos; // Very high speed
	GPIOA->PUPDR |= 0x2U << GPIO_PUPDR_PUPDR9_Pos; // Pull-down	

	// HS3 PA10
	GPIOA->MODER |= 0x1U << GPIO_MODER_MODER10_Pos; // Output mode
	GPIOA->OTYPER |= 0x0U << 0; // Push-pul
	GPIOA->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR10_Pos; // Very high speed
	GPIOA->PUPDR |= 0x2U << GPIO_PUPDR_PUPDR10_Pos; // Pull-down		
	
	// LS1 PB13
	GPIOB->MODER |= 0x1U << GPIO_MODER_MODER13_Pos; // Output mode
	GPIOB->OTYPER |= 0x0U << 0; // Push-pul
	GPIOB->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR13_Pos; // Very high speed
	GPIOB->PUPDR |= 0x2U << GPIO_PUPDR_PUPDR13_Pos; // Pull-down		
	
	// LS2 PB14
	GPIOB->MODER |= 0x1U << GPIO_MODER_MODER14_Pos; // Output mode
	GPIOB->OTYPER |= 0x0U << 0; // Push-pul
	GPIOB->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR14_Pos; // Very high speed
	GPIOB->PUPDR |= 0x2U << GPIO_PUPDR_PUPDR14_Pos; // Pull-down	
	
	// LS3 PB15
	GPIOB->MODER |= 0x1U << GPIO_MODER_MODER15_Pos; // Output mode
	GPIOB->OTYPER |= 0x0U << 0; // Push-pul
	GPIOB->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR15_Pos; // Very high speed
	GPIOB->PUPDR |= 0x2U << GPIO_PUPDR_PUPDR15_Pos; // Pull-down	
	
	// LED green PF0
	GPIOF->MODER |= 0x1U << GPIO_MODER_MODER0_Pos; // Output mode
	GPIOF->OTYPER |= 0x0U << 0; // Push-pul
	GPIOF->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR0_Pos; // Very high speed
	GPIOF->PUPDR |= 0x2U << GPIO_PUPDR_PUPDR0_Pos; // Pull-down
	
	// OC_TH_STBY2 PF6
	GPIOF->MODER |= 0x1U << GPIO_MODER_MODER6_Pos; // Output mode
	GPIOF->OTYPER |= 0x0U << 6; // Push-pul
	GPIOF->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR6_Pos; // Very high speed
	GPIOF->PUPDR |= 0x0U << GPIO_PUPDR_PUPDR6_Pos; // Pull-down
	
	// OC_TH_STBY1 PF7
	GPIOF->MODER |= 0x1U << GPIO_MODER_MODER7_Pos; // Output mode
	GPIOF->OTYPER |= 0x0U << 7; // Push-pul
	GPIOF->OSPEEDR |= 0x3U << GPIO_OSPEEDR_OSPEEDR7_Pos; // Very high speed
	GPIOF->PUPDR |= 0x0U << GPIO_PUPDR_PUPDR7_Pos; // Pull-down
	
}



static void Systick(void){
	SysTick->LOAD = 0xFFFFFFFFU;
	SysTick->VAL = 0xFFFFFFFFU;
	SysTick->CTRL = SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_ENABLE_Msk;  
}
