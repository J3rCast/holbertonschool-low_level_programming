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
	int i = 0;

	while (n != '\0')
	{
		n = s[i];
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
		/*if (i == 0)
		{
			break;
		}*/
	}
}
