#include "holberton.h"
/**
 * _strstr - locates a subtring
 * @haystack: string searched
 * @needle: substring
 * Return: a pointer to the beginning of the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y, pri;

	while (haystack[x] != '\0')
	{
		pri = x;
		y = 0;
		while (haystack[x] == needle[y] && needle[y] != '\0' && haystack[y] != '\0')
		{
			x++;
			y++;
		}
		if (needle[y] == '\0')
			return (haystack + pri);
		x = pri + 1;
	}
	return ('\0');
}
