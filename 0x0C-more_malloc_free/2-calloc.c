#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each member
 *
 * Return: a void pointer for the memory;
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
