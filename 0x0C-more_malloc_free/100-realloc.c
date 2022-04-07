#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory of a previous pointer
 * @ptr: the previous pointer
 * @old_size: previous size
 * @new_size: new size
 *
 * Return: newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *newptr;

	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		free(newptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(newptr);
		return (newptr);
	}
	if (new_size == 0)
	{
		free(newptr);
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		free(newptr);
		return (ptr);
	}
	else if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*((char *)newptr + i) = *((char *)ptr + i);
		free(ptr);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			*((char *)newptr + i) = *((char *)ptr + i);
		free(ptr);
	}

	return (newptr);
}
