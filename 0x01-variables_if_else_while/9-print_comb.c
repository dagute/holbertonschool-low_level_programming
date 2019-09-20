#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	int s = '0';

	while (s <= '9')
	{
		putchar(s);
		if (s != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++s;
	}
	putchar('\n');
	return (0);
}
