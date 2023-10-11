#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @struct dog - new type
 * @d: a struct
 * @name: pointer to a name
 * @age: pointer to an age
 * @owner: pointer to name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
