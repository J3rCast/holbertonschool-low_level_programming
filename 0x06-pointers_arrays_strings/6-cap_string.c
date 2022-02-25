#include "main.h"
/**
 * _strcmp - this function concatnates two strings
 *
 * @s1: dest string
 * @s2: src string
 *
 * Return: 0
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == s[0] && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		if (s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == ',' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == ';' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '.' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '!' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '?' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '\"' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '(' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == ')' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '{' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '}' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '\n' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i - 1] == '\t' && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else
		continue;
	}
	return (s);
}
