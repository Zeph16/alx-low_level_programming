#include "dog.h"

/**
 * init_dog - initializes a struct dog variable passed by reference
 * @d: the variable
 * @name: its name
 * @age: its age
 * @owner: its owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


