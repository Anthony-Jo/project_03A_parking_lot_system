/*
 * FSM.c
 *
 *  Created on: Nov 19, 2019
 *      Author: kccistc
 */

#include "FSM.h"

void Message_OutPut(uint8_t count, char *string)
{
	switch(count)
	{
	case 0:
		sprintf(string, "Sorry, is FULL  ");
		break;
	case 1:
		sprintf(string, "Welcome, so BUSY");
		break;
	case 2:
		sprintf(string, "Welcome, so BUSY");
		break;
	case 3:
		sprintf(string, "Welcome, so BUSY");
		break;
	case 4:
		sprintf(string, "Welcome, is FREE");
		break;
	case 5:
		sprintf(string, "Welcome, is FREE");
	}
}

void Lift_Control(void)
{
	if( (GetButton1State() == 1) && (floor == 0))
	{
		motor_Flag = 1;
	}

	else if( (GetButton2State() == 1) && (floor == 1))
	{
		motor_Flag = 2;
	}
}

void Lift_Control_BT(uint8_t BT_Data)
{
	if(BT_Data == 'U' && floor == 0)
	{
		motor_Flag = 1;
	}

	if(BT_Data == 'D' && floor == 1)
	{
		motor_Flag = 2;
	}
}

void Gate_Control_BT(uint8_t BT_Data)
{
	if(BT_Data == 'N')
	{
		if(deg_ent == 0)
		{
			deg_ent = 90;
			ServoRunEntrance(deg_ent);
		}

		else if(deg_ent == 90)
		{
			deg_ent = 0;
			ServoRunEntrance(deg_ent);
		}
	}

	if (BT_Data == 'X')
	{
		if(deg_ext == 0)
		{
			deg_ext = 90;
			ServoRunExit(deg_ext);
		}

		else if(deg_ext == 90)
		{
			deg_ext = 0;
			ServoRunExit(deg_ext);
		}
	}
}

void Lift_Action(void)
{
	if(motor_Flag == 0)
	{
		motor_count = 0;
		StepMotorStop();
	}

	if(motor_Flag == 1)
	{
		motor_count++;
		StepMotorCW(motor_count % 4);
		if(motor_count >= 10000)
		{
			floor = 1;
			motor_Flag = 0;
		}
	}

	if(motor_Flag == 2)
	{
		motor_count++;
		StepMotorCCW(motor_count % 4);
		if(motor_count >= 10000)
		{
			floor = 0;
			motor_Flag = 0;
		}
	}
}
