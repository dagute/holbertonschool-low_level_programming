#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	char x;

	while (n == 1)
	{
		_putchar('1');
		return;
	}
	while (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary(n >> 1);
	x = (n & 1) ? '1' : '0';
	_putchar(x);
}
