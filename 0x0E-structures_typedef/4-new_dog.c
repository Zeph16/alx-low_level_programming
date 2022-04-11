#include "dog.h"

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

/**
 * new_dog - creates a new dog variable
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Return: a dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;
	int i;
	char *dupname, *dupowner;

	if (name == NULL || owner == NULL)
		return (NULL);
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	dupname = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dupname == NULL)
	{
		free(doge);
		return (NULL);
	}
	dupowner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dupowner == NULL)
	{
		free(doge);
		free(dupname);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		dupname[i] = name[i];
	dupname[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		dupowner[i] = owner[i];
	dupowner[i] = '\0';

	doge->name = name;
	doge->age = age;
	doge->owner = owner;
	return (doge);
}
