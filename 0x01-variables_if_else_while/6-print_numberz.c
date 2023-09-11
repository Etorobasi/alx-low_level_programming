#include <stdio.h>

/**
 * main - The main function of this c program
 *
 * Return: This c program returns a value of 0 when run successfully
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);

		num++;
	}
	putchar('\n');
	
	return (0);
}
