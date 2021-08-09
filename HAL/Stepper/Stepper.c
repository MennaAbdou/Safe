#include "Stepper.h"
static UINT8 DELAY_TIME = 100;// to be able to change time in (ms)




void Stepper_Init(){
#if MOTOR_TYPE == UNIPOLAR
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_A, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_B, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_C, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_D, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_E, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_F, OUTPUT);

#elif MOTOR_TYPE == BIPOLAR
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_A, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_B, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_C, OUTPUT);
	 GPIO_INIT_PIN_DIRECTION(MOTOR_PORT ,WINDING_D, OUTPUT);

#elif MOTOR_TYPE == UNIVERSAL

	GPIO_INIT_PORT_DIRECTION(MOTOR_PORT,OUTPUT);

#endif



}


void Stepper_SetSpeed(UINT8 speed)
{
	DELAY_TIME = (1/((STEPS_PER_REVOLUTION * speed)/60))*1000 ; // time in ms


}

void Stepper_SetDirection(UINT8 direction){


}


void Stepper_Step(UINT8 steps){


}

