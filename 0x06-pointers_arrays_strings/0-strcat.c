#include "holberton.h"
/**
 * *_strcat - Concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: pointer to  the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y = 0;

	while (dest[y] != '\0')
		y++;
	for (x = 0; src[x] != '\0'; x++)
		dest[y + x] = src[x];

	return (dest);
}
