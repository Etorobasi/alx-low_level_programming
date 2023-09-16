#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle to be printed
 */
void print_triangle(int size)
{
	int c;
	int b;

	if (size > 0)
	{
		b = 0;
		while (b <= c) 
		{
			c = size;
			while (c > 0)
			{
				_putchar(' ');
				c--;
			}
			_putchar('#');
			_putchar('\n');
			b++;
			size--;
		}
	}
	else if (size <= 0)
	_putchar('\n');
}
