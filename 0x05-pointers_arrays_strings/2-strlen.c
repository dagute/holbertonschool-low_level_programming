#include "holberton.h"
/**
 * _strlen - return the lenghth of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
