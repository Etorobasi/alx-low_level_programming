#include <stdlib.h>
#include "main.h"

/**
 * _free_grid - auxiliary function
 * @grid: 2D grid
 * @height: height of grid
 */
void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL || height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height]);
				free(grid[height]);
			free(grid);
		}
	}
}
/**
 * strtow - splits a string into words
 * @str: given string
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **ret;
	unsigned int i, j, k, s, height;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = height = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			height++;
	{
		ret = malloc(sizeof(char *) * (height + 1));
	}
		if (ret == NULL || height == 0)
		{
			free(ret);
			return (NULL);
		}
	for (k = s = 0; k < height; k++)
	{
		for (i = s; str[i] != '\0'; i++)
		{
			if (str[i] == ' ')
				s++;
			if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			{
				ret[k] = malloc(sizeof(char) * (i - s + 2));
				if (ret[k] == NULL)
				{
					_free_grid(ret, k);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; s <= i; s++, j++)
			ret[k][j] = str[s];
		ret[k][j] = '\0';
	}
	ret[k] = NULL;
	return (ret);
}
