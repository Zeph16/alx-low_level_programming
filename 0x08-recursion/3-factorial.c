#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number
 *
 * Return: the factorial
 */

int factorial(int n)
{
	if (n != 0)
		return (factorial(n - 1) * n);
	else
		return (1);
}
