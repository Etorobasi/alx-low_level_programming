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
	for (; *haystack != '\0'; haystack++)
	{
		char *str = haystack;
		char *sub = needle;

		while (*str == *sub && *sub != '\0')
		{
			sub++;
			str++;
		}
		if (*sub == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
