#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint;

	unint = 0;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		unint *= 2;
		if (*b == '1')
			unint += 1;
		else if (*b != '0')
			return (0);
	}
	return (unint);
}
