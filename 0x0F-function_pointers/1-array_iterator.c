#include "function_pointers.h"

/**
 * array_iterator - prints the elements of an array via a provided function
 * @array: the array
 * @size: the size of the array
 * @action: the provided function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
