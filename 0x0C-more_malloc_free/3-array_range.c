#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum order
 * @max: maximum order
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int x, m;

	if (min > max)
	{
		return (NULL);
	}
	m = (max - min) + 1;

	a = malloc(sizeof(*a) * m);
	if (a == NULL)
	{
		return (NULL);
		free(a);
	}

	a[0] = min;
	for (x = 1; x < m; x++)
	{
		a[x] = ++min;
	}
	return (a);
}
