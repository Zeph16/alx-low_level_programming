#include "main.h"

/**
 * _memcpy - copies a number of bytes from src into dest
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 *
 * Return: char pointer to result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
