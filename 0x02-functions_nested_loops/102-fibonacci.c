#include <stdio.h>

/**
 * main - Fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long prev = 1;
	long cur = 2;
	long temp;

	printf("1, 2, ");
	for (i = 2; i < 50; i++)
	{
		temp = prev + cur;
		printf("%ld", temp);
		prev = cur;
		cur = temp;
		if (i != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
