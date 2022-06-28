#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a fuction that frees a 2 dimensional grid from memory
 * @grid: input 2 dim grid as double pointer
 * @height: input height as integer
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
