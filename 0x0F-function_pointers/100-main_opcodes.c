#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a certain number of bytes of its operation code
 * @argc: number of main arguments (expected to be one plus one)
 * @argv: the main arguments (expected to be the number of bytes)
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < (atoi(argv[1]) - 1); i++)
		printf("%02hhx ", ((char *) main)[i]);
	printf("%02hhx\n", ((char *) main)[i]);
	return (0);
}

