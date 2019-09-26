#include "holberton.h"
/**
 * _isdigit - check for a digit 0 throgh 9
 * @c: number to be tested
 * Return: 1 if is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	while (c >= '0' && c <= '9')
		return (1);

	return (0);
}
