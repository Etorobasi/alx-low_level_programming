#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all the letters of the alphabet in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
