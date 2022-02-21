#include "main.h"
/**
 * print_rev - this function return the legth of a string
 *
 * @s: value
 *
 */
void rev_string(char *s)
{
	int m = 0;
	int i = 0;
	int p = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	p = i - 1;
	for (m = 0; m < i; m++)
	{
		s[m] = s[p];
		p--;
	}
}
