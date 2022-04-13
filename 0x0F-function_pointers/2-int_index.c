#include "function_pointers.h"

/**
 * int_index - returns the index of an integer in an array
 * @array: the array
 * @size: the size
 * @cmp: function that provides searching method
 *
 * Return: the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (size <= 0)
		return (-1);
	if (array != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (0);
	return (-1);
}
