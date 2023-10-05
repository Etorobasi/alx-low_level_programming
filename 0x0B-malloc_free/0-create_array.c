#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: array of chars
 *
 * Return: returns NULL if size = 0, or a pointer
 * to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * (size + 1));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr = '\0';
	return (ptr);
}
