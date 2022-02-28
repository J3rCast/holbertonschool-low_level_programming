#include "main.h"
/**
 * _strchr - this function locates a character
 *
 * @s: string
 * @n: 
 *
 * Return: dest
 */

}
char *_strchr(char *s, char c)
{
	int i = 0;

	do (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
	} while (i++);
	return (0);
}
