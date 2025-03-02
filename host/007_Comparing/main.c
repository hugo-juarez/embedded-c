/*
 * main.c
 *
 *  Created on: Mar 2, 2025
 *      Author: hseba
 */


#include <stdio.h>
#include <stdint.h>


int main()
{

	uint64_t income;
	float tax;

	double temp_income;

	printf("Enter income: ");
	scanf("%lf", &temp_income);

	if (temp_income < 0){
		printf("Income must be positive");
		return 0;
	}

	income = (uint64_t) temp_income;

	if (income <= 9525)
		tax = 0;
	else if (income >= 9526 && income <= 38700 )
		tax = income*.12;
	else if (income >= 38701 && income <= 82500 )
		tax = income*.22;
	else
		tax = income*.32+1000;

	printf("\nYour total tax to pay is: $%.2f", tax);
	return 0;
}
