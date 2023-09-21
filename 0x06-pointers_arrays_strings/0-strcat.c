#include "main.h"

/**
 * _strcat - that concatenates two strings
 * @dest: string to be appended to
 * @src: string to be appended
 *
 * Return: returns a pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, n;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (n = 0; src[n]; n++)
	{
		dest[length] = src[n];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
