#include "main.h"
/**
 * main - this program prints putchar using putchar function
 *
 * Return: 0
 */

int main(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		_putchar(alfa);
		alfa++;
	}
	_putchar('\n');

	return (0);
}
