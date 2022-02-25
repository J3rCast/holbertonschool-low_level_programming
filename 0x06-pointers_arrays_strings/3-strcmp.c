#include "main.h"
/**
 * _strcmp - this function concatnates two strings
 *
 * @s1: dest string
 * @s2: src string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i] && (s1[i] == '\0' && s2[i] == '\0'))
		{
			result = 0;
		}
		else if (s1[i] < s2[i])
		{
			result = result - s2[i];
		}
		else if (s1[i] > s2[i])
		{
			result = result + s1[i];
		}
		i++;
	}

	return (result);
}
