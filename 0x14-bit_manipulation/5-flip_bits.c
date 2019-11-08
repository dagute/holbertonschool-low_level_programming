#include "holberton.h"
/**
 * int flip_bits - return bits you would need to flip to get from 1 number
 * @n: first integer
 * @m: second integer
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f_bits = 0;
	int idx, a, b;
	int x;

	idx = (sizeof(unsigned long int) * 8) - 1;

	for (x = 0; x <= idx; x++)
	{
		a = (n >> x) & 1;
		b = (m >> x) & 1;
		if (a != b)
			f_bits++;
	}
	return (f_bits);
}
