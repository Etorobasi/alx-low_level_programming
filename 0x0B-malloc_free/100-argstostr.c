#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: returns a pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	len += ac;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		if (ptr[k] == '\0')
		{
			ptr[k++] = '\n';
		}
	}
	return (ptr);
}

