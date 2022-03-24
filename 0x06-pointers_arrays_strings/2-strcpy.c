#include "main.h"

/**
 * _strcpy - copies n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: Char pointer to copied string
 */

char *_strcpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
