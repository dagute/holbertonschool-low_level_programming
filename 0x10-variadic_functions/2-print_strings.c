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
	unsigned int x;
	va_list str;
	char * total;

	va_start(str, n);

	x = 0;

	while (x < n)
	{
		total = va_arg(str, char *);
		if (total == NULL)
			printf("(nil)");
		else
		{
			printf("%s", total);
		}
		if (separator != '\0' && x < (n - 1))
			printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(str);
}
