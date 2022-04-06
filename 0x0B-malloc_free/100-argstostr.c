#include "main.h"

/**
 * argstostr - concatenates strings
 * @ac: the number of strings
 * @av: the strings
 *
 * Return: the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, index, mem = 0;
	char *concat;

	if (ac == 0 || av == null)
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


