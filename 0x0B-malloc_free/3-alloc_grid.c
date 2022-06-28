#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function returns 2 dimensional array of integers.
 * @width: integer input width
 * @height: integer input height
 *
 * Return: pointer to 2D array or-else NULL
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		arr[x] = (int *)malloc(width * sizeof(int));
		if (arr[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			arr[x][y] = 0;
		}
	}

	return (arr);
}
