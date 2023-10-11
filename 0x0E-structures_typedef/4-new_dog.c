#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 *
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, o1, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n1 = 0; name[n1] != '\0'; n1++)
		;
	n1++;
	dog->name = malloc(sizeof(char) * n1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o1 = 0; owner[o1] != '\0'; o1++)
		;
	o1++;
	dog->owner = malloc(sizeof(char) * o1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o1; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
