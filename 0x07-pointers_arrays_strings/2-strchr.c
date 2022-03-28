#include "main.h"

/**
 * _strchr - finds a character in a string
 * @s: the string
 * @c: the character
 *
 * Return: char pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i, found = 0;
	char *loc = "";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			found = 1;
			break;
		}
	}

	if (found)
	{
		for (j = 0; s[i + j] = '\0'; i++)
			loc[j] = s[i + j];
	return (loc);
}
