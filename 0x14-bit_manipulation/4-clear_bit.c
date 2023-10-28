#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the address of the number
 * @index: the index, starting from 0 of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	mask = mask << index;
	if ((index > sizeof(unsigned int) * 8 || n == NULL))
		return (-1);
	if (((*n >> index) && 1) == 1)
		*n = mask ^ *n;
	return (1);
}
