#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to be concatenated
 *
 * Return: returns a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len2 > n)
		len2 = n;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptr[i + len1] = s2[i];
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
