/*
 * main.c
 *
 *  Created on: Mar 1, 2025
 *      Author: hseba
 */

#include <stdio.h>
#include <stdint.h>

int main(){

	uint8_t age;

	printf("Please enter your age: ");
	scanf("%u", &age);

	printf("Age: %u\n", age);

	if (age>17)
		printf("Congratulations you can vote!");
	else
		printf("Sorry can't vote");

	return 0;
}
