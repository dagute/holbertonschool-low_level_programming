#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0 if succces
 */
int main(void)
{
	unsigned long sum, x, y, z;

	x = 0;
	y = 1;
	for (sum = 0; sum < 50; sum++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu", z); /* length modifier and specifier */
		if (sum == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
