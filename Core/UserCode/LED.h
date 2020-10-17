/*
 * LED.h
 *
 *  Created on: Oct 10, 2019
 *      Author: kccistc
 */

#ifndef LED_H_
#define LED_H_

#include "main.h"
#include "stm32f1xx_hal.h"

#define LED1_GPIO	GPIOA
#define LED2_GPIO	GPIOB
#define LED3_GPIO	GPIOB
#define LED4_GPIO	GPIOB
#define LED5_GPIO	GPIOB

#define LED6_GPIO	GPIOB
#define LED7_GPIO	GPIOB
#define LED8_GPIO	GPIOB
#define LED9_GPIO	GPIOB
#define LED10_GPIO	GPIOB

#define LED1_PIN	GPIO_PIN_8
#define LED2_PIN	GPIO_PIN_15
#define LED3_PIN	GPIO_PIN_14
#define LED4_PIN	GPIO_PIN_13
#define LED5_PIN	GPIO_PIN_12

#define LED6_PIN	GPIO_PIN_10
#define LED7_PIN	GPIO_PIN_11
#define LED8_PIN	GPIO_PIN_5
#define LED9_PIN	GPIO_PIN_4
#define LED10_PIN	GPIO_PIN_3
/*
#define LED1_PIN	GPIO_PIN_12
#define LED2_PIN	GPIO_PIN_13
#define LED3_PIN	GPIO_PIN_14
#define LED4_PIN	GPIO_PIN_15
#define LED5_PIN	GPIO_PIN_8

#define LED6_PIN	GPIO_PIN_3
#define LED7_PIN	GPIO_PIN_4
#define LED8_PIN	GPIO_PIN_5
#define LED9_PIN	GPIO_PIN_6
#define LED10_PIN	GPIO_PIN_7
*/
void ParkingLot_Empty_1();
void ParkingLot_Occ_1();
void ParkingLot_Empty_2();
void ParkingLot_Occ_2();
void ParkingLot_Empty_3();
void ParkingLot_Occ_3();
void ParkingLot_Empty_4();
void ParkingLot_Occ_4();
void ParkingLot_Empty_5();
void ParkingLot_Occ_5();

/*
void Off_LED(void);
void On_LED_1(void);
void On_LED_2(void);
void On_LED_3(void);
void On_LED_4(void);

void LED1Toggle(void);
void LED2Toggle(void);
void LED3Toggle(void);
void LED4Toggle(void);
*/
#endif /* LED_H_ */
