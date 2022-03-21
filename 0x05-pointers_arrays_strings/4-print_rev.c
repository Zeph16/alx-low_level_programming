#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: string to be printed
 *
 */

void print_rev(char *s)
{
	int i, end;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
