#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: The return value is 0
 */
int main(void)
{
	int num;
	int numb;

	for (num = 0; num <= 99; num++)
	{
		for (numb = num + 1; numb <= 99; numb++)
		{
			putchar((num / 10) +'0');

			putchar((num % 10) + '0');

			putchar(' ');

			putchar((numb / 10) + '0');

			putchar((numb % 10) + '0');

			if (num < 98 || numb < 99)
			{
				putchar(',');

				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
