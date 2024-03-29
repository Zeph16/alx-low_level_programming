#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - divides a string into words
 * @str: the string
 *
 * Return: the words
 */

char **strtow(char *str)
{
	unsigned int i;
	int si, j = 0;
	int wordsnum = 0;
	int wordsi = 0;
	char **words;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ' && i != 0)
			wordsnum++;
		else if (str[i + 1] == '\0' && str[i] != ' ')
			wordsnum++;
	}
	printf("%i\n", wordsnum);
	words = malloc(wordsnum * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (si = 0; si < wordsnum; i++)
	{
		words[si] = malloc(100 * sizeof(char));
		if (words[si] == NULL)
		{
			free(words[si]);
			return (NULL);
		}
	}

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ' && i != 0)
		{
			words[wordsi][j] = '\0';
			wordsi++;
			j = 0;
		}
		else if (str[i + 1] == '\0' && str[i] != '0')
			words[wordsi][j] = '\0';
		else
		{
			words[wordsi][j] = str[i];
			j++;
		}
	}

	return (words);
}
	


