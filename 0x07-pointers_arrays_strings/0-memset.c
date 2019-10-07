#include "holberton.h"
/**
 * _memset - fills memory with a constatnt byte
 * @s: pointer to the memory area
 * @b: constant byte
 * @n: bytes of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
