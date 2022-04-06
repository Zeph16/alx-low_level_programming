#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (*argv++)
	{
		printf("%i\n", --argc);
		break;
	}

	return (0);
}
