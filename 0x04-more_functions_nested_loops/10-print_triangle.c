#include "main.h"
/**
 * print_triangle - this function multiplies two values
 *
 * @size: value
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
        	for (k = 1; k <= i; k++)
        	{
            		_putchar('#');
        	}
        	_putchar('\n');
    	}
	_putchar('\n')
}
