#include <stdio.h>

/**
 * main - the main function
 *
 * Return: The return value for this program is 0
 */
int main (void)
{
	int num;
	int comb;
	int combo;

	for (num = '0'; num <= '9'; num++)
	{
		for (comb = num + 1; comb <= '9'; comb++)
		{
			for (combo = comb + 1; combo <= '9'; combo++)
			{
				putchar(num);

				putchar(comb);

				putchar(combo);

				if (num < '7' || comb < '8' || combo < '9')
				{
					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
