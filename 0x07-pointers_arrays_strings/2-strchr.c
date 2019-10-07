#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char
 * Return: a pointer or null if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	if (s[x] == c)
		return (s + x);
	return ('\0');
}
