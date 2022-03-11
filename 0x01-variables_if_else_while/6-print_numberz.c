#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char a = 48;

	do {
		putchar(a);
		a++;
	} while (a != 58);
	putchar('\n');
	return (0);
}
