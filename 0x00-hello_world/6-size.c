#include <stdio.h>
/**
 *main - Prints the sizeof diferent var types
 *Return: 0 if Success
 */
int main(void)
{
	char v;
	int w;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %d byte(s)\n", sizeof(v));
	printf("Size of an int: %d byte(s)\n", sizeof(w));
	printf("Size of a long int: %d byte(s)\n", sizeof(x));
	printf("Size of a long long int: %d byte(s)\n", sizeof(y));
	printf("Size of a float: %d byte(s)\n", sizeof(z));
	return (0);
}
