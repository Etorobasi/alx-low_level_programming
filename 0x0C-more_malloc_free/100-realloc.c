#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of byte of previously allocated memory
 * @new_size: size of byte to be allocated in new memory
 *
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	char *oldPtr = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		return (newPtr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	newPtr = malloc(new_size);
	if (newPtr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
	{
		newPtr[i] = oldPtr[i];
	}
	free(ptr);
	return (newPtr);
}
