#include "search_algos.h"

/**
* jump_search - searches through an array using the jump search algorithm
*
* @array: the array
* @size: the size of the array
* @value: the value to be searched
* Return: the index of the value in the array
*/
int jump_search(int *array, size_t size, int value)
{
	int step, index = 0, prev = 0;

	if (array == NULL || size == 0)
		return (-1);
	step = (int)sqrt((double)size);

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		prev = index;
		index += step;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	while (prev <= index && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
