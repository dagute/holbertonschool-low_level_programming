#include <stdio.h>
/**
 * main - Prints the alphabets except q and e
 *
 * Return : 0 if success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}

