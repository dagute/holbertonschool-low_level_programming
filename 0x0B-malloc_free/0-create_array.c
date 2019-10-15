#include<stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to initialize
 * Return: null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = (char *) malloc(sizeof(char) * size);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		a[x] = c;
	return (a);
}
