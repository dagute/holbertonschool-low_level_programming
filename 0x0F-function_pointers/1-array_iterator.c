#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && size && action)
	{
		for (x = 0; x < size; x++)
		{
			action(array[x]);
		}
	}
}
