#include "main.h"
/**
 * puts2 - this function return the legth of a string
 *
 * @str: value
 *
 */
void puts2(char *str)
{
	int i = 0;
	int b = 0;
	int m = 0;
	int dob = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	while (str[i] != '\0')
	{
		dob = i + b;
		if (dob <= m)
		{
			_putchar(str[dob]);
		}
		i++;
		b++;
	}
	_putchar('\n');
}
