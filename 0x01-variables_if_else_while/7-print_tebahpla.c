#include <stdio.h>

/**
 * main - The main function of this c program
 *
 * Return: this program returns a value of 0 at its termination
 */
int main(void)
{
	char phla;

	for (phla = 'z'; phla >= 'a'; phla--)
	{
		putchar(phla);
	}
	putchar('\n');

	return (0);
}
