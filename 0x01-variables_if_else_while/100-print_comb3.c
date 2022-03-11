#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int first = 48;
	int second = 48;

	while (first < 58)
	{
		while (second < 58)
		{
			if (second > first)
			{
				putchar(first);
				putchar(second);
				if (first != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		second = 48;
		first++;
	}
	putchar('\n');
	return (0);
}
