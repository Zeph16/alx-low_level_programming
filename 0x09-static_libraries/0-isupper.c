#include "main.h"

/**
 * _isupper - Checks if char is uppercase
 * @c: Char ascii value
 *
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
