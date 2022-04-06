#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv);
	return (0);
}
