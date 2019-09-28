#include <stdio.h>
/**
 * main - print fibonaccci numbers
 *
 * Return: Fibonacci sequence
 */
int main(void)
{
        int i, n;
	double n1 = 1, n2 = 2, p;
	n = 98;

	for (i = 1; i <= n; i++)
	{
		printf("%.0f", n1);
		if (i < n)
			printf(", ");
		p = n1 + n2;
		n1 = n2;
		n2 = p; 
	}
	printf("\n");
	return (0);
}
