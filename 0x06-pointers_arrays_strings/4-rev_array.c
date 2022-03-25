#include "main.h"

/**
 * reverse_array - reverses an int array
 * @a: array to be reversed
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		if (i == n / 2 && n % 2 != 0)
		{
			i++;
			temp = a[i];
			a[i] = a[n - i];
			a[n - i] = temp;
		}

	}
}
