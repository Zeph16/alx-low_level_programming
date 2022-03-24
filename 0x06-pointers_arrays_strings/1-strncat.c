#include "main.h"

/**
 * _strcat - concatenates n number of bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: Char pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[len + i] = src[i];
	return (dest);
}
