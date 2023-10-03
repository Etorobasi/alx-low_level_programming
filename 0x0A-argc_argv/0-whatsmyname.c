#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number arguments
 * @argv: an array
 *
 * Return: returns an integer value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
