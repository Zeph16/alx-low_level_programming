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
	int **twod;

	if (width < 0 || height < 0)
		return (NULL);

	twod = malloc(sizeof(int*) * height);
	if (twod == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		twod[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			twod[i][j] = 0;
		}
	}

	return (twod);
}
