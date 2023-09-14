#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - This is the main function
 * @i: character to be checked
 *
 * Return: The program will return a value of 0 if successful
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
