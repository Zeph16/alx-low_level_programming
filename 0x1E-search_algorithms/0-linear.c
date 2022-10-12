#include "search_algos.h"

/**
* linear_search - searches through an array using the linear search algorithm
*
* @array: the array
* @size: the size of the array
* @value: the value to be searched
* Return: index of the value or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

