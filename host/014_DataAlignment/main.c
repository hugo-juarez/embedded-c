/*
 * main.c
 *
 *  Created on: Mar 6, 2025
 *      Author: hseba
 */

#include <stdint.h>
#include <stdio.h>

typedef struct
{
	char data1;
	int data2;
	char data3;
	short data4;
} DataSet_t;

int main(void)
{
	DataSet_t data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;

	uint8_t *ptr = (uint8_t*) &data;

	uint32_t totalSize = sizeof(DataSet_t);

	printf("Memory address		Content\n");
	printf("===========================\n");

	for (uint32_t i=0; i<totalSize; i++)
	{
		printf("%p		%X\n",ptr, *ptr);
		ptr++;
	}

	printf("Total memory consumed by this struct variable = %I64u\n", totalSize);

	getchar();

	return 0;

}
