#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates to string
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: a pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, x, y;
	char *s;

	l1 = 0;
	l2 = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	s = malloc(sizeof(char) * (l1 + l2 + 1));

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
