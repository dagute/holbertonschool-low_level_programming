#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: 0 if succes
 */
int main(void)
{
	char f = 'z';

	while (f >= 'a')
	{
		putchar(f);
		f--;
	}
	putchar('\n');
	return (0);
}
