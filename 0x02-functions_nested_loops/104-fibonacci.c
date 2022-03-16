#include <stdio.h>

/**
 * main - Fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	double prev = 1;
	double cur = 2;
	double temp;

	printf("1, 2, ");
	for (i = 2; i < 98; i++)
	{
		temp = prev + cur;
		printf("%.0f", temp);
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
