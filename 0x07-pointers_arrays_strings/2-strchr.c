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
	int i;
	char *loc;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			*loc = c;
	if (*loc != c)
		return (NULL);
	return (loc);
}
