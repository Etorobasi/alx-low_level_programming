#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: The program returns a value of 1 if successful
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);

	return (1);
}
