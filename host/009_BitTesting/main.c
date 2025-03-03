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

	printf("Enter number: ");
	scanf("%d",&num);

	if(num & 1)
		printf("%d is an odd number!", num);
	else
		printf("%d is an even number!", num);

	return 0;
}
