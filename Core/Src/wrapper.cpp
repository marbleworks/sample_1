#include <main.h>

//extern"C"{
//	void main_cpp(){
//		while (true) {
//			HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
//			HAL_Delay(1000);
//			HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
//			HAL_Delay(1000);
//		}
//	}
// }

extern "C" {
	extern TIM_HandleTypeDef htim1;//TIM2ならhtim2、TIM3ならhtim3と書く。
	void main_cpp(){
		HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_9, GPIO_PIN_SET);
		__HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, 500);
	}
}

