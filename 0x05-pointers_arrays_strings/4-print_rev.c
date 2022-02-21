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

	
	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	for (i -= 1;i < 0; i--)
	{
		_putchar(s[i]);
	}
}
