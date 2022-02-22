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

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[j] != s[0])
	{
		charAc = s[j];
		s[j] = s[i];
		s[i] = charAc;
		i--;
		j++;
	}
}

