#include "main.h"
#include <stdlib.h>
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
	char *x[size] = c;

	if (size == 0)
	{
		return (NULL);
	}
	return (c);
}
