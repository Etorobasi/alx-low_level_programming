#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int arr = 0;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
		arr = arr + a[i * size + (size - i - 1)];
	}
	printf("%d, ", sum);
	printf("%d\n", arr);
}
