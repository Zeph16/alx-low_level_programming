#include "function_pointers.h"

/**
 * print_name - prints a name via a provided function
 * @name: the name
 * @f: the provided function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
