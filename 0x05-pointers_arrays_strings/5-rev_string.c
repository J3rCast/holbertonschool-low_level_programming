#include "main.h"
/**
 * print_rev - this function return the legth of a string
 *
 * @s: value
 *
 */
void rev_string(char *s)
{
	char n = 'a';
	int i = 0;

	while (n != '\0')
	{
		n = s[i];
		if (n != '\0')
		{
			_putchar(n);
			i++;
		}
	}
	_putchar('\n');
	while (i >= 1)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
