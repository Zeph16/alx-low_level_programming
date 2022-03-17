#include "main.h"

/**
 * _isdigit - Checks if value is a digit
 * @c: Char ascii value
 *
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
