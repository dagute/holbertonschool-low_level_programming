#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on terminal"
 * @n: the number of lines to print
 *
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
			for (x = 1; x <= y; x++)
			{
				if (x != 1)
					_putchar(' ');
				if (x == y)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
