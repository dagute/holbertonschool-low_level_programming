#include <stdio.h>
/**
 * main - print fibonaccci numbers
 *
 * Return: 0 if succes
 */
int main(void)
{
	int i;
	double n1 = 1, n2 = 2, p;

	for (i = 1; i <= 98; i++)
	{
		printf("%.0f", n1);
		if (i < 98)
			printf(", ");
		p = n1 + n2;
		n1 = n2;
		n2 = p;
	}
	printf("\n");
	return (0);
}
