#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to memory
 * @old_size: size in bytes for ptr
 * @new_size: the new size in bytes of the new block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
		return (np);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	np = malloc(new_size);
		if (np == NULL)
			return (NULL);
	for (x = 0; x < old_size && x < new_size; x++)
		np[x] = ((char *)ptr)[x];
	free(ptr);

	return (np);
}
