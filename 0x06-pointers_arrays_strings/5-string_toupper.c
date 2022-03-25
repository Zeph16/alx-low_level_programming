#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @s: string to be changed
 *
 * Return: char pointer to changed string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	return (s);
}

