/*
 * timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: dangm
 */
#include "timer.h"

int timer_counter = 0;
int timer_counter1 = 0;
int timer_counter2 = 0;

int timer_flag = 0;
int timer_flag1 = 0;
int timer_flag2 = 0;

void setTimer(int duration){
	timer_counter = duration;
	timer_flag = 0;
}
void setTimer1(int duration){
	timer_counter1 = duration;
	timer_flag1 = 0;
}
void setTimer2(int duration){
	timer_counter2 = duration;
	timer_flag2 = 0;
}

void timerRun(){
	if(timer_counter > 0) timer_counter--;
	if(timer_counter <= 0) timer_flag = 1;

	if(timer_counter1 > 0) timer_counter1--;
	if(timer_counter1 <= 0) timer_flag1 = 1;

	if(timer_counter2 > 0) timer_counter2--;
	if(timer_counter2 <= 0) timer_flag2 = 1;
}
