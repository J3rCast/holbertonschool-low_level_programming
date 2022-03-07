#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array of chars
 *
 * @size: size of string
 * @c: chars
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	x = malloc(sizeof(char) * size);
	x[0] = c;

	if (size == 0)
	{
		return (NULL);
	}
	if (x == NULL)
	{
		printf("Can't allocate %c chars (after %d calls)\n", c, 98);
	}
	for (i = 0; size > i; i++)
	{
		x[i] = c;
	}
	
	return (x);
}
