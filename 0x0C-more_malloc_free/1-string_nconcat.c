#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates string 1 and some bytes of string 2
 * @s1: string 1
 * @s2: string 2
 * @n: some amount of bytes
 *
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;

	if (strlen(s1) <= n)
		concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	else
		concat = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		if ((strlen(s2)) < n && j >= strlen(s2) + i)
			break;
		concat[i + j] = s2[j];
	}
	concat[j + i] = '\0';

	return (concat);
}
