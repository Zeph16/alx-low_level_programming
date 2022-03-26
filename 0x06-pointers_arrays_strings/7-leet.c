#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: the string
 *
 * Return: char pointer to encoded string
 */

char *leet(char *s)
{
	int i;
	int j;
	char template[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; template[j] != '\0'; j++)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
