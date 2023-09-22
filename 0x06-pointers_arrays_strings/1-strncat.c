#include "main.h"

/**
 * _strncat - this function that concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * @n: maximum bytes from src to be used
 *
 * Return: returns a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
