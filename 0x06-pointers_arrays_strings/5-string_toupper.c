#include "main.h"
/**
 * _toupper - this function pass to upper
 *
 * @s1: dest string
 * @s2: src string
 *
 * Return: 0
 */
char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && <= 'z')
		{
			return (string[i] - 32);
		}
	}
}