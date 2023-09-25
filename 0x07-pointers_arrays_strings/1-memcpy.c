#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;

	while (j < n)
	{
		for (i = 0; src[n]; i++)
		{
			dest[i] = src[j];
			n++;
		}
		j++;
	}
	dest[n] = '\0';

	return (dest);
}
