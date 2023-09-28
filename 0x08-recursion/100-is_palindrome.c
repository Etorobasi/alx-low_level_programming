#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: given string
 *
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else 
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	return (n);
}
/**
 * strCompare - compares the characters in a given string
 * @s: string to be compared
 * @ls: left side
 * @rs: right side
 *
 * Return: returns 1 if similar or 0 if not
 */
int strCompare(char *s, int ls, int rs)
{
	if (*(s + ls) == *(s + rs))
	{
		if (ls == rs || ls == rs + 1)
		{
			return (1);
		}
		else
			return (0 + strCompare(s, ls + 1, rs - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: given string
 *
 * Return: returns 1 if true or 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
		return (strCompare(s, 0, _strlen_recursion(s) - 1));
}
