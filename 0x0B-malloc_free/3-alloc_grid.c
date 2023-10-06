#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **gridPtr;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	gridPtr = malloc(sizeof(int *) * height);
	if (gridPtr == NULL)
	{
		free(gridPtr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridPtr[i] = malloc(sizeof(int) * width);
		{
			if (gridPtr[i] == NULL)
			{
				for (i--; i >= 0; i--)
				free(gridPtr[i]);
				free(gridPtr);
				return (NULL);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gridPtr[i][j] = 0;
		}
	}
	return (gridPtr);
}
