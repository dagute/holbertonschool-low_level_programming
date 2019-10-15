#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly  allocated space in memory
 * @str: input string
 * Return: NULL, or a pointer on success
 */
char *_strdup(char *str)
{
	unsigned int x, l;
	char *c;

	l = 0;
	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
	{
		l++;
	}
	l++;
	c = malloc(l * sizeof(char));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (x = 0; x < l; x++)
		c[x] = str[x];
	c[x] = '\0';
	return (c);
}
