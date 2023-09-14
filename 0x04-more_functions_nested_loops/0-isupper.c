#include "main.h"

/**
 * _isupper - checks for uppercase alphabets
 * @c: The character to be checked
 *
 * Return: 1 is c is an uppercase alphabet, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
