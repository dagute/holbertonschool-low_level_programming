#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0 if success
 */
int main(void)
{

	long x;
	long int n = 612852475143;

	for (x = 2; x < n; x++)
	{
		if (n % x == 0)
			n /= x;
	}
	printf("%ld\n", n);
	return (0);
}
