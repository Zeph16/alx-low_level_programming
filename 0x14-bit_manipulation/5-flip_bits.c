#include "main.h"

/**
 * flip_bits - counts the number of toggles needed to turn n into m
 * @n: n
 * @m: m
 *
 * Return: the count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, checker = 1;
	unsigned int count = 0, i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (checker == (diff & checker))
			count++;
		checker <<= 1;
	}
	return (count);
}
