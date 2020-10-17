/*
 * ADC.c
 *
 *  Created on: Nov 14, 2019
 *      Author: kccistc
 */


#include "ADC.h"

void ADC_Value_1_Write(ADC_HandleTypeDef hadc, uint32_t *ADC_Value)
{
	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[0] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[1] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[2] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[3] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[4] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Stop(&hadc);
}

void ADC_Value_2_Write(ADC_HandleTypeDef hadc, uint32_t *ADC_Value)
{
	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[0] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[1] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[2] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Start(&hadc);
	HAL_ADC_PollForConversion(&hadc, 100);
	ADC_Value[3] = HAL_ADC_GetValue(&hadc);

	HAL_ADC_Stop(&hadc);
}

void Parking_Lot_ADC(uint32_t *ADC_Value, uint8_t *flag)
{
	if(ADC_Value[0] <= ADC_CRITICAL)
	{
		ParkingLot_Empty_1();
		flag[0] = 1;
	}

	else if (ADC_Value[0] >= ADC_CRITICAL)
	{
		ParkingLot_Occ_1();
		flag[0] = 0;
	}

	if(ADC_Value[1] <= ADC_CRITICAL)
	{
		ParkingLot_Empty_2();
		flag[1] = 1;
	}

	else if (ADC_Value[1] >= ADC_CRITICAL)
	{
		ParkingLot_Occ_2();
		flag[1] = 0;
	}

	if(ADC_Value[2] <= ADC_CRITICAL)
	{
		ParkingLot_Empty_3();
		flag[2] = 1;
	}

	else if (ADC_Value[2] >= ADC_CRITICAL)
	{
		ParkingLot_Occ_3();
		flag[2] = 0;
	}

	if(ADC_Value[3] <= ADC_CRITICAL)
	{
		ParkingLot_Empty_4();
		flag[3] = 1;
	}

	else if (ADC_Value[3] >= ADC_CRITICAL)
	{
		ParkingLot_Occ_4();
		flag[3] = 0;
	}

	if(ADC_Value[4] <= ADC_CRITICAL)
	{
		ParkingLot_Empty_5();
		flag[4] = 1;
	}

	else if (ADC_Value[4] >= ADC_CRITICAL)
	{
		ParkingLot_Occ_5();
		flag[4] = 0;
	}
}

void Gate_ADC(uint32_t *ADC_Value)
{
	if( (ADC_Value[0] >= ADC_CRITICAL)/* && (parkingLot_Count != 0)*/ )	//ENT OPEN
	{
		deg_ent = 90;
		ServoRunEntrance(deg_ent);
	}

	if(ADC_Value[1] >= ADC_CRITICAL)	//ENT CLOSE
	{
		//HAL_Delay(1500);
		deg_ent = 0;
		ServoRunEntrance(deg_ent);
	}

	if(ADC_Value[2] >= ADC_CRITICAL)	//EXI OPEN
	{
		deg_ext = 90;
		ServoRunExit(deg_ext);
	}

	if(ADC_Value[3] >= ADC_CRITICAL)	//EXI CLOSE
	{
		//HAL_Delay(1500);
		deg_ext = 0;
		ServoRunExit(deg_ext);
	}
}
