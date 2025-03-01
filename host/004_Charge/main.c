/*
 * main.c
 *
 *  Created on: Mar 1, 2025
 *      Author: hseba
 */

#include <stdio.h>

int main() {

	double charge, electron;

	printf("Enter the charge: ");
	fflush(stdout);
	scanf("%lf", &charge);

	printf("Enter the charge of electron: ");
	fflush(stdout);
	scanf("%le", &electron);

	printf("Number of electrons: %le", (charge/electron)*-1);


	return 0;
}

