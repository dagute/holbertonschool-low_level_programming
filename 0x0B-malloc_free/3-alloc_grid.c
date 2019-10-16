#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2d dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer to a 2d dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **c, x, y;

	x = y = 0;
	if (height < 1)
		return (NULL);

	c = (int **)malloc(height * sizeof(c));
	if (c == NULL)
	{
		free(c);
	}
	for (x = 0; x < height; x++)
	{
		c[x] = malloc(width * sizeof(int));
		if (c[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(c[y]);
			free(c);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			c[x][y] = 0;
	}
	return (c);
}
