#include "main.h"
/**
 * _strcmp - this function compares two strings
 *
 * @s1: dest string
 * @s2: src string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i]; i++)
	{
		if(s1[i] == s2[i])
			result = 0;
		else if (s1[i] != s2[i])
			result = s1[i] - s2[i];
	}
	return (result);
}
