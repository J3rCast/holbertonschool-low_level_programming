#include "search_algos.h"
/**
 * advanced_binary_recursive - searches for a value in an array of
 * integers using the binary search algorithm.
 *
 * @array:  pointer to the first element of the array to search in
 * @lo: lowest index of the array
 * @hi: highest index of the array
 * @value: value to search in the array
 *
 * Return: index of found value or -1
 */
int advanced_binary_recursive(int *array, size_t lo, size_t hi, int value)
{
	int mid = lo + hi / 2;
	size_t i = 0;

	if (array == NULL)
		return (-1);

	if (lo > hi)
		return (-1);

	printf("Searching in array: ");
	for (i = lo + 1; i <= hi; i++)
	{
		if (i != hi)
			printf("%d, ", array[i]);
		else
			printf("%d", array[i]);
	}
	printf("\n");

	if (array[hi] == value)
		return (hi);

	if (value > array[mid])
		return (advanced_binary_recursive(array, mid, hi - 1, value));
	else
		return (advanced_binary_recursive(array, lo, mid - 1, value));

	return (-1);
}
/**
 * advanced_binary - searches for a value in an array of
 * integers using the binary search algorithm.
 *
 * @array:  pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: index of found value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int lo = 0, hi = size - 1;

	return (advanced_binary_recursive(array, lo, hi, value));
}
