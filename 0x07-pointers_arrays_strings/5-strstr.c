#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: main string to be searched
 * @needle: substring to be located in mainstring
 *
 * Return: returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0' || *haystack >= *needle)
	{
		if (*haystack == *needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
