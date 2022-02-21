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
	int i;
	int m;

	
	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	for (m = (i - 1);m < 0; m--)
	{
		_putchar(s[m]);
	}
}
