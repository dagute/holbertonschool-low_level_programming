#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array
 * @a: array of elements
 * @n: numbers of elements of the array
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;

	while (x < n)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
		x++;
	}
	printf("\n");
}
