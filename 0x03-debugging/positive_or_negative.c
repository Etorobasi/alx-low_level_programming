#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: The program will return a value of 0 if successful
 */
int positive_or_negative(void)
{
	int n;

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
