#include "main.h"
/**
 * print_alphabet_x10 - ...prints the alphabet
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
