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

	printf("Before: data.data1 = %X\n", data.data1);

	DataSet_t *pData = &data;

	pData->data1 = 0x55;

	printf("After: data.data1 = %X\n", data.data1);

	getchar();

	return 0;

}
