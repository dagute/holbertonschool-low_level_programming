#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all the arguments of my program
 * @ac: arguments
 * @av: arguments vectors
 * Return: pointer to a new string, NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int x, y, avlen, nslen;
	char *c;

	avlen = nslen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; av[x]; x++)
	{
		for (y = 0; av[x][y]; y++)
			avlen++;
	}
	c = (char *)malloc(avlen * sizeof(char) + ac + 1);
	if (c == NULL)
		return (NULL);
	for (x = 0; av[x]; x++)
	{
		for (y = 0; av[x][y]; y++, nslen++)
			c[nslen] = av[x][y];
		c[nslen] = '\n';
		nslen++;
	}
	c[nslen] = '\0';
	return (c);
}
