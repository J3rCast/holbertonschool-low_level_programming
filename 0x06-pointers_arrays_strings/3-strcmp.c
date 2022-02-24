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
	if (s1[0] > '0')
	{
		return (1);
	}
	else if (s1[0] < '0')
	{
		return (-1);
	}
	return (0);
}
