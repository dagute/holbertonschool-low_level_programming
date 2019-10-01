#include "holberton.h"
/**
 * *_strcpy - copies the string pointed by src
 * @dest: pointer to  string
 * @src: pointer to a buffer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
