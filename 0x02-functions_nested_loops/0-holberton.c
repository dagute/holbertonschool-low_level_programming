#include "holberton.h"
/**
 * main - Prints holberton
 *
 * Return: 0 if success
 */
int main(void)
{
	char x[] = "Holberton";
	int j;

	for (j = 0; j < 9; j++)
	{
		_putchar(x[j]);
	}
	_putchar('\n');
	return (0);
}
