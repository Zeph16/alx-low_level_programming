#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints a certain amount of numbers
 * @separator: character between numbers
 * @n: the certain amount
 * @...: the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d", va_arg(nums, int));
	}
	if (n != 0)
		printf("%d\n", va_arg(nums, int));
	va_end(nums);
}
