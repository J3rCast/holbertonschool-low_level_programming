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
	int i;
	int result;

	for (i = 0; s1[i] == s2[i] || s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			result = 1;
			return (result);
		}
		else if (s1[i] < s2[i])
		{
			result = -1;
			return (result);
		}
		else if (s1[i] == s2[i])
		{
			result = 0;
			return (result);
		}
	}
}
