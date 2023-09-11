#include <stdio.h>

/**
 * main - This is function 'main'
 *
 * Return: The program returns a value of 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}

