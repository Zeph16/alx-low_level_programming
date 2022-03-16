#include "main.h"

/**
 * print_last_digit - ...prints the last digit
 * @n: Number to be processes
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int ldig = n % 10;

	if (ldig < 0)
	{
		ldig *= -1;
	}
	_putchar(ldig + '0');
	return (ldig);
}
