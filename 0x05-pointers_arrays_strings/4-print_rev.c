#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: reversed string
 */
void print_rev(char *s)
{
	int length = 0, i, j;

	while (s[length] != '\0')
	{
		length++;
	}
	j = length - 1;
	for (i = 0; i < length; i++)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
