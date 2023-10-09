#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: mininum element in the array
 * @max: maximum element in the array
 *
 * Return: returns a pointer to the allocated space in memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, q;

	if (min > max)
	{
		return (NULL);
	}

	q = (max - min) + 1;
	ptr = malloc(sizeof(int) * q);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < q; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
