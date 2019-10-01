#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
