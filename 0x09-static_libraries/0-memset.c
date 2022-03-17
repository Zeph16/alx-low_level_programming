#include "main.h"

/**
 * *_memset - fills certain amount of memory with a byte
 * @s: the memory
 * @b: the byte
 * @n: the certain amount
 *
 * Return: char pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
