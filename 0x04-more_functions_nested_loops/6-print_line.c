#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times character to be checked
 *
 * Return: character to be printed
 */
void print_line(int n)
{
	int u;

	u = 0;

	while (u < n)
	{
		_putchar('_');
		u++;
	}
	_putchar('\n');
}
