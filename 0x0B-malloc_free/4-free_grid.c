#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * alloc_grid function
 * @grid: grid to free
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
