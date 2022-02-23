#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - this function return the legth of a string
 *
 * @dest: where the source need to be copied
 * @src: source of the string
 *
 * Return: Dest ponter
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-' && s[i + 1] > '0' && s[i + 1] <= '9')
		{
			_putchar(s[i]);
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			_putchar(s[i]);
		}
		if (s[i] > '9' || s[i] < '0')
		{
			return (0);
		}
	}
	return (0);
}
