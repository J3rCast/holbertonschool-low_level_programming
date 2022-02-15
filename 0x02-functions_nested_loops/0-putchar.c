/*#include "main.h"*/
/**
 * main - this program prints putchar using putchar function
 *
 * Return: 0
 */

int main(void)
{
		int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
