#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of byte(s) to be allocated in memory
 *
 * Return: a pointer to the allocated memory, or 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (malloc(b));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
