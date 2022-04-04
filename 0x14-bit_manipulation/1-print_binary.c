#include "main.h"
/**
 * print_binary - this function prints a binary
 * @n: number to print into binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);

	_putchar((n % 2) + '0');
}
