#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @x: number to work and find the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int x)
{
	if (x < 0)
		x = x * -1;
	_putchar((x % 10) + '0');
	return (x % 10);
}
