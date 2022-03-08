#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - this function concatenate two strings
 *
 * @width: width
 * @height: height
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}

	return (array);
}
