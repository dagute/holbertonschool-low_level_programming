#include "holberton.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: string to return
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
