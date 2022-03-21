#include "main.h"

/**
 * _strlen - evaluates the length of a string
 * @s: string to be evaluated
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	return (len);
}
