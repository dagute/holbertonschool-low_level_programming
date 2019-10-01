#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: input string
 */
void print_rev(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;
	while (s[x] != '\0')
	{
		_putchar(s[x--]);
	}
	_putchar('\n');
}
