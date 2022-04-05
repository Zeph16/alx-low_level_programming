#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2d int array
 * @width: the width
 * @height: the height
 *
 * Return: the 2d int array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *oned;
	int **twod;

	if (width == 0 || height == 0)
		return (NULL);

	oned = malloc(sizeof(int) * width);
	if (oned == NULL)
		return (NULL);
	twod = malloc(sizeof(oned) * height);
	if (twod == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twod[i][j] = 0;
		}
	}

	return (twod);
}
