#include "main.h"
/**
 * _strlen - this function return the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
void _puts(char *str)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = str[i];
		_putchar(n);
	}
	tr '\0' '\n';
}
