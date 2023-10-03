#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int cents, minCoin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 1)
			cents -= 1;
		minCoin += 1;
	}
	printf("%d\n", minCoin);
	return (0);
}
