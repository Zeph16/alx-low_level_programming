#include "main.h"

/**
 * more_numbers - prints 0 - 14
 */

void more_numbers(void)
{
	int i = 48;
	int j = 0;
	int k;

	for (k = 0; k < 10; k++)
	{
		while (j < 53)
		{
			_putchar(i);
			if (j > 47)
				_putchar(j++);
			if (i == 57)
			{
				i = 49;
				j = 48;
			}
			if (j == 0)
				i++;
		}
		_putchar('\n');
		i = 48;
		j = 0;
	}
}

