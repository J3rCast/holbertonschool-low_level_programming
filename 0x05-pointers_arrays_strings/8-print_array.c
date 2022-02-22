#include "main.h"
#include <stdio.h>
/**
 * print_array - this function return the legth of a string
 *
 * @a: pointer value
 * @n: value
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			_putchar('\n');
			_putchar('\n');
		}
		if else ((i + 1) != n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			printf("\n");
		}
	}
}
