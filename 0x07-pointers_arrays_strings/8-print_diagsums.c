#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 * @a: pointer to two dimensions array
 * @size: diagonal to add
 */
void print_diagsums(int *a, int size)
{
	int x, dia1, dia2;

	dia1 = dia2 = 0;

	for (x = 0; x < (size * size) ; x += size + 1)
		dia1 += a[x];
	for (x = size - 1; x < (size * size - 1); x += size - 1)
		dia2 += a[x];
	printf("%d, %d\n", dia1, dia2);
}
