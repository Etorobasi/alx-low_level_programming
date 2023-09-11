#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: The program returns a value of 0 when run successfully
 */
int main(void)
{
	char alph = 'a';
	char e = 'e';
	char q = 'q';

	while (alph <= 'z')
	{
		if (alph != e && alph != q)
		{
			putchar(alph);

			alph++;
		}
		putchar('\n');
	}
	return (0);
}
