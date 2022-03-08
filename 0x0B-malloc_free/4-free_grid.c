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

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}
}
