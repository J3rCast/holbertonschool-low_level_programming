#include "main.h"
/**
 * print_rev - this function return the legth of a string
 *
 * @s: value
 *
 */
void puts2(char *str)
{
	int i = 0;
	int b = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i + b]);
		i++;
		b++;
	}
}
