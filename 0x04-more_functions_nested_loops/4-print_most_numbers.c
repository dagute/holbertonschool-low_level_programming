#include "holberton.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: 0 if succes
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x >= 0 && x <= 9)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}
