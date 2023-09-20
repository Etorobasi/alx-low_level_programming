#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = 0, i;
	int n;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
		for (i = n; i < length; i++)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		for (i = n; i < length; i++)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
