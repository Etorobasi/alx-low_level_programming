#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number1
 * @m: number2
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result;
	unsigned int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 0)
			count++;
		result = result >> 1;
	}
	return (count);
}
