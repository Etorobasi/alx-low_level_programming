#include <stdio.h>

/**
 * main - the main function of 100-print_comb3.c program
 *
 * Return: This program returns a value of 0
 */
int main(void)
{
	int num;
	int comb;

	for (num = 0; num <= 9; num++)
	{
		for (comb = num + 1; comb <= 9; comb++)
		{
			putchar(num + '0');

			putchar(comb + '0');

			if (num < 8 || comb < 9)
			{
				putchar(',');

				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
