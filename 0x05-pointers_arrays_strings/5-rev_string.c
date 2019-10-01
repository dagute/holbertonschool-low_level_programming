#include "holberton.h"
/**
 * rev_string - prints a string in reverse
 * @s: input string
 * Return: nothing
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
