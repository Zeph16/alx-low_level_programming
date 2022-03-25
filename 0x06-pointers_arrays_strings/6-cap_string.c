#include "main.h"

/**
 * cap_string - capitalizes the first letter of all words in a string
 * @s: the string
 *
 * Return: char pointer to processed string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
			if (s[i] >= 97 && s[i] <= 122)
				s[i + 1] -= 32;

		if (s[i] == ' ' || s[i] == '\n' || s[i] == ',' || s[i] == '.'
			|| s[i] == '!' || s[i] == '"' || s[i] == '(' || s[i] == '{'
			|| s[i] == '\t' || s[i] == ')' || s[i] == '}' || s[i] == ';'
			|| s[i] == '?')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
