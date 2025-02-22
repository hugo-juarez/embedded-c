/*
 * main.c
 *
 *  Created on: Feb 20, 2025
 *      Author: hseba
 */

#include <stdio.h>
#include "math.h"

int main()
{
	printf("Add : %d\n", math_add(0x0FFF1111, 0x0FFF1111));
	printf("Multiply : %I64x\n", math_mul(0x0FFF1111, 0x0FFF1111));
	printf("Division : %f\n", math_div(100, 8));
}
