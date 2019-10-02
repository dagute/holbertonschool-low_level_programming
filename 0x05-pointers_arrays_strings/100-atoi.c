#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: result
 *
 */
int _atoi(char *s)
{
	int x = 0;
	int result = 0;
	int num = 0;
	int neg = -1;

	while (s[x] != '\0')
	{
		if (s[x] == '-')
			neg *= -1;
		if (s[x] >= '0' && s[x] <= '9')
		{
			result = result * 10 - (s[x] - '0');
			num = 1;
		}
		else if (num == 1)
			break;
		x++;

	}
	return (result * neg);
}
