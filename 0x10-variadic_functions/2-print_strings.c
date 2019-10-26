#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings to be passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x, total;
	va_list str;

	va_start(str, n);

	for (x = 0; x < n; x++)
	{
		if (va_arg(str, char *) == NULL)
			printf("(nil)");
		else
		{
			va_end(str);
			va_start(str, n);
			for (total = x; total > 0; total--)
				va_arg(str, char *);
			printf("%s", va_arg(str, char *));
		}
		if (x < (x - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
