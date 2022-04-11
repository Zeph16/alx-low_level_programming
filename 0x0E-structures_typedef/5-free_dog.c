#include "dog.h"

/**
 * free_dog - frees the memory of a dog variable
 * @d: the dog variable
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
