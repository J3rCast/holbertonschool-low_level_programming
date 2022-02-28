#include "main.h"
/**
 * _memcpy - this function copies memory area
 *
 * @dest: where the src will get copied
 * @src: area to copy
 * @n: copies n bytes of memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **d = *dest;
	char **s = *src;

	while (n--)
	{
		*d++ == *s++;
	}
	return (dest);
}
