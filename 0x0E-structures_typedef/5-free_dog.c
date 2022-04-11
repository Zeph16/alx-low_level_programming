#include "dog.h"

/**
 * free_dog - frees the memory of a dog variable
 * @d: the dog variable
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
