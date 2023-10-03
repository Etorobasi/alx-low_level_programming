#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives, each one on a newline
 * @argc: number of arguments passed to the function
 * @argv: arguments
 *
 * Return: returns an integer
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
