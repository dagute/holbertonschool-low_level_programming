#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_char - prints a character
 * @l: character
 * Return: void
 */
void print_char(va_list l)
{
	printf("%c", va_arg(l, int));
}
/**
 * print_integer - prints an integer
 * @l: integer
 * Return: void
 */
void print_integer(va_list l)
{
	printf("%d", va_arg(l, int));
}
/**
 * print_float - prints a float
 * @l: float
 * Return: Void
 */
void print_float(va_list l)
{
	printf("%f", va_arg(l, double));
}
/**
 * print_string - prints  a string
 * @l: input string
 * Return: void
 */
void print_string(va_list l)
{
	char *str;

	str = va_arg(l, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x, y;
	va_list l;
	char *spt;

	a_types argums[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(l, format);

	x = 0;

	spt = "";

	while (format != NULL && format[x] != '\0')
	{
		y = 0;
		while (argums[y].arg != NULL)
		{
			if (format[x] == argums[y].arg[0])
			{
				printf("%s", spt);
				argums[y].f(l);
				spt = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(l);
}
