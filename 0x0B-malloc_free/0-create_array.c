#include "main.h"
#include <stdlib.h>

/**
 * create_array - returns a character array of a certain size
 * @size: the certain size
 * @c: the character array
 *
 * Return: the character array
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;
	
	if (size == 0)
		return (arr);
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
		return (arr);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
