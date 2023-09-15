#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: number of lines to be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar(95 * n);
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
