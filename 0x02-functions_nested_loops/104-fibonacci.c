#include <stdio.h>

/**
 * main - Fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	float prev = 1;
	float cur = 2;
	float temp;

	printf("1, 2, ");
	for (i = 2; i < 98; i++)
	{
		temp = prev + cur;
		prev = cur;
		cur = temp;
		printf("%.0f", temp);
		if (i != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
