#include "holberton.h"
/**
 * veri - Verify the input number from n to the base
 * @x: number to be squared and compared to base
 * @check: base number to  verify
 * Return: natural square root of a number base
 */
int veri(int x, int check)
{
	if (x * x == check)
		return (x);
	if (x * x > check)
		return (-1);
	return (veri(x + 1, check));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @x: number to verify for square root
 * Return: natural square root of a number
 */

int _sqrt_recursion(int x)
{
	return (veri(1, x));
}
