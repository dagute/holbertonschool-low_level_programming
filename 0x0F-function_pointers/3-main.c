#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int x, y;

	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n'");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (y == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(x, y));

	return (0);
}
