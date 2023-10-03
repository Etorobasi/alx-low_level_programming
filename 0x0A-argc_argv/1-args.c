#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed
 * @argv: array of argument vectors
 *
 * Return: an integer
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
