/*
 * DebugLed.c
 *
 *  Created on: Nov 6, 2022
 *      Author: dangm
 */
#include "DebugLed.h"
#include "global.h"

void DebugLed(){
	switch(ledstatus){
	case LED_INIT:
		ledstatus = LED_ON;
		setTimer1(100);
		break;
	case LED_ON:
		if(timer_flag1 ==1){
			timer_flag1 = 0;
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, RESET);
			ledstatus = LED_OFF;
			setTimer1(100);
		}
		break;
	case LED_OFF:
		if(timer_flag1 ==1){
			timer_flag1 = 0;
			HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, SET);
			ledstatus = LED_ON;
			setTimer1(100);
		}
		break;
	}
}
