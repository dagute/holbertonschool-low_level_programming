#include "holberton.h"
/**
 * print_number - prints an integer
 *
 * @n: input number
 */
void print_number(int n)
{
	unsigned int res = n;

	if (n < 0)
	{
		_putchar('-');
		res = res * -1;
	}

	if ((res / 10) > 0)
		print_number(res / 10);

	_putchar((res % 10) + '0');
}
