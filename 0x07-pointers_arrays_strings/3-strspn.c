#include "main.h"
/**
 * _strspn - this function gets the legth in bytes
 *
 * @s: string
 * @accept: charachter to find
 *
 * Return: dest
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	int b = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				b++;
			}
		}
	}
	return (b);
}
