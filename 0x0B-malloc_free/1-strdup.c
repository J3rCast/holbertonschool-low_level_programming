#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 *
 * @str: string
 *
 * Return: char
 */

char *_strdup(char *str)
{
	char *x;
	char n;
	int i;
	int l;

	for (l = 0; n; l++)
	{
		n = str[l];
	}
	if (str == NULL)
	{
		return (NULL);
	}
	x = malloc(sizeof(char) * l);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
