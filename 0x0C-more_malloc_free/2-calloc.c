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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
