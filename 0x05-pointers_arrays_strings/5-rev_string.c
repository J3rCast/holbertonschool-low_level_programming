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
	int m = 0;
	int i = 0;

	while (n != '\0')
	{
		if (n != '\n')
		{
			n = s[i];
			i++;
		}
	}
	while (i > 1)
	{
		s[i] = s[m];
		i--;
		m++;
	}
}
