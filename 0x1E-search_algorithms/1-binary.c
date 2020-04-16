#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int start, mid, end, x;

	start = 0;
	end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (x = start; x <= end; x++)
		{
			printf("%d", array[x]);
			if (x < end)
				printf(", ");
		}
		printf("\n");

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
