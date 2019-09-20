#include <stdio.h>
/**
 * main - Prints number from 00 to 99
 *
 * Return: 0 if succes
 */
int main(void)
{
	int x = '0';
	int y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			putchar(x);
			putchar(y);
			if (y == '9' && x == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		if (y >= '9')
		{
			y = '0';
		}
		x++;
	}
	return (0);
}
