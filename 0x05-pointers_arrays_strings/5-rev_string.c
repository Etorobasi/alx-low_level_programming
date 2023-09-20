#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
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
