#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_char - prints a character
 * @car: character
 * Return: void
 */
void print_char(char *spt, va_list l)
{
	printf("%s%c", spt, va_arg(l, int));
}
/**
 * print_integer - prints an integer
 * @ent: integer
 * Return: void
 */
void print_integer(char *spt, va_list l)
{
	printf("%s%d", spt, va_arg(l, int));
}
/**
 * print_float - prints a float
 * @flo: float
 * Return: Void
 */
void print_float(char *spt, va_list l)
{
	printf("%s%f", spt, va_arg(l, double));
}
/**
 * print_string - prints  a string
 * @cad: input string
 * Return: void
 */
void print_string(char *spt, va_list l)
{
	char *str;

	str = va_arg(l, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", spt, str);
}
/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x, y;
	char *spt;
	va_list l;

	a_types argums[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_char},
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
				argums[y].f(spt, l);
				spt = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(l);
}
