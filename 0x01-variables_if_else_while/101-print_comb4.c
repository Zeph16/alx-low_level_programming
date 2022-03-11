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
	int third = 48;

	while (first < 58)
	{
		while (second < 58)
		{
			while (third < 58)
			{
				if (second > first && third > second)
				{
					putchar(first);
					putchar(second);
					putchar(third);
					if (first != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
				third++;
			}
			third = 48;
			second++;
		}
		second = 48;
		first++;
	}
	putchar('\n');
	return (0);
}
