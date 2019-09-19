#include <stdio.h>
/**
 * main - Prints the alphabet in lower case
 *
 * Return: 0 if success
 */
int main(void)
{
	char r = 'a';
	char s = 'A';

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	while (s <= 'Z')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);

}
