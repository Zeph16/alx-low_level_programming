#include <stdio.h>

/**
 * main - Fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long prev = 1;
	unsigned long cur = 2;
	unsigned long temp;

	printf("1, 2, ");
	for (i = 2; i < 98; i++)
	{
		temp = prev + cur;
		printf("%lu", temp);
		prev = cur;
		cur = temp;
		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
