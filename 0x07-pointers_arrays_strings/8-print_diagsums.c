#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal summaries
 * @a: array
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size * size; i += (size + 1))
		d1 += a[ini];
	for (i = size - 1; i < (size * size) - (size - 1); i += (size - 1))
		d2 += a[i];
	printf("%d, %d\n", d1, d2);
}
