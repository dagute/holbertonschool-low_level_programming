#include <stdio.h>
#include "holberton.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: string to return
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
/**
 * veri - help for is_palindrome function
 * @s: input string
 * @l: length of string
 * @counter: counter of recursion
 * Return: 1 if string is palindrome, 0 otherwise
 */
int veri(char *s, int l, int counter)
{
	if (counter >= l)
		return (1);
	if (s[l] == s[counter])
		return (veri(s, l - 1, counter + 1));
	else
		return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome, 0 if not
 * @s: string
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	int  counter = 0;

	if (i == 0)
		return (1);

	return (veri(s, i - 1, counter));
}
