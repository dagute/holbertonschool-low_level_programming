#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer
 * @size: numbers of element in the array
 * @cmp: pointer
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	x = 0;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (!(cmp(array[x])))
	{
		x++;
		if (x == size)
		return (-1);
	}
	return (x);
}
