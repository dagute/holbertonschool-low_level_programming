#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: 0 if Succes
 */
int main(void)
{
	int x, s;

	for (x = 0; x <= 1024; x++)
		if (x % 3 == 0 || x % 5 == 0)
			s += x;
	printf("%d\n", s);
	return (0);
}
