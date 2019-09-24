#include "holberton.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: Character to test
 *
 * Return: 1 if is a lowercase letter, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
