#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory using malloc
 * @b: value number
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
