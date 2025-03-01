/*
 * main.c
 *
 *  Created on: Mar 1, 2025
 *      Author: hseba
 */

#include <stdio.h>

int main()
{
	char value = 100;
	printf("Address of value: %p\n", &value);

	char *address = &value;

	printf("Value hold is: %d\n", *address);

	*address = 65;

	printf("Value AFTER change holds: %d\n", *address);


	return 0;

}
