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
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				len = 1;
			}
			len++;
		}
	}
	return (len);
}
