#include "dog.h"

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
	
	if (name == NULL || dog == NULL)
		return (NULL);
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	doge->name = name;
	doge->age = age;
	doge->owner = owner;
	return (doge);
}
