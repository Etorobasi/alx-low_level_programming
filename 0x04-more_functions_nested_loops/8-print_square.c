#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of square
 */
void print_square(int size)
{
	int b;
	int c;

	if (size > 0)
	{
		b = 0;
		while (b < size)
		{
			c = 0;
			while (c < size)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			b++;
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
