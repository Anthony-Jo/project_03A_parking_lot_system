/*
 * Button.c
 *
 *  Created on: Oct 10, 2019
 *      Author: kccistc
 */
#include "Button.h"

uint8_t GetButton1State(void)
{
	static uint8_t prevButtonState = 1;
	uint8_t curButtonState = 1;
	curButtonState = HAL_GPIO_ReadPin(BUTTON1_GPIO, BUTTON1_PIN);
	if (curButtonState == 0 && prevButtonState == 1)
	{
		prevButtonState = curButtonState;
		HAL_Delay(20);
		return 0;
	}
	else if (curButtonState == 1 && prevButtonState == 0)
	{
		prevButtonState = curButtonState;
		return 1;
	}
	return 0;
}

uint8_t GetButton2State(void)
{
	static uint8_t prevButtonState = 1;
	uint8_t curButtonState = 1;
	curButtonState = HAL_GPIO_ReadPin(BUTTON2_GPIO, BUTTON2_PIN);
	if (curButtonState == 0 && prevButtonState == 1)
	{
		prevButtonState = curButtonState;
		HAL_Delay(20);
		return 0;
	}
	else if (curButtonState == 1 && prevButtonState == 0)
	{
		prevButtonState = curButtonState;
		return 1;
	}
	return 0;
}

uint8_t GetButton3State(void)
{
	static uint8_t prevButtonState = 1;
	uint8_t curButtonState = 1;
	curButtonState = HAL_GPIO_ReadPin(BUTTON3_GPIO, BUTTON3_PIN);
	if (curButtonState == 0 && prevButtonState == 1)
	{
		prevButtonState = curButtonState;
		HAL_Delay(20);
		return 0;
	}
	else if (curButtonState == 1 && prevButtonState == 0)
	{
		prevButtonState = curButtonState;
		return 1;
	}
	return 0;
}

uint8_t GetButton4State(void)
{
	static uint8_t prevButtonState = 1;
	uint8_t curButtonState = 1;
	curButtonState = HAL_GPIO_ReadPin(BUTTON4_GPIO, BUTTON4_PIN);
	if (curButtonState == 0 && prevButtonState == 1)
	{
		prevButtonState = curButtonState;
		HAL_Delay(20);
		return 0;
	}
	else if (curButtonState == 1 && prevButtonState == 0)
	{
		prevButtonState = curButtonState;
		return 1;
	}
	return 0;
}
