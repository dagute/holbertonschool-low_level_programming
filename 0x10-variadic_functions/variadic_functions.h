#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct argum - Struct type
 * @arg: operator
 * @f: function associated
 * Description: new type struct types
 */

typedef struct argum
{
	char *arg;
	void (*f)();
} a_types;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
