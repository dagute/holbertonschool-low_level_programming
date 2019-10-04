#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a string
 * @c: pointer to input string
 * Return: 0 if succes
 */
char *cap_string(char *c)
{
	int x, y;
	char sepa[] = " \t\n,;.!?\"(){}";

	x = 1;

	if (c[0] >= 97 && c[0] <= 122)
		c[0] -= (97 - 65);
	while (c[x] != '\0')
	{
		for (y = 0; sepa[y] != '\0'; y++)
			if (c[x - 1] == sepa[y] && (c[x] >= 97 && c[x] <= 122))
				c[x] -= (97 - 65);
		x++;
	}
	return (c);
}
