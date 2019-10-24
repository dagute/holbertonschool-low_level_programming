#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: operator passed as argument
 * Return: an integer value
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op != NULL)
	{

		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
