#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of int
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: A pointer to the 2D array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		
		if (a[i] == NULL)
		{
			for (j = i; j <= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
