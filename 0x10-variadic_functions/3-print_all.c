#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @car: character
 * Return: void
 */
void print_char(va_list car)
{
	printf("%c", va_arg(car, int));
}
/**
 * print_integer - prints an integer
 * @ent: integer
 * Return: void
 */
void print_integer(va_list ent)
{
	printf("%d", va_arg(ent, int));
}
/**
 * print_float - prints a float
 * @flo: float
 * Return: Void
 */
void print_float(va_list flo)
{
	printf("%f", va_arg(flo, double));
}
/**
 * print_string - prints  a string
 * @cad: input string
 * Return: void
 */
void print_string(va_list cad)
{
	char *str;

	str = va_arg(cad, char *);
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
	unsigned int x, y;
	char *spt;
	va_list all;

	a_types argums[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_char},
		{NULL, NULL}
	};

	va_start(all, format);

	spt = "";

	for (x = 0; format != NULL && format[x] != '\0'; x++)
	{
		y = 0;
		while (argums[y].arg != NULL)
		{
			if (format[x] == argums[y].arg[0])
			{
				printf("%s", spt);
				argums[y].f(all);
				spt = ", ";
			}
			y++;
		}
	}
	printf("\n");
	va_end(all);
}
