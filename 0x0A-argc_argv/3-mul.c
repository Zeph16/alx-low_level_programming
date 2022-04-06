#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of numbers
 * @argv: the numbers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
