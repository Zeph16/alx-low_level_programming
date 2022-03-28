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

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i)

	return (0);
}
