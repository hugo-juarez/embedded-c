/*
 * main.c
 *
 *  Created on: Mar 3, 2025
 *      Author: hseba
 */

#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter 2 int numbers: ");
	scanf("%d%d", &a, &b);

	printf("\nAND &: %d", a&b);
	printf("\nOR |: %d", a|b);
	printf("\nXOR ^: %d", a^b);
	printf("\nNOT ~A: %d", ~a);

	return 0;
}
