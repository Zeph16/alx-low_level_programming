#ifndef DOGE
#define DOGE

/**
 * struct dog - ...it's a dog structure with a name, an age and an owner
 * @name: its name
 * @age: its age
 * @owner: its owner
 */
#include <stdlib.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
