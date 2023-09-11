#include <stdio.h>

/**
 * main - main function declared
 *
 * Return: The return value is 0
 */
int main(void)
{
	int hex_num = '0';
	char hex_alph = 'a';
	int dec;

	for (dec = 0; dec <= 9; dec++)
	{
		if (hex_num <= '9')
		{
			putchar(hex_num);

			hex_num++;
		}
	}
	for (dec = 10; dec < 16; dec++)
	{
		if (hex_alph <= 'f')
		{
			putchar(hex_alph);

			hex_alph++;
		}
	}
	putchar('\n');

	return (0);
}
