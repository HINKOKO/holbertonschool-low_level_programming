#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a two dimensional array previously
 * created in alloc_grid
 * @grid: array to be freed
 * @height: height of array
 * Return: nothing cause void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

