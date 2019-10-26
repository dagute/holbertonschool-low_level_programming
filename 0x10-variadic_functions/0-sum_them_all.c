#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: integer
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int add;
	va_list s;

	add = 0;

	if (n == 0)
		return (0);
	va_start(s, n);
	for (x = 0; x < n; x++)
	{
		add += va_arg(s, int);
	}
	va_end(s);

	return (add);
}
