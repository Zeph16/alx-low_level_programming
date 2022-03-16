#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			if (prod >= 10)
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (prod < 10 && prod != 0)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
