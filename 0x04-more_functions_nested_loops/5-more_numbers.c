#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 */
void more_numbers(void)
{
	char a = 0;
	char b;

	while (a <= 10)
	{
		b = 0;
		while (b <= 14)
		{
			_putchar((char)b / 10 + '0');
			_putchar((char)b % 10 + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
