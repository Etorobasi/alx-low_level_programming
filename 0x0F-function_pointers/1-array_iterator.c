#include "function_pointers.h"

/**
 * array_iterator - executes a function passed as a parameter
 * on each element of a given array
 * @array: an array
 * @size: size of array
 * @action: pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
