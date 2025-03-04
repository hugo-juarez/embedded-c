/*
 * main.c
 *
 *  Created on: Mar 4, 2025
 *      Author: hseba
 */


#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);

	printf("The even numbers between %d and %d are: \n", a, b);

	if(a % 2 != 0)
		a++;


	while(a<=b){
		printf("%d\t", a);
		a +=2;
	}
}
