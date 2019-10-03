#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercse
 * @c: input string
 * Return: input string
 */
char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 'a' && c[x] <= 'z')
			c[x] = c[x] - 'a' + 'A';
	}
	return (c);
}
