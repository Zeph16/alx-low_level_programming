#include "main.h"

/**
 * clear_bit - sets a bit of a number at a given index to 0
 * @n: the number
 * @index: the index
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shifter = 1, i;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	for (i = 0; i < index; i++)
		shifter <<= 1;
	shifter = ~shifter;
	*n = *n & shifter;
	return (1);
}
