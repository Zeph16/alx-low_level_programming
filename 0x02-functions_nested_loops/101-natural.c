#include <stdio.h>

/**
 * main - multiples of 3 and 5 sum
 *
 * Return: Always 0
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", sum);
	return (0);
}

