#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @c: pointer to input string
 * Return: Pointer to leet string
 */
char *leet(char *c)
{
	int x, y;
	char p[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; p[y] != 0; y++)
			if (c[x] == p[y])
				c[x] = n[y];
	}
	return (c);
}
