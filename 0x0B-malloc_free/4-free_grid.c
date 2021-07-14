#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -frees a 2 dimensional grid previously created.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: 0.
 */
void free_grid(int **grid, int height)
{

	while (height)
		free(grid[--height]);
	free(grid);
}
