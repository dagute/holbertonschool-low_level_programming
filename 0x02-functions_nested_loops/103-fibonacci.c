#include  <stdio.h>
/**
 * main - Sum of the even-valued terms do not exceed 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long c, x, y, z, sum;

	x = sum = 0;
	y = 1;
	for (c = 0; c < 50; c++)
	{
		z = x + y;
		x = y;
		x = z;
		if (z % 2 == 0 && z < 4000000)
		{
			sum += z;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
