#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the corresponding operation function
 * @s: the operation
 *
 * Return: the function name
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 5;

	while (i--)
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	return (NULL);
}
