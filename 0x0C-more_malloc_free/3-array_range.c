#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an int array from a minimum value to a maximum value
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: an int pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr, i, j = 0;

	if (max < min)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++, j++)
		arr[j] = i;
	return (arr);
}

