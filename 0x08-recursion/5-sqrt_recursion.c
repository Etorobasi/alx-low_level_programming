#include "main.h"

/**
 * sqrNum - checks if the square of a number is equal to a given number
 * @num: number to be checked
 * @i: number to square
 *
 * Return: the squared num or -1 if there is an error
 */
int sqrNum(int num, int i)
{
	if ((i * i) > num || (i * i) < 0)
	{
		return (-1);
	}
	else if ((i * i) == num)
	{
		return (i);
	}
	else
		return (sqrNum(num, (i + 1)));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to square
 *
 * Return: returns square root or -1 if there is an error
 */
int _sqrt_recursion(int n)
{
	int k = 0;

	k = sqrNum(n, 0);
	return (k);
}
