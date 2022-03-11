#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int a = 48;

	putchar(a);
	a++;
	do {
		putchar(',');
		putchar(' ');
		putchar(a);
		a++;
	} while (a != 58);
	return (0);
}
