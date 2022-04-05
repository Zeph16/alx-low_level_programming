#include "main.h"

/**
 * create_array - returns a character array of a certain size
 * @size: the certain size
 * @c: the character array
 *
 * Return: the character array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
