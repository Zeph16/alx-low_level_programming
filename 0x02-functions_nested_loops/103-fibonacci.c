#include <stdio.h>

/**
 * main - Fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	int prev = 1;
	int cur = 2;
	int temp;
	long sum = 0;


	while (1)
	{
		if (cur < 4000000)
		{
			temp = prev + cur;
			if (temp % 2 == 0)
			{
				sum += temp;
			}
			prev = cur;
			cur = temp;
		}
		else
		{
			break;
		}
	}
	if (sum != 0)
	{
		printf("%ld\n", sum);
	}
	return (0);
}
