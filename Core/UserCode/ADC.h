/*
 * ADC.h
 *
 *  Created on: Nov 14, 2019
 *      Author: kccistc
 */

#ifndef ADC_H_
#define ADC_H_

#include "main.h"

void ADC_Value_1_Write(ADC_HandleTypeDef hadc, uint32_t *ADC_Value);
void ADC_Value_2_Write(ADC_HandleTypeDef hadc, uint32_t *ADC_Value);
void Parking_Lot_ADC(uint32_t *ADC_Value, uint8_t *flag);
void Gate_ADC(uint32_t *ADC_Value);
#endif /* ADC_H_ */
