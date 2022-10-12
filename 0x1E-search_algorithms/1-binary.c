#include "search_algos.h"
#include <stddef.h>

/**
* recursive - searches through an array using the binary search algorithm
*
* @array: the array
* @size: the size of the array
* @value: the value to be searched
* Return: the index of the value in the array
*/
int recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");
	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf(": %d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");

	if (mid != 0 && size % 2 == 0)
		mid--;
	if (value == array[mid])
		return ((int)mid);
	if (value < array[mid])
		return (recursive(array, mid, value));

	mid++;
	return (recursive(array + mid, size - mid, value) + mid);
}

/**
* binary_search - manages the return value of the recursive function
*
* @array: the array
* @size: the size of the array
* @value: the value t be searched
* Return: the index of the value in the array
*/
int binary_search(int *array, size_t size, int value)
{
	int index = recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
