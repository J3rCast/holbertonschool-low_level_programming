#include "main.h"
/**
 * _strchr - this function locates a character
 *
 * @s: string
 * @c: charachter to find 
 *
 * Return: dest
 */

}
char *_strchr(char *s, char c)
{
	int i = 0;

	do
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	} while (i++);
	return (0);
}
