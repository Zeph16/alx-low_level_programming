#include "variadic_functions.h"

/**
 * sum_them_all - adds an unknown number of integers
 * @n: number of integers
 * @...: the integers
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}

