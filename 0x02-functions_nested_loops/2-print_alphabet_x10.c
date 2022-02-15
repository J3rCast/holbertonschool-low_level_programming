#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - this program prints laphabet in ten lines
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n = 1;

	while (n <= 10)
	{
		char alfa = 'a';

		while (alfa <= 'z')
		{
			_putchar(alfa);
			alfa++;
		}
	_putchar('\n');
	n++;
	}
}
