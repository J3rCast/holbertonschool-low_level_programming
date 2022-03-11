#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: elements
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	m = malloc(sizeof(size) * nmemb);
	if (m == NULL)
		return (NULL);
	return (m)
}
