#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: processed string
 */

void puts_half(char *str)
{
	int i, start;
	int len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}
	len--;
	if (len % 2 != 0)
		start = (len - 1) / 2;
	else
		start = len / 2;
	for (i = start; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
