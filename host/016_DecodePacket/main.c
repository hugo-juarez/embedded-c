/*
 * main.c
 *
 *  Created on: Mar 6, 2025
 *      Author: hseba
 */

#include <stdint.h>
#include <stdio.h>

typedef struct {
	uint32_t crc:2;
	uint32_t status:1;
	uint32_t payload:12;
	uint32_t bat:3;
	uint32_t sensor:3;
	uint32_t longAddr:8;
	uint32_t shortAddr:2;
	uint32_t addrMode:1;
} Packet_t;

int main(void)
{

	Packet_t packet;
	uint32_t input;

	printf("Insert 32 bit packet: :");
	scanf("%X", &input);

	packet.crc = (uint8_t)((input >> 0) & 0x3);
	packet.status = (uint8_t)((input >> 2) & 0x1);
	packet.payload = (uint16_t)((input >> 3) & 0xFFF);
	packet.bat = (uint8_t)((input >> 15) & 0x7);
	packet.sensor = (uint8_t)((input >> 18) & 0x7);
	packet.longAddr = (uint8_t) (input >> 21);
	packet.shortAddr = (uint8_t)((input >> 29) & 0x3);
	packet.addrMode = (uint8_t)((input >> 31) & 0x1);

	printf("crc\t\t:%#x\n",packet.crc);
	printf("status\t\t:%#x\n",packet.status);
	printf("payload\t\t:%#x\n", packet.payload);
	printf("bat\t\t:%#x\n",packet.bat);
	printf("sensor\t\t:%#x\n",packet.sensor);
	printf("longAddr\t:%#x\n",packet.longAddr);
	printf("shortAddr\t:%#x\n",packet.shortAddr);
	printf("addrMode\t:%#x\n",packet.addrMode);

	printf("Size of structure: %d\n", (uint32_t) sizeof(Packet_t));


	return 0;
}
