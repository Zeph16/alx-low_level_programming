#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string to be printed
 *
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
