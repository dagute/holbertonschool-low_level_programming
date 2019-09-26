#include "holberton.h"
/**
 * print_square - prints a square
 * @n: the number for #
 *
 */
void print_square(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
