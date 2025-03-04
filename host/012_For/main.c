/*
 * main.c
 *
 *  Created on: Mar 4, 2025
 *      Author: hseba
 */


#include <stdio.h>

int main()
{

	int height;

	printf("Enter the pyramid height: ");
	scanf("%d",&height);

	for(int i=1; i<=height; i++)
	{
		for(int j=i; j>=1; j--)
			printf("%d\t",j);
		printf("\n");
	}

	return 0;
}
