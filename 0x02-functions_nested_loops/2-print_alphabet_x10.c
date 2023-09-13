#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char j;
	int k = 0;

	while (k <= 9)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		k++;
	}
}
