#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elememts of an array
 * @size: size in bytes of elements of an array
 * Return: a pointers to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *d;

	if ((nmemb < 1) || (size < 1))
		return (NULL);

	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);

	for(x = 0; x < nmemb; x++)
		d[x] = 0;

	return (d);
}
