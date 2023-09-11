#include <stdio.h>

/**
 * main - all the code for this program is contained in the main function
 *
 * Return: The return value for this program is 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(44);

			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
