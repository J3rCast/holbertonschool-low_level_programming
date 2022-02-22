#include "main.h"
/**
 * print_rev - this function return the legth of a string
 *
 * @s: value
 *
 */
void rev_string(char *s)
{
	char charAc;
	int i = 0;
	int j = 0;
	int p;

	while (s[i] != '\0')
	{
		i++;
	}
	p = i - j;
	while (s[j] != '\0')
	{
		charAc = s[j];
		s[j] = s[i];
		s[i] = charAc;
		i--;
		j++;
	}
}

