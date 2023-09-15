#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: the number of diagonal lines to be printed
 */
void print_diagonal(int n)
{
	int c;
	int b;

	if (n > 0)
	{
		b = 0;
		while (n > 0)
		{
			c = b;
			while (c > 0)
			{
				_putchar(' ');
				c--;
			}
			_putchar('\\');
			_putchar('\n');
			b++;
			n--;
		}
	}
	else if (n <= 0)
	_putchar('\n');
}
