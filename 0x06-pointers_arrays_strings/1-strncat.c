#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to copy
 * @src: string
 * @n: bytes from src to append
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[y] != '\0')
		y++;

	while (x < n && src[x] != '\0')
	{
		dest[y + x] = src[x];
		x++;
	}

	return (dest);
}
