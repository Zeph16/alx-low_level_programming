#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: the string
 *
 * Return: the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, j, len = 0, count = 0, pow = 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			for (j = 0; j < count; j++)
				pow *= 2;
			num += pow;
			pow = 1;
		}
		count++;
	}
	return (num);
}


