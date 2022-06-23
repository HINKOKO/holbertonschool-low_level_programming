#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - function return a pointer to a
 * 2D array, using memory allocation to be sure the array
 * will be stored with pointers.
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to the 2D array, or NULL if fails
 *
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[0][0] = 0;
	}

	return (grid);
}

