#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _memset - this function fills n bytes
 *
 * @s: s value of the memory area that has to get fills
 * @b: constat
 * @n: fills n bytes of memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
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

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(sizeof(size) * nmemb);
	if (m == NULL)
		return (NULL);
	_memset(m, 0x00, size);
	return (m);
}
