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

	while (str[i] != '\0')
	{
		if (str[i] = 0)
		{
			_putchar(str[i])
		}
		else
		{
			_putchar(str[i + 1])
		}
		i++;
	}
}
