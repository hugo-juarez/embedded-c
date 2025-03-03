/*
 * main.c
 *
 *  Created on: Mar 3, 2025
 *      Author: hseba
 */


#include <stdio.h>

int main()
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("New number is: %d", num | 0b01001000);

	return 0;
}
