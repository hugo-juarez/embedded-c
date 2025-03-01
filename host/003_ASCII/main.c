/*
 * main.c
 *
 *  Created on: Mar 1, 2025
 *      Author: hseba
 */

#include <stdio.h>

int main() {

	char a, b, c, d, e, f;

	printf("Enter 6 characters: ");
	fflush(stdout);

	scanf("%c %c %c %c %c %c", &a, &b, &c, &d, &e, &f);

	printf("The ASCII is: %u %u %u %u %u %u", a, b, c, d, e, f);

	return 0;
}
