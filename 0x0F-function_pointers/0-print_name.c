#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer
 * @f: pointer
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name && *f)
		f(name);
}
