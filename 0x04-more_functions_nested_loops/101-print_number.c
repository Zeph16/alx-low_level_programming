#include "main.h"

/**
 * print_number - prints a number using putchar
 * @n - number to be printed
 */

void print_number(int n)
{
	int dup, dup2, i;
	int counter = 0;
	int multiplier = 1;

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		n = -n - 1;
	}
	dup = n + 1;
	dup2 = n + 1;

	while (dup != 0)
	{
		dup /= 10;
		counter++;
	}
	for (i = 0; i < counter - 1; i++)
	{
		multiplier *= 10;
	}
	for (i = 0; i < c; i++)
	{
		_putchar(dup2 / multiplier + '0');
		dup2 %= multiplier;
		multiplier /= 10;
	}
}
