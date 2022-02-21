#include "main.h"
/**
 * _strlen - this function return the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
void print_rev(char *s)
{
	char n;
	int m;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
		m = i;
	}
	do
	{
		_putchar(s[m]);
		m--;
	}
	while (m > 0);
}
