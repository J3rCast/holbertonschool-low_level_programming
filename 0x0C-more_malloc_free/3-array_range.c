#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min: values from included
 * @max: from this
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *m;
	int i = 0;
	int x = min;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
		return (NULL);
	while (x <= max)
	{
		m[i] = x;
		i++;
		x++;
	}
	m[i] = '\0';
	return (m);
}
