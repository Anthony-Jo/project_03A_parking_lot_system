/*
 * Servo.c
 *
 *  Created on: Oct 18, 2019
 *      Author: kccistc
 */

#include "Servo.h"

void ServoRunEntrance(uint8_t degree)
{
	uint16_t CCRData;
	CCRData = (uint16_t) (((10.0 / 9) * degree) + 50) * 0.72;

	__HAL_TIM_SET_COMPARE(&SERVO_HANDLER_ENTRANCE, SERVO_CHANNEL_ENTRANCE, CCRData);
}

void ServoRunExit(uint8_t degree)
{
	uint16_t CCRData;
	CCRData = (uint16_t) (((10.0 / 9) * degree) + 50) * 0.72;

	__HAL_TIM_SET_COMPARE(&SERVO_HANDLER_EXIT, SERVO_CHANNEL_EXIT, CCRData);
}

void ServoStart(void)
{
	HAL_TIM_PWM_Start(&SERVO_HANDLER_ENTRANCE, SERVO_CHANNEL_ENTRANCE);
	HAL_TIM_PWM_Start(&SERVO_HANDLER_EXIT, SERVO_CHANNEL_EXIT);
}

void ServoStop(void)
{
	HAL_TIM_PWM_Stop(&SERVO_HANDLER_ENTRANCE, SERVO_CHANNEL_ENTRANCE);
	HAL_TIM_PWM_Stop(&SERVO_HANDLER_EXIT, SERVO_CHANNEL_EXIT);
}
