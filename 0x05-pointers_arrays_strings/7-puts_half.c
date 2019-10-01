#include "holberton.h"
/**
 * puts_half - prints half of string
 * @str: input string
 */
void puts_half(char *str)
{
	int x, y;

	while (str[x] != '\0')
		x++;
	if (x % 2 == 0)
		y = x / 2;
	else
		y = (x + 1) / 2;
	while (y < x)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}
