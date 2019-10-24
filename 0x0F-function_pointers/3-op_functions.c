#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sums two numbers
 * @a: input integer
 * @b: input integr
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two numbers
 * @a: input integer
 * @b: input integer
 * Return: the difference within two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two numbers
 * @a: input integer
 * @b: input integer
 * Return: the product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: input integer
 * @b: input integer
 * Return: division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - module of two numbers
 * @a: input integer
 * @b: input integer
 * Return: reminder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
