#include "main.h"

/**
 * set_bit - sets a bit of a number at a given index to 1
 * @n: the number
 * @index: the index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shifter = 1, i;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	for (i = 0; i < index; i++)
		shifter <<= 1;

	*n = *n | shifter;
	return (1);
}
