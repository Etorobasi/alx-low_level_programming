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

	while (i < n)
	{
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
