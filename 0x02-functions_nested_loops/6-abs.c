#include "holberton.h"
/**
 * _abs - computes the  absolute value of an integer
 *
 * @x: The integer to be computed
 *
 * Return: The absolute value of an integer
 */
int _abs(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
}
