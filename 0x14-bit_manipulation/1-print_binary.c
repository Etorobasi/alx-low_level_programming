#include "main.h"

/**
 * printz - prints the binary representation of a number recursively
 * @n: the number
 */
void printz(unsigned long int n)
{
	if (n == 0)
		return;
	printz(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		printz(n);
}
