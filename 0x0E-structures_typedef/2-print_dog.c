#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("nil");
		else
			printf("Age: %f\n", d->age);
		if (!(d->owner))
			printf("nil");
		else
			printf("Owner: %s\n", d->owner);
	}
}
