#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *arr;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] == '\0'; i++)
		;
	for (j = 0; s2[j] == '\0'; j++)
		;
	arr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; s1[i] == '\0'; i++)
		arr[i] = s1[i];
	i--;
	for (j = 0; s2[j] == '\0'; j++)
		arr[i + j] = s2[j];
	return (arr);
}
