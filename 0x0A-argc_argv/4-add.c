#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of numbers
 * @argv: the numbers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (argv[argc][i] < 48 || argv[argc][i] > 57)
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);

	return (0);
}

