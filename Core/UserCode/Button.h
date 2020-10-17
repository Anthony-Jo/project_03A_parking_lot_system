/*
 * Button.h
 *
 *  Created on: Oct 10, 2019
 *      Author: kccistc
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include "stm32f1xx_hal.h"
#include "main.h"

#define BUTTON1_GPIO	GPIOC
#define BUTTON2_GPIO	GPIOC
#define BUTTON3_GPIO	GPIOC
#define BUTTON4_GPIO	GPIOA

#define BUTTON1_PIN		GPIO_PIN_15
#define BUTTON2_PIN		GPIO_PIN_14
#define BUTTON3_PIN		GPIO_PIN_13
#define BUTTON4_PIN		GPIO_PIN_15

uint8_t GetButton1State(void);
uint8_t GetButton2State(void);
uint8_t GetButton3State(void);
uint8_t GetButton4State(void);

#endif /* BUTTON_H_ */
