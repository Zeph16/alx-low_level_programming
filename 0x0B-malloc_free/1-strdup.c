#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *arr = NULL;

	if (str == NULL)
		return (str);
	for (i = 0; str[i] != '\0'; i++)
		;
	if (i == 0)
		return (arr);
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (arr);
	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];
	return (arr);
}



