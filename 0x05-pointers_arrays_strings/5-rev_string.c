#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: input string
 */
void rev_string(char *s)
{
	int x, y;
	char z[100];

	x = y = 0;

	while (s[x] != '\0')
	{
		z[x] = s[x];
		x++;
	}
	x--;
	while (x >= 0)
	{
		s[x] = z[y];
		x--;
		y++;
	}
	s[y++] = '\0';
}
