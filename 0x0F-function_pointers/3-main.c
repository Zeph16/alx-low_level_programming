#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a calculator
 * @argc: count of parameters passed to the executable plus one
 * @argv: the parameters passed to the executable
 *
 * Return: 0 at success; 98, 99 and 100 at Error
 */

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if (get_op_func(argv[2]) == op_div && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	if (get_op_func(argv[2]) == op_mod && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

