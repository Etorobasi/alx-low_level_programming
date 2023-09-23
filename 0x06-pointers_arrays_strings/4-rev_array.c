#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int *rev, *ver, temp;

	rev = a;
	ver = a + (n - 1);
	while (rev < ver)
	{
		temp = *rev;
		*rev = *ver;
		*ver = temp;
		rev++;
		ver--;
	}
	rev = '\0';
}
