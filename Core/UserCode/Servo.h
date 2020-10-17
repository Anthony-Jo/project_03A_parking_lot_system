/*
 * Servo.h
 *
 *  Created on: Oct 18, 2019
 *      Author: kccistc
 */

#ifndef SERVO_H_
#define SERVO_H_

#include "main.h"

#define SERVO_HANDLER_ENTRANCE	htim3
#define SERVO_HANDLER_EXIT		htim1
#define SERVO_CHANNEL_ENTRANCE	TIM_CHANNEL_4
#define SERVO_CHANNEL_EXIT		TIM_CHANNEL_4

void ServoRunEntrance(uint8_t degree);
void ServoRunExit(uint8_t degree);
void ServoStart(void);
void ServoStop(void);

#endif /* SERVO_H_ */
