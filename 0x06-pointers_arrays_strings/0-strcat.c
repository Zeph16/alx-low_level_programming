#include "main.h"

/**
 * _strcat - concatenates src to dest
 * @dest: destination
 * @src: source
 *
 * Return: Char pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	return (*dest);
}
