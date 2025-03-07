/*
 * main.c
 *
 *  Created on: Mar 5, 2025
 *      Author: hseba
 */

#include <stdint.h>
#include <stdio.h>

struct carModel
{
	unsigned int carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)

{

	struct carModel carBMW = {2021,15000,220,1330}; //C89
	struct carModel carFord = {4031, 35000,160, 1900.96}; // C89
	struct carModel carHonda = {.carWeight = 90.90, .carPrice = 15000}; //C99

	return 0;

}
