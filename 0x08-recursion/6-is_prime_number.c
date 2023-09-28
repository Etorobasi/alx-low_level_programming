#include "main.h"

/**
 * primeNum - checks for a prime number
 * @num: number to be checked
 * @i: multiples of num
 *
 * Return: 1 if it is or 0 if not
 */
int primeNum(int num, int i)
{
	if (((num % i == 0) && num != i) || num <= 1)
	{
		return (0);
	}
	else if (num == i)
	{
		return (1);
	}
	else
		return (primeNum(num, (i + 1)));
}
/**
 * is_prime_number - checks if a given number is a prime number
 * @n: given number
 *
 * Return: 1 if it is a prime number or 0 if it is not
 */
int is_prime_number(int n)
{
	int k = 0;

	k = primeNum(n, 2);
	return (k);
}
