/*
 * Step_Motor.h
 *
 *  Created on: Nov 8, 2019
 *      Author: kccistc
 */

#ifndef STEP_MOTOR_H_
#define STEP_MOTOR_H_

#include "stm32f1xx_hal.h"
#include "main.h"

#define STEPMOTOR_A1_GPIO	GPIOA
#define STEPMOTOR_B1_GPIO	GPIOA
#define STEPMOTOR_A2_GPIO	GPIOA
#define STEPMOTOR_B2_GPIO	GPIOA

#define STEPMOTOR_A1_PIN	GPIO_PIN_15
#define STEPMOTOR_B1_PIN	GPIO_PIN_12
#define STEPMOTOR_A2_PIN	GPIO_PIN_10
#define STEPMOTOR_B2_PIN	GPIO_PIN_9

void StepMotorStop();
void StepMotorCW(uint8_t phase);
void StepMotorCCW(uint8_t phase);

#endif /* STEP_MOTOR_H_ */
