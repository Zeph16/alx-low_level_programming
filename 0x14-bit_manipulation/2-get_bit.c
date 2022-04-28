#include "main.h"

/**
 * get_bit - returns the bit of a number at a given index
 * @n: the number
 * @index: the index
 *
 * Return: the bit or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifter = 1, checker, i;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	for (i = 0; i < index; i++)
		shifter <<= 1;
	if (shifter > n)
		return (-1);
	checker = shifter & n;
	if (checker == shifter)
		return (1);
	return (0);
}
