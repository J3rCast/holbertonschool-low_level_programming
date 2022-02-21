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

	while (s[i] != '\0')
	{
		if (s[i] != '\n')
		{
			i++;
		}
	}
	for (m = 0; m < i; m++)
	{
		s[i] = s[m];
		i--;
	}
}
