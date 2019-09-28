#include <stdio.h>
/**
 * fibonaccinumbers - print the first 98 fibonacci numbers
 * @n: number to test
 * main - print fibonaccci numbers
 * Return: Fibonacci sequence
 */
void fibonaccinumbers(double n)
{
	int i;
	double n1 = 1, n2 = 2, p;

	for (i = 1; i <= n; i++)
	{
		printf("%.0f", n1);
		p = n1 + n2;
		n1 = n2;
		n2 = p;
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
int main(void)
{
	fibonaccinumbers(98);
	return (0);
}
