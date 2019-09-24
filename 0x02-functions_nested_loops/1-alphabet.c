#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
