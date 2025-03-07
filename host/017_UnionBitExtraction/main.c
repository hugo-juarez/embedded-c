/*
 * main.c
 *
 *  Created on: Mar 6, 2025
 *      Author: hseba
 */

#include <stdint.h>
#include <stdio.h>

typedef union{
	uint32_t packetValue;
		struct {
			uint32_t crc:2;
			uint32_t status:1;
			uint32_t payload:12;
			uint32_t bat:3;
			uint32_t sensor:3;
			uint32_t longAddr:8;
			uint32_t shortAddr:2;
			uint32_t addrMode:1;
		} packetFields;
} Packet_t;

int main(void)
{

	Packet_t packet;

	printf("Insert 32 bit packet: :");
	scanf("%X", &packet.packetValue);

	printf("crc\t\t:%#x\n",packet.packetFields.crc);
	printf("status\t\t:%#x\n",packet.packetFields.status);
	printf("payload\t\t:%#x\n", packet.packetFields.payload);
	printf("bat\t\t:%#x\n",packet.packetFields.bat);
	printf("sensor\t\t:%#x\n",packet.packetFields.sensor);
	printf("longAddr\t:%#x\n",packet.packetFields.longAddr);
	printf("shortAddr\t:%#x\n",packet.packetFields.shortAddr);
	printf("addrMode\t:%#x\n",packet.packetFields.addrMode);

	printf("Size of structure: %d\n", (uint32_t) sizeof(Packet_t));


	return 0;
}
