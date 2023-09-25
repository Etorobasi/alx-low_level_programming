#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer to prefix substring
 *
 * Return: returns the number of bytes in the initial
 *  segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, len;
	char *p;

	while (*s != '\0' || *s >= *accept)
	{
		if (*s == *accept)
		{
			p = s;
		}
		s++;
	}
	while (p[length] != '\0')
	{
		length++;
	}
	len = length + 1;
	return (len);
}
