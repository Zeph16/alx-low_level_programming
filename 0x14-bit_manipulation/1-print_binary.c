#include "main.h"

/**
 * print_binary - prints the binary of a decimal int
 * @n: the decimal
 */

void print_binary(unsigned long int n)
{
	unsigned long int shifter = 1, checker, i;
	int oneFound = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8) - 1; i++)
		shifter *= 2;
	while (shifter != 0)
	{
		checker = n & shifter;
		if (checker == shifter)
		{
			_putchar('1');
			oneFound = 1;
		}
		else if (oneFound || shifter == 1)
			_putchar('0');
		shifter >>= 1;
	}
}
