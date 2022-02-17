#include "main.h"
/**
 * print_diagonal - this function multiplies two values
 *
 * @n: value
 */

void print_square(int size)
{
	int columns = 0;
	int rows = 0;

	if (size > 0)
	{
		while (columns < size)
		{
			while (rows < size)
			{
				_putchar('#');
				rows++;
			}
			_putchar('\n');
			rows = 0;
			columns++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
