#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: 0 if success
 */
int main(void)
{
	int z = '0';

	while (z <= '9')
	{
		putchar(z);
		z++;
	}
	z = 'a';
	while (z <= 'f')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
