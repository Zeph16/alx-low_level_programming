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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);

#endif
