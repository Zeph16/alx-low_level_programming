#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: less than, greater than or equal to 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int ret;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[i] != '\0'; j++)
		;

	if (i > j)
		ret = s1[j];
	else if (j > i)
		ret = s2[i];
	else
		for (i = 0; s1[i] != '\0'; i++)
			if (s1[i] != s2[i])
			{
				ret = s1[i] - s2[i];
				break;
			}
	return (0);
}
