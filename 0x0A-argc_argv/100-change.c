#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int quarter, dime, five, two, one, n, sum;

	quarter = dime = five = two = one = sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (1);
	}
	quarter = n / 25;
	n = n % 25;
	dime = n / 10;
	n = n % 10;
	five = n / 5;
	n = n % 5;
	two = n / 2;
	n = n % 2;
	one =  n;

	sum = quarter + dime + five + two + one;
	printf("%d\n", sum);
	return (0);
}
