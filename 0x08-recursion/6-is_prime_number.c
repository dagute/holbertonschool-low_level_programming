#include "holberton.h"
/**
 * prime - verify the input for is_prime_number
 * @x: number
 * @y: number to check
 * Return: 1 if n is prime otherwise 0
 */
int prime(int x, int y)
{
	if (x % y == 0 || x < 2)
		return (0);
	else if  (y == (x - 1))
		return (1);
	else if (x > y)
		return (prime(x, y + 1));
	return (1);
}

/**
 * is_prime_number - says if a number is prime
 * @x: input number
 * Return: 1 if the input number is prime or 0 otherwise
 */
int is_prime_number(int x)
{
	if (x == 2)
		return (1);
	else
		return (prime(x, 2));
}
