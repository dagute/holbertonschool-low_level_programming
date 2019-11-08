#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n >> index) & 1)
	{
		return (1);
	}
	if (index > sizeof(unsigned long) * 8)
	{
		return (-1);
	}
	return (0);
}
