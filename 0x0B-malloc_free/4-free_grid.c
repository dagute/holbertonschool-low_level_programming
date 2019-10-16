#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees two dimensional grid
 * @grid: grid to freed
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
