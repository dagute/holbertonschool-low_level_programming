#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numbers of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
