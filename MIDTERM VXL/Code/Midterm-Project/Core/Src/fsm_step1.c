/*
 * fsm_step1.c
 *
 *  Created on: Nov 6, 2022
 *      Author: dangm
 */
#include "fsm_step1.h"
#include "7segdisplay.h"
#include "global.h"

void fsm_step1(){
	switch (status){
	case BUTT_0:
			display7seg(0);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_1;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_9;
				setTimer(200);
			}
			break;
	case BUTT_1:
			display7seg(1);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_2;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_0;
				setTimer(200);
			}
			break;
	case BUTT_2:
			display7seg(2);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_3;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_1;
				setTimer(200);
			}
			break;
	case BUTT_3:
			display7seg(3);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_4;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_2;
				setTimer(200);
			}
			break;
	case BUTT_4:
			display7seg(4);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_5;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_3;
				setTimer(200);
			}
			break;
	case BUTT_5:
			display7seg(5);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_6;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_4;
				setTimer(200);
			}
			break;
	case BUTT_6:
			display7seg(6);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_7;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_5;
				setTimer(200);
			}
			break;
	case BUTT_7:
			display7seg(7);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_8;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_6;
				setTimer(200);
			}
			break;
	case BUTT_8:
			display7seg(8);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_9;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_7;
				setTimer(200);
			}
			break;
	case BUTT_9:
			display7seg(9);
			if(RESET_flag == 1){
				RESET_flag = 0;
				status = BUTT_0;
			}
			if(INC_flag == 1){
				INC_flag = 0;
				status = BUTT_0;
				setTimer(200);
			}
			if(DEC_flag == 1){
				DEC_flag = 0;
				status = BUTT_8;
				setTimer(200);
			}
			break;
	}
}
