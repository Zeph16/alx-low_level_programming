#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: processed string
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}

	if (len % 2 != 0)
		len -= 1;
	for (i = len / 2 + 1; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
