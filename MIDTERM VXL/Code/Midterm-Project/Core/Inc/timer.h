/*
 * timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: dangm
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer_flag;
extern int timer_flag1;
extern int timer_flag2;

void setTimer(int duration);
void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();
#endif /* INC_TIMER_H_ */
