#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the numbers of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x, t;

	x = t = 0;
	n -= 1;

	while (x <= n)
	{
		t = a[n];
		a[n--] = a[x];
		a[x++] = t;
	}
}
