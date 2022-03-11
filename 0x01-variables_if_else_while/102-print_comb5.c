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
	int fourth = 48;

	while (first < 58)
	{
		while (second < 58)
		{
			while (third < 58)
			{
				while (fourth < 58)
				{
					if (third > first || (third == first && fourth > second))
					{
						putchar(first);
						putchar(second);
						putchar (' ');
						putchar(third);
						putchar(fourth);
						if (first != 57 || second != 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
					fourth++;
				}
				fourth = 48;
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

