#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: Character to be checked
 *
 * Return: 1 if the character is a lowecase or uppercase, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
