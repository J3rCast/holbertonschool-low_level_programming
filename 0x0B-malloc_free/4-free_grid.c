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

	if (height <= 0)
		return;
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
