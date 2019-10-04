#include "holberton.h"
/**
 * rot13 - encodes a string using rot 13
 * @d: input string
 * Return: encoded input string
 */
char *rot13(char *d)
{

	int x, y;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; d[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
			if (d[x] == alp[y])
			{
				d[x] = r13[y];
				break;
			}
	}
	return (d);
}
