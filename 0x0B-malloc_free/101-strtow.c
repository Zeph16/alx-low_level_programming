#include "main.h"
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
	unsigned int ui;
	int i, j = 0;
	int wordsnum = 0;
	int wordsi = 0;
	char *words;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	for (ui = 0; ui < strlen(str); ui++)
	{
		if (str[ui] == ' ' && ui != 0)
			wordsnum++;
		else if (str[ui + 1] == '\0' && str[ui] != ' ')
			wordsnum++;
	}

	words = malloc(wordsnum * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	for (i = 0; i < wordsnum; i++)
	{
		words[i] = malloc(100 * sizeof(char));
		if (words[i] == NULL)
		{
			free(words[i]);
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
	


