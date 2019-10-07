#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search
 * @accept: search bytes
 * Return: number of bytes of the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				break;
			}
		}
		if (accept[y] == '\0')
			break;
	}
	return (x);
}
