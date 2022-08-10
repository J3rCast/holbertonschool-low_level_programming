#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, prev = 0, intSize = size;
	size_t step = sqrt(intSize);

	if (array == NULL)
		return (-1);

	while (array[i] < value)
	{
		if (i >= intSize)
			break;

		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		i = i + step;
	}

	prev = i - step;
	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	while (prev <= i)
	{
		if (i >= intSize)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
