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
	char m;
	int i;
	int p;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	for (p = (i - 1); p <= 0; i--)
	{
		m = s[p];
		_putchar(m);
	}
}
