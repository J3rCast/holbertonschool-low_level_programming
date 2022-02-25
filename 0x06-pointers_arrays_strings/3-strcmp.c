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
	while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
	{
		s1++;
		s2++;
	}
	if(*s1 == *s2)
	{
		return 0; // strings are identical
	}
	else
	{
		return *s1 - *s2;
	}

}
