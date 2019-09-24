#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * return: nothing
 */
void print_alphabet_x10(void)
{
	int j;
	char x;

	for (j = 0; j < 10; ++j)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
