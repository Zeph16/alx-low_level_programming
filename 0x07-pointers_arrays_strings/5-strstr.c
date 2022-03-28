#include "main.h"
/**
 *_strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: pointer to start of substring in striing
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
