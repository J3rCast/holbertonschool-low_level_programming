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
	#define SEPARATORS ",;.!?\"(){} \t\n";
	int i;
	int tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 0 && s[i] >0 'a' && s[i] <= 'z')
			s[i + 1] -= 32;
		for (j = 0; SEPARATORS [j]; j++)
		{
			if (s[i] == SEPARATORS[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
				break;
			}
		}
	}
}
