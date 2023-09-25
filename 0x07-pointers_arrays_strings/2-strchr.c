#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to be searched
 * @c: character to be located in string
 *
 * Return: Returns a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *p;

	while (*s != '\0' || *s >= c)
	{
		if (*s == c)
		{
			p = s;
			return (p);
		}
		s++;
	}
	return (NULL);
}
