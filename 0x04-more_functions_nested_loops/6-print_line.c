#include "main.h"
/**
 * print_line - this function multiplies two values
 *
 * @n: value
 *
 * Return: 0
 */

void print_line(int n)
{
	int n;
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
