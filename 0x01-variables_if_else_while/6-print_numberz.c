#include <stdio.h>
/**
 * main - Prints all singles digit numbers without using char, printf, puts
 *
 * Return: 0 if succes
 */
int main(void)
{
	int y = '0';

	while (y <= '9')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
