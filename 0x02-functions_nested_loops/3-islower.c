#include "holberton.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: Character to test
 *
 * return: 1 if is a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
