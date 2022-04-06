#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates strings
 * @ac: the number of strings
 * @av: the strings
 *
 * Return: the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, index, mem = 0;
	unsigned int j;
	char *concat;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		mem += strlen(av[i]) + 1;
	mem++;
	concat = malloc(sizeof(char) * mem);
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			concat[index] = av[i][j];
			index++;
		}
		concat[index] = '\n';
		index++;
	}
	return (concat);
}


