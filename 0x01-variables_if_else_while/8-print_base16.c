#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	a = 97;
	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
