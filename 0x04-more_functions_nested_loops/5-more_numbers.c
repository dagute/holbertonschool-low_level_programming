#include "holberton.h"
/**
 * more_numbers - prints ten times the numbers from 0 to 14
 *
 * Return; 0 if succes
 */
void more_numbers(void)
{
	int x, y;

	x = y = 0;

	while (x < 10)
	{
		while (y < 15)
		{
			if (y > 9)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			++y;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
}
