#include "holberton.h"
/**
 * main - checks for  uppercase character
 * @c: charater to be tested
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
