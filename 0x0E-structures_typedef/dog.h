#ifndef DOGE
#define DOGE

#include <stdlib.h>

/**
 * struct dog - ...it's a dog structure with a name, an age and an owner
 * @name: its name
 * @age: its age
 * @owner: its owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
