#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure or a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, x, y;
	char *s;

	l1 = l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	s = (char *) malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (x = 0; x < l1; x++)
		s[x] = s1[x];

	for (y = 0; y < l2; y++)
		s[x + y] = s2[y];

	s[x + y] = '\0';
	return (s);
}
