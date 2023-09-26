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
	int i, j, k;
	char *str;

	str = haystack;
	for (i = 0; haystack[i] != '\0'; ++i)
	{
		for (j = 0; needle[j] != '\0'; ++j)
		{
			k = 0;
			if (haystack[i + j] == needle[j])
			{
				str[k] = haystack[j];
				str++;
				continue;
			}
			return (str);
			if (needle[j] == '\0')
			{
				break;
			}
		}
	}
	return (NULL);
}
