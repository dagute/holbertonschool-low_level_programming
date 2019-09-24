#include "holberton.h"
/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: number to work and find the last digit
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar ((n % 10) + '0');
	return (n % 10);
}