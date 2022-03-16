#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
	int first = 48;
	int second = 48;
	int third = 48;
	int fourth = 48;

	while (second != 52 || first != 50)
	{
		_putchar(first);
		_putchar(second);
		_putchar(':');
		_putchar(third);
		_putchar(fourth);
		_putchar('\n');
		fourth++;
		if (fourth > 57)
		{
			fourth = 48;
			third++;
		}
		if (third > 53)
		{
			third = 48;
			fourth = 48;
			second++;
		}
		else (second > 57)
		{
			second = 48;
			first++;
		}
	}
}
