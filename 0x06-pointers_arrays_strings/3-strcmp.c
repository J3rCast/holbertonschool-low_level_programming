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
	if (s1[0] > s2[0])
	{
		return (1);
	}
	else if (s2[0] > s1[0])
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
