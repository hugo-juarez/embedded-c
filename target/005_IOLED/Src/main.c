/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	uint32_t volatile *const pGPIOA = (uint32_t *) 0x40020000;
	uint32_t volatile *const pGPIOD = (uint32_t *) 0x40020C00;
	uint32_t volatile *const pRCC = (uint32_t *) (0x40023800 + 0x30);
	uint32_t const volatile *const input = (uint32_t *) 0x40020010;
	uint32_t volatile *const output = (uint32_t *) 0x40020C14;


	//Enabling clock on peripherals
	*pRCC |= 9;

	//Port mode setup 00 input 01 output
	//Reset pin
	*pGPIOA &= ~(3);

	*pGPIOD &= ~(3 << 24);
	*pGPIOD |= (1<<24);


    /* Loop forever */
	for(;;){

		uint8_t portA0 = (*input & 1);

		if (portA0)
			*output |= (1<<12);
		else
			*output &= ~(1<<12);

	}
}
