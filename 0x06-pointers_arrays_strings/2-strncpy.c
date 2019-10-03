#include "holberton.h"
/**
 * *_strncpy - copies a string
 * @dest: string to copy
 * @src: string
 * @n: bytes from src
 * Return: copy of a srting
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	while (x < n)
		dest[x++] = '\0';

	return (dest);
}
