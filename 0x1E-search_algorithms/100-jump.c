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
	size_t i = 0, prev = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (array[prev] && prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		i = prev;
		prev += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);

	while (array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
		if (i >= size)
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);

	return (-1);
}
