#include "main.h"

/**
 * print_triangle - ...prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size; j > size - i; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
	}
}
