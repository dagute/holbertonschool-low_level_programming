#include "holberton.h"
/**
 * more_numbers - prints ten times the numbers from 0 to 14
 *
 * Return; 0 if succes
 */
void more_numbers(void)
{
	int x, y;

	x = 0;

	while (x < 10)
	{
		y = 0;

		while (y <= 14)
		{
			if (y >= 10)
				_putchar(y / 10 + '0');
			_putchar (y % 10 + '0');
			y++;
		}
		x++;
	}
	_putchar('\n');
}
