#include "init.h"
#include "delay.h"
#include "led.h"
#include "phase.h"

#define TIME 4250.f

int main(void) {

	Init.Gpio();
	Init.Systick();
	
	// VREG12 enable
	GPIOF->BSRR = GPIO_BSRR_BS_6;
	GPIOF->BSRR = GPIO_BSRR_BS_7;	

	// led enable
	GREEN_ON;
	
	while(1){

		B_HI;	Delay.MicroSecond(TIME);
		A_LO;	Delay.MicroSecond(TIME);
		C_HI;	Delay.MicroSecond(TIME);
		B_LO;	Delay.MicroSecond(TIME);
		A_HI;	Delay.MicroSecond(TIME);
		C_LO;	Delay.MicroSecond(TIME);

	}
	
}

