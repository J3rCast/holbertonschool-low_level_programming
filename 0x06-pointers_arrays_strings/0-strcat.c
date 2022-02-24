#include "main.h"
/**
 * _strcat - this function concatnates two strings
 *
 * @dest: dest string
 * @src: src string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int length2 = 0;

	while (dest[length] != '\0')
	{
		length++;
		if (dest[length] == '\0')
		{
			while (src[length2] != '\0')
			{
				dest[length] = src[length2];
				length++;
				length2++;
			}
			dest[length] = '\0';
		}
	}
	return (dest);
}
