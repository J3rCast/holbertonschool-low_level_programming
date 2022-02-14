#include "main.h"
/**
 * main - this program prints laphabet follow by a new line
 *
 * Return: 0
 */

int main(void)
{
	int n = 1;

	while (n <= 10)
	{
		char alfa = 'a';

		while (alfa <= 'z')
		{
			print_alphabet_x10(alfa);
			alfa++;
		}
	_putchar('\n');
	n++;
	}

	return (0);
}
