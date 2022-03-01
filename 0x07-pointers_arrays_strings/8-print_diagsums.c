#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - this function gets the legth in bytes
 *
 * @a: string
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = 0;
	int x1 = 0;

	while (i <= (size * size) - 1)
	{
		x += a[i];
		i += size + 1;
	}
	i = size * (size - 1);
	while (i >= 0)
	{
		x1 += a[i];
		i -= size - 1;
	}
	printf("%d, %d\n", x, x1);
}
