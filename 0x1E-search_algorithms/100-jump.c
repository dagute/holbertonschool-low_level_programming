#include "search_algos.h"
#include "math.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, low, high;

	low = 0;
	high = 0;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	while (low < size)
	{
		if (array[low] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low += step;
	}
	high = low - step;
	printf("Value found between indexes [%lu] and [%lu]\n", high, low);
	if (low >= size)
		low = size - 1;
	while (high <= low)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		if (array[high] == value)
			return (high);
		high++;
	}
	return (-1);
}
