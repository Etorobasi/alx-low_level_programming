#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements in the array
 * @size: amount of space in memory to be allocated
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(size) * (nmemb - 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
