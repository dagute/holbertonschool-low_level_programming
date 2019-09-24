#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int x, y, s;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			s = (x * y);
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (s >= 10)
			{
				_putchar((s / 10) + '0');
				_putchar((s % 10) + '0');
			}
			else if (s < 10 && y != 0)
			{
				_putchar(' ');
				_putchar((s % 10) + '0');
			}
			else
				_putchar((s % 10) + '0');
		}
		_putchar('\n');
	}
}
