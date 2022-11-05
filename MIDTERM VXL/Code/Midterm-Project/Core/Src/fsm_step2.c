/*
 * fsm_step2.c
 *
 *  Created on: 6 Nov 2022
 *      Author: dangm
 */
#include "button.h"
#include "7segdisplay.h"
#include "fsm_step2.h"

void fsm_step2(){
	switch(status){
	case LONG_0:
		display7seg(0);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 == 1){
			INC_flag1 = 0;
			status = LONG_1;
			setTimer(100);
		}
		break;
	case LONG_1:
		display7seg(1);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_2;
			setTimer(100);
		}
		break;
	case LONG_2:
		display7seg(2);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_3;
			setTimer(100);
		}
		break;
	case LONG_3:
		display7seg(3);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_4;
			setTimer(100);
		}
		break;
	case LONG_4:
		display7seg(4);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_5;
			setTimer(100);
		}
		break;
	case LONG_5:
		display7seg(5);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_5;
			setTimer(100);
		}
		break;
	case LONG_6:
		display7seg(6);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_7;
			setTimer(100);
		}
		break;
	case LONG_7:
		display7seg(7);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_8;
			setTimer(100);
		}
		break;
	case LONG_8:
		display7seg(8);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_9;
			setTimer(100);
		}
		break;
	case LONG_9:
		display7seg(9);
		if(timer_flag == 1) timer_flag = 0;
		if(INC_flag1 ==1){
			INC_flag1 = 0;
			status = LONG_0;
			setTimer(100);
		}
		break;
	}
}
