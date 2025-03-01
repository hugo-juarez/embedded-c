/*
 * main.c
 *
 *  Created on: Mar 1, 2025
 *      Author: hseba
 */

#include <stdio.h>

int main() {

	int a, b, c;

	printf("Enter the value of the three numbers: \n");
	fflush(stdout);
	scanf("%d %d %d", &a, &b, &c);

	printf("The average is: %f\n", (a+b+c)/3.0 );
	printf("Enter a key to exit: \n");
	fflush(stdout);
	while (getchar() != '\n');
	getchar();

	return 0;
}

