#include "main.h"

/**
 * wildcmp - compares two strings, the second string may contain wildcards
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if strings are similar, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
