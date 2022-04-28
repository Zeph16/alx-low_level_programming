#include "main.h"

/**
 * get_endianness - returns the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *littleEndian = (char*)&num;

	if (*littleEndian)
		return (1);
	return (0);
}
